// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONRESPONSEBODY_HPP_
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
  class RunEssayCorrectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEssayCorrectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunEssayCorrectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RunEssayCorrectionResponseBody() = default ;
    RunEssayCorrectionResponseBody(const RunEssayCorrectionResponseBody &) = default ;
    RunEssayCorrectionResponseBody(RunEssayCorrectionResponseBody &&) = default ;
    RunEssayCorrectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEssayCorrectionResponseBody() = default ;
    RunEssayCorrectionResponseBody& operator=(const RunEssayCorrectionResponseBody &) = default ;
    RunEssayCorrectionResponseBody& operator=(RunEssayCorrectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          DARABONBA_PTR_TO_JSON(dimensionResults, dimensionResults_);
          DARABONBA_PTR_TO_JSON(overallComment, overallComment_);
          DARABONBA_PTR_TO_JSON(reasoningContent, reasoningContent_);
          DARABONBA_PTR_TO_JSON(score, score_);
          DARABONBA_PTR_TO_JSON(text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(dimensionResults, dimensionResults_);
          DARABONBA_PTR_FROM_JSON(overallComment, overallComment_);
          DARABONBA_PTR_FROM_JSON(reasoningContent, reasoningContent_);
          DARABONBA_PTR_FROM_JSON(score, score_);
          DARABONBA_PTR_FROM_JSON(text, text_);
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
        class DimensionResults : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DimensionResults& obj) { 
            DARABONBA_PTR_TO_JSON(analysis, analysis_);
            DARABONBA_PTR_TO_JSON(maxScore, maxScore_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(score, score_);
          };
          friend void from_json(const Darabonba::Json& j, DimensionResults& obj) { 
            DARABONBA_PTR_FROM_JSON(analysis, analysis_);
            DARABONBA_PTR_FROM_JSON(maxScore, maxScore_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(score, score_);
          };
          DimensionResults() = default ;
          DimensionResults(const DimensionResults &) = default ;
          DimensionResults(DimensionResults &&) = default ;
          DimensionResults(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DimensionResults() = default ;
          DimensionResults& operator=(const DimensionResults &) = default ;
          DimensionResults& operator=(DimensionResults &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->analysis_ == nullptr
        && this->maxScore_ == nullptr && this->name_ == nullptr && this->score_ == nullptr; };
          // analysis Field Functions 
          bool hasAnalysis() const { return this->analysis_ != nullptr;};
          void deleteAnalysis() { this->analysis_ = nullptr;};
          inline string getAnalysis() const { DARABONBA_PTR_GET_DEFAULT(analysis_, "") };
          inline DimensionResults& setAnalysis(string analysis) { DARABONBA_PTR_SET_VALUE(analysis_, analysis) };


          // maxScore Field Functions 
          bool hasMaxScore() const { return this->maxScore_ != nullptr;};
          void deleteMaxScore() { this->maxScore_ = nullptr;};
          inline double getMaxScore() const { DARABONBA_PTR_GET_DEFAULT(maxScore_, 0.0) };
          inline DimensionResults& setMaxScore(double maxScore) { DARABONBA_PTR_SET_VALUE(maxScore_, maxScore) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline DimensionResults& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // score Field Functions 
          bool hasScore() const { return this->score_ != nullptr;};
          void deleteScore() { this->score_ = nullptr;};
          inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
          inline DimensionResults& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        protected:
          shared_ptr<string> analysis_ {};
          shared_ptr<double> maxScore_ {};
          shared_ptr<string> name_ {};
          shared_ptr<double> score_ {};
        };

        virtual bool empty() const override { return this->dimensionResults_ == nullptr
        && this->overallComment_ == nullptr && this->reasoningContent_ == nullptr && this->score_ == nullptr && this->text_ == nullptr; };
        // dimensionResults Field Functions 
        bool hasDimensionResults() const { return this->dimensionResults_ != nullptr;};
        void deleteDimensionResults() { this->dimensionResults_ = nullptr;};
        inline const vector<Output::DimensionResults> & getDimensionResults() const { DARABONBA_PTR_GET_CONST(dimensionResults_, vector<Output::DimensionResults>) };
        inline vector<Output::DimensionResults> getDimensionResults() { DARABONBA_PTR_GET(dimensionResults_, vector<Output::DimensionResults>) };
        inline Output& setDimensionResults(const vector<Output::DimensionResults> & dimensionResults) { DARABONBA_PTR_SET_VALUE(dimensionResults_, dimensionResults) };
        inline Output& setDimensionResults(vector<Output::DimensionResults> && dimensionResults) { DARABONBA_PTR_SET_RVALUE(dimensionResults_, dimensionResults) };


        // overallComment Field Functions 
        bool hasOverallComment() const { return this->overallComment_ != nullptr;};
        void deleteOverallComment() { this->overallComment_ = nullptr;};
        inline string getOverallComment() const { DARABONBA_PTR_GET_DEFAULT(overallComment_, "") };
        inline Output& setOverallComment(string overallComment) { DARABONBA_PTR_SET_VALUE(overallComment_, overallComment) };


        // reasoningContent Field Functions 
        bool hasReasoningContent() const { return this->reasoningContent_ != nullptr;};
        void deleteReasoningContent() { this->reasoningContent_ = nullptr;};
        inline string getReasoningContent() const { DARABONBA_PTR_GET_DEFAULT(reasoningContent_, "") };
        inline Output& setReasoningContent(string reasoningContent) { DARABONBA_PTR_SET_VALUE(reasoningContent_, reasoningContent) };


        // score Field Functions 
        bool hasScore() const { return this->score_ != nullptr;};
        void deleteScore() { this->score_ = nullptr;};
        inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
        inline Output& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Output& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<vector<Output::DimensionResults>> dimensionResults_ {};
        shared_ptr<string> overallComment_ {};
        shared_ptr<string> reasoningContent_ {};
        shared_ptr<int32_t> score_ {};
        shared_ptr<string> text_ {};
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
        DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(taskId, taskId_);
        DARABONBA_PTR_TO_JSON(traceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(event, event_);
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
        && this->errorMessage_ == nullptr && this->event_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr && this->traceId_ == nullptr; };
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
      shared_ptr<string> sessionId_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->header_ == nullptr
        && this->payload_ == nullptr && this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunEssayCorrectionResponseBody::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, RunEssayCorrectionResponseBody::Header) };
    inline RunEssayCorrectionResponseBody::Header getHeader() { DARABONBA_PTR_GET(header_, RunEssayCorrectionResponseBody::Header) };
    inline RunEssayCorrectionResponseBody& setHeader(const RunEssayCorrectionResponseBody::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunEssayCorrectionResponseBody& setHeader(RunEssayCorrectionResponseBody::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunEssayCorrectionResponseBody::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, RunEssayCorrectionResponseBody::Payload) };
    inline RunEssayCorrectionResponseBody::Payload getPayload() { DARABONBA_PTR_GET(payload_, RunEssayCorrectionResponseBody::Payload) };
    inline RunEssayCorrectionResponseBody& setPayload(const RunEssayCorrectionResponseBody::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunEssayCorrectionResponseBody& setPayload(RunEssayCorrectionResponseBody::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunEssayCorrectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RunEssayCorrectionResponseBody::Header> header_ {};
    shared_ptr<RunEssayCorrectionResponseBody::Payload> payload_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
