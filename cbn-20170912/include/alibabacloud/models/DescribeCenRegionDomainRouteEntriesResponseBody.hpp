// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECENREGIONDOMAINROUTEENTRIESRESPONSEBODY_HPP_
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
  class DescribeCenRegionDomainRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCenRegionDomainRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CenRouteEntries, cenRouteEntries_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCenRegionDomainRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CenRouteEntries, cenRouteEntries_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCenRegionDomainRouteEntriesResponseBody() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBody(const DescribeCenRegionDomainRouteEntriesResponseBody &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBody(DescribeCenRegionDomainRouteEntriesResponseBody &&) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCenRegionDomainRouteEntriesResponseBody() = default ;
    DescribeCenRegionDomainRouteEntriesResponseBody& operator=(const DescribeCenRegionDomainRouteEntriesResponseBody &) = default ;
    DescribeCenRegionDomainRouteEntriesResponseBody& operator=(DescribeCenRegionDomainRouteEntriesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(CenOutRouteMapRecords, cenOutRouteMapRecords_);
          DARABONBA_PTR_TO_JSON(CenRouteMapRecords, cenRouteMapRecords_);
          DARABONBA_PTR_TO_JSON(Communities, communities_);
          DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_TO_JSON(NextHopInstanceId, nextHopInstanceId_);
          DARABONBA_PTR_TO_JSON(NextHopRegionId, nextHopRegionId_);
          DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_TO_JSON(Preference, preference_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(ToOtherRegionStatus, toOtherRegionStatus_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, CenRouteEntry& obj) { 
          DARABONBA_PTR_FROM_JSON(AsPaths, asPaths_);
          DARABONBA_PTR_FROM_JSON(CenOutRouteMapRecords, cenOutRouteMapRecords_);
          DARABONBA_PTR_FROM_JSON(CenRouteMapRecords, cenRouteMapRecords_);
          DARABONBA_PTR_FROM_JSON(Communities, communities_);
          DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
          DARABONBA_PTR_FROM_JSON(NextHopInstanceId, nextHopInstanceId_);
          DARABONBA_PTR_FROM_JSON(NextHopRegionId, nextHopRegionId_);
          DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
          DARABONBA_PTR_FROM_JSON(Preference, preference_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(ToOtherRegionStatus, toOtherRegionStatus_);
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
            // The ID of the region where the routing policy is applied.
            shared_ptr<string> regionId_ {};
            // The ID of the routing policy.
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

        class CenOutRouteMapRecords : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const CenOutRouteMapRecords& obj) { 
            DARABONBA_PTR_TO_JSON(CenOutRouteMapRecord, cenOutRouteMapRecord_);
          };
          friend void from_json(const Darabonba::Json& j, CenOutRouteMapRecords& obj) { 
            DARABONBA_PTR_FROM_JSON(CenOutRouteMapRecord, cenOutRouteMapRecord_);
          };
          CenOutRouteMapRecords() = default ;
          CenOutRouteMapRecords(const CenOutRouteMapRecords &) = default ;
          CenOutRouteMapRecords(CenOutRouteMapRecords &&) = default ;
          CenOutRouteMapRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~CenOutRouteMapRecords() = default ;
          CenOutRouteMapRecords& operator=(const CenOutRouteMapRecords &) = default ;
          CenOutRouteMapRecords& operator=(CenOutRouteMapRecords &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class CenOutRouteMapRecord : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const CenOutRouteMapRecord& obj) { 
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(RouteMapId, routeMapId_);
            };
            friend void from_json(const Darabonba::Json& j, CenOutRouteMapRecord& obj) { 
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(RouteMapId, routeMapId_);
            };
            CenOutRouteMapRecord() = default ;
            CenOutRouteMapRecord(const CenOutRouteMapRecord &) = default ;
            CenOutRouteMapRecord(CenOutRouteMapRecord &&) = default ;
            CenOutRouteMapRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~CenOutRouteMapRecord() = default ;
            CenOutRouteMapRecord& operator=(const CenOutRouteMapRecord &) = default ;
            CenOutRouteMapRecord& operator=(CenOutRouteMapRecord &&) = default ;
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
            inline CenOutRouteMapRecord& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // routeMapId Field Functions 
            bool hasRouteMapId() const { return this->routeMapId_ != nullptr;};
            void deleteRouteMapId() { this->routeMapId_ = nullptr;};
            inline string getRouteMapId() const { DARABONBA_PTR_GET_DEFAULT(routeMapId_, "") };
            inline CenOutRouteMapRecord& setRouteMapId(string routeMapId) { DARABONBA_PTR_SET_VALUE(routeMapId_, routeMapId) };


          protected:
            // The ID of the region where the routing policy is applied.
            shared_ptr<string> regionId_ {};
            // The ID of the routing policy.
            shared_ptr<string> routeMapId_ {};
          };

          virtual bool empty() const override { return this->cenOutRouteMapRecord_ == nullptr; };
          // cenOutRouteMapRecord Field Functions 
          bool hasCenOutRouteMapRecord() const { return this->cenOutRouteMapRecord_ != nullptr;};
          void deleteCenOutRouteMapRecord() { this->cenOutRouteMapRecord_ = nullptr;};
          inline const vector<CenOutRouteMapRecords::CenOutRouteMapRecord> & getCenOutRouteMapRecord() const { DARABONBA_PTR_GET_CONST(cenOutRouteMapRecord_, vector<CenOutRouteMapRecords::CenOutRouteMapRecord>) };
          inline vector<CenOutRouteMapRecords::CenOutRouteMapRecord> getCenOutRouteMapRecord() { DARABONBA_PTR_GET(cenOutRouteMapRecord_, vector<CenOutRouteMapRecords::CenOutRouteMapRecord>) };
          inline CenOutRouteMapRecords& setCenOutRouteMapRecord(const vector<CenOutRouteMapRecords::CenOutRouteMapRecord> & cenOutRouteMapRecord) { DARABONBA_PTR_SET_VALUE(cenOutRouteMapRecord_, cenOutRouteMapRecord) };
          inline CenOutRouteMapRecords& setCenOutRouteMapRecord(vector<CenOutRouteMapRecords::CenOutRouteMapRecord> && cenOutRouteMapRecord) { DARABONBA_PTR_SET_RVALUE(cenOutRouteMapRecord_, cenOutRouteMapRecord) };


        protected:
          shared_ptr<vector<CenOutRouteMapRecords::CenOutRouteMapRecord>> cenOutRouteMapRecord_ {};
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
        && this->cenOutRouteMapRecords_ == nullptr && this->cenRouteMapRecords_ == nullptr && this->communities_ == nullptr && this->destinationCidrBlock_ == nullptr && this->nextHopInstanceId_ == nullptr
        && this->nextHopRegionId_ == nullptr && this->nextHopType_ == nullptr && this->preference_ == nullptr && this->status_ == nullptr && this->toOtherRegionStatus_ == nullptr
        && this->type_ == nullptr; };
        // asPaths Field Functions 
        bool hasAsPaths() const { return this->asPaths_ != nullptr;};
        void deleteAsPaths() { this->asPaths_ = nullptr;};
        inline const CenRouteEntry::AsPaths & getAsPaths() const { DARABONBA_PTR_GET_CONST(asPaths_, CenRouteEntry::AsPaths) };
        inline CenRouteEntry::AsPaths getAsPaths() { DARABONBA_PTR_GET(asPaths_, CenRouteEntry::AsPaths) };
        inline CenRouteEntry& setAsPaths(const CenRouteEntry::AsPaths & asPaths) { DARABONBA_PTR_SET_VALUE(asPaths_, asPaths) };
        inline CenRouteEntry& setAsPaths(CenRouteEntry::AsPaths && asPaths) { DARABONBA_PTR_SET_RVALUE(asPaths_, asPaths) };


        // cenOutRouteMapRecords Field Functions 
        bool hasCenOutRouteMapRecords() const { return this->cenOutRouteMapRecords_ != nullptr;};
        void deleteCenOutRouteMapRecords() { this->cenOutRouteMapRecords_ = nullptr;};
        inline const CenRouteEntry::CenOutRouteMapRecords & getCenOutRouteMapRecords() const { DARABONBA_PTR_GET_CONST(cenOutRouteMapRecords_, CenRouteEntry::CenOutRouteMapRecords) };
        inline CenRouteEntry::CenOutRouteMapRecords getCenOutRouteMapRecords() { DARABONBA_PTR_GET(cenOutRouteMapRecords_, CenRouteEntry::CenOutRouteMapRecords) };
        inline CenRouteEntry& setCenOutRouteMapRecords(const CenRouteEntry::CenOutRouteMapRecords & cenOutRouteMapRecords) { DARABONBA_PTR_SET_VALUE(cenOutRouteMapRecords_, cenOutRouteMapRecords) };
        inline CenRouteEntry& setCenOutRouteMapRecords(CenRouteEntry::CenOutRouteMapRecords && cenOutRouteMapRecords) { DARABONBA_PTR_SET_RVALUE(cenOutRouteMapRecords_, cenOutRouteMapRecords) };


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


        // preference Field Functions 
        bool hasPreference() const { return this->preference_ != nullptr;};
        void deletePreference() { this->preference_ = nullptr;};
        inline int32_t getPreference() const { DARABONBA_PTR_GET_DEFAULT(preference_, 0) };
        inline CenRouteEntry& setPreference(int32_t preference) { DARABONBA_PTR_SET_VALUE(preference_, preference) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline CenRouteEntry& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // toOtherRegionStatus Field Functions 
        bool hasToOtherRegionStatus() const { return this->toOtherRegionStatus_ != nullptr;};
        void deleteToOtherRegionStatus() { this->toOtherRegionStatus_ = nullptr;};
        inline string getToOtherRegionStatus() const { DARABONBA_PTR_GET_DEFAULT(toOtherRegionStatus_, "") };
        inline CenRouteEntry& setToOtherRegionStatus(string toOtherRegionStatus) { DARABONBA_PTR_SET_VALUE(toOtherRegionStatus_, toOtherRegionStatus) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CenRouteEntry& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The AS paths of the route.
        shared_ptr<CenRouteEntry::AsPaths> asPaths_ {};
        // The routing policy that the routes match in the outbound direction.
        shared_ptr<CenRouteEntry::CenOutRouteMapRecords> cenOutRouteMapRecords_ {};
        // The routing policy that the routes match in the inbound direction.
        shared_ptr<CenRouteEntry::CenRouteMapRecords> cenRouteMapRecords_ {};
        // The communities of the route.
        shared_ptr<CenRouteEntry::Communities> communities_ {};
        // The destination CIDR block of the route.
        shared_ptr<string> destinationCidrBlock_ {};
        // The ID of the instance specified as the next hop in the route.
        shared_ptr<string> nextHopInstanceId_ {};
        // The ID of the region to which the network instance specified as the next hop in the route belongs.
        shared_ptr<string> nextHopRegionId_ {};
        // The type of the instance specified as the next hop in the route. Valid values:
        // 
        // *   **VPC**: virtual private cloud (VPC)
        // *   **VBR**: virtual border router (VBR)
        // *   **CCN**: Cloud Connect Network (CCN) instance
        // *   **local_service**: system route. No next hop is specified.
        shared_ptr<string> nextHopType_ {};
        // The route priority.
        // 
        // A smaller value indicates a higher priority.
        shared_ptr<int32_t> preference_ {};
        // The route status. Valid values:
        // 
        // *   **Active**: available
        // *   **Candidate**: standby
        // *   **Rejected**: rejected
        // *   **Prohibited**: prohibited
        shared_ptr<string> status_ {};
        // Indicates whether the route can be advertised to other regions. Valid values:
        // 
        // *   **Active**: The route can be advertised to other regions.
        // *   **Prohibited**: The route cannot be advertised to other regions.
        shared_ptr<string> toOtherRegionStatus_ {};
        // The route type. Valid values:
        // 
        // *   **CEN**: route that is advertised through CEN
        // *   **Custom**: custom route
        // *   **System**: system route
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
    inline const DescribeCenRegionDomainRouteEntriesResponseBody::CenRouteEntries & getCenRouteEntries() const { DARABONBA_PTR_GET_CONST(cenRouteEntries_, DescribeCenRegionDomainRouteEntriesResponseBody::CenRouteEntries) };
    inline DescribeCenRegionDomainRouteEntriesResponseBody::CenRouteEntries getCenRouteEntries() { DARABONBA_PTR_GET(cenRouteEntries_, DescribeCenRegionDomainRouteEntriesResponseBody::CenRouteEntries) };
    inline DescribeCenRegionDomainRouteEntriesResponseBody& setCenRouteEntries(const DescribeCenRegionDomainRouteEntriesResponseBody::CenRouteEntries & cenRouteEntries) { DARABONBA_PTR_SET_VALUE(cenRouteEntries_, cenRouteEntries) };
    inline DescribeCenRegionDomainRouteEntriesResponseBody& setCenRouteEntries(DescribeCenRegionDomainRouteEntriesResponseBody::CenRouteEntries && cenRouteEntries) { DARABONBA_PTR_SET_RVALUE(cenRouteEntries_, cenRouteEntries) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCenRegionDomainRouteEntriesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCenRegionDomainRouteEntriesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCenRegionDomainRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeCenRegionDomainRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // A list of route entries.
    shared_ptr<DescribeCenRegionDomainRouteEntriesResponseBody::CenRouteEntries> cenRouteEntries_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
