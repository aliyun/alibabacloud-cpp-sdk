// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTCONNECTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTCONNECTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointConnectionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointConnectionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Connections, connections_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointConnectionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Connections, connections_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListVpcEndpointConnectionsResponseBody() = default ;
    ListVpcEndpointConnectionsResponseBody(const ListVpcEndpointConnectionsResponseBody &) = default ;
    ListVpcEndpointConnectionsResponseBody(ListVpcEndpointConnectionsResponseBody &&) = default ;
    ListVpcEndpointConnectionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointConnectionsResponseBody() = default ;
    ListVpcEndpointConnectionsResponseBody& operator=(const ListVpcEndpointConnectionsResponseBody &) = default ;
    ListVpcEndpointConnectionsResponseBody& operator=(ListVpcEndpointConnectionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Connections : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Connections& obj) { 
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_TO_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_TO_JSON(EndpointOwnerId, endpointOwnerId_);
        DARABONBA_PTR_TO_JSON(EndpointRegionId, endpointRegionId_);
        DARABONBA_PTR_TO_JSON(EndpointVpcId, endpointVpcId_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourceOwner, resourceOwner_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceRegionId, serviceRegionId_);
        DARABONBA_PTR_TO_JSON(TrafficControlMode, trafficControlMode_);
        DARABONBA_PTR_TO_JSON(Zones, zones_);
      };
      friend void from_json(const Darabonba::Json& j, Connections& obj) { 
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(ConnectionStatus, connectionStatus_);
        DARABONBA_PTR_FROM_JSON(EndpointId, endpointId_);
        DARABONBA_PTR_FROM_JSON(EndpointOwnerId, endpointOwnerId_);
        DARABONBA_PTR_FROM_JSON(EndpointRegionId, endpointRegionId_);
        DARABONBA_PTR_FROM_JSON(EndpointVpcId, endpointVpcId_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourceOwner, resourceOwner_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceRegionId, serviceRegionId_);
        DARABONBA_PTR_FROM_JSON(TrafficControlMode, trafficControlMode_);
        DARABONBA_PTR_FROM_JSON(Zones, zones_);
      };
      Connections() = default ;
      Connections(const Connections &) = default ;
      Connections(Connections &&) = default ;
      Connections(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Connections() = default ;
      Connections& operator=(const Connections &) = default ;
      Connections& operator=(Connections &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Zones : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zones& obj) { 
          DARABONBA_PTR_TO_JSON(EniId, eniId_);
          DARABONBA_PTR_TO_JSON(ReplacedEniId, replacedEniId_);
          DARABONBA_PTR_TO_JSON(ReplacedResourceId, replacedResourceId_);
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(ZoneDomain, zoneDomain_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneStatus, zoneStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Zones& obj) { 
          DARABONBA_PTR_FROM_JSON(EniId, eniId_);
          DARABONBA_PTR_FROM_JSON(ReplacedEniId, replacedEniId_);
          DARABONBA_PTR_FROM_JSON(ReplacedResourceId, replacedResourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneDomain, zoneDomain_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneStatus, zoneStatus_);
        };
        Zones() = default ;
        Zones(const Zones &) = default ;
        Zones(Zones &&) = default ;
        Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Zones() = default ;
        Zones& operator=(const Zones &) = default ;
        Zones& operator=(Zones &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eniId_ == nullptr
        && this->replacedEniId_ == nullptr && this->replacedResourceId_ == nullptr && this->resourceId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneDomain_ == nullptr
        && this->zoneId_ == nullptr && this->zoneStatus_ == nullptr; };
        // eniId Field Functions 
        bool hasEniId() const { return this->eniId_ != nullptr;};
        void deleteEniId() { this->eniId_ = nullptr;};
        inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
        inline Zones& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


        // replacedEniId Field Functions 
        bool hasReplacedEniId() const { return this->replacedEniId_ != nullptr;};
        void deleteReplacedEniId() { this->replacedEniId_ = nullptr;};
        inline string getReplacedEniId() const { DARABONBA_PTR_GET_DEFAULT(replacedEniId_, "") };
        inline Zones& setReplacedEniId(string replacedEniId) { DARABONBA_PTR_SET_VALUE(replacedEniId_, replacedEniId) };


        // replacedResourceId Field Functions 
        bool hasReplacedResourceId() const { return this->replacedResourceId_ != nullptr;};
        void deleteReplacedResourceId() { this->replacedResourceId_ = nullptr;};
        inline string getReplacedResourceId() const { DARABONBA_PTR_GET_DEFAULT(replacedResourceId_, "") };
        inline Zones& setReplacedResourceId(string replacedResourceId) { DARABONBA_PTR_SET_VALUE(replacedResourceId_, replacedResourceId) };


        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline Zones& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Zones& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneDomain Field Functions 
        bool hasZoneDomain() const { return this->zoneDomain_ != nullptr;};
        void deleteZoneDomain() { this->zoneDomain_ = nullptr;};
        inline string getZoneDomain() const { DARABONBA_PTR_GET_DEFAULT(zoneDomain_, "") };
        inline Zones& setZoneDomain(string zoneDomain) { DARABONBA_PTR_SET_VALUE(zoneDomain_, zoneDomain) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        // zoneStatus Field Functions 
        bool hasZoneStatus() const { return this->zoneStatus_ != nullptr;};
        void deleteZoneStatus() { this->zoneStatus_ = nullptr;};
        inline string getZoneStatus() const { DARABONBA_PTR_GET_DEFAULT(zoneStatus_, "") };
        inline Zones& setZoneStatus(string zoneStatus) { DARABONBA_PTR_SET_VALUE(zoneStatus_, zoneStatus) };


      protected:
        // The endpoint ENI ID.
        shared_ptr<string> eniId_ {};
        // The ID of the replaced endpoint ENI in smooth migration scenarios.
        shared_ptr<string> replacedEniId_ {};
        // The ID of the replaced service resource in smooth migration scenarios.
        shared_ptr<string> replacedResourceId_ {};
        // The service resource ID.
        shared_ptr<string> resourceId_ {};
        // The ID of the vSwitch to which the endpoint belongs.
        shared_ptr<string> vSwitchId_ {};
        // The domain name of the zone.
        shared_ptr<string> zoneDomain_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
        // The state of the zone. Valid values:
        // 
        // *   **Creating**: The zone is being created.
        // *   **Wait**: The zone is to be connected.
        // *   **Connected**: The zone is connected.
        // *   **Deleting**: The zone is being deleted.
        // *   **Disconnecting**: The zone is being disconnected.
        // *   **Disconnected**: The zone is disconnected.
        // *   **Connecting**: The zone is being connected.
        // *   **Migrating**: The zone is being migrated.
        // *   **Migrated**: The zone is migrated.
        shared_ptr<string> zoneStatus_ {};
      };

      virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->connectionStatus_ == nullptr && this->endpointId_ == nullptr && this->endpointOwnerId_ == nullptr && this->endpointRegionId_ == nullptr && this->endpointVpcId_ == nullptr
        && this->modifiedTime_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwner_ == nullptr && this->serviceId_ == nullptr && this->serviceRegionId_ == nullptr
        && this->trafficControlMode_ == nullptr && this->zones_ == nullptr; };
      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline Connections& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // connectionStatus Field Functions 
      bool hasConnectionStatus() const { return this->connectionStatus_ != nullptr;};
      void deleteConnectionStatus() { this->connectionStatus_ = nullptr;};
      inline string getConnectionStatus() const { DARABONBA_PTR_GET_DEFAULT(connectionStatus_, "") };
      inline Connections& setConnectionStatus(string connectionStatus) { DARABONBA_PTR_SET_VALUE(connectionStatus_, connectionStatus) };


      // endpointId Field Functions 
      bool hasEndpointId() const { return this->endpointId_ != nullptr;};
      void deleteEndpointId() { this->endpointId_ = nullptr;};
      inline string getEndpointId() const { DARABONBA_PTR_GET_DEFAULT(endpointId_, "") };
      inline Connections& setEndpointId(string endpointId) { DARABONBA_PTR_SET_VALUE(endpointId_, endpointId) };


      // endpointOwnerId Field Functions 
      bool hasEndpointOwnerId() const { return this->endpointOwnerId_ != nullptr;};
      void deleteEndpointOwnerId() { this->endpointOwnerId_ = nullptr;};
      inline int64_t getEndpointOwnerId() const { DARABONBA_PTR_GET_DEFAULT(endpointOwnerId_, 0L) };
      inline Connections& setEndpointOwnerId(int64_t endpointOwnerId) { DARABONBA_PTR_SET_VALUE(endpointOwnerId_, endpointOwnerId) };


      // endpointRegionId Field Functions 
      bool hasEndpointRegionId() const { return this->endpointRegionId_ != nullptr;};
      void deleteEndpointRegionId() { this->endpointRegionId_ = nullptr;};
      inline string getEndpointRegionId() const { DARABONBA_PTR_GET_DEFAULT(endpointRegionId_, "") };
      inline Connections& setEndpointRegionId(string endpointRegionId) { DARABONBA_PTR_SET_VALUE(endpointRegionId_, endpointRegionId) };


      // endpointVpcId Field Functions 
      bool hasEndpointVpcId() const { return this->endpointVpcId_ != nullptr;};
      void deleteEndpointVpcId() { this->endpointVpcId_ = nullptr;};
      inline string getEndpointVpcId() const { DARABONBA_PTR_GET_DEFAULT(endpointVpcId_, "") };
      inline Connections& setEndpointVpcId(string endpointVpcId) { DARABONBA_PTR_SET_VALUE(endpointVpcId_, endpointVpcId) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Connections& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Connections& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourceOwner Field Functions 
      bool hasResourceOwner() const { return this->resourceOwner_ != nullptr;};
      void deleteResourceOwner() { this->resourceOwner_ = nullptr;};
      inline bool getResourceOwner() const { DARABONBA_PTR_GET_DEFAULT(resourceOwner_, false) };
      inline Connections& setResourceOwner(bool resourceOwner) { DARABONBA_PTR_SET_VALUE(resourceOwner_, resourceOwner) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline Connections& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceRegionId Field Functions 
      bool hasServiceRegionId() const { return this->serviceRegionId_ != nullptr;};
      void deleteServiceRegionId() { this->serviceRegionId_ = nullptr;};
      inline string getServiceRegionId() const { DARABONBA_PTR_GET_DEFAULT(serviceRegionId_, "") };
      inline Connections& setServiceRegionId(string serviceRegionId) { DARABONBA_PTR_SET_VALUE(serviceRegionId_, serviceRegionId) };


      // trafficControlMode Field Functions 
      bool hasTrafficControlMode() const { return this->trafficControlMode_ != nullptr;};
      void deleteTrafficControlMode() { this->trafficControlMode_ = nullptr;};
      inline string getTrafficControlMode() const { DARABONBA_PTR_GET_DEFAULT(trafficControlMode_, "") };
      inline Connections& setTrafficControlMode(string trafficControlMode) { DARABONBA_PTR_SET_VALUE(trafficControlMode_, trafficControlMode) };


      // zones Field Functions 
      bool hasZones() const { return this->zones_ != nullptr;};
      void deleteZones() { this->zones_ = nullptr;};
      inline const vector<Connections::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<Connections::Zones>) };
      inline vector<Connections::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<Connections::Zones>) };
      inline Connections& setZones(const vector<Connections::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
      inline Connections& setZones(vector<Connections::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


    protected:
      // The bandwidth of the endpoint connection. Valid values: **1024 to 10240**. Unit: Mbit/s.
      shared_ptr<int32_t> bandwidth_ {};
      // The state of the endpoint connection. Valid values:
      // 
      // *   **Pending**: The connection is being modified.
      // *   **Connecting**: The connection is being established.
      // *   **Connected**: The connection is established.
      // *   **Disconnecting**: The endpoint is being disconnected from the endpoint service.
      // *   **Disconnected**: The endpoint is disconnected from the endpoint service.
      // *   **Deleting**: The connection is being deleted.
      // *   **ServiceDeleted**: The corresponding endpoint service has been deleted.
      shared_ptr<string> connectionStatus_ {};
      // The endpoint ID.
      shared_ptr<string> endpointId_ {};
      // The ID of the Alibaba Cloud account to which the endpoint belongs.
      shared_ptr<int64_t> endpointOwnerId_ {};
      shared_ptr<string> endpointRegionId_ {};
      // The ID of the virtual private cloud (VPC) to which the endpoint belongs.
      shared_ptr<string> endpointVpcId_ {};
      // The time when the endpoint connection was modified.
      shared_ptr<string> modifiedTime_ {};
      // The ID of the resource group to which the endpoint belongs.
      shared_ptr<string> resourceGroupId_ {};
      // Indicates whether the endpoint and the endpoint service belong to the same Alibaba Cloud account. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> resourceOwner_ {};
      // The endpoint service ID.
      shared_ptr<string> serviceId_ {};
      shared_ptr<string> serviceRegionId_ {};
      shared_ptr<string> trafficControlMode_ {};
      // The zones.
      shared_ptr<vector<Connections::Zones>> zones_ {};
    };

    virtual bool empty() const override { return this->connections_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // connections Field Functions 
    bool hasConnections() const { return this->connections_ != nullptr;};
    void deleteConnections() { this->connections_ = nullptr;};
    inline const vector<ListVpcEndpointConnectionsResponseBody::Connections> & getConnections() const { DARABONBA_PTR_GET_CONST(connections_, vector<ListVpcEndpointConnectionsResponseBody::Connections>) };
    inline vector<ListVpcEndpointConnectionsResponseBody::Connections> getConnections() { DARABONBA_PTR_GET(connections_, vector<ListVpcEndpointConnectionsResponseBody::Connections>) };
    inline ListVpcEndpointConnectionsResponseBody& setConnections(const vector<ListVpcEndpointConnectionsResponseBody::Connections> & connections) { DARABONBA_PTR_SET_VALUE(connections_, connections) };
    inline ListVpcEndpointConnectionsResponseBody& setConnections(vector<ListVpcEndpointConnectionsResponseBody::Connections> && connections) { DARABONBA_PTR_SET_RVALUE(connections_, connections) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointConnectionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointConnectionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointConnectionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListVpcEndpointConnectionsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The endpoint connections.
    shared_ptr<vector<ListVpcEndpointConnectionsResponseBody::Connections>> connections_ {};
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
