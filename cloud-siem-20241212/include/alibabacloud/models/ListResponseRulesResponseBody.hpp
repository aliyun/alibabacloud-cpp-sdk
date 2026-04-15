// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESPONSERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESPONSERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListResponseRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResponseRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResponseRules, responseRules_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListResponseRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResponseRules, responseRules_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListResponseRulesResponseBody() = default ;
    ListResponseRulesResponseBody(const ListResponseRulesResponseBody &) = default ;
    ListResponseRulesResponseBody(ListResponseRulesResponseBody &&) = default ;
    ListResponseRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResponseRulesResponseBody() = default ;
    ListResponseRulesResponseBody& operator=(const ListResponseRulesResponseBody &) = default ;
    ListResponseRulesResponseBody& operator=(ListResponseRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResponseRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseRules& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ResponseActionConfig, responseActionConfig_);
        DARABONBA_PTR_TO_JSON(ResponseActionType, responseActionType_);
        DARABONBA_PTR_TO_JSON(ResponseExecutionCondition, responseExecutionCondition_);
        DARABONBA_PTR_TO_JSON(ResponseRuleId, responseRuleId_);
        DARABONBA_PTR_TO_JSON(ResponseRuleName, responseRuleName_);
        DARABONBA_PTR_TO_JSON(ResponseRulePriority, responseRulePriority_);
        DARABONBA_PTR_TO_JSON(ResponseRuleStatus, responseRuleStatus_);
        DARABONBA_PTR_TO_JSON(ResponseRuleType, responseRuleType_);
        DARABONBA_PTR_TO_JSON(ResponseTriggerType, responseTriggerType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ResponseActionConfig, responseActionConfig_);
        DARABONBA_PTR_FROM_JSON(ResponseActionType, responseActionType_);
        DARABONBA_PTR_FROM_JSON(ResponseExecutionCondition, responseExecutionCondition_);
        DARABONBA_PTR_FROM_JSON(ResponseRuleId, responseRuleId_);
        DARABONBA_PTR_FROM_JSON(ResponseRuleName, responseRuleName_);
        DARABONBA_PTR_FROM_JSON(ResponseRulePriority, responseRulePriority_);
        DARABONBA_PTR_FROM_JSON(ResponseRuleStatus, responseRuleStatus_);
        DARABONBA_PTR_FROM_JSON(ResponseRuleType, responseRuleType_);
        DARABONBA_PTR_FROM_JSON(ResponseTriggerType, responseTriggerType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ResponseRules() = default ;
      ResponseRules(const ResponseRules &) = default ;
      ResponseRules(ResponseRules &&) = default ;
      ResponseRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResponseRules() = default ;
      ResponseRules& operator=(const ResponseRules &) = default ;
      ResponseRules& operator=(ResponseRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->responseActionConfig_ == nullptr && this->responseActionType_ == nullptr && this->responseExecutionCondition_ == nullptr && this->responseRuleId_ == nullptr && this->responseRuleName_ == nullptr
        && this->responseRulePriority_ == nullptr && this->responseRuleStatus_ == nullptr && this->responseRuleType_ == nullptr && this->responseTriggerType_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline ResponseRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // responseActionConfig Field Functions 
      bool hasResponseActionConfig() const { return this->responseActionConfig_ != nullptr;};
      void deleteResponseActionConfig() { this->responseActionConfig_ = nullptr;};
      inline string getResponseActionConfig() const { DARABONBA_PTR_GET_DEFAULT(responseActionConfig_, "") };
      inline ResponseRules& setResponseActionConfig(string responseActionConfig) { DARABONBA_PTR_SET_VALUE(responseActionConfig_, responseActionConfig) };


      // responseActionType Field Functions 
      bool hasResponseActionType() const { return this->responseActionType_ != nullptr;};
      void deleteResponseActionType() { this->responseActionType_ = nullptr;};
      inline string getResponseActionType() const { DARABONBA_PTR_GET_DEFAULT(responseActionType_, "") };
      inline ResponseRules& setResponseActionType(string responseActionType) { DARABONBA_PTR_SET_VALUE(responseActionType_, responseActionType) };


      // responseExecutionCondition Field Functions 
      bool hasResponseExecutionCondition() const { return this->responseExecutionCondition_ != nullptr;};
      void deleteResponseExecutionCondition() { this->responseExecutionCondition_ = nullptr;};
      inline string getResponseExecutionCondition() const { DARABONBA_PTR_GET_DEFAULT(responseExecutionCondition_, "") };
      inline ResponseRules& setResponseExecutionCondition(string responseExecutionCondition) { DARABONBA_PTR_SET_VALUE(responseExecutionCondition_, responseExecutionCondition) };


      // responseRuleId Field Functions 
      bool hasResponseRuleId() const { return this->responseRuleId_ != nullptr;};
      void deleteResponseRuleId() { this->responseRuleId_ = nullptr;};
      inline string getResponseRuleId() const { DARABONBA_PTR_GET_DEFAULT(responseRuleId_, "") };
      inline ResponseRules& setResponseRuleId(string responseRuleId) { DARABONBA_PTR_SET_VALUE(responseRuleId_, responseRuleId) };


      // responseRuleName Field Functions 
      bool hasResponseRuleName() const { return this->responseRuleName_ != nullptr;};
      void deleteResponseRuleName() { this->responseRuleName_ = nullptr;};
      inline string getResponseRuleName() const { DARABONBA_PTR_GET_DEFAULT(responseRuleName_, "") };
      inline ResponseRules& setResponseRuleName(string responseRuleName) { DARABONBA_PTR_SET_VALUE(responseRuleName_, responseRuleName) };


      // responseRulePriority Field Functions 
      bool hasResponseRulePriority() const { return this->responseRulePriority_ != nullptr;};
      void deleteResponseRulePriority() { this->responseRulePriority_ = nullptr;};
      inline int32_t getResponseRulePriority() const { DARABONBA_PTR_GET_DEFAULT(responseRulePriority_, 0) };
      inline ResponseRules& setResponseRulePriority(int32_t responseRulePriority) { DARABONBA_PTR_SET_VALUE(responseRulePriority_, responseRulePriority) };


      // responseRuleStatus Field Functions 
      bool hasResponseRuleStatus() const { return this->responseRuleStatus_ != nullptr;};
      void deleteResponseRuleStatus() { this->responseRuleStatus_ = nullptr;};
      inline int32_t getResponseRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(responseRuleStatus_, 0) };
      inline ResponseRules& setResponseRuleStatus(int32_t responseRuleStatus) { DARABONBA_PTR_SET_VALUE(responseRuleStatus_, responseRuleStatus) };


      // responseRuleType Field Functions 
      bool hasResponseRuleType() const { return this->responseRuleType_ != nullptr;};
      void deleteResponseRuleType() { this->responseRuleType_ = nullptr;};
      inline string getResponseRuleType() const { DARABONBA_PTR_GET_DEFAULT(responseRuleType_, "") };
      inline ResponseRules& setResponseRuleType(string responseRuleType) { DARABONBA_PTR_SET_VALUE(responseRuleType_, responseRuleType) };


      // responseTriggerType Field Functions 
      bool hasResponseTriggerType() const { return this->responseTriggerType_ != nullptr;};
      void deleteResponseTriggerType() { this->responseTriggerType_ = nullptr;};
      inline string getResponseTriggerType() const { DARABONBA_PTR_GET_DEFAULT(responseTriggerType_, "") };
      inline ResponseRules& setResponseTriggerType(string responseTriggerType) { DARABONBA_PTR_SET_VALUE(responseTriggerType_, responseTriggerType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline ResponseRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> responseActionConfig_ {};
      shared_ptr<string> responseActionType_ {};
      shared_ptr<string> responseExecutionCondition_ {};
      shared_ptr<string> responseRuleId_ {};
      shared_ptr<string> responseRuleName_ {};
      shared_ptr<int32_t> responseRulePriority_ {};
      shared_ptr<int32_t> responseRuleStatus_ {};
      shared_ptr<string> responseRuleType_ {};
      shared_ptr<string> responseTriggerType_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->responseRules_ == nullptr
        && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResponseRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResponseRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListResponseRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListResponseRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResponseRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // responseRules Field Functions 
    bool hasResponseRules() const { return this->responseRules_ != nullptr;};
    void deleteResponseRules() { this->responseRules_ = nullptr;};
    inline const vector<ListResponseRulesResponseBody::ResponseRules> & getResponseRules() const { DARABONBA_PTR_GET_CONST(responseRules_, vector<ListResponseRulesResponseBody::ResponseRules>) };
    inline vector<ListResponseRulesResponseBody::ResponseRules> getResponseRules() { DARABONBA_PTR_GET(responseRules_, vector<ListResponseRulesResponseBody::ResponseRules>) };
    inline ListResponseRulesResponseBody& setResponseRules(const vector<ListResponseRulesResponseBody::ResponseRules> & responseRules) { DARABONBA_PTR_SET_VALUE(responseRules_, responseRules) };
    inline ListResponseRulesResponseBody& setResponseRules(vector<ListResponseRulesResponseBody::ResponseRules> && responseRules) { DARABONBA_PTR_SET_RVALUE(responseRules_, responseRules) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListResponseRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListResponseRulesResponseBody::ResponseRules>> responseRules_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
