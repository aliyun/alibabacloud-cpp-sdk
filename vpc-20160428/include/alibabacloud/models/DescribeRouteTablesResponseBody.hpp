// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTETABLESRESPONSEBODY_HPP_
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
  class DescribeRouteTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteTables, routeTables_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteTables, routeTables_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRouteTablesResponseBody() = default ;
    DescribeRouteTablesResponseBody(const DescribeRouteTablesResponseBody &) = default ;
    DescribeRouteTablesResponseBody(DescribeRouteTablesResponseBody &&) = default ;
    DescribeRouteTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteTablesResponseBody() = default ;
    DescribeRouteTablesResponseBody& operator=(const DescribeRouteTablesResponseBody &) = default ;
    DescribeRouteTablesResponseBody& operator=(DescribeRouteTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteTables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteTables& obj) { 
        DARABONBA_PTR_TO_JSON(RouteTable, routeTable_);
      };
      friend void from_json(const Darabonba::Json& j, RouteTables& obj) { 
        DARABONBA_PTR_FROM_JSON(RouteTable, routeTable_);
      };
      RouteTables() = default ;
      RouteTables(const RouteTables &) = default ;
      RouteTables(RouteTables &&) = default ;
      RouteTables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteTables() = default ;
      RouteTables& operator=(const RouteTables &) = default ;
      RouteTables& operator=(RouteTables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RouteTable : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RouteTable& obj) { 
          DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(RouteEntrys, routeEntrys_);
          DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_TO_JSON(RouteTableType, routeTableType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VRouterId, VRouterId_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        };
        friend void from_json(const Darabonba::Json& j, RouteTable& obj) { 
          DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(RouteEntrys, routeEntrys_);
          DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_FROM_JSON(RouteTableType, routeTableType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VRouterId, VRouterId_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        };
        RouteTable() = default ;
        RouteTable(const RouteTable &) = default ;
        RouteTable(RouteTable &&) = default ;
        RouteTable(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RouteTable() = default ;
        RouteTable& operator=(const RouteTable &) = default ;
        RouteTable& operator=(RouteTable &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VSwitchIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitchIds& obj) { 
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitchIds& obj) { 
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          };
          VSwitchIds() = default ;
          VSwitchIds(const VSwitchIds &) = default ;
          VSwitchIds(VSwitchIds &&) = default ;
          VSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VSwitchIds() = default ;
          VSwitchIds& operator=(const VSwitchIds &) = default ;
          VSwitchIds& operator=(VSwitchIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->vSwitchId_ == nullptr; };
          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline const vector<string> & getVSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
          inline vector<string> getVSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
          inline VSwitchIds& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
          inline VSwitchIds& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


        protected:
          shared_ptr<vector<string>> vSwitchId_ {};
        };

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
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
              DARABONBA_PTR_TO_JSON(NextHops, nextHops_);
              DARABONBA_PTR_TO_JSON(RouteEntryId, routeEntryId_);
              DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
              DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, RouteEntry& obj) { 
              DARABONBA_PTR_FROM_JSON(Description, description_);
              DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
              DARABONBA_PTR_FROM_JSON(NextHops, nextHops_);
              DARABONBA_PTR_FROM_JSON(RouteEntryId, routeEntryId_);
              DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
              DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
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
                  DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
                  DARABONBA_PTR_TO_JSON(Weight, weight_);
                };
                friend void from_json(const Darabonba::Json& j, NextHop& obj) { 
                  DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
                  DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
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
                virtual bool empty() const override { return this->enabled_ == nullptr
        && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->weight_ == nullptr; };
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
                shared_ptr<int32_t> enabled_ {};
                // The ID of the next hop.
                shared_ptr<string> nextHopId_ {};
                // The type of the next hop. Valid values:
                // 
                // *   **Instance**: an ECS instance
                // *   **HaVip**: an HaVip
                // *   **VpnGateway**: a VPN gateway
                // *   **NatGateway**: a NAT gateway
                // *   **NetworkInterface**: a secondary ENI
                // *   **RouterInterface**: a router interface
                // *   **IPv6Gateway**: an IPv6 gateway
                // *   **Attachment**: a transit router
                shared_ptr<string> nextHopType_ {};
                // The weight of the route.
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
        && this->destinationCidrBlock_ == nullptr && this->instanceId_ == nullptr && this->nextHopType_ == nullptr && this->nextHops_ == nullptr && this->routeEntryId_ == nullptr
        && this->routeEntryName_ == nullptr && this->routeTableId_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
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


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline RouteEntry& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // nextHopType Field Functions 
            bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
            void deleteNextHopType() { this->nextHopType_ = nullptr;};
            inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
            inline RouteEntry& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


            // nextHops Field Functions 
            bool hasNextHops() const { return this->nextHops_ != nullptr;};
            void deleteNextHops() { this->nextHops_ = nullptr;};
            inline const RouteEntry::NextHops & getNextHops() const { DARABONBA_PTR_GET_CONST(nextHops_, RouteEntry::NextHops) };
            inline RouteEntry::NextHops getNextHops() { DARABONBA_PTR_GET(nextHops_, RouteEntry::NextHops) };
            inline RouteEntry& setNextHops(const RouteEntry::NextHops & nextHops) { DARABONBA_PTR_SET_VALUE(nextHops_, nextHops) };
            inline RouteEntry& setNextHops(RouteEntry::NextHops && nextHops) { DARABONBA_PTR_SET_RVALUE(nextHops_, nextHops) };


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
            // The description of the route. The description must be 2 to 256 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
            shared_ptr<string> description_ {};
            // The destination CIDR block of the route. The destination CIDR block supports IPv4 and IPv6. Make sure that the destination CIDR block meets the following requirements:
            // 
            // *   The destination CIDR block is not 100.64.0.0/10 or a subset of 100.64.0.0/10.
            // *   The destination CIDR block of each route in the route table is unique.
            shared_ptr<string> destinationCidrBlock_ {};
            // The ID of the instance associated with the next hop.
            shared_ptr<string> instanceId_ {};
            // The type of the next hop. Valid values:
            // 
            // *   **Instance** (default): an Elastic Compute Service (ECS) instance
            // *   **HaVip**: a high-availability virtual IP address (HaVip).
            // *   **VpnGateway**: a VPN gateway
            // *   **NatGateway**: a NAT gateway
            // *   **NetworkInterface**: a secondary elastic network interface (ENI)
            // *   **RouterInterface**: a router interface
            // *   **IPv6Gateway**: an IPv6 gateway
            // *   **Attachment**: a transit router
            shared_ptr<string> nextHopType_ {};
            // The information about the next hop.
            shared_ptr<RouteEntry::NextHops> nextHops_ {};
            // The ID of the route.
            shared_ptr<string> routeEntryId_ {};
            // The route name.
            // 
            // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-).
            shared_ptr<string> routeEntryName_ {};
            // The route table ID.
            shared_ptr<string> routeTableId_ {};
            // The route status. Valid values:
            // 
            // *   **Pending**
            // *   **Available**
            // *   **Modifying**
            shared_ptr<string> status_ {};
            // The route type. Valid values:
            // 
            // *   **Custom**
            // *   **System**
            // *   **BGP**
            // *   **CEN**
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

        virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->resourceGroupId_ == nullptr && this->routeEntrys_ == nullptr && this->routeTableId_ == nullptr && this->routeTableType_ == nullptr && this->status_ == nullptr
        && this->VRouterId_ == nullptr && this->vSwitchIds_ == nullptr; };
        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline RouteTable& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline RouteTable& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // routeEntrys Field Functions 
        bool hasRouteEntrys() const { return this->routeEntrys_ != nullptr;};
        void deleteRouteEntrys() { this->routeEntrys_ = nullptr;};
        inline const RouteTable::RouteEntrys & getRouteEntrys() const { DARABONBA_PTR_GET_CONST(routeEntrys_, RouteTable::RouteEntrys) };
        inline RouteTable::RouteEntrys getRouteEntrys() { DARABONBA_PTR_GET(routeEntrys_, RouteTable::RouteEntrys) };
        inline RouteTable& setRouteEntrys(const RouteTable::RouteEntrys & routeEntrys) { DARABONBA_PTR_SET_VALUE(routeEntrys_, routeEntrys) };
        inline RouteTable& setRouteEntrys(RouteTable::RouteEntrys && routeEntrys) { DARABONBA_PTR_SET_RVALUE(routeEntrys_, routeEntrys) };


        // routeTableId Field Functions 
        bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
        void deleteRouteTableId() { this->routeTableId_ = nullptr;};
        inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
        inline RouteTable& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


        // routeTableType Field Functions 
        bool hasRouteTableType() const { return this->routeTableType_ != nullptr;};
        void deleteRouteTableType() { this->routeTableType_ = nullptr;};
        inline string getRouteTableType() const { DARABONBA_PTR_GET_DEFAULT(routeTableType_, "") };
        inline RouteTable& setRouteTableType(string routeTableType) { DARABONBA_PTR_SET_VALUE(routeTableType_, routeTableType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RouteTable& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // VRouterId Field Functions 
        bool hasVRouterId() const { return this->VRouterId_ != nullptr;};
        void deleteVRouterId() { this->VRouterId_ = nullptr;};
        inline string getVRouterId() const { DARABONBA_PTR_GET_DEFAULT(VRouterId_, "") };
        inline RouteTable& setVRouterId(string VRouterId) { DARABONBA_PTR_SET_VALUE(VRouterId_, VRouterId) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const RouteTable::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, RouteTable::VSwitchIds) };
        inline RouteTable::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, RouteTable::VSwitchIds) };
        inline RouteTable& setVSwitchIds(const RouteTable::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline RouteTable& setVSwitchIds(RouteTable::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      protected:
        // The time when the route table was created.
        // 
        // The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format in UTC.
        shared_ptr<string> creationTime_ {};
        // The ID of the resource group to which the route table belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The information about the route.
        shared_ptr<RouteTable::RouteEntrys> routeEntrys_ {};
        // The ID of the route table.
        shared_ptr<string> routeTableId_ {};
        // The type of the route table. Valid values:
        // 
        // *   **Custom**
        // *   **System**
        shared_ptr<string> routeTableType_ {};
        // The status of the route table. Valid values:
        // 
        // *   **Pending**
        // *   **Available**
        shared_ptr<string> status_ {};
        // The vRouter ID.
        shared_ptr<string> VRouterId_ {};
        // The vSwitch ID.
        shared_ptr<RouteTable::VSwitchIds> vSwitchIds_ {};
      };

      virtual bool empty() const override { return this->routeTable_ == nullptr; };
      // routeTable Field Functions 
      bool hasRouteTable() const { return this->routeTable_ != nullptr;};
      void deleteRouteTable() { this->routeTable_ = nullptr;};
      inline const vector<RouteTables::RouteTable> & getRouteTable() const { DARABONBA_PTR_GET_CONST(routeTable_, vector<RouteTables::RouteTable>) };
      inline vector<RouteTables::RouteTable> getRouteTable() { DARABONBA_PTR_GET(routeTable_, vector<RouteTables::RouteTable>) };
      inline RouteTables& setRouteTable(const vector<RouteTables::RouteTable> & routeTable) { DARABONBA_PTR_SET_VALUE(routeTable_, routeTable) };
      inline RouteTables& setRouteTable(vector<RouteTables::RouteTable> && routeTable) { DARABONBA_PTR_SET_RVALUE(routeTable_, routeTable) };


    protected:
      shared_ptr<vector<RouteTables::RouteTable>> routeTable_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->routeTables_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRouteTablesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRouteTablesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRouteTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeTables Field Functions 
    bool hasRouteTables() const { return this->routeTables_ != nullptr;};
    void deleteRouteTables() { this->routeTables_ = nullptr;};
    inline const DescribeRouteTablesResponseBody::RouteTables & getRouteTables() const { DARABONBA_PTR_GET_CONST(routeTables_, DescribeRouteTablesResponseBody::RouteTables) };
    inline DescribeRouteTablesResponseBody::RouteTables getRouteTables() { DARABONBA_PTR_GET(routeTables_, DescribeRouteTablesResponseBody::RouteTables) };
    inline DescribeRouteTablesResponseBody& setRouteTables(const DescribeRouteTablesResponseBody::RouteTables & routeTables) { DARABONBA_PTR_SET_VALUE(routeTables_, routeTables) };
    inline DescribeRouteTablesResponseBody& setRouteTables(DescribeRouteTablesResponseBody::RouteTables && routeTables) { DARABONBA_PTR_SET_RVALUE(routeTables_, routeTables) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRouteTablesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The detailed information about the route tables.
    shared_ptr<DescribeRouteTablesResponseBody::RouteTables> routeTables_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
