// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKSQLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKSQLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataCorrectPreCheckSQLResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCorrectPreCheckSQLResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(PreCheckSQLList, preCheckSQLList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCorrectPreCheckSQLResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(PreCheckSQLList, preCheckSQLList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataCorrectPreCheckSQLResponseBody() = default ;
    ListDataCorrectPreCheckSQLResponseBody(const ListDataCorrectPreCheckSQLResponseBody &) = default ;
    ListDataCorrectPreCheckSQLResponseBody(ListDataCorrectPreCheckSQLResponseBody &&) = default ;
    ListDataCorrectPreCheckSQLResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCorrectPreCheckSQLResponseBody() = default ;
    ListDataCorrectPreCheckSQLResponseBody& operator=(const ListDataCorrectPreCheckSQLResponseBody &) = default ;
    ListDataCorrectPreCheckSQLResponseBody& operator=(ListDataCorrectPreCheckSQLResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PreCheckSQLList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PreCheckSQLList& obj) { 
        DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_TO_JSON(CheckSQL, checkSQL_);
        DARABONBA_PTR_TO_JSON(DbId, dbId_);
        DARABONBA_PTR_TO_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
        DARABONBA_PTR_TO_JSON(SqlReviewStatus, sqlReviewStatus_);
        DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
        DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
      };
      friend void from_json(const Darabonba::Json& j, PreCheckSQLList& obj) { 
        DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
        DARABONBA_PTR_FROM_JSON(CheckSQL, checkSQL_);
        DARABONBA_PTR_FROM_JSON(DbId, dbId_);
        DARABONBA_PTR_FROM_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
        DARABONBA_PTR_FROM_JSON(SqlReviewStatus, sqlReviewStatus_);
        DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
        DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
      };
      PreCheckSQLList() = default ;
      PreCheckSQLList(const PreCheckSQLList &) = default ;
      PreCheckSQLList(PreCheckSQLList &&) = default ;
      PreCheckSQLList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PreCheckSQLList() = default ;
      PreCheckSQLList& operator=(const PreCheckSQLList &) = default ;
      PreCheckSQLList& operator=(PreCheckSQLList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->affectRows_ == nullptr
        && this->checkSQL_ == nullptr && this->dbId_ == nullptr && this->SQLReviewQueryKey_ == nullptr && this->sqlReviewStatus_ == nullptr && this->sqlType_ == nullptr
        && this->tableNames_ == nullptr; };
      // affectRows Field Functions 
      bool hasAffectRows() const { return this->affectRows_ != nullptr;};
      void deleteAffectRows() { this->affectRows_ = nullptr;};
      inline int64_t getAffectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
      inline PreCheckSQLList& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


      // checkSQL Field Functions 
      bool hasCheckSQL() const { return this->checkSQL_ != nullptr;};
      void deleteCheckSQL() { this->checkSQL_ = nullptr;};
      inline string getCheckSQL() const { DARABONBA_PTR_GET_DEFAULT(checkSQL_, "") };
      inline PreCheckSQLList& setCheckSQL(string checkSQL) { DARABONBA_PTR_SET_VALUE(checkSQL_, checkSQL) };


      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline PreCheckSQLList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // SQLReviewQueryKey Field Functions 
      bool hasSQLReviewQueryKey() const { return this->SQLReviewQueryKey_ != nullptr;};
      void deleteSQLReviewQueryKey() { this->SQLReviewQueryKey_ = nullptr;};
      inline string getSQLReviewQueryKey() const { DARABONBA_PTR_GET_DEFAULT(SQLReviewQueryKey_, "") };
      inline PreCheckSQLList& setSQLReviewQueryKey(string SQLReviewQueryKey) { DARABONBA_PTR_SET_VALUE(SQLReviewQueryKey_, SQLReviewQueryKey) };


      // sqlReviewStatus Field Functions 
      bool hasSqlReviewStatus() const { return this->sqlReviewStatus_ != nullptr;};
      void deleteSqlReviewStatus() { this->sqlReviewStatus_ = nullptr;};
      inline string getSqlReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(sqlReviewStatus_, "") };
      inline PreCheckSQLList& setSqlReviewStatus(string sqlReviewStatus) { DARABONBA_PTR_SET_VALUE(sqlReviewStatus_, sqlReviewStatus) };


      // sqlType Field Functions 
      bool hasSqlType() const { return this->sqlType_ != nullptr;};
      void deleteSqlType() { this->sqlType_ = nullptr;};
      inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
      inline PreCheckSQLList& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


      // tableNames Field Functions 
      bool hasTableNames() const { return this->tableNames_ != nullptr;};
      void deleteTableNames() { this->tableNames_ = nullptr;};
      inline string getTableNames() const { DARABONBA_PTR_GET_DEFAULT(tableNames_, "") };
      inline PreCheckSQLList& setTableNames(string tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };


    protected:
      // The estimated number of affected rows.
      shared_ptr<int64_t> affectRows_ {};
      // The SQL statement.
      shared_ptr<string> checkSQL_ {};
      // The ID of the database.
      shared_ptr<int64_t> dbId_ {};
      // The key that is used to query the details of optimization suggestions. You can call the [GetSQLReviewOptimizeDetail](https://help.aliyun.com/document_detail/265977.html) operation to query the details of optimization suggestions based on the key.
      shared_ptr<string> SQLReviewQueryKey_ {};
      // The review status of the SQL statement. Valid values:
      // 
      // *   **WAITING**: The SQL statement is pending for review.
      // *   **RUNNING**: The SQL statement is being reviewed.
      // *   **IGNORE**: The SQL statement review is skipped.
      // *   **PASS**: The SQL statement passed the review.
      // *   **BLOCK**: The SQL statement failed the review.
      shared_ptr<string> sqlReviewStatus_ {};
      // The type of the SQL statement, such as DELETE, UPDATE, or ALTER_TABLE.
      shared_ptr<string> sqlType_ {};
      // The name of the table whose data is changed.
      shared_ptr<string> tableNames_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->preCheckSQLList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListDataCorrectPreCheckSQLResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListDataCorrectPreCheckSQLResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // preCheckSQLList Field Functions 
    bool hasPreCheckSQLList() const { return this->preCheckSQLList_ != nullptr;};
    void deletePreCheckSQLList() { this->preCheckSQLList_ = nullptr;};
    inline const vector<ListDataCorrectPreCheckSQLResponseBody::PreCheckSQLList> & getPreCheckSQLList() const { DARABONBA_PTR_GET_CONST(preCheckSQLList_, vector<ListDataCorrectPreCheckSQLResponseBody::PreCheckSQLList>) };
    inline vector<ListDataCorrectPreCheckSQLResponseBody::PreCheckSQLList> getPreCheckSQLList() { DARABONBA_PTR_GET(preCheckSQLList_, vector<ListDataCorrectPreCheckSQLResponseBody::PreCheckSQLList>) };
    inline ListDataCorrectPreCheckSQLResponseBody& setPreCheckSQLList(const vector<ListDataCorrectPreCheckSQLResponseBody::PreCheckSQLList> & preCheckSQLList) { DARABONBA_PTR_SET_VALUE(preCheckSQLList_, preCheckSQLList) };
    inline ListDataCorrectPreCheckSQLResponseBody& setPreCheckSQLList(vector<ListDataCorrectPreCheckSQLResponseBody::PreCheckSQLList> && preCheckSQLList) { DARABONBA_PTR_SET_RVALUE(preCheckSQLList_, preCheckSQLList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataCorrectPreCheckSQLResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataCorrectPreCheckSQLResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The precheck information about SQL statements.
    shared_ptr<vector<ListDataCorrectPreCheckSQLResponseBody::PreCheckSQLList>> preCheckSQLList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
