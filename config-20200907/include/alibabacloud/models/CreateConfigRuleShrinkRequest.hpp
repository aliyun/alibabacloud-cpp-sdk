// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECONFIGRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECONFIGRULESHRINKREQUEST_HPP_
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
  class CreateConfigRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateConfigRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_TO_JSON(ConfigRuleTriggerTypes, configRuleTriggerTypes_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_TO_JSON(ExtendContent, extendContent_);
      DARABONBA_PTR_TO_JSON(InputParameters, inputParametersShrink_);
      DARABONBA_PTR_TO_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceNameScope, resourceNameScope_);
      DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScopeShrink_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(SourceIdentifier, sourceIdentifier_);
      DARABONBA_PTR_TO_JSON(SourceOwner, sourceOwner_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
      DARABONBA_PTR_TO_JSON(TagKeyLogicScope, tagKeyLogicScope_);
      DARABONBA_PTR_TO_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_TO_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_TO_JSON(TagsScope, tagsScope_);
    };
    friend void from_json(const Darabonba::Json& j, CreateConfigRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
      DARABONBA_PTR_FROM_JSON(ConfigRuleTriggerTypes, configRuleTriggerTypes_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_FROM_JSON(ExtendContent, extendContent_);
      DARABONBA_PTR_FROM_JSON(InputParameters, inputParametersShrink_);
      DARABONBA_PTR_FROM_JSON(MaximumExecutionFrequency, maximumExecutionFrequency_);
      DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceNameScope, resourceNameScope_);
      DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScopeShrink_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(SourceIdentifier, sourceIdentifier_);
      DARABONBA_PTR_FROM_JSON(SourceOwner, sourceOwner_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
      DARABONBA_PTR_FROM_JSON(TagKeyLogicScope, tagKeyLogicScope_);
      DARABONBA_PTR_FROM_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_FROM_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_FROM_JSON(TagsScope, tagsScope_);
    };
    CreateConfigRuleShrinkRequest() = default ;
    CreateConfigRuleShrinkRequest(const CreateConfigRuleShrinkRequest &) = default ;
    CreateConfigRuleShrinkRequest(CreateConfigRuleShrinkRequest &&) = default ;
    CreateConfigRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateConfigRuleShrinkRequest() = default ;
    CreateConfigRuleShrinkRequest& operator=(const CreateConfigRuleShrinkRequest &) = default ;
    CreateConfigRuleShrinkRequest& operator=(CreateConfigRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagsScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagsScope& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, TagsScope& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      TagsScope() = default ;
      TagsScope(const TagsScope &) = default ;
      TagsScope(TagsScope &&) = default ;
      TagsScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagsScope() = default ;
      TagsScope& operator=(const TagsScope &) = default ;
      TagsScope& operator=(TagsScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagsScope& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline TagsScope& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
    };

    class ExcludeTagsScope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExcludeTagsScope& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, ExcludeTagsScope& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      ExcludeTagsScope() = default ;
      ExcludeTagsScope(const ExcludeTagsScope &) = default ;
      ExcludeTagsScope(ExcludeTagsScope &&) = default ;
      ExcludeTagsScope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExcludeTagsScope() = default ;
      ExcludeTagsScope& operator=(const ExcludeTagsScope &) = default ;
      ExcludeTagsScope& operator=(ExcludeTagsScope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline ExcludeTagsScope& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
      inline ExcludeTagsScope& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


    protected:
      // The tag key.
      shared_ptr<string> tagKey_ {};
      // The tag value.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->conditions_ == nullptr && this->configRuleName_ == nullptr && this->configRuleTriggerTypes_ == nullptr && this->description_ == nullptr && this->excludeRegionIdsScope_ == nullptr
        && this->excludeResourceGroupIdsScope_ == nullptr && this->excludeResourceIdsScope_ == nullptr && this->excludeTagsScope_ == nullptr && this->extendContent_ == nullptr && this->inputParametersShrink_ == nullptr
        && this->maximumExecutionFrequency_ == nullptr && this->regionIdsScope_ == nullptr && this->resourceGroupIdsScope_ == nullptr && this->resourceIdsScope_ == nullptr && this->resourceNameScope_ == nullptr
        && this->resourceTypesScopeShrink_ == nullptr && this->riskLevel_ == nullptr && this->sourceIdentifier_ == nullptr && this->sourceOwner_ == nullptr && this->tagShrink_ == nullptr
        && this->tagKeyLogicScope_ == nullptr && this->tagKeyScope_ == nullptr && this->tagValueScope_ == nullptr && this->tagsScope_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateConfigRuleShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline string getConditions() const { DARABONBA_PTR_GET_DEFAULT(conditions_, "") };
    inline CreateConfigRuleShrinkRequest& setConditions(string conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };


    // configRuleName Field Functions 
    bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
    void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
    inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
    inline CreateConfigRuleShrinkRequest& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


    // configRuleTriggerTypes Field Functions 
    bool hasConfigRuleTriggerTypes() const { return this->configRuleTriggerTypes_ != nullptr;};
    void deleteConfigRuleTriggerTypes() { this->configRuleTriggerTypes_ = nullptr;};
    inline string getConfigRuleTriggerTypes() const { DARABONBA_PTR_GET_DEFAULT(configRuleTriggerTypes_, "") };
    inline CreateConfigRuleShrinkRequest& setConfigRuleTriggerTypes(string configRuleTriggerTypes) { DARABONBA_PTR_SET_VALUE(configRuleTriggerTypes_, configRuleTriggerTypes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateConfigRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string getExcludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline CreateConfigRuleShrinkRequest& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string getExcludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline CreateConfigRuleShrinkRequest& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string getExcludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline CreateConfigRuleShrinkRequest& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeTagsScope Field Functions 
    bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
    void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
    inline const vector<CreateConfigRuleShrinkRequest::ExcludeTagsScope> & getExcludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<CreateConfigRuleShrinkRequest::ExcludeTagsScope>) };
    inline vector<CreateConfigRuleShrinkRequest::ExcludeTagsScope> getExcludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<CreateConfigRuleShrinkRequest::ExcludeTagsScope>) };
    inline CreateConfigRuleShrinkRequest& setExcludeTagsScope(const vector<CreateConfigRuleShrinkRequest::ExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
    inline CreateConfigRuleShrinkRequest& setExcludeTagsScope(vector<CreateConfigRuleShrinkRequest::ExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


    // extendContent Field Functions 
    bool hasExtendContent() const { return this->extendContent_ != nullptr;};
    void deleteExtendContent() { this->extendContent_ = nullptr;};
    inline string getExtendContent() const { DARABONBA_PTR_GET_DEFAULT(extendContent_, "") };
    inline CreateConfigRuleShrinkRequest& setExtendContent(string extendContent) { DARABONBA_PTR_SET_VALUE(extendContent_, extendContent) };


    // inputParametersShrink Field Functions 
    bool hasInputParametersShrink() const { return this->inputParametersShrink_ != nullptr;};
    void deleteInputParametersShrink() { this->inputParametersShrink_ = nullptr;};
    inline string getInputParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(inputParametersShrink_, "") };
    inline CreateConfigRuleShrinkRequest& setInputParametersShrink(string inputParametersShrink) { DARABONBA_PTR_SET_VALUE(inputParametersShrink_, inputParametersShrink) };


    // maximumExecutionFrequency Field Functions 
    bool hasMaximumExecutionFrequency() const { return this->maximumExecutionFrequency_ != nullptr;};
    void deleteMaximumExecutionFrequency() { this->maximumExecutionFrequency_ = nullptr;};
    inline string getMaximumExecutionFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumExecutionFrequency_, "") };
    inline CreateConfigRuleShrinkRequest& setMaximumExecutionFrequency(string maximumExecutionFrequency) { DARABONBA_PTR_SET_VALUE(maximumExecutionFrequency_, maximumExecutionFrequency) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string getRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline CreateConfigRuleShrinkRequest& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string getResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline CreateConfigRuleShrinkRequest& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string getResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline CreateConfigRuleShrinkRequest& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // resourceNameScope Field Functions 
    bool hasResourceNameScope() const { return this->resourceNameScope_ != nullptr;};
    void deleteResourceNameScope() { this->resourceNameScope_ = nullptr;};
    inline string getResourceNameScope() const { DARABONBA_PTR_GET_DEFAULT(resourceNameScope_, "") };
    inline CreateConfigRuleShrinkRequest& setResourceNameScope(string resourceNameScope) { DARABONBA_PTR_SET_VALUE(resourceNameScope_, resourceNameScope) };


    // resourceTypesScopeShrink Field Functions 
    bool hasResourceTypesScopeShrink() const { return this->resourceTypesScopeShrink_ != nullptr;};
    void deleteResourceTypesScopeShrink() { this->resourceTypesScopeShrink_ = nullptr;};
    inline string getResourceTypesScopeShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScopeShrink_, "") };
    inline CreateConfigRuleShrinkRequest& setResourceTypesScopeShrink(string resourceTypesScopeShrink) { DARABONBA_PTR_SET_VALUE(resourceTypesScopeShrink_, resourceTypesScopeShrink) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline CreateConfigRuleShrinkRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // sourceIdentifier Field Functions 
    bool hasSourceIdentifier() const { return this->sourceIdentifier_ != nullptr;};
    void deleteSourceIdentifier() { this->sourceIdentifier_ = nullptr;};
    inline string getSourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(sourceIdentifier_, "") };
    inline CreateConfigRuleShrinkRequest& setSourceIdentifier(string sourceIdentifier) { DARABONBA_PTR_SET_VALUE(sourceIdentifier_, sourceIdentifier) };


    // sourceOwner Field Functions 
    bool hasSourceOwner() const { return this->sourceOwner_ != nullptr;};
    void deleteSourceOwner() { this->sourceOwner_ = nullptr;};
    inline string getSourceOwner() const { DARABONBA_PTR_GET_DEFAULT(sourceOwner_, "") };
    inline CreateConfigRuleShrinkRequest& setSourceOwner(string sourceOwner) { DARABONBA_PTR_SET_VALUE(sourceOwner_, sourceOwner) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateConfigRuleShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // tagKeyLogicScope Field Functions 
    bool hasTagKeyLogicScope() const { return this->tagKeyLogicScope_ != nullptr;};
    void deleteTagKeyLogicScope() { this->tagKeyLogicScope_ = nullptr;};
    inline string getTagKeyLogicScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyLogicScope_, "") };
    inline CreateConfigRuleShrinkRequest& setTagKeyLogicScope(string tagKeyLogicScope) { DARABONBA_PTR_SET_VALUE(tagKeyLogicScope_, tagKeyLogicScope) };


    // tagKeyScope Field Functions 
    bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
    void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
    inline string getTagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
    inline CreateConfigRuleShrinkRequest& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


    // tagValueScope Field Functions 
    bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
    void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
    inline string getTagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
    inline CreateConfigRuleShrinkRequest& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


    // tagsScope Field Functions 
    bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
    void deleteTagsScope() { this->tagsScope_ = nullptr;};
    inline const vector<CreateConfigRuleShrinkRequest::TagsScope> & getTagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<CreateConfigRuleShrinkRequest::TagsScope>) };
    inline vector<CreateConfigRuleShrinkRequest::TagsScope> getTagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<CreateConfigRuleShrinkRequest::TagsScope>) };
    inline CreateConfigRuleShrinkRequest& setTagsScope(const vector<CreateConfigRuleShrinkRequest::TagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
    inline CreateConfigRuleShrinkRequest& setTagsScope(vector<CreateConfigRuleShrinkRequest::TagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


  protected:
    // A client token. It is used to ensure the idempotence of the request. You can use the client to generate a token, but you must make sure that the token is unique among different requests. The `ClientToken` parameter can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> conditions_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> configRuleName_ {};
    // The trigger that invokes the rule. Valid values:
    // 
    // - ConfigurationItemChangeNotification: The rule is triggered by configuration changes.
    // 
    // - ScheduledNotification: The rule is triggered on a regular basis.
    // 
    // > If a rule has multiple triggers, separate them with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> configRuleTriggerTypes_ {};
    // The description of the rule.
    shared_ptr<string> description_ {};
    // The rule does not apply to resources in the specified regions. The compliance of resources in these regions is not evaluated. Separate multiple region IDs with commas (,).
    shared_ptr<string> excludeRegionIdsScope_ {};
    // The rule does not apply to resources in the specified resource groups. The compliance of resources in these resource groups is not evaluated. Separate multiple resource group IDs with commas (,).
    shared_ptr<string> excludeResourceGroupIdsScope_ {};
    // The rule does not apply to the specified resources. The compliance of these resources is not evaluated. Separate multiple resource IDs with commas (,).
    // 
    // > This parameter applies only to rule templates.
    shared_ptr<string> excludeResourceIdsScope_ {};
    // The scope of the tags to exclude.
    shared_ptr<vector<CreateConfigRuleShrinkRequest::ExcludeTagsScope>> excludeTagsScope_ {};
    // Extended content. This parameter is used only to specify the trigger time for a 24-hour evaluation cycle.
    shared_ptr<string> extendContent_ {};
    // The input parameters of the rule.
    // 
    // You can obtain the input parameters of a rule by calling the [GetManagedRule](https://help.aliyun.com/document_detail/606993.html) operation. View the `CompulsoryInputParameterDetails` and `OptionalInputParameterDetails` parameters to learn about the required and optional parameters.
    // 
    // The format of the input parameters is `{"Parameter 1 Name":"Parameter 1 Value","Parameter 2 Name":"Parameter 2 Value"}`.
    shared_ptr<string> inputParametersShrink_ {};
    // The frequency at which the rule is executed. Valid values:
    // 
    // - One_Hour: 1 hour.
    // 
    // - Three_Hours: 3 hours.
    // 
    // - Six_Hours: 6 hours.
    // 
    // - Twelve_Hours: 12 hours.
    // 
    // - TwentyFour_Hours (default): 24 hours.
    // 
    // > This parameter is required if you set ConfigRuleTriggerTypes to ScheduledNotification.
    shared_ptr<string> maximumExecutionFrequency_ {};
    // The rule applies only to resources in the specified regions. Separate multiple region IDs with commas (,).
    // 
    // > This parameter applies only to rule templates.
    shared_ptr<string> regionIdsScope_ {};
    // The rule applies only to resources in the specified resource groups. Separate multiple resource group IDs with commas (,).
    // 
    // > This parameter applies only to rule templates.
    shared_ptr<string> resourceGroupIdsScope_ {};
    // The rule applies to the specified resources. Separate multiple resource IDs with commas (,).
    shared_ptr<string> resourceIdsScope_ {};
    // The rule applies only to resources that have the specified names.
    shared_ptr<string> resourceNameScope_ {};
    // The resource types to be evaluated by the rule. Separate multiple resource types with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> resourceTypesScopeShrink_ {};
    // The risk level of the rule. Valid values:
    // 
    // - 1: high.
    // 
    // - 2: medium.
    // 
    // - 3: low.
    // 
    // This parameter is required.
    shared_ptr<int32_t> riskLevel_ {};
    // The identifier of the rule.
    // 
    // - If you set `SourceOwner` to `ALIYUN`, specify the identifier of the rule template. Example: `required-tags`.
    // 
    //   > To query the identifier of a rule template, see [List of rule templates](https://help.aliyun.com/document_detail/127404.html).
    // 
    // - If you set `SourceOwner` to `CUSTOM_FC`, specify the Alibaba Cloud Resource Name (ARN) of the function.
    // 
    //   The ARN must be in the format of `acs:fc:{Region}:{AccountID}:services/{ServiceName}.LATEST/functions/{FunctionName}`. Example: `acs:fc:cn-hangzhou:120886317861****:services/service-test.LATEST/functions/config-test`.
    // 
    //   > To obtain the ARN of a function, see [ListFunctions](https://help.aliyun.com/document_detail/415752.html).
    // 
    // This parameter is required.
    shared_ptr<string> sourceIdentifier_ {};
    // The type of the rule to create. Valid values:
    // 
    // - ALIYUN: rule template.
    // 
    // - CUSTOM_FC: custom rule.
    // 
    // This parameter is required.
    shared_ptr<string> sourceOwner_ {};
    // The tags of the rule to be created.
    shared_ptr<string> tagShrink_ {};
    // The logical operator that applies if you specify multiple tags for the `TagsScope` parameter. For example, if you set `TagsScope` to `"TagsScope.1.TagKey":"a","TagsScope.1.TagValue":"a","TagsScope.2.TagKey":"b","TagsScope.2.TagValue":"b"` and set this parameter to `AND`, the rule applies only to resources that have both the `a:a` and `b:b` tags. If you do not specify this parameter, the default value `OR` is used.
    // 
    // This parameter also works with the deprecated `TagKeyScope` parameter. For example, if you set `TagKeyScope` to `ECS,OSS` and set this parameter to `AND`, the rule applies only to resources that have both the `ECS` and `OSS` tags.
    // 
    // Valid values:
    // 
    // - AND: The AND logic applies.
    // 
    // - OR: The OR logic applies.
    shared_ptr<string> tagKeyLogicScope_ {};
    // This parameter is deprecated. Use the `TagsScope` parameter instead.
    // 
    // The rule applies only to resources that have the specified tag key.
    // 
    // > This parameter applies only to managed rules. You must set both `TagKeyScope` and `TagValueScope`.
    shared_ptr<string> tagKeyScope_ {};
    // This parameter is deprecated. Use the `TagsScope` parameter instead.
    // 
    // The rule applies only to resources that have the specified tag value.
    // 
    // > This parameter applies only to rule templates. You must set both `TagKeyScope` and `TagValueScope`.
    shared_ptr<string> tagValueScope_ {};
    // The scope of the tags.
    shared_ptr<vector<CreateConfigRuleShrinkRequest::TagsScope>> tagsScope_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
