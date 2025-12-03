// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKITEMCOMMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKITEMCOMMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateWorkitemCommentResponseBodyComment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateWorkitemCommentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkitemCommentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkitemCommentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    CreateWorkitemCommentResponseBody() = default ;
    CreateWorkitemCommentResponseBody(const CreateWorkitemCommentResponseBody &) = default ;
    CreateWorkitemCommentResponseBody(CreateWorkitemCommentResponseBody &&) = default ;
    CreateWorkitemCommentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkitemCommentResponseBody() = default ;
    CreateWorkitemCommentResponseBody& operator=(const CreateWorkitemCommentResponseBody &) = default ;
    CreateWorkitemCommentResponseBody& operator=(CreateWorkitemCommentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline const CreateWorkitemCommentResponseBodyComment & comment() const { DARABONBA_PTR_GET_CONST(comment_, CreateWorkitemCommentResponseBodyComment) };
    inline CreateWorkitemCommentResponseBodyComment comment() { DARABONBA_PTR_GET(comment_, CreateWorkitemCommentResponseBodyComment) };
    inline CreateWorkitemCommentResponseBody& setComment(const CreateWorkitemCommentResponseBodyComment & comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };
    inline CreateWorkitemCommentResponseBody& setComment(CreateWorkitemCommentResponseBodyComment && comment) { DARABONBA_PTR_SET_RVALUE(comment_, comment) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateWorkitemCommentResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline CreateWorkitemCommentResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkitemCommentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline CreateWorkitemCommentResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<CreateWorkitemCommentResponseBodyComment> comment_ = nullptr;
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
