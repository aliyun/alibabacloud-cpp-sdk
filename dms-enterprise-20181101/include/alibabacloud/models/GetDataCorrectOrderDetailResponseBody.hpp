// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCorrectOrderDetail, dataCorrectOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCorrectOrderDetail, dataCorrectOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataCorrectOrderDetailResponseBody() = default ;
    GetDataCorrectOrderDetailResponseBody(const GetDataCorrectOrderDetailResponseBody &) = default ;
    GetDataCorrectOrderDetailResponseBody(GetDataCorrectOrderDetailResponseBody &&) = default ;
    GetDataCorrectOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBody() = default ;
    GetDataCorrectOrderDetailResponseBody& operator=(const GetDataCorrectOrderDetailResponseBody &) = default ;
    GetDataCorrectOrderDetailResponseBody& operator=(GetDataCorrectOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataCorrectOrderDetail_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // dataCorrectOrderDetail Field Functions 
    bool hasDataCorrectOrderDetail() const { return this->dataCorrectOrderDetail_ != nullptr;};
    void deleteDataCorrectOrderDetail() { this->dataCorrectOrderDetail_ = nullptr;};
    inline const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail & dataCorrectOrderDetail() const { DARABONBA_PTR_GET_CONST(dataCorrectOrderDetail_, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail dataCorrectOrderDetail() { DARABONBA_PTR_GET(dataCorrectOrderDetail_, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail) };
    inline GetDataCorrectOrderDetailResponseBody& setDataCorrectOrderDetail(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail & dataCorrectOrderDetail) { DARABONBA_PTR_SET_VALUE(dataCorrectOrderDetail_, dataCorrectOrderDetail) };
    inline GetDataCorrectOrderDetailResponseBody& setDataCorrectOrderDetail(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail && dataCorrectOrderDetail) { DARABONBA_PTR_SET_RVALUE(dataCorrectOrderDetail_, dataCorrectOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataCorrectOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataCorrectOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataCorrectOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataCorrectOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the data change ticket.
    std::shared_ptr<GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail> dataCorrectOrderDetail_ = nullptr;
    // The error code returned if the request fails.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request fails.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the operation was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
