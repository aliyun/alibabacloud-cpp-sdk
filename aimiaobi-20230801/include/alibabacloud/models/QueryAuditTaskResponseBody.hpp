// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class QueryAuditTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuditTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuditTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAuditTaskResponseBody() = default ;
    QueryAuditTaskResponseBody(const QueryAuditTaskResponseBody &) = default ;
    QueryAuditTaskResponseBody(QueryAuditTaskResponseBody &&) = default ;
    QueryAuditTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuditTaskResponseBody() = default ;
    QueryAuditTaskResponseBody& operator=(const QueryAuditTaskResponseBody &) = default ;
    QueryAuditTaskResponseBody& operator=(QueryAuditTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(HtmlContent, htmlContent_);
        DARABONBA_PTR_TO_JSON(Response, response_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(HtmlContent, htmlContent_);
        DARABONBA_PTR_FROM_JSON(Response, response_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      class Response : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Response& obj) { 
          DARABONBA_PTR_TO_JSON(Header, header_);
          DARABONBA_PTR_TO_JSON(Payload, payload_);
        };
        friend void from_json(const Darabonba::Json& j, Response& obj) { 
          DARABONBA_PTR_FROM_JSON(Header, header_);
          DARABONBA_PTR_FROM_JSON(Payload, payload_);
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
            inline int32_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
            inline Usage& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


            // outputTokens Field Functions 
            bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
            void deleteOutputTokens() { this->outputTokens_ = nullptr;};
            inline int32_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
            inline Usage& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


            // totalTokens Field Functions 
            bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
            void deleteTotalTokens() { this->totalTokens_ = nullptr;};
            inline int32_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
            inline Usage& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


          protected:
            shared_ptr<int32_t> inputTokens_ {};
            shared_ptr<int32_t> outputTokens_ {};
            shared_ptr<int32_t> totalTokens_ {};
          };

          class Output : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Output& obj) { 
              DARABONBA_PTR_TO_JSON(Text, text_);
            };
            friend void from_json(const Darabonba::Json& j, Output& obj) { 
              DARABONBA_PTR_FROM_JSON(Text, text_);
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
            virtual bool empty() const override { return this->text_ == nullptr; };
            // text Field Functions 
            bool hasText() const { return this->text_ != nullptr;};
            void deleteText() { this->text_ = nullptr;};
            inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
            inline Output& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


          protected:
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
            DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(Event, event_);
            DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
            DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          };
          friend void from_json(const Darabonba::Json& j, Header& obj) { 
            DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(Event, event_);
            DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
            DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
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
        && this->errorMessage_ == nullptr && this->event_ == nullptr && this->sessionId_ == nullptr && this->taskId_ == nullptr; };
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


        protected:
          shared_ptr<string> errorCode_ {};
          shared_ptr<string> errorMessage_ {};
          shared_ptr<string> event_ {};
          shared_ptr<string> sessionId_ {};
          shared_ptr<string> taskId_ {};
        };

        virtual bool empty() const override { return this->header_ == nullptr
        && this->payload_ == nullptr; };
        // header Field Functions 
        bool hasHeader() const { return this->header_ != nullptr;};
        void deleteHeader() { this->header_ = nullptr;};
        inline const Response::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, Response::Header) };
        inline Response::Header getHeader() { DARABONBA_PTR_GET(header_, Response::Header) };
        inline Response& setHeader(const Response::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
        inline Response& setHeader(Response::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


        // payload Field Functions 
        bool hasPayload() const { return this->payload_ != nullptr;};
        void deletePayload() { this->payload_ = nullptr;};
        inline const Response::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, Response::Payload) };
        inline Response::Payload getPayload() { DARABONBA_PTR_GET(payload_, Response::Payload) };
        inline Response& setPayload(const Response::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
        inline Response& setPayload(Response::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


      protected:
        shared_ptr<Response::Header> header_ {};
        shared_ptr<Response::Payload> payload_ {};
      };

      virtual bool empty() const override { return this->auditTime_ == nullptr
        && this->content_ == nullptr && this->htmlContent_ == nullptr && this->response_ == nullptr && this->status_ == nullptr && this->taskStatus_ == nullptr
        && this->title_ == nullptr; };
      // auditTime Field Functions 
      bool hasAuditTime() const { return this->auditTime_ != nullptr;};
      void deleteAuditTime() { this->auditTime_ = nullptr;};
      inline string getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, "") };
      inline Data& setAuditTime(string auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // htmlContent Field Functions 
      bool hasHtmlContent() const { return this->htmlContent_ != nullptr;};
      void deleteHtmlContent() { this->htmlContent_ = nullptr;};
      inline string getHtmlContent() const { DARABONBA_PTR_GET_DEFAULT(htmlContent_, "") };
      inline Data& setHtmlContent(string htmlContent) { DARABONBA_PTR_SET_VALUE(htmlContent_, htmlContent) };


      // response Field Functions 
      bool hasResponse() const { return this->response_ != nullptr;};
      void deleteResponse() { this->response_ = nullptr;};
      inline const Data::Response & getResponse() const { DARABONBA_PTR_GET_CONST(response_, Data::Response) };
      inline Data::Response getResponse() { DARABONBA_PTR_GET(response_, Data::Response) };
      inline Data& setResponse(const Data::Response & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
      inline Data& setResponse(Data::Response && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline int32_t getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, 0) };
      inline Data& setTaskStatus(int32_t taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Data& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      shared_ptr<string> auditTime_ {};
      shared_ptr<string> content_ {};
      shared_ptr<string> htmlContent_ {};
      shared_ptr<Data::Response> response_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int32_t> taskStatus_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAuditTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAuditTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAuditTaskResponseBody::Data) };
    inline QueryAuditTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAuditTaskResponseBody::Data) };
    inline QueryAuditTaskResponseBody& setData(const QueryAuditTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAuditTaskResponseBody& setData(QueryAuditTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline QueryAuditTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAuditTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAuditTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAuditTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<QueryAuditTaskResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
