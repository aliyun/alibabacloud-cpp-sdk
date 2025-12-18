// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGREGATECONFIGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGREGATECONFIGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAggregateConfigRuleRequestExcludeTagsScope.hpp>
#include <alibabacloud/models/CreateAggregateConfigRuleRequestTag.hpp>
#include <alibabacloud/models/CreateAggregateConfigRuleRequestTagsScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateAggregateConfigRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggregateConfigRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountIdsScope, accountIdsScope_);
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(ConfigRuleTriggerTypes, configRuleTriggerTypes_);
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
      DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceNameScope, resourceNameScope_);
      DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SourceIdentifier, sourceIdentifier_);
      DARABONBA_PTR_TO_JSON(SourceOwner, sourceOwner_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagKeyLogicScope, tagKeyLogicScope_);
      DARABONBA_PTR_TO_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_TO_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_TO_JSON(TagsScope, tagsScope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggregateConfigRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountIdsScope, accountIdsScope_);
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleTriggerTypes, configRuleTriggerTypes_);
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
      DARABONBA_PTR_FROM_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceNameScope, resourceNameScope_);
      DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SourceIdentifier, sourceIdentifier_);
      DARABONBA_PTR_FROM_JSON(SourceOwner, sourceOwner_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagKeyLogicScope, tagKeyLogicScope_);
      DARABONBA_PTR_FROM_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_FROM_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_FROM_JSON(TagsScope, tagsScope_);
    };
    CreateAggregateConfigRuleRequest() = default ;
    CreateAggregateConfigRuleRequest(const CreateAggregateConfigRuleRequest &) = default ;
    CreateAggregateConfigRuleRequest(CreateAggregateConfigRuleRequest &&) = default ;
    CreateAggregateConfigRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggregateConfigRuleRequest() = default ;
    CreateAggregateConfigRuleRequest& operator=(const CreateAggregateConfigRuleRequest &) = default ;
    CreateAggregateConfigRuleRequest& operator=(CreateAggregateConfigRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountIdsScope_ == nullptr
        && return this->aggregatorId_ == nullptr && return this->clientToken_ == nullptr && return this->configRuleName_ == nullptr && return this->configRuleTriggerTypes_ == nullptr && return this->description_ == nullptr
        && return this->excludeAccountIdsScope_ == nullptr && return this->excludeFolderIdsScope_ == nullptr && return this->excludeRegionIdsScope_ == nullptr && return this->excludeResourceGroupIdsScope_ == nullptr && return this->excludeResourceIdsScope_ == nullptr
        && return this->excludeTagsScope_ == nullptr && return this->extendContent_ == nullptr && return this->folderIdsScope_ == nullptr && return this->inputParameters_ == nullptr && return this->maximumExecutionFrequency_ == nullptr
        && return this->regionIdsScope_ == nullptr && return this->resourceGroupIdsScope_ == nullptr && return this->resourceIdsScope_ == nullptr && return this->resourceNameScope_ == nullptr && return this->resourceTypesScope_ == nullptr
        && return this->riskLevel_ == nullptr && return this->sourceIdentifier_ == nullptr && return this->sourceOwner_ == nullptr && return this->tag_ == nullptr && return this->tagKeyLogicScope_ == nullptr
        && return this->tagKeyScope_ == nullptr && return this->tagValueScope_ == nullptr && return this->tagsScope_ == nullptr; };
    // accountIdsScope Field Functions 
    bool hasAccountIdsScope() const { return this->accountIdsScope_ != nullptr;};
    void deleteAccountIdsScope() { this->accountIdsScope_ = nullptr;};
    inline string accountIdsScope() const { DARABONBA_PTR_GET_DEFAULT(accountIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setAccountIdsScope(string accountIdsScope) { DARABONBA_PTR_SET_VALUE(accountIdsScope_, accountIdsScope) };


    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline CreateAggregateConfigRuleRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAggregateConfigRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string configRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline CreateAggregateConfigRuleRequest& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // configRuleTriggerTypes Field Functions 
    bool hasConfigRuleTriggerTypes() const { return this->configRuleTriggerTypes_ != nullptr;};
    void deleteConfigRuleTriggerTypes() { this->configRuleTriggerTypes_ = nullptr;};
    inline string configRuleTriggerTypes() const { DARABONBA_PTR_GET_DEFAULT(configRuleTriggerTypes_, "") };
    inline CreateAggregateConfigRuleRequest& setConfigRuleTriggerTypes(string configRuleTriggerTypes) { DARABONBA_PTR_SET_VALUE(configRuleTriggerTypes_, configRuleTriggerTypes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAggregateConfigRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excludeAccountIdsScope Field Functions 
    bool hasExcludeAccountIdsScope() const { return this->excludeAccountIdsScope_ != nullptr;};
    void deleteExcludeAccountIdsScope() { this->excludeAccountIdsScope_ = nullptr;};
    inline string excludeAccountIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeAccountIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setExcludeAccountIdsScope(string excludeAccountIdsScope) { DARABONBA_PTR_SET_VALUE(excludeAccountIdsScope_, excludeAccountIdsScope) };


    // excludeFolderIdsScope Field Functions 
    bool hasExcludeFolderIdsScope() const { return this->excludeFolderIdsScope_ != nullptr;};
    void deleteExcludeFolderIdsScope() { this->excludeFolderIdsScope_ = nullptr;};
    inline string excludeFolderIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeFolderIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setExcludeFolderIdsScope(string excludeFolderIdsScope) { DARABONBA_PTR_SET_VALUE(excludeFolderIdsScope_, excludeFolderIdsScope) };


    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string excludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string excludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string excludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeTagsScope Field Functions 
    bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
    void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
    inline const vector<CreateAggregateConfigRuleRequestExcludeTagsScope> & excludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<CreateAggregateConfigRuleRequestExcludeTagsScope>) };
    inline vector<CreateAggregateConfigRuleRequestExcludeTagsScope> excludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<CreateAggregateConfigRuleRequestExcludeTagsScope>) };
    inline CreateAggregateConfigRuleRequest& setExcludeTagsScope(const vector<CreateAggregateConfigRuleRequestExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
    inline CreateAggregateConfigRuleRequest& setExcludeTagsScope(vector<CreateAggregateConfigRuleRequestExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


    // extendContent Field Functions 
    bool hasExtendContent() const { return this->extendContent_ != nullptr;};
    void deleteExtendContent() { this->extendContent_ = nullptr;};
    inline string extendContent() const { DARABONBA_PTR_GET_DEFAULT(extendContent_, "") };
    inline CreateAggregateConfigRuleRequest& setExtendContent(string extendContent) { DARABONBA_PTR_SET_VALUE(extendContent_, extendContent) };


    // folderIdsScope Field Functions 
    bool hasFolderIdsScope() const { return this->folderIdsScope_ != nullptr;};
    void deleteFolderIdsScope() { this->folderIdsScope_ = nullptr;};
    inline string folderIdsScope() const { DARABONBA_PTR_GET_DEFAULT(folderIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setFolderIdsScope(string folderIdsScope) { DARABONBA_PTR_SET_VALUE(folderIdsScope_, folderIdsScope) };


    // inputParameters Field Functions 
    bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
    void deleteInputParameters() { this->inputParameters_ = nullptr;};
    inline     const Darabonba::Json & inputParameters() const { DARABONBA_GET(inputParameters_) };
    Darabonba::Json & inputParameters() { DARABONBA_GET(inputParameters_) };
    inline CreateAggregateConfigRuleRequest& setInputParameters(const Darabonba::Json & inputParameters) { DARABONBA_SET_VALUE(inputParameters_, inputParameters) };
    inline CreateAggregateConfigRuleRequest& setInputParameters(Darabonba::Json & inputParameters) { DARABONBA_SET_RVALUE(inputParameters_, inputParameters) };


    // maximumExecutionFrequency Field Functions 
    bool hasMaximumExecutionFrequency() const { return this->maximumExecutionFrequency_ != nullptr;};
    void deleteMaximumExecutionFrequency() { this->maximumExecutionFrequency_ = nullptr;};
    inline string maximumExecutionFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumExecutionFrequency_, "") };
    inline CreateAggregateConfigRuleRequest& setMaximumExecutionFrequency(string maximumExecutionFrequency) { DARABONBA_PTR_SET_VALUE(maximumExecutionFrequency_, maximumExecutionFrequency) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string regionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string resourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string resourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline CreateAggregateConfigRuleRequest& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // resourceNameScope Field Functions 
    bool hasResourceNameScope() const { return this->resourceNameScope_ != nullptr;};
    void deleteResourceNameScope() { this->resourceNameScope_ = nullptr;};
    inline string resourceNameScope() const { DARABONBA_PTR_GET_DEFAULT(resourceNameScope_, "") };
    inline CreateAggregateConfigRuleRequest& setResourceNameScope(string resourceNameScope) { DARABONBA_PTR_SET_VALUE(resourceNameScope_, resourceNameScope) };


    // resourceTypesScope Field Functions 
    bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
    void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
    inline const vector<string> & resourceTypesScope() const { DARABONBA_PTR_GET_CONST(resourceTypesScope_, vector<string>) };
    inline vector<string> resourceTypesScope() { DARABONBA_PTR_GET(resourceTypesScope_, vector<string>) };
    inline CreateAggregateConfigRuleRequest& setResourceTypesScope(const vector<string> & resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };
    inline CreateAggregateConfigRuleRequest& setResourceTypesScope(vector<string> && resourceTypesScope) { DARABONBA_PTR_SET_RVALUE(resourceTypesScope_, resourceTypesScope) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline CreateAggregateConfigRuleRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sourceIdentifier Field Functions 
    bool hasSourceIdentifier() const { return this->sourceIdentifier_ != nullptr;};
    void deleteSourceIdentifier() { this->sourceIdentifier_ = nullptr;};
    inline string sourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentifier_, "") };
    inline CreateAggregateConfigRuleRequest& setSourceIdentifier(string sourceIdentifier) { DARABONBA_PTR_SET_VALUE(sourceIdentifier_, sourceIdentifier) };


    // sourceOwner Field Functions 
    bool hasSourceOwner() const { return this->sourceOwner_ != nullptr;};
    void deleteSourceOwner() { this->sourceOwner_ = nullptr;};
    inline string sourceOwner() const { DARABONBA_PTR_GET_DEFAULT(sourceOwner_, "") };
    inline CreateAggregateConfigRuleRequest& setSourceOwner(string sourceOwner) { DARABONBA_PTR_SET_VALUE(sourceOwner_, sourceOwner) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAggregateConfigRuleRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAggregateConfigRuleRequestTag>) };
    inline vector<CreateAggregateConfigRuleRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateAggregateConfigRuleRequestTag>) };
    inline CreateAggregateConfigRuleRequest& setTag(const vector<CreateAggregateConfigRuleRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAggregateConfigRuleRequest& setTag(vector<CreateAggregateConfigRuleRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tagKeyLogicScope Field Functions 
    bool hasTagKeyLogicScope() const { return this->tagKeyLogicScope_ != nullptr;};
    void deleteTagKeyLogicScope() { this->tagKeyLogicScope_ = nullptr;};
    inline string tagKeyLogicScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyLogicScope_, "") };
    inline CreateAggregateConfigRuleRequest& setTagKeyLogicScope(string tagKeyLogicScope) { DARABONBA_PTR_SET_VALUE(tagKeyLogicScope_, tagKeyLogicScope) };


    // tagKeyScope Field Functions 
    bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
    void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
    inline string tagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
    inline CreateAggregateConfigRuleRequest& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


    // tagValueScope Field Functions 
    bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
    void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
    inline string tagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
    inline CreateAggregateConfigRuleRequest& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


    // tagsScope Field Functions 
    bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
    void deleteTagsScope() { this->tagsScope_ = nullptr;};
    inline const vector<CreateAggregateConfigRuleRequestTagsScope> & tagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<CreateAggregateConfigRuleRequestTagsScope>) };
    inline vector<CreateAggregateConfigRuleRequestTagsScope> tagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<CreateAggregateConfigRuleRequestTagsScope>) };
    inline CreateAggregateConfigRuleRequest& setTagsScope(const vector<CreateAggregateConfigRuleRequestTagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
    inline CreateAggregateConfigRuleRequest& setTagsScope(vector<CreateAggregateConfigRuleRequestTagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


  protected:
    // The IDs of the member accounts to which the rule applies, which means that the resources within the member accounts are evaluated based on the rule. Separate multiple member account IDs with commas (,).
    std::shared_ptr<string> accountIdsScope_ = nullptr;
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The `token` can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The rule name.
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleName_ = nullptr;
    // The trigger type of the rule. Valid values:
    // 
    // *   ConfigurationItemChangeNotification: The rule is triggered by configuration changes.
    // *   ScheduledNotification: The rule is periodically triggered.
    // 
    // This parameter is required.
    std::shared_ptr<string> configRuleTriggerTypes_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the member account to which the rule does not apply, which means that the resources within the member account are not evaluated based on the rule. Separate multiple member account IDs with commas (,).
    // 
    // > This parameter applies only to a managed rule.
    std::shared_ptr<string> excludeAccountIdsScope_ = nullptr;
    // The ID of the resource directory to which the rule does not apply, which means that the resources within member accounts in the resource directory are not evaluated based on the rule. Separate multiple resource directory IDs with commas (,).
    // 
    // > 
    // 
    // *   This parameter applies only to a rule of a global account group.
    // 
    // *   This parameter applies only to a managed rule.
    std::shared_ptr<string> excludeFolderIdsScope_ = nullptr;
    // The IDs of the regions to which the rule not applies. Separate multiple region IDs with commas (,).
    std::shared_ptr<string> excludeRegionIdsScope_ = nullptr;
    // ExcludeResourceGroupIdsScope. Separate multiple resource group IDs with commas (,).
    std::shared_ptr<string> excludeResourceGroupIdsScope_ = nullptr;
    // The ID of the resource to be excluded from the compliance evaluations performed by the rule. Separate multiple resource IDs with commas (,).
    // 
    // > This parameter applies only to a managed rule.
    std::shared_ptr<string> excludeResourceIdsScope_ = nullptr;
    // The scope of the tag that is excluded.
    std::shared_ptr<vector<CreateAggregateConfigRuleRequestExcludeTagsScope>> excludeTagsScope_ = nullptr;
    // The extended content, which is temporarily only used to configure the trigger time with a 24-hour cycle trigger.
    std::shared_ptr<string> extendContent_ = nullptr;
    // The ID of the resource directory to which the rule applies, which means that the resources within member accounts in the resource directory are evaluated based on the rule.
    // 
    // > 
    // 
    // *   This parameter applies only to a rule of a global account group.
    // 
    // *   This parameter applies only to a managed rule.
    std::shared_ptr<string> folderIdsScope_ = nullptr;
    // The input parameter of the rule.
    Darabonba::Json inputParameters_ = nullptr;
    // The interval at which the rule is triggered. Valid values:
    // 
    // *   One_Hour
    // *   Three_Hours
    // *   Six_Hours
    // *   Twelve_Hours
    // *   TwentyFour_Hours (default)
    // 
    // >  This parameter is required if the `ConfigRuleTriggerTypes` parameter is set to `ScheduledNotification`.
    std::shared_ptr<string> maximumExecutionFrequency_ = nullptr;
    // The ID of the region to which the rule applies. Separate multiple region IDs with commas (,).
    // 
    // > This parameter applies only to a managed rule.
    std::shared_ptr<string> regionIdsScope_ = nullptr;
    // The ID of the resource group to which the rule applies. Separate multiple resource group IDs with commas (,).
    // 
    // > This parameter applies only to a managed rule.
    std::shared_ptr<string> resourceGroupIdsScope_ = nullptr;
    // The IDs of the resources included from the compliance evaluations performed by the rule. Separate multiple resource IDs with commas (,).
    std::shared_ptr<string> resourceIdsScope_ = nullptr;
    // The names of the resource to which the rule applies.
    std::shared_ptr<string> resourceNameScope_ = nullptr;
    // The type of the resource evaluated by the rule. Separate multiple resource types with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> resourceTypesScope_ = nullptr;
    // The risk level of the resources that do not comply with the rule. Valid values:
    // 
    // *   1: high
    // *   2: medium
    // *   3: low
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    // The identifier of the rule.
    // 
    // *   If you set the SourceOwner parameter to ALIYUN, set this parameter to the name of the managed rule.
    // *   If you set the SourceOwner parameter to CUSTOM_FC, set this parameter to the Alibaba Cloud Resource Name (ARN) of the relevant function in Function Compute.
    // 
    // For more information about how to query the name of a managed rule, see [Managed rules](https://help.aliyun.com/document_detail/127404.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceIdentifier_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   ALIYUN: a managed rule.
    // *   CUSTOM_FC: a custom rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceOwner_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateAggregateConfigRuleRequestTag>> tag_ = nullptr;
    // The logical relationship when parameter `TagsScope` takes multiple values, for example: When the parameter `TagsScope` is `"TagsScope.1.TagKey":"a", "TagsScope.1.TagValue":"a", "TagsScope.2.TagKey":"b", "TagsScope.2.TagValue":"b"`, if this parameter is set to` AND`, it means that the rule only applies to resources bound with both tags `a:a` and `b:b`. If not specified, the default logic is `OR`.
    // 
    // It can also be used for the deprecated field `TagKeyScope` (not recommended), for example: When the parameter `TagKeyScope` has a value of `ECS`,`OSS`, if this parameter is set to `AND`, it means that the rule only applies to resources bound with both labels `ECS` and `OSS`.
    // 
    // Values:
    // 
    //  - AND: And.
    // 
    //  - OR: Or.
    std::shared_ptr<string> tagKeyLogicScope_ = nullptr;
    // This parameter is deprecated. We recommend that you use the `TagsScope` parameter.
    // 
    // The tag key used to filter resources. The rule applies only to the resources with the specified tag key. Separate multiple parameter values with commas (,).
    // 
    // >  This parameter applies only to a managed rule. You must configure the `TagKeyScope` and `TagValueScope` parameters at the same time.
    std::shared_ptr<string> tagKeyScope_ = nullptr;
    // This parameter is deprecated. We recommend that you use the `TagsScope` parameter.
    // 
    // The tag value used to filter resources. The rule applies only to the resources that use the specified tag value.
    // 
    // >  This parameter applies only to a managed rule. You must configure the `TagKeyScope` and `TagValueScope` parameters at the same time.
    std::shared_ptr<string> tagValueScope_ = nullptr;
    // The tag scope.
    std::shared_ptr<vector<CreateAggregateConfigRuleRequestTagsScope>> tagsScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
