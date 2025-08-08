// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructSyncOrderDetail, structSyncOrderDetail_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructSyncOrderDetail, structSyncOrderDetail_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStructSyncOrderDetailResponseBody() = default ;
    GetStructSyncOrderDetailResponseBody(const GetStructSyncOrderDetailResponseBody &) = default ;
    GetStructSyncOrderDetailResponseBody(GetStructSyncOrderDetailResponseBody &&) = default ;
    GetStructSyncOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncOrderDetailResponseBody() = default ;
    GetStructSyncOrderDetailResponseBody& operator=(const GetStructSyncOrderDetailResponseBody &) = default ;
    GetStructSyncOrderDetailResponseBody& operator=(GetStructSyncOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->structSyncOrderDetail_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetStructSyncOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetStructSyncOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStructSyncOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structSyncOrderDetail Field Functions 
    bool hasStructSyncOrderDetail() const { return this->structSyncOrderDetail_ != nullptr;};
    void deleteStructSyncOrderDetail() { this->structSyncOrderDetail_ = nullptr;};
    inline const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail & structSyncOrderDetail() const { DARABONBA_PTR_GET_CONST(structSyncOrderDetail_, GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail structSyncOrderDetail() { DARABONBA_PTR_GET(structSyncOrderDetail_, GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail) };
    inline GetStructSyncOrderDetailResponseBody& setStructSyncOrderDetail(const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail & structSyncOrderDetail) { DARABONBA_PTR_SET_VALUE(structSyncOrderDetail_, structSyncOrderDetail) };
    inline GetStructSyncOrderDetailResponseBody& setStructSyncOrderDetail(GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail && structSyncOrderDetail) { DARABONBA_PTR_SET_RVALUE(structSyncOrderDetail_, structSyncOrderDetail) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStructSyncOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the schema synchronization ticket.
    std::shared_ptr<GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail> structSyncOrderDetail_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
