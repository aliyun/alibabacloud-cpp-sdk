// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULERESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCONTAINERDEFENSERULERESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListContainerDefenseRuleResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListContainerDefenseRuleResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_TO_JSON(ClusterIdList, clusterIdList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListContainerDefenseRuleResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterCount, clusterCount_);
      DARABONBA_PTR_FROM_JSON(ClusterIdList, clusterIdList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
    };
    ListContainerDefenseRuleResponseBodyList() = default ;
    ListContainerDefenseRuleResponseBodyList(const ListContainerDefenseRuleResponseBodyList &) = default ;
    ListContainerDefenseRuleResponseBodyList(ListContainerDefenseRuleResponseBodyList &&) = default ;
    ListContainerDefenseRuleResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListContainerDefenseRuleResponseBodyList() = default ;
    ListContainerDefenseRuleResponseBodyList& operator=(const ListContainerDefenseRuleResponseBodyList &) = default ;
    ListContainerDefenseRuleResponseBodyList& operator=(ListContainerDefenseRuleResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterCount_ == nullptr
        && return this->clusterIdList_ == nullptr && return this->description_ == nullptr && return this->ruleAction_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr
        && return this->ruleSwitch_ == nullptr && return this->ruleType_ == nullptr; };
    // clusterCount Field Functions 
    bool hasClusterCount() const { return this->clusterCount_ != nullptr;};
    void deleteClusterCount() { this->clusterCount_ = nullptr;};
    inline int32_t clusterCount() const { DARABONBA_PTR_GET_DEFAULT(clusterCount_, 0) };
    inline ListContainerDefenseRuleResponseBodyList& setClusterCount(int32_t clusterCount) { DARABONBA_PTR_SET_VALUE(clusterCount_, clusterCount) };


    // clusterIdList Field Functions 
    bool hasClusterIdList() const { return this->clusterIdList_ != nullptr;};
    void deleteClusterIdList() { this->clusterIdList_ = nullptr;};
    inline string clusterIdList() const { DARABONBA_PTR_GET_DEFAULT(clusterIdList_, "") };
    inline ListContainerDefenseRuleResponseBodyList& setClusterIdList(string clusterIdList) { DARABONBA_PTR_SET_VALUE(clusterIdList_, clusterIdList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListContainerDefenseRuleResponseBodyList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t ruleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline ListContainerDefenseRuleResponseBodyList& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ListContainerDefenseRuleResponseBodyList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ListContainerDefenseRuleResponseBodyList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t ruleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline ListContainerDefenseRuleResponseBodyList& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t ruleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ListContainerDefenseRuleResponseBodyList& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


  protected:
    // The total number of clusters.
    std::shared_ptr<int32_t> clusterCount_ = nullptr;
    // The clusters specified in the rule.
    std::shared_ptr<string> clusterIdList_ = nullptr;
    // The description of the rule.
    std::shared_ptr<string> description_ = nullptr;
    // The action specified in the rule. Valid values:
    // 
    // *   **1**: alert
    // *   **2**: block
    std::shared_ptr<int32_t> ruleAction_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The status of the rule. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int32_t> ruleSwitch_ = nullptr;
    // The type of the rule. Valid values:
    // 
    // *   **1**: system rule
    // *   **2**: custom rule
    std::shared_ptr<int32_t> ruleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
