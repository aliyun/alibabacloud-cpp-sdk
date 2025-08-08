// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetApprovalDetailResponseBodyApprovalDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetApprovalDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApprovalDetail, approvalDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApprovalDetail, approvalDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetApprovalDetailResponseBody() = default ;
    GetApprovalDetailResponseBody(const GetApprovalDetailResponseBody &) = default ;
    GetApprovalDetailResponseBody(GetApprovalDetailResponseBody &&) = default ;
    GetApprovalDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalDetailResponseBody() = default ;
    GetApprovalDetailResponseBody& operator=(const GetApprovalDetailResponseBody &) = default ;
    GetApprovalDetailResponseBody& operator=(GetApprovalDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->approvalDetail_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // approvalDetail Field Functions 
    bool hasApprovalDetail() const { return this->approvalDetail_ != nullptr;};
    void deleteApprovalDetail() { this->approvalDetail_ = nullptr;};
    inline const GetApprovalDetailResponseBodyApprovalDetail & approvalDetail() const { DARABONBA_PTR_GET_CONST(approvalDetail_, GetApprovalDetailResponseBodyApprovalDetail) };
    inline GetApprovalDetailResponseBodyApprovalDetail approvalDetail() { DARABONBA_PTR_GET(approvalDetail_, GetApprovalDetailResponseBodyApprovalDetail) };
    inline GetApprovalDetailResponseBody& setApprovalDetail(const GetApprovalDetailResponseBodyApprovalDetail & approvalDetail) { DARABONBA_PTR_SET_VALUE(approvalDetail_, approvalDetail) };
    inline GetApprovalDetailResponseBody& setApprovalDetail(GetApprovalDetailResponseBodyApprovalDetail && approvalDetail) { DARABONBA_PTR_SET_RVALUE(approvalDetail_, approvalDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetApprovalDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetApprovalDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetApprovalDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetApprovalDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The approval details of the ticket.
    std::shared_ptr<GetApprovalDetailResponseBodyApprovalDetail> approvalDetail_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
