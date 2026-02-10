// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListContainerDefenseRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContainerDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListContainerDefenseRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListContainerDefenseRuleResponseBody() = default ;
    ListContainerDefenseRuleResponseBody(const ListContainerDefenseRuleResponseBody &) = default ;
    ListContainerDefenseRuleResponseBody(ListContainerDefenseRuleResponseBody &&) = default ;
    ListContainerDefenseRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContainerDefenseRuleResponseBody() = default ;
    ListContainerDefenseRuleResponseBody& operator=(const ListContainerDefenseRuleResponseBody &) = default ;
    ListContainerDefenseRuleResponseBody& operator=(ListContainerDefenseRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(LastRowKey, lastRowKey_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(LastRowKey, lastRowKey_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
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
        && this->currentPage_ == nullptr && this->lastRowKey_ == nullptr && this->nextToken_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
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


      // lastRowKey Field Functions 
      bool hasLastRowKey() const { return this->lastRowKey_ != nullptr;};
      void deleteLastRowKey() { this->lastRowKey_ = nullptr;};
      inline string getLastRowKey() const { DARABONBA_PTR_GET_DEFAULT(lastRowKey_, "") };
      inline PageInfo& setLastRowKey(string lastRowKey) { DARABONBA_PTR_SET_VALUE(lastRowKey_, lastRowKey) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline PageInfo& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The key of the last data entry.
      shared_ptr<string> lastRowKey_ {};
      // The query credential.
      shared_ptr<string> nextToken_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_TO_JSON(ClusterIdList, clusterIdList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
        DARABONBA_PTR_FROM_JSON(ClusterIdList, clusterIdList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
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
      virtual bool empty() const override { return this->clusterCount_ == nullptr
        && this->clusterIdList_ == nullptr && this->description_ == nullptr && this->ruleAction_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->ruleSwitch_ == nullptr && this->ruleType_ == nullptr; };
      // clusterCount Field Functions 
      bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
      void deleteClusterCount() { this->clusterCount_ = nullptr;};
      inline int32_t getClusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
      inline List& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


      // clusterIdList Field Functions 
      bool hasClusterIdList() const { return this->clusterIdList_ != nullptr;};
      void deleteClusterIdList() { this->clusterIdList_ = nullptr;};
      inline string getClusterIdList() const { DARABONBA_PTR_GET_DEFAULT(clusterIdList_, "") };
      inline List& setClusterIdList(string clusterIdList) { DARABONBA_PTR_SET_VALUE(clusterIdList_, clusterIdList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline List& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline int32_t getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
      inline List& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline List& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline List& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleSwitch Field Functions 
      bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
      void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
      inline int32_t getRuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
      inline List& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
      inline List& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    protected:
      // The total number of clusters.
      shared_ptr<int32_t> clusterCount_ {};
      // The clusters specified in the rule.
      shared_ptr<string> clusterIdList_ {};
      // The description of the rule.
      shared_ptr<string> description_ {};
      // The action specified in the rule. Valid values:
      // 
      // *   **1**: alert
      // *   **2**: block
      shared_ptr<int32_t> ruleAction_ {};
      // The ID of the rule.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The status of the rule. Valid values:
      // 
      // *   **1**: enabled
      // *   **0**: disabled
      shared_ptr<int32_t> ruleSwitch_ {};
      // The type of the rule. Valid values:
      // 
      // *   **1**: system rule
      // *   **2**: custom rule
      shared_ptr<int32_t> ruleType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->list_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListContainerDefenseRuleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListContainerDefenseRuleResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<ListContainerDefenseRuleResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<ListContainerDefenseRuleResponseBody::List>) };
    inline vector<ListContainerDefenseRuleResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<ListContainerDefenseRuleResponseBody::List>) };
    inline ListContainerDefenseRuleResponseBody& setList(const vector<ListContainerDefenseRuleResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline ListContainerDefenseRuleResponseBody& setList(vector<ListContainerDefenseRuleResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListContainerDefenseRuleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListContainerDefenseRuleResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListContainerDefenseRuleResponseBody::PageInfo) };
    inline ListContainerDefenseRuleResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListContainerDefenseRuleResponseBody::PageInfo) };
    inline ListContainerDefenseRuleResponseBody& setPageInfo(const ListContainerDefenseRuleResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListContainerDefenseRuleResponseBody& setPageInfo(ListContainerDefenseRuleResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListContainerDefenseRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListContainerDefenseRuleResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code. The status code **200** indicates that the request was successful. Other status codes indicate that the request failed. You can identify the cause of the failure based on the status code.
    shared_ptr<string> code_ {};
    // The HTTP status code that is returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The rules.
    shared_ptr<vector<ListContainerDefenseRuleResponseBody::List>> list_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The pagination information.
    shared_ptr<ListContainerDefenseRuleResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
