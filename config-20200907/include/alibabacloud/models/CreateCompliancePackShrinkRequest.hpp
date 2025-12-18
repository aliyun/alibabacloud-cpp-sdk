// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMPLIANCEPACKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMPLIANCEPACKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCompliancePackShrinkRequestExcludeTagsScope.hpp>
#include <alibabacloud/models/CreateCompliancePackShrinkRequestTagsScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class CreateCompliancePackShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCompliancePackShrinkRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateCompliancePackShrinkRequest& obj) { 
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
    CreateCompliancePackShrinkRequest() = default ;
    CreateCompliancePackShrinkRequest(const CreateCompliancePackShrinkRequest &) = default ;
    CreateCompliancePackShrinkRequest(CreateCompliancePackShrinkRequest &&) = default ;
    CreateCompliancePackShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCompliancePackShrinkRequest() = default ;
    CreateCompliancePackShrinkRequest& operator=(const CreateCompliancePackShrinkRequest &) = default ;
    CreateCompliancePackShrinkRequest& operator=(CreateCompliancePackShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->compliancePackName_ == nullptr && return this->compliancePackTemplateId_ == nullptr && return this->configRulesShrink_ == nullptr && return this->defaultEnable_ == nullptr && return this->description_ == nullptr
        && return this->excludeRegionIdsScope_ == nullptr && return this->excludeResourceGroupIdsScope_ == nullptr && return this->excludeResourceIdsScope_ == nullptr && return this->excludeTagsScope_ == nullptr && return this->regionIdsScope_ == nullptr
        && return this->resourceGroupIdsScope_ == nullptr && return this->resourceIdsScope_ == nullptr && return this->riskLevel_ == nullptr && return this->tagShrink_ == nullptr && return this->tagKeyScope_ == nullptr
        && return this->tagValueScope_ == nullptr && return this->tagsScope_ == nullptr && return this->templateContent_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCompliancePackShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliancePackName Field Functions 
    bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
    void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
    inline string compliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
    inline CreateCompliancePackShrinkRequest& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


    // compliancePackTemplateId Field Functions 
    bool hasCompliancePackTemplateId() const { return this->compliancePackTemplateId_ != nullptr;};
    void deleteCompliancePackTemplateId() { this->compliancePackTemplateId_ = nullptr;};
    inline string compliancePackTemplateId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateId_, "") };
    inline CreateCompliancePackShrinkRequest& setCompliancePackTemplateId(string compliancePackTemplateId) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateId_, compliancePackTemplateId) };


    // configRulesShrink Field Functions 
    bool hasConfigRulesShrink() const { return this->configRulesShrink_ != nullptr;};
    void deleteConfigRulesShrink() { this->configRulesShrink_ = nullptr;};
    inline string configRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(configRulesShrink_, "") };
    inline CreateCompliancePackShrinkRequest& setConfigRulesShrink(string configRulesShrink) { DARABONBA_PTR_SET_VALUE(configRulesShrink_, configRulesShrink) };


    // defaultEnable Field Functions 
    bool hasDefaultEnable() const { return this->defaultEnable_ != nullptr;};
    void deleteDefaultEnable() { this->defaultEnable_ = nullptr;};
    inline bool defaultEnable() const { DARABONBA_PTR_GET_DEFAULT(defaultEnable_, false) };
    inline CreateCompliancePackShrinkRequest& setDefaultEnable(bool defaultEnable) { DARABONBA_PTR_SET_VALUE(defaultEnable_, defaultEnable) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCompliancePackShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string excludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline CreateCompliancePackShrinkRequest& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string excludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline CreateCompliancePackShrinkRequest& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string excludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline CreateCompliancePackShrinkRequest& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeTagsScope Field Functions 
    bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
    void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
    inline const vector<CreateCompliancePackShrinkRequestExcludeTagsScope> & excludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<CreateCompliancePackShrinkRequestExcludeTagsScope>) };
    inline vector<CreateCompliancePackShrinkRequestExcludeTagsScope> excludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<CreateCompliancePackShrinkRequestExcludeTagsScope>) };
    inline CreateCompliancePackShrinkRequest& setExcludeTagsScope(const vector<CreateCompliancePackShrinkRequestExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
    inline CreateCompliancePackShrinkRequest& setExcludeTagsScope(vector<CreateCompliancePackShrinkRequestExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string regionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline CreateCompliancePackShrinkRequest& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string resourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline CreateCompliancePackShrinkRequest& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string resourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline CreateCompliancePackShrinkRequest& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline CreateCompliancePackShrinkRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline CreateCompliancePackShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // tagKeyScope Field Functions 
    bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
    void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
    inline string tagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
    inline CreateCompliancePackShrinkRequest& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


    // tagValueScope Field Functions 
    bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
    void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
    inline string tagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
    inline CreateCompliancePackShrinkRequest& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


    // tagsScope Field Functions 
    bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
    void deleteTagsScope() { this->tagsScope_ = nullptr;};
    inline const vector<CreateCompliancePackShrinkRequestTagsScope> & tagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<CreateCompliancePackShrinkRequestTagsScope>) };
    inline vector<CreateCompliancePackShrinkRequestTagsScope> tagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<CreateCompliancePackShrinkRequestTagsScope>) };
    inline CreateCompliancePackShrinkRequest& setTagsScope(const vector<CreateCompliancePackShrinkRequestTagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
    inline CreateCompliancePackShrinkRequest& setTagsScope(vector<CreateCompliancePackShrinkRequestTagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


    // templateContent Field Functions 
    bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
    void deleteTemplateContent() { this->templateContent_ = nullptr;};
    inline string templateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
    inline CreateCompliancePackShrinkRequest& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


  protected:
    // The client token that you want to use to ensure the idempotency of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.``
    std::shared_ptr<string> clientToken_ = nullptr;
    // The name of the compliance package.
    // 
    // This parameter is required.
    std::shared_ptr<string> compliancePackName_ = nullptr;
    // The ID of the compliance package template.
    // 
    // You can call the [ListCompliancePackTemplates](https://help.aliyun.com/document_detail/261176.html) operation to obtain the ID of the compliance package.
    std::shared_ptr<string> compliancePackTemplateId_ = nullptr;
    // The rules in the compliance package. You must specify either this parameter or TemplateContent.
    std::shared_ptr<string> configRulesShrink_ = nullptr;
    // Specifies whether to enable the rule together with the compliance package. Valid values:
    // 
    // *   true: The system enables the rule together with the compliance package.
    // *   false: The system does not enable the rule together with the compliance package.
    std::shared_ptr<bool> defaultEnable_ = nullptr;
    // The description of the compliance package.
    std::shared_ptr<string> description_ = nullptr;
    // ExcludeRegionIdsScope
    std::shared_ptr<string> excludeRegionIdsScope_ = nullptr;
    // ExcludeResourceGroupIdsScope. Separate multiple resource group IDs with commas (,).
    std::shared_ptr<string> excludeResourceGroupIdsScope_ = nullptr;
    // The ID of the resource that you do not want to evaluate by using the compliance package. Separate multiple resource IDs with commas (,).
    std::shared_ptr<string> excludeResourceIdsScope_ = nullptr;
    // ExcludeTagsScope
    std::shared_ptr<vector<CreateCompliancePackShrinkRequestExcludeTagsScope>> excludeTagsScope_ = nullptr;
    // The ID of the region whose resources you want to evaluate by using the compliance package. Separate multiple region IDs with commas (,).
    std::shared_ptr<string> regionIdsScope_ = nullptr;
    // The ID of the resource group whose resources you want to evaluate by using the compliance package. Separate multiple resource group IDs with commas (,).
    std::shared_ptr<string> resourceGroupIdsScope_ = nullptr;
    // ResourceIdsScope
    std::shared_ptr<string> resourceIdsScope_ = nullptr;
    // The risk level of the resources that are not compliant with the rules in the compliance package. Default value: 2. Valid values:
    // 
    // *   1: high.
    // *   2: medium.
    // *   3: low.
    std::shared_ptr<int32_t> riskLevel_ = nullptr;
    // The tags of the resource.
    // 
    // You can add up to 20 tags to a resource.
    std::shared_ptr<string> tagShrink_ = nullptr;
    // The tag key of the resource that you want to evaluate by using the compliance package.
    std::shared_ptr<string> tagKeyScope_ = nullptr;
    // The tag value of the resource that you want to evaluate by using the compliance package.
    // 
    // >  You must configure the TagValueScope parameter together with the TagKeyScope parameter.
    std::shared_ptr<string> tagValueScope_ = nullptr;
    // TagsScope
    std::shared_ptr<vector<CreateCompliancePackShrinkRequestTagsScope>> tagsScope_ = nullptr;
    // The information about the template that is used to generate the compliance package. You can call an API operation to view the details of an existing compliance package or write a compliance package template. For more information, see [Write a compliance package template in a configuration file](https://help.aliyun.com/document_detail/2659733.html). You must specify one of ConfigRules and TemplateContent.
    std::shared_ptr<string> templateContent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
