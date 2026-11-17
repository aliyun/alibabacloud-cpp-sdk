// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAiEngineEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SeachValue, seachValue_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SeachValue, seachValue_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeAiEngineEventsRequest() = default ;
    DescribeAiEngineEventsRequest(const DescribeAiEngineEventsRequest &) = default ;
    DescribeAiEngineEventsRequest(DescribeAiEngineEventsRequest &&) = default ;
    DescribeAiEngineEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineEventsRequest() = default ;
    DescribeAiEngineEventsRequest& operator=(const DescribeAiEngineEventsRequest &) = default ;
    DescribeAiEngineEventsRequest& operator=(DescribeAiEngineEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(domain, domain_);
        DARABONBA_PTR_TO_JSON(eventId, eventId_);
        DARABONBA_PTR_TO_JSON(eventNodeCount, eventNodeCount_);
        DARABONBA_PTR_TO_JSON(handleStatus, handleStatus_);
        DARABONBA_PTR_TO_JSON(resource, resource_);
        DARABONBA_PTR_TO_JSON(riskLevel, riskLevel_);
        DARABONBA_PTR_TO_JSON(sourceAccount, sourceAccount_);
        DARABONBA_PTR_TO_JSON(sourceFingerprint, sourceFingerprint_);
        DARABONBA_PTR_TO_JSON(sourceIp, sourceIp_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(domain, domain_);
        DARABONBA_PTR_FROM_JSON(eventId, eventId_);
        DARABONBA_PTR_FROM_JSON(eventNodeCount, eventNodeCount_);
        DARABONBA_PTR_FROM_JSON(handleStatus, handleStatus_);
        DARABONBA_PTR_FROM_JSON(resource, resource_);
        DARABONBA_PTR_FROM_JSON(riskLevel, riskLevel_);
        DARABONBA_PTR_FROM_JSON(sourceAccount, sourceAccount_);
        DARABONBA_PTR_FROM_JSON(sourceFingerprint, sourceFingerprint_);
        DARABONBA_PTR_FROM_JSON(sourceIp, sourceIp_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->eventId_ == nullptr && this->eventNodeCount_ == nullptr && this->handleStatus_ == nullptr && this->resource_ == nullptr && this->riskLevel_ == nullptr
        && this->sourceAccount_ == nullptr && this->sourceFingerprint_ == nullptr && this->sourceIp_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Filter& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // eventId Field Functions 
      bool hasEventId() const { return this->eventId_ != nullptr;};
      void deleteEventId() { this->eventId_ = nullptr;};
      inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
      inline Filter& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


      // eventNodeCount Field Functions 
      bool hasEventNodeCount() const { return this->eventNodeCount_ != nullptr;};
      void deleteEventNodeCount() { this->eventNodeCount_ = nullptr;};
      inline int32_t getEventNodeCount() const { DARABONBA_PTR_GET_DEFAULT(eventNodeCount_, 0) };
      inline Filter& setEventNodeCount(int32_t eventNodeCount) { DARABONBA_PTR_SET_VALUE(eventNodeCount_, eventNodeCount) };


      // handleStatus Field Functions 
      bool hasHandleStatus() const { return this->handleStatus_ != nullptr;};
      void deleteHandleStatus() { this->handleStatus_ = nullptr;};
      inline string getHandleStatus() const { DARABONBA_PTR_GET_DEFAULT(handleStatus_, "") };
      inline Filter& setHandleStatus(string handleStatus) { DARABONBA_PTR_SET_VALUE(handleStatus_, handleStatus) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline Filter& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // riskLevel Field Functions 
      bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
      void deleteRiskLevel() { this->riskLevel_ = nullptr;};
      inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
      inline Filter& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      // sourceAccount Field Functions 
      bool hasSourceAccount() const { return this->sourceAccount_ != nullptr;};
      void deleteSourceAccount() { this->sourceAccount_ = nullptr;};
      inline string getSourceAccount() const { DARABONBA_PTR_GET_DEFAULT(sourceAccount_, "") };
      inline Filter& setSourceAccount(string sourceAccount) { DARABONBA_PTR_SET_VALUE(sourceAccount_, sourceAccount) };


      // sourceFingerprint Field Functions 
      bool hasSourceFingerprint() const { return this->sourceFingerprint_ != nullptr;};
      void deleteSourceFingerprint() { this->sourceFingerprint_ = nullptr;};
      inline string getSourceFingerprint() const { DARABONBA_PTR_GET_DEFAULT(sourceFingerprint_, "") };
      inline Filter& setSourceFingerprint(string sourceFingerprint) { DARABONBA_PTR_SET_VALUE(sourceFingerprint_, sourceFingerprint) };


      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline Filter& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    protected:
      // The domain name.
      shared_ptr<string> domain_ {};
      // The event ID.
      shared_ptr<string> eventId_ {};
      // The number of nodes included in the event.
      shared_ptr<int32_t> eventNodeCount_ {};
      // The event handling status.
      shared_ptr<string> handleStatus_ {};
      // The protected object.
      shared_ptr<string> resource_ {};
      // The risk level.
      shared_ptr<string> riskLevel_ {};
      // The source account of the attack.
      shared_ptr<string> sourceAccount_ {};
      // The source fingerprint of the attack.
      shared_ptr<string> sourceFingerprint_ {};
      // The source IP address of the attack.
      shared_ptr<string> sourceIp_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->filter_ == nullptr && this->instanceId_ == nullptr && this->language_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->seachValue_ == nullptr && this->searchKey_ == nullptr && this->sortBy_ == nullptr
        && this->sortOrder_ == nullptr && this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeAiEngineEventsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const DescribeAiEngineEventsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, DescribeAiEngineEventsRequest::Filter) };
    inline DescribeAiEngineEventsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, DescribeAiEngineEventsRequest::Filter) };
    inline DescribeAiEngineEventsRequest& setFilter(const DescribeAiEngineEventsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeAiEngineEventsRequest& setFilter(DescribeAiEngineEventsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAiEngineEventsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeAiEngineEventsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAiEngineEventsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAiEngineEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAiEngineEventsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeAiEngineEventsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // seachValue Field Functions 
    bool hasSeachValue() const { return this->seachValue_ != nullptr;};
    void deleteSeachValue() { this->seachValue_ = nullptr;};
    inline string getSeachValue() const { DARABONBA_PTR_GET_DEFAULT(seachValue_, "") };
    inline DescribeAiEngineEventsRequest& setSeachValue(string seachValue) { DARABONBA_PTR_SET_VALUE(seachValue_, seachValue) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeAiEngineEventsRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline DescribeAiEngineEventsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline DescribeAiEngineEventsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeAiEngineEventsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time. The time is a UNIX timestamp in UTC. Unit: seconds. The data is filtered based on the time when the event was last detected. The end time must be later than the start time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The filter conditions. Exact match is used, and multiple conditions are connected by the AND logical operator.
    shared_ptr<DescribeAiEngineEventsRequest::Filter> filter_ {};
    // The ID of the WAF instance.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the current WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language of the response.
    shared_ptr<string> language_ {};
    // The number of entries to return on each page in a paging query. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. The value is the **NextToken** parameter value returned by the previous API call. You do not need to specify this parameter for the first query.
    shared_ptr<string> nextToken_ {};
    // The region ID of the WAF instance.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The search value. This parameter is used together with SearchKey. Maximum length: 256 characters.
    shared_ptr<string> seachValue_ {};
    // The search field. This parameter is used together with SeachValue.
    shared_ptr<string> searchKey_ {};
    // The field by which to sort the results.
    shared_ptr<string> sortBy_ {};
    // The sort order.
    shared_ptr<string> sortOrder_ {};
    // The start time. The time is a UNIX timestamp in UTC. Unit: seconds. The data is filtered based on the time when the event was last detected. You can query data within the last 30 days.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
