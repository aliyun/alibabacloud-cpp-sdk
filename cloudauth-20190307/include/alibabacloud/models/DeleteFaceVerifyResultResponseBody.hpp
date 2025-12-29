// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFACEVERIFYRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEFACEVERIFYRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DeleteFaceVerifyResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFaceVerifyResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFaceVerifyResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DeleteFaceVerifyResultResponseBody() = default ;
    DeleteFaceVerifyResultResponseBody(const DeleteFaceVerifyResultResponseBody &) = default ;
    DeleteFaceVerifyResultResponseBody(DeleteFaceVerifyResultResponseBody &&) = default ;
    DeleteFaceVerifyResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFaceVerifyResultResponseBody() = default ;
    DeleteFaceVerifyResultResponseBody& operator=(const DeleteFaceVerifyResultResponseBody &) = default ;
    DeleteFaceVerifyResultResponseBody& operator=(DeleteFaceVerifyResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_TO_JSON(DeleteResult, deleteResult_);
        DARABONBA_PTR_TO_JSON(FailReason, failReason_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(CertifyId, certifyId_);
        DARABONBA_PTR_FROM_JSON(DeleteResult, deleteResult_);
        DARABONBA_PTR_FROM_JSON(FailReason, failReason_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certifyId_ == nullptr
        && this->deleteResult_ == nullptr && this->failReason_ == nullptr; };
      // certifyId Field Functions 
      bool hasCertifyId() const { return this->certifyId_ != nullptr;};
      void deleteCertifyId() { this->certifyId_ = nullptr;};
      inline string getCertifyId() const { DARABONBA_PTR_GET_DEFAULT(certifyId_, "") };
      inline ResultObject& setCertifyId(string certifyId) { DARABONBA_PTR_SET_VALUE(certifyId_, certifyId) };


      // deleteResult Field Functions 
      bool hasDeleteResult() const { return this->deleteResult_ != nullptr;};
      void deleteDeleteResult() { this->deleteResult_ = nullptr;};
      inline string getDeleteResult() const { DARABONBA_PTR_GET_DEFAULT(deleteResult_, "") };
      inline ResultObject& setDeleteResult(string deleteResult) { DARABONBA_PTR_SET_VALUE(deleteResult_, deleteResult) };


      // failReason Field Functions 
      bool hasFailReason() const { return this->failReason_ != nullptr;};
      void deleteFailReason() { this->failReason_ = nullptr;};
      inline string getFailReason() const { DARABONBA_PTR_GET_DEFAULT(failReason_, "") };
      inline ResultObject& setFailReason(string failReason) { DARABONBA_PTR_SET_VALUE(failReason_, failReason) };


    protected:
      // Unique identifier for real-person authentication.
      shared_ptr<string> certifyId_ {};
      // Deletion result. Possible values are as follows:
      // 
      // - Y: Deletion successful.
      // - N: Deletion failed.
      shared_ptr<string> deleteResult_ {};
      // Reason for deletion failure
      // 
      // - NOT_DELETE_REPEATEDLY: Cannot be deleted repeatedly
      // - NEED_QUERY_VERIFY_RESULT: Need to query the verification result first, then delete
      shared_ptr<string> failReason_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->resultObject_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteFaceVerifyResultResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteFaceVerifyResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteFaceVerifyResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DeleteFaceVerifyResultResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DeleteFaceVerifyResultResponseBody::ResultObject) };
    inline DeleteFaceVerifyResultResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DeleteFaceVerifyResultResponseBody::ResultObject) };
    inline DeleteFaceVerifyResultResponseBody& setResultObject(const DeleteFaceVerifyResultResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DeleteFaceVerifyResultResponseBody& setResultObject(DeleteFaceVerifyResultResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // Return code: 200 for success, others for failure.
    shared_ptr<string> code_ {};
    // Return message.
    shared_ptr<string> message_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Returned result information.
    shared_ptr<DeleteFaceVerifyResultResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
