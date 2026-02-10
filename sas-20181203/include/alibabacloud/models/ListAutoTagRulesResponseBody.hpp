// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTOTAGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTOTAGRULESRESPONSEBODY_HPP_
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
  class ListAutoTagRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAutoTagRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoTagRuleList, autoTagRuleList_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAutoTagRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoTagRuleList, autoTagRuleList_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAutoTagRulesResponseBody() = default ;
    ListAutoTagRulesResponseBody(const ListAutoTagRulesResponseBody &) = default ;
    ListAutoTagRulesResponseBody(ListAutoTagRulesResponseBody &&) = default ;
    ListAutoTagRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAutoTagRulesResponseBody() = default ;
    ListAutoTagRulesResponseBody& operator=(const ListAutoTagRulesResponseBody &) = default ;
    ListAutoTagRulesResponseBody& operator=(ListAutoTagRulesResponseBody &&) = default ;
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
      // The number of entries returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    class AutoTagRuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoTagRuleList& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(Expression, expression_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ModifiedTimestamp, modifiedTimestamp_);
        DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(TagContext, tagContext_);
        DARABONBA_PTR_TO_JSON(TagType, tagType_);
      };
      friend void from_json(const Darabonba::Json& j, AutoTagRuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(Expression, expression_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ModifiedTimestamp, modifiedTimestamp_);
        DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(TagContext, tagContext_);
        DARABONBA_PTR_FROM_JSON(TagType, tagType_);
      };
      AutoTagRuleList() = default ;
      AutoTagRuleList(const AutoTagRuleList &) = default ;
      AutoTagRuleList(AutoTagRuleList &&) = default ;
      AutoTagRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoTagRuleList() = default ;
      AutoTagRuleList& operator=(const AutoTagRuleList &) = default ;
      AutoTagRuleList& operator=(AutoTagRuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->createTimestamp_ == nullptr && this->expression_ == nullptr && this->id_ == nullptr && this->modifiedTimestamp_ == nullptr && this->ruleDesc_ == nullptr
        && this->ruleName_ == nullptr && this->tagContext_ == nullptr && this->tagType_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline AutoTagRuleList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline AutoTagRuleList& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // expression Field Functions 
      bool hasExpression() const { return this->expression_ != nullptr;};
      void deleteExpression() { this->expression_ = nullptr;};
      inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
      inline AutoTagRuleList& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline AutoTagRuleList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // modifiedTimestamp Field Functions 
      bool hasModifiedTimestamp() const { return this->modifiedTimestamp_ != nullptr;};
      void deleteModifiedTimestamp() { this->modifiedTimestamp_ = nullptr;};
      inline int64_t getModifiedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimestamp_, 0L) };
      inline AutoTagRuleList& setModifiedTimestamp(int64_t modifiedTimestamp) { DARABONBA_PTR_SET_VALUE(modifiedTimestamp_, modifiedTimestamp) };


      // ruleDesc Field Functions 
      bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
      void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
      inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
      inline AutoTagRuleList& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline AutoTagRuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // tagContext Field Functions 
      bool hasTagContext() const { return this->tagContext_ != nullptr;};
      void deleteTagContext() { this->tagContext_ = nullptr;};
      inline string getTagContext() const { DARABONBA_PTR_GET_DEFAULT(tagContext_, "") };
      inline AutoTagRuleList& setTagContext(string tagContext) { DARABONBA_PTR_SET_VALUE(tagContext_, tagContext) };


      // tagType Field Functions 
      bool hasTagType() const { return this->tagType_ != nullptr;};
      void deleteTagType() { this->tagType_ = nullptr;};
      inline string getTagType() const { DARABONBA_PTR_GET_DEFAULT(tagType_, "") };
      inline AutoTagRuleList& setTagType(string tagType) { DARABONBA_PTR_SET_VALUE(tagType_, tagType) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The timestamp when the rule was created. Unit: milliseconds.
      shared_ptr<int64_t> createTimestamp_ {};
      // The expression of the rule.
      shared_ptr<string> expression_ {};
      // The ID of the rule.
      shared_ptr<int32_t> id_ {};
      // The timestamp when the rule was last updated. Unit: milliseconds.
      shared_ptr<int64_t> modifiedTimestamp_ {};
      // The description of the rule.
      shared_ptr<string> ruleDesc_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The tag specified by the operation type of the rule.
      shared_ptr<string> tagContext_ {};
      // The operation type of the rule. Valid values:
      // 
      // *   **group**
      // *   **tag**
      shared_ptr<string> tagType_ {};
    };

    virtual bool empty() const override { return this->autoTagRuleList_ == nullptr
        && this->pageInfo_ == nullptr && this->requestId_ == nullptr; };
    // autoTagRuleList Field Functions 
    bool hasAutoTagRuleList() const { return this->autoTagRuleList_ != nullptr;};
    void deleteAutoTagRuleList() { this->autoTagRuleList_ = nullptr;};
    inline const vector<ListAutoTagRulesResponseBody::AutoTagRuleList> & getAutoTagRuleList() const { DARABONBA_PTR_GET_CONST(autoTagRuleList_, vector<ListAutoTagRulesResponseBody::AutoTagRuleList>) };
    inline vector<ListAutoTagRulesResponseBody::AutoTagRuleList> getAutoTagRuleList() { DARABONBA_PTR_GET(autoTagRuleList_, vector<ListAutoTagRulesResponseBody::AutoTagRuleList>) };
    inline ListAutoTagRulesResponseBody& setAutoTagRuleList(const vector<ListAutoTagRulesResponseBody::AutoTagRuleList> & autoTagRuleList) { DARABONBA_PTR_SET_VALUE(autoTagRuleList_, autoTagRuleList) };
    inline ListAutoTagRulesResponseBody& setAutoTagRuleList(vector<ListAutoTagRulesResponseBody::AutoTagRuleList> && autoTagRuleList) { DARABONBA_PTR_SET_RVALUE(autoTagRuleList_, autoTagRuleList) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAutoTagRulesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAutoTagRulesResponseBody::PageInfo) };
    inline ListAutoTagRulesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAutoTagRulesResponseBody::PageInfo) };
    inline ListAutoTagRulesResponseBody& setPageInfo(const ListAutoTagRulesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAutoTagRulesResponseBody& setPageInfo(ListAutoTagRulesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAutoTagRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The asset auto-tagging rules.
    shared_ptr<vector<ListAutoTagRulesResponseBody::AutoTagRuleList>> autoTagRuleList_ {};
    // The pagination information.
    shared_ptr<ListAutoTagRulesResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
