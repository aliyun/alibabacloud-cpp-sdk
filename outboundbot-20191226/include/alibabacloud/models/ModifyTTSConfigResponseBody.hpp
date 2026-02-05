// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTTSCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTTSCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class ModifyTTSConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTTSConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TTSConfig, TTSConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTTSConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TTSConfig, TTSConfig_);
    };
    ModifyTTSConfigResponseBody() = default ;
    ModifyTTSConfigResponseBody(const ModifyTTSConfigResponseBody &) = default ;
    ModifyTTSConfigResponseBody(ModifyTTSConfigResponseBody &&) = default ;
    ModifyTTSConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTTSConfigResponseBody() = default ;
    ModifyTTSConfigResponseBody& operator=(const ModifyTTSConfigResponseBody &) = default ;
    ModifyTTSConfigResponseBody& operator=(ModifyTTSConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TTSConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TTSConfig& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
        DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_TO_JSON(TTSConfigId, TTSConfigId_);
        DARABONBA_PTR_TO_JSON(Voice, voice_);
        DARABONBA_PTR_TO_JSON(Volume, volume_);
      };
      friend void from_json(const Darabonba::Json& j, TTSConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
        DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
        DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_FROM_JSON(TTSConfigId, TTSConfigId_);
        DARABONBA_PTR_FROM_JSON(Voice, voice_);
        DARABONBA_PTR_FROM_JSON(Volume, volume_);
      };
      TTSConfig() = default ;
      TTSConfig(const TTSConfig &) = default ;
      TTSConfig(TTSConfig &&) = default ;
      TTSConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TTSConfig() = default ;
      TTSConfig& operator=(const TTSConfig &) = default ;
      TTSConfig& operator=(TTSConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pitchRate_ == nullptr && this->scriptId_ == nullptr && this->speechRate_ == nullptr && this->TTSConfigId_ == nullptr && this->voice_ == nullptr
        && this->volume_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TTSConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // pitchRate Field Functions 
      bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
      void deletePitchRate() { this->pitchRate_ = nullptr;};
      inline string getPitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, "") };
      inline TTSConfig& setPitchRate(string pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


      // scriptId Field Functions 
      bool hasScriptId() const { return this->scriptId_ != nullptr;};
      void deleteScriptId() { this->scriptId_ = nullptr;};
      inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
      inline TTSConfig& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


      // speechRate Field Functions 
      bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
      void deleteSpeechRate() { this->speechRate_ = nullptr;};
      inline string getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, "") };
      inline TTSConfig& setSpeechRate(string speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


      // TTSConfigId Field Functions 
      bool hasTTSConfigId() const { return this->TTSConfigId_ != nullptr;};
      void deleteTTSConfigId() { this->TTSConfigId_ = nullptr;};
      inline string getTTSConfigId() const { DARABONBA_PTR_GET_DEFAULT(TTSConfigId_, "") };
      inline TTSConfig& setTTSConfigId(string TTSConfigId) { DARABONBA_PTR_SET_VALUE(TTSConfigId_, TTSConfigId) };


      // voice Field Functions 
      bool hasVoice() const { return this->voice_ != nullptr;};
      void deleteVoice() { this->voice_ = nullptr;};
      inline string getVoice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
      inline TTSConfig& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


      // volume Field Functions 
      bool hasVolume() const { return this->volume_ != nullptr;};
      void deleteVolume() { this->volume_ = nullptr;};
      inline string getVolume() const { DARABONBA_PTR_GET_DEFAULT(volume_, "") };
      inline TTSConfig& setVolume(string volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


    protected:
      shared_ptr<string> instanceId_ {};
      // 语调
      // [-500,500]之间整数。默认值为0。
      // 
      // 大于0表示升高音高。
      // 
      // 小于0表示降低音高。
      shared_ptr<string> pitchRate_ {};
      shared_ptr<string> scriptId_ {};
      shared_ptr<string> speechRate_ {};
      shared_ptr<string> TTSConfigId_ {};
      shared_ptr<string> voice_ {};
      shared_ptr<string> volume_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->TTSConfig_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ModifyTTSConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyTTSConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ModifyTTSConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyTTSConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyTTSConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // TTSConfig Field Functions 
    bool hasTTSConfig() const { return this->TTSConfig_ != nullptr;};
    void deleteTTSConfig() { this->TTSConfig_ = nullptr;};
    inline const ModifyTTSConfigResponseBody::TTSConfig & getTTSConfig() const { DARABONBA_PTR_GET_CONST(TTSConfig_, ModifyTTSConfigResponseBody::TTSConfig) };
    inline ModifyTTSConfigResponseBody::TTSConfig getTTSConfig() { DARABONBA_PTR_GET(TTSConfig_, ModifyTTSConfigResponseBody::TTSConfig) };
    inline ModifyTTSConfigResponseBody& setTTSConfig(const ModifyTTSConfigResponseBody::TTSConfig & tTSConfig) { DARABONBA_PTR_SET_VALUE(TTSConfig_, tTSConfig) };
    inline ModifyTTSConfigResponseBody& setTTSConfig(ModifyTTSConfigResponseBody::TTSConfig && tTSConfig) { DARABONBA_PTR_SET_RVALUE(TTSConfig_, tTSConfig) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<ModifyTTSConfigResponseBody::TTSConfig> TTSConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
