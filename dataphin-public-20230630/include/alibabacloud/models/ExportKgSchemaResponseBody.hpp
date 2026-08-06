// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTKGSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTKGSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExportKgSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportKgSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SchemaInfo, schemaInfo_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExportKgSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SchemaInfo, schemaInfo_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExportKgSchemaResponseBody() = default ;
    ExportKgSchemaResponseBody(const ExportKgSchemaResponseBody &) = default ;
    ExportKgSchemaResponseBody(ExportKgSchemaResponseBody &&) = default ;
    ExportKgSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportKgSchemaResponseBody() = default ;
    ExportKgSchemaResponseBody& operator=(const ExportKgSchemaResponseBody &) = default ;
    ExportKgSchemaResponseBody& operator=(ExportKgSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SchemaInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SchemaInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(OutputFormat, outputFormat_);
      };
      friend void from_json(const Darabonba::Json& j, SchemaInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(OutputFormat, outputFormat_);
      };
      SchemaInfo() = default ;
      SchemaInfo(const SchemaInfo &) = default ;
      SchemaInfo(SchemaInfo &&) = default ;
      SchemaInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SchemaInfo() = default ;
      SchemaInfo& operator=(const SchemaInfo &) = default ;
      SchemaInfo& operator=(SchemaInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->outputFormat_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline SchemaInfo& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // outputFormat Field Functions 
      bool hasOutputFormat() const { return this->outputFormat_ != nullptr;};
      void deleteOutputFormat() { this->outputFormat_ = nullptr;};
      inline string getOutputFormat() const { DARABONBA_PTR_GET_DEFAULT(outputFormat_, "") };
      inline SchemaInfo& setOutputFormat(string outputFormat) { DARABONBA_PTR_SET_VALUE(outputFormat_, outputFormat) };


    protected:
      // The knowledge graph definition content converted based on the specified format.
      shared_ptr<string> content_ {};
      // The format of the returned knowledge graph definition content. Valid values: json and yaml.
      shared_ptr<string> outputFormat_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->schemaInfo_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ExportKgSchemaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ExportKgSchemaResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExportKgSchemaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExportKgSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schemaInfo Field Functions 
    bool hasSchemaInfo() const { return this->schemaInfo_ != nullptr;};
    void deleteSchemaInfo() { this->schemaInfo_ = nullptr;};
    inline const ExportKgSchemaResponseBody::SchemaInfo & getSchemaInfo() const { DARABONBA_PTR_GET_CONST(schemaInfo_, ExportKgSchemaResponseBody::SchemaInfo) };
    inline ExportKgSchemaResponseBody::SchemaInfo getSchemaInfo() { DARABONBA_PTR_GET(schemaInfo_, ExportKgSchemaResponseBody::SchemaInfo) };
    inline ExportKgSchemaResponseBody& setSchemaInfo(const ExportKgSchemaResponseBody::SchemaInfo & schemaInfo) { DARABONBA_PTR_SET_VALUE(schemaInfo_, schemaInfo) };
    inline ExportKgSchemaResponseBody& setSchemaInfo(ExportKgSchemaResponseBody::SchemaInfo && schemaInfo) { DARABONBA_PTR_SET_RVALUE(schemaInfo_, schemaInfo) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExportKgSchemaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The knowledge graph definition details.
    shared_ptr<ExportKgSchemaResponseBody::SchemaInfo> schemaInfo_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
