// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteEntryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteEntrys, routeEntrys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteEntryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteEntrys, routeEntrys_);
    };
    DescribeRouteEntryListResponseBody() = default ;
    DescribeRouteEntryListResponseBody(const DescribeRouteEntryListResponseBody &) = default ;
    DescribeRouteEntryListResponseBody(DescribeRouteEntryListResponseBody &&) = default ;
    DescribeRouteEntryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteEntryListResponseBody() = default ;
    DescribeRouteEntryListResponseBody& operator=(const DescribeRouteEntryListResponseBody &) = default ;
    DescribeRouteEntryListResponseBody& operator=(DescribeRouteEntryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteEntrys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteEntrys& obj) { 
        DARABONBA_PTR_TO_JSON(RouteEntry, routeEntry_);
      };
      friend void from_json(const Darabonba::Json& j, RouteEntrys& obj) { 
        DARABONBA_PTR_FROM_JSON(RouteEntry, routeEntry_);
      };
      RouteEntrys() = default ;
      RouteEntrys(const RouteEntrys &) = default ;
      RouteEntrys(RouteEntrys &&) = default ;
      RouteEntrys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteEntrys() = default ;
      RouteEntrys& operator=(const RouteEntrys &) = default ;
      RouteEntrys& operator=(RouteEntrys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RouteEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouteEntry& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
          DARABONBA_PTR_TO_JSON(Origin, origin_);
          DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
          DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
          DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, RouteEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
          DARABONBA_PTR_FROM_JSON(Origin, origin_);
          DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
          DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
          DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        RouteEntry() = default ;
        RouteEntry(const RouteEntry &) = default ;
        RouteEntry(RouteEntry &&) = default ;
        RouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouteEntry() = default ;
        RouteEntry& operator=(const RouteEntry &) = default ;
        RouteEntry& operator=(RouteEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NextHops : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NextHops& obj) { 
            DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
          };
          friend void from_json(const Darabonba::Json& j, NextHops& obj) { 
            DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
          };
          NextHops() = default ;
          NextHops(const NextHops &) = default ;
          NextHops(NextHops &&) = default ;
          NextHops(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NextHops() = default ;
          NextHops& operator=(const NextHops &) = default ;
          NextHops& operator=(NextHops &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class NextHop : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NextHop& obj) { 
              DARABONBA_PTR_TO_JSON(Enabled, enabled_);
              DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
              DARABONBA_PTR_TO_JSON(NextHopRegionId, nextHopRegionId_);
              DARABONBA_PTR_TO_JSON(NextHopRelatedInfo, nextHopRelatedInfo_);
              DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
              DARABONBA_PTR_TO_JSON(Weight, weight_);
            };
            friend void from_json(const Darabonba::Json& j, NextHop& obj) { 
              DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
              DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
              DARABONBA_PTR_FROM_JSON(NextHopRegionId, nextHopRegionId_);
              DARABONBA_PTR_FROM_JSON(NextHopRelatedInfo, nextHopRelatedInfo_);
              DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
              DARABONBA_PTR_FROM_JSON(Weight, weight_);
            };
            NextHop() = default ;
            NextHop(const NextHop &) = default ;
            NextHop(NextHop &&) = default ;
            NextHop(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~NextHop() = default ;
            NextHop& operator=(const NextHop &) = default ;
            NextHop& operator=(NextHop &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class NextHopRelatedInfo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const NextHopRelatedInfo& obj) { 
                DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
                DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
                DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              };
              friend void from_json(const Darabonba::Json& j, NextHopRelatedInfo& obj) { 
                DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
                DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
                DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              };
              NextHopRelatedInfo() = default ;
              NextHopRelatedInfo(const NextHopRelatedInfo &) = default ;
              NextHopRelatedInfo(NextHopRelatedInfo &&) = default ;
              NextHopRelatedInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~NextHopRelatedInfo() = default ;
              NextHopRelatedInfo& operator=(const NextHopRelatedInfo &) = default ;
              NextHopRelatedInfo& operator=(NextHopRelatedInfo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceType_ == nullptr && this->regionId_ == nullptr; };
              // instanceId Field Functions 
              bool hasInstanceId() const { return this->instanceId_ != nullptr;};
              void deleteInstanceId() { this->instanceId_ = nullptr;};
              inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
              inline NextHopRelatedInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


              // instanceType Field Functions 
              bool hasInstanceType() const { return this->instanceType_ != nullptr;};
              void deleteInstanceType() { this->instanceType_ = nullptr;};
              inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
              inline NextHopRelatedInfo& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


              // regionId Field Functions 
              bool hasRegionId() const { return this->regionId_ != nullptr;};
              void deleteRegionId() { this->regionId_ = nullptr;};
              inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
              inline NextHopRelatedInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            protected:
              // The ID of the instance that is associated with the next hop.
              shared_ptr<string> instanceId_ {};
              // The type of the instance associated with the next hop. Valid values:
              // 
              // *   **VPC**: a VPC
              // *   **VBR**: a VBR
              // *   **PCONN**: an Express Connect circuit
              shared_ptr<string> instanceType_ {};
              // The region ID of the instance associated with the next hop. Valid values:
              shared_ptr<string> regionId_ {};
            };

            virtual bool empty() const override { return this->enabled_ == nullptr
        && this->nextHopId_ == nullptr && this->nextHopRegionId_ == nullptr && this->nextHopRelatedInfo_ == nullptr && this->nextHopType_ == nullptr && this->weight_ == nullptr; };
            // enabled Field Functions 
            bool hasEnabled() const { return this->enabled_ != nullptr;};
            void deleteEnabled() { this->enabled_ = nullptr;};
            inline int32_t getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
            inline NextHop& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


            // nextHopId Field Functions 
            bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
            void deleteNextHopId() { this->nextHopId_ = nullptr;};
            inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
            inline NextHop& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


            // nextHopRegionId Field Functions 
            bool hasNextHopRegionId() const { return this->nextHopRegionId_ != nullptr;};
            void deleteNextHopRegionId() { this->nextHopRegionId_ = nullptr;};
            inline string getNextHopRegionId() const { DARABONBA_PTR_GET_DEFAULT(nextHopRegionId_, "") };
            inline NextHop& setNextHopRegionId(string nextHopRegionId) { DARABONBA_PTR_SET_VALUE(nextHopRegionId_, nextHopRegionId) };


            // nextHopRelatedInfo Field Functions 
            bool hasNextHopRelatedInfo() const { return this->nextHopRelatedInfo_ != nullptr;};
            void deleteNextHopRelatedInfo() { this->nextHopRelatedInfo_ = nullptr;};
            inline const NextHop::NextHopRelatedInfo & getNextHopRelatedInfo() const { DARABONBA_PTR_GET_CONST(nextHopRelatedInfo_, NextHop::NextHopRelatedInfo) };
            inline NextHop::NextHopRelatedInfo getNextHopRelatedInfo() { DARABONBA_PTR_GET(nextHopRelatedInfo_, NextHop::NextHopRelatedInfo) };
            inline NextHop& setNextHopRelatedInfo(const NextHop::NextHopRelatedInfo & nextHopRelatedInfo) { DARABONBA_PTR_SET_VALUE(nextHopRelatedInfo_, nextHopRelatedInfo) };
            inline NextHop& setNextHopRelatedInfo(NextHop::NextHopRelatedInfo && nextHopRelatedInfo) { DARABONBA_PTR_SET_RVALUE(nextHopRelatedInfo_, nextHopRelatedInfo) };


            // nextHopType Field Functions 
            bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
            void deleteNextHopType() { this->nextHopType_ = nullptr;};
            inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
            inline NextHop& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


            // weight Field Functions 
            bool hasWeight() const { return this->weight_ != nullptr;};
            void deleteWeight() { this->weight_ = nullptr;};
            inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
            inline NextHop& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


          protected:
            // Indicates whether the route is available. Valid values:
            // 
            // *   **0**: unavailable
            // *   **1**: available
            // 
            // >  This parameter is returned when the next hop type is set to **RouterInterface**.
            shared_ptr<int32_t> enabled_ {};
            // The ID of the next hop.
            shared_ptr<string> nextHopId_ {};
            // The ID of the region where the next hop is deployed.
            // 
            // >  This parameter is returned when the next hop type is set to **RouterInterface**.
            shared_ptr<string> nextHopRegionId_ {};
            // The information about the next hop.
            shared_ptr<NextHop::NextHopRelatedInfo> nextHopRelatedInfo_ {};
            // The next hop type. Valid values:
            // 
            // *   **Instance**: an ECS instance.
            // *   **HaVip**: an HaVip.
            // *   **VpnGateway**: a VPN gateway.
            // *   **NatGateway**: a NAT gateway.
            // *   **NetworkInterface**: a secondary ENI.
            // *   **RouterInterface**: a router interface.
            // *   **IPv6Gateway**: an IPv6 gateway.
            // *   **Attachment**: a transit router.
            // *   **Ipv4Gateway**: an IPv4 gateway.
            // *   **GatewayEndpoint**: a gateway endpoint.
            // *   **CenBasic**: CEN does not support transit routers.
            // *   **Ecr**: ECR.
            shared_ptr<string> nextHopType_ {};
            // The weight of the route.
            // 
            // >  This parameter is returned when the next hop type is set to **RouterInterface**.
            shared_ptr<int32_t> weight_ {};
          };

          virtual bool empty() const override { return this->nextHop_ == nullptr; };
          // nextHop Field Functions 
          bool hasNextHop() const { return this->nextHop_ != nullptr;};
          void deleteNextHop() { this->nextHop_ = nullptr;};
          inline const vector<NextHops::NextHop> & getNextHop() const { DARABONBA_PTR_GET_CONST(nextHop_, vector<NextHops::NextHop>) };
          inline vector<NextHops::NextHop> getNextHop() { DARABONBA_PTR_GET(nextHop_, vector<NextHops::NextHop>) };
          inline NextHops& setNextHop(const vector<NextHops::NextHop> & nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };
          inline NextHops& setNextHop(vector<NextHops::NextHop> && nextHop) { DARABONBA_PTR_SET_RVALUE(nextHop_, nextHop) };


        protected:
          shared_ptr<vector<NextHops::NextHop>> nextHop_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->destinationCidrBlock_ == nullptr && this->gmtModified_ == nullptr && this->ipVersion_ == nullptr && this->nextHops_ == nullptr && this->origin_ == nullptr
        && this->routeEntryId_ == nullptr && this->routeEntryName_ == nullptr && this->routeTableId_ == nullptr && this->serviceType_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline RouteEntry& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline RouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline RouteEntry& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline RouteEntry& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


        // nextHops Field Functions 
        bool hasNextHops() const { return this->nextHops_ != nullptr;};
        void deleteNextHops() { this->nextHops_ = nullptr;};
        inline const RouteEntry::NextHops & getNextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, RouteEntry::NextHops) };
        inline RouteEntry::NextHops getNextHops() { DARABONBA_PTR_GET(nextHops_, RouteEntry::NextHops) };
        inline RouteEntry& setNextHops(const RouteEntry::NextHops & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
        inline RouteEntry& setNextHops(RouteEntry::NextHops && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


        // origin Field Functions 
        bool hasOrigin() const { return this->origin_ != nullptr;};
        void deleteOrigin() { this->origin_ = nullptr;};
        inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
        inline RouteEntry& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


        // routeEntryId Field Functions 
        bool hasRouteEntryId() const { return this->routeEntryId_ != nullptr;};
        void deleteRouteEntryId() { this->routeEntryId_ = nullptr;};
        inline string getRouteEntryId() const { DARABONBA_PTR_GET_DEFAULT(routeEntryId_, "") };
        inline RouteEntry& setRouteEntryId(string routeEntryId) { DARABONBA_PTR_SET_VALUE(routeEntryId_, routeEntryId) };


        // routeEntryName Field Functions 
        bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
        void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
        inline string getRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
        inline RouteEntry& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


        // routeTableId Field Functions 
        bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
        void deleteRouteTableId() { this->routeTableId_ = nullptr;};
        inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
        inline RouteEntry& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


        // serviceType Field Functions 
        bool hasServiceType() const { return this->serviceType_ != nullptr;};
        void deleteServiceType() { this->serviceType_ = nullptr;};
        inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
        inline RouteEntry& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RouteEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The description of the route.
        shared_ptr<string> description_ {};
        // The destination CIDR block of the route.
        shared_ptr<string> destinationCidrBlock_ {};
        // The time when the route was modified. The time follows the ISO 8601 standard in the `YYYY-MM-DDThh:mm:ssZ` format. The time is displayed in UTC.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> gmtModified_ {};
        // The IP version. Valid values: Valid values:
        // 
        // *   **ipv4**
        // *   **ipv6**
        shared_ptr<string> ipVersion_ {};
        // The information about the next hops.
        shared_ptr<RouteEntry::NextHops> nextHops_ {};
        // The route origin. Valid values:
        // * **RoutePropagation**: The route is created by a dynamic propagation source.
        // * **SystemCreate**: The route is created by the system.
        // * **CustomCreate**: The route is created by a user.
        shared_ptr<string> origin_ {};
        // The ID of the route.
        shared_ptr<string> routeEntryId_ {};
        // The name of the route.
        shared_ptr<string> routeEntryName_ {};
        // The ID of the route table.
        shared_ptr<string> routeTableId_ {};
        // Indicates whether the route is hosted. If the parameter is empty, the route is not hosted.
        // 
        // If **TR** is returned, the route is hosted by a transit router.
        shared_ptr<string> serviceType_ {};
        // The status of the route entry. Valid values:
        // 
        // *   **Pending**
        // *   **Available**
        // *   **Modifying**
        // *   **Deleting**
        shared_ptr<string> status_ {};
        // The route type. Valid values:
        // 
        // *   **Custom**: custom routes.
        // *   **System**: system routes.
        // *   **BGP**: BGP routes.
        // *   **CEN**: CEN routes.
        // *   **ECR**: ECR routes.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->routeEntry_ == nullptr; };
      // routeEntry Field Functions 
      bool hasRouteEntry() const { return this->routeEntry_ != nullptr;};
      void deleteRouteEntry() { this->routeEntry_ = nullptr;};
      inline const vector<RouteEntrys::RouteEntry> & getRouteEntry() const { DARABONBA_PTR_GET_CONST(routeEntry_, vector<RouteEntrys::RouteEntry>) };
      inline vector<RouteEntrys::RouteEntry> getRouteEntry() { DARABONBA_PTR_GET(routeEntry_, vector<RouteEntrys::RouteEntry>) };
      inline RouteEntrys& setRouteEntry(const vector<RouteEntrys::RouteEntry> & routeEntry) { DARABONBA_PTR_SET_VALUE(routeEntry_, routeEntry) };
      inline RouteEntrys& setRouteEntry(vector<RouteEntrys::RouteEntry> && routeEntry) { DARABONBA_PTR_SET_RVALUE(routeEntry_, routeEntry) };


    protected:
      shared_ptr<vector<RouteEntrys::RouteEntry>> routeEntry_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->routeEntrys_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeRouteEntryListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteEntryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeEntrys Field Functions 
    bool hasRouteEntrys() const { return this->routeEntrys_ != nullptr;};
    void deleteRouteEntrys() { this->routeEntrys_ = nullptr;};
    inline const DescribeRouteEntryListResponseBody::RouteEntrys & getRouteEntrys() const { DARABONBA_PTR_GET_CONST(routeEntrys_, DescribeRouteEntryListResponseBody::RouteEntrys) };
    inline DescribeRouteEntryListResponseBody::RouteEntrys getRouteEntrys() { DARABONBA_PTR_GET(routeEntrys_, DescribeRouteEntryListResponseBody::RouteEntrys) };
    inline DescribeRouteEntryListResponseBody& setRouteEntrys(const DescribeRouteEntryListResponseBody::RouteEntrys & routeEntrys) { DARABONBA_PTR_SET_VALUE(routeEntrys_, routeEntrys) };
    inline DescribeRouteEntryListResponseBody& setRouteEntrys(DescribeRouteEntryListResponseBody::RouteEntrys && routeEntrys) { DARABONBA_PTR_SET_RVALUE(routeEntrys_, routeEntrys) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next queries are sent.
    // *   If a value is returned for **NextToken**, the value is used to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the routes.
    shared_ptr<DescribeRouteEntryListResponseBody::RouteEntrys> routeEntrys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
