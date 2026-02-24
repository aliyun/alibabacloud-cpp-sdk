// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(ConfigRuleState, configRuleState_);
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleState, configRuleState_);
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
    };
    ListAggregateConfigRulesShrinkRequest() = default ;
    ListAggregateConfigRulesShrinkRequest(const ListAggregateConfigRulesShrinkRequest &) = default ;
    ListAggregateConfigRulesShrinkRequest(ListAggregateConfigRulesShrinkRequest &&) = default ;
    ListAggregateConfigRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigRulesShrinkRequest() = default ;
    ListAggregateConfigRulesShrinkRequest& operator=(const ListAggregateConfigRulesShrinkRequest &) = default ;
    ListAggregateConfigRulesShrinkRequest& operator=(ListAggregateConfigRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->compliancePackId_ == nullptr && this->complianceType_ == nullptr && this->configRuleName_ == nullptr && this->configRuleState_ == nullptr && this->keyword_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->resourceTypes_ == nullptr && this->riskLevel_ == nullptr && this->sortBy_ == nullptr
        && this->tagShrink_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateConfigRulesShrinkRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline ListAggregateConfigRulesShrinkRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline ListAggregateConfigRulesShrinkRequest& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline ListAggregateConfigRulesShrinkRequest& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // configRuleState Field Functions 
    bool hasConfigRuleState() const { return this->configRuleState_ != nullptr;};
    void deleteConfigRuleState() { this->configRuleState_ = nullptr;};
    inline string getConfigRuleState() const { DARABONBA_PTR_GET_DEFAULT(configRuleState_, "") };
    inline ListAggregateConfigRulesShrinkRequest& setConfigRuleState(string configRuleState) { DARABONBA_PTR_SET_VALUE(configRuleState_, configRuleState) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAggregateConfigRulesShrinkRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAggregateConfigRulesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAggregateConfigRulesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string getResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline ListAggregateConfigRulesShrinkRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListAggregateConfigRulesShrinkRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListAggregateConfigRulesShrinkRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline ListAggregateConfigRulesShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The ID of the compliance package.
    shared_ptr<string> compliancePackId_ {};
    // The compliance evaluation result. Valid values:
    // 
    // - COMPLIANT: The resource is compliant.
    // 
    // - NON_COMPLIANT: The resource is non-compliant.
    // 
    // - NOT_APPLICABLE: The rule does not apply to the resource.
    // 
    // - INSUFFICIENT_DATA: No data is available.
    shared_ptr<string> complianceType_ {};
    // The name of the rule.
    shared_ptr<string> configRuleName_ {};
    // The state of the rule. Valid values:
    // 
    // - ACTIVE: The rule is enabled.
    // 
    // - DELETING: The rule is being deleted.
    // 
    // - EVALUATING: The rule is being evaluated.
    // 
    // - INACTIVE: The rule is disabled.
    shared_ptr<string> configRuleState_ {};
    // The keyword for a fuzzy query.
    // 
    // The keyword can be a rule ID, rule name, rule description, or rule template identifier.
    shared_ptr<string> keyword_ {};
    // The page number.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The resource type to be evaluated by the rule.
    shared_ptr<string> resourceTypes_ {};
    // The risk level of the rule. Valid values:
    // 
    // - 1: high
    // 
    // - 2: medium
    // 
    // - 3: low
    shared_ptr<int32_t> riskLevel_ {};
    // The method that is used to sort the rules. By default, this parameter is not specified. Set the value to `CreateDate-Desc` to sort the rules in descending order of their creation time.
    shared_ptr<string> sortBy_ {};
    // The tags of the resource.
    // 
    // You can add a maximum of 20 tags.
    shared_ptr<string> tagShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
