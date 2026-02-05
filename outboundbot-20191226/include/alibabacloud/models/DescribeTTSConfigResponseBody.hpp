// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETTSCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETTSCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeTTSConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTTSConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TTSConfig, TTSConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTTSConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TTSConfig, TTSConfig_);
    };
    DescribeTTSConfigResponseBody() = default ;
    DescribeTTSConfigResponseBody(const DescribeTTSConfigResponseBody &) = default ;
    DescribeTTSConfigResponseBody(DescribeTTSConfigResponseBody &&) = default ;
    DescribeTTSConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTTSConfigResponseBody() = default ;
    DescribeTTSConfigResponseBody& operator=(const DescribeTTSConfigResponseBody &) = default ;
    DescribeTTSConfigResponseBody& operator=(DescribeTTSConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TTSConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TTSConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(NlsServiceType, nlsServiceType_);
        DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
        DARABONBA_PTR_TO_JSON(Voice, voice_);
        DARABONBA_PTR_TO_JSON(Volume, volume_);
      };
      friend void from_json(const Darabonba::Json& j, TTSConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(NlsServiceType, nlsServiceType_);
        DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
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
      virtual bool empty() const override { return this->appKey_ == nullptr
        && this->instanceId_ == nullptr && this->nlsServiceType_ == nullptr && this->speechRate_ == nullptr && this->voice_ == nullptr && this->volume_ == nullptr; };
      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline TTSConfig& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline TTSConfig& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // nlsServiceType Field Functions 
      bool hasNlsServiceType() const { return this->nlsServiceType_ != nullptr;};
      void deleteNlsServiceType() { this->nlsServiceType_ = nullptr;};
      inline string getNlsServiceType() const { DARABONBA_PTR_GET_DEFAULT(nlsServiceType_, "") };
      inline TTSConfig& setNlsServiceType(string nlsServiceType) { DARABONBA_PTR_SET_VALUE(nlsServiceType_, nlsServiceType) };


      // speechRate Field Functions 
      bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
      void deleteSpeechRate() { this->speechRate_ = nullptr;};
      inline string getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, "") };
      inline TTSConfig& setSpeechRate(string speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


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
      shared_ptr<string> appKey_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<string> nlsServiceType_ {};
      shared_ptr<string> speechRate_ {};
      shared_ptr<string> voice_ {};
      shared_ptr<string> volume_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->TTSConfig_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeTTSConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DescribeTTSConfigResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeTTSConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTTSConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeTTSConfigResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // TTSConfig Field Functions 
    bool hasTTSConfig() const { return this->TTSConfig_ != nullptr;};
    void deleteTTSConfig() { this->TTSConfig_ = nullptr;};
    inline const DescribeTTSConfigResponseBody::TTSConfig & getTTSConfig() const { DARABONBA_PTR_GET_CONST(TTSConfig_, DescribeTTSConfigResponseBody::TTSConfig) };
    inline DescribeTTSConfigResponseBody::TTSConfig getTTSConfig() { DARABONBA_PTR_GET(TTSConfig_, DescribeTTSConfigResponseBody::TTSConfig) };
    inline DescribeTTSConfigResponseBody& setTTSConfig(const DescribeTTSConfigResponseBody::TTSConfig & tTSConfig) { DARABONBA_PTR_SET_VALUE(TTSConfig_, tTSConfig) };
    inline DescribeTTSConfigResponseBody& setTTSConfig(DescribeTTSConfigResponseBody::TTSConfig && tTSConfig) { DARABONBA_PTR_SET_RVALUE(TTSConfig_, tTSConfig) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<DescribeTTSConfigResponseBody::TTSConfig> TTSConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
