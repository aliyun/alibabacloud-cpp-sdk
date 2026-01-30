// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVERIFYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEVERIFYRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class DeleteVerifyResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVerifyResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVerifyResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DeleteVerifyResultResponseBody() = default ;
    DeleteVerifyResultResponseBody(const DeleteVerifyResultResponseBody &) = default ;
    DeleteVerifyResultResponseBody(DeleteVerifyResultResponseBody &&) = default ;
    DeleteVerifyResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVerifyResultResponseBody() = default ;
    DeleteVerifyResultResponseBody& operator=(const DeleteVerifyResultResponseBody &) = default ;
    DeleteVerifyResultResponseBody& operator=(DeleteVerifyResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(DeleteResult, deleteResult_);
        DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(DeleteResult, deleteResult_);
        DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deleteResult_ == nullptr
        && this->transactionId_ == nullptr; };
      // deleteResult Field Functions 
      bool hasDeleteResult() const { return this->deleteResult_ != nullptr;};
      void deleteDeleteResult() { this->deleteResult_ = nullptr;};
      inline string getDeleteResult() const { DARABONBA_PTR_GET_DEFAULT(deleteResult_, "") };
      inline Result& setDeleteResult(string deleteResult) { DARABONBA_PTR_SET_VALUE(deleteResult_, deleteResult) };


      // transactionId Field Functions 
      bool hasTransactionId() const { return this->transactionId_ != nullptr;};
      void deleteTransactionId() { this->transactionId_ = nullptr;};
      inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
      inline Result& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    protected:
      // Deletion result. Y indicates successful deletion, N indicates failed deletion
      shared_ptr<string> deleteResult_ {};
      // Unique identifier of the authentication request
      shared_ptr<string> transactionId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteVerifyResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteVerifyResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteVerifyResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DeleteVerifyResultResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, DeleteVerifyResultResponseBody::Result) };
    inline DeleteVerifyResultResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, DeleteVerifyResultResponseBody::Result) };
    inline DeleteVerifyResultResponseBody& setResult(const DeleteVerifyResultResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DeleteVerifyResultResponseBody& setResult(DeleteVerifyResultResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // Return code
    shared_ptr<string> code_ {};
    // Return message
    shared_ptr<string> message_ {};
    // ID of this request
    shared_ptr<string> requestId_ {};
    // Return result
    shared_ptr<DeleteVerifyResultResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
