// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAUTHORITYTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAUTHORITYTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateAuthorityTemplateResponseBodyAuthorityTemplateView.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateAuthorityTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAuthorityTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityTemplateView, authorityTemplateView_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAuthorityTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityTemplateView, authorityTemplateView_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    UpdateAuthorityTemplateResponseBody() = default ;
    UpdateAuthorityTemplateResponseBody(const UpdateAuthorityTemplateResponseBody &) = default ;
    UpdateAuthorityTemplateResponseBody(UpdateAuthorityTemplateResponseBody &&) = default ;
    UpdateAuthorityTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAuthorityTemplateResponseBody() = default ;
    UpdateAuthorityTemplateResponseBody& operator=(const UpdateAuthorityTemplateResponseBody &) = default ;
    UpdateAuthorityTemplateResponseBody& operator=(UpdateAuthorityTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorityTemplateView_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->tid_ != nullptr; };
    // authorityTemplateView Field Functions 
    bool hasAuthorityTemplateView() const { return this->authorityTemplateView_ != nullptr;};
    void deleteAuthorityTemplateView() { this->authorityTemplateView_ = nullptr;};
    inline const UpdateAuthorityTemplateResponseBodyAuthorityTemplateView & authorityTemplateView() const { DARABONBA_PTR_GET_CONST(authorityTemplateView_, UpdateAuthorityTemplateResponseBodyAuthorityTemplateView) };
    inline UpdateAuthorityTemplateResponseBodyAuthorityTemplateView authorityTemplateView() { DARABONBA_PTR_GET(authorityTemplateView_, UpdateAuthorityTemplateResponseBodyAuthorityTemplateView) };
    inline UpdateAuthorityTemplateResponseBody& setAuthorityTemplateView(const UpdateAuthorityTemplateResponseBodyAuthorityTemplateView & authorityTemplateView) { DARABONBA_PTR_SET_VALUE(authorityTemplateView_, authorityTemplateView) };
    inline UpdateAuthorityTemplateResponseBody& setAuthorityTemplateView(UpdateAuthorityTemplateResponseBodyAuthorityTemplateView && authorityTemplateView) { DARABONBA_PTR_SET_RVALUE(authorityTemplateView_, authorityTemplateView) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UpdateAuthorityTemplateResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UpdateAuthorityTemplateResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateAuthorityTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateAuthorityTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline UpdateAuthorityTemplateResponseBody& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The details of the permission template.
    std::shared_ptr<UpdateAuthorityTemplateResponseBodyAuthorityTemplateView> authorityTemplateView_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
    // The ID of the tenant.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
