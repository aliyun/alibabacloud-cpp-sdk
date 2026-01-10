// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCEXECSQLDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCEXECSQLDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncExecSqlDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncExecSqlDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StructSyncExecSqlDetail, structSyncExecSqlDetail_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncExecSqlDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StructSyncExecSqlDetail, structSyncExecSqlDetail_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStructSyncExecSqlDetailResponseBody() = default ;
    GetStructSyncExecSqlDetailResponseBody(const GetStructSyncExecSqlDetailResponseBody &) = default ;
    GetStructSyncExecSqlDetailResponseBody(GetStructSyncExecSqlDetailResponseBody &&) = default ;
    GetStructSyncExecSqlDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncExecSqlDetailResponseBody() = default ;
    GetStructSyncExecSqlDetailResponseBody& operator=(const GetStructSyncExecSqlDetailResponseBody &) = default ;
    GetStructSyncExecSqlDetailResponseBody& operator=(GetStructSyncExecSqlDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class StructSyncExecSqlDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const StructSyncExecSqlDetail& obj) { 
        DARABONBA_PTR_TO_JSON(ExecSql, execSql_);
        DARABONBA_PTR_TO_JSON(TotalSqlCount, totalSqlCount_);
      };
      friend void from_json(const Darabonba::Json& j, StructSyncExecSqlDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(ExecSql, execSql_);
        DARABONBA_PTR_FROM_JSON(TotalSqlCount, totalSqlCount_);
      };
      StructSyncExecSqlDetail() = default ;
      StructSyncExecSqlDetail(const StructSyncExecSqlDetail &) = default ;
      StructSyncExecSqlDetail(StructSyncExecSqlDetail &&) = default ;
      StructSyncExecSqlDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~StructSyncExecSqlDetail() = default ;
      StructSyncExecSqlDetail& operator=(const StructSyncExecSqlDetail &) = default ;
      StructSyncExecSqlDetail& operator=(StructSyncExecSqlDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->execSql_ == nullptr
        && this->totalSqlCount_ == nullptr; };
      // execSql Field Functions 
      bool hasExecSql() const { return this->execSql_ != nullptr;};
      void deleteExecSql() { this->execSql_ = nullptr;};
      inline string getExecSql() const { DARABONBA_PTR_GET_DEFAULT(execSql_, "") };
      inline StructSyncExecSqlDetail& setExecSql(string execSql) { DARABONBA_PTR_SET_VALUE(execSql_, execSql) };


      // totalSqlCount Field Functions 
      bool hasTotalSqlCount() const { return this->totalSqlCount_ != nullptr;};
      void deleteTotalSqlCount() { this->totalSqlCount_ = nullptr;};
      inline int64_t getTotalSqlCount() const { DARABONBA_PTR_GET_DEFAULT(totalSqlCount_, 0L) };
      inline StructSyncExecSqlDetail& setTotalSqlCount(int64_t totalSqlCount) { DARABONBA_PTR_SET_VALUE(totalSqlCount_, totalSqlCount) };


    protected:
      // The SQL statements that are executed.
      shared_ptr<string> execSql_ {};
      // The total number of SQL statements.
      shared_ptr<int64_t> totalSqlCount_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->structSyncExecSqlDetail_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetStructSyncExecSqlDetailResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetStructSyncExecSqlDetailResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStructSyncExecSqlDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // structSyncExecSqlDetail Field Functions 
    bool hasStructSyncExecSqlDetail() const { return this->structSyncExecSqlDetail_ != nullptr;};
    void deleteStructSyncExecSqlDetail() { this->structSyncExecSqlDetail_ = nullptr;};
    inline const GetStructSyncExecSqlDetailResponseBody::StructSyncExecSqlDetail & getStructSyncExecSqlDetail() const { DARABONBA_PTR_GET_CONST(structSyncExecSqlDetail_, GetStructSyncExecSqlDetailResponseBody::StructSyncExecSqlDetail) };
    inline GetStructSyncExecSqlDetailResponseBody::StructSyncExecSqlDetail getStructSyncExecSqlDetail() { DARABONBA_PTR_GET(structSyncExecSqlDetail_, GetStructSyncExecSqlDetailResponseBody::StructSyncExecSqlDetail) };
    inline GetStructSyncExecSqlDetailResponseBody& setStructSyncExecSqlDetail(const GetStructSyncExecSqlDetailResponseBody::StructSyncExecSqlDetail & structSyncExecSqlDetail) { DARABONBA_PTR_SET_VALUE(structSyncExecSqlDetail_, structSyncExecSqlDetail) };
    inline GetStructSyncExecSqlDetailResponseBody& setStructSyncExecSqlDetail(GetStructSyncExecSqlDetailResponseBody::StructSyncExecSqlDetail && structSyncExecSqlDetail) { DARABONBA_PTR_SET_RVALUE(structSyncExecSqlDetail_, structSyncExecSqlDetail) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStructSyncExecSqlDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the SQL statements.
    shared_ptr<GetStructSyncExecSqlDetailResponseBody::StructSyncExecSqlDetail> structSyncExecSqlDetail_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
