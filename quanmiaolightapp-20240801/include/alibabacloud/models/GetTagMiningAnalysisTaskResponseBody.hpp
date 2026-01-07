// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTAGMININGANALYSISTASKRESPONSEBODY_HPP_
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
  class GetTagMiningAnalysisTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTagMiningAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTagMiningAnalysisTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetTagMiningAnalysisTaskResponseBody() = default ;
    GetTagMiningAnalysisTaskResponseBody(const GetTagMiningAnalysisTaskResponseBody &) = default ;
    GetTagMiningAnalysisTaskResponseBody(GetTagMiningAnalysisTaskResponseBody &&) = default ;
    GetTagMiningAnalysisTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTagMiningAnalysisTaskResponseBody() = default ;
    GetTagMiningAnalysisTaskResponseBody& operator=(const GetTagMiningAnalysisTaskResponseBody &) = default ;
    GetTagMiningAnalysisTaskResponseBody& operator=(GetTagMiningAnalysisTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(results, results_);
        DARABONBA_PTR_TO_JSON(status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(results, results_);
        DARABONBA_PTR_FROM_JSON(status, status_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(customId, customId_);
          DARABONBA_PTR_TO_JSON(header, header_);
          DARABONBA_PTR_TO_JSON(payload, payload_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(customId, customId_);
          DARABONBA_PTR_FROM_JSON(header, header_);
          DARABONBA_PTR_FROM_JSON(payload, payload_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
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
              DARABONBA_PTR_TO_JSON(inputToken, inputToken_);
              DARABONBA_PTR_TO_JSON(outputToken, outputToken_);
              DARABONBA_PTR_TO_JSON(totalToken, totalToken_);
            };
            friend void from_json(const Darabonba::Json& j, Usage& obj) { 
              DARABONBA_PTR_FROM_JSON(inputToken, inputToken_);
              DARABONBA_PTR_FROM_JSON(outputToken, outputToken_);
              DARABONBA_PTR_FROM_JSON(totalToken, totalToken_);
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
            virtual bool empty() const override { return this->inputToken_ == nullptr
        && this->outputToken_ == nullptr && this->totalToken_ == nullptr; };
            // inputToken Field Functions 
            bool hasInputToken() const { return this->inputToken_ != nullptr;};
            void deleteInputToken() { this->inputToken_ = nullptr;};
            inline int64_t getInputToken() const { DARABONBA_PTR_GET_DEFAULT(inputToken_, 0L) };
            inline Usage& setInputToken(int64_t inputToken) { DARABONBA_PTR_SET_VALUE(inputToken_, inputToken) };


            // outputToken Field Functions 
            bool hasOutputToken() const { return this->outputToken_ != nullptr;};
            void deleteOutputToken() { this->outputToken_ = nullptr;};
            inline int64_t getOutputToken() const { DARABONBA_PTR_GET_DEFAULT(outputToken_, 0L) };
            inline Usage& setOutputToken(int64_t outputToken) { DARABONBA_PTR_SET_VALUE(outputToken_, outputToken) };


            // totalToken Field Functions 
            bool hasTotalToken() const { return this->totalToken_ != nullptr;};
            void deleteTotalToken() { this->totalToken_ = nullptr;};
            inline int64_t getTotalToken() const { DARABONBA_PTR_GET_DEFAULT(totalToken_, 0L) };
            inline Usage& setTotalToken(int64_t totalToken) { DARABONBA_PTR_SET_VALUE(totalToken_, totalToken) };


          protected:
            shared_ptr<int64_t> inputToken_ {};
            shared_ptr<int64_t> outputToken_ {};
            shared_ptr<int64_t> totalToken_ {};
          };

          class Output : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Output& obj) { 
              DARABONBA_PTR_TO_JSON(text, text_);
            };
            friend void from_json(const Darabonba::Json& j, Output& obj) { 
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
            DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
            DARABONBA_PTR_TO_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_TO_JSON(event, event_);
            DARABONBA_PTR_TO_JSON(requestId, requestId_);
          };
          friend void from_json(const Darabonba::Json& j, Header& obj) { 
            DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
            DARABONBA_PTR_FROM_JSON(errorMessage, errorMessage_);
            DARABONBA_PTR_FROM_JSON(event, event_);
            DARABONBA_PTR_FROM_JSON(requestId, requestId_);
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
        && this->errorMessage_ == nullptr && this->event_ == nullptr && this->requestId_ == nullptr; };
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


          // requestId Field Functions 
          bool hasRequestId() const { return this->requestId_ != nullptr;};
          void deleteRequestId() { this->requestId_ = nullptr;};
          inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
          inline Header& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        protected:
          shared_ptr<string> errorCode_ {};
          shared_ptr<string> errorMessage_ {};
          shared_ptr<string> event_ {};
          shared_ptr<string> requestId_ {};
        };

        virtual bool empty() const override { return this->customId_ == nullptr
        && this->header_ == nullptr && this->payload_ == nullptr; };
        // customId Field Functions 
        bool hasCustomId() const { return this->customId_ != nullptr;};
        void deleteCustomId() { this->customId_ = nullptr;};
        inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
        inline Results& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


        // header Field Functions 
        bool hasHeader() const { return this->header_ != nullptr;};
        void deleteHeader() { this->header_ = nullptr;};
        inline const Results::Header & getHeader() const { DARABONBA_PTR_GET_CONST(header_, Results::Header) };
        inline Results::Header getHeader() { DARABONBA_PTR_GET(header_, Results::Header) };
        inline Results& setHeader(const Results::Header & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
        inline Results& setHeader(Results::Header && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


        // payload Field Functions 
        bool hasPayload() const { return this->payload_ != nullptr;};
        void deletePayload() { this->payload_ = nullptr;};
        inline const Results::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, Results::Payload) };
        inline Results::Payload getPayload() { DARABONBA_PTR_GET(payload_, Results::Payload) };
        inline Results& setPayload(const Results::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
        inline Results& setPayload(Results::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


      protected:
        shared_ptr<string> customId_ {};
        shared_ptr<Results::Header> header_ {};
        shared_ptr<Results::Payload> payload_ {};
      };

      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->results_ == nullptr && this->status_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline Data& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<string> errorMessage_ {};
      shared_ptr<vector<Data::Results>> results_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTagMiningAnalysisTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTagMiningAnalysisTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTagMiningAnalysisTaskResponseBody::Data) };
    inline GetTagMiningAnalysisTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTagMiningAnalysisTaskResponseBody::Data) };
    inline GetTagMiningAnalysisTaskResponseBody& setData(const GetTagMiningAnalysisTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTagMiningAnalysisTaskResponseBody& setData(GetTagMiningAnalysisTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline GetTagMiningAnalysisTaskResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTagMiningAnalysisTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTagMiningAnalysisTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTagMiningAnalysisTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetTagMiningAnalysisTaskResponseBody::Data> data_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
