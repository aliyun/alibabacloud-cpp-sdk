// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSMARTCALLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LLMSMARTCALLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class LlmSmartCallShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmSmartCallShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_TO_JSON(BizParam, bizParamShrink_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(CustomerLineCode, customerLineCode_);
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(PromptParam, promptParamShrink_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(StartWordParam, startWordParamShrink_);
      DARABONBA_PTR_TO_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_TO_JSON(TtsVoiceCode, ttsVoiceCode_);
      DARABONBA_PTR_TO_JSON(TtsVolume, ttsVolume_);
    };
    friend void from_json(const Darabonba::Json& j, LlmSmartCallShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_FROM_JSON(BizParam, bizParamShrink_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(CustomerLineCode, customerLineCode_);
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(PromptParam, promptParamShrink_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(StartWordParam, startWordParamShrink_);
      DARABONBA_PTR_FROM_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_FROM_JSON(TtsVoiceCode, ttsVoiceCode_);
      DARABONBA_PTR_FROM_JSON(TtsVolume, ttsVolume_);
    };
    LlmSmartCallShrinkRequest() = default ;
    LlmSmartCallShrinkRequest(const LlmSmartCallShrinkRequest &) = default ;
    LlmSmartCallShrinkRequest(LlmSmartCallShrinkRequest &&) = default ;
    LlmSmartCallShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmSmartCallShrinkRequest() = default ;
    LlmSmartCallShrinkRequest& operator=(const LlmSmartCallShrinkRequest &) = default ;
    LlmSmartCallShrinkRequest& operator=(LlmSmartCallShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCode_ == nullptr
        && this->bizParamShrink_ == nullptr && this->calledNumber_ == nullptr && this->callerNumber_ == nullptr && this->customerLineCode_ == nullptr && this->extension_ == nullptr
        && this->outId_ == nullptr && this->promptParamShrink_ == nullptr && this->sessionTimeout_ == nullptr && this->startWordParamShrink_ == nullptr && this->ttsSpeed_ == nullptr
        && this->ttsVoiceCode_ == nullptr && this->ttsVolume_ == nullptr; };
    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string getApplicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline LlmSmartCallShrinkRequest& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // bizParamShrink Field Functions 
    bool hasBizParamShrink() const { return this->bizParamShrink_ != nullptr;};
    void deleteBizParamShrink() { this->bizParamShrink_ = nullptr;};
    inline string getBizParamShrink() const { DARABONBA_PTR_GET_DEFAULT(bizParamShrink_, "") };
    inline LlmSmartCallShrinkRequest& setBizParamShrink(string bizParamShrink) { DARABONBA_PTR_SET_VALUE(bizParamShrink_, bizParamShrink) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline LlmSmartCallShrinkRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string getCallerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline LlmSmartCallShrinkRequest& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // customerLineCode Field Functions 
    bool hasCustomerLineCode() const { return this->customerLineCode_ != nullptr;};
    void deleteCustomerLineCode() { this->customerLineCode_ = nullptr;};
    inline string getCustomerLineCode() const { DARABONBA_PTR_GET_DEFAULT(customerLineCode_, "") };
    inline LlmSmartCallShrinkRequest& setCustomerLineCode(string customerLineCode) { DARABONBA_PTR_SET_VALUE(customerLineCode_, customerLineCode) };


    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline string getExtension() const { DARABONBA_PTR_GET_DEFAULT(extension_, "") };
    inline LlmSmartCallShrinkRequest& setExtension(string extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline LlmSmartCallShrinkRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // promptParamShrink Field Functions 
    bool hasPromptParamShrink() const { return this->promptParamShrink_ != nullptr;};
    void deletePromptParamShrink() { this->promptParamShrink_ = nullptr;};
    inline string getPromptParamShrink() const { DARABONBA_PTR_GET_DEFAULT(promptParamShrink_, "") };
    inline LlmSmartCallShrinkRequest& setPromptParamShrink(string promptParamShrink) { DARABONBA_PTR_SET_VALUE(promptParamShrink_, promptParamShrink) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline LlmSmartCallShrinkRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // startWordParamShrink Field Functions 
    bool hasStartWordParamShrink() const { return this->startWordParamShrink_ != nullptr;};
    void deleteStartWordParamShrink() { this->startWordParamShrink_ = nullptr;};
    inline string getStartWordParamShrink() const { DARABONBA_PTR_GET_DEFAULT(startWordParamShrink_, "") };
    inline LlmSmartCallShrinkRequest& setStartWordParamShrink(string startWordParamShrink) { DARABONBA_PTR_SET_VALUE(startWordParamShrink_, startWordParamShrink) };


    // ttsSpeed Field Functions 
    bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
    void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
    inline int32_t getTtsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0) };
    inline LlmSmartCallShrinkRequest& setTtsSpeed(int32_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


    // ttsVoiceCode Field Functions 
    bool hasTtsVoiceCode() const { return this->ttsVoiceCode_ != nullptr;};
    void deleteTtsVoiceCode() { this->ttsVoiceCode_ = nullptr;};
    inline string getTtsVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(ttsVoiceCode_, "") };
    inline LlmSmartCallShrinkRequest& setTtsVoiceCode(string ttsVoiceCode) { DARABONBA_PTR_SET_VALUE(ttsVoiceCode_, ttsVoiceCode) };


    // ttsVolume Field Functions 
    bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
    void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
    inline int32_t getTtsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0) };
    inline LlmSmartCallShrinkRequest& setTtsVolume(int32_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationCode_ {};
    shared_ptr<string> bizParamShrink_ {};
    // This parameter is required.
    shared_ptr<string> calledNumber_ {};
    shared_ptr<string> callerNumber_ {};
    shared_ptr<string> customerLineCode_ {};
    shared_ptr<string> extension_ {};
    shared_ptr<string> outId_ {};
    shared_ptr<string> promptParamShrink_ {};
    shared_ptr<int32_t> sessionTimeout_ {};
    shared_ptr<string> startWordParamShrink_ {};
    shared_ptr<int32_t> ttsSpeed_ {};
    shared_ptr<string> ttsVoiceCode_ {};
    shared_ptr<int32_t> ttsVolume_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
