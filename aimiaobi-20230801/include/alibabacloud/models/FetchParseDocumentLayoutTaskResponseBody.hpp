// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHPARSEDOCUMENTLAYOUTTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FETCHPARSEDOCUMENTLAYOUTTASKRESPONSEBODY_HPP_
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
  class FetchParseDocumentLayoutTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchParseDocumentLayoutTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FetchParseDocumentLayoutTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FetchParseDocumentLayoutTaskResponseBody() = default ;
    FetchParseDocumentLayoutTaskResponseBody(const FetchParseDocumentLayoutTaskResponseBody &) = default ;
    FetchParseDocumentLayoutTaskResponseBody(FetchParseDocumentLayoutTaskResponseBody &&) = default ;
    FetchParseDocumentLayoutTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchParseDocumentLayoutTaskResponseBody() = default ;
    FetchParseDocumentLayoutTaskResponseBody& operator=(const FetchParseDocumentLayoutTaskResponseBody &) = default ;
    FetchParseDocumentLayoutTaskResponseBody& operator=(FetchParseDocumentLayoutTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(LayoutResult, layoutResult_);
        DARABONBA_PTR_TO_JSON(TaskStats, taskStats_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(LayoutResult, layoutResult_);
        DARABONBA_PTR_FROM_JSON(TaskStats, taskStats_);
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
      class LayoutResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LayoutResult& obj) { 
          DARABONBA_PTR_TO_JSON(Elements, elements_);
        };
        friend void from_json(const Darabonba::Json& j, LayoutResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Elements, elements_);
        };
        LayoutResult() = default ;
        LayoutResult(const LayoutResult &) = default ;
        LayoutResult(LayoutResult &&) = default ;
        LayoutResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LayoutResult() = default ;
        LayoutResult& operator=(const LayoutResult &) = default ;
        LayoutResult& operator=(LayoutResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Elements : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Elements& obj) { 
            DARABONBA_PTR_TO_JSON(Content, content_);
            DARABONBA_PTR_TO_JSON(FormatContent, formatContent_);
            DARABONBA_PTR_TO_JSON(Index, index_);
            DARABONBA_PTR_TO_JSON(Type, type_);
          };
          friend void from_json(const Darabonba::Json& j, Elements& obj) { 
            DARABONBA_PTR_FROM_JSON(Content, content_);
            DARABONBA_PTR_FROM_JSON(FormatContent, formatContent_);
            DARABONBA_PTR_FROM_JSON(Index, index_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
          };
          Elements() = default ;
          Elements(const Elements &) = default ;
          Elements(Elements &&) = default ;
          Elements(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Elements() = default ;
          Elements& operator=(const Elements &) = default ;
          Elements& operator=(Elements &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->content_ == nullptr
        && this->formatContent_ == nullptr && this->index_ == nullptr && this->type_ == nullptr; };
          // content Field Functions 
          bool hasContent() const { return this->content_ != nullptr;};
          void deleteContent() { this->content_ = nullptr;};
          inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
          inline Elements& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


          // formatContent Field Functions 
          bool hasFormatContent() const { return this->formatContent_ != nullptr;};
          void deleteFormatContent() { this->formatContent_ = nullptr;};
          inline string getFormatContent() const { DARABONBA_PTR_GET_DEFAULT(formatContent_, "") };
          inline Elements& setFormatContent(string formatContent) { DARABONBA_PTR_SET_VALUE(formatContent_, formatContent) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline float getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0.0) };
          inline Elements& setIndex(float index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Elements& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        protected:
          shared_ptr<string> content_ {};
          shared_ptr<string> formatContent_ {};
          shared_ptr<float> index_ {};
          shared_ptr<string> type_ {};
        };

        virtual bool empty() const override { return this->elements_ == nullptr; };
        // elements Field Functions 
        bool hasElements() const { return this->elements_ != nullptr;};
        void deleteElements() { this->elements_ = nullptr;};
        inline const vector<LayoutResult::Elements> & getElements() const { DARABONBA_PTR_GET_CONST(elements_, vector<LayoutResult::Elements>) };
        inline vector<LayoutResult::Elements> getElements() { DARABONBA_PTR_GET(elements_, vector<LayoutResult::Elements>) };
        inline LayoutResult& setElements(const vector<LayoutResult::Elements> & elements) { DARABONBA_PTR_SET_VALUE(elements_, elements) };
        inline LayoutResult& setElements(vector<LayoutResult::Elements> && elements) { DARABONBA_PTR_SET_RVALUE(elements_, elements) };


      protected:
        shared_ptr<vector<LayoutResult::Elements>> elements_ {};
      };

      virtual bool empty() const override { return this->layoutResult_ == nullptr
        && this->taskStats_ == nullptr; };
      // layoutResult Field Functions 
      bool hasLayoutResult() const { return this->layoutResult_ != nullptr;};
      void deleteLayoutResult() { this->layoutResult_ = nullptr;};
      inline const Data::LayoutResult & getLayoutResult() const { DARABONBA_PTR_GET_CONST(layoutResult_, Data::LayoutResult) };
      inline Data::LayoutResult getLayoutResult() { DARABONBA_PTR_GET(layoutResult_, Data::LayoutResult) };
      inline Data& setLayoutResult(const Data::LayoutResult & layoutResult) { DARABONBA_PTR_SET_VALUE(layoutResult_, layoutResult) };
      inline Data& setLayoutResult(Data::LayoutResult && layoutResult) { DARABONBA_PTR_SET_RVALUE(layoutResult_, layoutResult) };


      // taskStats Field Functions 
      bool hasTaskStats() const { return this->taskStats_ != nullptr;};
      void deleteTaskStats() { this->taskStats_ = nullptr;};
      inline string getTaskStats() const { DARABONBA_PTR_GET_DEFAULT(taskStats_, "") };
      inline Data& setTaskStats(string taskStats) { DARABONBA_PTR_SET_VALUE(taskStats_, taskStats) };


    protected:
      shared_ptr<Data::LayoutResult> layoutResult_ {};
      shared_ptr<string> taskStats_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline FetchParseDocumentLayoutTaskResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const FetchParseDocumentLayoutTaskResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, FetchParseDocumentLayoutTaskResponseBody::Data) };
    inline FetchParseDocumentLayoutTaskResponseBody::Data getData() { DARABONBA_PTR_GET(data_, FetchParseDocumentLayoutTaskResponseBody::Data) };
    inline FetchParseDocumentLayoutTaskResponseBody& setData(const FetchParseDocumentLayoutTaskResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline FetchParseDocumentLayoutTaskResponseBody& setData(FetchParseDocumentLayoutTaskResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline FetchParseDocumentLayoutTaskResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FetchParseDocumentLayoutTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FetchParseDocumentLayoutTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FetchParseDocumentLayoutTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<FetchParseDocumentLayoutTaskResponseBody::Data> data_ {};
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
