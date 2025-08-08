// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAIMPORTSQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAIMPORTSQLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataImportSQLResponseBodySQLDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataImportSQLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataImportSQLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SQLDetail, SQLDetail_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataImportSQLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SQLDetail, SQLDetail_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataImportSQLResponseBody() = default ;
    GetDataImportSQLResponseBody(const GetDataImportSQLResponseBody &) = default ;
    GetDataImportSQLResponseBody(GetDataImportSQLResponseBody &&) = default ;
    GetDataImportSQLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataImportSQLResponseBody() = default ;
    GetDataImportSQLResponseBody& operator=(const GetDataImportSQLResponseBody &) = default ;
    GetDataImportSQLResponseBody& operator=(GetDataImportSQLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->SQLDetail_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataImportSQLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataImportSQLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataImportSQLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLDetail Field Functions 
    bool hasSQLDetail() const { return this->SQLDetail_ != nullptr;};
    void deleteSQLDetail() { this->SQLDetail_ = nullptr;};
    inline const GetDataImportSQLResponseBodySQLDetail & SQLDetail() const { DARABONBA_PTR_GET_CONST(SQLDetail_, GetDataImportSQLResponseBodySQLDetail) };
    inline GetDataImportSQLResponseBodySQLDetail SQLDetail() { DARABONBA_PTR_GET(SQLDetail_, GetDataImportSQLResponseBodySQLDetail) };
    inline GetDataImportSQLResponseBody& setSQLDetail(const GetDataImportSQLResponseBodySQLDetail & SQLDetail) { DARABONBA_PTR_SET_VALUE(SQLDetail_, SQLDetail) };
    inline GetDataImportSQLResponseBody& setSQLDetail(GetDataImportSQLResponseBodySQLDetail && SQLDetail) { DARABONBA_PTR_SET_RVALUE(SQLDetail_, SQLDetail) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataImportSQLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of SQL statements.
    std::shared_ptr<GetDataImportSQLResponseBodySQLDetail> SQLDetail_ = nullptr;
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
