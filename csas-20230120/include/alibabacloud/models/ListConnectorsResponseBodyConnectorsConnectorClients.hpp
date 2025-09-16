// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODYCONNECTORSCONNECTORCLIENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTCONNECTORSRESPONSEBODYCONNECTORSCONNECTORCLIENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListConnectorsResponseBodyConnectorsConnectorClients : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConnectorsResponseBodyConnectorsConnectorClients& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
    };
    friend void from_json(const Darabonba::Json& j, ListConnectorsResponseBodyConnectorsConnectorClients& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
    };
    ListConnectorsResponseBodyConnectorsConnectorClients() = default ;
    ListConnectorsResponseBodyConnectorsConnectorClients(const ListConnectorsResponseBodyConnectorsConnectorClients &) = default ;
    ListConnectorsResponseBodyConnectorsConnectorClients(ListConnectorsResponseBodyConnectorsConnectorClients &&) = default ;
    ListConnectorsResponseBodyConnectorsConnectorClients(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConnectorsResponseBodyConnectorsConnectorClients() = default ;
    ListConnectorsResponseBodyConnectorsConnectorClients& operator=(const ListConnectorsResponseBodyConnectorsConnectorClients &) = default ;
    ListConnectorsResponseBodyConnectorsConnectorClients& operator=(ListConnectorsResponseBodyConnectorsConnectorClients &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionStatus_ != nullptr
        && this->devTag_ != nullptr && this->hostname_ != nullptr && this->publicIp_ != nullptr; };
    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline ListConnectorsResponseBodyConnectorsConnectorClients& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string devTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline ListConnectorsResponseBodyConnectorsConnectorClients& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListConnectorsResponseBodyConnectorsConnectorClients& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline ListConnectorsResponseBodyConnectorsConnectorClients& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


  protected:
    // Connection status between ConnectorClient and ConnectorServer.
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // Unique device identifier for the ConnectorClient.
    std::shared_ptr<string> devTag_ = nullptr;
    // Hostname of the ConnectorClient.
    std::shared_ptr<string> hostname_ = nullptr;
    // Public IP of the ConnectorClient.
    std::shared_ptr<string> publicIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
