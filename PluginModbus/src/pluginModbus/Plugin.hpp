#ifndef CUTEHMI_PLUGINMODBUS_SRC_PLUGINMODBUS_PLUGIN_HPP
#define CUTEHMI_PLUGINMODBUS_SRC_PLUGINMODBUS_PLUGIN_HPP

#include <plugin/IPLCClient.hpp>
#include <plugin/IXMLBackend.hpp>
#include <modbus/AbstractConnection.hpp>

#include <QObject>

#include <memory>

namespace cutehmi {
namespace pluginModbus {

class Plugin:
	public QObject,
	public plugin::IPLCClient,
	public plugin::IXMLBackend
{
	Q_OBJECT
	Q_PLUGIN_METADATA(IID "CuteHMI.PluginModbus" FILE "PluginModbus.json")
	Q_INTERFACES(cutehmi::plugin::IPLCClient cutehmi::plugin::IXMLBackend)

	public:
		base::Error readXML(QXmlStreamReader & xmlReader, base::ProjectModel::Node & node) override;

		base::Error writeXML(QXmlStreamWriter & xmlWriter) const override;

	private:
		base::Error tcpConnectionFromXML(QXmlStreamReader & xmlReader, std::unique_ptr<modbus::AbstractConnection> & connection);

		base::Error rtuConnectionFromXML(QXmlStreamReader & xmlReader, std::unique_ptr<modbus::AbstractConnection> & connection);

		base::Error connectionTimeoutsFromXML(QXmlStreamReader & xmlReader, modbus::AbstractConnection::Timeout & byteTimeout, modbus::AbstractConnection::Timeout & responseTimeout);

		base::Error timeoutFromString(const QString & timeoutString, modbus::AbstractConnection::Timeout & timeout);

//		metaData() const;
};

}
}

#endif

//(c)MP: Copyright © 2016, Michal Policht. All rights reserved.
//(c)MP: This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0. If a copy of the MPL was not distributed with this file, You can obtain one at http://mozilla.org/MPL/2.0/.