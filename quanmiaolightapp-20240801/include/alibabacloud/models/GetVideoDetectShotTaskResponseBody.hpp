// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEODETECTSHOTTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoDetectShotTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoDetectShotTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoDetectShotTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetVideoDetectShotTaskResponseBody() = default ;
    GetVideoDetectShotTaskResponseBody(const GetVideoDetectShotTaskResponseBody &) = default ;
    GetVideoDetectShotTaskResponseBody(GetVideoDetectShotTaskResponseBody &&) = default ;
    GetVideoDetectShotTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoDetectShotTaskResponseBody() = default ;
    GetVideoDetectShotTaskResponseBody& operator=(const GetVideoDetectShotTaskResponseBody &) = default ;
    GetVideoDetectShotTaskResponseBody& operator=(GetVideoDetectShotTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(header, header_);
        DARABONBA_PTR_TO_JSON(payload, payload_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(taskRunInfo, taskRunInfo_);
        DARABONBA_PTR_TO_JSON(taskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(header, header_);
        DARABONBA_PTR_FROM_JSON(payload, payload_);
        DARABONBA_PTR_FROM_JSON(taskId, taskId_);
        DARABONBA_PTR_FROM_JSON(taskRunInfo, taskRunInfo_);
        DARABONBA_PTR_FROM_JSON(taskStatus, taskStatus_);
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
      class TaskRunInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TaskRunInfo& obj) { 
          DARABONBA_PTR_TO_JSON(concurrentChargeEnable, concurrentChargeEnable_);
          DARABONBA_PTR_TO_JSON(responseTime, responseTime_);
        };
        friend void from_json(const Darabonba::Json& j, TaskRunInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(concurrentChargeEnable, concurrentChargeEnable_);
          DARABONBA_PTR_FROM_JSON(responseTime, responseTime_);
        };
        TaskRunInfo() = default ;
        TaskRunInfo(const TaskRunInfo &) = default ;
        TaskRunInfo(TaskRunInfo &&) = default ;
        TaskRunInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TaskRunInfo() = default ;
        TaskRunInfo& operator=(const TaskRunInfo &) = default ;
        TaskRunInfo& operator=(TaskRunInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->concurrentChargeEnable_ == nullptr
        && this->responseTime_ == nullptr; };
        // concurrentChargeEnable Field Functions 
        bool hasConcurrentChargeEnable() const { return this->concurrentChargeEnable_ != nullptr;};
        void deleteConcurrentChargeEnable() { this->concurrentChargeEnable_ = nullptr;};
        inline bool getConcurrentChargeEnable() const { DARABONBA_PTR_GET_DEFAULT(concurrentChargeEnable_, false) };
        inline TaskRunInfo& setConcurrentChargeEnable(bool concurrentChargeEnable) { DARABONBA_PTR_SET_VALUE(concurrentChargeEnable_, concurrentChargeEnable) };


        // responseTime Field Functions 
        bool hasResponseTime() const { return this->responseTime_ != nullptr;};
        void deleteResponseTime() { this->responseTime_ = nullptr;};
        inline int64_t getResponseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, 0L) };
        inline TaskRunInfo& setResponseTime(int64_t responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


      protected:
        shared_ptr<bool> concurrentChargeEnable_ {};
        shared_ptr<int64_t> responseTime_ {};
      };

      class Payload : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Payload& obj) { 
          DARABONBA_PTR_TO_JSON(output, output_);
          DARABONBA_PTR_TO_JSON(usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, Payload& obj) { 
          DARABONBA_PTR_FROM_JSON(output, output_);
          DARABONBA_PTR_FROM_JSON(usage, usage_);
        };
        Payload() = default ;
        Payload(const Payload &) = default ;
        Payload(Payload &&) = default ;
        Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Payload() = default ;
        Payload& operator=(const Payload &) = default ;
        Payload& operator=(Payload &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Usage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Usage& obj) { 
            DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
            DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
            DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
          };
          friend void from_json(const Darabonba::Json& j, Usage& obj) { 
            DARABONBA_PTR_FROM_JSON(inputTokens, inputTokens_);
            DARABONBA_PTR_FROM_JSON(outputTokens, outputTokens_);
            DARABONBA_PTR_FROM_JSON(totalTokens, totalTokens_);
          };
          Usage() = default ;
          Usage(const Usage &) = default ;
          Usage(Usage &&) = default ;
          Usage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Usage() = default ;
          Usage& operator=(const Usage &) = default ;
          Usage& operator=(Usage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->inputTokens_ == nullptr
        && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
          // inputTokens Field Functions 
          bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
          void deleteInputTokens() { this->inputTokens_ = nullptr;};
          inline int64_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0L) };
          inline Usage& setInputTokens(int64_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


          // outputTokens Field Functions 
          bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
          void deleteOutputTokens() { this->outputTokens_ = nullptr;};
          inline int64_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0L) };
          inline Usage& setOutputTokens(int64_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


          // totalTokens Field Functions 
          bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
          void deleteTotalTokens() { this->totalTokens_ = nullptr;};
          inline int64_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0L) };
          inline Usage& setTotalTokens(int64_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


        protected:
          shared_ptr<int64_t> inputTokens_ {};
          shared_ptr<int64_t> outputTokens_ {};
          shared_ptr<int64_t> totalTokens_ {};
        };

        class Output : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Output& obj) { 
            DARABONBA_PTR_TO_JSON(videoSplitResult, videoSplitResult_);
          };
          friend void from_json(const Darabonba::Json& j, Output& obj) { 
            DARABONBA_PTR_FROM_JSON(videoSplitResult, videoSplitResult_);
          };
          Output() = default ;
          Output(const Output &) = default ;
          Output(Output &&) = default ;
          Output(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Output() = default ;
          Output& operator=(const Output &) = default ;
          Output& operator=(Output &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VideoSplitResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoSplitResult& obj) { 
              DARABONBA_PTR_TO_JSON(reasonText, reasonText_);
              DARABONBA_PTR_TO_JSON(text, text_);
              DARABONBA_PTR_TO_JSON(videoParts, videoParts_);
              DARABONBA_PTR_TO_JSON(videoRecognitionResult, videoRecognitionResult_);
            };
            friend void from_json(const Darabonba::Json& j, VideoSplitResult& obj) { 
              DARABONBA_PTR_FROM_JSON(reasonText, reasonText_);
              DARABONBA_PTR_FROM_JSON(text, text_);
              DARABONBA_PTR_FROM_JSON(videoParts, videoParts_);
              DARABONBA_PTR_FROM_JSON(videoRecognitionResult, videoRecognitionResult_);
            };
            VideoSplitResult() = default ;
            VideoSplitResult(const VideoSplitResult &) = default ;
            VideoSplitResult(VideoSplitResult &&) = default ;
            VideoSplitResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoSplitResult() = default ;
            VideoSplitResult& operator=(const VideoSplitResult &) = default ;
            VideoSplitResult& operator=(VideoSplitResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class VideoRecognitionResult : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const VideoRecognitionResult& obj) { 
                DARABONBA_PTR_TO_JSON(asr, asr_);
                DARABONBA_PTR_TO_JSON(endTime, endTime_);
                DARABONBA_PTR_TO_JSON(ocr, ocr_);
                DARABONBA_PTR_TO_JSON(startTime, startTime_);
                DARABONBA_PTR_TO_JSON(vl, vl_);
              };
              friend void from_json(const Darabonba::Json& j, VideoRecognitionResult& obj) { 
                DARABONBA_PTR_FROM_JSON(asr, asr_);
                DARABONBA_PTR_FROM_JSON(endTime, endTime_);
                DARABONBA_PTR_FROM_JSON(ocr, ocr_);
                DARABONBA_PTR_FROM_JSON(startTime, startTime_);
                DARABONBA_PTR_FROM_JSON(vl, vl_);
              };
              VideoRecognitionResult() = default ;
              VideoRecognitionResult(const VideoRecognitionResult &) = default ;
              VideoRecognitionResult(VideoRecognitionResult &&) = default ;
              VideoRecognitionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~VideoRecognitionResult() = default ;
              VideoRecognitionResult& operator=(const VideoRecognitionResult &) = default ;
              VideoRecognitionResult& operator=(VideoRecognitionResult &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->asr_ == nullptr
        && this->endTime_ == nullptr && this->ocr_ == nullptr && this->startTime_ == nullptr && this->vl_ == nullptr; };
              // asr Field Functions 
              bool hasAsr() const { return this->asr_ != nullptr;};
              void deleteAsr() { this->asr_ = nullptr;};
              inline string getAsr() const { DARABONBA_PTR_GET_DEFAULT(asr_, "") };
              inline VideoRecognitionResult& setAsr(string asr) { DARABONBA_PTR_SET_VALUE(asr_, asr) };


              // endTime Field Functions 
              bool hasEndTime() const { return this->endTime_ != nullptr;};
              void deleteEndTime() { this->endTime_ = nullptr;};
              inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
              inline VideoRecognitionResult& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


              // ocr Field Functions 
              bool hasOcr() const { return this->ocr_ != nullptr;};
              void deleteOcr() { this->ocr_ = nullptr;};
              inline string getOcr() const { DARABONBA_PTR_GET_DEFAULT(ocr_, "") };
              inline VideoRecognitionResult& setOcr(string ocr) { DARABONBA_PTR_SET_VALUE(ocr_, ocr) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
              inline VideoRecognitionResult& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


              // vl Field Functions 
              bool hasVl() const { return this->vl_ != nullptr;};
              void deleteVl() { this->vl_ = nullptr;};
              inline string getVl() const { DARABONBA_PTR_GET_DEFAULT(vl_, "") };
              inline VideoRecognitionResult& setVl(string vl) { DARABONBA_PTR_SET_VALUE(vl_, vl) };


            protected:
              shared_ptr<string> asr_ {};
              shared_ptr<int64_t> endTime_ {};
              shared_ptr<string> ocr_ {};
              shared_ptr<int64_t> startTime_ {};
              shared_ptr<string> vl_ {};
            };

            virtual bool empty() const override { return this->reasonText_ == nullptr
        && this->text_ == nullptr && this->videoParts_ == nullptr && this->videoRecognitionResult_ == nullptr; };
            // reasonText Field Functions 
            bool hasReasonText() const { return this->reasonText_ != nullptr;};
            void deleteReasonText() { this->reasonText_ = nullptr;};
            inline string getReasonText() const { DARABONBA_PTR_GET_DEFAULT(reasonText_, "") };
            inline VideoSplitResult& setReasonText(string reasonText) { DARABONBA_PTR_SET_VALUE(reasonText_, reasonText) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline VideoSplitResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // videoParts Field Functions 
            bool hasVideoParts() const { return this->videoParts_ != nullptr;};
            void deleteVideoParts() { this->videoParts_ = nullptr;};
            inline const vector<map<string, string>> & getVideoParts() const { DARABONBA_PTR_GET_CONST(videoParts_, vector<map<string, string>>) };
            inline vector<map<string, string>> getVideoParts() { DARABONBA_PTR_GET(videoParts_, vector<map<string, string>>) };
            inline VideoSplitResult& setVideoParts(const vector<map<string, string>> & videoParts) { DARABONBA_PTR_SET_VALUE(videoParts_, videoParts) };
            inline VideoSplitResult& setVideoParts(vector<map<string, string>> && videoParts) { DARABONBA_PTR_SET_RVALUE(videoParts_, videoParts) };


            // videoRecognitionResult Field Functions 
            bool hasVideoRecognitionResult() const { return this->videoRecognitionResult_ != nullptr;};
            void deleteVideoRecognitionResult() { this->videoRecognitionResult_ = nullptr;};
            inline const vector<VideoSplitResult::VideoRecognitionResult> & getVideoRecognitionResult() const { DARABONBA_PTR_GET_CONST(videoRecognitionResult_, vector<VideoSplitResult::VideoRecognitionResult>) };
            inline vector<VideoSplitResult::VideoRecognitionResult> getVideoRecognitionResult() { DARABONBA_PTR_GET(videoRecognitionResult_, vector<VideoSplitResult::VideoRecognitionResult>) };
            inline VideoSplitResult& setVideoRecognitionResult(const vector<VideoSplitResult::VideoRecognitionResult> & videoRecognitionResult) { DARABONBA_PTR_SET_VALUE(videoRecognitionResult_, videoRecognitionResult) };
            inline VideoSplitResult& setVideoRecognitionResult(vector<VideoSplitResult::VideoRecognitionResult> && videoRecognitionResult) { DARABONBA_PTR_SET_RVALUE(videoRecognitionResult_, videoRecognitionResult) };


          protected:
            shared_ptr<string> reasonText_ {};
            shared_ptr<string> text_ {};
            shared_ptr<vector<map<string, string>>> videoParts_ {};
            shared_ptr<vector<VideoSplitResult::VideoRecognitionResult>> videoRecognitionResult_ {};
          };

          virtual bool empty() const override { return this->videoSplitResult_ == nullptr; };
          // videoSplitResult Field Functions 
          bool hasVideoSplitResult() const { return this->videoSplitResult_ != nullptr;};
          void deleteVideoSplitResult() { this->videoSplitResult_ = nullptr;};
          inline const Output::VideoSplitResult & getVideoSplitResult() const { DARABONBA_PTR_GET_CONST(videoSplitResult_, Output::VideoSplitResult) };
          inline Output::VideoSplitResult getVideoSplitResult() { DARABONBA_PTR_GET(videoSplitResult_, Output::VideoSplitResult) };
          inline Output& setVideoSplitResult(const Output::VideoSplitResult & videoSplitResult) { DARABONBA_PTR_SET_VALUE(videoSplitResult_, videoSplitResult) };
          inline Output& setVideoSplitResult(Output::VideoSplitResult && videoSplitResult) { DARABONBA_PTR_SET_RVALUE(videoSplitResult_, videoSplitResult) };


        protected:
          shared_ptr<Output::VideoSplitResult> videoSplitResult_ {};
        };

        virtual bool empty() const override { return this->output_ == nullptr
        && this->usage_ == nullptr; };
        // output Field Functions 
        bool hasOutput() const { return this->output_ != nullptr;};
        void deleteOutput() { this->output_ = nullptr;};
        inline const Payload::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, Payload::Output) };
        inline Payload::Output getOutput() { DARABONBA_PTR_GET(output_, Payload::Output) };
        inline Payload& setOutput(const Payload::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
        inline Payload& setOutput(Payload::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline const Payload::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, Payload::Usage) };
        inline Payload::Usage getUsage() { DARABONBA_PTR_GET(usage_, Payload::Usage) };
        inline Payload& setUsage(const Payload::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
        inline Payload& setUsage(Payload::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


      protected:
        shared_ptr<Payload::Output> output_ {};
        shared_ptr<Payload::Usage> usage_ {};
      };

      class Header : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Header& obj) { 
          DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(event, event_);
          DARABONBA_PTR_TO_JSON(eventInfo, eventInfo_);
          DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(taskId, taskId_);
          DARABONBA_PTR_TO_JSON(traceId, traceId_);
        };
        friend void from_json(const Darabonba::Json& j, Header& obj) { 
          DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(event, event_);
          DARABONBA_PTR_FROM_JSON(eventInfo, eventInfo_);
          DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(taskId, taskId_);
          DARABONBA_PTR_FROM_JSON(traceId, traceId_);
        };
        Header() = default ;
        Header(const Header &) = default ;
        Header(Header &&) = default ;
        Header(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Header() = default ;
        Header& operator=(const Header &) = default ;
        Header& operator=(Header &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->event_ == nullptr && this->eventInfo_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr
        && this->traceId_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline Header& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline Header& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // event Field Functions 
        bool hasEvent() const { return this->event_ != nullptr;};
        void deleteEvent() { this->event_ = nullptr;};
        inline string getEvent() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
        inline Header& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


        // eventInfo Field Functions 
        bool hasEventInfo() const { return this->eventInfo_ != nullptr;};
        void deleteEventInfo() { this->eventInfo_ = nullptr;};
        inline string getEventInfo() const { DARABONBA_PTR_GET_DEFAULT(eventInfo_, "") };
        inline Header& setEventInfo(string eventInfo) { DARABONBA_PTR_SET_VALUE(eventInfo_, eventInfo) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Header& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Header& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // traceId Field Functions 
        bool hasTraceId() const { return this->traceId_ != nullptr;};
        void deleteTraceId() { this->traceId_ = nullptr;};
        inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
        inline Header& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


      protected:
        shared_ptr<string> errorCode_ {};
        shared_ptr<string> errorMessage_ {};
        shared_ptr<string> event_ {};
        shared_ptr<string> eventInfo_ {};
        shared_ptr<string> sessionId_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<string> traceId_ {};
      };

      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->header_ == nullptr && this->payload_ == nullptr && this->taskId_ == nullptr && this->taskRunInfo_ == nullptr && this->taskStatus_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // header Field Functions 
      bool hasHeader() const { return this->header_ != nullptr;};
      void deleteHeader() { this->header_ = nullptr;};
      inline const Data::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, Data::Header) };
      inline Data::Header getHeader() { DARABONBA_PTR_GET(header_, Data::Header) };
      inline Data& setHeader(const Data::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
      inline Data& setHeader(Data::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


      // payload Field Functions 
      bool hasPayload() const { return this->payload_ != nullptr;};
      void deletePayload() { this->payload_ = nullptr;};
      inline const Data::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, Data::Payload) };
      inline Data::Payload getPayload() { DARABONBA_PTR_GET(payload_, Data::Payload) };
      inline Data& setPayload(const Data::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
      inline Data& setPayload(Data::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskRunInfo Field Functions 
      bool hasTaskRunInfo() const { return this->taskRunInfo_ != nullptr;};
      void deleteTaskRunInfo() { this->taskRunInfo_ = nullptr;};
      inline const Data::TaskRunInfo & getTaskRunInfo() const { DARABONBA_PTR_GET_CONST(taskRunInfo_, Data::TaskRunInfo) };
      inline Data::TaskRunInfo getTaskRunInfo() { DARABONBA_PTR_GET(taskRunInfo_, Data::TaskRunInfo) };
      inline Data& setTaskRunInfo(const Data::TaskRunInfo & taskRunInfo) { DARABONBA_PTR_SET_VALUE(taskRunInfo_, taskRunInfo) };
      inline Data& setTaskRunInfo(Data::TaskRunInfo && taskRunInfo) { DARABONBA_PTR_SET_RVALUE(taskRunInfo_, taskRunInfo) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline Data& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      shared_ptr<string> errorMessage_ {};
      shared_ptr<Data::Header> header_ {};
      shared_ptr<Data::Payload> payload_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<Data::TaskRunInfo> taskRunInfo_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetVideoDetectShotTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetVideoDetectShotTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetVideoDetectShotTaskResponseBody::Data) };
    inline GetVideoDetectShotTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetVideoDetectShotTaskResponseBody::Data) };
    inline GetVideoDetectShotTaskResponseBody& setData(const GetVideoDetectShotTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetVideoDetectShotTaskResponseBody& setData(GetVideoDetectShotTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetVideoDetectShotTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVideoDetectShotTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoDetectShotTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetVideoDetectShotTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetVideoDetectShotTaskResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
