// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNDEEPWRITINGRESPONSEBODY_HPP_
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
  class RunDeepWritingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunDeepWritingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, RunDeepWritingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    RunDeepWritingResponseBody() = default ;
    RunDeepWritingResponseBody(const RunDeepWritingResponseBody &) = default ;
    RunDeepWritingResponseBody(RunDeepWritingResponseBody &&) = default ;
    RunDeepWritingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunDeepWritingResponseBody() = default ;
    RunDeepWritingResponseBody& operator=(const RunDeepWritingResponseBody &) = default ;
    RunDeepWritingResponseBody& operator=(RunDeepWritingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(Output, output_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(Output, output_);
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
      class Output : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Output& obj) { 
          DARABONBA_PTR_TO_JSON(Item, item_);
          DARABONBA_PTR_TO_JSON(OutputIndex, outputIndex_);
          DARABONBA_PTR_TO_JSON(Response, response_);
          DARABONBA_PTR_TO_JSON(SequenceNumber, sequenceNumber_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Output& obj) { 
          DARABONBA_PTR_FROM_JSON(Item, item_);
          DARABONBA_PTR_FROM_JSON(OutputIndex, outputIndex_);
          DARABONBA_PTR_FROM_JSON(Response, response_);
          DARABONBA_PTR_FROM_JSON(SequenceNumber, sequenceNumber_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
        class Response : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Response& obj) { 
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, Response& obj) { 
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          Response() = default ;
          Response(const Response &) = default ;
          Response(Response &&) = default ;
          Response(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Response() = default ;
          Response& operator=(const Response &) = default ;
          Response& operator=(Response &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->id_ == nullptr
        && this->status_ == nullptr; };
          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Response& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Response& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          shared_ptr<string> id_ {};
          shared_ptr<string> status_ {};
        };

        class Item : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Item& obj) { 
            DARABONBA_PTR_TO_JSON(Agent, agent_);
            DARABONBA_PTR_TO_JSON(Arguments, arguments_);
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Result, result_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Item& obj) { 
            DARABONBA_PTR_FROM_JSON(Agent, agent_);
            DARABONBA_PTR_FROM_JSON(Arguments, arguments_);
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Result, result_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Item() = default ;
          Item(const Item &) = default ;
          Item(Item &&) = default ;
          Item(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Item() = default ;
          Item& operator=(const Item &) = default ;
          Item& operator=(Item &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Content : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Content& obj) { 
              DARABONBA_PTR_TO_JSON(Text, text_);
              DARABONBA_PTR_TO_JSON(Type, type_);
            };
            friend void from_json(const Darabonba::Json& j, Content& obj) { 
              DARABONBA_PTR_FROM_JSON(Text, text_);
              DARABONBA_PTR_FROM_JSON(Type, type_);
            };
            Content() = default ;
            Content(const Content &) = default ;
            Content(Content &&) = default ;
            Content(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Content() = default ;
            Content& operator=(const Content &) = default ;
            Content& operator=(Content &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->text_ == nullptr
        && this->type_ == nullptr; };
            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Content& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Content& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          protected:
            shared_ptr<string> text_ {};
            shared_ptr<string> type_ {};
          };

          virtual bool empty() const override { return this->agent_ == nullptr
        && this->arguments_ == nullptr && this->content_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->result_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr; };
          // agent Field Functions 
          bool hasAgent() const { return this->agent_ != nullptr;};
          void deleteAgent() { this->agent_ = nullptr;};
          inline string getAgent() const { DARABONBA_PTR_GET_DEFAULT(agent_, "") };
          inline Item& setAgent(string agent) { DARABONBA_PTR_SET_VALUE(agent_, agent) };


          // arguments Field Functions 
          bool hasArguments() const { return this->arguments_ != nullptr;};
          void deleteArguments() { this->arguments_ = nullptr;};
          inline string getArguments() const { DARABONBA_PTR_GET_DEFAULT(arguments_, "") };
          inline Item& setArguments(string arguments) { DARABONBA_PTR_SET_VALUE(arguments_, arguments) };


          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline const vector<Item::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Item::Content>) };
          inline vector<Item::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Item::Content>) };
          inline Item& setContent(const vector<Item::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
          inline Item& setContent(vector<Item::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
          inline Item& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Item& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // result Field Functions 
          bool hasResult() const { return this->result_ != nullptr;};
          void deleteResult() { this->result_ = nullptr;};
          inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
          inline Item& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline Item& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Item& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> agent_ {};
          shared_ptr<string> arguments_ {};
          shared_ptr<vector<Item::Content>> content_ {};
          shared_ptr<string> id_ {};
          shared_ptr<string> name_ {};
          shared_ptr<string> result_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->item_ == nullptr
        && this->outputIndex_ == nullptr && this->response_ == nullptr && this->sequenceNumber_ == nullptr && this->type_ == nullptr; };
        // item Field Functions 
        bool hasItem() const { return this->item_ != nullptr;};
        void deleteItem() { this->item_ = nullptr;};
        inline const Output::Item & getItem() const { DARABONBA_PTR_GET_CONST(item_, Output::Item) };
        inline Output::Item getItem() { DARABONBA_PTR_GET(item_, Output::Item) };
        inline Output& setItem(const Output::Item & item) { DARABONBA_PTR_SET_VALUE(item_, item) };
        inline Output& setItem(Output::Item && item) { DARABONBA_PTR_SET_RVALUE(item_, item) };


        // outputIndex Field Functions 
        bool hasOutputIndex() const { return this->outputIndex_ != nullptr;};
        void deleteOutputIndex() { this->outputIndex_ = nullptr;};
        inline int32_t getOutputIndex() const { DARABONBA_PTR_GET_DEFAULT(outputIndex_, 0) };
        inline Output& setOutputIndex(int32_t outputIndex) { DARABONBA_PTR_SET_VALUE(outputIndex_, outputIndex) };


        // response Field Functions 
        bool hasResponse() const { return this->response_ != nullptr;};
        void deleteResponse() { this->response_ = nullptr;};
        inline const Output::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, Output::Response) };
        inline Output::Response getResponse() { DARABONBA_PTR_GET(response_, Output::Response) };
        inline Output& setResponse(const Output::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
        inline Output& setResponse(Output::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


        // sequenceNumber Field Functions 
        bool hasSequenceNumber() const { return this->sequenceNumber_ != nullptr;};
        void deleteSequenceNumber() { this->sequenceNumber_ = nullptr;};
        inline string getSequenceNumber() const { DARABONBA_PTR_GET_DEFAULT(sequenceNumber_, "") };
        inline Output& setSequenceNumber(string sequenceNumber) { DARABONBA_PTR_SET_VALUE(sequenceNumber_, sequenceNumber) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<Output::Item> item_ {};
        shared_ptr<int32_t> outputIndex_ {};
        shared_ptr<Output::Response> response_ {};
        shared_ptr<string> sequenceNumber_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->output_ == nullptr; };
      // output Field Functions 
      bool hasOutput() const { return this->output_ != nullptr;};
      void deleteOutput() { this->output_ = nullptr;};
      inline const Payload::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, Payload::Output) };
      inline Payload::Output getOutput() { DARABONBA_PTR_GET(output_, Payload::Output) };
      inline Payload& setOutput(const Payload::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
      inline Payload& setOutput(Payload::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    protected:
      shared_ptr<Payload::Output> output_ {};
    };

    class Header : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Header& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(Event, event_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      };
      friend void from_json(const Darabonba::Json& j, Header& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(Event, event_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
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
        && this->errorMessage_ == nullptr && this->event_ == nullptr && this->sessionId_ == nullptr && this->statusCode_ == nullptr && this->taskId_ == nullptr
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


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Header& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
      inline Header& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


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
      shared_ptr<int32_t> statusCode_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> traceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->header_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->payload_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RunDeepWritingResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunDeepWritingResponseBody::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, RunDeepWritingResponseBody::Header) };
    inline RunDeepWritingResponseBody::Header getHeader() { DARABONBA_PTR_GET(header_, RunDeepWritingResponseBody::Header) };
    inline RunDeepWritingResponseBody& setHeader(const RunDeepWritingResponseBody::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunDeepWritingResponseBody& setHeader(RunDeepWritingResponseBody::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline RunDeepWritingResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RunDeepWritingResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunDeepWritingResponseBody::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, RunDeepWritingResponseBody::Payload) };
    inline RunDeepWritingResponseBody::Payload getPayload() { DARABONBA_PTR_GET(payload_, RunDeepWritingResponseBody::Payload) };
    inline RunDeepWritingResponseBody& setPayload(const RunDeepWritingResponseBody::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunDeepWritingResponseBody& setPayload(RunDeepWritingResponseBody::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunDeepWritingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline RunDeepWritingResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<RunDeepWritingResponseBody::Header> header_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<RunDeepWritingResponseBody::Payload> payload_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
