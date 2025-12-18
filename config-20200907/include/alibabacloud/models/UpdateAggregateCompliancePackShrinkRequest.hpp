// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGGREGATECOMPLIANCEPACKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGGREGATECOMPLIANCEPACKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope.hpp>
#include <alibabacloud/models/UpdateAggregateCompliancePackShrinkRequestTagsScope.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class UpdateAggregateCompliancePackShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAggregateCompliancePackShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_TO_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_TO_JSON(ConfigRules, configRulesShrink_);
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
    };
    friend void from_json(const Darabonba::Json& j, UpdateAggregateCompliancePackShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CompliancePackId, compliancePackId_);
      DARABONBA_PTR_FROM_JSON(CompliancePackName, compliancePackName_);
      DARABONBA_PTR_FROM_JSON(ConfigRules, configRulesShrink_);
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
    };
    UpdateAggregateCompliancePackShrinkRequest() = default ;
    UpdateAggregateCompliancePackShrinkRequest(const UpdateAggregateCompliancePackShrinkRequest &) = default ;
    UpdateAggregateCompliancePackShrinkRequest(UpdateAggregateCompliancePackShrinkRequest &&) = default ;
    UpdateAggregateCompliancePackShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAggregateCompliancePackShrinkRequest() = default ;
    UpdateAggregateCompliancePackShrinkRequest& operator=(const UpdateAggregateCompliancePackShrinkRequest &) = default ;
    UpdateAggregateCompliancePackShrinkRequest& operator=(UpdateAggregateCompliancePackShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->clientToken_ == nullptr && return this->compliancePackId_ == nullptr && return this->compliancePackName_ == nullptr && return this->configRulesShrink_ == nullptr && return this->description_ == nullptr
        && return this->excludeRegionIdsScope_ == nullptr && return this->excludeResourceGroupIdsScope_ == nullptr && return this->excludeResourceIdsScope_ == nullptr && return this->excludeTagsScope_ == nullptr && return this->regionIdsScope_ == nullptr
        && return this->resourceGroupIdsScope_ == nullptr && return this->resourceIdsScope_ == nullptr && return this->riskLevel_ == nullptr && return this->tagShrink_ == nullptr && return this->tagKeyScope_ == nullptr
        && return this->tagValueScope_ == nullptr && return this->tagsScope_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // compliancePackId Field Functions 
    bool hasCompliancePackId() const { return this->compliancePackId_ != nullptr;};
    void deleteCompliancePackId() { this->compliancePackId_ = nullptr;};
    inline string compliancePackId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackId_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setCompliancePackId(string compliancePackId) { DARABONBA_PTR_SET_VALUE(compliancePackId_, compliancePackId) };


    // compliancePackName Field Functions 
    bool hasCompliancePackName() const { return this->compliancePackName_ != nullptr;};
    void deleteCompliancePackName() { this->compliancePackName_ = nullptr;};
    inline string compliancePackName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackName_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setCompliancePackName(string compliancePackName) { DARABONBA_PTR_SET_VALUE(compliancePackName_, compliancePackName) };


    // configRulesShrink Field Functions 
    bool hasConfigRulesShrink() const { return this->configRulesShrink_ != nullptr;};
    void deleteConfigRulesShrink() { this->configRulesShrink_ = nullptr;};
    inline string configRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(configRulesShrink_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setConfigRulesShrink(string configRulesShrink) { DARABONBA_PTR_SET_VALUE(configRulesShrink_, configRulesShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string excludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string excludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string excludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeTagsScope Field Functions 
    bool hasExcludeTagsScope() const { return this->excludeTagsScope_ != nullptr;};
    void deleteExcludeTagsScope() { this->excludeTagsScope_ = nullptr;};
    inline const vector<UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope> & excludeTagsScope() const { DARABONBA_PTR_GET_CONST(excludeTagsScope_, vector<UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope>) };
    inline vector<UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope> excludeTagsScope() { DARABONBA_PTR_GET(excludeTagsScope_, vector<UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope>) };
    inline UpdateAggregateCompliancePackShrinkRequest& setExcludeTagsScope(const vector<UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope> & excludeTagsScope) { DARABONBA_PTR_SET_VALUE(excludeTagsScope_, excludeTagsScope) };
    inline UpdateAggregateCompliancePackShrinkRequest& setExcludeTagsScope(vector<UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope> && excludeTagsScope) { DARABONBA_PTR_SET_RVALUE(excludeTagsScope_, excludeTagsScope) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string regionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string resourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string resourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline int32_t riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
    inline UpdateAggregateCompliancePackShrinkRequest& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // tagShrink Field Functions 
    bool hasTagShrink() const { return this->tagShrink_ != nullptr;};
    void deleteTagShrink() { this->tagShrink_ = nullptr;};
    inline string tagShrink() const { DARABONBA_PTR_GET_DEFAULT(tagShrink_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setTagShrink(string tagShrink) { DARABONBA_PTR_SET_VALUE(tagShrink_, tagShrink) };


    // tagKeyScope Field Functions 
    bool hasTagKeyScope() const { return this->tagKeyScope_ != nullptr;};
    void deleteTagKeyScope() { this->tagKeyScope_ = nullptr;};
    inline string tagKeyScope() const { DARABONBA_PTR_GET_DEFAULT(tagKeyScope_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setTagKeyScope(string tagKeyScope) { DARABONBA_PTR_SET_VALUE(tagKeyScope_, tagKeyScope) };


    // tagValueScope Field Functions 
    bool hasTagValueScope() const { return this->tagValueScope_ != nullptr;};
    void deleteTagValueScope() { this->tagValueScope_ = nullptr;};
    inline string tagValueScope() const { DARABONBA_PTR_GET_DEFAULT(tagValueScope_, "") };
    inline UpdateAggregateCompliancePackShrinkRequest& setTagValueScope(string tagValueScope) { DARABONBA_PTR_SET_VALUE(tagValueScope_, tagValueScope) };


    // tagsScope Field Functions 
    bool hasTagsScope() const { return this->tagsScope_ != nullptr;};
    void deleteTagsScope() { this->tagsScope_ = nullptr;};
    inline const vector<UpdateAggregateCompliancePackShrinkRequestTagsScope> & tagsScope() const { DARABONBA_PTR_GET_CONST(tagsScope_, vector<UpdateAggregateCompliancePackShrinkRequestTagsScope>) };
    inline vector<UpdateAggregateCompliancePackShrinkRequestTagsScope> tagsScope() { DARABONBA_PTR_GET(tagsScope_, vector<UpdateAggregateCompliancePackShrinkRequestTagsScope>) };
    inline UpdateAggregateCompliancePackShrinkRequest& setTagsScope(const vector<UpdateAggregateCompliancePackShrinkRequestTagsScope> & tagsScope) { DARABONBA_PTR_SET_VALUE(tagsScope_, tagsScope) };
    inline UpdateAggregateCompliancePackShrinkRequest& setTagsScope(vector<UpdateAggregateCompliancePackShrinkRequestTagsScope> && tagsScope) { DARABONBA_PTR_SET_RVALUE(tagsScope_, tagsScope) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The client token that you want to use to ensure the idempotency of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.``
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the compliance package.
    // 
    // For more information about how to obtain the ID of a compliance package, see [ListAggregateCompliancePacks](https://help.aliyun.com/document_detail/262059.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> compliancePackId_ = nullptr;
    // The name of the compliance package.
    // 
    // For more information about how to obtain the name of a compliance package, see [ListAggregateCompliancePacks](https://help.aliyun.com/document_detail/262059.html).
    std::shared_ptr<string> compliancePackName_ = nullptr;
    // The rules in the compliance package.
    // 
    // If you leave this parameter empty, the rules in the compliance package remain unchanged. If you set this parameter, Cloud Config replaces the existing rules in the compliance package with the specified rules.
    std::shared_ptr<string> configRulesShrink_ = nullptr;
    // The description of the compliance package.
    std::shared_ptr<string> description_ = nullptr;
    // The IDs of the regions to which the rule not applies. Separate multiple region IDs with commas (,).
    std::shared_ptr<string> excludeRegionIdsScope_ = nullptr;
    // ExcludeResourceGroupIdsScope. Separate multiple resource group IDs with commas (,).
    std::shared_ptr<string> excludeResourceGroupIdsScope_ = nullptr;
    // The ID of the resource that you do not want to evaluate by using the compliance package. Separate multiple resource IDs with commas (,).
    std::shared_ptr<string> excludeResourceIdsScope_ = nullptr;
    // ExcludeTagsScope
    std::shared_ptr<vector<UpdateAggregateCompliancePackShrinkRequestExcludeTagsScope>> excludeTagsScope_ = nullptr;
    // The ID of the region whose resources you want to evaluate by using the compliance package. Separate multiple region IDs with commas (,).
    std::shared_ptr<string> regionIdsScope_ = nullptr;
    // The ID of the resource group whose resources you want to evaluate by using the compliance package. Separate multiple resource group IDs with commas (,).
    std::shared_ptr<string> resourceGroupIdsScope_ = nullptr;
    // The IDs of the resources included from the compliance evaluations performed by the rule. Separate multiple resource IDs with commas (,).
    std::shared_ptr<string> resourceIdsScope_ = nullptr;
    // The risk level of the resources that are not compliant with the rules in the compliance package. Valid values:
    // 
    // *   1: high risk level
    // *   2: medium risk level
    // *   3: low risk level
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
    std::shared_ptr<vector<UpdateAggregateCompliancePackShrinkRequestTagsScope>> tagsScope_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
