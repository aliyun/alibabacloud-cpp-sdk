// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTMARKMISSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTMARKMISSLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DescribeSecurityEventMarkMissListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventMarkMissListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventMarkMissListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSecurityEventMarkMissListResponseBody() = default ;
    DescribeSecurityEventMarkMissListResponseBody(const DescribeSecurityEventMarkMissListResponseBody &) = default ;
    DescribeSecurityEventMarkMissListResponseBody(DescribeSecurityEventMarkMissListResponseBody &&) = default ;
    DescribeSecurityEventMarkMissListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventMarkMissListResponseBody() = default ;
    DescribeSecurityEventMarkMissListResponseBody& operator=(const DescribeSecurityEventMarkMissListResponseBody &) = default ;
    DescribeSecurityEventMarkMissListResponseBody& operator=(DescribeSecurityEventMarkMissListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline PageInfo& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of whitelist rules on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the current page in a paging query.
      shared_ptr<int32_t> currentPage_ {};
      // The number of whitelist rules to return on each page in a paging query. Default value: **20**.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of queried whitelist rules.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AssetScopeId, assetScopeId_);
        DARABONBA_PTR_TO_JSON(DisposalWay, disposalWay_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(EventNameOriginal, eventNameOriginal_);
        DARABONBA_PTR_TO_JSON(EventType, eventType_);
        DARABONBA_PTR_TO_JSON(EventTypeOriginal, eventTypeOriginal_);
        DARABONBA_PTR_TO_JSON(Field, field_);
        DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(HitCount, hitCount_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(Operate, operate_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        DARABONBA_PTR_TO_JSON(Uuids, uuids_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AssetScopeId, assetScopeId_);
        DARABONBA_PTR_FROM_JSON(DisposalWay, disposalWay_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(EventNameOriginal, eventNameOriginal_);
        DARABONBA_PTR_FROM_JSON(EventType, eventType_);
        DARABONBA_PTR_FROM_JSON(EventTypeOriginal, eventTypeOriginal_);
        DARABONBA_PTR_FROM_JSON(Field, field_);
        DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(HitCount, hitCount_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(Operate, operate_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->assetScopeId_ == nullptr && this->disposalWay_ == nullptr && this->eventName_ == nullptr && this->eventNameOriginal_ == nullptr && this->eventType_ == nullptr
        && this->eventTypeOriginal_ == nullptr && this->field_ == nullptr && this->fieldValue_ == nullptr && this->filedAliasName_ == nullptr && this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->hitCount_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->internetIp_ == nullptr && this->intranetIp_ == nullptr && this->operate_ == nullptr && this->uuid_ == nullptr && this->uuids_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline List& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // assetScopeId Field Functions 
      bool hasAssetScopeId() const { return this->assetScopeId_ != nullptr;};
      void deleteAssetScopeId() { this->assetScopeId_ = nullptr;};
      inline int64_t getAssetScopeId() const { DARABONBA_PTR_GET_DEFAULT(assetScopeId_, 0L) };
      inline List& setAssetScopeId(int64_t assetScopeId) { DARABONBA_PTR_SET_VALUE(assetScopeId_, assetScopeId) };


      // disposalWay Field Functions 
      bool hasDisposalWay() const { return this->disposalWay_ != nullptr;};
      void deleteDisposalWay() { this->disposalWay_ = nullptr;};
      inline string getDisposalWay() const { DARABONBA_PTR_GET_DEFAULT(disposalWay_, "") };
      inline List& setDisposalWay(string disposalWay) { DARABONBA_PTR_SET_VALUE(disposalWay_, disposalWay) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline List& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // eventNameOriginal Field Functions 
      bool hasEventNameOriginal() const { return this->eventNameOriginal_ != nullptr;};
      void deleteEventNameOriginal() { this->eventNameOriginal_ = nullptr;};
      inline string getEventNameOriginal() const { DARABONBA_PTR_GET_DEFAULT(eventNameOriginal_, "") };
      inline List& setEventNameOriginal(string eventNameOriginal) { DARABONBA_PTR_SET_VALUE(eventNameOriginal_, eventNameOriginal) };


      // eventType Field Functions 
      bool hasEventType() const { return this->eventType_ != nullptr;};
      void deleteEventType() { this->eventType_ = nullptr;};
      inline string getEventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
      inline List& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


      // eventTypeOriginal Field Functions 
      bool hasEventTypeOriginal() const { return this->eventTypeOriginal_ != nullptr;};
      void deleteEventTypeOriginal() { this->eventTypeOriginal_ = nullptr;};
      inline string getEventTypeOriginal() const { DARABONBA_PTR_GET_DEFAULT(eventTypeOriginal_, "") };
      inline List& setEventTypeOriginal(string eventTypeOriginal) { DARABONBA_PTR_SET_VALUE(eventTypeOriginal_, eventTypeOriginal) };


      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline List& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline List& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


      // filedAliasName Field Functions 
      bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
      void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
      inline string getFiledAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
      inline List& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline List& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline List& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // hitCount Field Functions 
      bool hasHitCount() const { return this->hitCount_ != nullptr;};
      void deleteHitCount() { this->hitCount_ = nullptr;};
      inline int32_t getHitCount() const { DARABONBA_PTR_GET_DEFAULT(hitCount_, 0) };
      inline List& setHitCount(int32_t hitCount) { DARABONBA_PTR_SET_VALUE(hitCount_, hitCount) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline List& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline List& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline List& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline List& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // operate Field Functions 
      bool hasOperate() const { return this->operate_ != nullptr;};
      void deleteOperate() { this->operate_ = nullptr;};
      inline string getOperate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
      inline List& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline List& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      // uuids Field Functions 
      bool hasUuids() const { return this->uuids_ != nullptr;};
      void deleteUuids() { this->uuids_ = nullptr;};
      inline string getUuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
      inline List& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


    protected:
      // The user ID.
      shared_ptr<int64_t> aliUid_ {};
      // The ID of the Endpoint Detection and Response (EDR) asset scope associated with the alert rule. You can call the DescribeAssetScope operation to query the corresponding scope.
      shared_ptr<int64_t> assetScopeId_ {};
      // The disposal method of the rule. The current operation does not assign a value to this field. Valid values:
      // 
      // - **auto_add_white**: Automatic whitelisting.
      // - **defense_not_notification**: Defense only without notification.
      shared_ptr<string> disposalWay_ {};
      // The display text of the alert name.
      shared_ptr<string> eventName_ {};
      // The original identifier of the alert name.
      shared_ptr<string> eventNameOriginal_ {};
      // The display name of the alerting type.
      shared_ptr<string> eventType_ {};
      // The original identifier of the alerting type.
      shared_ptr<string> eventTypeOriginal_ {};
      // The name of the rule matching field. The field used when creating a rule is subject to the corresponding FiledName returned by DescribeSecurityEventOperations.
      shared_ptr<string> field_ {};
      // The rule matching value, which defines the matching condition together with Field and Operate.
      shared_ptr<string> fieldValue_ {};
      // The alias of the whitelisting field.
      shared_ptr<string> filedAliasName_ {};
      // **[Deprecated]** This field is deprecated.
      shared_ptr<int64_t> gmtCreate_ {};
      // **[Deprecated]** This field is deprecated.
      shared_ptr<int64_t> gmtModified_ {};
      // The number of hits for the alert whitelist rule.
      shared_ptr<int32_t> hitCount_ {};
      // The ID of the alert whitelist rule.
      shared_ptr<int64_t> id_ {};
      // The instance identity of the terminal or asset.
      shared_ptr<string> instanceId_ {};
      // The instance name of the asset.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the terminal or asset.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the terminal or asset.
      shared_ptr<string> intranetIp_ {};
      // The rule matching operator. The available operators for a specific field are subject to the corresponding SupportedMisTypes field returned by DescribeSecurityEventOperations. The following shared operators are available, but not all fields support all values:
      // 
      // - **contains**: Contains.
      // - **notContains**: Does not contain.
      // - **strEqual**: Equal to.
      // - **strNotEqual**: Not equal to.
      // - **regex**: Regular expression match.
      shared_ptr<string> operate_ {};
      // The UUID of the asset instance. For rules associated with an asset scope, the effective scope is identified by AssetScopeId, and the UUID of the target asset is not returned.
      shared_ptr<string> uuid_ {};
      // The list of UUIDs of associated assets. Multiple values are separated by commas (,). The current operation does not assign a value to this field.
      shared_ptr<string> uuids_ {};
    };

    virtual bool empty() const override { return this->list_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeSecurityEventMarkMissListResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeSecurityEventMarkMissListResponseBody::List>) };
    inline vector<DescribeSecurityEventMarkMissListResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<DescribeSecurityEventMarkMissListResponseBody::List>) };
    inline DescribeSecurityEventMarkMissListResponseBody& setList(const vector<DescribeSecurityEventMarkMissListResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeSecurityEventMarkMissListResponseBody& setList(vector<DescribeSecurityEventMarkMissListResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeSecurityEventMarkMissListResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeSecurityEventMarkMissListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSecurityEventMarkMissListResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSecurityEventMarkMissListResponseBody::PageInfo) };
    inline DescribeSecurityEventMarkMissListResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSecurityEventMarkMissListResponseBody::PageInfo) };
    inline DescribeSecurityEventMarkMissListResponseBody& setPageInfo(const DescribeSecurityEventMarkMissListResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSecurityEventMarkMissListResponseBody& setPageInfo(DescribeSecurityEventMarkMissListResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventMarkMissListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of whitelist rules.
    shared_ptr<vector<DescribeSecurityEventMarkMissListResponseBody::List>> list_ {};
    // The maximum number of records to return in a single query. This field is reserved for compatibility. The backend currently uses CurrentPage and PageSize for pagination.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token.
    shared_ptr<string> nextToken_ {};
    // The pagination information.
    shared_ptr<DescribeSecurityEventMarkMissListResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request. It is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
