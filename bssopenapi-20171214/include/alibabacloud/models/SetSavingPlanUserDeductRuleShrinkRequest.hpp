// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSAVINGPLANUSERDEDUCTRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSAVINGPLANUSERDEDUCTRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class SetSavingPlanUserDeductRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSavingPlanUserDeductRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_TO_JSON(Nbid, nbid_);
      DARABONBA_PTR_TO_JSON(SpnInstanceCode, spnInstanceCode_);
      DARABONBA_PTR_TO_JSON(UserDeductRules, userDeductRulesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SetSavingPlanUserDeductRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EcIdAccountIds, ecIdAccountIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Nbid, nbid_);
      DARABONBA_PTR_FROM_JSON(SpnInstanceCode, spnInstanceCode_);
      DARABONBA_PTR_FROM_JSON(UserDeductRules, userDeductRulesShrink_);
    };
    SetSavingPlanUserDeductRuleShrinkRequest() = default ;
    SetSavingPlanUserDeductRuleShrinkRequest(const SetSavingPlanUserDeductRuleShrinkRequest &) = default ;
    SetSavingPlanUserDeductRuleShrinkRequest(SetSavingPlanUserDeductRuleShrinkRequest &&) = default ;
    SetSavingPlanUserDeductRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSavingPlanUserDeductRuleShrinkRequest() = default ;
    SetSavingPlanUserDeductRuleShrinkRequest& operator=(const SetSavingPlanUserDeductRuleShrinkRequest &) = default ;
    SetSavingPlanUserDeductRuleShrinkRequest& operator=(SetSavingPlanUserDeductRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecIdAccountIdsShrink_ != nullptr
        && this->nbid_ != nullptr && this->spnInstanceCode_ != nullptr && this->userDeductRulesShrink_ != nullptr; };
    // ecIdAccountIdsShrink Field Functions 
    bool hasEcIdAccountIdsShrink() const { return this->ecIdAccountIdsShrink_ != nullptr;};
    void deleteEcIdAccountIdsShrink() { this->ecIdAccountIdsShrink_ = nullptr;};
    inline string ecIdAccountIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(ecIdAccountIdsShrink_, "") };
    inline SetSavingPlanUserDeductRuleShrinkRequest& setEcIdAccountIdsShrink(string ecIdAccountIdsShrink) { DARABONBA_PTR_SET_VALUE(ecIdAccountIdsShrink_, ecIdAccountIdsShrink) };


    // nbid Field Functions 
    bool hasNbid() const { return this->nbid_ != nullptr;};
    void deleteNbid() { this->nbid_ = nullptr;};
    inline string nbid() const { DARABONBA_PTR_GET_DEFAULT(nbid_, "") };
    inline SetSavingPlanUserDeductRuleShrinkRequest& setNbid(string nbid) { DARABONBA_PTR_SET_VALUE(nbid_, nbid) };


    // spnInstanceCode Field Functions 
    bool hasSpnInstanceCode() const { return this->spnInstanceCode_ != nullptr;};
    void deleteSpnInstanceCode() { this->spnInstanceCode_ = nullptr;};
    inline string spnInstanceCode() const { DARABONBA_PTR_GET_DEFAULT(spnInstanceCode_, "") };
    inline SetSavingPlanUserDeductRuleShrinkRequest& setSpnInstanceCode(string spnInstanceCode) { DARABONBA_PTR_SET_VALUE(spnInstanceCode_, spnInstanceCode) };


    // userDeductRulesShrink Field Functions 
    bool hasUserDeductRulesShrink() const { return this->userDeductRulesShrink_ != nullptr;};
    void deleteUserDeductRulesShrink() { this->userDeductRulesShrink_ = nullptr;};
    inline string userDeductRulesShrink() const { DARABONBA_PTR_GET_DEFAULT(userDeductRulesShrink_, "") };
    inline SetSavingPlanUserDeductRuleShrinkRequest& setUserDeductRulesShrink(string userDeductRulesShrink) { DARABONBA_PTR_SET_VALUE(userDeductRulesShrink_, userDeductRulesShrink) };


  protected:
    std::shared_ptr<string> ecIdAccountIdsShrink_ = nullptr;
    std::shared_ptr<string> nbid_ = nullptr;
    std::shared_ptr<string> spnInstanceCode_ = nullptr;
    std::shared_ptr<string> userDeductRulesShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
