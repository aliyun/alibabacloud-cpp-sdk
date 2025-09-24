// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSAVINGPLANUSERDEDUCTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSAVINGPLANUSERDEDUCTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SetSavingPlanUserDeductRuleRequestEcIdAccountIds.hpp>
#include <alibabacloud/models/SetSavingPlanUserDeductRuleRequestUserDeductRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class SetSavingPlanUserDeductRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSavingPlanUserDeductRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(SpnInstanceCode, spnInstanceCode_);
      DARABONBA_PTR_TO_JSON(UserDeductRules, userDeductRules_);
    };
    friend void from_json(const Darabonba::Json& j, SetSavingPlanUserDeductRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIds_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(SpnInstanceCode, spnInstanceCode_);
      DARABONBA_PTR_FROM_JSON(UserDeductRules, userDeductRules_);
    };
    SetSavingPlanUserDeductRuleRequest() = default ;
    SetSavingPlanUserDeductRuleRequest(const SetSavingPlanUserDeductRuleRequest &) = default ;
    SetSavingPlanUserDeductRuleRequest(SetSavingPlanUserDeductRuleRequest &&) = default ;
    SetSavingPlanUserDeductRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSavingPlanUserDeductRuleRequest() = default ;
    SetSavingPlanUserDeductRuleRequest& operator=(const SetSavingPlanUserDeductRuleRequest &) = default ;
    SetSavingPlanUserDeductRuleRequest& operator=(SetSavingPlanUserDeductRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecIdAccountIds_ != nullptr
        && this->nbid_ != nullptr && this->spnInstanceCode_ != nullptr && this->userDeductRules_ != nullptr; };
    // ecIdAccountIds Field Functions 
    bool hasEcIdAccountIds() const { return this->ecIdAccountIds_ != nullptr;};
    void deleteEcIdAccountIds() { this->ecIdAccountIds_ = nullptr;};
    inline const vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds> & ecIdAccountIds() const { DARABONBA_PTR_GET_CONST(ecIdAccountIds_, vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds>) };
    inline vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds> ecIdAccountIds() { DARABONBA_PTR_GET(ecIdAccountIds_, vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds>) };
    inline SetSavingPlanUserDeductRuleRequest& setEcIdAccountIds(const vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds> & ecIdAccountIds) { DARABONBA_PTR_SET_VALUE(ecIdAccountIds_, ecIdAccountIds) };
    inline SetSavingPlanUserDeductRuleRequest& setEcIdAccountIds(vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds> && ecIdAccountIds) { DARABONBA_PTR_SET_RVALUE(ecIdAccountIds_, ecIdAccountIds) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline SetSavingPlanUserDeductRuleRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // spnInstanceCode Field Functions 
    bool hasSpnInstanceCode() const { return this->spnInstanceCode_ != nullptr;};
    void deleteSpnInstanceCode() { this->spnInstanceCode_ = nullptr;};
    inline string spnInstanceCode() const { DARABONBA_PTR_GET_DEFAULT(spnInstanceCode_, "") };
    inline SetSavingPlanUserDeductRuleRequest& setSpnInstanceCode(string spnInstanceCode) { DARABONBA_PTR_SET_VALUE(spnInstanceCode_, spnInstanceCode) };


    // userDeductRules Field Functions 
    bool hasUserDeductRules() const { return this->userDeductRules_ != nullptr;};
    void deleteUserDeductRules() { this->userDeductRules_ = nullptr;};
    inline const vector<SetSavingPlanUserDeductRuleRequestUserDeductRules> & userDeductRules() const { DARABONBA_PTR_GET_CONST(userDeductRules_, vector<SetSavingPlanUserDeductRuleRequestUserDeductRules>) };
    inline vector<SetSavingPlanUserDeductRuleRequestUserDeductRules> userDeductRules() { DARABONBA_PTR_GET(userDeductRules_, vector<SetSavingPlanUserDeductRuleRequestUserDeductRules>) };
    inline SetSavingPlanUserDeductRuleRequest& setUserDeductRules(const vector<SetSavingPlanUserDeductRuleRequestUserDeductRules> & userDeductRules) { DARABONBA_PTR_SET_VALUE(userDeductRules_, userDeductRules) };
    inline SetSavingPlanUserDeductRuleRequest& setUserDeductRules(vector<SetSavingPlanUserDeductRuleRequestUserDeductRules> && userDeductRules) { DARABONBA_PTR_SET_RVALUE(userDeductRules_, userDeductRules) };


  protected:
    std::shared_ptr<vector<SetSavingPlanUserDeductRuleRequestEcIdAccountIds>> ecIdAccountIds_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<string> spnInstanceCode_ = nullptr;
    std::shared_ptr<vector<SetSavingPlanUserDeductRuleRequestUserDeductRules>> userDeductRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
