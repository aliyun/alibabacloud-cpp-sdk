// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRECURSIONZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchRecursionZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRecursionZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRecursionZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    SearchRecursionZonesResponseBody() = default ;
    SearchRecursionZonesResponseBody(const SearchRecursionZonesResponseBody &) = default ;
    SearchRecursionZonesResponseBody(SearchRecursionZonesResponseBody &&) = default ;
    SearchRecursionZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRecursionZonesResponseBody() = default ;
    SearchRecursionZonesResponseBody& operator=(const SearchRecursionZonesResponseBody &) = default ;
    SearchRecursionZonesResponseBody& operator=(SearchRecursionZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Zones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Zones& obj) { 
        DARABONBA_PTR_TO_JSON(Zone, zone_);
      };
      friend void from_json(const Darabonba::Json& j, Zones& obj) { 
        DARABONBA_PTR_FROM_JSON(Zone, zone_);
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
      class Zone : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Zone& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_TO_JSON(Creator, creator_);
          DARABONBA_PTR_TO_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_TO_JSON(EffectiveScopes, effectiveScopes_);
          DARABONBA_PTR_TO_JSON(ProxyPattern, proxyPattern_);
          DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_TO_JSON(Remark, remark_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
        };
        friend void from_json(const Darabonba::Json& j, Zone& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
          DARABONBA_PTR_FROM_JSON(Creator, creator_);
          DARABONBA_PTR_FROM_JSON(CreatorSubType, creatorSubType_);
          DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
          DARABONBA_PTR_FROM_JSON(EffectiveScopes, effectiveScopes_);
          DARABONBA_PTR_FROM_JSON(ProxyPattern, proxyPattern_);
          DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
          DARABONBA_PTR_FROM_JSON(Remark, remark_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
        };
        Zone() = default ;
        Zone(const Zone &) = default ;
        Zone(Zone &&) = default ;
        Zone(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Zone() = default ;
        Zone& operator=(const Zone &) = default ;
        Zone& operator=(Zone &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EffectiveScopes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EffectiveScopes& obj) { 
            DARABONBA_PTR_TO_JSON(EffectiveScope, effectiveScope_);
          };
          friend void from_json(const Darabonba::Json& j, EffectiveScopes& obj) { 
            DARABONBA_PTR_FROM_JSON(EffectiveScope, effectiveScope_);
          };
          EffectiveScopes() = default ;
          EffectiveScopes(const EffectiveScopes &) = default ;
          EffectiveScopes(EffectiveScopes &&) = default ;
          EffectiveScopes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EffectiveScopes() = default ;
          EffectiveScopes& operator=(const EffectiveScopes &) = default ;
          EffectiveScopes& operator=(EffectiveScopes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class EffectiveScope : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EffectiveScope& obj) { 
              DARABONBA_PTR_TO_JSON(EffectiveType, effectiveType_);
              DARABONBA_PTR_TO_JSON(Scopes, scopes_);
            };
            friend void from_json(const Darabonba::Json& j, EffectiveScope& obj) { 
              DARABONBA_PTR_FROM_JSON(EffectiveType, effectiveType_);
              DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
            };
            EffectiveScope() = default ;
            EffectiveScope(const EffectiveScope &) = default ;
            EffectiveScope(EffectiveScope &&) = default ;
            EffectiveScope(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EffectiveScope() = default ;
            EffectiveScope& operator=(const EffectiveScope &) = default ;
            EffectiveScope& operator=(EffectiveScope &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Scopes : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Scopes& obj) { 
                DARABONBA_PTR_TO_JSON(Scope, scope_);
              };
              friend void from_json(const Darabonba::Json& j, Scopes& obj) { 
                DARABONBA_PTR_FROM_JSON(Scope, scope_);
              };
              Scopes() = default ;
              Scopes(const Scopes &) = default ;
              Scopes(Scopes &&) = default ;
              Scopes(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Scopes() = default ;
              Scopes& operator=(const Scopes &) = default ;
              Scopes& operator=(Scopes &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->scope_ == nullptr; };
              // scope Field Functions 
              bool hasScope() const { return this->scope_ != nullptr;};
              void deleteScope() { this->scope_ = nullptr;};
              inline const vector<string> & getScope() const { DARABONBA_PTR_GET_CONST(scope_, vector<string>) };
              inline vector<string> getScope() { DARABONBA_PTR_GET(scope_, vector<string>) };
              inline Scopes& setScope(const vector<string> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
              inline Scopes& setScope(vector<string> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


            protected:
              shared_ptr<vector<string>> scope_ {};
            };

            virtual bool empty() const override { return this->effectiveType_ == nullptr
        && this->scopes_ == nullptr; };
            // effectiveType Field Functions 
            bool hasEffectiveType() const { return this->effectiveType_ != nullptr;};
            void deleteEffectiveType() { this->effectiveType_ = nullptr;};
            inline string getEffectiveType() const { DARABONBA_PTR_GET_DEFAULT(effectiveType_, "") };
            inline EffectiveScope& setEffectiveType(string effectiveType) { DARABONBA_PTR_SET_VALUE(effectiveType_, effectiveType) };


            // scopes Field Functions 
            bool hasScopes() const { return this->scopes_ != nullptr;};
            void deleteScopes() { this->scopes_ = nullptr;};
            inline const EffectiveScope::Scopes & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, EffectiveScope::Scopes) };
            inline EffectiveScope::Scopes getScopes() { DARABONBA_PTR_GET(scopes_, EffectiveScope::Scopes) };
            inline EffectiveScope& setScopes(const EffectiveScope::Scopes & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
            inline EffectiveScope& setScopes(EffectiveScope::Scopes && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


          protected:
            shared_ptr<string> effectiveType_ {};
            shared_ptr<EffectiveScope::Scopes> scopes_ {};
          };

          virtual bool empty() const override { return this->effectiveScope_ == nullptr; };
          // effectiveScope Field Functions 
          bool hasEffectiveScope() const { return this->effectiveScope_ != nullptr;};
          void deleteEffectiveScope() { this->effectiveScope_ = nullptr;};
          inline const vector<EffectiveScopes::EffectiveScope> & getEffectiveScope() const { DARABONBA_PTR_GET_CONST(effectiveScope_, vector<EffectiveScopes::EffectiveScope>) };
          inline vector<EffectiveScopes::EffectiveScope> getEffectiveScope() { DARABONBA_PTR_GET(effectiveScope_, vector<EffectiveScopes::EffectiveScope>) };
          inline EffectiveScopes& setEffectiveScope(const vector<EffectiveScopes::EffectiveScope> & effectiveScope) { DARABONBA_PTR_SET_VALUE(effectiveScope_, effectiveScope) };
          inline EffectiveScopes& setEffectiveScope(vector<EffectiveScopes::EffectiveScope> && effectiveScope) { DARABONBA_PTR_SET_RVALUE(effectiveScope_, effectiveScope) };


        protected:
          shared_ptr<vector<EffectiveScopes::EffectiveScope>> effectiveScope_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->creator_ == nullptr && this->creatorSubType_ == nullptr && this->creatorType_ == nullptr && this->effectiveScopes_ == nullptr
        && this->proxyPattern_ == nullptr && this->recordCount_ == nullptr && this->remark_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr
        && this->zoneId_ == nullptr && this->zoneName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Zone& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createTimestamp Field Functions 
        bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
        void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
        inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
        inline Zone& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


        // creator Field Functions 
        bool hasCreator() const { return this->creator_ != nullptr;};
        void deleteCreator() { this->creator_ = nullptr;};
        inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
        inline Zone& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


        // creatorSubType Field Functions 
        bool hasCreatorSubType() const { return this->creatorSubType_ != nullptr;};
        void deleteCreatorSubType() { this->creatorSubType_ = nullptr;};
        inline string getCreatorSubType() const { DARABONBA_PTR_GET_DEFAULT(creatorSubType_, "") };
        inline Zone& setCreatorSubType(string creatorSubType) { DARABONBA_PTR_SET_VALUE(creatorSubType_, creatorSubType) };


        // creatorType Field Functions 
        bool hasCreatorType() const { return this->creatorType_ != nullptr;};
        void deleteCreatorType() { this->creatorType_ = nullptr;};
        inline string getCreatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
        inline Zone& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


        // effectiveScopes Field Functions 
        bool hasEffectiveScopes() const { return this->effectiveScopes_ != nullptr;};
        void deleteEffectiveScopes() { this->effectiveScopes_ = nullptr;};
        inline const Zone::EffectiveScopes & getEffectiveScopes() const { DARABONBA_PTR_GET_CONST(effectiveScopes_, Zone::EffectiveScopes) };
        inline Zone::EffectiveScopes getEffectiveScopes() { DARABONBA_PTR_GET(effectiveScopes_, Zone::EffectiveScopes) };
        inline Zone& setEffectiveScopes(const Zone::EffectiveScopes & effectiveScopes) { DARABONBA_PTR_SET_VALUE(effectiveScopes_, effectiveScopes) };
        inline Zone& setEffectiveScopes(Zone::EffectiveScopes && effectiveScopes) { DARABONBA_PTR_SET_RVALUE(effectiveScopes_, effectiveScopes) };


        // proxyPattern Field Functions 
        bool hasProxyPattern() const { return this->proxyPattern_ != nullptr;};
        void deleteProxyPattern() { this->proxyPattern_ = nullptr;};
        inline string getProxyPattern() const { DARABONBA_PTR_GET_DEFAULT(proxyPattern_, "") };
        inline Zone& setProxyPattern(string proxyPattern) { DARABONBA_PTR_SET_VALUE(proxyPattern_, proxyPattern) };


        // recordCount Field Functions 
        bool hasRecordCount() const { return this->recordCount_ != nullptr;};
        void deleteRecordCount() { this->recordCount_ = nullptr;};
        inline int32_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0) };
        inline Zone& setRecordCount(int32_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


        // remark Field Functions 
        bool hasRemark() const { return this->remark_ != nullptr;};
        void deleteRemark() { this->remark_ = nullptr;};
        inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
        inline Zone& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Zone& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // updateTimestamp Field Functions 
        bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
        void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
        inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
        inline Zone& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Zone& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        // zoneName Field Functions 
        bool hasZoneName() const { return this->zoneName_ != nullptr;};
        void deleteZoneName() { this->zoneName_ = nullptr;};
        inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
        inline Zone& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


      protected:
        shared_ptr<string> createTime_ {};
        shared_ptr<int64_t> createTimestamp_ {};
        shared_ptr<string> creator_ {};
        shared_ptr<string> creatorSubType_ {};
        shared_ptr<string> creatorType_ {};
        shared_ptr<Zone::EffectiveScopes> effectiveScopes_ {};
        shared_ptr<string> proxyPattern_ {};
        shared_ptr<int32_t> recordCount_ {};
        shared_ptr<string> remark_ {};
        shared_ptr<string> updateTime_ {};
        shared_ptr<int64_t> updateTimestamp_ {};
        shared_ptr<string> zoneId_ {};
        shared_ptr<string> zoneName_ {};
      };

      virtual bool empty() const override { return this->zone_ == nullptr; };
      // zone Field Functions 
      bool hasZone() const { return this->zone_ != nullptr;};
      void deleteZone() { this->zone_ = nullptr;};
      inline const vector<Zones::Zone> & getZone() const { DARABONBA_PTR_GET_CONST(zone_, vector<Zones::Zone>) };
      inline vector<Zones::Zone> getZone() { DARABONBA_PTR_GET(zone_, vector<Zones::Zone>) };
      inline Zones& setZone(const vector<Zones::Zone> & zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };
      inline Zones& setZone(vector<Zones::Zone> && zone) { DARABONBA_PTR_SET_RVALUE(zone_, zone) };


    protected:
      shared_ptr<vector<Zones::Zone>> zone_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr
        && this->totalPages_ == nullptr && this->zones_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchRecursionZonesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchRecursionZonesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchRecursionZonesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchRecursionZonesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchRecursionZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline SearchRecursionZonesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline SearchRecursionZonesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const SearchRecursionZonesResponseBody::Zones & getZones() const { DARABONBA_PTR_GET_CONST(zones_, SearchRecursionZonesResponseBody::Zones) };
    inline SearchRecursionZonesResponseBody::Zones getZones() { DARABONBA_PTR_GET(zones_, SearchRecursionZonesResponseBody::Zones) };
    inline SearchRecursionZonesResponseBody& setZones(const SearchRecursionZonesResponseBody::Zones & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline SearchRecursionZonesResponseBody& setZones(SearchRecursionZonesResponseBody::Zones && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalItems_ {};
    shared_ptr<int32_t> totalPages_ {};
    shared_ptr<SearchRecursionZonesResponseBody::Zones> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
