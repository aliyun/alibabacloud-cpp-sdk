// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAARCHIVEORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataArchiveOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataArchiveOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataArchiveOrderDetail, dataArchiveOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataArchiveOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataArchiveOrderDetail, dataArchiveOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    GetDataArchiveOrderDetailResponseBody() = default ;
    GetDataArchiveOrderDetailResponseBody(const GetDataArchiveOrderDetailResponseBody &) = default ;
    GetDataArchiveOrderDetailResponseBody(GetDataArchiveOrderDetailResponseBody &&) = default ;
    GetDataArchiveOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataArchiveOrderDetailResponseBody() = default ;
    GetDataArchiveOrderDetailResponseBody& operator=(const GetDataArchiveOrderDetailResponseBody &) = default ;
    GetDataArchiveOrderDetailResponseBody& operator=(GetDataArchiveOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataArchiveOrderDetail_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->traceId_ != nullptr; };
    // dataArchiveOrderDetail Field Functions 
    bool hasDataArchiveOrderDetail() const { return this->dataArchiveOrderDetail_ != nullptr;};
    void deleteDataArchiveOrderDetail() { this->dataArchiveOrderDetail_ = nullptr;};
    inline const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail & dataArchiveOrderDetail() const { DARABONBA_PTR_GET_CONST(dataArchiveOrderDetail_, GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail) };
    inline GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail dataArchiveOrderDetail() { DARABONBA_PTR_GET(dataArchiveOrderDetail_, GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail) };
    inline GetDataArchiveOrderDetailResponseBody& setDataArchiveOrderDetail(const GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail & dataArchiveOrderDetail) { DARABONBA_PTR_SET_VALUE(dataArchiveOrderDetail_, dataArchiveOrderDetail) };
    inline GetDataArchiveOrderDetailResponseBody& setDataArchiveOrderDetail(GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail && dataArchiveOrderDetail) { DARABONBA_PTR_SET_RVALUE(dataArchiveOrderDetail_, dataArchiveOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataArchiveOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataArchiveOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataArchiveOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataArchiveOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetDataArchiveOrderDetailResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The details of data archiving tickets.
    std::shared_ptr<GetDataArchiveOrderDetailResponseBodyDataArchiveOrderDetail> dataArchiveOrderDetail_ = nullptr;
    // The error code returned if the call failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message that is returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request, which is used to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
    // Tracks service requests.
    std::shared_ptr<string> traceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
