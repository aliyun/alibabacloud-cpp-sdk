// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAEXPORTORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataExportOrderDetailResponseBodyDataExportOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataExportOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataExportOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataExportOrderDetail, dataExportOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataExportOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataExportOrderDetail, dataExportOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataExportOrderDetailResponseBody() = default ;
    GetDataExportOrderDetailResponseBody(const GetDataExportOrderDetailResponseBody &) = default ;
    GetDataExportOrderDetailResponseBody(GetDataExportOrderDetailResponseBody &&) = default ;
    GetDataExportOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataExportOrderDetailResponseBody() = default ;
    GetDataExportOrderDetailResponseBody& operator=(const GetDataExportOrderDetailResponseBody &) = default ;
    GetDataExportOrderDetailResponseBody& operator=(GetDataExportOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataExportOrderDetail_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // dataExportOrderDetail Field Functions 
    bool hasDataExportOrderDetail() const { return this->dataExportOrderDetail_ != nullptr;};
    void deleteDataExportOrderDetail() { this->dataExportOrderDetail_ = nullptr;};
    inline const GetDataExportOrderDetailResponseBodyDataExportOrderDetail & dataExportOrderDetail() const { DARABONBA_PTR_GET_CONST(dataExportOrderDetail_, GetDataExportOrderDetailResponseBodyDataExportOrderDetail) };
    inline GetDataExportOrderDetailResponseBodyDataExportOrderDetail dataExportOrderDetail() { DARABONBA_PTR_GET(dataExportOrderDetail_, GetDataExportOrderDetailResponseBodyDataExportOrderDetail) };
    inline GetDataExportOrderDetailResponseBody& setDataExportOrderDetail(const GetDataExportOrderDetailResponseBodyDataExportOrderDetail & dataExportOrderDetail) { DARABONBA_PTR_SET_VALUE(dataExportOrderDetail_, dataExportOrderDetail) };
    inline GetDataExportOrderDetailResponseBody& setDataExportOrderDetail(GetDataExportOrderDetailResponseBodyDataExportOrderDetail && dataExportOrderDetail) { DARABONBA_PTR_SET_RVALUE(dataExportOrderDetail_, dataExportOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataExportOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataExportOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataExportOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataExportOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the data export ticket.
    std::shared_ptr<GetDataExportOrderDetailResponseBodyDataExportOrderDetail> dataExportOrderDetail_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
