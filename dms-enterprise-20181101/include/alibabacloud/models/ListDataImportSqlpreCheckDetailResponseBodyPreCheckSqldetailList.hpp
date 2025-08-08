// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAIMPORTSQLPRECHECKDETAILRESPONSEBODYPRECHECKSQLDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAIMPORTSQLPRECHECKDETAILRESPONSEBODYPRECHECKSQLDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(Skip, skip_);
      DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(Skip, skip_);
      DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList() = default ;
    ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList(const ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList &) = default ;
    ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList(ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList &&) = default ;
    ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList() = default ;
    ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList& operator=(const ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList &) = default ;
    ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList& operator=(ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->skip_ != nullptr
        && this->sqlId_ != nullptr && this->sqlType_ != nullptr && this->statusCode_ != nullptr; };
    // skip Field Functions 
    bool hasSkip() const { return this->skip_ != nullptr;};
    void deleteSkip() { this->skip_ = nullptr;};
    inline bool skip() const { DARABONBA_PTR_GET_DEFAULT(skip_, false) };
    inline ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList& setSkip(bool skip) { DARABONBA_PTR_SET_VALUE(skip_, skip) };


    // sqlId Field Functions 
    bool hasSqlId() const { return this->sqlId_ != nullptr;};
    void deleteSqlId() { this->sqlId_ = nullptr;};
    inline int64_t sqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, 0L) };
    inline ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList& setSqlId(int64_t sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline ListDataImportSQLPreCheckDetailResponseBodyPreCheckSQLDetailList& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    // Indicates whether the precheck of the SQL statement was skipped. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> skip_ = nullptr;
    // The SQL ID, which indicates the sequence number of the SQL statement. The number starts with 1.
    std::shared_ptr<int64_t> sqlId_ = nullptr;
    // The type of the SQL statement, such as DELETE, UPDATE, or ALTER_TABLE.
    std::shared_ptr<string> sqlType_ = nullptr;
    // The state of the ticket. Valid values:
    // 
    // *   **INIT**: The ticket was being initialized.
    // *   **RUNNING**: The ticket was in progress.
    // *   **SUCCESS**: The ticket was complete.
    // *   **TIMEOUT**: The ticket was skipped due to timeout.
    // *   **FAIL**: The ticket failed.
    std::shared_ptr<string> statusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
