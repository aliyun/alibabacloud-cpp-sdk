// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSMARTCALLENCRYPTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LLMSMARTCALLENCRYPTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class LlmSmartCallEncryptRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmSmartCallEncryptRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(EncryptCalledNumber, encryptCalledNumber_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_ANY_TO_JSON(PromptParam, promptParam_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_ANY_TO_JSON(StartWordParam, startWordParam_);
    };
    friend void from_json(const Darabonba::Json& j, LlmSmartCallEncryptRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(EncryptCalledNumber, encryptCalledNumber_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_ANY_FROM_JSON(PromptParam, promptParam_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_ANY_FROM_JSON(StartWordParam, startWordParam_);
    };
    LlmSmartCallEncryptRequest() = default ;
    LlmSmartCallEncryptRequest(const LlmSmartCallEncryptRequest &) = default ;
    LlmSmartCallEncryptRequest(LlmSmartCallEncryptRequest &&) = default ;
    LlmSmartCallEncryptRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmSmartCallEncryptRequest() = default ;
    LlmSmartCallEncryptRequest& operator=(const LlmSmartCallEncryptRequest &) = default ;
    LlmSmartCallEncryptRequest& operator=(LlmSmartCallEncryptRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCode_ == nullptr
        && return this->callerNumber_ == nullptr && return this->encryptCalledNumber_ == nullptr && return this->outId_ == nullptr && return this->ownerId_ == nullptr && return this->promptParam_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->startWordParam_ == nullptr; };
    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string applicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline LlmSmartCallEncryptRequest& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string callerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline LlmSmartCallEncryptRequest& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // encryptCalledNumber Field Functions 
    bool hasEncryptCalledNumber() const { return this->encryptCalledNumber_ != nullptr;};
    void deleteEncryptCalledNumber() { this->encryptCalledNumber_ = nullptr;};
    inline string encryptCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(encryptCalledNumber_, "") };
    inline LlmSmartCallEncryptRequest& setEncryptCalledNumber(string encryptCalledNumber) { DARABONBA_PTR_SET_VALUE(encryptCalledNumber_, encryptCalledNumber) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline LlmSmartCallEncryptRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline LlmSmartCallEncryptRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // promptParam Field Functions 
    bool hasPromptParam() const { return this->promptParam_ != nullptr;};
    void deletePromptParam() { this->promptParam_ = nullptr;};
    inline     const Darabonba::Json & promptParam() const { DARABONBA_GET(promptParam_) };
    Darabonba::Json & promptParam() { DARABONBA_GET(promptParam_) };
    inline LlmSmartCallEncryptRequest& setPromptParam(const Darabonba::Json & promptParam) { DARABONBA_SET_VALUE(promptParam_, promptParam) };
    inline LlmSmartCallEncryptRequest& setPromptParam(Darabonba::Json & promptParam) { DARABONBA_SET_RVALUE(promptParam_, promptParam) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline LlmSmartCallEncryptRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline LlmSmartCallEncryptRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startWordParam Field Functions 
    bool hasStartWordParam() const { return this->startWordParam_ != nullptr;};
    void deleteStartWordParam() { this->startWordParam_ = nullptr;};
    inline     const Darabonba::Json & startWordParam() const { DARABONBA_GET(startWordParam_) };
    Darabonba::Json & startWordParam() { DARABONBA_GET(startWordParam_) };
    inline LlmSmartCallEncryptRequest& setStartWordParam(const Darabonba::Json & startWordParam) { DARABONBA_SET_VALUE(startWordParam_, startWordParam) };
    inline LlmSmartCallEncryptRequest& setStartWordParam(Darabonba::Json & startWordParam) { DARABONBA_SET_RVALUE(startWordParam_, startWordParam) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callerNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> encryptCalledNumber_ = nullptr;
    std::shared_ptr<string> outId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    Darabonba::Json promptParam_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    Darabonba::Json startWordParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
