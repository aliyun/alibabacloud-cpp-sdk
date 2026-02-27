// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOGROUPINGRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOGROUPINGRULERESPONSEBODY_HPP_
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
  class GetAutoGroupingRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoGroupingRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoGroupingRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
    };
    GetAutoGroupingRuleResponseBody() = default ;
    GetAutoGroupingRuleResponseBody(const GetAutoGroupingRuleResponseBody &) = default ;
    GetAutoGroupingRuleResponseBody(GetAutoGroupingRuleResponseBody &&) = default ;
    GetAutoGroupingRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoGroupingRuleResponseBody() = default ;
    GetAutoGroupingRuleResponseBody& operator=(const GetAutoGroupingRuleResponseBody &) = default ;
    GetAutoGroupingRuleResponseBody& operator=(GetAutoGroupingRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rule : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rule& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
        DARABONBA_PTR_TO_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
        DARABONBA_PTR_TO_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
        DARABONBA_PTR_TO_JSON(ExcludeResourceTypesScope, excludeResourceTypesScope_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(RegionIdsScope, regionIdsScope_);
        DARABONBA_PTR_TO_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
        DARABONBA_PTR_TO_JSON(ResourceIdsScope, resourceIdsScope_);
        DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
        DARABONBA_PTR_TO_JSON(RuleContents, ruleContents_);
        DARABONBA_PTR_TO_JSON(RuleDesc, ruleDesc_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      };
      friend void from_json(const Darabonba::Json& j, Rule& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExcludeRegionIdsScope, excludeRegionIdsScope_);
        DARABONBA_PTR_FROM_JSON(ExcludeResourceGroupIdsScope, excludeResourceGroupIdsScope_);
        DARABONBA_PTR_FROM_JSON(ExcludeResourceIdsScope, excludeResourceIdsScope_);
        DARABONBA_PTR_FROM_JSON(ExcludeResourceTypesScope, excludeResourceTypesScope_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(RegionIdsScope, regionIdsScope_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupIdsScope, resourceGroupIdsScope_);
        DARABONBA_PTR_FROM_JSON(ResourceIdsScope, resourceIdsScope_);
        DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
        DARABONBA_PTR_FROM_JSON(RuleContents, ruleContents_);
        DARABONBA_PTR_FROM_JSON(RuleDesc, ruleDesc_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      };
      Rule() = default ;
      Rule(const Rule &) = default ;
      Rule(Rule &&) = default ;
      Rule(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rule() = default ;
      Rule& operator=(const Rule &) = default ;
      Rule& operator=(Rule &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuleContents : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleContents& obj) { 
          DARABONBA_PTR_TO_JSON(AutoGroupingScopeCondition, autoGroupingScopeCondition_);
          DARABONBA_PTR_TO_JSON(RuleContentId, ruleContentId_);
          DARABONBA_PTR_TO_JSON(TargetResourceGroupCondition, targetResourceGroupCondition_);
        };
        friend void from_json(const Darabonba::Json& j, RuleContents& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoGroupingScopeCondition, autoGroupingScopeCondition_);
          DARABONBA_PTR_FROM_JSON(RuleContentId, ruleContentId_);
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
        && this->ruleContentId_ == nullptr && this->targetResourceGroupCondition_ == nullptr; };
        // autoGroupingScopeCondition Field Functions 
        bool hasAutoGroupingScopeCondition() const { return this->autoGroupingScopeCondition_ != nullptr;};
        void deleteAutoGroupingScopeCondition() { this->autoGroupingScopeCondition_ = nullptr;};
        inline string getAutoGroupingScopeCondition() const { DARABONBA_PTR_GET_DEFAULT(autoGroupingScopeCondition_, "") };
        inline RuleContents& setAutoGroupingScopeCondition(string autoGroupingScopeCondition) { DARABONBA_PTR_SET_VALUE(autoGroupingScopeCondition_, autoGroupingScopeCondition) };


        // ruleContentId Field Functions 
        bool hasRuleContentId() const { return this->ruleContentId_ != nullptr;};
        void deleteRuleContentId() { this->ruleContentId_ = nullptr;};
        inline string getRuleContentId() const { DARABONBA_PTR_GET_DEFAULT(ruleContentId_, "") };
        inline RuleContents& setRuleContentId(string ruleContentId) { DARABONBA_PTR_SET_VALUE(ruleContentId_, ruleContentId) };


        // targetResourceGroupCondition Field Functions 
        bool hasTargetResourceGroupCondition() const { return this->targetResourceGroupCondition_ != nullptr;};
        void deleteTargetResourceGroupCondition() { this->targetResourceGroupCondition_ = nullptr;};
        inline string getTargetResourceGroupCondition() const { DARABONBA_PTR_GET_DEFAULT(targetResourceGroupCondition_, "") };
        inline RuleContents& setTargetResourceGroupCondition(string targetResourceGroupCondition) { DARABONBA_PTR_SET_VALUE(targetResourceGroupCondition_, targetResourceGroupCondition) };


      protected:
        // The condition for the range of resources that are automatically transferred.
        shared_ptr<string> autoGroupingScopeCondition_ {};
        // The ID of the content record.
        shared_ptr<string> ruleContentId_ {};
        // The condition for the destination resource group.
        shared_ptr<string> targetResourceGroupCondition_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->excludeRegionIdsScope_ == nullptr && this->excludeResourceGroupIdsScope_ == nullptr && this->excludeResourceIdsScope_ == nullptr && this->excludeResourceTypesScope_ == nullptr && this->modifyTime_ == nullptr
        && this->regionIdsScope_ == nullptr && this->resourceGroupIdsScope_ == nullptr && this->resourceIdsScope_ == nullptr && this->resourceTypesScope_ == nullptr && this->ruleContents_ == nullptr
        && this->ruleDesc_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Rule& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // excludeRegionIdsScope Field Functions 
      bool hasExcludeRegionIdsScope() const { return this->excludeRegionIdsScope_ != nullptr;};
      void deleteExcludeRegionIdsScope() { this->excludeRegionIdsScope_ = nullptr;};
      inline string getExcludeRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeRegionIdsScope_, "") };
      inline Rule& setExcludeRegionIdsScope(string excludeRegionIdsScope) { DARABONBA_PTR_SET_VALUE(excludeRegionIdsScope_, excludeRegionIdsScope) };


      // excludeResourceGroupIdsScope Field Functions 
      bool hasExcludeResourceGroupIdsScope() const { return this->excludeResourceGroupIdsScope_ != nullptr;};
      void deleteExcludeResourceGroupIdsScope() { this->excludeResourceGroupIdsScope_ = nullptr;};
      inline string getExcludeResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceGroupIdsScope_, "") };
      inline Rule& setExcludeResourceGroupIdsScope(string excludeResourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceGroupIdsScope_, excludeResourceGroupIdsScope) };


      // excludeResourceIdsScope Field Functions 
      bool hasExcludeResourceIdsScope() const { return this->excludeResourceIdsScope_ != nullptr;};
      void deleteExcludeResourceIdsScope() { this->excludeResourceIdsScope_ = nullptr;};
      inline string getExcludeResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceIdsScope_, "") };
      inline Rule& setExcludeResourceIdsScope(string excludeResourceIdsScope) { DARABONBA_PTR_SET_VALUE(excludeResourceIdsScope_, excludeResourceIdsScope) };


      // excludeResourceTypesScope Field Functions 
      bool hasExcludeResourceTypesScope() const { return this->excludeResourceTypesScope_ != nullptr;};
      void deleteExcludeResourceTypesScope() { this->excludeResourceTypesScope_ = nullptr;};
      inline string getExcludeResourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceTypesScope_, "") };
      inline Rule& setExcludeResourceTypesScope(string excludeResourceTypesScope) { DARABONBA_PTR_SET_VALUE(excludeResourceTypesScope_, excludeResourceTypesScope) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Rule& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // regionIdsScope Field Functions 
      bool hasRegionIdsScope() const { return this->regionIdsScope_ != nullptr;};
      void deleteRegionIdsScope() { this->regionIdsScope_ = nullptr;};
      inline string getRegionIdsScope() const { DARABONBA_PTR_GET_DEFAULT(regionIdsScope_, "") };
      inline Rule& setRegionIdsScope(string regionIdsScope) { DARABONBA_PTR_SET_VALUE(regionIdsScope_, regionIdsScope) };


      // resourceGroupIdsScope Field Functions 
      bool hasResourceGroupIdsScope() const { return this->resourceGroupIdsScope_ != nullptr;};
      void deleteResourceGroupIdsScope() { this->resourceGroupIdsScope_ = nullptr;};
      inline string getResourceGroupIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdsScope_, "") };
      inline Rule& setResourceGroupIdsScope(string resourceGroupIdsScope) { DARABONBA_PTR_SET_VALUE(resourceGroupIdsScope_, resourceGroupIdsScope) };


      // resourceIdsScope Field Functions 
      bool hasResourceIdsScope() const { return this->resourceIdsScope_ != nullptr;};
      void deleteResourceIdsScope() { this->resourceIdsScope_ = nullptr;};
      inline string getResourceIdsScope() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsScope_, "") };
      inline Rule& setResourceIdsScope(string resourceIdsScope) { DARABONBA_PTR_SET_VALUE(resourceIdsScope_, resourceIdsScope) };


      // resourceTypesScope Field Functions 
      bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
      void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
      inline string getResourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
      inline Rule& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


      // ruleContents Field Functions 
      bool hasRuleContents() const { return this->ruleContents_ != nullptr;};
      void deleteRuleContents() { this->ruleContents_ = nullptr;};
      inline const vector<Rule::RuleContents> & getRuleContents() const { DARABONBA_PTR_GET_CONST(ruleContents_, vector<Rule::RuleContents>) };
      inline vector<Rule::RuleContents> getRuleContents() { DARABONBA_PTR_GET(ruleContents_, vector<Rule::RuleContents>) };
      inline Rule& setRuleContents(const vector<Rule::RuleContents> & ruleContents) { DARABONBA_PTR_SET_VALUE(ruleContents_, ruleContents) };
      inline Rule& setRuleContents(vector<Rule::RuleContents> && ruleContents) { DARABONBA_PTR_SET_RVALUE(ruleContents_, ruleContents) };


      // ruleDesc Field Functions 
      bool hasRuleDesc() const { return this->ruleDesc_ != nullptr;};
      void deleteRuleDesc() { this->ruleDesc_ = nullptr;};
      inline string getRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(ruleDesc_, "") };
      inline Rule& setRuleDesc(string ruleDesc) { DARABONBA_PTR_SET_VALUE(ruleDesc_, ruleDesc) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline Rule& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Rule& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline string getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, "") };
      inline Rule& setRuleType(string ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    protected:
      // The time when the rule was created.
      shared_ptr<string> createTime_ {};
      // The IDs of excluded regions. Multiple IDs are separated by commas (,).
      shared_ptr<string> excludeRegionIdsScope_ {};
      // The IDs of excluded resource groups. Multiple IDs are separated by commas (,).
      shared_ptr<string> excludeResourceGroupIdsScope_ {};
      // The IDs of excluded resources. Multiple IDs are separated by commas (,).
      shared_ptr<string> excludeResourceIdsScope_ {};
      // The excluded resource types. Multiple resource types are separated by commas (,).
      shared_ptr<string> excludeResourceTypesScope_ {};
      // The time when the rule was modified.
      shared_ptr<string> modifyTime_ {};
      // The IDs of regions. Multiple IDs are separated by commas (,).
      shared_ptr<string> regionIdsScope_ {};
      // The IDs of resource groups. Multiple IDs are separated by commas (,).
      shared_ptr<string> resourceGroupIdsScope_ {};
      // The IDs of resources. Multiple IDs are separated by commas (,).
      shared_ptr<string> resourceIdsScope_ {};
      // The resource types. Multiple resource types are separated by commas (,).
      shared_ptr<string> resourceTypesScope_ {};
      // The content records of the rule.
      shared_ptr<vector<Rule::RuleContents>> ruleContents_ {};
      // The description of the rule.
      shared_ptr<string> ruleDesc_ {};
      // The ID of the rule.
      shared_ptr<string> ruleId_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The type of the rule. Valid values:
      // 
      // *   custom_condition: custom transfer rule
      // *   associated_transfer: transfer rule for associated resources
      shared_ptr<string> ruleType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->rule_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAutoGroupingRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline const GetAutoGroupingRuleResponseBody::Rule & getRule() const { DARABONBA_PTR_GET_CONST(rule_, GetAutoGroupingRuleResponseBody::Rule) };
    inline GetAutoGroupingRuleResponseBody::Rule getRule() { DARABONBA_PTR_GET(rule_, GetAutoGroupingRuleResponseBody::Rule) };
    inline GetAutoGroupingRuleResponseBody& setRule(const GetAutoGroupingRuleResponseBody::Rule & rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };
    inline GetAutoGroupingRuleResponseBody& setRule(GetAutoGroupingRuleResponseBody::Rule && rule) { DARABONBA_PTR_SET_RVALUE(rule_, rule) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the rule.
    shared_ptr<GetAutoGroupingRuleResponseBody::Rule> rule_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceManager20200331
#endif
