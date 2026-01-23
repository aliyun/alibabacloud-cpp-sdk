// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETESECURITYLEVELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETESECURITYLEVELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class DeleteSecurityLevelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteSecurityLevelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteSecurityLevelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DeleteResult, deleteResult_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DeleteSecurityLevelResponseBody() = default ;
    DeleteSecurityLevelResponseBody(const DeleteSecurityLevelResponseBody &) = default ;
    DeleteSecurityLevelResponseBody(DeleteSecurityLevelResponseBody &&) = default ;
    DeleteSecurityLevelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteSecurityLevelResponseBody() = default ;
    DeleteSecurityLevelResponseBody& operator=(const DeleteSecurityLevelResponseBody &) = default ;
    DeleteSecurityLevelResponseBody& operator=(DeleteSecurityLevelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DeleteResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeleteResult& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_TO_JSON(RelatedClassifyIdList, relatedClassifyIdList_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, DeleteResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
        DARABONBA_PTR_FROM_JSON(RelatedClassifyIdList, relatedClassifyIdList_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      DeleteResult() = default ;
      DeleteResult(const DeleteResult &) = default ;
      DeleteResult(DeleteResult &&) = default ;
      DeleteResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeleteResult() = default ;
      DeleteResult& operator=(const DeleteResult &) = default ;
      DeleteResult& operator=(DeleteResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->relatedClassifyIdList_ == nullptr && this->success_ == nullptr; };
      // errorCode Field Functions 
      bool hasErrorCode() const { return this->errorCode_ != nullptr;};
      void deleteErrorCode() { this->errorCode_ = nullptr;};
      inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
      inline DeleteResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


      // relatedClassifyIdList Field Functions 
      bool hasRelatedClassifyIdList() const { return this->relatedClassifyIdList_ != nullptr;};
      void deleteRelatedClassifyIdList() { this->relatedClassifyIdList_ = nullptr;};
      inline const vector<int64_t> & getRelatedClassifyIdList() const { DARABONBA_PTR_GET_CONST(relatedClassifyIdList_, vector<int64_t>) };
      inline vector<int64_t> getRelatedClassifyIdList() { DARABONBA_PTR_GET(relatedClassifyIdList_, vector<int64_t>) };
      inline DeleteResult& setRelatedClassifyIdList(const vector<int64_t> & relatedClassifyIdList) { DARABONBA_PTR_SET_VALUE(relatedClassifyIdList_, relatedClassifyIdList) };
      inline DeleteResult& setRelatedClassifyIdList(vector<int64_t> && relatedClassifyIdList) { DARABONBA_PTR_SET_RVALUE(relatedClassifyIdList_, relatedClassifyIdList) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline DeleteResult& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      shared_ptr<string> errorCode_ {};
      shared_ptr<vector<int64_t>> relatedClassifyIdList_ {};
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->deleteResult_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteSecurityLevelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // deleteResult Field Functions 
    bool hasDeleteResult() const { return this->deleteResult_ != nullptr;};
    void deleteDeleteResult() { this->deleteResult_ = nullptr;};
    inline const DeleteSecurityLevelResponseBody::DeleteResult & getDeleteResult() const { DARABONBA_PTR_GET_CONST(deleteResult_, DeleteSecurityLevelResponseBody::DeleteResult) };
    inline DeleteSecurityLevelResponseBody::DeleteResult getDeleteResult() { DARABONBA_PTR_GET(deleteResult_, DeleteSecurityLevelResponseBody::DeleteResult) };
    inline DeleteSecurityLevelResponseBody& setDeleteResult(const DeleteSecurityLevelResponseBody::DeleteResult & deleteResult) { DARABONBA_PTR_SET_VALUE(deleteResult_, deleteResult) };
    inline DeleteSecurityLevelResponseBody& setDeleteResult(DeleteSecurityLevelResponseBody::DeleteResult && deleteResult) { DARABONBA_PTR_SET_RVALUE(deleteResult_, deleteResult) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DeleteSecurityLevelResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteSecurityLevelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteSecurityLevelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DeleteSecurityLevelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<DeleteSecurityLevelResponseBody::DeleteResult> deleteResult_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
