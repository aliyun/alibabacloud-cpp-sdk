// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULESRESPONSEBODYCONFIGRULESCONFIGRULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATECONFIGRULESRESPONSEBODYCONFIGRULESCONFIGRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance.hpp>
#include <alibabacloud/models/ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AutomationType, automationType_);
      DARABONBA_PTR_TO_JSON(Compliance, compliance_);
      DARABONBA_PTR_TO_JSON(ConfigRuleArn, configRuleArn_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(ConfigRuleState, configRuleState_);
      DARABONBA_PTR_TO_JSON(CreateBy, createBy_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SourceIdentifier, sourceIdentifier_);
      DARABONBA_PTR_TO_JSON(SourceOwner, sourceOwner_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AutomationType, automationType_);
      DARABONBA_PTR_FROM_JSON(Compliance, compliance_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleArn, configRuleArn_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleState, configRuleState_);
      DARABONBA_PTR_FROM_JSON(CreateBy, createBy_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SourceIdentifier, sourceIdentifier_);
      DARABONBA_PTR_FROM_JSON(SourceOwner, sourceOwner_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList() = default ;
    ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList(const ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList &) = default ;
    ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList(ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList &&) = default ;
    ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList() = default ;
    ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& operator=(const ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList &) = default ;
    ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& operator=(ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->automationType_ == nullptr && return this->compliance_ == nullptr && return this->configRuleArn_ == nullptr && return this->configRuleId_ == nullptr && return this->configRuleName_ == nullptr
        && return this->configRuleState_ == nullptr && return this->createBy_ == nullptr && return this->createDate_ == nullptr && return this->description_ == nullptr && return this->resourceTypesScope_ == nullptr
        && return this->riskLevel_ == nullptr && return this->sourceIdentifier_ == nullptr && return this->sourceOwner_ == nullptr && return this->tags_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // automationType Field Functions 
    bool hasAutomationType() const { return this->automationType_ != nullptr;};
    void deleteAutomationType() { this->automationType_ = nullptr;};
    inline string automationType() const { DARABONBA_PTR_GET_DEFAULT(automationType_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setAutomationType(string automationType) { DARABONBA_PTR_SET_VALUE(automationType_, automationType) };


    // compliance Field Functions 
    bool hasCompliance() const { return this->compliance_ != nullptr;};
    void deleteCompliance() { this->compliance_ = nullptr;};
    inline const Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance & compliance() const { DARABONBA_PTR_GET_CONST(compliance_, Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance) };
    inline Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance compliance() { DARABONBA_PTR_GET(compliance_, Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance) };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setCompliance(const Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance & compliance) { DARABONBA_PTR_SET_VALUE(compliance_, compliance) };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setCompliance(Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance && compliance) { DARABONBA_PTR_SET_RVALUE(compliance_, compliance) };


    // configRuleArn Field Functions 
    bool hasConfigRuleArn() const { return this->configRuleArn_ != nullptr;};
    void deleteConfigRuleArn() { this->configRuleArn_ = nullptr;};
    inline string configRuleArn() const { DARABONBA_PTR_GET_DEFAULT(configRuleArn_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setConfigRuleArn(string configRuleArn) { DARABONBA_PTR_SET_VALUE(configRuleArn_, configRuleArn) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // configRuleState Field Functions 
    bool hasConfigRuleState() const { return this->configRuleState_ != nullptr;};
    void deleteConfigRuleState() { this->configRuleState_ = nullptr;};
    inline string configRuleState() const { DARABONBA_PTR_GET_DEFAULT(configRuleState_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setConfigRuleState(string configRuleState) { DARABONBA_PTR_SET_VALUE(configRuleState_, configRuleState) };


    // createBy Field Functions 
    bool hasCreateBy() const { return this->createBy_ != nullptr;};
    void deleteCreateBy() { this->createBy_ = nullptr;};
    inline const Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy & createBy() const { DARABONBA_PTR_GET_CONST(createBy_, Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy) };
    inline Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy createBy() { DARABONBA_PTR_GET(createBy_, Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy) };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setCreateBy(const Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy & createBy) { DARABONBA_PTR_SET_VALUE(createBy_, createBy) };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setCreateBy(Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy && createBy) { DARABONBA_PTR_SET_RVALUE(createBy_, createBy) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // resourceTypesScope Field Functions 
    bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
    void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
    inline string resourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sourceIdentifier Field Functions 
    bool hasSourceIdentifier() const { return this->sourceIdentifier_ != nullptr;};
    void deleteSourceIdentifier() { this->sourceIdentifier_ = nullptr;};
    inline string sourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentifier_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setSourceIdentifier(string sourceIdentifier) { DARABONBA_PTR_SET_VALUE(sourceIdentifier_, sourceIdentifier) };


    // sourceOwner Field Functions 
    bool hasSourceOwner() const { return this->sourceOwner_ != nullptr;};
    void deleteSourceOwner() { this->sourceOwner_ = nullptr;};
    inline string sourceOwner() const { DARABONBA_PTR_GET_DEFAULT(sourceOwner_, "") };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setSourceOwner(string sourceOwner) { DARABONBA_PTR_SET_VALUE(sourceOwner_, sourceOwner) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListTags>) };
    inline vector<Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListTags>) };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setTags(const vector<Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleList& setTags(vector<Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The ID of the management account to which the rules belong.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The type of the remediation template. Only OOS is returned, which indicates CloudOps Orchestration Service.
    std::shared_ptr<string> automationType_ = nullptr;
    // The compliance evaluation result.
    std::shared_ptr<Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCompliance> compliance_ = nullptr;
    // The ARN of the rule.
    std::shared_ptr<string> configRuleArn_ = nullptr;
    // The rule ID.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> configRuleName_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   ACTIVE: The rule is being used to monitor resource configurations.
    // *   DELETING: The rule is being deleted.
    // *   EVALUATING: The rule is triggered and is being used to monitor resource configurations.
    // *   INACTIVE: The rule is disabled.
    std::shared_ptr<string> configRuleState_ = nullptr;
    // The information about the creation of the rule.
    std::shared_ptr<Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListCreateBy> createBy_ = nullptr;
    std::shared_ptr<string> createDate_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The types of resources evaluated by the rule. Multiple resource types are separated with commas (,).
    std::shared_ptr<string> resourceTypesScope_ = nullptr;
    // The risk level of the resources that do not comply with the rule. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    // The identifier of the rule.
    // 
    // *   If the rule is a managed rule, the value of this parameter is the name of the managed rule.
    // *   If the rule is a custom rule, the value of this parameter is the Alibaba Cloud Resource Name (ARN) of a function.
    std::shared_ptr<string> sourceIdentifier_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   CUSTOM_FC: a custom rule.
    // *   ALIYUN: a managed rule.
    std::shared_ptr<string> sourceOwner_ = nullptr;
    // The tags of the rule.
    std::shared_ptr<vector<Models::ListAggregateConfigRulesResponseBodyConfigRulesConfigRuleListTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
