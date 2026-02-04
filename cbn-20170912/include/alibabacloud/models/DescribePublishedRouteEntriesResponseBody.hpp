// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPUBLISHEDROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribePublishedRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePublishedRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PublishedRouteEntries, publishedRouteEntries_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePublishedRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PublishedRouteEntries, publishedRouteEntries_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePublishedRouteEntriesResponseBody() = default ;
    DescribePublishedRouteEntriesResponseBody(const DescribePublishedRouteEntriesResponseBody &) = default ;
    DescribePublishedRouteEntriesResponseBody(DescribePublishedRouteEntriesResponseBody &&) = default ;
    DescribePublishedRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePublishedRouteEntriesResponseBody() = default ;
    DescribePublishedRouteEntriesResponseBody& operator=(const DescribePublishedRouteEntriesResponseBody &) = default ;
    DescribePublishedRouteEntriesResponseBody& operator=(DescribePublishedRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PublishedRouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PublishedRouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(PublishedRouteEntry, publishedRouteEntry_);
      };
      friend void from_json(const Darabonba::Json& j, PublishedRouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(PublishedRouteEntry, publishedRouteEntry_);
      };
      PublishedRouteEntries() = default ;
      PublishedRouteEntries(const PublishedRouteEntries &) = default ;
      PublishedRouteEntries(PublishedRouteEntries &&) = default ;
      PublishedRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PublishedRouteEntries() = default ;
      PublishedRouteEntries& operator=(const PublishedRouteEntries &) = default ;
      PublishedRouteEntries& operator=(PublishedRouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PublishedRouteEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PublishedRouteEntry& obj) { 
          DARABONBA_PTR_TO_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
          DARABONBA_PTR_TO_JSON(Conflicts, conflicts_);
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_TO_JSON(OperationalMode, operationalMode_);
          DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_TO_JSON(RouteType, routeType_);
        };
        friend void from_json(const Darabonba::Json& j, PublishedRouteEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(ChildInstanceRouteTableId, childInstanceRouteTableId_);
          DARABONBA_PTR_FROM_JSON(Conflicts, conflicts_);
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
          DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_FROM_JSON(OperationalMode, operationalMode_);
          DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_FROM_JSON(RouteType, routeType_);
        };
        PublishedRouteEntry() = default ;
        PublishedRouteEntry(const PublishedRouteEntry &) = default ;
        PublishedRouteEntry(PublishedRouteEntry &&) = default ;
        PublishedRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PublishedRouteEntry() = default ;
        PublishedRouteEntry& operator=(const PublishedRouteEntry &) = default ;
        PublishedRouteEntry& operator=(PublishedRouteEntry &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conflicts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conflicts& obj) { 
            DARABONBA_PTR_TO_JSON(Conflict, conflict_);
          };
          friend void from_json(const Darabonba::Json& j, Conflicts& obj) { 
            DARABONBA_PTR_FROM_JSON(Conflict, conflict_);
          };
          Conflicts() = default ;
          Conflicts(const Conflicts &) = default ;
          Conflicts(Conflicts &&) = default ;
          Conflicts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Conflicts() = default ;
          Conflicts& operator=(const Conflicts &) = default ;
          Conflicts& operator=(Conflicts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Conflict : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Conflict& obj) { 
              DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
              DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, Conflict& obj) { 
              DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
              DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
              DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            Conflict() = default ;
            Conflict(const Conflict &) = default ;
            Conflict(Conflict &&) = default ;
            Conflict(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Conflict() = default ;
            Conflict& operator=(const Conflict &) = default ;
            Conflict& operator=(Conflict &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->destinationCidrBlock_ == nullptr
        && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr; };
            // destinationCidrBlock Field Functions 
            bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
            void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
            inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
            inline Conflict& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


            // instanceId Field Functions 
            bool hasInstanceId() const { return this->instanceId_ != nullptr;};
            void deleteInstanceId() { this->instanceId_ = nullptr;};
            inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
            inline Conflict& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


            // instanceType Field Functions 
            bool hasInstanceType() const { return this->instanceType_ != nullptr;};
            void deleteInstanceType() { this->instanceType_ = nullptr;};
            inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
            inline Conflict& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline Conflict& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline Conflict& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // The destination CIDR block of the conflicting route.
            shared_ptr<string> destinationCidrBlock_ {};
            // The ID of the peer network instance on which conflicting routes are found.
            shared_ptr<string> instanceId_ {};
            // The type of the peer network instance on which the conflicting routes are found. Valid values:
            // 
            // *   **VPC**: VPC
            // *   **VBR**: VBR
            // *   **CCN**: CCN instance
            shared_ptr<string> instanceType_ {};
            // The ID of the region where the peer network instance on which the conflicting routes are found is deployed.
            shared_ptr<string> regionId_ {};
            // The cause of the route confliction. Valid values:
            // 
            // *   **conflict**: The routes have the same destination CIDR block.
            // *   **overflow**: The number of routes in the route table configured on another network instance has reached the upper limit.
            shared_ptr<string> status_ {};
          };

          virtual bool empty() const override { return this->conflict_ == nullptr; };
          // conflict Field Functions 
          bool hasConflict() const { return this->conflict_ != nullptr;};
          void deleteConflict() { this->conflict_ = nullptr;};
          inline const vector<Conflicts::Conflict> & getConflict() const { DARABONBA_PTR_GET_CONST(conflict_, vector<Conflicts::Conflict>) };
          inline vector<Conflicts::Conflict> getConflict() { DARABONBA_PTR_GET(conflict_, vector<Conflicts::Conflict>) };
          inline Conflicts& setConflict(const vector<Conflicts::Conflict> & conflict) { DARABONBA_PTR_SET_VALUE(conflict_, conflict) };
          inline Conflicts& setConflict(vector<Conflicts::Conflict> && conflict) { DARABONBA_PTR_SET_RVALUE(conflict_, conflict) };


        protected:
          shared_ptr<vector<Conflicts::Conflict>> conflict_ {};
        };

        virtual bool empty() const override { return this->childInstanceRouteTableId_ == nullptr
        && this->conflicts_ == nullptr && this->destinationCidrBlock_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->operationalMode_ == nullptr
        && this->publishStatus_ == nullptr && this->routeType_ == nullptr; };
        // childInstanceRouteTableId Field Functions 
        bool hasChildInstanceRouteTableId() const { return this->childInstanceRouteTableId_ != nullptr;};
        void deleteChildInstanceRouteTableId() { this->childInstanceRouteTableId_ = nullptr;};
        inline string getChildInstanceRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(childInstanceRouteTableId_, "") };
        inline PublishedRouteEntry& setChildInstanceRouteTableId(string childInstanceRouteTableId) { DARABONBA_PTR_SET_VALUE(childInstanceRouteTableId_, childInstanceRouteTableId) };


        // conflicts Field Functions 
        bool hasConflicts() const { return this->conflicts_ != nullptr;};
        void deleteConflicts() { this->conflicts_ = nullptr;};
        inline const PublishedRouteEntry::Conflicts & getConflicts() const { DARABONBA_PTR_GET_CONST(conflicts_, PublishedRouteEntry::Conflicts) };
        inline PublishedRouteEntry::Conflicts getConflicts() { DARABONBA_PTR_GET(conflicts_, PublishedRouteEntry::Conflicts) };
        inline PublishedRouteEntry& setConflicts(const PublishedRouteEntry::Conflicts & conflicts) { DARABONBA_PTR_SET_VALUE(conflicts_, conflicts) };
        inline PublishedRouteEntry& setConflicts(PublishedRouteEntry::Conflicts && conflicts) { DARABONBA_PTR_SET_RVALUE(conflicts_, conflicts) };


        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline PublishedRouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


        // nextHopId Field Functions 
        bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
        void deleteNextHopId() { this->nextHopId_ = nullptr;};
        inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
        inline PublishedRouteEntry& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


        // nextHopType Field Functions 
        bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
        void deleteNextHopType() { this->nextHopType_ = nullptr;};
        inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
        inline PublishedRouteEntry& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


        // operationalMode Field Functions 
        bool hasOperationalMode() const { return this->operationalMode_ != nullptr;};
        void deleteOperationalMode() { this->operationalMode_ = nullptr;};
        inline bool getOperationalMode() const { DARABONBA_PTR_GET_DEFAULT(operationalMode_, false) };
        inline PublishedRouteEntry& setOperationalMode(bool operationalMode) { DARABONBA_PTR_SET_VALUE(operationalMode_, operationalMode) };


        // publishStatus Field Functions 
        bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
        void deletePublishStatus() { this->publishStatus_ = nullptr;};
        inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
        inline PublishedRouteEntry& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


        // routeType Field Functions 
        bool hasRouteType() const { return this->routeType_ != nullptr;};
        void deleteRouteType() { this->routeType_ = nullptr;};
        inline string getRouteType() const { DARABONBA_PTR_GET_DEFAULT(routeType_, "") };
        inline PublishedRouteEntry& setRouteType(string routeType) { DARABONBA_PTR_SET_VALUE(routeType_, routeType) };


      protected:
        // The ID of the route table configured on the network instance.
        shared_ptr<string> childInstanceRouteTableId_ {};
        // A list of conflicting routes.
        shared_ptr<PublishedRouteEntry::Conflicts> conflicts_ {};
        // The destination CIDR block of the route.
        shared_ptr<string> destinationCidrBlock_ {};
        // The ID of the instance specified as the next hop in the route.
        shared_ptr<string> nextHopId_ {};
        // The type of the instance specified as the next hop in the route.
        // 
        // *   **Instance**: ECS instance
        // *   **HaVip**: high-availability virtual IP address (HAVIP).
        // *   **RouterInterface**: router interface.
        // *   **NetworkInterface**: elastic network interface (ENI).
        // *   **VpnGateway**: VPN gateway.
        // *   **IPv6Gateway**: IPv6 gateway.
        // *   **NatGateway**: NAT gateway.
        // *   **Attachment**: network instance connection
        // *   **service**: cloud service
        // *   **VBR**: VBR
        // *   **CCN**: CCN instance
        // *   **VPC**: VPC
        // *   **local**: system route. No next hop is specified.
        // *   **TR**: transit router
        // *   **BlackHole**: blackhole route. No next hop is specified.
        // *   **EcRouterInterface**: router interface for Express Connect
        // *   **HealthCheck**: health check
        // *   **AS**: access gateway for CCN
        // *   **classicLink**: classic network-type instance
        // *   **GatewayEndpoint**: gateway endpoint
        // *   **CPE**: data center connected to the VBR
        shared_ptr<string> nextHopType_ {};
        // Indicates whether the route is allowed to be advertised to or withdrawn from the CEN instance. Valid values:
        // 
        // *   **true**: The route is allowed to be advertised to or withdrawn from the CEN instance.
        // *   **false**: The route is not allowed to be advertised to or withdrawn from the CEN instance.
        shared_ptr<bool> operationalMode_ {};
        // Indicates whether the route is advertised to the CEN instance. Valid values:
        // 
        // *   **Published**: The route is advertised to the CEN instance.
        // *   **NonPublished**: The route is not advertised to the CEN instance.
        shared_ptr<string> publishStatus_ {};
        // The type of the route. Valid values:
        // 
        // *   **CEN**: route that is advertised through CEN
        // *   **System**: system route
        // *   **Custom**: custom route
        shared_ptr<string> routeType_ {};
      };

      virtual bool empty() const override { return this->publishedRouteEntry_ == nullptr; };
      // publishedRouteEntry Field Functions 
      bool hasPublishedRouteEntry() const { return this->publishedRouteEntry_ != nullptr;};
      void deletePublishedRouteEntry() { this->publishedRouteEntry_ = nullptr;};
      inline const vector<PublishedRouteEntries::PublishedRouteEntry> & getPublishedRouteEntry() const { DARABONBA_PTR_GET_CONST(publishedRouteEntry_, vector<PublishedRouteEntries::PublishedRouteEntry>) };
      inline vector<PublishedRouteEntries::PublishedRouteEntry> getPublishedRouteEntry() { DARABONBA_PTR_GET(publishedRouteEntry_, vector<PublishedRouteEntries::PublishedRouteEntry>) };
      inline PublishedRouteEntries& setPublishedRouteEntry(const vector<PublishedRouteEntries::PublishedRouteEntry> & publishedRouteEntry) { DARABONBA_PTR_SET_VALUE(publishedRouteEntry_, publishedRouteEntry) };
      inline PublishedRouteEntries& setPublishedRouteEntry(vector<PublishedRouteEntries::PublishedRouteEntry> && publishedRouteEntry) { DARABONBA_PTR_SET_RVALUE(publishedRouteEntry_, publishedRouteEntry) };


    protected:
      shared_ptr<vector<PublishedRouteEntries::PublishedRouteEntry>> publishedRouteEntry_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->publishedRouteEntries_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribePublishedRouteEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePublishedRouteEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // publishedRouteEntries Field Functions 
    bool hasPublishedRouteEntries() const { return this->publishedRouteEntries_ != nullptr;};
    void deletePublishedRouteEntries() { this->publishedRouteEntries_ = nullptr;};
    inline const DescribePublishedRouteEntriesResponseBody::PublishedRouteEntries & getPublishedRouteEntries() const { DARABONBA_PTR_GET_CONST(publishedRouteEntries_, DescribePublishedRouteEntriesResponseBody::PublishedRouteEntries) };
    inline DescribePublishedRouteEntriesResponseBody::PublishedRouteEntries getPublishedRouteEntries() { DARABONBA_PTR_GET(publishedRouteEntries_, DescribePublishedRouteEntriesResponseBody::PublishedRouteEntries) };
    inline DescribePublishedRouteEntriesResponseBody& setPublishedRouteEntries(const DescribePublishedRouteEntriesResponseBody::PublishedRouteEntries & publishedRouteEntries) { DARABONBA_PTR_SET_VALUE(publishedRouteEntries_, publishedRouteEntries) };
    inline DescribePublishedRouteEntriesResponseBody& setPublishedRouteEntries(DescribePublishedRouteEntriesResponseBody::PublishedRouteEntries && publishedRouteEntries) { DARABONBA_PTR_SET_RVALUE(publishedRouteEntries_, publishedRouteEntries) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePublishedRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePublishedRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // A list of routes.
    shared_ptr<DescribePublishedRouteEntriesResponseBody::PublishedRouteEntries> publishedRouteEntries_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
