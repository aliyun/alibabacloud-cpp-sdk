// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDGETASRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CLOUDGETASRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudGetAsrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudGetAsrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CloudGetAsrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CloudGetAsrResponseBody() = default ;
    CloudGetAsrResponseBody(const CloudGetAsrResponseBody &) = default ;
    CloudGetAsrResponseBody(CloudGetAsrResponseBody &&) = default ;
    CloudGetAsrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudGetAsrResponseBody() = default ;
    CloudGetAsrResponseBody& operator=(const CloudGetAsrResponseBody &) = default ;
    CloudGetAsrResponseBody& operator=(CloudGetAsrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_TO_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_TO_JSON(RecordFileCount, recordFileCount_);
        DARABONBA_PTR_TO_JSON(RecordFileText1In, recordFileText1In_);
        DARABONBA_PTR_TO_JSON(RecordFileText1Out, recordFileText1Out_);
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_FROM_JSON(MonitorType, monitorType_);
        DARABONBA_PTR_FROM_JSON(RecordFileCount, recordFileCount_);
        DARABONBA_PTR_FROM_JSON(RecordFileText1In, recordFileText1In_);
        DARABONBA_PTR_FROM_JSON(RecordFileText1Out, recordFileText1Out_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
          DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(Side, side_);
          DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
          DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
          DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(Side, side_);
          DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
          DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
          DARABONBA_PTR_FROM_JSON(Text, text_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->channelId_ == nullptr && this->emotionValue_ == nullptr && this->endTime_ == nullptr && this->side_ == nullptr && this->silenceDuration_ == nullptr
        && this->speechRate_ == nullptr && this->text_ == nullptr; };
        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
        inline Result& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // channelId Field Functions 
        bool hasChannelId() const { return this->channelId_ != nullptr;};
        void deleteChannelId() { this->channelId_ = nullptr;};
        inline int64_t getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0L) };
        inline Result& setChannelId(int64_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


        // emotionValue Field Functions 
        bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
        void deleteEmotionValue() { this->emotionValue_ = nullptr;};
        inline double getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0.0) };
        inline Result& setEmotionValue(double emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Result& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // side Field Functions 
        bool hasSide() const { return this->side_ != nullptr;};
        void deleteSide() { this->side_ = nullptr;};
        inline string getSide() const { DARABONBA_PTR_GET_DEFAULT(side_, "") };
        inline Result& setSide(string side) { DARABONBA_PTR_SET_VALUE(side_, side) };


        // silenceDuration Field Functions 
        bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
        void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
        inline int64_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0L) };
        inline Result& setSilenceDuration(int64_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


        // speechRate Field Functions 
        bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
        void deleteSpeechRate() { this->speechRate_ = nullptr;};
        inline int64_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0L) };
        inline Result& setSpeechRate(int64_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Result& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        // 开始时间
        shared_ptr<int64_t> beginTime_ {};
        // 通道id
        shared_ptr<int64_t> channelId_ {};
        // 情感值
        shared_ptr<double> emotionValue_ {};
        // 结束时间
        shared_ptr<int64_t> endTime_ {};
        // 语音文本所属方；in: 第一侧；out: 第二侧
        shared_ptr<string> side_ {};
        // 沉默时间
        shared_ptr<int64_t> silenceDuration_ {};
        // 语速
        shared_ptr<int64_t> speechRate_ {};
        // 转写文本
        shared_ptr<string> text_ {};
      };

      class RecordFileText1Out : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordFileText1Out& obj) { 
          DARABONBA_PTR_TO_JSON(BizDuration, bizDuration_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        };
        friend void from_json(const Darabonba::Json& j, RecordFileText1Out& obj) { 
          DARABONBA_PTR_FROM_JSON(BizDuration, bizDuration_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        };
        RecordFileText1Out() = default ;
        RecordFileText1Out(const RecordFileText1Out &) = default ;
        RecordFileText1Out(RecordFileText1Out &&) = default ;
        RecordFileText1Out(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordFileText1Out() = default ;
        RecordFileText1Out& operator=(const RecordFileText1Out &) = default ;
        RecordFileText1Out& operator=(RecordFileText1Out &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
            DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
            DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
            DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
            DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
            DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
            DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
          };
          Result() = default ;
          Result(const Result &) = default ;
          Result(Result &&) = default ;
          Result(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Result() = default ;
          Result& operator=(const Result &) = default ;
          Result& operator=(Result &&) = default ;
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
          inline Result& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


          // channelId Field Functions 
          bool hasChannelId() const { return this->channelId_ != nullptr;};
          void deleteChannelId() { this->channelId_ = nullptr;};
          inline int64_t getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0L) };
          inline Result& setChannelId(int64_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


          // emotionValue Field Functions 
          bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
          void deleteEmotionValue() { this->emotionValue_ = nullptr;};
          inline double getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0.0) };
          inline Result& setEmotionValue(double emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline Result& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // silenceDuration Field Functions 
          bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
          void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
          inline int64_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0L) };
          inline Result& setSilenceDuration(int64_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


          // speechRate Field Functions 
          bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
          void deleteSpeechRate() { this->speechRate_ = nullptr;};
          inline int64_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0L) };
          inline Result& setSpeechRate(int64_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Result& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          // 开始时间
          shared_ptr<int64_t> beginTime_ {};
          // 通道id
          shared_ptr<int64_t> channelId_ {};
          // 情感值
          shared_ptr<double> emotionValue_ {};
          // 结束时间
          shared_ptr<int64_t> endTime_ {};
          // 沉默时间
          shared_ptr<int64_t> silenceDuration_ {};
          // 语速
          shared_ptr<int64_t> speechRate_ {};
          // 转写文本
          shared_ptr<string> text_ {};
        };

        virtual bool empty() const override { return this->bizDuration_ == nullptr
        && this->errorMessage_ == nullptr && this->id_ == nullptr && this->result_ == nullptr && this->status_ == nullptr && this->statusCode_ == nullptr; };
        // bizDuration Field Functions 
        bool hasBizDuration() const { return this->bizDuration_ != nullptr;};
        void deleteBizDuration() { this->bizDuration_ = nullptr;};
        inline int64_t getBizDuration() const { DARABONBA_PTR_GET_DEFAULT(bizDuration_, 0L) };
        inline RecordFileText1Out& setBizDuration(int64_t bizDuration) { DARABONBA_PTR_SET_VALUE(bizDuration_, bizDuration) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline RecordFileText1Out& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline RecordFileText1Out& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const vector<RecordFileText1Out::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<RecordFileText1Out::Result>) };
        inline vector<RecordFileText1Out::Result> getResult() { DARABONBA_PTR_GET(result_, vector<RecordFileText1Out::Result>) };
        inline RecordFileText1Out& setResult(const vector<RecordFileText1Out::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline RecordFileText1Out& setResult(vector<RecordFileText1Out::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RecordFileText1Out& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline int64_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0L) };
        inline RecordFileText1Out& setStatusCode(int64_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      protected:
        shared_ptr<int64_t> bizDuration_ {};
        // 错误信息
        shared_ptr<string> errorMessage_ {};
        // id
        shared_ptr<string> id_ {};
        // 转写结果
        shared_ptr<vector<RecordFileText1Out::Result>> result_ {};
        // 状态
        shared_ptr<string> status_ {};
        // 状态码
        shared_ptr<int64_t> statusCode_ {};
      };

      class RecordFileText1In : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordFileText1In& obj) { 
          DARABONBA_PTR_TO_JSON(BizDuration, bizDuration_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        };
        friend void from_json(const Darabonba::Json& j, RecordFileText1In& obj) { 
          DARABONBA_PTR_FROM_JSON(BizDuration, bizDuration_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
        };
        RecordFileText1In() = default ;
        RecordFileText1In(const RecordFileText1In &) = default ;
        RecordFileText1In(RecordFileText1In &&) = default ;
        RecordFileText1In(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordFileText1In() = default ;
        RecordFileText1In& operator=(const RecordFileText1In &) = default ;
        RecordFileText1In& operator=(RecordFileText1In &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Result : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Result& obj) { 
            DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
            DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
            DARABONBA_PTR_TO_JSON(EmotionValue, emotionValue_);
            DARABONBA_PTR_TO_JSON(EndTime, endTime_);
            DARABONBA_PTR_TO_JSON(SilenceDuration, silenceDuration_);
            DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
            DARABONBA_PTR_TO_JSON(Text, text_);
          };
          friend void from_json(const Darabonba::Json& j, Result& obj) { 
            DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
            DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
            DARABONBA_PTR_FROM_JSON(EmotionValue, emotionValue_);
            DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
            DARABONBA_PTR_FROM_JSON(SilenceDuration, silenceDuration_);
            DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
            DARABONBA_PTR_FROM_JSON(Text, text_);
          };
          Result() = default ;
          Result(const Result &) = default ;
          Result(Result &&) = default ;
          Result(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Result() = default ;
          Result& operator=(const Result &) = default ;
          Result& operator=(Result &&) = default ;
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
          inline Result& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


          // channelId Field Functions 
          bool hasChannelId() const { return this->channelId_ != nullptr;};
          void deleteChannelId() { this->channelId_ = nullptr;};
          inline int64_t getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0L) };
          inline Result& setChannelId(int64_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


          // emotionValue Field Functions 
          bool hasEmotionValue() const { return this->emotionValue_ != nullptr;};
          void deleteEmotionValue() { this->emotionValue_ = nullptr;};
          inline double getEmotionValue() const { DARABONBA_PTR_GET_DEFAULT(emotionValue_, 0.0) };
          inline Result& setEmotionValue(double emotionValue) { DARABONBA_PTR_SET_VALUE(emotionValue_, emotionValue) };


          // endTime Field Functions 
          bool hasEndTime() const { return this->endTime_ != nullptr;};
          void deleteEndTime() { this->endTime_ = nullptr;};
          inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
          inline Result& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


          // silenceDuration Field Functions 
          bool hasSilenceDuration() const { return this->silenceDuration_ != nullptr;};
          void deleteSilenceDuration() { this->silenceDuration_ = nullptr;};
          inline int64_t getSilenceDuration() const { DARABONBA_PTR_GET_DEFAULT(silenceDuration_, 0L) };
          inline Result& setSilenceDuration(int64_t silenceDuration) { DARABONBA_PTR_SET_VALUE(silenceDuration_, silenceDuration) };


          // speechRate Field Functions 
          bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
          void deleteSpeechRate() { this->speechRate_ = nullptr;};
          inline int64_t getSpeechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0L) };
          inline Result& setSpeechRate(int64_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


          // text Field Functions 
          bool hasText() const { return this->text_ != nullptr;};
          void deleteText() { this->text_ = nullptr;};
          inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
          inline Result& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        protected:
          // 开始时间
          shared_ptr<int64_t> beginTime_ {};
          // 通道id
          shared_ptr<int64_t> channelId_ {};
          // 情感值
          shared_ptr<double> emotionValue_ {};
          // 结束时间
          shared_ptr<int64_t> endTime_ {};
          // 沉默时间
          shared_ptr<int64_t> silenceDuration_ {};
          // 语速
          shared_ptr<int64_t> speechRate_ {};
          // 转写文本
          shared_ptr<string> text_ {};
        };

        virtual bool empty() const override { return this->bizDuration_ == nullptr
        && this->errorMessage_ == nullptr && this->id_ == nullptr && this->result_ == nullptr && this->status_ == nullptr && this->statusCode_ == nullptr; };
        // bizDuration Field Functions 
        bool hasBizDuration() const { return this->bizDuration_ != nullptr;};
        void deleteBizDuration() { this->bizDuration_ = nullptr;};
        inline int64_t getBizDuration() const { DARABONBA_PTR_GET_DEFAULT(bizDuration_, 0L) };
        inline RecordFileText1In& setBizDuration(int64_t bizDuration) { DARABONBA_PTR_SET_VALUE(bizDuration_, bizDuration) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline RecordFileText1In& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline RecordFileText1In& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline const vector<RecordFileText1In::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<RecordFileText1In::Result>) };
        inline vector<RecordFileText1In::Result> getResult() { DARABONBA_PTR_GET(result_, vector<RecordFileText1In::Result>) };
        inline RecordFileText1In& setResult(const vector<RecordFileText1In::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
        inline RecordFileText1In& setResult(vector<RecordFileText1In::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RecordFileText1In& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusCode Field Functions 
        bool hasStatusCode() const { return this->statusCode_ != nullptr;};
        void deleteStatusCode() { this->statusCode_ = nullptr;};
        inline int64_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0L) };
        inline RecordFileText1In& setStatusCode(int64_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


      protected:
        shared_ptr<int64_t> bizDuration_ {};
        // 错误信息
        shared_ptr<string> errorMessage_ {};
        // id
        shared_ptr<string> id_ {};
        // 转写结果
        shared_ptr<vector<RecordFileText1In::Result>> result_ {};
        // 状态
        shared_ptr<string> status_ {};
        // 状态码
        shared_ptr<int64_t> statusCode_ {};
      };

      virtual bool empty() const override { return this->enterpriseId_ == nullptr
        && this->monitorType_ == nullptr && this->recordFileCount_ == nullptr && this->recordFileText1In_ == nullptr && this->recordFileText1Out_ == nullptr && this->result_ == nullptr; };
      // enterpriseId Field Functions 
      bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
      void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
      inline string getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, "") };
      inline Data& setEnterpriseId(string enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


      // monitorType Field Functions 
      bool hasMonitorType() const { return this->monitorType_ != nullptr;};
      void deleteMonitorType() { this->monitorType_ = nullptr;};
      inline string getMonitorType() const { DARABONBA_PTR_GET_DEFAULT(monitorType_, "") };
      inline Data& setMonitorType(string monitorType) { DARABONBA_PTR_SET_VALUE(monitorType_, monitorType) };


      // recordFileCount Field Functions 
      bool hasRecordFileCount() const { return this->recordFileCount_ != nullptr;};
      void deleteRecordFileCount() { this->recordFileCount_ = nullptr;};
      inline string getRecordFileCount() const { DARABONBA_PTR_GET_DEFAULT(recordFileCount_, "") };
      inline Data& setRecordFileCount(string recordFileCount) { DARABONBA_PTR_SET_VALUE(recordFileCount_, recordFileCount) };


      // recordFileText1In Field Functions 
      bool hasRecordFileText1In() const { return this->recordFileText1In_ != nullptr;};
      void deleteRecordFileText1In() { this->recordFileText1In_ = nullptr;};
      inline const Data::RecordFileText1In & getRecordFileText1In() const { DARABONBA_PTR_GET_CONST(recordFileText1In_, Data::RecordFileText1In) };
      inline Data::RecordFileText1In getRecordFileText1In() { DARABONBA_PTR_GET(recordFileText1In_, Data::RecordFileText1In) };
      inline Data& setRecordFileText1In(const Data::RecordFileText1In & recordFileText1In) { DARABONBA_PTR_SET_VALUE(recordFileText1In_, recordFileText1In) };
      inline Data& setRecordFileText1In(Data::RecordFileText1In && recordFileText1In) { DARABONBA_PTR_SET_RVALUE(recordFileText1In_, recordFileText1In) };


      // recordFileText1Out Field Functions 
      bool hasRecordFileText1Out() const { return this->recordFileText1Out_ != nullptr;};
      void deleteRecordFileText1Out() { this->recordFileText1Out_ = nullptr;};
      inline const Data::RecordFileText1Out & getRecordFileText1Out() const { DARABONBA_PTR_GET_CONST(recordFileText1Out_, Data::RecordFileText1Out) };
      inline Data::RecordFileText1Out getRecordFileText1Out() { DARABONBA_PTR_GET(recordFileText1Out_, Data::RecordFileText1Out) };
      inline Data& setRecordFileText1Out(const Data::RecordFileText1Out & recordFileText1Out) { DARABONBA_PTR_SET_VALUE(recordFileText1Out_, recordFileText1Out) };
      inline Data& setRecordFileText1Out(Data::RecordFileText1Out && recordFileText1Out) { DARABONBA_PTR_SET_RVALUE(recordFileText1Out_, recordFileText1Out) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      // 企业编号
      shared_ptr<string> enterpriseId_ {};
      // 转写类型 1：混音 2：分轨
      shared_ptr<string> monitorType_ {};
      // 转写文件个数
      shared_ptr<string> recordFileCount_ {};
      // 第一侧转写文本结果
      shared_ptr<Data::RecordFileText1In> recordFileText1In_ {};
      // 第二侧转写文本结果
      shared_ptr<Data::RecordFileText1Out> recordFileText1Out_ {};
      // 转写结果, 当all=true时返回
      shared_ptr<vector<Data::Result>> result_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CloudGetAsrResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CloudGetAsrResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CloudGetAsrResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CloudGetAsrResponseBody::Data) };
    inline CloudGetAsrResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CloudGetAsrResponseBody::Data) };
    inline CloudGetAsrResponseBody& setData(const CloudGetAsrResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CloudGetAsrResponseBody& setData(CloudGetAsrResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CloudGetAsrResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CloudGetAsrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CloudGetAsrResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
