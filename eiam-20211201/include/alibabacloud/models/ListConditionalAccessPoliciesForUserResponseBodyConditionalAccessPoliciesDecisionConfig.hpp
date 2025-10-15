// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERRESPONSEBODYCONDITIONALACCESSPOLICIESDECISIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTCONDITIONALACCESSPOLICIESFORUSERRESPONSEBODYCONDITIONALACCESSPOLICIESDECISIONCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveSessionReuseStatus, activeSessionReuseStatus_);
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(MfaAuthenticationIntervalSeconds, mfaAuthenticationIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(MfaAuthenticationMethods, mfaAuthenticationMethods_);
      DARABONBA_PTR_TO_JSON(MfaType, mfaType_);
    };
    friend void from_json(const Darabonba::Json& j, ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveSessionReuseStatus, activeSessionReuseStatus_);
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(MfaAuthenticationIntervalSeconds, mfaAuthenticationIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(MfaAuthenticationMethods, mfaAuthenticationMethods_);
      DARABONBA_PTR_FROM_JSON(MfaType, mfaType_);
    };
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig() = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig(const ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig &) = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig(ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig &&) = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig() = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& operator=(const ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig &) = default ;
    ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& operator=(ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeSessionReuseStatus_ == nullptr
        && return this->effect_ == nullptr && return this->mfaAuthenticationIntervalSeconds_ == nullptr && return this->mfaAuthenticationMethods_ == nullptr && return this->mfaType_ == nullptr; };
    // activeSessionReuseStatus Field Functions 
    bool hasActiveSessionReuseStatus() const { return this->activeSessionReuseStatus_ != nullptr;};
    void deleteActiveSessionReuseStatus() { this->activeSessionReuseStatus_ = nullptr;};
    inline string activeSessionReuseStatus() const { DARABONBA_PTR_GET_DEFAULT(activeSessionReuseStatus_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& setActiveSessionReuseStatus(string activeSessionReuseStatus) { DARABONBA_PTR_SET_VALUE(activeSessionReuseStatus_, activeSessionReuseStatus) };


    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string effect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // mfaAuthenticationIntervalSeconds Field Functions 
    bool hasMfaAuthenticationIntervalSeconds() const { return this->mfaAuthenticationIntervalSeconds_ != nullptr;};
    void deleteMfaAuthenticationIntervalSeconds() { this->mfaAuthenticationIntervalSeconds_ = nullptr;};
    inline int64_t mfaAuthenticationIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(mfaAuthenticationIntervalSeconds_, 0L) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& setMfaAuthenticationIntervalSeconds(int64_t mfaAuthenticationIntervalSeconds) { DARABONBA_PTR_SET_VALUE(mfaAuthenticationIntervalSeconds_, mfaAuthenticationIntervalSeconds) };


    // mfaAuthenticationMethods Field Functions 
    bool hasMfaAuthenticationMethods() const { return this->mfaAuthenticationMethods_ != nullptr;};
    void deleteMfaAuthenticationMethods() { this->mfaAuthenticationMethods_ = nullptr;};
    inline const vector<string> & mfaAuthenticationMethods() const { DARABONBA_PTR_GET_CONST(mfaAuthenticationMethods_, vector<string>) };
    inline vector<string> mfaAuthenticationMethods() { DARABONBA_PTR_GET(mfaAuthenticationMethods_, vector<string>) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& setMfaAuthenticationMethods(const vector<string> & mfaAuthenticationMethods) { DARABONBA_PTR_SET_VALUE(mfaAuthenticationMethods_, mfaAuthenticationMethods) };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& setMfaAuthenticationMethods(vector<string> && mfaAuthenticationMethods) { DARABONBA_PTR_SET_RVALUE(mfaAuthenticationMethods_, mfaAuthenticationMethods) };


    // mfaType Field Functions 
    bool hasMfaType() const { return this->mfaType_ != nullptr;};
    void deleteMfaType() { this->mfaType_ = nullptr;};
    inline string mfaType() const { DARABONBA_PTR_GET_DEFAULT(mfaType_, "") };
    inline ListConditionalAccessPoliciesForUserResponseBodyConditionalAccessPoliciesDecisionConfig& setMfaType(string mfaType) { DARABONBA_PTR_SET_VALUE(mfaType_, mfaType) };


  protected:
    std::shared_ptr<string> activeSessionReuseStatus_ = nullptr;
    // IDaaS EIAM 条件访问策略决策Action
    std::shared_ptr<string> effect_ = nullptr;
    // IDaaS EIAM 条件访问策略重复认证时间间隔(秒)
    std::shared_ptr<int64_t> mfaAuthenticationIntervalSeconds_ = nullptr;
    // IDaaS EIAM 条件访问策略允许使用的mfa类型
    std::shared_ptr<vector<string>> mfaAuthenticationMethods_ = nullptr;
    // IDaaS EIAM 条件访问策略Mfa类型
    std::shared_ptr<string> mfaType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
