// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPLANECREATECMD_HPP_
#define ALIBABACLOUD_MODELS_PDPLANECREATECMD_HPP_
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
  class PdpLaneCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpLaneCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(creatorUid, creatorUid_);
      DARABONBA_PTR_TO_JSON(customeMarkingRules, customeMarkingRules_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(initGroupFlag, initGroupFlag_);
      DARABONBA_PTR_TO_JSON(inletServiceIds, inletServiceIds_);
      DARABONBA_PTR_TO_JSON(markingRuleType, markingRuleType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(ruleConditions, ruleConditions_);
      DARABONBA_PTR_TO_JSON(ruleConnectType, ruleConnectType_);
      DARABONBA_PTR_TO_JSON(serviceGroupIds, serviceGroupIds_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PdpLaneCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(creatorUid, creatorUid_);
      DARABONBA_PTR_FROM_JSON(customeMarkingRules, customeMarkingRules_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(initGroupFlag, initGroupFlag_);
      DARABONBA_PTR_FROM_JSON(inletServiceIds, inletServiceIds_);
      DARABONBA_PTR_FROM_JSON(markingRuleType, markingRuleType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(ruleConditions, ruleConditions_);
      DARABONBA_PTR_FROM_JSON(ruleConnectType, ruleConnectType_);
      DARABONBA_PTR_FROM_JSON(serviceGroupIds, serviceGroupIds_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PdpLaneCreateCmd() = default ;
    PdpLaneCreateCmd(const PdpLaneCreateCmd &) = default ;
    PdpLaneCreateCmd(PdpLaneCreateCmd &&) = default ;
    PdpLaneCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpLaneCreateCmd() = default ;
    PdpLaneCreateCmd& operator=(const PdpLaneCreateCmd &) = default ;
    PdpLaneCreateCmd& operator=(PdpLaneCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->companyId_ == nullptr && this->creatorUid_ == nullptr && this->customeMarkingRules_ == nullptr && this->description_ == nullptr && this->env_ == nullptr
        && this->initGroupFlag_ == nullptr && this->inletServiceIds_ == nullptr && this->markingRuleType_ == nullptr && this->name_ == nullptr && this->productId_ == nullptr
        && this->ruleConditions_ == nullptr && this->ruleConnectType_ == nullptr && this->serviceGroupIds_ == nullptr && this->type_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PdpLaneCreateCmd& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PdpLaneCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // creatorUid Field Functions 
    bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
    void deleteCreatorUid() { this->creatorUid_ = nullptr;};
    inline string getCreatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
    inline PdpLaneCreateCmd& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


    // customeMarkingRules Field Functions 
    bool hasCustomeMarkingRules() const { return this->customeMarkingRules_ != nullptr;};
    void deleteCustomeMarkingRules() { this->customeMarkingRules_ = nullptr;};
    inline string getCustomeMarkingRules() const { DARABONBA_PTR_GET_DEFAULT(customeMarkingRules_, "") };
    inline PdpLaneCreateCmd& setCustomeMarkingRules(string customeMarkingRules) { DARABONBA_PTR_SET_VALUE(customeMarkingRules_, customeMarkingRules) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpLaneCreateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline PdpLaneCreateCmd& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // initGroupFlag Field Functions 
    bool hasInitGroupFlag() const { return this->initGroupFlag_ != nullptr;};
    void deleteInitGroupFlag() { this->initGroupFlag_ = nullptr;};
    inline bool getInitGroupFlag() const { DARABONBA_PTR_GET_DEFAULT(initGroupFlag_, false) };
    inline PdpLaneCreateCmd& setInitGroupFlag(bool initGroupFlag) { DARABONBA_PTR_SET_VALUE(initGroupFlag_, initGroupFlag) };


    // inletServiceIds Field Functions 
    bool hasInletServiceIds() const { return this->inletServiceIds_ != nullptr;};
    void deleteInletServiceIds() { this->inletServiceIds_ = nullptr;};
    inline string getInletServiceIds() const { DARABONBA_PTR_GET_DEFAULT(inletServiceIds_, "") };
    inline PdpLaneCreateCmd& setInletServiceIds(string inletServiceIds) { DARABONBA_PTR_SET_VALUE(inletServiceIds_, inletServiceIds) };


    // markingRuleType Field Functions 
    bool hasMarkingRuleType() const { return this->markingRuleType_ != nullptr;};
    void deleteMarkingRuleType() { this->markingRuleType_ = nullptr;};
    inline string getMarkingRuleType() const { DARABONBA_PTR_GET_DEFAULT(markingRuleType_, "") };
    inline PdpLaneCreateCmd& setMarkingRuleType(string markingRuleType) { DARABONBA_PTR_SET_VALUE(markingRuleType_, markingRuleType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PdpLaneCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline PdpLaneCreateCmd& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // ruleConditions Field Functions 
    bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
    void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
    inline const vector<RuleCondition> & getRuleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<RuleCondition>) };
    inline vector<RuleCondition> getRuleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<RuleCondition>) };
    inline PdpLaneCreateCmd& setRuleConditions(const vector<RuleCondition> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
    inline PdpLaneCreateCmd& setRuleConditions(vector<RuleCondition> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


    // ruleConnectType Field Functions 
    bool hasRuleConnectType() const { return this->ruleConnectType_ != nullptr;};
    void deleteRuleConnectType() { this->ruleConnectType_ = nullptr;};
    inline string getRuleConnectType() const { DARABONBA_PTR_GET_DEFAULT(ruleConnectType_, "") };
    inline PdpLaneCreateCmd& setRuleConnectType(string ruleConnectType) { DARABONBA_PTR_SET_VALUE(ruleConnectType_, ruleConnectType) };


    // serviceGroupIds Field Functions 
    bool hasServiceGroupIds() const { return this->serviceGroupIds_ != nullptr;};
    void deleteServiceGroupIds() { this->serviceGroupIds_ = nullptr;};
    inline string getServiceGroupIds() const { DARABONBA_PTR_GET_DEFAULT(serviceGroupIds_, "") };
    inline PdpLaneCreateCmd& setServiceGroupIds(string serviceGroupIds) { DARABONBA_PTR_SET_VALUE(serviceGroupIds_, serviceGroupIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PdpLaneCreateCmd& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> alias_ {};
    // This parameter is required.
    shared_ptr<int64_t> companyId_ {};
    // This parameter is required.
    shared_ptr<string> creatorUid_ {};
    shared_ptr<string> customeMarkingRules_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<bool> initGroupFlag_ {};
    shared_ptr<string> inletServiceIds_ {};
    // This parameter is required.
    shared_ptr<string> markingRuleType_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<int64_t> productId_ {};
    shared_ptr<vector<RuleCondition>> ruleConditions_ {};
    shared_ptr<string> ruleConnectType_ {};
    shared_ptr<string> serviceGroupIds_ {};
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
