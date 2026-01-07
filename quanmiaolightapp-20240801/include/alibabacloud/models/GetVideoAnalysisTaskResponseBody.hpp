// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOANALYSISTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class GetVideoAnalysisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetVideoAnalysisTaskResponseBody() = default ;
    GetVideoAnalysisTaskResponseBody(const GetVideoAnalysisTaskResponseBody &) = default ;
    GetVideoAnalysisTaskResponseBody(GetVideoAnalysisTaskResponseBody &&) = default ;
    GetVideoAnalysisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoAnalysisTaskResponseBody() = default ;
    GetVideoAnalysisTaskResponseBody& operator=(const GetVideoAnalysisTaskResponseBody &) = default ;
    GetVideoAnalysisTaskResponseBody& operator=(GetVideoAnalysisTaskResponseBody &&) = default ;
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
            DARABONBA_PTR_TO_JSON(addDatasetDocumentsResult, addDatasetDocumentsResult_);
            DARABONBA_PTR_TO_JSON(resultJsonFileUrl, resultJsonFileUrl_);
            DARABONBA_PTR_TO_JSON(videoAnalysisResult, videoAnalysisResult_);
            DARABONBA_PTR_TO_JSON(videoCalculatorResult, videoCalculatorResult_);
            DARABONBA_PTR_TO_JSON(videoCaptionResult, videoCaptionResult_);
            DARABONBA_PTR_TO_JSON(videoGenerateResult, videoGenerateResult_);
            DARABONBA_PTR_TO_JSON(videoGenerateResults, videoGenerateResults_);
            DARABONBA_PTR_TO_JSON(videoMindMappingGenerateResult, videoMindMappingGenerateResult_);
            DARABONBA_PTR_TO_JSON(videoRoleRecognitionResult, videoRoleRecognitionResult_);
            DARABONBA_PTR_TO_JSON(videoTitleGenerateResult, videoTitleGenerateResult_);
          };
          friend void from_json(const Darabonba::Json& j, Output& obj) { 
            DARABONBA_PTR_FROM_JSON(addDatasetDocumentsResult, addDatasetDocumentsResult_);
            DARABONBA_PTR_FROM_JSON(resultJsonFileUrl, resultJsonFileUrl_);
            DARABONBA_PTR_FROM_JSON(videoAnalysisResult, videoAnalysisResult_);
            DARABONBA_PTR_FROM_JSON(videoCalculatorResult, videoCalculatorResult_);
            DARABONBA_PTR_FROM_JSON(videoCaptionResult, videoCaptionResult_);
            DARABONBA_PTR_FROM_JSON(videoGenerateResult, videoGenerateResult_);
            DARABONBA_PTR_FROM_JSON(videoGenerateResults, videoGenerateResults_);
            DARABONBA_PTR_FROM_JSON(videoMindMappingGenerateResult, videoMindMappingGenerateResult_);
            DARABONBA_PTR_FROM_JSON(videoRoleRecognitionResult, videoRoleRecognitionResult_);
            DARABONBA_PTR_FROM_JSON(videoTitleGenerateResult, videoTitleGenerateResult_);
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
          class VideoTitleGenerateResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoTitleGenerateResult& obj) { 
              DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_TO_JSON(text, text_);
              DARABONBA_PTR_TO_JSON(usage, usage_);
            };
            friend void from_json(const Darabonba::Json& j, VideoTitleGenerateResult& obj) { 
              DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_FROM_JSON(text, text_);
              DARABONBA_PTR_FROM_JSON(usage, usage_);
            };
            VideoTitleGenerateResult() = default ;
            VideoTitleGenerateResult(const VideoTitleGenerateResult &) = default ;
            VideoTitleGenerateResult(VideoTitleGenerateResult &&) = default ;
            VideoTitleGenerateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoTitleGenerateResult() = default ;
            VideoTitleGenerateResult& operator=(const VideoTitleGenerateResult &) = default ;
            VideoTitleGenerateResult& operator=(VideoTitleGenerateResult &&) = default ;
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

            virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->text_ == nullptr && this->usage_ == nullptr; };
            // generateFinished Field Functions 
            bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
            void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
            inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
            inline VideoTitleGenerateResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline VideoTitleGenerateResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // usage Field Functions 
            bool hasUsage() const { return this->usage_ != nullptr;};
            void deleteUsage() { this->usage_ = nullptr;};
            inline const VideoTitleGenerateResult::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, VideoTitleGenerateResult::Usage) };
            inline VideoTitleGenerateResult::Usage getUsage() { DARABONBA_PTR_GET(usage_, VideoTitleGenerateResult::Usage) };
            inline VideoTitleGenerateResult& setUsage(const VideoTitleGenerateResult::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
            inline VideoTitleGenerateResult& setUsage(VideoTitleGenerateResult::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


          protected:
            shared_ptr<bool> generateFinished_ {};
            shared_ptr<string> text_ {};
            shared_ptr<VideoTitleGenerateResult::Usage> usage_ {};
          };

          class VideoRoleRecognitionResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoRoleRecognitionResult& obj) { 
              DARABONBA_PTR_TO_JSON(videoRoles, videoRoles_);
            };
            friend void from_json(const Darabonba::Json& j, VideoRoleRecognitionResult& obj) { 
              DARABONBA_PTR_FROM_JSON(videoRoles, videoRoles_);
            };
            VideoRoleRecognitionResult() = default ;
            VideoRoleRecognitionResult(const VideoRoleRecognitionResult &) = default ;
            VideoRoleRecognitionResult(VideoRoleRecognitionResult &&) = default ;
            VideoRoleRecognitionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoRoleRecognitionResult() = default ;
            VideoRoleRecognitionResult& operator=(const VideoRoleRecognitionResult &) = default ;
            VideoRoleRecognitionResult& operator=(VideoRoleRecognitionResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class VideoRoles : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const VideoRoles& obj) { 
                DARABONBA_PTR_TO_JSON(isAutoRecognition, isAutoRecognition_);
                DARABONBA_PTR_TO_JSON(ratio, ratio_);
                DARABONBA_PTR_TO_JSON(roleInfo, roleInfo_);
                DARABONBA_PTR_TO_JSON(roleName, roleName_);
                DARABONBA_PTR_TO_JSON(timeIntervals, timeIntervals_);
              };
              friend void from_json(const Darabonba::Json& j, VideoRoles& obj) { 
                DARABONBA_PTR_FROM_JSON(isAutoRecognition, isAutoRecognition_);
                DARABONBA_PTR_FROM_JSON(ratio, ratio_);
                DARABONBA_PTR_FROM_JSON(roleInfo, roleInfo_);
                DARABONBA_PTR_FROM_JSON(roleName, roleName_);
                DARABONBA_PTR_FROM_JSON(timeIntervals, timeIntervals_);
              };
              VideoRoles() = default ;
              VideoRoles(const VideoRoles &) = default ;
              VideoRoles(VideoRoles &&) = default ;
              VideoRoles(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~VideoRoles() = default ;
              VideoRoles& operator=(const VideoRoles &) = default ;
              VideoRoles& operator=(VideoRoles &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class TimeIntervals : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const TimeIntervals& obj) { 
                  DARABONBA_PTR_TO_JSON(endTime, endTime_);
                  DARABONBA_PTR_TO_JSON(startTime, startTime_);
                  DARABONBA_PTR_TO_JSON(timestamp, timestamp_);
                  DARABONBA_PTR_TO_JSON(url, url_);
                };
                friend void from_json(const Darabonba::Json& j, TimeIntervals& obj) { 
                  DARABONBA_PTR_FROM_JSON(endTime, endTime_);
                  DARABONBA_PTR_FROM_JSON(startTime, startTime_);
                  DARABONBA_PTR_FROM_JSON(timestamp, timestamp_);
                  DARABONBA_PTR_FROM_JSON(url, url_);
                };
                TimeIntervals() = default ;
                TimeIntervals(const TimeIntervals &) = default ;
                TimeIntervals(TimeIntervals &&) = default ;
                TimeIntervals(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~TimeIntervals() = default ;
                TimeIntervals& operator=(const TimeIntervals &) = default ;
                TimeIntervals& operator=(TimeIntervals &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->timestamp_ == nullptr && this->url_ == nullptr; };
                // endTime Field Functions 
                bool hasEndTime() const { return this->endTime_ != nullptr;};
                void deleteEndTime() { this->endTime_ = nullptr;};
                inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
                inline TimeIntervals& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


                // startTime Field Functions 
                bool hasStartTime() const { return this->startTime_ != nullptr;};
                void deleteStartTime() { this->startTime_ = nullptr;};
                inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
                inline TimeIntervals& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


                // timestamp Field Functions 
                bool hasTimestamp() const { return this->timestamp_ != nullptr;};
                void deleteTimestamp() { this->timestamp_ = nullptr;};
                inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
                inline TimeIntervals& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


                // url Field Functions 
                bool hasUrl() const { return this->url_ != nullptr;};
                void deleteUrl() { this->url_ = nullptr;};
                inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
                inline TimeIntervals& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


              protected:
                shared_ptr<int64_t> endTime_ {};
                shared_ptr<int64_t> startTime_ {};
                shared_ptr<int64_t> timestamp_ {};
                shared_ptr<string> url_ {};
              };

              virtual bool empty() const override { return this->isAutoRecognition_ == nullptr
        && this->ratio_ == nullptr && this->roleInfo_ == nullptr && this->roleName_ == nullptr && this->timeIntervals_ == nullptr; };
              // isAutoRecognition Field Functions 
              bool hasIsAutoRecognition() const { return this->isAutoRecognition_ != nullptr;};
              void deleteIsAutoRecognition() { this->isAutoRecognition_ = nullptr;};
              inline bool getIsAutoRecognition() const { DARABONBA_PTR_GET_DEFAULT(isAutoRecognition_, false) };
              inline VideoRoles& setIsAutoRecognition(bool isAutoRecognition) { DARABONBA_PTR_SET_VALUE(isAutoRecognition_, isAutoRecognition) };


              // ratio Field Functions 
              bool hasRatio() const { return this->ratio_ != nullptr;};
              void deleteRatio() { this->ratio_ = nullptr;};
              inline float getRatio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, 0.0) };
              inline VideoRoles& setRatio(float ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


              // roleInfo Field Functions 
              bool hasRoleInfo() const { return this->roleInfo_ != nullptr;};
              void deleteRoleInfo() { this->roleInfo_ = nullptr;};
              inline string getRoleInfo() const { DARABONBA_PTR_GET_DEFAULT(roleInfo_, "") };
              inline VideoRoles& setRoleInfo(string roleInfo) { DARABONBA_PTR_SET_VALUE(roleInfo_, roleInfo) };


              // roleName Field Functions 
              bool hasRoleName() const { return this->roleName_ != nullptr;};
              void deleteRoleName() { this->roleName_ = nullptr;};
              inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
              inline VideoRoles& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


              // timeIntervals Field Functions 
              bool hasTimeIntervals() const { return this->timeIntervals_ != nullptr;};
              void deleteTimeIntervals() { this->timeIntervals_ = nullptr;};
              inline const vector<VideoRoles::TimeIntervals> & getTimeIntervals() const { DARABONBA_PTR_GET_CONST(timeIntervals_, vector<VideoRoles::TimeIntervals>) };
              inline vector<VideoRoles::TimeIntervals> getTimeIntervals() { DARABONBA_PTR_GET(timeIntervals_, vector<VideoRoles::TimeIntervals>) };
              inline VideoRoles& setTimeIntervals(const vector<VideoRoles::TimeIntervals> & timeIntervals) { DARABONBA_PTR_SET_VALUE(timeIntervals_, timeIntervals) };
              inline VideoRoles& setTimeIntervals(vector<VideoRoles::TimeIntervals> && timeIntervals) { DARABONBA_PTR_SET_RVALUE(timeIntervals_, timeIntervals) };


            protected:
              shared_ptr<bool> isAutoRecognition_ {};
              shared_ptr<float> ratio_ {};
              shared_ptr<string> roleInfo_ {};
              shared_ptr<string> roleName_ {};
              shared_ptr<vector<VideoRoles::TimeIntervals>> timeIntervals_ {};
            };

            virtual bool empty() const override { return this->videoRoles_ == nullptr; };
            // videoRoles Field Functions 
            bool hasVideoRoles() const { return this->videoRoles_ != nullptr;};
            void deleteVideoRoles() { this->videoRoles_ = nullptr;};
            inline const vector<VideoRoleRecognitionResult::VideoRoles> & getVideoRoles() const { DARABONBA_PTR_GET_CONST(videoRoles_, vector<VideoRoleRecognitionResult::VideoRoles>) };
            inline vector<VideoRoleRecognitionResult::VideoRoles> getVideoRoles() { DARABONBA_PTR_GET(videoRoles_, vector<VideoRoleRecognitionResult::VideoRoles>) };
            inline VideoRoleRecognitionResult& setVideoRoles(const vector<VideoRoleRecognitionResult::VideoRoles> & videoRoles) { DARABONBA_PTR_SET_VALUE(videoRoles_, videoRoles) };
            inline VideoRoleRecognitionResult& setVideoRoles(vector<VideoRoleRecognitionResult::VideoRoles> && videoRoles) { DARABONBA_PTR_SET_RVALUE(videoRoles_, videoRoles) };


          protected:
            shared_ptr<vector<VideoRoleRecognitionResult::VideoRoles>> videoRoles_ {};
          };

          class VideoMindMappingGenerateResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoMindMappingGenerateResult& obj) { 
              DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_TO_JSON(text, text_);
              DARABONBA_PTR_TO_JSON(usage, usage_);
              DARABONBA_PTR_TO_JSON(videoMindMappings, videoMindMappings_);
            };
            friend void from_json(const Darabonba::Json& j, VideoMindMappingGenerateResult& obj) { 
              DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_FROM_JSON(text, text_);
              DARABONBA_PTR_FROM_JSON(usage, usage_);
              DARABONBA_PTR_FROM_JSON(videoMindMappings, videoMindMappings_);
            };
            VideoMindMappingGenerateResult() = default ;
            VideoMindMappingGenerateResult(const VideoMindMappingGenerateResult &) = default ;
            VideoMindMappingGenerateResult(VideoMindMappingGenerateResult &&) = default ;
            VideoMindMappingGenerateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoMindMappingGenerateResult() = default ;
            VideoMindMappingGenerateResult& operator=(const VideoMindMappingGenerateResult &) = default ;
            VideoMindMappingGenerateResult& operator=(VideoMindMappingGenerateResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class VideoMindMappings : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const VideoMindMappings& obj) { 
                DARABONBA_PTR_TO_JSON(childNodes, childNodes_);
                DARABONBA_PTR_TO_JSON(name, name_);
              };
              friend void from_json(const Darabonba::Json& j, VideoMindMappings& obj) { 
                DARABONBA_PTR_FROM_JSON(childNodes, childNodes_);
                DARABONBA_PTR_FROM_JSON(name, name_);
              };
              VideoMindMappings() = default ;
              VideoMindMappings(const VideoMindMappings &) = default ;
              VideoMindMappings(VideoMindMappings &&) = default ;
              VideoMindMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~VideoMindMappings() = default ;
              VideoMindMappings& operator=(const VideoMindMappings &) = default ;
              VideoMindMappings& operator=(VideoMindMappings &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class ChildNodes : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const ChildNodes& obj) { 
                  DARABONBA_PTR_TO_JSON(childNodes, childNodes_);
                  DARABONBA_PTR_TO_JSON(name, name_);
                };
                friend void from_json(const Darabonba::Json& j, ChildNodes& obj) { 
                  DARABONBA_PTR_FROM_JSON(childNodes, childNodes_);
                  DARABONBA_PTR_FROM_JSON(name, name_);
                };
                ChildNodes() = default ;
                ChildNodes(const ChildNodes &) = default ;
                ChildNodes(ChildNodes &&) = default ;
                ChildNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~ChildNodes() = default ;
                ChildNodes& operator=(const ChildNodes &) = default ;
                ChildNodes& operator=(ChildNodes &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                class ChildNodesItem : public Darabonba::Model {
                public:
                  friend void to_json(Darabonba::Json& j, const ChildNodesItem& obj) { 
                    DARABONBA_PTR_TO_JSON(name, name_);
                  };
                  friend void from_json(const Darabonba::Json& j, ChildNodesItem& obj) { 
                    DARABONBA_PTR_FROM_JSON(name, name_);
                  };
                  ChildNodesItem() = default ;
                  ChildNodesItem(const ChildNodesItem &) = default ;
                  ChildNodesItem(ChildNodesItem &&) = default ;
                  ChildNodesItem(const Darabonba::Json & obj) { from_json(obj, *this); };
                  virtual ~ChildNodesItem() = default ;
                  ChildNodesItem& operator=(const ChildNodesItem &) = default ;
                  ChildNodesItem& operator=(ChildNodesItem &&) = default ;
                  virtual void validate() const override {
                  };
                  virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                  virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                  virtual bool empty() const override { return this->name_ == nullptr; };
                  // name Field Functions 
                  bool hasName() const { return this->name_ != nullptr;};
                  void deleteName() { this->name_ = nullptr;};
                  inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                  inline ChildNodesItem& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                protected:
                  shared_ptr<string> name_ {};
                };

                virtual bool empty() const override { return this->childNodes_ == nullptr
        && this->name_ == nullptr; };
                // childNodes Field Functions 
                bool hasChildNodes() const { return this->childNodes_ != nullptr;};
                void deleteChildNodes() { this->childNodes_ = nullptr;};
                inline const vector<ChildNodes::ChildNodesItem> & getChildNodes() const { DARABONBA_PTR_GET_CONST(childNodes_, vector<ChildNodes::ChildNodesItem>) };
                inline vector<ChildNodes::ChildNodesItem> getChildNodes() { DARABONBA_PTR_GET(childNodes_, vector<ChildNodes::ChildNodesItem>) };
                inline ChildNodes& setChildNodes(const vector<ChildNodes::ChildNodesItem> & childNodes) { DARABONBA_PTR_SET_VALUE(childNodes_, childNodes) };
                inline ChildNodes& setChildNodes(vector<ChildNodes::ChildNodesItem> && childNodes) { DARABONBA_PTR_SET_RVALUE(childNodes_, childNodes) };


                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline ChildNodes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              protected:
                shared_ptr<vector<ChildNodes::ChildNodesItem>> childNodes_ {};
                shared_ptr<string> name_ {};
              };

              virtual bool empty() const override { return this->childNodes_ == nullptr
        && this->name_ == nullptr; };
              // childNodes Field Functions 
              bool hasChildNodes() const { return this->childNodes_ != nullptr;};
              void deleteChildNodes() { this->childNodes_ = nullptr;};
              inline const vector<VideoMindMappings::ChildNodes> & getChildNodes() const { DARABONBA_PTR_GET_CONST(childNodes_, vector<VideoMindMappings::ChildNodes>) };
              inline vector<VideoMindMappings::ChildNodes> getChildNodes() { DARABONBA_PTR_GET(childNodes_, vector<VideoMindMappings::ChildNodes>) };
              inline VideoMindMappings& setChildNodes(const vector<VideoMindMappings::ChildNodes> & childNodes) { DARABONBA_PTR_SET_VALUE(childNodes_, childNodes) };
              inline VideoMindMappings& setChildNodes(vector<VideoMindMappings::ChildNodes> && childNodes) { DARABONBA_PTR_SET_RVALUE(childNodes_, childNodes) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline VideoMindMappings& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            protected:
              shared_ptr<vector<VideoMindMappings::ChildNodes>> childNodes_ {};
              shared_ptr<string> name_ {};
            };

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

            virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->text_ == nullptr && this->usage_ == nullptr && this->videoMindMappings_ == nullptr; };
            // generateFinished Field Functions 
            bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
            void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
            inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
            inline VideoMindMappingGenerateResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline VideoMindMappingGenerateResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // usage Field Functions 
            bool hasUsage() const { return this->usage_ != nullptr;};
            void deleteUsage() { this->usage_ = nullptr;};
            inline const VideoMindMappingGenerateResult::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, VideoMindMappingGenerateResult::Usage) };
            inline VideoMindMappingGenerateResult::Usage getUsage() { DARABONBA_PTR_GET(usage_, VideoMindMappingGenerateResult::Usage) };
            inline VideoMindMappingGenerateResult& setUsage(const VideoMindMappingGenerateResult::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
            inline VideoMindMappingGenerateResult& setUsage(VideoMindMappingGenerateResult::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


            // videoMindMappings Field Functions 
            bool hasVideoMindMappings() const { return this->videoMindMappings_ != nullptr;};
            void deleteVideoMindMappings() { this->videoMindMappings_ = nullptr;};
            inline const vector<VideoMindMappingGenerateResult::VideoMindMappings> & getVideoMindMappings() const { DARABONBA_PTR_GET_CONST(videoMindMappings_, vector<VideoMindMappingGenerateResult::VideoMindMappings>) };
            inline vector<VideoMindMappingGenerateResult::VideoMindMappings> getVideoMindMappings() { DARABONBA_PTR_GET(videoMindMappings_, vector<VideoMindMappingGenerateResult::VideoMindMappings>) };
            inline VideoMindMappingGenerateResult& setVideoMindMappings(const vector<VideoMindMappingGenerateResult::VideoMindMappings> & videoMindMappings) { DARABONBA_PTR_SET_VALUE(videoMindMappings_, videoMindMappings) };
            inline VideoMindMappingGenerateResult& setVideoMindMappings(vector<VideoMindMappingGenerateResult::VideoMindMappings> && videoMindMappings) { DARABONBA_PTR_SET_RVALUE(videoMindMappings_, videoMindMappings) };


          protected:
            shared_ptr<bool> generateFinished_ {};
            shared_ptr<string> text_ {};
            shared_ptr<VideoMindMappingGenerateResult::Usage> usage_ {};
            shared_ptr<vector<VideoMindMappingGenerateResult::VideoMindMappings>> videoMindMappings_ {};
          };

          class VideoGenerateResults : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoGenerateResults& obj) { 
              DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(modelId, modelId_);
              DARABONBA_PTR_TO_JSON(reasonText, reasonText_);
              DARABONBA_PTR_TO_JSON(text, text_);
              DARABONBA_PTR_TO_JSON(usage, usage_);
            };
            friend void from_json(const Darabonba::Json& j, VideoGenerateResults& obj) { 
              DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(modelId, modelId_);
              DARABONBA_PTR_FROM_JSON(reasonText, reasonText_);
              DARABONBA_PTR_FROM_JSON(text, text_);
              DARABONBA_PTR_FROM_JSON(usage, usage_);
            };
            VideoGenerateResults() = default ;
            VideoGenerateResults(const VideoGenerateResults &) = default ;
            VideoGenerateResults(VideoGenerateResults &&) = default ;
            VideoGenerateResults(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoGenerateResults() = default ;
            VideoGenerateResults& operator=(const VideoGenerateResults &) = default ;
            VideoGenerateResults& operator=(VideoGenerateResults &&) = default ;
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

            virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->index_ == nullptr && this->modelId_ == nullptr && this->reasonText_ == nullptr && this->text_ == nullptr && this->usage_ == nullptr; };
            // generateFinished Field Functions 
            bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
            void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
            inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
            inline VideoGenerateResults& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline VideoGenerateResults& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // modelId Field Functions 
            bool hasModelId() const { return this->modelId_ != nullptr;};
            void deleteModelId() { this->modelId_ = nullptr;};
            inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
            inline VideoGenerateResults& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


            // reasonText Field Functions 
            bool hasReasonText() const { return this->reasonText_ != nullptr;};
            void deleteReasonText() { this->reasonText_ = nullptr;};
            inline string getReasonText() const { DARABONBA_PTR_GET_DEFAULT(reasonText_, "") };
            inline VideoGenerateResults& setReasonText(string reasonText) { DARABONBA_PTR_SET_VALUE(reasonText_, reasonText) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline VideoGenerateResults& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // usage Field Functions 
            bool hasUsage() const { return this->usage_ != nullptr;};
            void deleteUsage() { this->usage_ = nullptr;};
            inline const VideoGenerateResults::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, VideoGenerateResults::Usage) };
            inline VideoGenerateResults::Usage getUsage() { DARABONBA_PTR_GET(usage_, VideoGenerateResults::Usage) };
            inline VideoGenerateResults& setUsage(const VideoGenerateResults::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
            inline VideoGenerateResults& setUsage(VideoGenerateResults::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


          protected:
            shared_ptr<bool> generateFinished_ {};
            shared_ptr<int32_t> index_ {};
            shared_ptr<string> modelId_ {};
            shared_ptr<string> reasonText_ {};
            shared_ptr<string> text_ {};
            shared_ptr<VideoGenerateResults::Usage> usage_ {};
          };

          class VideoGenerateResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoGenerateResult& obj) { 
              DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(modelId, modelId_);
              DARABONBA_PTR_TO_JSON(modelReduce, modelReduce_);
              DARABONBA_PTR_TO_JSON(reasonText, reasonText_);
              DARABONBA_PTR_TO_JSON(text, text_);
              DARABONBA_PTR_TO_JSON(usage, usage_);
            };
            friend void from_json(const Darabonba::Json& j, VideoGenerateResult& obj) { 
              DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(modelId, modelId_);
              DARABONBA_PTR_FROM_JSON(modelReduce, modelReduce_);
              DARABONBA_PTR_FROM_JSON(reasonText, reasonText_);
              DARABONBA_PTR_FROM_JSON(text, text_);
              DARABONBA_PTR_FROM_JSON(usage, usage_);
            };
            VideoGenerateResult() = default ;
            VideoGenerateResult(const VideoGenerateResult &) = default ;
            VideoGenerateResult(VideoGenerateResult &&) = default ;
            VideoGenerateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoGenerateResult() = default ;
            VideoGenerateResult& operator=(const VideoGenerateResult &) = default ;
            VideoGenerateResult& operator=(VideoGenerateResult &&) = default ;
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

            virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->index_ == nullptr && this->modelId_ == nullptr && this->modelReduce_ == nullptr && this->reasonText_ == nullptr && this->text_ == nullptr
        && this->usage_ == nullptr; };
            // generateFinished Field Functions 
            bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
            void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
            inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
            inline VideoGenerateResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline VideoGenerateResult& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // modelId Field Functions 
            bool hasModelId() const { return this->modelId_ != nullptr;};
            void deleteModelId() { this->modelId_ = nullptr;};
            inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
            inline VideoGenerateResult& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


            // modelReduce Field Functions 
            bool hasModelReduce() const { return this->modelReduce_ != nullptr;};
            void deleteModelReduce() { this->modelReduce_ = nullptr;};
            inline bool getModelReduce() const { DARABONBA_PTR_GET_DEFAULT(modelReduce_, false) };
            inline VideoGenerateResult& setModelReduce(bool modelReduce) { DARABONBA_PTR_SET_VALUE(modelReduce_, modelReduce) };


            // reasonText Field Functions 
            bool hasReasonText() const { return this->reasonText_ != nullptr;};
            void deleteReasonText() { this->reasonText_ = nullptr;};
            inline string getReasonText() const { DARABONBA_PTR_GET_DEFAULT(reasonText_, "") };
            inline VideoGenerateResult& setReasonText(string reasonText) { DARABONBA_PTR_SET_VALUE(reasonText_, reasonText) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline VideoGenerateResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // usage Field Functions 
            bool hasUsage() const { return this->usage_ != nullptr;};
            void deleteUsage() { this->usage_ = nullptr;};
            inline const VideoGenerateResult::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, VideoGenerateResult::Usage) };
            inline VideoGenerateResult::Usage getUsage() { DARABONBA_PTR_GET(usage_, VideoGenerateResult::Usage) };
            inline VideoGenerateResult& setUsage(const VideoGenerateResult::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
            inline VideoGenerateResult& setUsage(VideoGenerateResult::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


          protected:
            shared_ptr<bool> generateFinished_ {};
            shared_ptr<int32_t> index_ {};
            shared_ptr<string> modelId_ {};
            shared_ptr<bool> modelReduce_ {};
            shared_ptr<string> reasonText_ {};
            shared_ptr<string> text_ {};
            shared_ptr<VideoGenerateResult::Usage> usage_ {};
          };

          class VideoCaptionResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoCaptionResult& obj) { 
              DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_TO_JSON(videoCaptions, videoCaptions_);
            };
            friend void from_json(const Darabonba::Json& j, VideoCaptionResult& obj) { 
              DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_FROM_JSON(videoCaptions, videoCaptions_);
            };
            VideoCaptionResult() = default ;
            VideoCaptionResult(const VideoCaptionResult &) = default ;
            VideoCaptionResult(VideoCaptionResult &&) = default ;
            VideoCaptionResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoCaptionResult() = default ;
            VideoCaptionResult& operator=(const VideoCaptionResult &) = default ;
            VideoCaptionResult& operator=(VideoCaptionResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class VideoCaptions : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const VideoCaptions& obj) { 
                DARABONBA_PTR_TO_JSON(endTime, endTime_);
                DARABONBA_PTR_TO_JSON(endTimeFormat, endTimeFormat_);
                DARABONBA_PTR_TO_JSON(speaker, speaker_);
                DARABONBA_PTR_TO_JSON(startTime, startTime_);
                DARABONBA_PTR_TO_JSON(startTimeFormat, startTimeFormat_);
                DARABONBA_PTR_TO_JSON(text, text_);
              };
              friend void from_json(const Darabonba::Json& j, VideoCaptions& obj) { 
                DARABONBA_PTR_FROM_JSON(endTime, endTime_);
                DARABONBA_PTR_FROM_JSON(endTimeFormat, endTimeFormat_);
                DARABONBA_PTR_FROM_JSON(speaker, speaker_);
                DARABONBA_PTR_FROM_JSON(startTime, startTime_);
                DARABONBA_PTR_FROM_JSON(startTimeFormat, startTimeFormat_);
                DARABONBA_PTR_FROM_JSON(text, text_);
              };
              VideoCaptions() = default ;
              VideoCaptions(const VideoCaptions &) = default ;
              VideoCaptions(VideoCaptions &&) = default ;
              VideoCaptions(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~VideoCaptions() = default ;
              VideoCaptions& operator=(const VideoCaptions &) = default ;
              VideoCaptions& operator=(VideoCaptions &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->endTime_ == nullptr
        && this->endTimeFormat_ == nullptr && this->speaker_ == nullptr && this->startTime_ == nullptr && this->startTimeFormat_ == nullptr && this->text_ == nullptr; };
              // endTime Field Functions 
              bool hasEndTime() const { return this->endTime_ != nullptr;};
              void deleteEndTime() { this->endTime_ = nullptr;};
              inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
              inline VideoCaptions& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


              // endTimeFormat Field Functions 
              bool hasEndTimeFormat() const { return this->endTimeFormat_ != nullptr;};
              void deleteEndTimeFormat() { this->endTimeFormat_ = nullptr;};
              inline string getEndTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(endTimeFormat_, "") };
              inline VideoCaptions& setEndTimeFormat(string endTimeFormat) { DARABONBA_PTR_SET_VALUE(endTimeFormat_, endTimeFormat) };


              // speaker Field Functions 
              bool hasSpeaker() const { return this->speaker_ != nullptr;};
              void deleteSpeaker() { this->speaker_ = nullptr;};
              inline string getSpeaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
              inline VideoCaptions& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
              inline VideoCaptions& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


              // startTimeFormat Field Functions 
              bool hasStartTimeFormat() const { return this->startTimeFormat_ != nullptr;};
              void deleteStartTimeFormat() { this->startTimeFormat_ = nullptr;};
              inline string getStartTimeFormat() const { DARABONBA_PTR_GET_DEFAULT(startTimeFormat_, "") };
              inline VideoCaptions& setStartTimeFormat(string startTimeFormat) { DARABONBA_PTR_SET_VALUE(startTimeFormat_, startTimeFormat) };


              // text Field Functions 
              bool hasText() const { return this->text_ != nullptr;};
              void deleteText() { this->text_ = nullptr;};
              inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
              inline VideoCaptions& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            protected:
              shared_ptr<int64_t> endTime_ {};
              shared_ptr<string> endTimeFormat_ {};
              shared_ptr<string> speaker_ {};
              shared_ptr<int64_t> startTime_ {};
              shared_ptr<string> startTimeFormat_ {};
              shared_ptr<string> text_ {};
            };

            virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->videoCaptions_ == nullptr; };
            // generateFinished Field Functions 
            bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
            void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
            inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
            inline VideoCaptionResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


            // videoCaptions Field Functions 
            bool hasVideoCaptions() const { return this->videoCaptions_ != nullptr;};
            void deleteVideoCaptions() { this->videoCaptions_ = nullptr;};
            inline const vector<VideoCaptionResult::VideoCaptions> & getVideoCaptions() const { DARABONBA_PTR_GET_CONST(videoCaptions_, vector<VideoCaptionResult::VideoCaptions>) };
            inline vector<VideoCaptionResult::VideoCaptions> getVideoCaptions() { DARABONBA_PTR_GET(videoCaptions_, vector<VideoCaptionResult::VideoCaptions>) };
            inline VideoCaptionResult& setVideoCaptions(const vector<VideoCaptionResult::VideoCaptions> & videoCaptions) { DARABONBA_PTR_SET_VALUE(videoCaptions_, videoCaptions) };
            inline VideoCaptionResult& setVideoCaptions(vector<VideoCaptionResult::VideoCaptions> && videoCaptions) { DARABONBA_PTR_SET_RVALUE(videoCaptions_, videoCaptions) };


          protected:
            shared_ptr<bool> generateFinished_ {};
            shared_ptr<vector<VideoCaptionResult::VideoCaptions>> videoCaptions_ {};
          };

          class VideoCalculatorResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoCalculatorResult& obj) { 
              DARABONBA_PTR_TO_JSON(items, items_);
            };
            friend void from_json(const Darabonba::Json& j, VideoCalculatorResult& obj) { 
              DARABONBA_PTR_FROM_JSON(items, items_);
            };
            VideoCalculatorResult() = default ;
            VideoCalculatorResult(const VideoCalculatorResult &) = default ;
            VideoCalculatorResult(VideoCalculatorResult &&) = default ;
            VideoCalculatorResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoCalculatorResult() = default ;
            VideoCalculatorResult& operator=(const VideoCalculatorResult &) = default ;
            VideoCalculatorResult& operator=(VideoCalculatorResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class Items : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Items& obj) { 
                DARABONBA_PTR_TO_JSON(inputExpense, inputExpense_);
                DARABONBA_PTR_TO_JSON(inputToken, inputToken_);
                DARABONBA_PTR_TO_JSON(name, name_);
                DARABONBA_PTR_TO_JSON(outputExpense, outputExpense_);
                DARABONBA_PTR_TO_JSON(outputToken, outputToken_);
                DARABONBA_PTR_TO_JSON(time, time_);
                DARABONBA_PTR_TO_JSON(timeExpense, timeExpense_);
                DARABONBA_PTR_TO_JSON(totalExpense, totalExpense_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, Items& obj) { 
                DARABONBA_PTR_FROM_JSON(inputExpense, inputExpense_);
                DARABONBA_PTR_FROM_JSON(inputToken, inputToken_);
                DARABONBA_PTR_FROM_JSON(name, name_);
                DARABONBA_PTR_FROM_JSON(outputExpense, outputExpense_);
                DARABONBA_PTR_FROM_JSON(outputToken, outputToken_);
                DARABONBA_PTR_FROM_JSON(time, time_);
                DARABONBA_PTR_FROM_JSON(timeExpense, timeExpense_);
                DARABONBA_PTR_FROM_JSON(totalExpense, totalExpense_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              Items() = default ;
              Items(const Items &) = default ;
              Items(Items &&) = default ;
              Items(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Items() = default ;
              Items& operator=(const Items &) = default ;
              Items& operator=(Items &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->inputExpense_ == nullptr
        && this->inputToken_ == nullptr && this->name_ == nullptr && this->outputExpense_ == nullptr && this->outputToken_ == nullptr && this->time_ == nullptr
        && this->timeExpense_ == nullptr && this->totalExpense_ == nullptr && this->type_ == nullptr; };
              // inputExpense Field Functions 
              bool hasInputExpense() const { return this->inputExpense_ != nullptr;};
              void deleteInputExpense() { this->inputExpense_ = nullptr;};
              inline double getInputExpense() const { DARABONBA_PTR_GET_DEFAULT(inputExpense_, 0.0) };
              inline Items& setInputExpense(double inputExpense) { DARABONBA_PTR_SET_VALUE(inputExpense_, inputExpense) };


              // inputToken Field Functions 
              bool hasInputToken() const { return this->inputToken_ != nullptr;};
              void deleteInputToken() { this->inputToken_ = nullptr;};
              inline int64_t getInputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, 0L) };
              inline Items& setInputToken(int64_t inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


              // name Field Functions 
              bool hasName() const { return this->name_ != nullptr;};
              void deleteName() { this->name_ = nullptr;};
              inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
              inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


              // outputExpense Field Functions 
              bool hasOutputExpense() const { return this->outputExpense_ != nullptr;};
              void deleteOutputExpense() { this->outputExpense_ = nullptr;};
              inline double getOutputExpense() const { DARABONBA_PTR_GET_DEFAULT(outputExpense_, 0.0) };
              inline Items& setOutputExpense(double outputExpense) { DARABONBA_PTR_SET_VALUE(outputExpense_, outputExpense) };


              // outputToken Field Functions 
              bool hasOutputToken() const { return this->outputToken_ != nullptr;};
              void deleteOutputToken() { this->outputToken_ = nullptr;};
              inline int64_t getOutputToken() const { DARABONBA_PTR_GET_DEFAULT(outputToken_, 0L) };
              inline Items& setOutputToken(int64_t outputToken) { DARABONBA_PTR_SET_VALUE(outputToken_, outputToken) };


              // time Field Functions 
              bool hasTime() const { return this->time_ != nullptr;};
              void deleteTime() { this->time_ = nullptr;};
              inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
              inline Items& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


              // timeExpense Field Functions 
              bool hasTimeExpense() const { return this->timeExpense_ != nullptr;};
              void deleteTimeExpense() { this->timeExpense_ = nullptr;};
              inline double getTimeExpense() const { DARABONBA_PTR_GET_DEFAULT(timeExpense_, 0.0) };
              inline Items& setTimeExpense(double timeExpense) { DARABONBA_PTR_SET_VALUE(timeExpense_, timeExpense) };


              // totalExpense Field Functions 
              bool hasTotalExpense() const { return this->totalExpense_ != nullptr;};
              void deleteTotalExpense() { this->totalExpense_ = nullptr;};
              inline double getTotalExpense() const { DARABONBA_PTR_GET_DEFAULT(totalExpense_, 0.0) };
              inline Items& setTotalExpense(double totalExpense) { DARABONBA_PTR_SET_VALUE(totalExpense_, totalExpense) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<double> inputExpense_ {};
              shared_ptr<int64_t> inputToken_ {};
              shared_ptr<string> name_ {};
              shared_ptr<double> outputExpense_ {};
              shared_ptr<int64_t> outputToken_ {};
              shared_ptr<int64_t> time_ {};
              shared_ptr<double> timeExpense_ {};
              shared_ptr<double> totalExpense_ {};
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->items_ == nullptr; };
            // items Field Functions 
            bool hasItems() const { return this->items_ != nullptr;};
            void deleteItems() { this->items_ = nullptr;};
            inline const vector<VideoCalculatorResult::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<VideoCalculatorResult::Items>) };
            inline vector<VideoCalculatorResult::Items> getItems() { DARABONBA_PTR_GET(items_, vector<VideoCalculatorResult::Items>) };
            inline VideoCalculatorResult& setItems(const vector<VideoCalculatorResult::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
            inline VideoCalculatorResult& setItems(vector<VideoCalculatorResult::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


          protected:
            shared_ptr<vector<VideoCalculatorResult::Items>> items_ {};
          };

          class VideoAnalysisResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VideoAnalysisResult& obj) { 
              DARABONBA_PTR_TO_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_TO_JSON(text, text_);
              DARABONBA_PTR_TO_JSON(usage, usage_);
              DARABONBA_PTR_TO_JSON(videoShotAnalysisResults, videoShotAnalysisResults_);
            };
            friend void from_json(const Darabonba::Json& j, VideoAnalysisResult& obj) { 
              DARABONBA_PTR_FROM_JSON(generateFinished, generateFinished_);
              DARABONBA_PTR_FROM_JSON(text, text_);
              DARABONBA_PTR_FROM_JSON(usage, usage_);
              DARABONBA_PTR_FROM_JSON(videoShotAnalysisResults, videoShotAnalysisResults_);
            };
            VideoAnalysisResult() = default ;
            VideoAnalysisResult(const VideoAnalysisResult &) = default ;
            VideoAnalysisResult(VideoAnalysisResult &&) = default ;
            VideoAnalysisResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VideoAnalysisResult() = default ;
            VideoAnalysisResult& operator=(const VideoAnalysisResult &) = default ;
            VideoAnalysisResult& operator=(VideoAnalysisResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class VideoShotAnalysisResults : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const VideoShotAnalysisResults& obj) { 
                DARABONBA_PTR_TO_JSON(endTime, endTime_);
                DARABONBA_PTR_TO_JSON(startTime, startTime_);
                DARABONBA_PTR_TO_JSON(text, text_);
              };
              friend void from_json(const Darabonba::Json& j, VideoShotAnalysisResults& obj) { 
                DARABONBA_PTR_FROM_JSON(endTime, endTime_);
                DARABONBA_PTR_FROM_JSON(startTime, startTime_);
                DARABONBA_PTR_FROM_JSON(text, text_);
              };
              VideoShotAnalysisResults() = default ;
              VideoShotAnalysisResults(const VideoShotAnalysisResults &) = default ;
              VideoShotAnalysisResults(VideoShotAnalysisResults &&) = default ;
              VideoShotAnalysisResults(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~VideoShotAnalysisResults() = default ;
              VideoShotAnalysisResults& operator=(const VideoShotAnalysisResults &) = default ;
              VideoShotAnalysisResults& operator=(VideoShotAnalysisResults &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr && this->text_ == nullptr; };
              // endTime Field Functions 
              bool hasEndTime() const { return this->endTime_ != nullptr;};
              void deleteEndTime() { this->endTime_ = nullptr;};
              inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
              inline VideoShotAnalysisResults& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


              // startTime Field Functions 
              bool hasStartTime() const { return this->startTime_ != nullptr;};
              void deleteStartTime() { this->startTime_ = nullptr;};
              inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
              inline VideoShotAnalysisResults& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


              // text Field Functions 
              bool hasText() const { return this->text_ != nullptr;};
              void deleteText() { this->text_ = nullptr;};
              inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
              inline VideoShotAnalysisResults& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            protected:
              shared_ptr<int64_t> endTime_ {};
              shared_ptr<int64_t> startTime_ {};
              shared_ptr<string> text_ {};
            };

            class Usage : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Usage& obj) { 
                DARABONBA_PTR_TO_JSON(imageTokens, imageTokens_);
                DARABONBA_PTR_TO_JSON(inputTokens, inputTokens_);
                DARABONBA_PTR_TO_JSON(outputTokens, outputTokens_);
                DARABONBA_PTR_TO_JSON(totalTokens, totalTokens_);
              };
              friend void from_json(const Darabonba::Json& j, Usage& obj) { 
                DARABONBA_PTR_FROM_JSON(imageTokens, imageTokens_);
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
              virtual bool empty() const override { return this->imageTokens_ == nullptr
        && this->inputTokens_ == nullptr && this->outputTokens_ == nullptr && this->totalTokens_ == nullptr; };
              // imageTokens Field Functions 
              bool hasImageTokens() const { return this->imageTokens_ != nullptr;};
              void deleteImageTokens() { this->imageTokens_ = nullptr;};
              inline int64_t getImageTokens() const { DARABONBA_PTR_GET_DEFAULT(imageTokens_, 0L) };
              inline Usage& setImageTokens(int64_t imageTokens) { DARABONBA_PTR_SET_VALUE(imageTokens_, imageTokens) };


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
              shared_ptr<int64_t> imageTokens_ {};
              shared_ptr<int64_t> inputTokens_ {};
              shared_ptr<int64_t> outputTokens_ {};
              shared_ptr<int64_t> totalTokens_ {};
            };

            virtual bool empty() const override { return this->generateFinished_ == nullptr
        && this->text_ == nullptr && this->usage_ == nullptr && this->videoShotAnalysisResults_ == nullptr; };
            // generateFinished Field Functions 
            bool hasGenerateFinished() const { return this->generateFinished_ != nullptr;};
            void deleteGenerateFinished() { this->generateFinished_ = nullptr;};
            inline bool getGenerateFinished() const { DARABONBA_PTR_GET_DEFAULT(generateFinished_, false) };
            inline VideoAnalysisResult& setGenerateFinished(bool generateFinished) { DARABONBA_PTR_SET_VALUE(generateFinished_, generateFinished) };


            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline VideoAnalysisResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // usage Field Functions 
            bool hasUsage() const { return this->usage_ != nullptr;};
            void deleteUsage() { this->usage_ = nullptr;};
            inline const VideoAnalysisResult::Usage & getUsage() const { DARABONBA_PTR_GET_CONST(usage_, VideoAnalysisResult::Usage) };
            inline VideoAnalysisResult::Usage getUsage() { DARABONBA_PTR_GET(usage_, VideoAnalysisResult::Usage) };
            inline VideoAnalysisResult& setUsage(const VideoAnalysisResult::Usage & usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };
            inline VideoAnalysisResult& setUsage(VideoAnalysisResult::Usage && usage) { DARABONBA_PTR_SET_RVALUE(usage_, usage) };


            // videoShotAnalysisResults Field Functions 
            bool hasVideoShotAnalysisResults() const { return this->videoShotAnalysisResults_ != nullptr;};
            void deleteVideoShotAnalysisResults() { this->videoShotAnalysisResults_ = nullptr;};
            inline const vector<VideoAnalysisResult::VideoShotAnalysisResults> & getVideoShotAnalysisResults() const { DARABONBA_PTR_GET_CONST(videoShotAnalysisResults_, vector<VideoAnalysisResult::VideoShotAnalysisResults>) };
            inline vector<VideoAnalysisResult::VideoShotAnalysisResults> getVideoShotAnalysisResults() { DARABONBA_PTR_GET(videoShotAnalysisResults_, vector<VideoAnalysisResult::VideoShotAnalysisResults>) };
            inline VideoAnalysisResult& setVideoShotAnalysisResults(const vector<VideoAnalysisResult::VideoShotAnalysisResults> & videoShotAnalysisResults) { DARABONBA_PTR_SET_VALUE(videoShotAnalysisResults_, videoShotAnalysisResults) };
            inline VideoAnalysisResult& setVideoShotAnalysisResults(vector<VideoAnalysisResult::VideoShotAnalysisResults> && videoShotAnalysisResults) { DARABONBA_PTR_SET_RVALUE(videoShotAnalysisResults_, videoShotAnalysisResults) };


          protected:
            shared_ptr<bool> generateFinished_ {};
            shared_ptr<string> text_ {};
            shared_ptr<VideoAnalysisResult::Usage> usage_ {};
            shared_ptr<vector<VideoAnalysisResult::VideoShotAnalysisResults>> videoShotAnalysisResults_ {};
          };

          class AddDatasetDocumentsResult : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const AddDatasetDocumentsResult& obj) { 
              DARABONBA_PTR_TO_JSON(docId, docId_);
              DARABONBA_PTR_TO_JSON(docUuid, docUuid_);
              DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
              DARABONBA_PTR_TO_JSON(status, status_);
              DARABONBA_PTR_TO_JSON(title, title_);
            };
            friend void from_json(const Darabonba::Json& j, AddDatasetDocumentsResult& obj) { 
              DARABONBA_PTR_FROM_JSON(docId, docId_);
              DARABONBA_PTR_FROM_JSON(docUuid, docUuid_);
              DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
              DARABONBA_PTR_FROM_JSON(status, status_);
              DARABONBA_PTR_FROM_JSON(title, title_);
            };
            AddDatasetDocumentsResult() = default ;
            AddDatasetDocumentsResult(const AddDatasetDocumentsResult &) = default ;
            AddDatasetDocumentsResult(AddDatasetDocumentsResult &&) = default ;
            AddDatasetDocumentsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~AddDatasetDocumentsResult() = default ;
            AddDatasetDocumentsResult& operator=(const AddDatasetDocumentsResult &) = default ;
            AddDatasetDocumentsResult& operator=(AddDatasetDocumentsResult &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->docId_ == nullptr
        && this->docUuid_ == nullptr && this->errorMessage_ == nullptr && this->status_ == nullptr && this->title_ == nullptr; };
            // docId Field Functions 
            bool hasDocId() const { return this->docId_ != nullptr;};
            void deleteDocId() { this->docId_ = nullptr;};
            inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
            inline AddDatasetDocumentsResult& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


            // docUuid Field Functions 
            bool hasDocUuid() const { return this->docUuid_ != nullptr;};
            void deleteDocUuid() { this->docUuid_ = nullptr;};
            inline string getDocUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
            inline AddDatasetDocumentsResult& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


            // errorMessage Field Functions 
            bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
            void deleteErrorMessage() { this->errorMessage_ = nullptr;};
            inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
            inline AddDatasetDocumentsResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
            inline AddDatasetDocumentsResult& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // title Field Functions 
            bool hasTitle() const { return this->title_ != nullptr;};
            void deleteTitle() { this->title_ = nullptr;};
            inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
            inline AddDatasetDocumentsResult& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


          protected:
            shared_ptr<string> docId_ {};
            shared_ptr<string> docUuid_ {};
            shared_ptr<string> errorMessage_ {};
            shared_ptr<int64_t> status_ {};
            shared_ptr<string> title_ {};
          };

          virtual bool empty() const override { return this->addDatasetDocumentsResult_ == nullptr
        && this->resultJsonFileUrl_ == nullptr && this->videoAnalysisResult_ == nullptr && this->videoCalculatorResult_ == nullptr && this->videoCaptionResult_ == nullptr && this->videoGenerateResult_ == nullptr
        && this->videoGenerateResults_ == nullptr && this->videoMindMappingGenerateResult_ == nullptr && this->videoRoleRecognitionResult_ == nullptr && this->videoTitleGenerateResult_ == nullptr; };
          // addDatasetDocumentsResult Field Functions 
          bool hasAddDatasetDocumentsResult() const { return this->addDatasetDocumentsResult_ != nullptr;};
          void deleteAddDatasetDocumentsResult() { this->addDatasetDocumentsResult_ = nullptr;};
          inline const Output::AddDatasetDocumentsResult & getAddDatasetDocumentsResult() const { DARABONBA_PTR_GET_CONST(addDatasetDocumentsResult_, Output::AddDatasetDocumentsResult) };
          inline Output::AddDatasetDocumentsResult getAddDatasetDocumentsResult() { DARABONBA_PTR_GET(addDatasetDocumentsResult_, Output::AddDatasetDocumentsResult) };
          inline Output& setAddDatasetDocumentsResult(const Output::AddDatasetDocumentsResult & addDatasetDocumentsResult) { DARABONBA_PTR_SET_VALUE(addDatasetDocumentsResult_, addDatasetDocumentsResult) };
          inline Output& setAddDatasetDocumentsResult(Output::AddDatasetDocumentsResult && addDatasetDocumentsResult) { DARABONBA_PTR_SET_RVALUE(addDatasetDocumentsResult_, addDatasetDocumentsResult) };


          // resultJsonFileUrl Field Functions 
          bool hasResultJsonFileUrl() const { return this->resultJsonFileUrl_ != nullptr;};
          void deleteResultJsonFileUrl() { this->resultJsonFileUrl_ = nullptr;};
          inline string getResultJsonFileUrl() const { DARABONBA_PTR_GET_DEFAULT(resultJsonFileUrl_, "") };
          inline Output& setResultJsonFileUrl(string resultJsonFileUrl) { DARABONBA_PTR_SET_VALUE(resultJsonFileUrl_, resultJsonFileUrl) };


          // videoAnalysisResult Field Functions 
          bool hasVideoAnalysisResult() const { return this->videoAnalysisResult_ != nullptr;};
          void deleteVideoAnalysisResult() { this->videoAnalysisResult_ = nullptr;};
          inline const Output::VideoAnalysisResult & getVideoAnalysisResult() const { DARABONBA_PTR_GET_CONST(videoAnalysisResult_, Output::VideoAnalysisResult) };
          inline Output::VideoAnalysisResult getVideoAnalysisResult() { DARABONBA_PTR_GET(videoAnalysisResult_, Output::VideoAnalysisResult) };
          inline Output& setVideoAnalysisResult(const Output::VideoAnalysisResult & videoAnalysisResult) { DARABONBA_PTR_SET_VALUE(videoAnalysisResult_, videoAnalysisResult) };
          inline Output& setVideoAnalysisResult(Output::VideoAnalysisResult && videoAnalysisResult) { DARABONBA_PTR_SET_RVALUE(videoAnalysisResult_, videoAnalysisResult) };


          // videoCalculatorResult Field Functions 
          bool hasVideoCalculatorResult() const { return this->videoCalculatorResult_ != nullptr;};
          void deleteVideoCalculatorResult() { this->videoCalculatorResult_ = nullptr;};
          inline const Output::VideoCalculatorResult & getVideoCalculatorResult() const { DARABONBA_PTR_GET_CONST(videoCalculatorResult_, Output::VideoCalculatorResult) };
          inline Output::VideoCalculatorResult getVideoCalculatorResult() { DARABONBA_PTR_GET(videoCalculatorResult_, Output::VideoCalculatorResult) };
          inline Output& setVideoCalculatorResult(const Output::VideoCalculatorResult & videoCalculatorResult) { DARABONBA_PTR_SET_VALUE(videoCalculatorResult_, videoCalculatorResult) };
          inline Output& setVideoCalculatorResult(Output::VideoCalculatorResult && videoCalculatorResult) { DARABONBA_PTR_SET_RVALUE(videoCalculatorResult_, videoCalculatorResult) };


          // videoCaptionResult Field Functions 
          bool hasVideoCaptionResult() const { return this->videoCaptionResult_ != nullptr;};
          void deleteVideoCaptionResult() { this->videoCaptionResult_ = nullptr;};
          inline const Output::VideoCaptionResult & getVideoCaptionResult() const { DARABONBA_PTR_GET_CONST(videoCaptionResult_, Output::VideoCaptionResult) };
          inline Output::VideoCaptionResult getVideoCaptionResult() { DARABONBA_PTR_GET(videoCaptionResult_, Output::VideoCaptionResult) };
          inline Output& setVideoCaptionResult(const Output::VideoCaptionResult & videoCaptionResult) { DARABONBA_PTR_SET_VALUE(videoCaptionResult_, videoCaptionResult) };
          inline Output& setVideoCaptionResult(Output::VideoCaptionResult && videoCaptionResult) { DARABONBA_PTR_SET_RVALUE(videoCaptionResult_, videoCaptionResult) };


          // videoGenerateResult Field Functions 
          bool hasVideoGenerateResult() const { return this->videoGenerateResult_ != nullptr;};
          void deleteVideoGenerateResult() { this->videoGenerateResult_ = nullptr;};
          inline const Output::VideoGenerateResult & getVideoGenerateResult() const { DARABONBA_PTR_GET_CONST(videoGenerateResult_, Output::VideoGenerateResult) };
          inline Output::VideoGenerateResult getVideoGenerateResult() { DARABONBA_PTR_GET(videoGenerateResult_, Output::VideoGenerateResult) };
          inline Output& setVideoGenerateResult(const Output::VideoGenerateResult & videoGenerateResult) { DARABONBA_PTR_SET_VALUE(videoGenerateResult_, videoGenerateResult) };
          inline Output& setVideoGenerateResult(Output::VideoGenerateResult && videoGenerateResult) { DARABONBA_PTR_SET_RVALUE(videoGenerateResult_, videoGenerateResult) };


          // videoGenerateResults Field Functions 
          bool hasVideoGenerateResults() const { return this->videoGenerateResults_ != nullptr;};
          void deleteVideoGenerateResults() { this->videoGenerateResults_ = nullptr;};
          inline const vector<Output::VideoGenerateResults> & getVideoGenerateResults() const { DARABONBA_PTR_GET_CONST(videoGenerateResults_, vector<Output::VideoGenerateResults>) };
          inline vector<Output::VideoGenerateResults> getVideoGenerateResults() { DARABONBA_PTR_GET(videoGenerateResults_, vector<Output::VideoGenerateResults>) };
          inline Output& setVideoGenerateResults(const vector<Output::VideoGenerateResults> & videoGenerateResults) { DARABONBA_PTR_SET_VALUE(videoGenerateResults_, videoGenerateResults) };
          inline Output& setVideoGenerateResults(vector<Output::VideoGenerateResults> && videoGenerateResults) { DARABONBA_PTR_SET_RVALUE(videoGenerateResults_, videoGenerateResults) };


          // videoMindMappingGenerateResult Field Functions 
          bool hasVideoMindMappingGenerateResult() const { return this->videoMindMappingGenerateResult_ != nullptr;};
          void deleteVideoMindMappingGenerateResult() { this->videoMindMappingGenerateResult_ = nullptr;};
          inline const Output::VideoMindMappingGenerateResult & getVideoMindMappingGenerateResult() const { DARABONBA_PTR_GET_CONST(videoMindMappingGenerateResult_, Output::VideoMindMappingGenerateResult) };
          inline Output::VideoMindMappingGenerateResult getVideoMindMappingGenerateResult() { DARABONBA_PTR_GET(videoMindMappingGenerateResult_, Output::VideoMindMappingGenerateResult) };
          inline Output& setVideoMindMappingGenerateResult(const Output::VideoMindMappingGenerateResult & videoMindMappingGenerateResult) { DARABONBA_PTR_SET_VALUE(videoMindMappingGenerateResult_, videoMindMappingGenerateResult) };
          inline Output& setVideoMindMappingGenerateResult(Output::VideoMindMappingGenerateResult && videoMindMappingGenerateResult) { DARABONBA_PTR_SET_RVALUE(videoMindMappingGenerateResult_, videoMindMappingGenerateResult) };


          // videoRoleRecognitionResult Field Functions 
          bool hasVideoRoleRecognitionResult() const { return this->videoRoleRecognitionResult_ != nullptr;};
          void deleteVideoRoleRecognitionResult() { this->videoRoleRecognitionResult_ = nullptr;};
          inline const Output::VideoRoleRecognitionResult & getVideoRoleRecognitionResult() const { DARABONBA_PTR_GET_CONST(videoRoleRecognitionResult_, Output::VideoRoleRecognitionResult) };
          inline Output::VideoRoleRecognitionResult getVideoRoleRecognitionResult() { DARABONBA_PTR_GET(videoRoleRecognitionResult_, Output::VideoRoleRecognitionResult) };
          inline Output& setVideoRoleRecognitionResult(const Output::VideoRoleRecognitionResult & videoRoleRecognitionResult) { DARABONBA_PTR_SET_VALUE(videoRoleRecognitionResult_, videoRoleRecognitionResult) };
          inline Output& setVideoRoleRecognitionResult(Output::VideoRoleRecognitionResult && videoRoleRecognitionResult) { DARABONBA_PTR_SET_RVALUE(videoRoleRecognitionResult_, videoRoleRecognitionResult) };


          // videoTitleGenerateResult Field Functions 
          bool hasVideoTitleGenerateResult() const { return this->videoTitleGenerateResult_ != nullptr;};
          void deleteVideoTitleGenerateResult() { this->videoTitleGenerateResult_ = nullptr;};
          inline const Output::VideoTitleGenerateResult & getVideoTitleGenerateResult() const { DARABONBA_PTR_GET_CONST(videoTitleGenerateResult_, Output::VideoTitleGenerateResult) };
          inline Output::VideoTitleGenerateResult getVideoTitleGenerateResult() { DARABONBA_PTR_GET(videoTitleGenerateResult_, Output::VideoTitleGenerateResult) };
          inline Output& setVideoTitleGenerateResult(const Output::VideoTitleGenerateResult & videoTitleGenerateResult) { DARABONBA_PTR_SET_VALUE(videoTitleGenerateResult_, videoTitleGenerateResult) };
          inline Output& setVideoTitleGenerateResult(Output::VideoTitleGenerateResult && videoTitleGenerateResult) { DARABONBA_PTR_SET_RVALUE(videoTitleGenerateResult_, videoTitleGenerateResult) };


        protected:
          shared_ptr<Output::AddDatasetDocumentsResult> addDatasetDocumentsResult_ {};
          shared_ptr<string> resultJsonFileUrl_ {};
          shared_ptr<Output::VideoAnalysisResult> videoAnalysisResult_ {};
          shared_ptr<Output::VideoCalculatorResult> videoCalculatorResult_ {};
          shared_ptr<Output::VideoCaptionResult> videoCaptionResult_ {};
          shared_ptr<Output::VideoGenerateResult> videoGenerateResult_ {};
          shared_ptr<vector<Output::VideoGenerateResults>> videoGenerateResults_ {};
          shared_ptr<Output::VideoMindMappingGenerateResult> videoMindMappingGenerateResult_ {};
          shared_ptr<Output::VideoRoleRecognitionResult> videoRoleRecognitionResult_ {};
          shared_ptr<Output::VideoTitleGenerateResult> videoTitleGenerateResult_ {};
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
    inline GetVideoAnalysisTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetVideoAnalysisTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetVideoAnalysisTaskResponseBody::Data) };
    inline GetVideoAnalysisTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetVideoAnalysisTaskResponseBody::Data) };
    inline GetVideoAnalysisTaskResponseBody& setData(const GetVideoAnalysisTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetVideoAnalysisTaskResponseBody& setData(GetVideoAnalysisTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetVideoAnalysisTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetVideoAnalysisTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetVideoAnalysisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetVideoAnalysisTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetVideoAnalysisTaskResponseBody::Data> data_ {};
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
