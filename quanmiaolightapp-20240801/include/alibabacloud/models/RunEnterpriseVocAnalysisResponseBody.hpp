// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNENTERPRISEVOCANALYSISRESPONSEBODY_HPP_
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
  class RunEnterpriseVocAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEnterpriseVocAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunEnterpriseVocAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RunEnterpriseVocAnalysisResponseBody() = default ;
    RunEnterpriseVocAnalysisResponseBody(const RunEnterpriseVocAnalysisResponseBody &) = default ;
    RunEnterpriseVocAnalysisResponseBody(RunEnterpriseVocAnalysisResponseBody &&) = default ;
    RunEnterpriseVocAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEnterpriseVocAnalysisResponseBody() = default ;
    RunEnterpriseVocAnalysisResponseBody& operator=(const RunEnterpriseVocAnalysisResponseBody &) = default ;
    RunEnterpriseVocAnalysisResponseBody& operator=(RunEnterpriseVocAnalysisResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(filterResult, filterResult_);
          DARABONBA_PTR_TO_JSON(reasonContent, reasonContent_);
          DARABONBA_PTR_TO_JSON(text, text_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(filterResult, filterResult_);
          DARABONBA_PTR_FROM_JSON(reasonContent, reasonContent_);
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
        class FilterResult : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FilterResult& obj) { 
            DARABONBA_PTR_TO_JSON(filterResults, filterResults_);
          };
          friend void from_json(const Darabonba::Json& j, FilterResult& obj) { 
            DARABONBA_PTR_FROM_JSON(filterResults, filterResults_);
          };
          FilterResult() = default ;
          FilterResult(const FilterResult &) = default ;
          FilterResult(FilterResult &&) = default ;
          FilterResult(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FilterResult() = default ;
          FilterResult& operator=(const FilterResult &) = default ;
          FilterResult& operator=(FilterResult &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class FilterResults : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const FilterResults& obj) { 
              DARABONBA_PTR_TO_JSON(hit, hit_);
              DARABONBA_PTR_TO_JSON(tagName, tagName_);
              DARABONBA_PTR_TO_JSON(tagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, FilterResults& obj) { 
              DARABONBA_PTR_FROM_JSON(hit, hit_);
              DARABONBA_PTR_FROM_JSON(tagName, tagName_);
              DARABONBA_PTR_FROM_JSON(tagValue, tagValue_);
            };
            FilterResults() = default ;
            FilterResults(const FilterResults &) = default ;
            FilterResults(FilterResults &&) = default ;
            FilterResults(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~FilterResults() = default ;
            FilterResults& operator=(const FilterResults &) = default ;
            FilterResults& operator=(FilterResults &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->hit_ == nullptr
        && this->tagName_ == nullptr && this->tagValue_ == nullptr; };
            // hit Field Functions 
            bool hasHit() const { return this->hit_ != nullptr;};
            void deleteHit() { this->hit_ = nullptr;};
            inline bool getHit() const { DARABONBA_PTR_GET_DEFAULT(hit_, false) };
            inline FilterResults& setHit(bool hit) { DARABONBA_PTR_SET_VALUE(hit_, hit) };


            // tagName Field Functions 
            bool hasTagName() const { return this->tagName_ != nullptr;};
            void deleteTagName() { this->tagName_ = nullptr;};
            inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
            inline FilterResults& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline FilterResults& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            shared_ptr<bool> hit_ {};
            shared_ptr<string> tagName_ {};
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->filterResults_ == nullptr; };
          // filterResults Field Functions 
          bool hasFilterResults() const { return this->filterResults_ != nullptr;};
          void deleteFilterResults() { this->filterResults_ = nullptr;};
          inline const vector<FilterResult::FilterResults> & getFilterResults() const { DARABONBA_PTR_GET_CONST(filterResults_, vector<FilterResult::FilterResults>) };
          inline vector<FilterResult::FilterResults> getFilterResults() { DARABONBA_PTR_GET(filterResults_, vector<FilterResult::FilterResults>) };
          inline FilterResult& setFilterResults(const vector<FilterResult::FilterResults> & filterResults) { DARABONBA_PTR_SET_VALUE(filterResults_, filterResults) };
          inline FilterResult& setFilterResults(vector<FilterResult::FilterResults> && filterResults) { DARABONBA_PTR_SET_RVALUE(filterResults_, filterResults) };


        protected:
          shared_ptr<vector<FilterResult::FilterResults>> filterResults_ {};
        };

        virtual bool empty() const override { return this->filterResult_ == nullptr
        && this->reasonContent_ == nullptr && this->text_ == nullptr; };
        // filterResult Field Functions 
        bool hasFilterResult() const { return this->filterResult_ != nullptr;};
        void deleteFilterResult() { this->filterResult_ = nullptr;};
        inline const Output::FilterResult & getFilterResult() const { DARABONBA_PTR_GET_CONST(filterResult_, Output::FilterResult) };
        inline Output::FilterResult getFilterResult() { DARABONBA_PTR_GET(filterResult_, Output::FilterResult) };
        inline Output& setFilterResult(const Output::FilterResult & filterResult) { DARABONBA_PTR_SET_VALUE(filterResult_, filterResult) };
        inline Output& setFilterResult(Output::FilterResult && filterResult) { DARABONBA_PTR_SET_RVALUE(filterResult_, filterResult) };


        // reasonContent Field Functions 
        bool hasReasonContent() const { return this->reasonContent_ != nullptr;};
        void deleteReasonContent() { this->reasonContent_ = nullptr;};
        inline string getReasonContent() const { DARABONBA_PTR_GET_DEFAULT(reasonContent_, "") };
        inline Output& setReasonContent(string reasonContent) { DARABONBA_PTR_SET_VALUE(reasonContent_, reasonContent) };


        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Output& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


      protected:
        shared_ptr<Output::FilterResult> filterResult_ {};
        shared_ptr<string> reasonContent_ {};
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
    inline const RunEnterpriseVocAnalysisResponseBody::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, RunEnterpriseVocAnalysisResponseBody::Header) };
    inline RunEnterpriseVocAnalysisResponseBody::Header getHeader() { DARABONBA_PTR_GET(header_, RunEnterpriseVocAnalysisResponseBody::Header) };
    inline RunEnterpriseVocAnalysisResponseBody& setHeader(const RunEnterpriseVocAnalysisResponseBody::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunEnterpriseVocAnalysisResponseBody& setHeader(RunEnterpriseVocAnalysisResponseBody::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunEnterpriseVocAnalysisResponseBody::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, RunEnterpriseVocAnalysisResponseBody::Payload) };
    inline RunEnterpriseVocAnalysisResponseBody::Payload getPayload() { DARABONBA_PTR_GET(payload_, RunEnterpriseVocAnalysisResponseBody::Payload) };
    inline RunEnterpriseVocAnalysisResponseBody& setPayload(const RunEnterpriseVocAnalysisResponseBody::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunEnterpriseVocAnalysisResponseBody& setPayload(RunEnterpriseVocAnalysisResponseBody::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunEnterpriseVocAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RunEnterpriseVocAnalysisResponseBody::Header> header_ {};
    shared_ptr<RunEnterpriseVocAnalysisResponseBody::Payload> payload_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
