// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOGROUPINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOGROUPINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceManager20200331
{
namespace Models
{
  class CreateAutoGroupingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoGroupingRuleRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoGroupingRuleRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    CreateAutoGroupingRuleRequest() = default ;
    CreateAutoGroupingRuleRequest(const CreateAutoGroupingRuleRequest &) = default ;
    CreateAutoGroupingRuleRequest(CreateAutoGroupingRuleRequest &&) = default ;
    CreateAutoGroupingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoGroupingRuleRequest() = default ;
    CreateAutoGroupingRuleRequest& operator=(const CreateAutoGroupingRuleRequest &) = default ;
    CreateAutoGroupingRuleRequest& operator=(CreateAutoGroupingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleContents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleContents& obj) { 
        DARABONBA_PTR_TO_JSON(AutoGroupingScopeCondition, autoGroupingScopeCondition_);
        DARABONBA_PTR_TO_JSON(TargetResourceGroupCondition, targetResourceGroupCondition_);
      };
      friend void from_json(const Darabonba::Json& j, RuleContents& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoGroupingScopeCondition, autoGroupingScopeCondition_);
        DARABONBA_PTR_FROM_JSON(TargetResourceGroupCondition, targetResourceGroupCondition_);
      };
      RuleContents() = default ;
      RuleContents(const RuleContents &) = default ;
      RuleContents(RuleContents &&) = default ;
      RuleContents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleContents() = default ;
      RuleContents& operator=(const RuleContents &) = default ;
      RuleContents& operator=(RuleContents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoGroupingScopeCondition_ == nullptr
        && this->targetResourceGroupCondition_ == nullptr; };
      // autoGroupingScopeCondition Field Functions 
      bool hasAutoGroupingScopeCondition() const { return this->autoGroupingScopeCondition_ != nullptr;};
      void deleteAutoGroupingScopeCondition() { this->autoGroupingScopeCondition_ = nullptr;};
      inline string getAutoGroupingScopeCondition() const { DARABONBA_PTR_GET_DEFAULT(autoGroupingScopeCondition_, "") };
      inline RuleContents& setAutoGroupingScopeCondition(string autoGroupingScopeCondition) { DARABONBA_PTR_SET_VALUE(autoGroupingScopeCondition_, autoGroupingScopeCondition) };


      // targetResourceGroupCondition Field Functions 
      bool hasTargetResourceGroupCondition() const { return this->targetResourceGroupCondition_ != nullptr;};
      void deleteTargetResourceGroupCondition() { this->targetResourceGroupCondition_ = nullptr;};
      inline string getTargetResourceGroupCondition() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupCondition_, "") };
      inline RuleContents& setTargetResourceGroupCondition(string targetResourceGroupCondition) { DARABONBA_PTR_SET_VALUE(targetResourceGroupCondition_, targetResourceGroupCondition) };


    protected:
      // The condition for the range of resources to be automatically transferred.
      shared_ptr<string> autoGroupingScopeCondition_ {};
      // The condition for the destination resource group.
      // 
      // This parameter is required.
      shared_ptr<string> targetResourceGroupCondition_ {};
    };

    virtual bool empty() const override { return this->excludeRegionIdsScope_ == nullptr
        && this->excludeResourceGroupIdsScope_ == nullptr && this->excludeResourceIdsScope_ == nullptr && this->excludeResourceTypesScope_ == nullptr && this->regionIdsScope_ == nullptr && this->resourceGroupIdsScope_ == nullptr
        && this->resourceIdsScope_ == nullptr && this->resourceTypesScope_ == nullptr && this->ruleContents_ == nullptr && this->ruleDesc_ == nullptr && this->ruleName_ == nullptr
        && this->ruleType_ == nullptr; };
    // excludeRegionIdsScope Field Functions 
    bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
    void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
    inline string getExcludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
    inline CreateAutoGroupingRuleRequest& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


    // excludeResourceGroupIdsScope Field Functions 
    bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
    void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
    inline string getExcludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
    inline CreateAutoGroupingRuleRequest& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


    // excludeResourceIdsScope Field Functions 
    bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
    void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
    inline string getExcludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
    inline CreateAutoGroupingRuleRequest& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


    // excludeResourceTypesScope Field Functions 
    bool hasExcludeResourceTypesScope() const { return this->excludeResourceTypesScope_ != nullptr;};
    void deleteExcludeResourceTypesScope() { this->excludeResourceTypesScope_ = nullptr;};
    inline string getExcludeResourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceTypesScope_, "") };
    inline CreateAutoGroupingRuleRequest& setExcludeResourceTypesScope(string excludeResourceTypesScope) { DARABONBA_PTR_SET_VALUE(excludeResourceTypesScope_, excludeResourceTypesScope) };


    // regionIdsScope Field Functions 
    bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
    void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
    inline string getRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
    inline CreateAutoGroupingRuleRequest& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


    // resourceGroupIdsScope Field Functions 
    bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
    void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
    inline string getResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
    inline CreateAutoGroupingRuleRequest& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


    // resourceIdsScope Field Functions 
    bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
    void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
    inline string getResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
    inline CreateAutoGroupingRuleRequest& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


    // resourceTypesScope Field Functions 
    bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
    void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
    inline string getResourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
    inline CreateAutoGroupingRuleRequest& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


    // ruleContents Field Functions 
    bool hasRuleContents() const { return this->ruleContents_ != nullptr;};
    void deleteRuleContents() { this->ruleContents_ = nullptr;};
    inline const vector<CreateAutoGroupingRuleRequest::RuleContents> & getRuleContents() const { DARABONBA_PTR_GET_CONST(ruleContents_, vector<CreateAutoGroupingRuleRequest::RuleContents>) };
    inline vector<CreateAutoGroupingRuleRequest::RuleContents> getRuleContents() { DARABONBA_PTR_GET(ruleContents_, vector<CreateAutoGroupingRuleRequest::RuleContents>) };
    inline CreateAutoGroupingRuleRequest& setRuleContents(const vector<CreateAutoGroupingRuleRequest::RuleContents> & ruleContents) { DARABONBA_PTR_SET_VALUE(ruleContents_, ruleContents) };
    inline CreateAutoGroupingRuleRequest& setRuleContents(vector<CreateAutoGroupingRuleRequest::RuleContents> && ruleContents) { DARABONBA_PTR_SET_RVALUE(ruleContents_, ruleContents) };


    // ruleDesc Field Functions 
    bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
    void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
    inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
    inline CreateAutoGroupingRuleRequest& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateAutoGroupingRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
    inline CreateAutoGroupingRuleRequest& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The IDs of regions to be excluded. Separate multiple IDs with commas (,).
    shared_ptr<string> excludeRegionIdsScope_ {};
    // The IDs of resource groups to be excluded. Separate multiple IDs with commas (,).
    shared_ptr<string> excludeResourceGroupIdsScope_ {};
    // The IDs of resources to be excluded. Separate multiple IDs with commas (,).
    shared_ptr<string> excludeResourceIdsScope_ {};
    // The resource types to be excluded. Separate multiple resource types with commas (,).
    shared_ptr<string> excludeResourceTypesScope_ {};
    // The IDs of regions. Separate multiple IDs with commas (,).
    shared_ptr<string> regionIdsScope_ {};
    // The IDs of resource groups. Separate multiple IDs with commas (,).
    shared_ptr<string> resourceGroupIdsScope_ {};
    // The IDs of resources. Separate multiple IDs with commas (,).
    shared_ptr<string> resourceIdsScope_ {};
    // The resource types. Separate multiple resource types with commas (,).
    shared_ptr<string> resourceTypesScope_ {};
    // The content records of the rule.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateAutoGroupingRuleRequest::RuleContents>> ruleContents_ {};
    // The description of the rule.
    shared_ptr<string> ruleDesc_ {};
    // The name of the rule.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
    // The type of the rule. Valid values:
    // 
    // *   custom_condition: custom transfer rule
    // *   associated_transfer: transfer rule for associated resources
    // 
    // This parameter is required.
    shared_ptr<string> ruleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
