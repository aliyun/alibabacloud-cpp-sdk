// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNDOCINTRODUCTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunDocIntroductionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDocIntroductionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunDocIntroductionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunDocIntroductionResponseBody() = default ;
    RunDocIntroductionResponseBody(const RunDocIntroductionResponseBody &) = default ;
    RunDocIntroductionResponseBody(RunDocIntroductionResponseBody &&) = default ;
    RunDocIntroductionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDocIntroductionResponseBody() = default ;
    RunDocIntroductionResponseBody& operator=(const RunDocIntroductionResponseBody &) = default ;
    RunDocIntroductionResponseBody& operator=(RunDocIntroductionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Output, output_);
        DARABONBA_PTR_TO_JSON(Usage, usage_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Output, output_);
        DARABONBA_PTR_FROM_JSON(Usage, usage_);
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
          DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
        };
        friend void from_json(const Darabonba::Json& j, Usage& obj) { 
          DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
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
          DARABONBA_PTR_TO_JSON(Introductions, introductions_);
          DARABONBA_PTR_TO_JSON(KeyPoint, keyPoint_);
          DARABONBA_PTR_TO_JSON(Summary, summary_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(Introductions, introductions_);
          DARABONBA_PTR_FROM_JSON(KeyPoint, keyPoint_);
          DARABONBA_PTR_FROM_JSON(Summary, summary_);
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
        class Introductions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Introductions& obj) { 
            DARABONBA_PTR_TO_JSON(Blocks, blocks_);
            DARABONBA_PTR_TO_JSON(StartPageId, startPageId_);
            DARABONBA_PTR_TO_JSON(Summary, summary_);
            DARABONBA_PTR_TO_JSON(Title, title_);
          };
          friend void from_json(const Darabonba::Json& j, Introductions& obj) { 
            DARABONBA_PTR_FROM_JSON(Blocks, blocks_);
            DARABONBA_PTR_FROM_JSON(StartPageId, startPageId_);
            DARABONBA_PTR_FROM_JSON(Summary, summary_);
            DARABONBA_PTR_FROM_JSON(Title, title_);
          };
          Introductions() = default ;
          Introductions(const Introductions &) = default ;
          Introductions(Introductions &&) = default ;
          Introductions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Introductions() = default ;
          Introductions& operator=(const Introductions &) = default ;
          Introductions& operator=(Introductions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Blocks : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Blocks& obj) { 
              DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(Height, height_);
              DARABONBA_PTR_TO_JSON(PageId, pageId_);
              DARABONBA_PTR_TO_JSON(Width, width_);
              DARABONBA_PTR_TO_JSON(X, x_);
              DARABONBA_PTR_TO_JSON(Y, y_);
            };
            friend void from_json(const Darabonba::Json& j, Blocks& obj) { 
              DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(Height, height_);
              DARABONBA_PTR_FROM_JSON(PageId, pageId_);
              DARABONBA_PTR_FROM_JSON(Width, width_);
              DARABONBA_PTR_FROM_JSON(X, x_);
              DARABONBA_PTR_FROM_JSON(Y, y_);
            };
            Blocks() = default ;
            Blocks(const Blocks &) = default ;
            Blocks(Blocks &&) = default ;
            Blocks(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Blocks() = default ;
            Blocks& operator=(const Blocks &) = default ;
            Blocks& operator=(Blocks &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->height_ == nullptr && this->pageId_ == nullptr && this->width_ == nullptr && this->x_ == nullptr
        && this->y_ == nullptr; };
            // beginTime Field Functions 
            bool hasBeginTime() const { return this->beginTime_ != nullptr;};
            void deleteBeginTime() { this->beginTime_ = nullptr;};
            inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
            inline Blocks& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
            inline Blocks& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // height Field Functions 
            bool hasHeight() const { return this->height_ != nullptr;};
            void deleteHeight() { this->height_ = nullptr;};
            inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
            inline Blocks& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


            // pageId Field Functions 
            bool hasPageId() const { return this->pageId_ != nullptr;};
            void deletePageId() { this->pageId_ = nullptr;};
            inline int32_t getPageId() const { DARABONBA_PTR_GET_DEFAULT(pageId_, 0) };
            inline Blocks& setPageId(int32_t pageId) { DARABONBA_PTR_SET_VALUE(pageId_, pageId) };


            // width Field Functions 
            bool hasWidth() const { return this->width_ != nullptr;};
            void deleteWidth() { this->width_ = nullptr;};
            inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
            inline Blocks& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


            // x Field Functions 
            bool hasX() const { return this->x_ != nullptr;};
            void deleteX() { this->x_ = nullptr;};
            inline int32_t getX() const { DARABONBA_PTR_GET_DEFAULT(x_, 0) };
            inline Blocks& setX(int32_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


            // y Field Functions 
            bool hasY() const { return this->y_ != nullptr;};
            void deleteY() { this->y_ = nullptr;};
            inline int32_t getY() const { DARABONBA_PTR_GET_DEFAULT(y_, 0) };
            inline Blocks& setY(int32_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


          protected:
            shared_ptr<int64_t> beginTime_ {};
            shared_ptr<int64_t> endTime_ {};
            shared_ptr<int32_t> height_ {};
            shared_ptr<int32_t> pageId_ {};
            shared_ptr<int32_t> width_ {};
            shared_ptr<int32_t> x_ {};
            shared_ptr<int32_t> y_ {};
          };

          virtual bool empty() const override { return this->blocks_ == nullptr
        && this->startPageId_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr; };
          // blocks Field Functions 
          bool hasBlocks() const { return this->blocks_ != nullptr;};
          void deleteBlocks() { this->blocks_ = nullptr;};
          inline const vector<Introductions::Blocks> & getBlocks() const { DARABONBA_PTR_GET_CONST(blocks_, vector<Introductions::Blocks>) };
          inline vector<Introductions::Blocks> getBlocks() { DARABONBA_PTR_GET(blocks_, vector<Introductions::Blocks>) };
          inline Introductions& setBlocks(const vector<Introductions::Blocks> & blocks) { DARABONBA_PTR_SET_VALUE(blocks_, blocks) };
          inline Introductions& setBlocks(vector<Introductions::Blocks> && blocks) { DARABONBA_PTR_SET_RVALUE(blocks_, blocks) };


          // startPageId Field Functions 
          bool hasStartPageId() const { return this->startPageId_ != nullptr;};
          void deleteStartPageId() { this->startPageId_ = nullptr;};
          inline int32_t getStartPageId() const { DARABONBA_PTR_GET_DEFAULT(startPageId_, 0) };
          inline Introductions& setStartPageId(int32_t startPageId) { DARABONBA_PTR_SET_VALUE(startPageId_, startPageId) };


          // summary Field Functions 
          bool hasSummary() const { return this->summary_ != nullptr;};
          void deleteSummary() { this->summary_ = nullptr;};
          inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
          inline Introductions& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


          // title Field Functions 
          bool hasTitle() const { return this->title_ != nullptr;};
          void deleteTitle() { this->title_ = nullptr;};
          inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
          inline Introductions& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


        protected:
          shared_ptr<vector<Introductions::Blocks>> blocks_ {};
          shared_ptr<int32_t> startPageId_ {};
          shared_ptr<string> summary_ {};
          shared_ptr<string> title_ {};
        };

        virtual bool empty() const override { return this->introductions_ == nullptr
        && this->keyPoint_ == nullptr && this->summary_ == nullptr; };
        // introductions Field Functions 
        bool hasIntroductions() const { return this->introductions_ != nullptr;};
        void deleteIntroductions() { this->introductions_ = nullptr;};
        inline const vector<Output::Introductions> & getIntroductions() const { DARABONBA_PTR_GET_CONST(introductions_, vector<Output::Introductions>) };
        inline vector<Output::Introductions> getIntroductions() { DARABONBA_PTR_GET(introductions_, vector<Output::Introductions>) };
        inline Output& setIntroductions(const vector<Output::Introductions> & introductions) { DARABONBA_PTR_SET_VALUE(introductions_, introductions) };
        inline Output& setIntroductions(vector<Output::Introductions> && introductions) { DARABONBA_PTR_SET_RVALUE(introductions_, introductions) };


        // keyPoint Field Functions 
        bool hasKeyPoint() const { return this->keyPoint_ != nullptr;};
        void deleteKeyPoint() { this->keyPoint_ = nullptr;};
        inline string getKeyPoint() const { DARABONBA_PTR_GET_DEFAULT(keyPoint_, "") };
        inline Output& setKeyPoint(string keyPoint) { DARABONBA_PTR_SET_VALUE(keyPoint_, keyPoint) };


        // summary Field Functions 
        bool hasSummary() const { return this->summary_ != nullptr;};
        void deleteSummary() { this->summary_ = nullptr;};
        inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
        inline Output& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      protected:
        shared_ptr<vector<Output::Introductions>> introductions_ {};
        shared_ptr<string> keyPoint_ {};
        shared_ptr<string> summary_ {};
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
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Event, event_);
        DARABONBA_PTR_TO_JSON(EventInfo, eventInfo_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Event, event_);
        DARABONBA_PTR_FROM_JSON(EventInfo, eventInfo_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
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

    virtual bool empty() const override { return this->header_ == nullptr
        && this->payload_ == nullptr && this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunDocIntroductionResponseBody::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, RunDocIntroductionResponseBody::Header) };
    inline RunDocIntroductionResponseBody::Header getHeader() { DARABONBA_PTR_GET(header_, RunDocIntroductionResponseBody::Header) };
    inline RunDocIntroductionResponseBody& setHeader(const RunDocIntroductionResponseBody::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunDocIntroductionResponseBody& setHeader(RunDocIntroductionResponseBody::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunDocIntroductionResponseBody::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, RunDocIntroductionResponseBody::Payload) };
    inline RunDocIntroductionResponseBody::Payload getPayload() { DARABONBA_PTR_GET(payload_, RunDocIntroductionResponseBody::Payload) };
    inline RunDocIntroductionResponseBody& setPayload(const RunDocIntroductionResponseBody::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunDocIntroductionResponseBody& setPayload(RunDocIntroductionResponseBody::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunDocIntroductionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<RunDocIntroductionResponseBody::Header> header_ {};
    shared_ptr<RunDocIntroductionResponseBody::Payload> payload_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
