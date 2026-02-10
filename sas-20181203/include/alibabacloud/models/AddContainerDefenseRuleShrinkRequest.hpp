// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONTAINERDEFENSERULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONTAINERDEFENSERULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddContainerDefenseRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddContainerDefenseRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelistShrink_);
    };
    friend void from_json(const Darabonba::Json& j, AddContainerDefenseRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelistShrink_);
    };
    AddContainerDefenseRuleShrinkRequest() = default ;
    AddContainerDefenseRuleShrinkRequest(const AddContainerDefenseRuleShrinkRequest &) = default ;
    AddContainerDefenseRuleShrinkRequest(AddContainerDefenseRuleShrinkRequest &&) = default ;
    AddContainerDefenseRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddContainerDefenseRuleShrinkRequest() = default ;
    AddContainerDefenseRuleShrinkRequest& operator=(const AddContainerDefenseRuleShrinkRequest &) = default ;
    AddContainerDefenseRuleShrinkRequest& operator=(AddContainerDefenseRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scope& obj) { 
        DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      };
      friend void from_json(const Darabonba::Json& j, Scope& obj) { 
        DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      };
      Scope() = default ;
      Scope(const Scope &) = default ;
      Scope(Scope &&) = default ;
      Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scope() = default ;
      Scope& operator=(const Scope &) = default ;
      Scope& operator=(Scope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allNamespace_ == nullptr
        && this->clusterId_ == nullptr && this->namespaces_ == nullptr; };
      // allNamespace Field Functions 
      bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
      void deleteAllNamespace() { this->allNamespace_ = nullptr;};
      inline int32_t getAllNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
      inline Scope& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Scope& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // namespaces Field Functions 
      bool hasNamespaces() const { return this->namespaces_ != nullptr;};
      void deleteNamespaces() { this->namespaces_ = nullptr;};
      inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
      inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
      inline Scope& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
      inline Scope& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    protected:
      // Specifies whether to include all namespaces. Valid values:
      // 
      // *   **0**: You can use the Namespaces parameter to specify the namespaces to include.
      // *   **1**: All namespaces are included.
      shared_ptr<int32_t> allNamespace_ {};
      // The ID of the cluster.
      // 
      // >  You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/182997.html) operation to query the IDs of clusters.
      shared_ptr<string> clusterId_ {};
      // The namespaces to include.
      shared_ptr<vector<string>> namespaces_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->ruleAction_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleSwitch_ == nullptr && this->ruleType_ == nullptr
        && this->scope_ == nullptr && this->whitelistShrink_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddContainerDefenseRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline AddContainerDefenseRuleShrinkRequest& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline AddContainerDefenseRuleShrinkRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline AddContainerDefenseRuleShrinkRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t getRuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline AddContainerDefenseRuleShrinkRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline AddContainerDefenseRuleShrinkRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<AddContainerDefenseRuleShrinkRequest::Scope> & getScope() const { DARABONBA_PTR_GET_CONST(scope_, vector<AddContainerDefenseRuleShrinkRequest::Scope>) };
    inline vector<AddContainerDefenseRuleShrinkRequest::Scope> getScope() { DARABONBA_PTR_GET(scope_, vector<AddContainerDefenseRuleShrinkRequest::Scope>) };
    inline AddContainerDefenseRuleShrinkRequest& setScope(const vector<AddContainerDefenseRuleShrinkRequest::Scope> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline AddContainerDefenseRuleShrinkRequest& setScope(vector<AddContainerDefenseRuleShrinkRequest::Scope> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // whitelistShrink Field Functions 
    bool hasWhitelistShrink() const { return this->whitelistShrink_ != nullptr;};
    void deleteWhitelistShrink() { this->whitelistShrink_ = nullptr;};
    inline string getWhitelistShrink() const { DARABONBA_PTR_GET_DEFAULT(whitelistShrink_, "") };
    inline AddContainerDefenseRuleShrinkRequest& setWhitelistShrink(string whitelistShrink) { DARABONBA_PTR_SET_VALUE(whitelistShrink_, whitelistShrink) };


  protected:
    // The description of the rule.
    shared_ptr<string> description_ {};
    // The action that is performed when the rule is hit. Valid values:
    // 
    // *   **1**: alert
    // *   **2**: block
    shared_ptr<int32_t> ruleAction_ {};
    // The ID of the rule. You do not need to manually specify the ID.
    shared_ptr<int64_t> ruleId_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
    // The switch of the rule. Valid values:
    // 
    // *   **0**: off
    // *   **1**: on
    shared_ptr<int32_t> ruleSwitch_ {};
    // The rule type. Valid values:
    // 
    // *   2: user-defined rules
    // 
    // > Only the value 2 is supported.
    shared_ptr<int32_t> ruleType_ {};
    // The scope.
    shared_ptr<vector<AddContainerDefenseRuleShrinkRequest::Scope>> scope_ {};
    // The whitelist.
    shared_ptr<string> whitelistShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
