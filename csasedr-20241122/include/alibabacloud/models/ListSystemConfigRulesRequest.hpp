// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMCONFIGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMCONFIGRULESREQUEST_HPP_
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
  class ListSystemConfigRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemConfigRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationIds, aggregationIds_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTypes, ruleTypes_);
      DARABONBA_PTR_TO_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemConfigRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationIds, aggregationIds_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTypes, ruleTypes_);
      DARABONBA_PTR_FROM_JSON(SelectionKey, selectionKey_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
    };
    ListSystemConfigRulesRequest() = default ;
    ListSystemConfigRulesRequest(const ListSystemConfigRulesRequest &) = default ;
    ListSystemConfigRulesRequest(ListSystemConfigRulesRequest &&) = default ;
    ListSystemConfigRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemConfigRulesRequest() = default ;
    ListSystemConfigRulesRequest& operator=(const ListSystemConfigRulesRequest &) = default ;
    ListSystemConfigRulesRequest& operator=(ListSystemConfigRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregationIds_ == nullptr
        && this->currentPage_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->ruleName_ == nullptr && this->ruleTypes_ == nullptr
        && this->selectionKey_ == nullptr && this->systemType_ == nullptr; };
    // aggregationIds Field Functions 
    bool hasAggregationIds() const { return this->aggregationIds_ != nullptr;};
    void deleteAggregationIds() { this->aggregationIds_ = nullptr;};
    inline const vector<int32_t> & getAggregationIds() const { DARABONBA_PTR_GET_CONST(aggregationIds_, vector<int32_t>) };
    inline vector<int32_t> getAggregationIds() { DARABONBA_PTR_GET(aggregationIds_, vector<int32_t>) };
    inline ListSystemConfigRulesRequest& setAggregationIds(const vector<int32_t> & aggregationIds) { DARABONBA_PTR_SET_VALUE(aggregationIds_, aggregationIds) };
    inline ListSystemConfigRulesRequest& setAggregationIds(vector<int32_t> && aggregationIds) { DARABONBA_PTR_SET_RVALUE(aggregationIds_, aggregationIds) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSystemConfigRulesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListSystemConfigRulesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSystemConfigRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListSystemConfigRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTypes Field Functions 
    bool hasRuleTypes() const { return this->ruleTypes_ != nullptr;};
    void deleteRuleTypes() { this->ruleTypes_ = nullptr;};
    inline const vector<int32_t> & getRuleTypes() const { DARABONBA_PTR_GET_CONST(ruleTypes_, vector<int32_t>) };
    inline vector<int32_t> getRuleTypes() { DARABONBA_PTR_GET(ruleTypes_, vector<int32_t>) };
    inline ListSystemConfigRulesRequest& setRuleTypes(const vector<int32_t> & ruleTypes) { DARABONBA_PTR_SET_VALUE(ruleTypes_, ruleTypes) };
    inline ListSystemConfigRulesRequest& setRuleTypes(vector<int32_t> && ruleTypes) { DARABONBA_PTR_SET_RVALUE(ruleTypes_, ruleTypes) };


    // selectionKey Field Functions 
    bool hasSelectionKey() const { return this->selectionKey_ != nullptr;};
    void deleteSelectionKey() { this->selectionKey_ = nullptr;};
    inline string getSelectionKey() const { DARABONBA_PTR_GET_DEFAULT(selectionKey_, "") };
    inline ListSystemConfigRulesRequest& setSelectionKey(string selectionKey) { DARABONBA_PTR_SET_VALUE(selectionKey_, selectionKey) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline int32_t getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, 0) };
    inline ListSystemConfigRulesRequest& setSystemType(int32_t systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


  protected:
    // The list of system rule category IDs.
    shared_ptr<vector<int32_t>> aggregationIds_ {};
    // The current page number.
    shared_ptr<int32_t> currentPage_ {};
    // The language used for the rule name and description. Valid values:
    // - **zh**: Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The maximum number of entries to return on each page during paging in a paged query.
    shared_ptr<int32_t> pageSize_ {};
    // The rule name.
    shared_ptr<string> ruleName_ {};
    // The list of rule types for filtering.
    shared_ptr<vector<int32_t>> ruleTypes_ {};
    // The key for the switch configuration of rules associated with a policy. Use the SelectionKey saved for the same policy.
    shared_ptr<string> selectionKey_ {};
    // The system platform identifier used for filtering. Valid values:
    // - **1**: Linux.
    // - **2**: Windows.
    // - **3**: Mac.
    shared_ptr<int32_t> systemType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
