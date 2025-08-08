// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETOWNERAPPLYORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOwnerApplyOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOwnerApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OwnerApplyOrderDetail, ownerApplyOrderDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetOwnerApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OwnerApplyOrderDetail, ownerApplyOrderDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetOwnerApplyOrderDetailResponseBody() = default ;
    GetOwnerApplyOrderDetailResponseBody(const GetOwnerApplyOrderDetailResponseBody &) = default ;
    GetOwnerApplyOrderDetailResponseBody(GetOwnerApplyOrderDetailResponseBody &&) = default ;
    GetOwnerApplyOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOwnerApplyOrderDetailResponseBody() = default ;
    GetOwnerApplyOrderDetailResponseBody& operator=(const GetOwnerApplyOrderDetailResponseBody &) = default ;
    GetOwnerApplyOrderDetailResponseBody& operator=(GetOwnerApplyOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->ownerApplyOrderDetail_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetOwnerApplyOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetOwnerApplyOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // ownerApplyOrderDetail Field Functions 
    bool hasOwnerApplyOrderDetail() const { return this->ownerApplyOrderDetail_ != nullptr;};
    void deleteOwnerApplyOrderDetail() { this->ownerApplyOrderDetail_ = nullptr;};
    inline const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail & ownerApplyOrderDetail() const { DARABONBA_PTR_GET_CONST(ownerApplyOrderDetail_, GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail) };
    inline GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail ownerApplyOrderDetail() { DARABONBA_PTR_GET(ownerApplyOrderDetail_, GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail) };
    inline GetOwnerApplyOrderDetailResponseBody& setOwnerApplyOrderDetail(const GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail & ownerApplyOrderDetail) { DARABONBA_PTR_SET_VALUE(ownerApplyOrderDetail_, ownerApplyOrderDetail) };
    inline GetOwnerApplyOrderDetailResponseBody& setOwnerApplyOrderDetail(GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail && ownerApplyOrderDetail) { DARABONBA_PTR_SET_RVALUE(ownerApplyOrderDetail_, ownerApplyOrderDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOwnerApplyOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetOwnerApplyOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The details of the ticket.
    std::shared_ptr<GetOwnerApplyOrderDetailResponseBodyOwnerApplyOrderDetail> ownerApplyOrderDetail_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
