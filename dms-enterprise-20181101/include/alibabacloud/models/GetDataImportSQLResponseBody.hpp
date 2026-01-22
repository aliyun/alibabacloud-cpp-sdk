// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAIMPORTSQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATAIMPORTSQLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
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
    class SQLDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SQLDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ExecSql, execSql_);
      };
      friend void from_json(const Darabonba::Json& j, SQLDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ExecSql, execSql_);
      };
      SQLDetail() = default ;
      SQLDetail(const SQLDetail &) = default ;
      SQLDetail(SQLDetail &&) = default ;
      SQLDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SQLDetail() = default ;
      SQLDetail& operator=(const SQLDetail &) = default ;
      SQLDetail& operator=(SQLDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->execSql_ == nullptr; };
      // execSql Field Functions 
      bool hasExecSql() const { return this->execSql_ != nullptr;};
      void deleteExecSql() { this->execSql_ = nullptr;};
      inline string getExecSql() const { DARABONBA_PTR_GET_DEFAULT(execSql_, "") };
      inline SQLDetail& setExecSql(string execSql) { DARABONBA_PTR_SET_VALUE(execSql_, execSql) };


    protected:
      // The SQL script.
      shared_ptr<string> execSql_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->SQLDetail_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetDataImportSQLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetDataImportSQLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataImportSQLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SQLDetail Field Functions 
    bool hasSQLDetail() const { return this->SQLDetail_ != nullptr;};
    void deleteSQLDetail() { this->SQLDetail_ = nullptr;};
    inline const GetDataImportSQLResponseBody::SQLDetail & getSQLDetail() const { DARABONBA_PTR_GET_CONST(SQLDetail_, GetDataImportSQLResponseBody::SQLDetail) };
    inline GetDataImportSQLResponseBody::SQLDetail getSQLDetail() { DARABONBA_PTR_GET(SQLDetail_, GetDataImportSQLResponseBody::SQLDetail) };
    inline GetDataImportSQLResponseBody& setSQLDetail(const GetDataImportSQLResponseBody::SQLDetail & sQLDetail) { DARABONBA_PTR_SET_VALUE(SQLDetail_, sQLDetail) };
    inline GetDataImportSQLResponseBody& setSQLDetail(GetDataImportSQLResponseBody::SQLDetail && sQLDetail) { DARABONBA_PTR_SET_RVALUE(SQLDetail_, sQLDetail) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataImportSQLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The details of SQL statements.
    shared_ptr<GetDataImportSQLResponseBody::SQLDetail> SQLDetail_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
