// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENCHILDINSTANCEROUTEENTRIESRESPONSEBODY_HPP_
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
  class DescribeCenChildInstanceRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenChildInstanceRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenRouteEntries, cenRouteEntries_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenChildInstanceRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenRouteEntries, cenRouteEntries_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenChildInstanceRouteEntriesResponseBody() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody(const DescribeCenChildInstanceRouteEntriesResponseBody &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody(DescribeCenChildInstanceRouteEntriesResponseBody &&) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenChildInstanceRouteEntriesResponseBody() = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody& operator=(const DescribeCenChildInstanceRouteEntriesResponseBody &) = default ;
    DescribeCenChildInstanceRouteEntriesResponseBody& operator=(DescribeCenChildInstanceRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CenRouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CenRouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(CenRouteEntry, cenRouteEntry_);
      };
      friend void from_json(const Darabonba::Json& j, CenRouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(CenRouteEntry, cenRouteEntry_);
      };
      CenRouteEntries() = default ;
      CenRouteEntries(const CenRouteEntries &) = default ;
      CenRouteEntries(CenRouteEntries &&) = default ;
      CenRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CenRouteEntries() = default ;
      CenRouteEntries& operator=(const CenRouteEntries &) = default ;
      CenRouteEntries& operator=(CenRouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CenRouteEntry : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CenRouteEntry& obj) { 
          DARABONBA_PTR_TO_JSON(AsPaths, asPaths_);
          DARABONBA_PTR_TO_JSON(CenRouteMapRecords, cenRouteMapRecords_);
          DARABONBA_PTR_TO_JSON(Communities, communities_);
          DARABONBA_PTR_TO_JSON(Conflicts, conflicts_);
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
          DARABONBA_PTR_TO_JSON(NextHopRegionId, nextHopRegionId_);
          DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_TO_JSON(OperationalMode, operationalMode_);
          DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, CenRouteEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(AsPaths, asPaths_);
          DARABONBA_PTR_FROM_JSON(CenRouteMapRecords, cenRouteMapRecords_);
          DARABONBA_PTR_FROM_JSON(Communities, communities_);
          DARABONBA_PTR_FROM_JSON(Conflicts, conflicts_);
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
          DARABONBA_PTR_FROM_JSON(NextHopRegionId, nextHopRegionId_);
          DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_FROM_JSON(OperationalMode, operationalMode_);
          DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
          DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        CenRouteEntry() = default ;
        CenRouteEntry(const CenRouteEntry &) = default ;
        CenRouteEntry(CenRouteEntry &&) = default ;
        CenRouteEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CenRouteEntry() = default ;
        CenRouteEntry& operator=(const CenRouteEntry &) = default ;
        CenRouteEntry& operator=(CenRouteEntry &&) = default ;
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
            // The destination CIDR block of the overlapping route.
            shared_ptr<string> destinationCidrBlock_ {};
            // The ID of the peer network instance on which the overlapping routes are found.
            shared_ptr<string> instanceId_ {};
            // The type of the peer network instance on which the overlapping routes are found. Valid values:
            // 
            // *   **VPC**: VPC
            // *   **VBR**: VBR
            // *   **CCN**: CCN instance
            // *   **ECR**: ECR
            shared_ptr<string> instanceType_ {};
            // The region ID of the peer network instance on which the overlapping routes are found.
            shared_ptr<string> regionId_ {};
            // The cause of the route error. Valid values:
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

        class Communities : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Communities& obj) { 
            DARABONBA_PTR_TO_JSON(Community, community_);
          };
          friend void from_json(const Darabonba::Json& j, Communities& obj) { 
            DARABONBA_PTR_FROM_JSON(Community, community_);
          };
          Communities() = default ;
          Communities(const Communities &) = default ;
          Communities(Communities &&) = default ;
          Communities(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Communities() = default ;
          Communities& operator=(const Communities &) = default ;
          Communities& operator=(Communities &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->community_ == nullptr; };
          // community Field Functions 
          bool hasCommunity() const { return this->community_ != nullptr;};
          void deleteCommunity() { this->community_ = nullptr;};
          inline const vector<string> & getCommunity() const { DARABONBA_PTR_GET_CONST(community_, vector<string>) };
          inline vector<string> getCommunity() { DARABONBA_PTR_GET(community_, vector<string>) };
          inline Communities& setCommunity(const vector<string> & community) { DARABONBA_PTR_SET_VALUE(community_, community) };
          inline Communities& setCommunity(vector<string> && community) { DARABONBA_PTR_SET_RVALUE(community_, community) };


        protected:
          shared_ptr<vector<string>> community_ {};
        };

        class CenRouteMapRecords : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CenRouteMapRecords& obj) { 
            DARABONBA_PTR_TO_JSON(CenRouteMapRecord, cenRouteMapRecord_);
          };
          friend void from_json(const Darabonba::Json& j, CenRouteMapRecords& obj) { 
            DARABONBA_PTR_FROM_JSON(CenRouteMapRecord, cenRouteMapRecord_);
          };
          CenRouteMapRecords() = default ;
          CenRouteMapRecords(const CenRouteMapRecords &) = default ;
          CenRouteMapRecords(CenRouteMapRecords &&) = default ;
          CenRouteMapRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CenRouteMapRecords() = default ;
          CenRouteMapRecords& operator=(const CenRouteMapRecords &) = default ;
          CenRouteMapRecords& operator=(CenRouteMapRecords &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CenRouteMapRecord : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CenRouteMapRecord& obj) { 
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
            };
            friend void from_json(const Darabonba::Json& j, CenRouteMapRecord& obj) { 
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
            };
            CenRouteMapRecord() = default ;
            CenRouteMapRecord(const CenRouteMapRecord &) = default ;
            CenRouteMapRecord(CenRouteMapRecord &&) = default ;
            CenRouteMapRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CenRouteMapRecord() = default ;
            CenRouteMapRecord& operator=(const CenRouteMapRecord &) = default ;
            CenRouteMapRecord& operator=(CenRouteMapRecord &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->regionId_ == nullptr
        && this->routeMapId_ == nullptr; };
            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline CenRouteMapRecord& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // routeMapId Field Functions 
            bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
            void deleteRouteMapId() { this->routeMapId_ = nullptr;};
            inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
            inline CenRouteMapRecord& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


          protected:
            // The region ID of the routing policy.
            shared_ptr<string> regionId_ {};
            // The routing policy ID.
            shared_ptr<string> routeMapId_ {};
          };

          virtual bool empty() const override { return this->cenRouteMapRecord_ == nullptr; };
          // cenRouteMapRecord Field Functions 
          bool hasCenRouteMapRecord() const { return this->cenRouteMapRecord_ != nullptr;};
          void deleteCenRouteMapRecord() { this->cenRouteMapRecord_ = nullptr;};
          inline const vector<CenRouteMapRecords::CenRouteMapRecord> & getCenRouteMapRecord() const { DARABONBA_PTR_GET_CONST(cenRouteMapRecord_, vector<CenRouteMapRecords::CenRouteMapRecord>) };
          inline vector<CenRouteMapRecords::CenRouteMapRecord> getCenRouteMapRecord() { DARABONBA_PTR_GET(cenRouteMapRecord_, vector<CenRouteMapRecords::CenRouteMapRecord>) };
          inline CenRouteMapRecords& setCenRouteMapRecord(const vector<CenRouteMapRecords::CenRouteMapRecord> & cenRouteMapRecord) { DARABONBA_PTR_SET_VALUE(cenRouteMapRecord_, cenRouteMapRecord) };
          inline CenRouteMapRecords& setCenRouteMapRecord(vector<CenRouteMapRecords::CenRouteMapRecord> && cenRouteMapRecord) { DARABONBA_PTR_SET_RVALUE(cenRouteMapRecord_, cenRouteMapRecord) };


        protected:
          shared_ptr<vector<CenRouteMapRecords::CenRouteMapRecord>> cenRouteMapRecord_ {};
        };

        class AsPaths : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AsPaths& obj) { 
            DARABONBA_PTR_TO_JSON(AsPath, asPath_);
          };
          friend void from_json(const Darabonba::Json& j, AsPaths& obj) { 
            DARABONBA_PTR_FROM_JSON(AsPath, asPath_);
          };
          AsPaths() = default ;
          AsPaths(const AsPaths &) = default ;
          AsPaths(AsPaths &&) = default ;
          AsPaths(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AsPaths() = default ;
          AsPaths& operator=(const AsPaths &) = default ;
          AsPaths& operator=(AsPaths &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->asPath_ == nullptr; };
          // asPath Field Functions 
          bool hasAsPath() const { return this->asPath_ != nullptr;};
          void deleteAsPath() { this->asPath_ = nullptr;};
          inline const vector<string> & getAsPath() const { DARABONBA_PTR_GET_CONST(asPath_, vector<string>) };
          inline vector<string> getAsPath() { DARABONBA_PTR_GET(asPath_, vector<string>) };
          inline AsPaths& setAsPath(const vector<string> & asPath) { DARABONBA_PTR_SET_VALUE(asPath_, asPath) };
          inline AsPaths& setAsPath(vector<string> && asPath) { DARABONBA_PTR_SET_RVALUE(asPath_, asPath) };


        protected:
          shared_ptr<vector<string>> asPath_ {};
        };

        virtual bool empty() const override { return this->asPaths_ == nullptr
        && this->cenRouteMapRecords_ == nullptr && this->communities_ == nullptr && this->conflicts_ == nullptr && this->destinationCidrBlock_ == nullptr && this->nextHopInstanceId_ == nullptr
        && this->nextHopRegionId_ == nullptr && this->nextHopType_ == nullptr && this->operationalMode_ == nullptr && this->publishStatus_ == nullptr && this->routeTableId_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
        // asPaths Field Functions 
        bool hasAsPaths() const { return this->asPaths_ != nullptr;};
        void deleteAsPaths() { this->asPaths_ = nullptr;};
        inline const CenRouteEntry::AsPaths & getAsPaths() const { DARABONBA_PTR_GET_CONST(asPaths_, CenRouteEntry::AsPaths) };
        inline CenRouteEntry::AsPaths getAsPaths() { DARABONBA_PTR_GET(asPaths_, CenRouteEntry::AsPaths) };
        inline CenRouteEntry& setAsPaths(const CenRouteEntry::AsPaths & asPaths) { DARABONBA_PTR_SET_VALUE(asPaths_, asPaths) };
        inline CenRouteEntry& setAsPaths(CenRouteEntry::AsPaths && asPaths) { DARABONBA_PTR_SET_RVALUE(asPaths_, asPaths) };


        // cenRouteMapRecords Field Functions 
        bool hasCenRouteMapRecords() const { return this->cenRouteMapRecords_ != nullptr;};
        void deleteCenRouteMapRecords() { this->cenRouteMapRecords_ = nullptr;};
        inline const CenRouteEntry::CenRouteMapRecords & getCenRouteMapRecords() const { DARABONBA_PTR_GET_CONST(cenRouteMapRecords_, CenRouteEntry::CenRouteMapRecords) };
        inline CenRouteEntry::CenRouteMapRecords getCenRouteMapRecords() { DARABONBA_PTR_GET(cenRouteMapRecords_, CenRouteEntry::CenRouteMapRecords) };
        inline CenRouteEntry& setCenRouteMapRecords(const CenRouteEntry::CenRouteMapRecords & cenRouteMapRecords) { DARABONBA_PTR_SET_VALUE(cenRouteMapRecords_, cenRouteMapRecords) };
        inline CenRouteEntry& setCenRouteMapRecords(CenRouteEntry::CenRouteMapRecords && cenRouteMapRecords) { DARABONBA_PTR_SET_RVALUE(cenRouteMapRecords_, cenRouteMapRecords) };


        // communities Field Functions 
        bool hasCommunities() const { return this->communities_ != nullptr;};
        void deleteCommunities() { this->communities_ = nullptr;};
        inline const CenRouteEntry::Communities & getCommunities() const { DARABONBA_PTR_GET_CONST(communities_, CenRouteEntry::Communities) };
        inline CenRouteEntry::Communities getCommunities() { DARABONBA_PTR_GET(communities_, CenRouteEntry::Communities) };
        inline CenRouteEntry& setCommunities(const CenRouteEntry::Communities & communities) { DARABONBA_PTR_SET_VALUE(communities_, communities) };
        inline CenRouteEntry& setCommunities(CenRouteEntry::Communities && communities) { DARABONBA_PTR_SET_RVALUE(communities_, communities) };


        // conflicts Field Functions 
        bool hasConflicts() const { return this->conflicts_ != nullptr;};
        void deleteConflicts() { this->conflicts_ = nullptr;};
        inline const CenRouteEntry::Conflicts & getConflicts() const { DARABONBA_PTR_GET_CONST(conflicts_, CenRouteEntry::Conflicts) };
        inline CenRouteEntry::Conflicts getConflicts() { DARABONBA_PTR_GET(conflicts_, CenRouteEntry::Conflicts) };
        inline CenRouteEntry& setConflicts(const CenRouteEntry::Conflicts & conflicts) { DARABONBA_PTR_SET_VALUE(conflicts_, conflicts) };
        inline CenRouteEntry& setConflicts(CenRouteEntry::Conflicts && conflicts) { DARABONBA_PTR_SET_RVALUE(conflicts_, conflicts) };


        // destinationCidrBlock Field Functions 
        bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
        void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
        inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
        inline CenRouteEntry& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


        // nextHopInstanceId Field Functions 
        bool hasNextHopInstanceId() const { return this->nextHopInstanceId_ != nullptr;};
        void deleteNextHopInstanceId() { this->nextHopInstanceId_ = nullptr;};
        inline string getNextHopInstanceId() const { DARABONBA_PTR_GET_DEFAULT(nextHopInstanceId_, "") };
        inline CenRouteEntry& setNextHopInstanceId(string nextHopInstanceId) { DARABONBA_PTR_SET_VALUE(nextHopInstanceId_, nextHopInstanceId) };


        // nextHopRegionId Field Functions 
        bool hasNextHopRegionId() const { return this->nextHopRegionId_ != nullptr;};
        void deleteNextHopRegionId() { this->nextHopRegionId_ = nullptr;};
        inline string getNextHopRegionId() const { DARABONBA_PTR_GET_DEFAULT(nextHopRegionId_, "") };
        inline CenRouteEntry& setNextHopRegionId(string nextHopRegionId) { DARABONBA_PTR_SET_VALUE(nextHopRegionId_, nextHopRegionId) };


        // nextHopType Field Functions 
        bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
        void deleteNextHopType() { this->nextHopType_ = nullptr;};
        inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
        inline CenRouteEntry& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


        // operationalMode Field Functions 
        bool hasOperationalMode() const { return this->operationalMode_ != nullptr;};
        void deleteOperationalMode() { this->operationalMode_ = nullptr;};
        inline bool getOperationalMode() const { DARABONBA_PTR_GET_DEFAULT(operationalMode_, false) };
        inline CenRouteEntry& setOperationalMode(bool operationalMode) { DARABONBA_PTR_SET_VALUE(operationalMode_, operationalMode) };


        // publishStatus Field Functions 
        bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
        void deletePublishStatus() { this->publishStatus_ = nullptr;};
        inline string getPublishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, "") };
        inline CenRouteEntry& setPublishStatus(string publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


        // routeTableId Field Functions 
        bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
        void deleteRouteTableId() { this->routeTableId_ = nullptr;};
        inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
        inline CenRouteEntry& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CenRouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CenRouteEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The AS paths of the routes.
        shared_ptr<CenRouteEntry::AsPaths> asPaths_ {};
        // The routing policy that the routes match.
        shared_ptr<CenRouteEntry::CenRouteMapRecords> cenRouteMapRecords_ {};
        // The community attributes of the route entries.
        shared_ptr<CenRouteEntry::Communities> communities_ {};
        // A list of overlapping routes.
        shared_ptr<CenRouteEntry::Conflicts> conflicts_ {};
        // The destination CIDR block of the route.
        shared_ptr<string> destinationCidrBlock_ {};
        // The ID of the instance specified as the next hop in the route.
        shared_ptr<string> nextHopInstanceId_ {};
        // The region ID of the instance specified as the next hop in the route.
        shared_ptr<string> nextHopRegionId_ {};
        // The type of the instance specified as the next hop in the route. Valid values:
        // 
        // *   **Instance**: an ECS instance
        // *   **HaVip**: an HAVIP
        // *   **RouterInterface**: a router interface
        // *   **NetworkInterface**: an ENI
        // *   **VpnGateway**: a VPN gateway
        // *   **IPv6Gateway**: an IPv6 gateway
        // *   **Ipv4Gateway**: an IPv4 gateway
        // *   **NatGateway**: a NAT gateway
        // *   **Attachment**: a network instance connection
        // *   **service**: a cloud service
        // *   **VBR**: a VBR
        // *   **CCN**: a CCN instance
        // *   **VPC**: a VPC
        // *   **local**: a system route (no next hop is specified)
        // *   **TR**: a transit router
        // *   **BlackHole**: a blackhole route (no next hop is specified)
        // *   **EcRouterInterface**: a router interface for Express Connect
        // *   **HealthCheck**: a health check
        // *   **AS**: an access gateway for CCN
        // *   **classic**: a classic network-type instance
        // *   **GatewayEndpoint**: a gateway endpoint
        // *   **CPE**: a data center connected to a VBR
        shared_ptr<string> nextHopType_ {};
        // Indicates whether the route is allowed to be advertised to or withdrawn from the CEN instance. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> operationalMode_ {};
        // Indicates whether the route is advertised to the CEN instance. Valid values:
        // 
        // *   **Published**
        // *   **NonPublished**
        shared_ptr<string> publishStatus_ {};
        // The route table ID.
        shared_ptr<string> routeTableId_ {};
        // The route status. Valid values:
        // 
        // *   **Active**: available routes
        // *   **Candidate**: standby routes
        // *   **Rejected**: rejected routes
        // *   **Prohibited**: prohibited routes
        shared_ptr<string> status_ {};
        // The route type. Valid values:
        // 
        // *   **CEN**: route that is advertised through CEN
        // *   **System**: system route
        // *   **Custom**: custom route
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->cenRouteEntry_ == nullptr; };
      // cenRouteEntry Field Functions 
      bool hasCenRouteEntry() const { return this->cenRouteEntry_ != nullptr;};
      void deleteCenRouteEntry() { this->cenRouteEntry_ = nullptr;};
      inline const vector<CenRouteEntries::CenRouteEntry> & getCenRouteEntry() const { DARABONBA_PTR_GET_CONST(cenRouteEntry_, vector<CenRouteEntries::CenRouteEntry>) };
      inline vector<CenRouteEntries::CenRouteEntry> getCenRouteEntry() { DARABONBA_PTR_GET(cenRouteEntry_, vector<CenRouteEntries::CenRouteEntry>) };
      inline CenRouteEntries& setCenRouteEntry(const vector<CenRouteEntries::CenRouteEntry> & cenRouteEntry) { DARABONBA_PTR_SET_VALUE(cenRouteEntry_, cenRouteEntry) };
      inline CenRouteEntries& setCenRouteEntry(vector<CenRouteEntries::CenRouteEntry> && cenRouteEntry) { DARABONBA_PTR_SET_RVALUE(cenRouteEntry_, cenRouteEntry) };


    protected:
      shared_ptr<vector<CenRouteEntries::CenRouteEntry>> cenRouteEntry_ {};
    };

    virtual bool empty() const override { return this->cenRouteEntries_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // cenRouteEntries Field Functions 
    bool hasCenRouteEntries() const { return this->cenRouteEntries_ != nullptr;};
    void deleteCenRouteEntries() { this->cenRouteEntries_ = nullptr;};
    inline const DescribeCenChildInstanceRouteEntriesResponseBody::CenRouteEntries & getCenRouteEntries() const { DARABONBA_PTR_GET_CONST(cenRouteEntries_, DescribeCenChildInstanceRouteEntriesResponseBody::CenRouteEntries) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody::CenRouteEntries getCenRouteEntries() { DARABONBA_PTR_GET(cenRouteEntries_, DescribeCenChildInstanceRouteEntriesResponseBody::CenRouteEntries) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setCenRouteEntries(const DescribeCenChildInstanceRouteEntriesResponseBody::CenRouteEntries & cenRouteEntries) { DARABONBA_PTR_SET_VALUE(cenRouteEntries_, cenRouteEntries) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setCenRouteEntries(DescribeCenChildInstanceRouteEntriesResponseBody::CenRouteEntries && cenRouteEntries) { DARABONBA_PTR_SET_RVALUE(cenRouteEntries_, cenRouteEntries) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenChildInstanceRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the route.
    shared_ptr<DescribeCenChildInstanceRouteEntriesResponseBody::CenRouteEntries> cenRouteEntries_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
