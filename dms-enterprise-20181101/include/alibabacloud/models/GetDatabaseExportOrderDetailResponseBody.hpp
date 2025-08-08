// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDatabaseExportOrderDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseExportOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseExportOrderDetail, databaseExportOrderDetail_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseExportOrderDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseExportOrderDetail, databaseExportOrderDetail_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDatabaseExportOrderDetailResponseBody() = default ;
    GetDatabaseExportOrderDetailResponseBody(const GetDatabaseExportOrderDetailResponseBody &) = default ;
    GetDatabaseExportOrderDetailResponseBody(GetDatabaseExportOrderDetailResponseBody &&) = default ;
    GetDatabaseExportOrderDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseExportOrderDetailResponseBody() = default ;
    GetDatabaseExportOrderDetailResponseBody& operator=(const GetDatabaseExportOrderDetailResponseBody &) = default ;
    GetDatabaseExportOrderDetailResponseBody& operator=(GetDatabaseExportOrderDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseExportOrderDetail_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // databaseExportOrderDetail Field Functions 
    bool hasDatabaseExportOrderDetail() const { return this->databaseExportOrderDetail_ != nullptr;};
    void deleteDatabaseExportOrderDetail() { this->databaseExportOrderDetail_ = nullptr;};
    inline const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail & databaseExportOrderDetail() const { DARABONBA_PTR_GET_CONST(databaseExportOrderDetail_, GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail databaseExportOrderDetail() { DARABONBA_PTR_GET(databaseExportOrderDetail_, GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail) };
    inline GetDatabaseExportOrderDetailResponseBody& setDatabaseExportOrderDetail(const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail & databaseExportOrderDetail) { DARABONBA_PTR_SET_VALUE(databaseExportOrderDetail_, databaseExportOrderDetail) };
    inline GetDatabaseExportOrderDetailResponseBody& setDatabaseExportOrderDetail(GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail && databaseExportOrderDetail) { DARABONBA_PTR_SET_RVALUE(databaseExportOrderDetail_, databaseExportOrderDetail) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDatabaseExportOrderDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDatabaseExportOrderDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatabaseExportOrderDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDatabaseExportOrderDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the database export ticket.
    std::shared_ptr<GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetail> databaseExportOrderDetail_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
