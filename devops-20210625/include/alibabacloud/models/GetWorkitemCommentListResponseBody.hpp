// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMCOMMENTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMCOMMENTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetWorkitemCommentListResponseBodyCommentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemCommentListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemCommentListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(commentList, commentList_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemCommentListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(commentList, commentList_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetWorkitemCommentListResponseBody() = default ;
    GetWorkitemCommentListResponseBody(const GetWorkitemCommentListResponseBody &) = default ;
    GetWorkitemCommentListResponseBody(GetWorkitemCommentListResponseBody &&) = default ;
    GetWorkitemCommentListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemCommentListResponseBody() = default ;
    GetWorkitemCommentListResponseBody& operator=(const GetWorkitemCommentListResponseBody &) = default ;
    GetWorkitemCommentListResponseBody& operator=(GetWorkitemCommentListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commentList_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMsg_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // commentList Field Functions 
    bool hasCommentList() const { return this->commentList_ != nullptr;};
    void deleteCommentList() { this->commentList_ = nullptr;};
    inline const vector<GetWorkitemCommentListResponseBodyCommentList> & commentList() const { DARABONBA_PTR_GET_CONST(commentList_, vector<GetWorkitemCommentListResponseBodyCommentList>) };
    inline vector<GetWorkitemCommentListResponseBodyCommentList> commentList() { DARABONBA_PTR_GET(commentList_, vector<GetWorkitemCommentListResponseBodyCommentList>) };
    inline GetWorkitemCommentListResponseBody& setCommentList(const vector<GetWorkitemCommentListResponseBodyCommentList> & commentList) { DARABONBA_PTR_SET_VALUE(commentList_, commentList) };
    inline GetWorkitemCommentListResponseBody& setCommentList(vector<GetWorkitemCommentListResponseBodyCommentList> && commentList) { DARABONBA_PTR_SET_RVALUE(commentList_, commentList) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetWorkitemCommentListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetWorkitemCommentListResponseBody& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkitemCommentListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string success() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetWorkitemCommentListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<vector<GetWorkitemCommentListResponseBodyCommentList>> commentList_ = nullptr;
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
