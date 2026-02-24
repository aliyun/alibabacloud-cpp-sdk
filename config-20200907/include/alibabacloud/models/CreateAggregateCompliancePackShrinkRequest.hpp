// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAGGREGATECOMPLIANCEPACKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAGGREGATECOMPLIANCEPACKSHRINKREQUEST_HPP_
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
  class CreateAggregateCompliancePackShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAggregateCompliancePackShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_TO_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
      DARABONBA_PTR_TO_JSON(ConfigRules, configRulesShrink_);
      DARABONBA_PTR_TO_JSON(DefaultEnable, defaultEnable_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Tag, tagShrink_);
      DARABONBA_PTR_TO_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_TO_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_TO_JSON(TagsScope, tagsScope_);
      DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAggregateCompliancePackShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_FROM_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
      DARABONBA_PTR_FROM_JSON(ConfigRules, configRulesShrink_);
      DARABONBA_PTR_FROM_JSON(DefaultEnable, defaultEnable_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeTagsScope, excludeTagsScope_);
      DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Tag, tagShrink_);
      DARABONBA_PTR_FROM_JSON(TagKeyScope, tagKeyScope_);
      DARABONBA_PTR_FROM_JSON(TagValueScope, tagValueScope_);
      DARABONBA_PTR_FROM_JSON(TagsScope, tagsScope_);
      DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
    };
    CreateAggregateCompliancePackShrinkRequest() = default ;
    CreateAggregateCompliancePackShrinkRequest(const CreateAggregateCompliancePackShrinkRequest &) = default ;
    CreateAggregateCompliancePackShrinkRequest(CreateAggregateCompliancePackShrinkRequest &&) = default ;
    CreateAggregateCompliancePackShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAggregateCompliancePackShrinkRequest() = default ;
    CreateAggregateCompliancePackShrinkRequest& operator=(const CreateAggregateCompliancePackShrinkRequest &) = default ;
    CreateAggregateCompliancePackShrinkRequest& operator=(CreateAggregateCompliancePackShrinkRequest &&) = default ;
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
      // The tag key of the resource.
      shared_ptr<string> tagKey_ {};
      // The tag value of the resource.
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
      // The tag key of the resource.
      shared_ptr<string> tagKey_ {};
      // The tag value of the resource.
      shared_ptr<string> tagValue_ {};
    };

    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->clientToken_ == nullptr && this->compliancePackName_ == nullptr && this->compliancePackTemplateId_ == nullptr && this->configRulesShrink_ == nullptr && this->defaultEnable_ == nullptr
        && this->description_ == nullptr && this->excludeRegionIdsScope_ == nullptr && this->excludeResourceGroupIdsScope_ == nullptr && this->excludeResourceIdsScope_ == nullptr && this->excludeTagsScope_ == nullptr
        && this->regionIdsScope_ == nullptr && this->resourceGroupIdsScope_ == nullptr && this->resourceIdsScope_ == nullptr && this->riskLevel_ == nullptr && this->tagShrink_ == nullptr
        && this->tagKeyScope_ == nullptr && this->tagValueScope_ == nullptr && this->tagsScope_ == nullptr && this->templateContent_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliancePackName Field Functions 
    bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
    void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
    inline string getCompliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


    // compliancePackTemplateId Field Functions 
    bool hasCompliancePackTemplateId() const { return this->compliancePackTemplateId_ != nullptr;};
    void deleteCompliancePackTemplateId() { this->compliancePackTemplateId_ = nullptr;};
    inline string getCompliancePackTemplateId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateId_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setCompliancePackTemplateId(string compliancePackTemplateId) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateId_, compliancePackTemplateId) };


    // configRulesShrink Field Functions 
    bool hasConfigRulesShrink() const { return this->configRulesShrink_ != nullptr;};
    void deleteConfigRulesShrink() { this->configRulesShrink_ = nullptr;};
    inline string getConfigRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(configRulesShrink_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setConfigRulesShrink(string configRulesShrink) { DARABONBA_PTR_SET_VALUE(configRulesShrink_, configRulesShrink) };


    // defaultEnable Field Functions 
    bool hasDefaultEnable() const { return this->defaultEnable_ != nullptr;};
    void deleteDefaultEnable() { this->defaultEnable_ = nullptr;};
    inline bool getDefaultEnable() const { DARABONBA_PTR_GET_DEFAULT(defaultEnable_, false) };
    inline CreateAggregateCompliancePackShrinkRequest& setDefaultEnable(bool defaultEnable) { DARABONBA_PTR_SET_VALUE(defaultEnable_, defaultEnable) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string getExcludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string getExcludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string getExcludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeTagsScope Field Functions 
    bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
    void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
    inline const vector<CreateAggregateCompliancePackShrinkRequest::ExcludeTagsScope> & getExcludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<CreateAggregateCompliancePackShrinkRequest::ExcludeTagsScope>) };
    inline vector<CreateAggregateCompliancePackShrinkRequest::ExcludeTagsScope> getExcludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<CreateAggregateCompliancePackShrinkRequest::ExcludeTagsScope>) };
    inline CreateAggregateCompliancePackShrinkRequest& setExcludeTagsScope(const vector<CreateAggregateCompliancePackShrinkRequest::ExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
    inline CreateAggregateCompliancePackShrinkRequest& setExcludeTagsScope(vector<CreateAggregateCompliancePackShrinkRequest::ExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string getRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string getResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string getResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline CreateAggregateCompliancePackShrinkRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string getTagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // tagKeyScope Field Functions 
    bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
    void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
    inline string getTagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


    // tagValueScope Field Functions 
    bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
    void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
    inline string getTagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


    // tagsScope Field Functions 
    bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
    void deleteTagsScope() { this->tagsScope_ = nullptr;};
    inline const vector<CreateAggregateCompliancePackShrinkRequest::TagsScope> & getTagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<CreateAggregateCompliancePackShrinkRequest::TagsScope>) };
    inline vector<CreateAggregateCompliancePackShrinkRequest::TagsScope> getTagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<CreateAggregateCompliancePackShrinkRequest::TagsScope>) };
    inline CreateAggregateCompliancePackShrinkRequest& setTagsScope(const vector<CreateAggregateCompliancePackShrinkRequest::TagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
    inline CreateAggregateCompliancePackShrinkRequest& setTagsScope(vector<CreateAggregateCompliancePackShrinkRequest::TagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline CreateAggregateCompliancePackShrinkRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // A client token. It is used to ensure the idempotence of the request. Generate a value from your client to make sure that the value is unique among different requests. `ClientToken` supports only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The name of the compliance pack.
    // 
    // This parameter is required.
    shared_ptr<string> compliancePackName_ {};
    // The ID of the compliance pack template.
    // 
    // For more information about how to obtain the ID of a compliance pack template, see [ListCompliancePackTemplates](https://help.aliyun.com/document_detail/261176.html).
    shared_ptr<string> compliancePackTemplateId_ {};
    // The rules in the compliance pack.
    // 
    // > Specify either this parameter or `TemplateContent`.
    shared_ptr<string> configRulesShrink_ {};
    // Indicates whether the rule is enabled for quick activation. Valid values:
    // 
    // - true: The rule is enabled when you quickly activate the compliance pack.
    // 
    // - false (default): The rule is not enabled.
    shared_ptr<bool> defaultEnable_ {};
    // The description of the compliance pack.
    shared_ptr<string> description_ {};
    // The compliance pack does not take effect for resources in the specified regions. The resources in these regions are not evaluated. Separate multiple region IDs with commas (,).
    shared_ptr<string> excludeRegionIdsScope_ {};
    // The compliance pack does not take effect for resources in the specified resource groups. The resources in these resource groups are not evaluated. Separate multiple resource group IDs with commas (,).
    shared_ptr<string> excludeResourceGroupIdsScope_ {};
    // The compliance pack does not take effect for the specified resources. The resources are not evaluated. Separate multiple resource IDs with commas (,).
    shared_ptr<string> excludeResourceIdsScope_ {};
    // The excluded tags.
    shared_ptr<vector<CreateAggregateCompliancePackShrinkRequest::ExcludeTagsScope>> excludeTagsScope_ {};
    // The compliance pack takes effect only for resources in the specified regions. Separate multiple region IDs with commas (,).
    shared_ptr<string> regionIdsScope_ {};
    // The compliance pack takes effect only for resources in the specified resource groups. Separate multiple resource group IDs with commas (,).
    shared_ptr<string> resourceGroupIdsScope_ {};
    // The compliance pack takes effect only for the specified resources. Separate multiple resource IDs with commas (,).
    shared_ptr<string> resourceIdsScope_ {};
    // The risk level of the compliance pack. Valid values:
    // 
    // - 1: High
    // 
    // - 2 (default): Medium
    // 
    // - 3: Low
    shared_ptr<int32_t> riskLevel_ {};
    // The tags of the resource.
    // 
    // You can add up to 20 tags.
    shared_ptr<string> tagShrink_ {};
    // The compliance pack takes effect only for resources that have the specified tag key.
    shared_ptr<string> tagKeyScope_ {};
    // The compliance pack takes effect only for resources that have the specified tag key-value pair.
    // 
    // > TagValueScope must be used with TagKeyScope.
    shared_ptr<string> tagValueScope_ {};
    // The effective tags.
    shared_ptr<vector<CreateAggregateCompliancePackShrinkRequest::TagsScope>> tagsScope_ {};
    // The template information that is used to generate the compliance pack. You can view the template content in the details of an existing compliance pack or create a template. For more information, see [Create a configurable compliance pack template](https://help.aliyun.com/document_detail/2659733.html).
    // 
    // > Specify either this parameter or `ConfigRules`.
    shared_ptr<string> templateContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
