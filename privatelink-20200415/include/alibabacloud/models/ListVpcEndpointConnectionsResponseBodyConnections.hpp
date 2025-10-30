// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTCONNECTIONSRESPONSEBODYCONNECTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTCONNECTIONSRESPONSEBODYCONNECTIONS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcEndpointConnectionsResponseBodyConnectionsZones.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointConnectionsResponseBodyConnections : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointConnectionsResponseBodyConnections& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_TO_JSON(EndpointOwnerId, endpointOwnerId_);
      DARABONBA_PTR_TO_JSON(EndpointVpcId, endpointVpcId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointConnectionsResponseBodyConnections& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
      DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
      DARABONBA_PTR_FROM_JSON(EndpointOwnerId, endpointOwnerId_);
      DARABONBA_PTR_FROM_JSON(EndpointVpcId, endpointVpcId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListVpcEndpointConnectionsResponseBodyConnections() = default ;
    ListVpcEndpointConnectionsResponseBodyConnections(const ListVpcEndpointConnectionsResponseBodyConnections &) = default ;
    ListVpcEndpointConnectionsResponseBodyConnections(ListVpcEndpointConnectionsResponseBodyConnections &&) = default ;
    ListVpcEndpointConnectionsResponseBodyConnections(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointConnectionsResponseBodyConnections() = default ;
    ListVpcEndpointConnectionsResponseBodyConnections& operator=(const ListVpcEndpointConnectionsResponseBodyConnections &) = default ;
    ListVpcEndpointConnectionsResponseBodyConnections& operator=(ListVpcEndpointConnectionsResponseBodyConnections &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && return this->connectionStatus_ == nullptr && return this->endpointId_ == nullptr && return this->endpointOwnerId_ == nullptr && return this->endpointVpcId_ == nullptr && return this->modifiedTime_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->resourceOwner_ == nullptr && return this->serviceId_ == nullptr && return this->zones_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // connectionStatus Field Functions 
    bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
    void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
    inline string connectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


    // endpointId Field Functions 
    bool hasEndpointId() const { return this->endpointId_ != nullptr;};
    void deleteEndpointId() { this->endpointId_ = nullptr;};
    inline string endpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


    // endpointOwnerId Field Functions 
    bool hasEndpointOwnerId() const { return this->endpointOwnerId_ != nullptr;};
    void deleteEndpointOwnerId() { this->endpointOwnerId_ = nullptr;};
    inline int64_t endpointOwnerId() const { DARABONBA_PTR_GET_DEFAULT(endpointOwnerId_, 0L) };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setEndpointOwnerId(int64_t endpointOwnerId) { DARABONBA_PTR_SET_VALUE(endpointOwnerId_, endpointOwnerId) };


    // endpointVpcId Field Functions 
    bool hasEndpointVpcId() const { return this->endpointVpcId_ != nullptr;};
    void deleteEndpointVpcId() { this->endpointVpcId_ = nullptr;};
    inline string endpointVpcId() const { DARABONBA_PTR_GET_DEFAULT(endpointVpcId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setEndpointVpcId(string endpointVpcId) { DARABONBA_PTR_SET_VALUE(endpointVpcId_, endpointVpcId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwner Field Functions 
    bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
    void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
    inline bool resourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, false) };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setResourceOwner(bool resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<Models::ListVpcEndpointConnectionsResponseBodyConnectionsZones> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Models::ListVpcEndpointConnectionsResponseBodyConnectionsZones>) };
    inline vector<Models::ListVpcEndpointConnectionsResponseBodyConnectionsZones> zones() { DARABONBA_PTR_GET(zones_, vector<Models::ListVpcEndpointConnectionsResponseBodyConnectionsZones>) };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setZones(const vector<Models::ListVpcEndpointConnectionsResponseBodyConnectionsZones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListVpcEndpointConnectionsResponseBodyConnections& setZones(vector<Models::ListVpcEndpointConnectionsResponseBodyConnectionsZones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The bandwidth of the endpoint connection. Valid values: **1024 to 10240**. Unit: Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The state of the endpoint connection. Valid values:
    // 
    // *   **Pending**: The connection is being modified.
    // *   **Connecting**: The connection is being established.
    // *   **Connected**: The connection is established.
    // *   **Disconnecting**: The endpoint is being disconnected from the endpoint service.
    // *   **Disconnected**: The endpoint is disconnected from the endpoint service.
    // *   **Deleting**: The connection is being deleted.
    // *   **ServiceDeleted**: The corresponding endpoint service has been deleted.
    std::shared_ptr<string> connectionStatus_ = nullptr;
    // The endpoint ID.
    std::shared_ptr<string> endpointId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the endpoint belongs.
    std::shared_ptr<int64_t> endpointOwnerId_ = nullptr;
    // The ID of the virtual private cloud (VPC) to which the endpoint belongs.
    std::shared_ptr<string> endpointVpcId_ = nullptr;
    // The time when the endpoint connection was modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the resource group to which the endpoint belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the endpoint and the endpoint service belong to the same Alibaba Cloud account. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> resourceOwner_ = nullptr;
    // The endpoint service ID.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The zones.
    std::shared_ptr<vector<Models::ListVpcEndpointConnectionsResponseBodyConnectionsZones>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
