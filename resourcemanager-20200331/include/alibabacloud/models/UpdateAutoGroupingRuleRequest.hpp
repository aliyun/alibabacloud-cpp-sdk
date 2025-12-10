// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTOGROUPINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTOGROUPINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAutoGroupingRuleRequestRuleContents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class UpdateAutoGroupingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAutoGroupingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceTypesScope, excludeResourceTypesScope_);
      DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_TO_JSON(RuleContents, ruleContents_);
      DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAutoGroupingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceTypesScope, excludeResourceTypesScope_);
      DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
      DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
      DARABONBA_PTR_FROM_JSON(RuleContents, ruleContents_);
      DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    UpdateAutoGroupingRuleRequest() = default ;
    UpdateAutoGroupingRuleRequest(const UpdateAutoGroupingRuleRequest &) = default ;
    UpdateAutoGroupingRuleRequest(UpdateAutoGroupingRuleRequest &&) = default ;
    UpdateAutoGroupingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAutoGroupingRuleRequest() = default ;
    UpdateAutoGroupingRuleRequest& operator=(const UpdateAutoGroupingRuleRequest &) = default ;
    UpdateAutoGroupingRuleRequest& operator=(UpdateAutoGroupingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->excludeRegionIdsScope_ == nullptr
        && return this->excludeResourceGroupIdsScope_ == nullptr && return this->excludeResourceIdsScope_ == nullptr && return this->excludeResourceTypesScope_ == nullptr && return this->regionIdsScope_ == nullptr && return this->resourceGroupIdsScope_ == nullptr
        && return this->resourceIdsScope_ == nullptr && return this->resourceTypesScope_ == nullptr && return this->ruleContents_ == nullptr && return this->ruleDesc_ == nullptr && return this->ruleId_ == nullptr
        && return this->ruleName_ == nullptr; };
    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string excludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline UpdateAutoGroupingRuleRequest& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string excludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline UpdateAutoGroupingRuleRequest& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string excludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline UpdateAutoGroupingRuleRequest& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeResourceTypesScope Field Functions 
    bool hasExcludeResourceTypesScope() const { return this->excludeResourceTypesScope_ != nullptr;};
    void deleteExcludeResourceTypesScope() { this->excludeResourceTypesScope_ = nullptr;};
    inline string excludeResourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceTypesScope_, "") };
    inline UpdateAutoGroupingRuleRequest& setExcludeResourceTypesScope(string excludeResourceTypesScope) { DARABONBA_PTR_SET_VALUE(excludeResourceTypesScope_, excludeResourceTypesScope) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string regionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline UpdateAutoGroupingRuleRequest& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string resourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline UpdateAutoGroupingRuleRequest& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string resourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline UpdateAutoGroupingRuleRequest& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // resourceTypesScope Field Functions 
    bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
    void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
    inline string resourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
    inline UpdateAutoGroupingRuleRequest& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


    // ruleContents Field Functions 
    bool hasRuleContents() const { return this->ruleContents_ != nullptr;};
    void deleteRuleContents() { this->ruleContents_ = nullptr;};
    inline const vector<UpdateAutoGroupingRuleRequestRuleContents> & ruleContents() const { DARABONBA_PTR_GET_CONST(ruleContents_, vector<UpdateAutoGroupingRuleRequestRuleContents>) };
    inline vector<UpdateAutoGroupingRuleRequestRuleContents> ruleContents() { DARABONBA_PTR_GET(ruleContents_, vector<UpdateAutoGroupingRuleRequestRuleContents>) };
    inline UpdateAutoGroupingRuleRequest& setRuleContents(const vector<UpdateAutoGroupingRuleRequestRuleContents> & ruleContents) { DARABONBA_PTR_SET_VALUE(ruleContents_, ruleContents) };
    inline UpdateAutoGroupingRuleRequest& setRuleContents(vector<UpdateAutoGroupingRuleRequestRuleContents> && ruleContents) { DARABONBA_PTR_SET_RVALUE(ruleContents_, ruleContents) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string ruleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline UpdateAutoGroupingRuleRequest& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline UpdateAutoGroupingRuleRequest& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateAutoGroupingRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // The IDs of regions to be excluded. Separate multiple IDs with commas (,).
    std::shared_ptr<string> excludeRegionIdsScope_ = nullptr;
    // The IDs of resource groups to be excluded. Separate multiple IDs with commas (,).
    std::shared_ptr<string> excludeResourceGroupIdsScope_ = nullptr;
    // The IDs of resources to be excluded. Separate multiple IDs with commas (,).
    std::shared_ptr<string> excludeResourceIdsScope_ = nullptr;
    // The resource types to be excluded. Separate multiple resource types with commas (,).
    std::shared_ptr<string> excludeResourceTypesScope_ = nullptr;
    // The IDs of regions. Separate multiple IDs with commas (,).
    std::shared_ptr<string> regionIdsScope_ = nullptr;
    // The IDs of resource groups. Separate multiple IDs with commas (,).
    std::shared_ptr<string> resourceGroupIdsScope_ = nullptr;
    // The IDs of resources. Separate multiple IDs with commas (,).
    std::shared_ptr<string> resourceIdsScope_ = nullptr;
    // The resource types. Separate multiple resource types with commas (,).
    std::shared_ptr<string> resourceTypesScope_ = nullptr;
    // The content records of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateAutoGroupingRuleRequestRuleContents>> ruleContents_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> ruleDesc_ = nullptr;
    // The ID of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
