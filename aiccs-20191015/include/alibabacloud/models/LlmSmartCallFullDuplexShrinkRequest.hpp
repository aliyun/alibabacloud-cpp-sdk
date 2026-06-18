// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMSMARTCALLFULLDUPLEXSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LLMSMARTCALLFULLDUPLEXSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class LlmSmartCallFullDuplexShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmSmartCallFullDuplexShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_TO_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_TO_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_TO_JSON(OutId, outId_);
      DARABONBA_PTR_TO_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_TO_JSON(StartWordParam, startWordParamShrink_);
      DARABONBA_PTR_TO_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_TO_JSON(TtsVoiceCode, ttsVoiceCode_);
      DARABONBA_PTR_TO_JSON(TtsVolume, ttsVolume_);
    };
    friend void from_json(const Darabonba::Json& j, LlmSmartCallFullDuplexShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationCode, applicationCode_);
      DARABONBA_PTR_FROM_JSON(CalledNumber, calledNumber_);
      DARABONBA_PTR_FROM_JSON(CallerNumber, callerNumber_);
      DARABONBA_PTR_FROM_JSON(OutId, outId_);
      DARABONBA_PTR_FROM_JSON(SessionTimeout, sessionTimeout_);
      DARABONBA_PTR_FROM_JSON(StartWordParam, startWordParamShrink_);
      DARABONBA_PTR_FROM_JSON(TtsSpeed, ttsSpeed_);
      DARABONBA_PTR_FROM_JSON(TtsVoiceCode, ttsVoiceCode_);
      DARABONBA_PTR_FROM_JSON(TtsVolume, ttsVolume_);
    };
    LlmSmartCallFullDuplexShrinkRequest() = default ;
    LlmSmartCallFullDuplexShrinkRequest(const LlmSmartCallFullDuplexShrinkRequest &) = default ;
    LlmSmartCallFullDuplexShrinkRequest(LlmSmartCallFullDuplexShrinkRequest &&) = default ;
    LlmSmartCallFullDuplexShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmSmartCallFullDuplexShrinkRequest() = default ;
    LlmSmartCallFullDuplexShrinkRequest& operator=(const LlmSmartCallFullDuplexShrinkRequest &) = default ;
    LlmSmartCallFullDuplexShrinkRequest& operator=(LlmSmartCallFullDuplexShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationCode_ == nullptr
        && this->calledNumber_ == nullptr && this->callerNumber_ == nullptr && this->outId_ == nullptr && this->sessionTimeout_ == nullptr && this->startWordParamShrink_ == nullptr
        && this->ttsSpeed_ == nullptr && this->ttsVoiceCode_ == nullptr && this->ttsVolume_ == nullptr; };
    // applicationCode Field Functions 
    bool hasApplicationCode() const { return this->applicationCode_ != nullptr;};
    void deleteApplicationCode() { this->applicationCode_ = nullptr;};
    inline string getApplicationCode() const { DARABONBA_PTR_GET_DEFAULT(applicationCode_, "") };
    inline LlmSmartCallFullDuplexShrinkRequest& setApplicationCode(string applicationCode) { DARABONBA_PTR_SET_VALUE(applicationCode_, applicationCode) };


    // calledNumber Field Functions 
    bool hasCalledNumber() const { return this->calledNumber_ != nullptr;};
    void deleteCalledNumber() { this->calledNumber_ = nullptr;};
    inline string getCalledNumber() const { DARABONBA_PTR_GET_DEFAULT(calledNumber_, "") };
    inline LlmSmartCallFullDuplexShrinkRequest& setCalledNumber(string calledNumber) { DARABONBA_PTR_SET_VALUE(calledNumber_, calledNumber) };


    // callerNumber Field Functions 
    bool hasCallerNumber() const { return this->callerNumber_ != nullptr;};
    void deleteCallerNumber() { this->callerNumber_ = nullptr;};
    inline string getCallerNumber() const { DARABONBA_PTR_GET_DEFAULT(callerNumber_, "") };
    inline LlmSmartCallFullDuplexShrinkRequest& setCallerNumber(string callerNumber) { DARABONBA_PTR_SET_VALUE(callerNumber_, callerNumber) };


    // outId Field Functions 
    bool hasOutId() const { return this->outId_ != nullptr;};
    void deleteOutId() { this->outId_ = nullptr;};
    inline string getOutId() const { DARABONBA_PTR_GET_DEFAULT(outId_, "") };
    inline LlmSmartCallFullDuplexShrinkRequest& setOutId(string outId) { DARABONBA_PTR_SET_VALUE(outId_, outId) };


    // sessionTimeout Field Functions 
    bool hasSessionTimeout() const { return this->sessionTimeout_ != nullptr;};
    void deleteSessionTimeout() { this->sessionTimeout_ = nullptr;};
    inline int32_t getSessionTimeout() const { DARABONBA_PTR_GET_DEFAULT(sessionTimeout_, 0) };
    inline LlmSmartCallFullDuplexShrinkRequest& setSessionTimeout(int32_t sessionTimeout) { DARABONBA_PTR_SET_VALUE(sessionTimeout_, sessionTimeout) };


    // startWordParamShrink Field Functions 
    bool hasStartWordParamShrink() const { return this->startWordParamShrink_ != nullptr;};
    void deleteStartWordParamShrink() { this->startWordParamShrink_ = nullptr;};
    inline string getStartWordParamShrink() const { DARABONBA_PTR_GET_DEFAULT(startWordParamShrink_, "") };
    inline LlmSmartCallFullDuplexShrinkRequest& setStartWordParamShrink(string startWordParamShrink) { DARABONBA_PTR_SET_VALUE(startWordParamShrink_, startWordParamShrink) };


    // ttsSpeed Field Functions 
    bool hasTtsSpeed() const { return this->ttsSpeed_ != nullptr;};
    void deleteTtsSpeed() { this->ttsSpeed_ = nullptr;};
    inline int32_t getTtsSpeed() const { DARABONBA_PTR_GET_DEFAULT(ttsSpeed_, 0) };
    inline LlmSmartCallFullDuplexShrinkRequest& setTtsSpeed(int32_t ttsSpeed) { DARABONBA_PTR_SET_VALUE(ttsSpeed_, ttsSpeed) };


    // ttsVoiceCode Field Functions 
    bool hasTtsVoiceCode() const { return this->ttsVoiceCode_ != nullptr;};
    void deleteTtsVoiceCode() { this->ttsVoiceCode_ = nullptr;};
    inline string getTtsVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(ttsVoiceCode_, "") };
    inline LlmSmartCallFullDuplexShrinkRequest& setTtsVoiceCode(string ttsVoiceCode) { DARABONBA_PTR_SET_VALUE(ttsVoiceCode_, ttsVoiceCode) };


    // ttsVolume Field Functions 
    bool hasTtsVolume() const { return this->ttsVolume_ != nullptr;};
    void deleteTtsVolume() { this->ttsVolume_ = nullptr;};
    inline int32_t getTtsVolume() const { DARABONBA_PTR_GET_DEFAULT(ttsVolume_, 0) };
    inline LlmSmartCallFullDuplexShrinkRequest& setTtsVolume(int32_t ttsVolume) { DARABONBA_PTR_SET_VALUE(ttsVolume_, ttsVolume) };


  protected:
    // **ApplicationCode**  
    // The application code.
    // 
    // This parameter is required.
    shared_ptr<string> applicationCode_ {};
    // **CalledNumber**  
    // The phone number that receives the intelligent outbound call.
    // 
    // This parameter is required.
    shared_ptr<string> calledNumber_ {};
    // **CallerNumber**  
    // The calling number.
    // 
    // This parameter is required.
    shared_ptr<string> callerNumber_ {};
    // **OutId**  
    // The external ID. The value must be 1 to 15 bytes in length.
    shared_ptr<string> outId_ {};
    // **SessionTimeout**  
    // The maximum call duration. The call is automatically ended when the specified duration is exceeded. Unit: seconds. Maximum value: 3600.
    shared_ptr<int32_t> sessionTimeout_ {};
    // **StartWordParam**  
    // The opening greeting variable. Format: JSON. Specify the variable name and parameter, for example, `{"custom":"XXX"}`.
    shared_ptr<string> startWordParamShrink_ {};
    // The voice speed. Valid values: 0 to 100. If this parameter is not specified, the value configured in the application is used.
    shared_ptr<int32_t> ttsSpeed_ {};
    // The voice code from the personalized voice interface. If this parameter is not specified, the value configured in the application is used.
    shared_ptr<string> ttsVoiceCode_ {};
    // The volume. Valid values: -200 to 200. If this parameter is not specified, the value configured in the application is used.
    shared_ptr<int32_t> ttsVolume_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
