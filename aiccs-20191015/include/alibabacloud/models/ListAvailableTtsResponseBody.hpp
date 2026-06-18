// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLETTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLETTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListAvailableTtsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableTtsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableTtsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListAvailableTtsResponseBody() = default ;
    ListAvailableTtsResponseBody(const ListAvailableTtsResponseBody &) = default ;
    ListAvailableTtsResponseBody(ListAvailableTtsResponseBody &&) = default ;
    ListAvailableTtsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableTtsResponseBody() = default ;
    ListAvailableTtsResponseBody& operator=(const ListAvailableTtsResponseBody &) = default ;
    ListAvailableTtsResponseBody& operator=(ListAvailableTtsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(TtsAuditionFileUrl, ttsAuditionFileUrl_);
        DARABONBA_PTR_TO_JSON(TtsEngine, ttsEngine_);
        DARABONBA_PTR_TO_JSON(TtsStyle, ttsStyle_);
        DARABONBA_PTR_TO_JSON(TtsVoiceCode, ttsVoiceCode_);
        DARABONBA_PTR_TO_JSON(TtsVoiceName, ttsVoiceName_);
        DARABONBA_PTR_TO_JSON(VoiceType, voiceType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(TtsAuditionFileUrl, ttsAuditionFileUrl_);
        DARABONBA_PTR_FROM_JSON(TtsEngine, ttsEngine_);
        DARABONBA_PTR_FROM_JSON(TtsStyle, ttsStyle_);
        DARABONBA_PTR_FROM_JSON(TtsVoiceCode, ttsVoiceCode_);
        DARABONBA_PTR_FROM_JSON(TtsVoiceName, ttsVoiceName_);
        DARABONBA_PTR_FROM_JSON(VoiceType, voiceType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ttsAuditionFileUrl_ == nullptr
        && this->ttsEngine_ == nullptr && this->ttsStyle_ == nullptr && this->ttsVoiceCode_ == nullptr && this->ttsVoiceName_ == nullptr && this->voiceType_ == nullptr; };
      // ttsAuditionFileUrl Field Functions 
      bool hasTtsAuditionFileUrl() const { return this->ttsAuditionFileUrl_ != nullptr;};
      void deleteTtsAuditionFileUrl() { this->ttsAuditionFileUrl_ = nullptr;};
      inline string getTtsAuditionFileUrl() const { DARABONBA_PTR_GET_DEFAULT(ttsAuditionFileUrl_, "") };
      inline Data& setTtsAuditionFileUrl(string ttsAuditionFileUrl) { DARABONBA_PTR_SET_VALUE(ttsAuditionFileUrl_, ttsAuditionFileUrl) };


      // ttsEngine Field Functions 
      bool hasTtsEngine() const { return this->ttsEngine_ != nullptr;};
      void deleteTtsEngine() { this->ttsEngine_ = nullptr;};
      inline string getTtsEngine() const { DARABONBA_PTR_GET_DEFAULT(ttsEngine_, "") };
      inline Data& setTtsEngine(string ttsEngine) { DARABONBA_PTR_SET_VALUE(ttsEngine_, ttsEngine) };


      // ttsStyle Field Functions 
      bool hasTtsStyle() const { return this->ttsStyle_ != nullptr;};
      void deleteTtsStyle() { this->ttsStyle_ = nullptr;};
      inline string getTtsStyle() const { DARABONBA_PTR_GET_DEFAULT(ttsStyle_, "") };
      inline Data& setTtsStyle(string ttsStyle) { DARABONBA_PTR_SET_VALUE(ttsStyle_, ttsStyle) };


      // ttsVoiceCode Field Functions 
      bool hasTtsVoiceCode() const { return this->ttsVoiceCode_ != nullptr;};
      void deleteTtsVoiceCode() { this->ttsVoiceCode_ = nullptr;};
      inline string getTtsVoiceCode() const { DARABONBA_PTR_GET_DEFAULT(ttsVoiceCode_, "") };
      inline Data& setTtsVoiceCode(string ttsVoiceCode) { DARABONBA_PTR_SET_VALUE(ttsVoiceCode_, ttsVoiceCode) };


      // ttsVoiceName Field Functions 
      bool hasTtsVoiceName() const { return this->ttsVoiceName_ != nullptr;};
      void deleteTtsVoiceName() { this->ttsVoiceName_ = nullptr;};
      inline string getTtsVoiceName() const { DARABONBA_PTR_GET_DEFAULT(ttsVoiceName_, "") };
      inline Data& setTtsVoiceName(string ttsVoiceName) { DARABONBA_PTR_SET_VALUE(ttsVoiceName_, ttsVoiceName) };


      // voiceType Field Functions 
      bool hasVoiceType() const { return this->voiceType_ != nullptr;};
      void deleteVoiceType() { this->voiceType_ = nullptr;};
      inline string getVoiceType() const { DARABONBA_PTR_GET_DEFAULT(voiceType_, "") };
      inline Data& setVoiceType(string voiceType) { DARABONBA_PTR_SET_VALUE(voiceType_, voiceType) };


    protected:
      // The URL for the voice audition file.
      shared_ptr<string> ttsAuditionFileUrl_ {};
      // The voice engine. Valid values:
      // 
      // - CosyVoice: A custom voice or a system voice.
      // 
      // - Volcano: A Doubao voice.
      shared_ptr<string> ttsEngine_ {};
      // The voice style.
      shared_ptr<string> ttsStyle_ {};
      // The voice code.
      shared_ptr<string> ttsVoiceCode_ {};
      // The name of the TTS voice.
      shared_ptr<string> ttsVoiceName_ {};
      // The type of the TTS voice. Valid values:
      // 
      // `SYSTEM`: system voice.
      // 
      // `COSYCLONE`: cloned voice.
      // 
      // `BL-CUSTOM`: premium custom voice.
      shared_ptr<string> voiceType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline ListAvailableTtsResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAvailableTtsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAvailableTtsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAvailableTtsResponseBody::Data>) };
    inline vector<ListAvailableTtsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAvailableTtsResponseBody::Data>) };
    inline ListAvailableTtsResponseBody& setData(const vector<ListAvailableTtsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAvailableTtsResponseBody& setData(vector<ListAvailableTtsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAvailableTtsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAvailableTtsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAvailableTtsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Details about the access denial. The system returns this parameter only if a RAM permission check fails.
    shared_ptr<string> accessDeniedDetail_ {};
    // The status code. `OK` indicates that the request was successful.
    shared_ptr<string> code_ {};
    // A list of available TTS voices.
    shared_ptr<vector<ListAvailableTtsResponseBody::Data>> data_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID generated by Alibaba Cloud. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // 
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
