// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLICYREQUESTPROMPTATTACKINFO_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLICYREQUESTPROMPTATTACKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdatePolicyRequestPromptAttackInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolicyRequestPromptAttackInfo& obj) { 
      DARABONBA_PTR_TO_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_TO_JSON(SecurityLevel, securityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolicyRequestPromptAttackInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(IsEnabled, isEnabled_);
      DARABONBA_PTR_FROM_JSON(SecurityLevel, securityLevel_);
    };
    UpdatePolicyRequestPromptAttackInfo() = default ;
    UpdatePolicyRequestPromptAttackInfo(const UpdatePolicyRequestPromptAttackInfo &) = default ;
    UpdatePolicyRequestPromptAttackInfo(UpdatePolicyRequestPromptAttackInfo &&) = default ;
    UpdatePolicyRequestPromptAttackInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolicyRequestPromptAttackInfo() = default ;
    UpdatePolicyRequestPromptAttackInfo& operator=(const UpdatePolicyRequestPromptAttackInfo &) = default ;
    UpdatePolicyRequestPromptAttackInfo& operator=(UpdatePolicyRequestPromptAttackInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isEnabled_ == nullptr
        && return this->securityLevel_ == nullptr; };
    // isEnabled Field Functions 
    bool hasIsEnabled() const { return this->isEnabled_ != nullptr;};
    void deleteIsEnabled() { this->isEnabled_ = nullptr;};
    inline int32_t isEnabled() const { DARABONBA_PTR_GET_DEFAULT(isEnabled_, 0) };
    inline UpdatePolicyRequestPromptAttackInfo& setIsEnabled(int32_t isEnabled) { DARABONBA_PTR_SET_VALUE(isEnabled_, isEnabled) };


    // securityLevel Field Functions 
    bool hasSecurityLevel() const { return this->securityLevel_ != nullptr;};
    void deleteSecurityLevel() { this->securityLevel_ = nullptr;};
    inline int32_t securityLevel() const { DARABONBA_PTR_GET_DEFAULT(securityLevel_, 0) };
    inline UpdatePolicyRequestPromptAttackInfo& setSecurityLevel(int32_t securityLevel) { DARABONBA_PTR_SET_VALUE(securityLevel_, securityLevel) };


  protected:
    // Prompt attack configuration switch
    // 0: Off
    // 1: On
    std::shared_ptr<int32_t> isEnabled_ = nullptr;
    // Security level
    // 0: Low
    // 1: Medium
    // 2: High
    std::shared_ptr<int32_t> securityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
