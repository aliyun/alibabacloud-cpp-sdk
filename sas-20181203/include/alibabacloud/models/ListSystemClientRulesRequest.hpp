// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESREQUEST_HPP_
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
  class ListSystemClientRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemClientRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregationIds, aggregationIds_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IsContainer, isContainer_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleTypes, ruleTypes_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemClientRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregationIds, aggregationIds_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IsContainer, isContainer_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleTypes, ruleTypes_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
    };
    ListSystemClientRulesRequest() = default ;
    ListSystemClientRulesRequest(const ListSystemClientRulesRequest &) = default ;
    ListSystemClientRulesRequest(ListSystemClientRulesRequest &&) = default ;
    ListSystemClientRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemClientRulesRequest() = default ;
    ListSystemClientRulesRequest& operator=(const ListSystemClientRulesRequest &) = default ;
    ListSystemClientRulesRequest& operator=(ListSystemClientRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregationIds_ == nullptr
        && this->currentPage_ == nullptr && this->isContainer_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->ruleName_ == nullptr
        && this->ruleTypes_ == nullptr && this->systemType_ == nullptr; };
    // aggregationIds Field Functions 
    bool hasAggregationIds() const { return this->aggregationIds_ != nullptr;};
    void deleteAggregationIds() { this->aggregationIds_ = nullptr;};
    inline const vector<int32_t> & getAggregationIds() const { DARABONBA_PTR_GET_CONST(aggregationIds_, vector<int32_t>) };
    inline vector<int32_t> getAggregationIds() { DARABONBA_PTR_GET(aggregationIds_, vector<int32_t>) };
    inline ListSystemClientRulesRequest& setAggregationIds(const vector<int32_t> & aggregationIds) { DARABONBA_PTR_SET_VALUE(aggregationIds_, aggregationIds) };
    inline ListSystemClientRulesRequest& setAggregationIds(vector<int32_t> && aggregationIds) { DARABONBA_PTR_SET_RVALUE(aggregationIds_, aggregationIds) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListSystemClientRulesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // isContainer Field Functions 
    bool hasIsContainer() const { return this->isContainer_ != nullptr;};
    void deleteIsContainer() { this->isContainer_ = nullptr;};
    inline int32_t getIsContainer() const { DARABONBA_PTR_GET_DEFAULT(isContainer_, 0) };
    inline ListSystemClientRulesRequest& setIsContainer(int32_t isContainer) { DARABONBA_PTR_SET_VALUE(isContainer_, isContainer) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ListSystemClientRulesRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListSystemClientRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListSystemClientRulesRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleTypes Field Functions 
    bool hasRuleTypes() const { return this->ruleTypes_ != nullptr;};
    void deleteRuleTypes() { this->ruleTypes_ = nullptr;};
    inline const vector<int32_t> & getRuleTypes() const { DARABONBA_PTR_GET_CONST(ruleTypes_, vector<int32_t>) };
    inline vector<int32_t> getRuleTypes() { DARABONBA_PTR_GET(ruleTypes_, vector<int32_t>) };
    inline ListSystemClientRulesRequest& setRuleTypes(const vector<int32_t> & ruleTypes) { DARABONBA_PTR_SET_VALUE(ruleTypes_, ruleTypes) };
    inline ListSystemClientRulesRequest& setRuleTypes(vector<int32_t> && ruleTypes) { DARABONBA_PTR_SET_RVALUE(ruleTypes_, ruleTypes) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline int32_t getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, 0) };
    inline ListSystemClientRulesRequest& setSystemType(int32_t systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


  protected:
    // The IDs of the aggregation types for rules.
    shared_ptr<vector<int32_t>> aggregationIds_ {};
    // The number of the page to return.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // Specifies whether to query only container images. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    shared_ptr<int32_t> isContainer_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The number of entries to return on each page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The name of the system defense rule.
    shared_ptr<string> ruleName_ {};
    // The types of the system defense rules.
    shared_ptr<vector<int32_t>> ruleTypes_ {};
    // The type of the OS. Valid values:
    // 
    // *   **2**: Windows
    // *   **1**: Linux
    // *   **0**: all types
    shared_ptr<int32_t> systemType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
