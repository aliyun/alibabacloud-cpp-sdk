// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMAGGREGATIONRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMAGGREGATIONRULESREQUEST_HPP_
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
  class ListSystemAggregationRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemAggregationRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationIds, aggregationIds_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTypes, ruleTypes_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemAggregationRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationIds, aggregationIds_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTypes, ruleTypes_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
    };
    ListSystemAggregationRulesRequest() = default ;
    ListSystemAggregationRulesRequest(const ListSystemAggregationRulesRequest &) = default ;
    ListSystemAggregationRulesRequest(ListSystemAggregationRulesRequest &&) = default ;
    ListSystemAggregationRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemAggregationRulesRequest() = default ;
    ListSystemAggregationRulesRequest& operator=(const ListSystemAggregationRulesRequest &) = default ;
    ListSystemAggregationRulesRequest& operator=(ListSystemAggregationRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregationIds_ == nullptr
        && return this->currentPage_ == nullptr && return this->lang_ == nullptr && return this->pageSize_ == nullptr && return this->ruleName_ == nullptr && return this->ruleTypes_ == nullptr
        && return this->systemType_ == nullptr; };
    // aggregationIds Field Functions 
    bool hasAggregationIds() const { return this->aggregationIds_ != nullptr;};
    void deleteAggregationIds() { this->aggregationIds_ = nullptr;};
    inline const vector<int32_t> & aggregationIds() const { DARABONBA_PTR_GET_CONST(aggregationIds_, vector<int32_t>) };
    inline vector<int32_t> aggregationIds() { DARABONBA_PTR_GET(aggregationIds_, vector<int32_t>) };
    inline ListSystemAggregationRulesRequest& setAggregationIds(const vector<int32_t> & aggregationIds) { DARABONBA_PTR_SET_VALUE(aggregationIds_, aggregationIds) };
    inline ListSystemAggregationRulesRequest& setAggregationIds(vector<int32_t> && aggregationIds) { DARABONBA_PTR_SET_RVALUE(aggregationIds_, aggregationIds) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSystemAggregationRulesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListSystemAggregationRulesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSystemAggregationRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListSystemAggregationRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTypes Field Functions 
    bool hasRuleTypes() const { return this->ruleTypes_ != nullptr;};
    void deleteRuleTypes() { this->ruleTypes_ = nullptr;};
    inline const vector<int32_t> & ruleTypes() const { DARABONBA_PTR_GET_CONST(ruleTypes_, vector<int32_t>) };
    inline vector<int32_t> ruleTypes() { DARABONBA_PTR_GET(ruleTypes_, vector<int32_t>) };
    inline ListSystemAggregationRulesRequest& setRuleTypes(const vector<int32_t> & ruleTypes) { DARABONBA_PTR_SET_VALUE(ruleTypes_, ruleTypes) };
    inline ListSystemAggregationRulesRequest& setRuleTypes(vector<int32_t> && ruleTypes) { DARABONBA_PTR_SET_RVALUE(ruleTypes_, ruleTypes) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline int32_t systemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, 0) };
    inline ListSystemAggregationRulesRequest& setSystemType(int32_t systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


  protected:
    // The IDs of the aggregation types.
    std::shared_ptr<vector<int32_t>> aggregationIds_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The types of the rules.
    std::shared_ptr<vector<int32_t>> ruleTypes_ = nullptr;
    // The type of the operating system. Valid values:
    // 
    // *   **2**: Windows
    // *   **1**: Linux
    // *   **0**: all
    std::shared_ptr<int32_t> systemType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
