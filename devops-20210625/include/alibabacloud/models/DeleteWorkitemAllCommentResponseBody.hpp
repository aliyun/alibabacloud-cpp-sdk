// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKITEMALLCOMMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKITEMALLCOMMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class DeleteWorkitemAllCommentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkitemAllCommentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(deleteFlag, deleteFlag_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkitemAllCommentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(deleteFlag, deleteFlag_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    DeleteWorkitemAllCommentResponseBody() = default ;
    DeleteWorkitemAllCommentResponseBody(const DeleteWorkitemAllCommentResponseBody &) = default ;
    DeleteWorkitemAllCommentResponseBody(DeleteWorkitemAllCommentResponseBody &&) = default ;
    DeleteWorkitemAllCommentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkitemAllCommentResponseBody() = default ;
    DeleteWorkitemAllCommentResponseBody& operator=(const DeleteWorkitemAllCommentResponseBody &) = default ;
    DeleteWorkitemAllCommentResponseBody& operator=(DeleteWorkitemAllCommentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteFlag_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // deleteFlag Field Functions 
    bool hasDeleteFlag() const { return this->deleteFlag_ != nullptr;};
    void deleteDeleteFlag() { this->deleteFlag_ = nullptr;};
    inline bool deleteFlag() const { DARABONBA_PTR_GET_DEFAULT(deleteFlag_, false) };
    inline DeleteWorkitemAllCommentResponseBody& setDeleteFlag(bool deleteFlag) { DARABONBA_PTR_SET_VALUE(deleteFlag_, deleteFlag) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DeleteWorkitemAllCommentResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline DeleteWorkitemAllCommentResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteWorkitemAllCommentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DeleteWorkitemAllCommentResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<bool> deleteFlag_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
