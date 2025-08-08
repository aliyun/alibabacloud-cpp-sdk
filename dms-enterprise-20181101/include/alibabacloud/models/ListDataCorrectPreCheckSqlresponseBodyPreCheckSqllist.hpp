// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKSQLRESPONSEBODYPRECHECKSQLLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATACORRECTPRECHECKSQLRESPONSEBODYPRECHECKSQLLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& obj) { 
      DARABONBA_PTR_TO_JSON(AffectRows, affectRows_);
      DARABONBA_PTR_TO_JSON(CheckSQL, checkSQL_);
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
      DARABONBA_PTR_TO_JSON(SqlReviewStatus, sqlReviewStatus_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& obj) { 
      DARABONBA_PTR_FROM_JSON(AffectRows, affectRows_);
      DARABONBA_PTR_FROM_JSON(CheckSQL, checkSQL_);
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(SQLReviewQueryKey, SQLReviewQueryKey_);
      DARABONBA_PTR_FROM_JSON(SqlReviewStatus, sqlReviewStatus_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList() = default ;
    ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList(const ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList &) = default ;
    ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList(ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList &&) = default ;
    ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList() = default ;
    ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& operator=(const ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList &) = default ;
    ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& operator=(ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->affectRows_ != nullptr
        && this->checkSQL_ != nullptr && this->dbId_ != nullptr && this->SQLReviewQueryKey_ != nullptr && this->sqlReviewStatus_ != nullptr && this->sqlType_ != nullptr
        && this->tableNames_ != nullptr; };
    // affectRows Field Functions 
    bool hasAffectRows() const { return this->affectRows_ != nullptr;};
    void deleteAffectRows() { this->affectRows_ = nullptr;};
    inline int64_t affectRows() const { DARABONBA_PTR_GET_DEFAULT(affectRows_, 0L) };
    inline ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& setAffectRows(int64_t affectRows) { DARABONBA_PTR_SET_VALUE(affectRows_, affectRows) };


    // checkSQL Field Functions 
    bool hasCheckSQL() const { return this->checkSQL_ != nullptr;};
    void deleteCheckSQL() { this->checkSQL_ = nullptr;};
    inline string checkSQL() const { DARABONBA_PTR_GET_DEFAULT(checkSQL_, "") };
    inline ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& setCheckSQL(string checkSQL) { DARABONBA_PTR_SET_VALUE(checkSQL_, checkSQL) };


    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // SQLReviewQueryKey Field Functions 
    bool hasSQLReviewQueryKey() const { return this->SQLReviewQueryKey_ != nullptr;};
    void deleteSQLReviewQueryKey() { this->SQLReviewQueryKey_ = nullptr;};
    inline string SQLReviewQueryKey() const { DARABONBA_PTR_GET_DEFAULT(SQLReviewQueryKey_, "") };
    inline ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& setSQLReviewQueryKey(string SQLReviewQueryKey) { DARABONBA_PTR_SET_VALUE(SQLReviewQueryKey_, SQLReviewQueryKey) };


    // sqlReviewStatus Field Functions 
    bool hasSqlReviewStatus() const { return this->sqlReviewStatus_ != nullptr;};
    void deleteSqlReviewStatus() { this->sqlReviewStatus_ = nullptr;};
    inline string sqlReviewStatus() const { DARABONBA_PTR_GET_DEFAULT(sqlReviewStatus_, "") };
    inline ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& setSqlReviewStatus(string sqlReviewStatus) { DARABONBA_PTR_SET_VALUE(sqlReviewStatus_, sqlReviewStatus) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline string tableNames() const { DARABONBA_PTR_GET_DEFAULT(tableNames_, "") };
    inline ListDataCorrectPreCheckSQLResponseBodyPreCheckSQLList& setTableNames(string tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };


  protected:
    // The estimated number of affected rows.
    std::shared_ptr<int64_t> affectRows_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> checkSQL_ = nullptr;
    // The ID of the database.
    std::shared_ptr<int64_t> dbId_ = nullptr;
    // The key that is used to query the details of optimization suggestions. You can call the [GetSQLReviewOptimizeDetail](https://help.aliyun.com/document_detail/265977.html) operation to query the details of optimization suggestions based on the key.
    std::shared_ptr<string> SQLReviewQueryKey_ = nullptr;
    // The review status of the SQL statement. Valid values:
    // 
    // *   **WAITING**: The SQL statement is pending for review.
    // *   **RUNNING**: The SQL statement is being reviewed.
    // *   **IGNORE**: The SQL statement review is skipped.
    // *   **PASS**: The SQL statement passed the review.
    // *   **BLOCK**: The SQL statement failed the review.
    std::shared_ptr<string> sqlReviewStatus_ = nullptr;
    // The type of the SQL statement, such as DELETE, UPDATE, or ALTER_TABLE.
    std::shared_ptr<string> sqlType_ = nullptr;
    // The name of the table whose data is changed.
    std::shared_ptr<string> tableNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
