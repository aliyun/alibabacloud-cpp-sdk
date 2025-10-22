// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSMARTCALLENCRYPTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LLMSMARTCALLENCRYPTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class LlmSmartCallEncryptShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmSmartCallEncryptShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(EncryptCalledNumber, encryptCalledNumber_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PromptParam, promptParamShrink_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartWordParam, startWordParamShrink_);
    };
    friend void from_json(const Darabonba::Json& j, LlmSmartCallEncryptShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(EncryptCalledNumber, encryptCalledNumber_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PromptParam, promptParamShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartWordParam, startWordParamShrink_);
    };
    LlmSmartCallEncryptShrinkRequest() = default ;
    LlmSmartCallEncryptShrinkRequest(const LlmSmartCallEncryptShrinkRequest &) = default ;
    LlmSmartCallEncryptShrinkRequest(LlmSmartCallEncryptShrinkRequest &&) = default ;
    LlmSmartCallEncryptShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmSmartCallEncryptShrinkRequest() = default ;
    LlmSmartCallEncryptShrinkRequest& operator=(const LlmSmartCallEncryptShrinkRequest &) = default ;
    LlmSmartCallEncryptShrinkRequest& operator=(LlmSmartCallEncryptShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCode_ == nullptr
        && return this->callerNumber_ == nullptr && return this->encryptCalledNumber_ == nullptr && return this->outId_ == nullptr && return this->ownerId_ == nullptr && return this->promptParamShrink_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->startWordParamShrink_ == nullptr; };
    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string applicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline LlmSmartCallEncryptShrinkRequest& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string callerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline LlmSmartCallEncryptShrinkRequest& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // encryptCalledNumber Field Functions 
    bool hasEncryptCalledNumber() const { return this->encryptCalledNumber_ != nullptr;};
    void deleteEncryptCalledNumber() { this->encryptCalledNumber_ = nullptr;};
    inline string encryptCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(encryptCalledNumber_, "") };
    inline LlmSmartCallEncryptShrinkRequest& setEncryptCalledNumber(string encryptCalledNumber) { DARABONBA_PTR_SET_VALUE(encryptCalledNumber_, encryptCalledNumber) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline LlmSmartCallEncryptShrinkRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline LlmSmartCallEncryptShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // promptParamShrink Field Functions 
    bool hasPromptParamShrink() const { return this->promptParamShrink_ != nullptr;};
    void deletePromptParamShrink() { this->promptParamShrink_ = nullptr;};
    inline string promptParamShrink() const { DARABONBA_PTR_GET_DEFAULT(promptParamShrink_, "") };
    inline LlmSmartCallEncryptShrinkRequest& setPromptParamShrink(string promptParamShrink) { DARABONBA_PTR_SET_VALUE(promptParamShrink_, promptParamShrink) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline LlmSmartCallEncryptShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline LlmSmartCallEncryptShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startWordParamShrink Field Functions 
    bool hasStartWordParamShrink() const { return this->startWordParamShrink_ != nullptr;};
    void deleteStartWordParamShrink() { this->startWordParamShrink_ = nullptr;};
    inline string startWordParamShrink() const { DARABONBA_PTR_GET_DEFAULT(startWordParamShrink_, "") };
    inline LlmSmartCallEncryptShrinkRequest& setStartWordParamShrink(string startWordParamShrink) { DARABONBA_PTR_SET_VALUE(startWordParamShrink_, startWordParamShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callerNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encryptCalledNumber_ = nullptr;
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> promptParamShrink_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    std::shared_ptr<string> startWordParamShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
