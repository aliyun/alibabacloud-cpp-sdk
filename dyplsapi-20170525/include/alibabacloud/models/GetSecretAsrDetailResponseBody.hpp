// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECRETASRDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSECRETASRDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class GetSecretAsrDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecretAsrDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecretAsrDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSecretAsrDetailResponseBody() = default ;
    GetSecretAsrDetailResponseBody(const GetSecretAsrDetailResponseBody &) = default ;
    GetSecretAsrDetailResponseBody(GetSecretAsrDetailResponseBody &&) = default ;
    GetSecretAsrDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecretAsrDetailResponseBody() = default ;
    GetSecretAsrDetailResponseBody& operator=(const GetSecretAsrDetailResponseBody &) = default ;
    GetSecretAsrDetailResponseBody& operator=(GetSecretAsrDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BizDuration, bizDuration_);
        DARABONBA_PTR_TO_JSON(BusinessId, businessId_);
        DARABONBA_PTR_TO_JSON(BusinessKey, businessKey_);
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        DARABONBA_PTR_TO_JSON(Sentences, sentences_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BizDuration, bizDuration_);
        DARABONBA_PTR_FROM_JSON(BusinessId, businessId_);
        DARABONBA_PTR_FROM_JSON(BusinessKey, businessKey_);
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
        DARABONBA_PTR_FROM_JSON(Sentences, sentences_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      class Sentences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sentences& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
          DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Sentences& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
          DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        Sentences() = default ;
        Sentences(const Sentences &) = default ;
        Sentences(Sentences &&) = default ;
        Sentences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sentences() = default ;
        Sentences& operator=(const Sentences &) = default ;
        Sentences& operator=(Sentences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->channelId_ == nullptr && this->emotionValue_ == nullptr && this->endTime_ == nullptr && this->silenceDuration_ == nullptr && this->speechRate_ == nullptr
        && this->text_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
        inline Sentences& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline int32_t getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0) };
        inline Sentences& setChannelId(int32_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // emotionValue Field Functions 
        bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
        void deleteEmotionValue() { this->emotionValue_ = nullptr;};
        inline string getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, "") };
        inline Sentences& setEmotionValue(string emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Sentences& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // silenceDuration Field Functions 
        bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
        void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
        inline int64_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0L) };
        inline Sentences& setSilenceDuration(int64_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


        // speechRate Field Functions 
        bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
        void deleteSpeechRate() { this->speechRate_ = nullptr;};
        inline int32_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
        inline Sentences& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Sentences& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        // The start time offset of the sentence. Unit: milliseconds.
        shared_ptr<int64_t> beginTime_ {};
        // The ID of the audio track to which the sentence belongs.
        shared_ptr<int32_t> channelId_ {};
        // The emotion value. Value range: 1 to 10. The higher the value, the stronger the emotion.
        shared_ptr<string> emotionValue_ {};
        // The end time offset of the sentence. Unit: milliseconds.
        shared_ptr<int64_t> endTime_ {};
        // The silence duration between the current sentence and the previous sentence. Unit: seconds.
        shared_ptr<int64_t> silenceDuration_ {};
        // The average speech rate of the sentence. Unit: number of words per minute.
        shared_ptr<int32_t> speechRate_ {};
        // The recognition result of the sentence.
        shared_ptr<string> text_ {};
      };

      virtual bool empty() const override { return this->bizDuration_ == nullptr
        && this->businessId_ == nullptr && this->businessKey_ == nullptr && this->code_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr
        && this->sentences_ == nullptr && this->type_ == nullptr; };
      // bizDuration Field Functions 
      bool hasBizDuration() const { return this->bizDuration_ != nullptr;};
      void deleteBizDuration() { this->bizDuration_ = nullptr;};
      inline int64_t getBizDuration() const { DARABONBA_PTR_GET_DEFAULT(bizDuration_, 0L) };
      inline Data& setBizDuration(int64_t bizDuration) { DARABONBA_PTR_SET_VALUE(bizDuration_, bizDuration) };


      // businessId Field Functions 
      bool hasBusinessId() const { return this->businessId_ != nullptr;};
      void deleteBusinessId() { this->businessId_ = nullptr;};
      inline string getBusinessId() const { DARABONBA_PTR_GET_DEFAULT(businessId_, "") };
      inline Data& setBusinessId(string businessId) { DARABONBA_PTR_SET_VALUE(businessId_, businessId) };


      // businessKey Field Functions 
      bool hasBusinessKey() const { return this->businessKey_ != nullptr;};
      void deleteBusinessKey() { this->businessKey_ = nullptr;};
      inline string getBusinessKey() const { DARABONBA_PTR_GET_DEFAULT(businessKey_, "") };
      inline Data& setBusinessKey(string businessKey) { DARABONBA_PTR_SET_VALUE(businessKey_, businessKey) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Data& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // requestId Field Functions 
      bool hasRequestId() const { return this->requestId_ != nullptr;};
      void deleteRequestId() { this->requestId_ = nullptr;};
      inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
      inline Data& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      // sentences Field Functions 
      bool hasSentences() const { return this->sentences_ != nullptr;};
      void deleteSentences() { this->sentences_ = nullptr;};
      inline const vector<Data::Sentences> & getSentences() const { DARABONBA_PTR_GET_CONST(sentences_, vector<Data::Sentences>) };
      inline vector<Data::Sentences> getSentences() { DARABONBA_PTR_GET(sentences_, vector<Data::Sentences>) };
      inline Data& setSentences(const vector<Data::Sentences> & sentences) { DARABONBA_PTR_SET_VALUE(sentences_, sentences) };
      inline Data& setSentences(vector<Data::Sentences> && sentences) { DARABONBA_PTR_SET_RVALUE(sentences_, sentences) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Data& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The total duration of the audio file that was recognized. Unit: milliseconds.
      shared_ptr<int64_t> bizDuration_ {};
      // The ID of the business process.
      shared_ptr<string> businessId_ {};
      // The business keyword.
      shared_ptr<string> businessKey_ {};
      // The status code. The status code 21050000 indicates that the request was successful.
      shared_ptr<string> code_ {};
      // The description.
      shared_ptr<string> msg_ {};
      // The request ID.
      shared_ptr<string> requestId_ {};
      // The ASR result.
      shared_ptr<vector<Data::Sentences>> sentences_ {};
      // The type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSecretAsrDetailResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSecretAsrDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSecretAsrDetailResponseBody::Data) };
    inline GetSecretAsrDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSecretAsrDetailResponseBody::Data) };
    inline GetSecretAsrDetailResponseBody& setData(const GetSecretAsrDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSecretAsrDetailResponseBody& setData(GetSecretAsrDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSecretAsrDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSecretAsrDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The ASR details.
    shared_ptr<GetSecretAsrDetailResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
