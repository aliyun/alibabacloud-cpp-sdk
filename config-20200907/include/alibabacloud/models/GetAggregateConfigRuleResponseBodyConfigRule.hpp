// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULE_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECONFIGRULERESPONSEBODYCONFIGRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRuleCompliance.hpp>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus.hpp>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRuleCreateBy.hpp>
#include <vector>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRuleExcludeTagsScope.hpp>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRuleManagedRule.hpp>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRuleSource.hpp>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRuleTags.hpp>
#include <alibabacloud/models/GetAggregateConfigRuleResponseBodyConfigRuleTagsScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateConfigRuleResponseBodyConfigRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateConfigRuleResponseBodyConfigRule& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(AccountIdsScope, accountIdsScope_);
      DARABONBA_PTR_TO_JSON(Compliance, compliance_);
      DARABONBA_PTR_TO_JSON(ConfigRuleArn, configRuleArn_);
      DARABONBA_PTR_TO_JSON(ConfigRuleEvaluationStatus, configRuleEvaluationStatus_);
      DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(ConfigRuleState, configRuleState_);
      DARABONBA_PTR_TO_JSON(ConfigRuleTriggerTypes, configRuleTriggerTypes_);
      DARABONBA_PTR_TO_JSON(CreateBy, createBy_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExcludeAccountIdsScope, excludeAccountIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeFolderIdsScope, excludeFolderIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_TO_JSON(ExtendContent, extendContent_);
      DARABONBA_PTR_TO_JSON(FolderIdsScope, folderIdsScope_);
      DARABONBA_ANY_TO_JSON(InputParameters, inputParameters_);
      DARABONBA_PTR_TO_JSON(ManagedRule, managedRule_);
      DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_TO_JSON(ModifiedTimestamp, modifiedTimestamp_);
      DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceNameScope, resourceNameScope_);
      DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TagKeyLogicScope, tagKeyLogicScope_);
      DARABONBA_PTR_TO_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_TO_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TagsScope, tagsScope_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateConfigRuleResponseBodyConfigRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(AccountIdsScope, accountIdsScope_);
      DARABONBA_PTR_FROM_JSON(Compliance, compliance_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleArn, configRuleArn_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleEvaluationStatus, configRuleEvaluationStatus_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleState, configRuleState_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleTriggerTypes, configRuleTriggerTypes_);
      DARABONBA_PTR_FROM_JSON(CreateBy, createBy_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExcludeAccountIdsScope, excludeAccountIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeFolderIdsScope, excludeFolderIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_FROM_JSON(ExtendContent, extendContent_);
      DARABONBA_PTR_FROM_JSON(FolderIdsScope, folderIdsScope_);
      DARABONBA_ANY_FROM_JSON(InputParameters, inputParameters_);
      DARABONBA_PTR_FROM_JSON(ManagedRule, managedRule_);
      DARABONBA_PTR_FROM_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_FROM_JSON(ModifiedTimestamp, modifiedTimestamp_);
      DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceNameScope, resourceNameScope_);
      DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TagKeyLogicScope, tagKeyLogicScope_);
      DARABONBA_PTR_FROM_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_FROM_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TagsScope, tagsScope_);
    };
    GetAggregateConfigRuleResponseBodyConfigRule() = default ;
    GetAggregateConfigRuleResponseBodyConfigRule(const GetAggregateConfigRuleResponseBodyConfigRule &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRule(GetAggregateConfigRuleResponseBodyConfigRule &&) = default ;
    GetAggregateConfigRuleResponseBodyConfigRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateConfigRuleResponseBodyConfigRule() = default ;
    GetAggregateConfigRuleResponseBodyConfigRule& operator=(const GetAggregateConfigRuleResponseBodyConfigRule &) = default ;
    GetAggregateConfigRuleResponseBodyConfigRule& operator=(GetAggregateConfigRuleResponseBodyConfigRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->accountIdsScope_ == nullptr && return this->compliance_ == nullptr && return this->configRuleArn_ == nullptr && return this->configRuleEvaluationStatus_ == nullptr && return this->configRuleId_ == nullptr
        && return this->configRuleName_ == nullptr && return this->configRuleState_ == nullptr && return this->configRuleTriggerTypes_ == nullptr && return this->createBy_ == nullptr && return this->createTimestamp_ == nullptr
        && return this->description_ == nullptr && return this->excludeAccountIdsScope_ == nullptr && return this->excludeFolderIdsScope_ == nullptr && return this->excludeRegionIdsScope_ == nullptr && return this->excludeResourceGroupIdsScope_ == nullptr
        && return this->excludeResourceIdsScope_ == nullptr && return this->excludeTagsScope_ == nullptr && return this->extendContent_ == nullptr && return this->folderIdsScope_ == nullptr && return this->inputParameters_ == nullptr
        && return this->managedRule_ == nullptr && return this->maximumExecutionFrequency_ == nullptr && return this->modifiedTimestamp_ == nullptr && return this->regionIdsScope_ == nullptr && return this->resourceGroupIdsScope_ == nullptr
        && return this->resourceIdsScope_ == nullptr && return this->resourceNameScope_ == nullptr && return this->resourceTypesScope_ == nullptr && return this->riskLevel_ == nullptr && return this->source_ == nullptr
        && return this->tagKeyLogicScope_ == nullptr && return this->tagKeyScope_ == nullptr && return this->tagValueScope_ == nullptr && return this->tags_ == nullptr && return this->tagsScope_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // accountIdsScope Field Functions 
    bool hasAccountIdsScope() const { return this->accountIdsScope_ != nullptr;};
    void deleteAccountIdsScope() { this->accountIdsScope_ = nullptr;};
    inline string accountIdsScope() const { DARABONBA_PTR_GET_DEFAULT(accountIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setAccountIdsScope(string accountIdsScope) { DARABONBA_PTR_SET_VALUE(accountIdsScope_, accountIdsScope) };


    // compliance Field Functions 
    bool hasCompliance() const { return this->compliance_ != nullptr;};
    void deleteCompliance() { this->compliance_ = nullptr;};
    inline const Models::GetAggregateConfigRuleResponseBodyConfigRuleCompliance & compliance() const { DARABONBA_PTR_GET_CONST(compliance_, Models::GetAggregateConfigRuleResponseBodyConfigRuleCompliance) };
    inline Models::GetAggregateConfigRuleResponseBodyConfigRuleCompliance compliance() { DARABONBA_PTR_GET(compliance_, Models::GetAggregateConfigRuleResponseBodyConfigRuleCompliance) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setCompliance(const Models::GetAggregateConfigRuleResponseBodyConfigRuleCompliance & compliance) { DARABONBA_PTR_SET_VALUE(compliance_, compliance) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setCompliance(Models::GetAggregateConfigRuleResponseBodyConfigRuleCompliance && compliance) { DARABONBA_PTR_SET_RVALUE(compliance_, compliance) };


    // configRuleArn Field Functions 
    bool hasConfigRuleArn() const { return this->configRuleArn_ != nullptr;};
    void deleteConfigRuleArn() { this->configRuleArn_ = nullptr;};
    inline string configRuleArn() const { DARABONBA_PTR_GET_DEFAULT(configRuleArn_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setConfigRuleArn(string configRuleArn) { DARABONBA_PTR_SET_VALUE(configRuleArn_, configRuleArn) };


    // configRuleEvaluationStatus Field Functions 
    bool hasConfigRuleEvaluationStatus() const { return this->configRuleEvaluationStatus_ != nullptr;};
    void deleteConfigRuleEvaluationStatus() { this->configRuleEvaluationStatus_ = nullptr;};
    inline const Models::GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus & configRuleEvaluationStatus() const { DARABONBA_PTR_GET_CONST(configRuleEvaluationStatus_, Models::GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus) };
    inline Models::GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus configRuleEvaluationStatus() { DARABONBA_PTR_GET(configRuleEvaluationStatus_, Models::GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setConfigRuleEvaluationStatus(const Models::GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus & configRuleEvaluationStatus) { DARABONBA_PTR_SET_VALUE(configRuleEvaluationStatus_, configRuleEvaluationStatus) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setConfigRuleEvaluationStatus(Models::GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus && configRuleEvaluationStatus) { DARABONBA_PTR_SET_RVALUE(configRuleEvaluationStatus_, configRuleEvaluationStatus) };


    // configRuleId Field Functions 
    bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
    void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
    inline string configRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // configRuleState Field Functions 
    bool hasConfigRuleState() const { return this->configRuleState_ != nullptr;};
    void deleteConfigRuleState() { this->configRuleState_ = nullptr;};
    inline string configRuleState() const { DARABONBA_PTR_GET_DEFAULT(configRuleState_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setConfigRuleState(string configRuleState) { DARABONBA_PTR_SET_VALUE(configRuleState_, configRuleState) };


    // configRuleTriggerTypes Field Functions 
    bool hasConfigRuleTriggerTypes() const { return this->configRuleTriggerTypes_ != nullptr;};
    void deleteConfigRuleTriggerTypes() { this->configRuleTriggerTypes_ = nullptr;};
    inline string configRuleTriggerTypes() const { DARABONBA_PTR_GET_DEFAULT(configRuleTriggerTypes_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setConfigRuleTriggerTypes(string configRuleTriggerTypes) { DARABONBA_PTR_SET_VALUE(configRuleTriggerTypes_, configRuleTriggerTypes) };


    // createBy Field Functions 
    bool hasCreateBy() const { return this->createBy_ != nullptr;};
    void deleteCreateBy() { this->createBy_ = nullptr;};
    inline const Models::GetAggregateConfigRuleResponseBodyConfigRuleCreateBy & createBy() const { DARABONBA_PTR_GET_CONST(createBy_, Models::GetAggregateConfigRuleResponseBodyConfigRuleCreateBy) };
    inline Models::GetAggregateConfigRuleResponseBodyConfigRuleCreateBy createBy() { DARABONBA_PTR_GET(createBy_, Models::GetAggregateConfigRuleResponseBodyConfigRuleCreateBy) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setCreateBy(const Models::GetAggregateConfigRuleResponseBodyConfigRuleCreateBy & createBy) { DARABONBA_PTR_SET_VALUE(createBy_, createBy) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setCreateBy(Models::GetAggregateConfigRuleResponseBodyConfigRuleCreateBy && createBy) { DARABONBA_PTR_SET_RVALUE(createBy_, createBy) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excludeAccountIdsScope Field Functions 
    bool hasExcludeAccountIdsScope() const { return this->excludeAccountIdsScope_ != nullptr;};
    void deleteExcludeAccountIdsScope() { this->excludeAccountIdsScope_ = nullptr;};
    inline string excludeAccountIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeAccountIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setExcludeAccountIdsScope(string excludeAccountIdsScope) { DARABONBA_PTR_SET_VALUE(excludeAccountIdsScope_, excludeAccountIdsScope) };


    // excludeFolderIdsScope Field Functions 
    bool hasExcludeFolderIdsScope() const { return this->excludeFolderIdsScope_ != nullptr;};
    void deleteExcludeFolderIdsScope() { this->excludeFolderIdsScope_ = nullptr;};
    inline string excludeFolderIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeFolderIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setExcludeFolderIdsScope(string excludeFolderIdsScope) { DARABONBA_PTR_SET_VALUE(excludeFolderIdsScope_, excludeFolderIdsScope) };


    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string excludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string excludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string excludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeTagsScope Field Functions 
    bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
    void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
    inline const vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleExcludeTagsScope> & excludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleExcludeTagsScope>) };
    inline vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleExcludeTagsScope> excludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleExcludeTagsScope>) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setExcludeTagsScope(const vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setExcludeTagsScope(vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


    // extendContent Field Functions 
    bool hasExtendContent() const { return this->extendContent_ != nullptr;};
    void deleteExtendContent() { this->extendContent_ = nullptr;};
    inline string extendContent() const { DARABONBA_PTR_GET_DEFAULT(extendContent_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setExtendContent(string extendContent) { DARABONBA_PTR_SET_VALUE(extendContent_, extendContent) };


    // folderIdsScope Field Functions 
    bool hasFolderIdsScope() const { return this->folderIdsScope_ != nullptr;};
    void deleteFolderIdsScope() { this->folderIdsScope_ = nullptr;};
    inline string folderIdsScope() const { DARABONBA_PTR_GET_DEFAULT(folderIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setFolderIdsScope(string folderIdsScope) { DARABONBA_PTR_SET_VALUE(folderIdsScope_, folderIdsScope) };


    // inputParameters Field Functions 
    bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
    void deleteInputParameters() { this->inputParameters_ = nullptr;};
    inline     const Darabonba::Json & inputParameters() const { DARABONBA_GET(inputParameters_) };
    Darabonba::Json & inputParameters() { DARABONBA_GET(inputParameters_) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setInputParameters(const Darabonba::Json & inputParameters) { DARABONBA_SET_VALUE(inputParameters_, inputParameters) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setInputParameters(Darabonba::Json & inputParameters) { DARABONBA_SET_RVALUE(inputParameters_, inputParameters) };


    // managedRule Field Functions 
    bool hasManagedRule() const { return this->managedRule_ != nullptr;};
    void deleteManagedRule() { this->managedRule_ = nullptr;};
    inline const Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRule & managedRule() const { DARABONBA_PTR_GET_CONST(managedRule_, Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRule) };
    inline Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRule managedRule() { DARABONBA_PTR_GET(managedRule_, Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRule) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setManagedRule(const Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRule & managedRule) { DARABONBA_PTR_SET_VALUE(managedRule_, managedRule) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setManagedRule(Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRule && managedRule) { DARABONBA_PTR_SET_RVALUE(managedRule_, managedRule) };


    // maximumExecutionFrequency Field Functions 
    bool hasMaximumExecutionFrequency() const { return this->maximumExecutionFrequency_ != nullptr;};
    void deleteMaximumExecutionFrequency() { this->maximumExecutionFrequency_ = nullptr;};
    inline string maximumExecutionFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumExecutionFrequency_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setMaximumExecutionFrequency(string maximumExecutionFrequency) { DARABONBA_PTR_SET_VALUE(maximumExecutionFrequency_, maximumExecutionFrequency) };


    // modifiedTimestamp Field Functions 
    bool hasModifiedTimestamp() const { return this->modifiedTimestamp_ != nullptr;};
    void deleteModifiedTimestamp() { this->modifiedTimestamp_ = nullptr;};
    inline int64_t modifiedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(modifiedTimestamp_, 0L) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setModifiedTimestamp(int64_t modifiedTimestamp) { DARABONBA_PTR_SET_VALUE(modifiedTimestamp_, modifiedTimestamp) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string regionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string resourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string resourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // resourceNameScope Field Functions 
    bool hasResourceNameScope() const { return this->resourceNameScope_ != nullptr;};
    void deleteResourceNameScope() { this->resourceNameScope_ = nullptr;};
    inline string resourceNameScope() const { DARABONBA_PTR_GET_DEFAULT(resourceNameScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setResourceNameScope(string resourceNameScope) { DARABONBA_PTR_SET_VALUE(resourceNameScope_, resourceNameScope) };


    // resourceTypesScope Field Functions 
    bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
    void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
    inline string resourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const Models::GetAggregateConfigRuleResponseBodyConfigRuleSource & source() const { DARABONBA_PTR_GET_CONST(source_, Models::GetAggregateConfigRuleResponseBodyConfigRuleSource) };
    inline Models::GetAggregateConfigRuleResponseBodyConfigRuleSource source() { DARABONBA_PTR_GET(source_, Models::GetAggregateConfigRuleResponseBodyConfigRuleSource) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setSource(const Models::GetAggregateConfigRuleResponseBodyConfigRuleSource & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setSource(Models::GetAggregateConfigRuleResponseBodyConfigRuleSource && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // tagKeyLogicScope Field Functions 
    bool hasTagKeyLogicScope() const { return this->tagKeyLogicScope_ != nullptr;};
    void deleteTagKeyLogicScope() { this->tagKeyLogicScope_ = nullptr;};
    inline string tagKeyLogicScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyLogicScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setTagKeyLogicScope(string tagKeyLogicScope) { DARABONBA_PTR_SET_VALUE(tagKeyLogicScope_, tagKeyLogicScope) };


    // tagKeyScope Field Functions 
    bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
    void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
    inline string tagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


    // tagValueScope Field Functions 
    bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
    void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
    inline string tagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTags>) };
    inline vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTags>) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setTags(const vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setTags(vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // tagsScope Field Functions 
    bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
    void deleteTagsScope() { this->tagsScope_ = nullptr;};
    inline const vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTagsScope> & tagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTagsScope>) };
    inline vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTagsScope> tagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTagsScope>) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setTagsScope(const vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
    inline GetAggregateConfigRuleResponseBodyConfigRule& setTagsScope(vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


  protected:
    // The ID of the Alibaba Cloud account to which the rule belongs.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The IDs of the members to which the rule applies. Separate multiple member IDs with commas (,).
    std::shared_ptr<string> accountIdsScope_ = nullptr;
    // The details of compliance evaluation results.
    std::shared_ptr<Models::GetAggregateConfigRuleResponseBodyConfigRuleCompliance> compliance_ = nullptr;
    // The ARN of the managed rule.
    std::shared_ptr<string> configRuleArn_ = nullptr;
    // The information about compliance evaluations performed by the rule.
    std::shared_ptr<Models::GetAggregateConfigRuleResponseBodyConfigRuleConfigRuleEvaluationStatus> configRuleEvaluationStatus_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<string> configRuleId_ = nullptr;
    // The name of the monitoring rule.
    std::shared_ptr<string> configRuleName_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   ACTIVE: The rule is being used to monitor resource configurations.
    // *   DELETING: The rule is being deleted.
    // *   EVALUATING: The rule is triggered and is being used to monitor resource configurations.
    // *   INACTIVE: The rule is disabled and is no longer used to monitor resource configurations.
    std::shared_ptr<string> configRuleState_ = nullptr;
    // The trigger type of the rule. Valid values:
    // 
    // *   ConfigurationItemChangeNotification: The managed rule is triggered by configuration changes.
    // *   ScheduledNotification: The managed rule is periodically triggered.
    std::shared_ptr<string> configRuleTriggerTypes_ = nullptr;
    // The information about the creation of the rule.
    std::shared_ptr<Models::GetAggregateConfigRuleResponseBodyConfigRuleCreateBy> createBy_ = nullptr;
    // The timestamp when the rule was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The description of the managed rule.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the member account to which the rule does not apply, which means that the resources within the member account are not evaluated based on the rule.
    // 
    // >  This parameter applies only to a managed rule.
    std::shared_ptr<string> excludeAccountIdsScope_ = nullptr;
    // The ID of the resource directory to which the rule does not apply, which means that the resources within member accounts in the resource directory are not evaluated based on the rule.
    // 
    // > 
    // *   This parameter applies only to a rule of a global account group.
    // *   This parameter applies only to a managed rule.
    std::shared_ptr<string> excludeFolderIdsScope_ = nullptr;
    // The IDs of the regions excluded from the compliance evaluations performed by the rule. Separate multiple region IDs with commas (,).
    std::shared_ptr<string> excludeRegionIdsScope_ = nullptr;
    // The IDs of the resource groups excluded from the compliance evaluations performed by the rule. Separate multiple resource group IDs with commas (,).
    std::shared_ptr<string> excludeResourceGroupIdsScope_ = nullptr;
    // The ID of the resource excluded from the compliance evaluations performed by the rule.
    std::shared_ptr<string> excludeResourceIdsScope_ = nullptr;
    // The scope of the tag that is excluded.
    std::shared_ptr<vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleExcludeTagsScope>> excludeTagsScope_ = nullptr;
    // The extended content, which is temporarily only used to configure the trigger time with a 24-hour cycle trigger.
    std::shared_ptr<string> extendContent_ = nullptr;
    // The ID of the resource directory to which the rule applies, which means that the resources within member accounts in the resource directory are evaluated based on the rule.
    // 
    // > 
    // *   This parameter applies only to rules of a global account group.
    // *   This parameter applies only to managed rules.
    std::shared_ptr<string> folderIdsScope_ = nullptr;
    // The input parameters of the rule.
    Darabonba::Json inputParameters_ = nullptr;
    // The details of the managed rule.
    std::shared_ptr<Models::GetAggregateConfigRuleResponseBodyConfigRuleManagedRule> managedRule_ = nullptr;
    // The intervals at which the managed rule is triggered. Valid values:
    // 
    // *   One_Hour: 1 hour.
    // *   Three_Hours: 3 hours.
    // *   Six_Hours: 6 hours.
    // *   Twelve_Hours: 12 hours
    // *   TwentyFour_Hours: 24 hours
    std::shared_ptr<string> maximumExecutionFrequency_ = nullptr;
    // The timestamp when the rule was last updated. Unit: milliseconds.
    std::shared_ptr<int64_t> modifiedTimestamp_ = nullptr;
    // The ID of the region to which the rule applies.
    std::shared_ptr<string> regionIdsScope_ = nullptr;
    // The ID of the resource group to which the rule applies.
    std::shared_ptr<string> resourceGroupIdsScope_ = nullptr;
    // The IDs of the resources to which the rule applies. Separate multiple resource IDs with commas (,).
    std::shared_ptr<string> resourceIdsScope_ = nullptr;
    // The names of the resource to which the rule applies.
    std::shared_ptr<string> resourceNameScope_ = nullptr;
    // The type of the resource evaluated by the rule.
    std::shared_ptr<string> resourceTypesScope_ = nullptr;
    // The risk level of the resources that are not compliant with the rule. Valid values:
    // 
    // *   1: high risk level
    // *   2: medium risk level
    // *   3: low risk level
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    // The information about how the rule was created.
    std::shared_ptr<Models::GetAggregateConfigRuleResponseBodyConfigRuleSource> source_ = nullptr;
    // When retrieving details of rules created using the parameter `TagsScope`, this field will not be returned.
    // 
    // To retrieve rules created using the deprecated field `TagKeyScope` (not recommended): for example, when the parameter `TagKeyScope` has a value of ECS,OSS, if this parameter is set to `AND`, it means that the rule only applies to resources bound with both labels ECS and OSS.
    // 
    // Values:
    // 
    //  - AND: And.
    // 
    //  - OR: Or.
    std::shared_ptr<string> tagKeyLogicScope_ = nullptr;
    // This parameter is deprecated. We recommend that you use the `TagsScope` parameter.
    // 
    // The tag key used to filter resources. The rule applies only to the resources with the specified tag key.
    std::shared_ptr<string> tagKeyScope_ = nullptr;
    // This parameter is deprecated. We recommend that you use the `TagsScope` parameter.
    // 
    // The tag value used to filter resources. The rule applies only to the resources with the specified tag value.
    std::shared_ptr<string> tagValueScope_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTags>> tags_ = nullptr;
    // The tag scope.
    std::shared_ptr<vector<Models::GetAggregateConfigRuleResponseBodyConfigRuleTagsScope>> tagsScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
