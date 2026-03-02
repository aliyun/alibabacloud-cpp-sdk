// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PDPLANE_HPP_
#define ALIBABACLOUD_MODELS_PDPLANE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PdpServiceInfo.hpp>
#include <alibabacloud/models/RuleCondition.hpp>
#include <alibabacloud/models/ServiceGroupInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class PdpLane : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PdpLane& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(creatorName, creatorName_);
      DARABONBA_PTR_TO_JSON(creatorUid, creatorUid_);
      DARABONBA_PTR_TO_JSON(customeMarkingRules, customeMarkingRules_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(env, env_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(initGroupFlag, initGroupFlag_);
      DARABONBA_PTR_TO_JSON(inletServices, inletServices_);
      DARABONBA_PTR_TO_JSON(markingRuleType, markingRuleType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(productName, productName_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(ruleConditions, ruleConditions_);
      DARABONBA_PTR_TO_JSON(ruleConnectType, ruleConnectType_);
      DARABONBA_PTR_TO_JSON(serviceGroups, serviceGroups_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PdpLane& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(creatorName, creatorName_);
      DARABONBA_PTR_FROM_JSON(creatorUid, creatorUid_);
      DARABONBA_PTR_FROM_JSON(customeMarkingRules, customeMarkingRules_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(env, env_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(initGroupFlag, initGroupFlag_);
      DARABONBA_PTR_FROM_JSON(inletServices, inletServices_);
      DARABONBA_PTR_FROM_JSON(markingRuleType, markingRuleType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(productName, productName_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ruleConditions, ruleConditions_);
      DARABONBA_PTR_FROM_JSON(ruleConnectType, ruleConnectType_);
      DARABONBA_PTR_FROM_JSON(serviceGroups, serviceGroups_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    PdpLane() = default ;
    PdpLane(const PdpLane &) = default ;
    PdpLane(PdpLane &&) = default ;
    PdpLane(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PdpLane() = default ;
    PdpLane& operator=(const PdpLane &) = default ;
    PdpLane& operator=(PdpLane &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->companyId_ == nullptr && this->creatorName_ == nullptr && this->creatorUid_ == nullptr && this->customeMarkingRules_ == nullptr && this->description_ == nullptr
        && this->env_ == nullptr && this->id_ == nullptr && this->initGroupFlag_ == nullptr && this->inletServices_ == nullptr && this->markingRuleType_ == nullptr
        && this->name_ == nullptr && this->productId_ == nullptr && this->productName_ == nullptr && this->requestId_ == nullptr && this->ruleConditions_ == nullptr
        && this->ruleConnectType_ == nullptr && this->serviceGroups_ == nullptr && this->type_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline PdpLane& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline PdpLane& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // creatorName Field Functions 
    bool hasCreatorName() const { return this->creatorName_ != nullptr;};
    void deleteCreatorName() { this->creatorName_ = nullptr;};
    inline string getCreatorName() const { DARABONBA_PTR_GET_DEFAULT(creatorName_, "") };
    inline PdpLane& setCreatorName(string creatorName) { DARABONBA_PTR_SET_VALUE(creatorName_, creatorName) };


    // creatorUid Field Functions 
    bool hasCreatorUid() const { return this->creatorUid_ != nullptr;};
    void deleteCreatorUid() { this->creatorUid_ = nullptr;};
    inline string getCreatorUid() const { DARABONBA_PTR_GET_DEFAULT(creatorUid_, "") };
    inline PdpLane& setCreatorUid(string creatorUid) { DARABONBA_PTR_SET_VALUE(creatorUid_, creatorUid) };


    // customeMarkingRules Field Functions 
    bool hasCustomeMarkingRules() const { return this->customeMarkingRules_ != nullptr;};
    void deleteCustomeMarkingRules() { this->customeMarkingRules_ = nullptr;};
    inline string getCustomeMarkingRules() const { DARABONBA_PTR_GET_DEFAULT(customeMarkingRules_, "") };
    inline PdpLane& setCustomeMarkingRules(string customeMarkingRules) { DARABONBA_PTR_SET_VALUE(customeMarkingRules_, customeMarkingRules) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PdpLane& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline PdpLane& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline PdpLane& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // initGroupFlag Field Functions 
    bool hasInitGroupFlag() const { return this->initGroupFlag_ != nullptr;};
    void deleteInitGroupFlag() { this->initGroupFlag_ = nullptr;};
    inline bool getInitGroupFlag() const { DARABONBA_PTR_GET_DEFAULT(initGroupFlag_, false) };
    inline PdpLane& setInitGroupFlag(bool initGroupFlag) { DARABONBA_PTR_SET_VALUE(initGroupFlag_, initGroupFlag) };


    // inletServices Field Functions 
    bool hasInletServices() const { return this->inletServices_ != nullptr;};
    void deleteInletServices() { this->inletServices_ = nullptr;};
    inline const vector<PdpServiceInfo> & getInletServices() const { DARABONBA_PTR_GET_CONST(inletServices_, vector<PdpServiceInfo>) };
    inline vector<PdpServiceInfo> getInletServices() { DARABONBA_PTR_GET(inletServices_, vector<PdpServiceInfo>) };
    inline PdpLane& setInletServices(const vector<PdpServiceInfo> & inletServices) { DARABONBA_PTR_SET_VALUE(inletServices_, inletServices) };
    inline PdpLane& setInletServices(vector<PdpServiceInfo> && inletServices) { DARABONBA_PTR_SET_RVALUE(inletServices_, inletServices) };


    // markingRuleType Field Functions 
    bool hasMarkingRuleType() const { return this->markingRuleType_ != nullptr;};
    void deleteMarkingRuleType() { this->markingRuleType_ = nullptr;};
    inline string getMarkingRuleType() const { DARABONBA_PTR_GET_DEFAULT(markingRuleType_, "") };
    inline PdpLane& setMarkingRuleType(string markingRuleType) { DARABONBA_PTR_SET_VALUE(markingRuleType_, markingRuleType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline PdpLane& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline PdpLane& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string getProductName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline PdpLane& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PdpLane& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleConditions Field Functions 
    bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
    void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
    inline const vector<RuleCondition> & getRuleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<RuleCondition>) };
    inline vector<RuleCondition> getRuleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<RuleCondition>) };
    inline PdpLane& setRuleConditions(const vector<RuleCondition> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
    inline PdpLane& setRuleConditions(vector<RuleCondition> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


    // ruleConnectType Field Functions 
    bool hasRuleConnectType() const { return this->ruleConnectType_ != nullptr;};
    void deleteRuleConnectType() { this->ruleConnectType_ = nullptr;};
    inline string getRuleConnectType() const { DARABONBA_PTR_GET_DEFAULT(ruleConnectType_, "") };
    inline PdpLane& setRuleConnectType(string ruleConnectType) { DARABONBA_PTR_SET_VALUE(ruleConnectType_, ruleConnectType) };


    // serviceGroups Field Functions 
    bool hasServiceGroups() const { return this->serviceGroups_ != nullptr;};
    void deleteServiceGroups() { this->serviceGroups_ = nullptr;};
    inline const vector<ServiceGroupInfo> & getServiceGroups() const { DARABONBA_PTR_GET_CONST(serviceGroups_, vector<ServiceGroupInfo>) };
    inline vector<ServiceGroupInfo> getServiceGroups() { DARABONBA_PTR_GET(serviceGroups_, vector<ServiceGroupInfo>) };
    inline PdpLane& setServiceGroups(const vector<ServiceGroupInfo> & serviceGroups) { DARABONBA_PTR_SET_VALUE(serviceGroups_, serviceGroups) };
    inline PdpLane& setServiceGroups(vector<ServiceGroupInfo> && serviceGroups) { DARABONBA_PTR_SET_RVALUE(serviceGroups_, serviceGroups) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PdpLane& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> creatorName_ {};
    shared_ptr<string> creatorUid_ {};
    // This parameter is required.
    shared_ptr<string> customeMarkingRules_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> env_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<bool> initGroupFlag_ {};
    shared_ptr<vector<PdpServiceInfo>> inletServices_ {};
    // This parameter is required.
    shared_ptr<string> markingRuleType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> productId_ {};
    shared_ptr<string> productName_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<RuleCondition>> ruleConditions_ {};
    shared_ptr<string> ruleConnectType_ {};
    shared_ptr<vector<ServiceGroupInfo>> serviceGroups_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
