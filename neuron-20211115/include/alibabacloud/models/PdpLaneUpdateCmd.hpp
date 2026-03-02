// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPLANEUPDATECMD_HPP_
#define ALIBABACLOUD_MODELS_PDPLANEUPDATECMD_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RuleCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpLaneUpdateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpLaneUpdateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(customeMarkingRules, customeMarkingRules_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(initGroupFlag, initGroupFlag_);
      DARABONBA_PTR_TO_JSON(inletServiceIds, inletServiceIds_);
      DARABONBA_PTR_TO_JSON(markingRuleType, markingRuleType_);
      DARABONBA_PTR_TO_JSON(ruleConditions, ruleConditions_);
      DARABONBA_PTR_TO_JSON(ruleConnectType, ruleConnectType_);
      DARABONBA_PTR_TO_JSON(serviceGroupIds, serviceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, PdpLaneUpdateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(customeMarkingRules, customeMarkingRules_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(initGroupFlag, initGroupFlag_);
      DARABONBA_PTR_FROM_JSON(inletServiceIds, inletServiceIds_);
      DARABONBA_PTR_FROM_JSON(markingRuleType, markingRuleType_);
      DARABONBA_PTR_FROM_JSON(ruleConditions, ruleConditions_);
      DARABONBA_PTR_FROM_JSON(ruleConnectType, ruleConnectType_);
      DARABONBA_PTR_FROM_JSON(serviceGroupIds, serviceGroupIds_);
    };
    PdpLaneUpdateCmd() = default ;
    PdpLaneUpdateCmd(const PdpLaneUpdateCmd &) = default ;
    PdpLaneUpdateCmd(PdpLaneUpdateCmd &&) = default ;
    PdpLaneUpdateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpLaneUpdateCmd() = default ;
    PdpLaneUpdateCmd& operator=(const PdpLaneUpdateCmd &) = default ;
    PdpLaneUpdateCmd& operator=(PdpLaneUpdateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->customeMarkingRules_ == nullptr && this->description_ == nullptr && this->id_ == nullptr && this->initGroupFlag_ == nullptr && this->inletServiceIds_ == nullptr
        && this->markingRuleType_ == nullptr && this->ruleConditions_ == nullptr && this->ruleConnectType_ == nullptr && this->serviceGroupIds_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PdpLaneUpdateCmd& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // customeMarkingRules Field Functions 
    bool hasCustomeMarkingRules() const { return this->customeMarkingRules_ != nullptr;};
    void deleteCustomeMarkingRules() { this->customeMarkingRules_ = nullptr;};
    inline string getCustomeMarkingRules() const { DARABONBA_PTR_GET_DEFAULT(customeMarkingRules_, "") };
    inline PdpLaneUpdateCmd& setCustomeMarkingRules(string customeMarkingRules) { DARABONBA_PTR_SET_VALUE(customeMarkingRules_, customeMarkingRules) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpLaneUpdateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PdpLaneUpdateCmd& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // initGroupFlag Field Functions 
    bool hasInitGroupFlag() const { return this->initGroupFlag_ != nullptr;};
    void deleteInitGroupFlag() { this->initGroupFlag_ = nullptr;};
    inline bool getInitGroupFlag() const { DARABONBA_PTR_GET_DEFAULT(initGroupFlag_, false) };
    inline PdpLaneUpdateCmd& setInitGroupFlag(bool initGroupFlag) { DARABONBA_PTR_SET_VALUE(initGroupFlag_, initGroupFlag) };


    // inletServiceIds Field Functions 
    bool hasInletServiceIds() const { return this->inletServiceIds_ != nullptr;};
    void deleteInletServiceIds() { this->inletServiceIds_ = nullptr;};
    inline string getInletServiceIds() const { DARABONBA_PTR_GET_DEFAULT(inletServiceIds_, "") };
    inline PdpLaneUpdateCmd& setInletServiceIds(string inletServiceIds) { DARABONBA_PTR_SET_VALUE(inletServiceIds_, inletServiceIds) };


    // markingRuleType Field Functions 
    bool hasMarkingRuleType() const { return this->markingRuleType_ != nullptr;};
    void deleteMarkingRuleType() { this->markingRuleType_ = nullptr;};
    inline string getMarkingRuleType() const { DARABONBA_PTR_GET_DEFAULT(markingRuleType_, "") };
    inline PdpLaneUpdateCmd& setMarkingRuleType(string markingRuleType) { DARABONBA_PTR_SET_VALUE(markingRuleType_, markingRuleType) };


    // ruleConditions Field Functions 
    bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
    void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
    inline const vector<RuleCondition> & getRuleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<RuleCondition>) };
    inline vector<RuleCondition> getRuleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<RuleCondition>) };
    inline PdpLaneUpdateCmd& setRuleConditions(const vector<RuleCondition> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
    inline PdpLaneUpdateCmd& setRuleConditions(vector<RuleCondition> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


    // ruleConnectType Field Functions 
    bool hasRuleConnectType() const { return this->ruleConnectType_ != nullptr;};
    void deleteRuleConnectType() { this->ruleConnectType_ = nullptr;};
    inline string getRuleConnectType() const { DARABONBA_PTR_GET_DEFAULT(ruleConnectType_, "") };
    inline PdpLaneUpdateCmd& setRuleConnectType(string ruleConnectType) { DARABONBA_PTR_SET_VALUE(ruleConnectType_, ruleConnectType) };


    // serviceGroupIds Field Functions 
    bool hasServiceGroupIds() const { return this->serviceGroupIds_ != nullptr;};
    void deleteServiceGroupIds() { this->serviceGroupIds_ = nullptr;};
    inline string getServiceGroupIds() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupIds_, "") };
    inline PdpLaneUpdateCmd& setServiceGroupIds(string serviceGroupIds) { DARABONBA_PTR_SET_VALUE(serviceGroupIds_, serviceGroupIds) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> customeMarkingRules_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> initGroupFlag_ {};
    shared_ptr<string> inletServiceIds_ {};
    // This parameter is required.
    shared_ptr<string> markingRuleType_ {};
    shared_ptr<vector<RuleCondition>> ruleConditions_ {};
    shared_ptr<string> ruleConnectType_ {};
    // This parameter is required.
    shared_ptr<string> serviceGroupIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
