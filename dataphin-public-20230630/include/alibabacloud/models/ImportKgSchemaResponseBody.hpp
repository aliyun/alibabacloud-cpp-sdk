// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKGSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKGSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ImportKgSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKgSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(ImportResult, importResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKgSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(ImportResult, importResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImportKgSchemaResponseBody() = default ;
    ImportKgSchemaResponseBody(const ImportKgSchemaResponseBody &) = default ;
    ImportKgSchemaResponseBody(ImportKgSchemaResponseBody &&) = default ;
    ImportKgSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKgSchemaResponseBody() = default ;
    ImportKgSchemaResponseBody& operator=(const ImportKgSchemaResponseBody &) = default ;
    ImportKgSchemaResponseBody& operator=(ImportKgSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ImportResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ImportResult& obj) { 
        DARABONBA_PTR_TO_JSON(EntityTypeCount, entityTypeCount_);
        DARABONBA_PTR_TO_JSON(RelationTypeCount, relationTypeCount_);
      };
      friend void from_json(const Darabonba::Json& j, ImportResult& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityTypeCount, entityTypeCount_);
        DARABONBA_PTR_FROM_JSON(RelationTypeCount, relationTypeCount_);
      };
      ImportResult() = default ;
      ImportResult(const ImportResult &) = default ;
      ImportResult(ImportResult &&) = default ;
      ImportResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ImportResult() = default ;
      ImportResult& operator=(const ImportResult &) = default ;
      ImportResult& operator=(ImportResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->entityTypeCount_ == nullptr
        && this->relationTypeCount_ == nullptr; };
      // entityTypeCount Field Functions 
      bool hasEntityTypeCount() const { return this->entityTypeCount_ != nullptr;};
      void deleteEntityTypeCount() { this->entityTypeCount_ = nullptr;};
      inline int32_t getEntityTypeCount() const { DARABONBA_PTR_GET_DEFAULT(entityTypeCount_, 0) };
      inline ImportResult& setEntityTypeCount(int32_t entityTypeCount) { DARABONBA_PTR_SET_VALUE(entityTypeCount_, entityTypeCount) };


      // relationTypeCount Field Functions 
      bool hasRelationTypeCount() const { return this->relationTypeCount_ != nullptr;};
      void deleteRelationTypeCount() { this->relationTypeCount_ = nullptr;};
      inline int32_t getRelationTypeCount() const { DARABONBA_PTR_GET_DEFAULT(relationTypeCount_, 0) };
      inline ImportResult& setRelationTypeCount(int32_t relationTypeCount) { DARABONBA_PTR_SET_VALUE(relationTypeCount_, relationTypeCount) };


    protected:
      shared_ptr<int32_t> entityTypeCount_ {};
      shared_ptr<int32_t> relationTypeCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->importResult_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImportKgSchemaResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ImportKgSchemaResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // importResult Field Functions 
    bool hasImportResult() const { return this->importResult_ != nullptr;};
    void deleteImportResult() { this->importResult_ = nullptr;};
    inline const ImportKgSchemaResponseBody::ImportResult & getImportResult() const { DARABONBA_PTR_GET_CONST(importResult_, ImportKgSchemaResponseBody::ImportResult) };
    inline ImportKgSchemaResponseBody::ImportResult getImportResult() { DARABONBA_PTR_GET(importResult_, ImportKgSchemaResponseBody::ImportResult) };
    inline ImportKgSchemaResponseBody& setImportResult(const ImportKgSchemaResponseBody::ImportResult & importResult) { DARABONBA_PTR_SET_VALUE(importResult_, importResult) };
    inline ImportKgSchemaResponseBody& setImportResult(ImportKgSchemaResponseBody::ImportResult && importResult) { DARABONBA_PTR_SET_RVALUE(importResult_, importResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImportKgSchemaResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportKgSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ImportKgSchemaResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<ImportKgSchemaResponseBody::ImportResult> importResult_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
