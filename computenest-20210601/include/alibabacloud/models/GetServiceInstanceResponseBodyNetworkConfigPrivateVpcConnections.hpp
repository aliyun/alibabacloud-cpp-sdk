// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIGPRIVATEVPCCONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEINSTANCERESPONSEBODYNETWORKCONFIGPRIVATEVPCCONNECTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectionConfigs, connectionConfigs_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(PrivateZoneId, privateZoneId_);
      DARABONBA_PTR_TO_JSON(PrivateZoneName, privateZoneName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectionConfigs, connectionConfigs_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(PrivateZoneId, privateZoneId_);
      DARABONBA_PTR_FROM_JSON(PrivateZoneName, privateZoneName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections() = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections(const GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections &) = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections(GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections &&) = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections() = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& operator=(const GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections &) = default ;
    GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& operator=(GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->connectionConfigs_ != nullptr
        && this->endpointId_ != nullptr && this->privateZoneId_ != nullptr && this->privateZoneName_ != nullptr && this->regionId_ != nullptr; };
    // connectionConfigs Field Functions 
    bool hasConnectionConfigs() const { return this->connectionConfigs_ != nullptr;};
    void deleteConnectionConfigs() { this->connectionConfigs_ = nullptr;};
    inline const vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs> & connectionConfigs() const { DARABONBA_PTR_GET_CONST(connectionConfigs_, vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs>) };
    inline vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs> connectionConfigs() { DARABONBA_PTR_GET(connectionConfigs_, vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs>) };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& setConnectionConfigs(const vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs> & connectionConfigs) { DARABONBA_PTR_SET_VALUE(connectionConfigs_, connectionConfigs) };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& setConnectionConfigs(vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs> && connectionConfigs) { DARABONBA_PTR_SET_RVALUE(connectionConfigs_, connectionConfigs) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // privateZoneId Field Functions 
    bool hasPrivateZoneId() const { return this->privateZoneId_ != nullptr;};
    void deletePrivateZoneId() { this->privateZoneId_ = nullptr;};
    inline string privateZoneId() const { DARABONBA_PTR_GET_DEFAULT(privateZoneId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& setPrivateZoneId(string privateZoneId) { DARABONBA_PTR_SET_VALUE(privateZoneId_, privateZoneId) };


    // privateZoneName Field Functions 
    bool hasPrivateZoneName() const { return this->privateZoneName_ != nullptr;};
    void deletePrivateZoneName() { this->privateZoneName_ = nullptr;};
    inline string privateZoneName() const { DARABONBA_PTR_GET_DEFAULT(privateZoneName_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& setPrivateZoneName(string privateZoneName) { DARABONBA_PTR_SET_VALUE(privateZoneName_, privateZoneName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnections& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The network configurations, which are mainly used for private connections.
    std::shared_ptr<vector<Models::GetServiceInstanceResponseBodyNetworkConfigPrivateVpcConnectionsConnectionConfigs>> connectionConfigs_ = nullptr;
    // The endpoint ID of the private connection.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The ID of the private zone of the custom private domain name.
    std::shared_ptr<string> privateZoneId_ = nullptr;
    // The custom domain name.
    std::shared_ptr<string> privateZoneName_ = nullptr;
    // The region ID of the endpoint of the PrivateLink connection.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
