// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSMARTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LLMSMARTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class LlmSmartCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmSmartCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
      DARABONBA_ANY_TO_JSON(BizParam, bizParam_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(CustomerLineCode, customerLineCode_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_ANY_TO_JSON(PromptParam, promptParam_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_ANY_TO_JSON(StartWordParam, startWordParam_);
      DARABONBA_PTR_TO_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_TO_JSON(TtsVoiceCode, ttsVoiceCode_);
      DARABONBA_PTR_TO_JSON(TtsVolume, ttsVolume_);
    };
    friend void from_json(const Darabonba::Json& j, LlmSmartCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
      DARABONBA_ANY_FROM_JSON(BizParam, bizParam_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(CustomerLineCode, customerLineCode_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_ANY_FROM_JSON(PromptParam, promptParam_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_ANY_FROM_JSON(StartWordParam, startWordParam_);
      DARABONBA_PTR_FROM_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_FROM_JSON(TtsVoiceCode, ttsVoiceCode_);
      DARABONBA_PTR_FROM_JSON(TtsVolume, ttsVolume_);
    };
    LlmSmartCallRequest() = default ;
    LlmSmartCallRequest(const LlmSmartCallRequest &) = default ;
    LlmSmartCallRequest(LlmSmartCallRequest &&) = default ;
    LlmSmartCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmSmartCallRequest() = default ;
    LlmSmartCallRequest& operator=(const LlmSmartCallRequest &) = default ;
    LlmSmartCallRequest& operator=(LlmSmartCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicationCode_ != nullptr
        && this->bizParam_ != nullptr && this->calledNumber_ != nullptr && this->callerNumber_ != nullptr && this->customerLineCode_ != nullptr && this->extension_ != nullptr
        && this->outId_ != nullptr && this->promptParam_ != nullptr && this->sessionTimeout_ != nullptr && this->startWordParam_ != nullptr && this->ttsSpeed_ != nullptr
        && this->ttsVoiceCode_ != nullptr && this->ttsVolume_ != nullptr; };
    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string applicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline LlmSmartCallRequest& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // bizParam Field Functions 
    bool hasBizParam() const { return this->bizParam_ != nullptr;};
    void deleteBizParam() { this->bizParam_ = nullptr;};
    inline     const Darabonba::Json & bizParam() const { DARABONBA_GET(bizParam_) };
    Darabonba::Json & bizParam() { DARABONBA_GET(bizParam_) };
    inline LlmSmartCallRequest& setBizParam(const Darabonba::Json & bizParam) { DARABONBA_SET_VALUE(bizParam_, bizParam) };
    inline LlmSmartCallRequest& setBizParam(Darabonba::Json & bizParam) { DARABONBA_SET_RVALUE(bizParam_, bizParam) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string calledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline LlmSmartCallRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string callerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline LlmSmartCallRequest& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // customerLineCode Field Functions 
    bool hasCustomerLineCode() const { return this->customerLineCode_ != nullptr;};
    void deleteCustomerLineCode() { this->customerLineCode_ = nullptr;};
    inline string customerLineCode() const { DARABONBA_PTR_GET_DEFAULT(customerLineCode_, "") };
    inline LlmSmartCallRequest& setCustomerLineCode(string customerLineCode) { DARABONBA_PTR_SET_VALUE(customerLineCode_, customerLineCode) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string extension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline LlmSmartCallRequest& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string outId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline LlmSmartCallRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // promptParam Field Functions 
    bool hasPromptParam() const { return this->promptParam_ != nullptr;};
    void deletePromptParam() { this->promptParam_ = nullptr;};
    inline     const Darabonba::Json & promptParam() const { DARABONBA_GET(promptParam_) };
    Darabonba::Json & promptParam() { DARABONBA_GET(promptParam_) };
    inline LlmSmartCallRequest& setPromptParam(const Darabonba::Json & promptParam) { DARABONBA_SET_VALUE(promptParam_, promptParam) };
    inline LlmSmartCallRequest& setPromptParam(Darabonba::Json & promptParam) { DARABONBA_SET_RVALUE(promptParam_, promptParam) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t sessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline LlmSmartCallRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // startWordParam Field Functions 
    bool hasStartWordParam() const { return this->startWordParam_ != nullptr;};
    void deleteStartWordParam() { this->startWordParam_ = nullptr;};
    inline     const Darabonba::Json & startWordParam() const { DARABONBA_GET(startWordParam_) };
    Darabonba::Json & startWordParam() { DARABONBA_GET(startWordParam_) };
    inline LlmSmartCallRequest& setStartWordParam(const Darabonba::Json & startWordParam) { DARABONBA_SET_VALUE(startWordParam_, startWordParam) };
    inline LlmSmartCallRequest& setStartWordParam(Darabonba::Json & startWordParam) { DARABONBA_SET_RVALUE(startWordParam_, startWordParam) };


    // ttsSpeed Field Functions 
    bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
    void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
    inline int32_t ttsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0) };
    inline LlmSmartCallRequest& setTtsSpeed(int32_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


    // ttsVoiceCode Field Functions 
    bool hasTtsVoiceCode() const { return this->ttsVoiceCode_ != nullptr;};
    void deleteTtsVoiceCode() { this->ttsVoiceCode_ = nullptr;};
    inline string ttsVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(ttsVoiceCode_, "") };
    inline LlmSmartCallRequest& setTtsVoiceCode(string ttsVoiceCode) { DARABONBA_PTR_SET_VALUE(ttsVoiceCode_, ttsVoiceCode) };


    // ttsVolume Field Functions 
    bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
    void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
    inline int32_t ttsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0) };
    inline LlmSmartCallRequest& setTtsVolume(int32_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicationCode_ = nullptr;
    Darabonba::Json bizParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> calledNumber_ = nullptr;
    std::shared_ptr<string> callerNumber_ = nullptr;
    std::shared_ptr<string> customerLineCode_ = nullptr;
    std::shared_ptr<string> extension_ = nullptr;
    std::shared_ptr<string> outId_ = nullptr;
    Darabonba::Json promptParam_ = nullptr;
    std::shared_ptr<int32_t> sessionTimeout_ = nullptr;
    Darabonba::Json startWordParam_ = nullptr;
    std::shared_ptr<int32_t> ttsSpeed_ = nullptr;
    std::shared_ptr<string> ttsVoiceCode_ = nullptr;
    std::shared_ptr<int32_t> ttsVolume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
