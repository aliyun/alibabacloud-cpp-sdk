// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYREQUESTDECISIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONDITIONALACCESSPOLICYREQUESTDECISIONCONFIG_HPP_
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
  class UpdateConditionalAccessPolicyRequestDecisionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateConditionalAccessPolicyRequestDecisionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveSessionReuseStatus, activeSessionReuseStatus_);
      DARABONBA_PTR_TO_JSON(Effect, effect_);
      DARABONBA_PTR_TO_JSON(MfaAuthenticationIntervalSeconds, mfaAuthenticationIntervalSeconds_);
      DARABONBA_PTR_TO_JSON(MfaAuthenticationMethods, mfaAuthenticationMethods_);
      DARABONBA_PTR_TO_JSON(MfaType, mfaType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateConditionalAccessPolicyRequestDecisionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveSessionReuseStatus, activeSessionReuseStatus_);
      DARABONBA_PTR_FROM_JSON(Effect, effect_);
      DARABONBA_PTR_FROM_JSON(MfaAuthenticationIntervalSeconds, mfaAuthenticationIntervalSeconds_);
      DARABONBA_PTR_FROM_JSON(MfaAuthenticationMethods, mfaAuthenticationMethods_);
      DARABONBA_PTR_FROM_JSON(MfaType, mfaType_);
    };
    UpdateConditionalAccessPolicyRequestDecisionConfig() = default ;
    UpdateConditionalAccessPolicyRequestDecisionConfig(const UpdateConditionalAccessPolicyRequestDecisionConfig &) = default ;
    UpdateConditionalAccessPolicyRequestDecisionConfig(UpdateConditionalAccessPolicyRequestDecisionConfig &&) = default ;
    UpdateConditionalAccessPolicyRequestDecisionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateConditionalAccessPolicyRequestDecisionConfig() = default ;
    UpdateConditionalAccessPolicyRequestDecisionConfig& operator=(const UpdateConditionalAccessPolicyRequestDecisionConfig &) = default ;
    UpdateConditionalAccessPolicyRequestDecisionConfig& operator=(UpdateConditionalAccessPolicyRequestDecisionConfig &&) = default ;
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
    inline UpdateConditionalAccessPolicyRequestDecisionConfig& setActiveSessionReuseStatus(string activeSessionReuseStatus) { DARABONBA_PTR_SET_VALUE(activeSessionReuseStatus_, activeSessionReuseStatus) };


    // effect Field Functions 
    bool hasEffect() const { return this->effect_ != nullptr;};
    void deleteEffect() { this->effect_ = nullptr;};
    inline string effect() const { DARABONBA_PTR_GET_DEFAULT(effect_, "") };
    inline UpdateConditionalAccessPolicyRequestDecisionConfig& setEffect(string effect) { DARABONBA_PTR_SET_VALUE(effect_, effect) };


    // mfaAuthenticationIntervalSeconds Field Functions 
    bool hasMfaAuthenticationIntervalSeconds() const { return this->mfaAuthenticationIntervalSeconds_ != nullptr;};
    void deleteMfaAuthenticationIntervalSeconds() { this->mfaAuthenticationIntervalSeconds_ = nullptr;};
    inline int64_t mfaAuthenticationIntervalSeconds() const { DARABONBA_PTR_GET_DEFAULT(mfaAuthenticationIntervalSeconds_, 0L) };
    inline UpdateConditionalAccessPolicyRequestDecisionConfig& setMfaAuthenticationIntervalSeconds(int64_t mfaAuthenticationIntervalSeconds) { DARABONBA_PTR_SET_VALUE(mfaAuthenticationIntervalSeconds_, mfaAuthenticationIntervalSeconds) };


    // mfaAuthenticationMethods Field Functions 
    bool hasMfaAuthenticationMethods() const { return this->mfaAuthenticationMethods_ != nullptr;};
    void deleteMfaAuthenticationMethods() { this->mfaAuthenticationMethods_ = nullptr;};
    inline const vector<string> & mfaAuthenticationMethods() const { DARABONBA_PTR_GET_CONST(mfaAuthenticationMethods_, vector<string>) };
    inline vector<string> mfaAuthenticationMethods() { DARABONBA_PTR_GET(mfaAuthenticationMethods_, vector<string>) };
    inline UpdateConditionalAccessPolicyRequestDecisionConfig& setMfaAuthenticationMethods(const vector<string> & mfaAuthenticationMethods) { DARABONBA_PTR_SET_VALUE(mfaAuthenticationMethods_, mfaAuthenticationMethods) };
    inline UpdateConditionalAccessPolicyRequestDecisionConfig& setMfaAuthenticationMethods(vector<string> && mfaAuthenticationMethods) { DARABONBA_PTR_SET_RVALUE(mfaAuthenticationMethods_, mfaAuthenticationMethods) };


    // mfaType Field Functions 
    bool hasMfaType() const { return this->mfaType_ != nullptr;};
    void deleteMfaType() { this->mfaType_ = nullptr;};
    inline string mfaType() const { DARABONBA_PTR_GET_DEFAULT(mfaType_, "") };
    inline UpdateConditionalAccessPolicyRequestDecisionConfig& setMfaType(string mfaType) { DARABONBA_PTR_SET_VALUE(mfaType_, mfaType) };


  protected:
    // Whether to enable session reuse
    std::shared_ptr<string> activeSessionReuseStatus_ = nullptr;
    // Conditional Access Policy Decision Action
    std::shared_ptr<string> effect_ = nullptr;
    // Conditional Access Policy Re-authentication Interval (seconds)
    std::shared_ptr<int64_t> mfaAuthenticationIntervalSeconds_ = nullptr;
    // Allowed MFA types for the Conditional Access Policy
    std::shared_ptr<vector<string>> mfaAuthenticationMethods_ = nullptr;
    // Conditional Access Policy MFA Type
    std::shared_ptr<string> mfaType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
