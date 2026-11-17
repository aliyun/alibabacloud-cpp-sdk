// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVIDENCEREQUESTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIENGINEEVIDENCEREQUESTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAiEngineEvidenceRequestsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAiEngineEvidenceRequestsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventId, eventId_);
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
    };
    friend void from_json(const Darabonba::Json& j, DescribeAiEngineEvidenceRequestsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventId, eventId_);
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
    };
    DescribeAiEngineEvidenceRequestsRequest() = default ;
    DescribeAiEngineEvidenceRequestsRequest(const DescribeAiEngineEvidenceRequestsRequest &) = default ;
    DescribeAiEngineEvidenceRequestsRequest(DescribeAiEngineEvidenceRequestsRequest &&) = default ;
    DescribeAiEngineEvidenceRequestsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAiEngineEvidenceRequestsRequest() = default ;
    DescribeAiEngineEvidenceRequestsRequest& operator=(const DescribeAiEngineEvidenceRequestsRequest &) = default ;
    DescribeAiEngineEvidenceRequestsRequest& operator=(DescribeAiEngineEvidenceRequestsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(httpStatus, httpStatus_);
        DARABONBA_PTR_TO_JSON(impactType, impactType_);
        DARABONBA_PTR_TO_JSON(method, method_);
        DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(sourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(suspectedBypass, suspectedBypass_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(httpStatus, httpStatus_);
        DARABONBA_PTR_FROM_JSON(impactType, impactType_);
        DARABONBA_PTR_FROM_JSON(method, method_);
        DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(sourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(suspectedBypass, suspectedBypass_);
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
      virtual bool empty() const override { return this->httpStatus_ == nullptr
        && this->impactType_ == nullptr && this->method_ == nullptr && this->nodeId_ == nullptr && this->sourceType_ == nullptr && this->suspectedBypass_ == nullptr; };
      // httpStatus Field Functions 
      bool hasHttpStatus() const { return this->httpStatus_ != nullptr;};
      void deleteHttpStatus() { this->httpStatus_ = nullptr;};
      inline string getHttpStatus() const { DARABONBA_PTR_GET_DEFAULT(httpStatus_, "") };
      inline Filter& setHttpStatus(string httpStatus) { DARABONBA_PTR_SET_VALUE(httpStatus_, httpStatus) };


      // impactType Field Functions 
      bool hasImpactType() const { return this->impactType_ != nullptr;};
      void deleteImpactType() { this->impactType_ = nullptr;};
      inline string getImpactType() const { DARABONBA_PTR_GET_DEFAULT(impactType_, "") };
      inline Filter& setImpactType(string impactType) { DARABONBA_PTR_SET_VALUE(impactType_, impactType) };


      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Filter& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Filter& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Filter& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // suspectedBypass Field Functions 
      bool hasSuspectedBypass() const { return this->suspectedBypass_ != nullptr;};
      void deleteSuspectedBypass() { this->suspectedBypass_ = nullptr;};
      inline string getSuspectedBypass() const { DARABONBA_PTR_GET_DEFAULT(suspectedBypass_, "") };
      inline Filter& setSuspectedBypass(string suspectedBypass) { DARABONBA_PTR_SET_VALUE(suspectedBypass_, suspectedBypass) };


    protected:
      // The HTTP status code.
      shared_ptr<string> httpStatus_ {};
      // The evidence impact tag.
      shared_ptr<string> impactType_ {};
      // The HTTP request method. Exact match is used.
      shared_ptr<string> method_ {};
      // The node ID. Exact match is used. The value can be up to 64 ASCII characters in length.
      shared_ptr<string> nodeId_ {};
      // The attack source type.
      shared_ptr<string> sourceType_ {};
      // Specifies whether the request is a suspected bypass.
      shared_ptr<string> suspectedBypass_ {};
    };

    virtual bool empty() const override { return this->eventId_ == nullptr
        && this->filter_ == nullptr && this->instanceId_ == nullptr && this->language_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr
        && this->regionId_ == nullptr && this->resourceManagerResourceGroupId_ == nullptr && this->seachValue_ == nullptr && this->searchKey_ == nullptr && this->sortBy_ == nullptr
        && this->sortOrder_ == nullptr; };
    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const DescribeAiEngineEvidenceRequestsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, DescribeAiEngineEvidenceRequestsRequest::Filter) };
    inline DescribeAiEngineEvidenceRequestsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, DescribeAiEngineEvidenceRequestsRequest::Filter) };
    inline DescribeAiEngineEvidenceRequestsRequest& setFilter(const DescribeAiEngineEvidenceRequestsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline DescribeAiEngineEvidenceRequestsRequest& setFilter(DescribeAiEngineEvidenceRequestsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeAiEngineEvidenceRequestsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string getResourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // seachValue Field Functions 
    bool hasSeachValue() const { return this->seachValue_ != nullptr;};
    void deleteSeachValue() { this->seachValue_ = nullptr;};
    inline string getSeachValue() const { DARABONBA_PTR_GET_DEFAULT(seachValue_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setSeachValue(string seachValue) { DARABONBA_PTR_SET_VALUE(seachValue_, seachValue) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string getSearchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline DescribeAiEngineEvidenceRequestsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // The event ID.
    // 
    // This parameter is required.
    shared_ptr<string> eventId_ {};
    // The filter conditions. Exact match is used, and multiple conditions are connected by the AND operator.
    shared_ptr<DescribeAiEngineEvidenceRequestsRequest::Filter> filter_ {};
    // The ID of the WAF instance.
    // 
    // > You can call the [DescribeInstance](https://help.aliyun.com/document_detail/433756.html) operation to query the ID of the current WAF instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The language of the response.
    shared_ptr<string> language_ {};
    // The number of entries to return per page in a paged query. This parameter is used for paging. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. The value is the **NextToken** parameter value returned by the previous API call. You do not need to specify this parameter for the first query.
    shared_ptr<string> nextToken_ {};
    // The region where the WAF instance resides.
    shared_ptr<string> regionId_ {};
    // The ID of the Alibaba Cloud resource group.
    shared_ptr<string> resourceManagerResourceGroupId_ {};
    // The search value. This parameter is used together with SearchKey. The value can be up to 256 characters in length.
    shared_ptr<string> seachValue_ {};
    // The search key. This parameter is used together with SeachValue.
    shared_ptr<string> searchKey_ {};
    // The sort field.
    shared_ptr<string> sortBy_ {};
    // The sort order.
    shared_ptr<string> sortOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
