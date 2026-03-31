// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListConfigRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigRulesRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigRulesRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListConfigRulesRequest() = default ;
    ListConfigRulesRequest(const ListConfigRulesRequest &) = default ;
    ListConfigRulesRequest(ListConfigRulesRequest &&) = default ;
    ListConfigRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigRulesRequest() = default ;
    ListConfigRulesRequest& operator=(const ListConfigRulesRequest &) = default ;
    ListConfigRulesRequest& operator=(ListConfigRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      // 
      // The tag key cannot be an empty string. The tag key can be up to 64 characters in length and cannot start with `acs:` or `aliyun`. It cannot contain `http://` or `https://`.
      // 
      // You can specify at most 20 tag keys.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the resource. You can specify up to 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The tag value must start with a letter but cannot start with `aliyun` or `acs:`. The tag value cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->compliancePackId_ == nullptr
        && this->complianceType_ == nullptr && this->configRuleName_ == nullptr && this->configRuleState_ == nullptr && this->keyword_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->resourceTypes_ == nullptr && this->riskLevel_ == nullptr && this->sortBy_ == nullptr && this->tag_ == nullptr; };
    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string getCompliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline ListConfigRulesRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // complianceType Field Functions 
    bool hasComplianceType() const { return this->complianceType_ != nullptr;};
    void deleteComplianceType() { this->complianceType_ = nullptr;};
    inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
    inline ListConfigRulesRequest& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline ListConfigRulesRequest& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // configRuleState Field Functions 
    bool hasConfigRuleState() const { return this->configRuleState_ != nullptr;};
    void deleteConfigRuleState() { this->configRuleState_ = nullptr;};
    inline string getConfigRuleState() const { DARABONBA_PTR_GET_DEFAULT(configRuleState_, "") };
    inline ListConfigRulesRequest& setConfigRuleState(string configRuleState) { DARABONBA_PTR_SET_VALUE(configRuleState_, configRuleState) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListConfigRulesRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListConfigRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListConfigRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string getResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline ListConfigRulesRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListConfigRulesRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListConfigRulesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListConfigRulesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListConfigRulesRequest::Tag>) };
    inline vector<ListConfigRulesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListConfigRulesRequest::Tag>) };
    inline ListConfigRulesRequest& setTag(const vector<ListConfigRulesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListConfigRulesRequest& setTag(vector<ListConfigRulesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The compliance package ID.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListCompliancePacks](https://help.aliyun.com/document_detail/606968.html).
    // 
    // >  You must configure either the `CompliancePackId` or `ConfigRuleId` parameter.
    shared_ptr<string> compliancePackId_ {};
    // The compliance evaluation result of the rule. Valid values:
    // 
    // *   COMPLIANT: The resources are evaluated as compliant.
    // *   NON_COMPLIANT: The resources are evaluated as non-compliant.
    // *   NOT_APPLICABLE: The rule does not apply to the resources.
    // *   INSUFFICIENT_DATA: No resource data is available.
    shared_ptr<string> complianceType_ {};
    // The name of the rule.
    shared_ptr<string> configRuleName_ {};
    // The status of the rule. Valid values:
    // 
    // *   ACTIVE: The rule is enabled.
    // *   DELETING: The rule is being deleted.
    // *   EVALUATING: The rule is being used to evaluate resource configurations.
    // *   INACTIVE: The rule is disabled.
    shared_ptr<string> configRuleState_ {};
    // The query keyword.
    // 
    // You can perform a fuzzy search by rule ID, rule name, rule description, or managed rule ID.
    shared_ptr<string> keyword_ {};
    // The page number.
    // 
    // Page numbers start from 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    // 
    // Valid values: 1 to 100. A minimum of 1 entry can be returned per page. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the resources to be evaluated based on the rule.
    shared_ptr<string> resourceTypes_ {};
    // The risk level of the resources that are not compliant with the rule. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    shared_ptr<int32_t> riskLevel_ {};
    shared_ptr<string> sortBy_ {};
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    shared_ptr<vector<ListConfigRulesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
