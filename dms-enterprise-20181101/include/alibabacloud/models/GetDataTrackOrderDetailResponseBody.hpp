// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATATRACKORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATATRACKORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataTrackOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataTrackOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataTrackOrderDetail, dataTrackOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataTrackOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataTrackOrderDetail, dataTrackOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataTrackOrderDetailResponseBody() = default ;
    GetDataTrackOrderDetailResponseBody(const GetDataTrackOrderDetailResponseBody &) = default ;
    GetDataTrackOrderDetailResponseBody(GetDataTrackOrderDetailResponseBody &&) = default ;
    GetDataTrackOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataTrackOrderDetailResponseBody() = default ;
    GetDataTrackOrderDetailResponseBody& operator=(const GetDataTrackOrderDetailResponseBody &) = default ;
    GetDataTrackOrderDetailResponseBody& operator=(GetDataTrackOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataTrackOrderDetail_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // dataTrackOrderDetail Field Functions 
    bool hasDataTrackOrderDetail() const { return this->dataTrackOrderDetail_ != nullptr;};
    void deleteDataTrackOrderDetail() { this->dataTrackOrderDetail_ = nullptr;};
    inline const GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail & dataTrackOrderDetail() const { DARABONBA_PTR_GET_CONST(dataTrackOrderDetail_, GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail) };
    inline GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail dataTrackOrderDetail() { DARABONBA_PTR_GET(dataTrackOrderDetail_, GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail) };
    inline GetDataTrackOrderDetailResponseBody& setDataTrackOrderDetail(const GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail & dataTrackOrderDetail) { DARABONBA_PTR_SET_VALUE(dataTrackOrderDetail_, dataTrackOrderDetail) };
    inline GetDataTrackOrderDetailResponseBody& setDataTrackOrderDetail(GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail && dataTrackOrderDetail) { DARABONBA_PTR_SET_RVALUE(dataTrackOrderDetail_, dataTrackOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataTrackOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataTrackOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataTrackOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataTrackOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the ticket.
    std::shared_ptr<GetDataTrackOrderDetailResponseBodyDataTrackOrderDetail> dataTrackOrderDetail_ = nullptr;
    // The error code returned if the request failed.
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
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
