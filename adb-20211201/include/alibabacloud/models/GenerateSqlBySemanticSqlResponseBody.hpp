// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATESQLBYSEMANTICSQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATESQLBYSEMANTICSQLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GenerateSqlBySemanticSqlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateSqlBySemanticSqlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateSqlBySemanticSqlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateSqlBySemanticSqlResponseBody() = default ;
    GenerateSqlBySemanticSqlResponseBody(const GenerateSqlBySemanticSqlResponseBody &) = default ;
    GenerateSqlBySemanticSqlResponseBody(GenerateSqlBySemanticSqlResponseBody &&) = default ;
    GenerateSqlBySemanticSqlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateSqlBySemanticSqlResponseBody() = default ;
    GenerateSqlBySemanticSqlResponseBody& operator=(const GenerateSqlBySemanticSqlResponseBody &) = default ;
    GenerateSqlBySemanticSqlResponseBody& operator=(GenerateSqlBySemanticSqlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_TO_JSON(GeneratedSql, generatedSql_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
        DARABONBA_PTR_FROM_JSON(GeneratedSql, generatedSql_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
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
      virtual bool empty() const override { return this->errorMessage_ == nullptr
        && this->generatedSql_ == nullptr && this->success_ == nullptr; };
      // errorMessage Field Functions 
      bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
      void deleteErrorMessage() { this->errorMessage_ = nullptr;};
      inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
      inline Data& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


      // generatedSql Field Functions 
      bool hasGeneratedSql() const { return this->generatedSql_ != nullptr;};
      void deleteGeneratedSql() { this->generatedSql_ = nullptr;};
      inline string getGeneratedSql() const { DARABONBA_PTR_GET_DEFAULT(generatedSql_, "") };
      inline Data& setGeneratedSql(string generatedSql) { DARABONBA_PTR_SET_VALUE(generatedSql_, generatedSql) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The error message returned when the task fails to be created.
      shared_ptr<string> errorMessage_ {};
      // The generated executable SQL statement.
      shared_ptr<string> generatedSql_ {};
      // Indicates whether the generation request was successful. Valid values:
      // - **true**: Successful.
      // - **false**: Failed.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateSqlBySemanticSqlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GenerateSqlBySemanticSqlResponseBody::Data) };
    inline GenerateSqlBySemanticSqlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GenerateSqlBySemanticSqlResponseBody::Data) };
    inline GenerateSqlBySemanticSqlResponseBody& setData(const GenerateSqlBySemanticSqlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateSqlBySemanticSqlResponseBody& setData(GenerateSqlBySemanticSqlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateSqlBySemanticSqlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GenerateSqlBySemanticSqlResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
