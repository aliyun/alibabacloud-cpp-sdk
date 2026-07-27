// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEVPRODPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEVPRODPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateDevProdProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDevProdProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateResult, createResult_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDevProdProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateResult, createResult_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateDevProdProjectResponseBody() = default ;
    CreateDevProdProjectResponseBody(const CreateDevProdProjectResponseBody &) = default ;
    CreateDevProdProjectResponseBody(CreateDevProdProjectResponseBody &&) = default ;
    CreateDevProdProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDevProdProjectResponseBody() = default ;
    CreateDevProdProjectResponseBody& operator=(const CreateDevProdProjectResponseBody &) = default ;
    CreateDevProdProjectResponseBody& operator=(CreateDevProdProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateResult& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
      };
      friend void from_json(const Darabonba::Json& j, CreateResult& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
      };
      CreateResult() = default ;
      CreateResult(const CreateResult &) = default ;
      CreateResult(CreateResult &&) = default ;
      CreateResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateResult() = default ;
      CreateResult& operator=(const CreateResult &) = default ;
      CreateResult& operator=(CreateResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline CreateResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    protected:
      // The project ID.
      shared_ptr<int64_t> id_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->createResult_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateDevProdProjectResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createResult Field Functions 
    bool hasCreateResult() const { return this->createResult_ != nullptr;};
    void deleteCreateResult() { this->createResult_ = nullptr;};
    inline const CreateDevProdProjectResponseBody::CreateResult & getCreateResult() const { DARABONBA_PTR_GET_CONST(createResult_, CreateDevProdProjectResponseBody::CreateResult) };
    inline CreateDevProdProjectResponseBody::CreateResult getCreateResult() { DARABONBA_PTR_GET(createResult_, CreateDevProdProjectResponseBody::CreateResult) };
    inline CreateDevProdProjectResponseBody& setCreateResult(const CreateDevProdProjectResponseBody::CreateResult & createResult) { DARABONBA_PTR_SET_VALUE(createResult_, createResult) };
    inline CreateDevProdProjectResponseBody& setCreateResult(CreateDevProdProjectResponseBody::CreateResult && createResult) { DARABONBA_PTR_SET_RVALUE(createResult_, createResult) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateDevProdProjectResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateDevProdProjectResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDevProdProjectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateDevProdProjectResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The creation result.
    shared_ptr<CreateDevProdProjectResponseBody::CreateResult> createResult_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
