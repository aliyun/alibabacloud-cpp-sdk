// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPERMAPPLYORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetPermApplyOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPermApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PermApplyOrderDetail, permApplyOrderDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetPermApplyOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PermApplyOrderDetail, permApplyOrderDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetPermApplyOrderDetailResponseBody() = default ;
    GetPermApplyOrderDetailResponseBody(const GetPermApplyOrderDetailResponseBody &) = default ;
    GetPermApplyOrderDetailResponseBody(GetPermApplyOrderDetailResponseBody &&) = default ;
    GetPermApplyOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPermApplyOrderDetailResponseBody() = default ;
    GetPermApplyOrderDetailResponseBody& operator=(const GetPermApplyOrderDetailResponseBody &) = default ;
    GetPermApplyOrderDetailResponseBody& operator=(GetPermApplyOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->permApplyOrderDetail_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetPermApplyOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetPermApplyOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // permApplyOrderDetail Field Functions 
    bool hasPermApplyOrderDetail() const { return this->permApplyOrderDetail_ != nullptr;};
    void deletePermApplyOrderDetail() { this->permApplyOrderDetail_ = nullptr;};
    inline const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail & permApplyOrderDetail() const { DARABONBA_PTR_GET_CONST(permApplyOrderDetail_, GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail) };
    inline GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail permApplyOrderDetail() { DARABONBA_PTR_GET(permApplyOrderDetail_, GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail) };
    inline GetPermApplyOrderDetailResponseBody& setPermApplyOrderDetail(const GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail & permApplyOrderDetail) { DARABONBA_PTR_SET_VALUE(permApplyOrderDetail_, permApplyOrderDetail) };
    inline GetPermApplyOrderDetailResponseBody& setPermApplyOrderDetail(GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail && permApplyOrderDetail) { DARABONBA_PTR_SET_RVALUE(permApplyOrderDetail_, permApplyOrderDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPermApplyOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetPermApplyOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The details of the permission application ticket.
    std::shared_ptr<GetPermApplyOrderDetailResponseBodyPermApplyOrderDetail> permApplyOrderDetail_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
