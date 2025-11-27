// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATABASESRESPONSEBODYDATABASESDATABASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabasesDatabaseAccounts.hpp>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo.hpp>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo.hpp>
#include <alibabacloud/models/DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDatabasesResponseBodyDatabasesDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDatabasesResponseBodyDatabasesDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(AdvancedInfo, advancedInfo_);
      DARABONBA_PTR_TO_JSON(BasicInfo, basicInfo_);
      DARABONBA_PTR_TO_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_TO_JSON(Collate, collate_);
      DARABONBA_PTR_TO_JSON(ConnLimit, connLimit_);
      DARABONBA_PTR_TO_JSON(Ctype, ctype_);
      DARABONBA_PTR_TO_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBStatus, DBStatus_);
      DARABONBA_PTR_TO_JSON(DuckDBEnabled, duckDBEnabled_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RuntimeInfo, runtimeInfo_);
      DARABONBA_PTR_TO_JSON(Tablespace, tablespace_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDatabasesResponseBodyDatabasesDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(AdvancedInfo, advancedInfo_);
      DARABONBA_PTR_FROM_JSON(BasicInfo, basicInfo_);
      DARABONBA_PTR_FROM_JSON(CharacterSetName, characterSetName_);
      DARABONBA_PTR_FROM_JSON(Collate, collate_);
      DARABONBA_PTR_FROM_JSON(ConnLimit, connLimit_);
      DARABONBA_PTR_FROM_JSON(Ctype, ctype_);
      DARABONBA_PTR_FROM_JSON(DBDescription, DBDescription_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBStatus, DBStatus_);
      DARABONBA_PTR_FROM_JSON(DuckDBEnabled, duckDBEnabled_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RuntimeInfo, runtimeInfo_);
      DARABONBA_PTR_FROM_JSON(Tablespace, tablespace_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDatabasesResponseBodyDatabasesDatabase() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase(const DescribeDatabasesResponseBodyDatabasesDatabase &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase(DescribeDatabasesResponseBodyDatabasesDatabase &&) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDatabasesResponseBodyDatabasesDatabase() = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase& operator=(const DescribeDatabasesResponseBodyDatabasesDatabase &) = default ;
    DescribeDatabasesResponseBodyDatabasesDatabase& operator=(DescribeDatabasesResponseBodyDatabasesDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accounts_ == nullptr
        && return this->advancedInfo_ == nullptr && return this->basicInfo_ == nullptr && return this->characterSetName_ == nullptr && return this->collate_ == nullptr && return this->connLimit_ == nullptr
        && return this->ctype_ == nullptr && return this->DBDescription_ == nullptr && return this->DBInstanceId_ == nullptr && return this->DBName_ == nullptr && return this->DBStatus_ == nullptr
        && return this->duckDBEnabled_ == nullptr && return this->engine_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->runtimeInfo_ == nullptr
        && return this->tablespace_ == nullptr && return this->totalCount_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts & accounts() const { DARABONBA_PTR_GET_CONST(accounts_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts) };
    inline Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts accounts() { DARABONBA_PTR_GET(accounts_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setAccounts(const Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setAccounts(Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // advancedInfo Field Functions 
    bool hasAdvancedInfo() const { return this->advancedInfo_ != nullptr;};
    void deleteAdvancedInfo() { this->advancedInfo_ = nullptr;};
    inline const Models::DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo & advancedInfo() const { DARABONBA_PTR_GET_CONST(advancedInfo_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo) };
    inline Models::DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo advancedInfo() { DARABONBA_PTR_GET(advancedInfo_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setAdvancedInfo(const Models::DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo & advancedInfo) { DARABONBA_PTR_SET_VALUE(advancedInfo_, advancedInfo) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setAdvancedInfo(Models::DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo && advancedInfo) { DARABONBA_PTR_SET_RVALUE(advancedInfo_, advancedInfo) };


    // basicInfo Field Functions 
    bool hasBasicInfo() const { return this->basicInfo_ != nullptr;};
    void deleteBasicInfo() { this->basicInfo_ = nullptr;};
    inline const Models::DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo & basicInfo() const { DARABONBA_PTR_GET_CONST(basicInfo_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo) };
    inline Models::DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo basicInfo() { DARABONBA_PTR_GET(basicInfo_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setBasicInfo(const Models::DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo & basicInfo) { DARABONBA_PTR_SET_VALUE(basicInfo_, basicInfo) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setBasicInfo(Models::DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo && basicInfo) { DARABONBA_PTR_SET_RVALUE(basicInfo_, basicInfo) };


    // characterSetName Field Functions 
    bool hasCharacterSetName() const { return this->characterSetName_ != nullptr;};
    void deleteCharacterSetName() { this->characterSetName_ = nullptr;};
    inline string characterSetName() const { DARABONBA_PTR_GET_DEFAULT(characterSetName_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setCharacterSetName(string characterSetName) { DARABONBA_PTR_SET_VALUE(characterSetName_, characterSetName) };


    // collate Field Functions 
    bool hasCollate() const { return this->collate_ != nullptr;};
    void deleteCollate() { this->collate_ = nullptr;};
    inline string collate() const { DARABONBA_PTR_GET_DEFAULT(collate_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setCollate(string collate) { DARABONBA_PTR_SET_VALUE(collate_, collate) };


    // connLimit Field Functions 
    bool hasConnLimit() const { return this->connLimit_ != nullptr;};
    void deleteConnLimit() { this->connLimit_ = nullptr;};
    inline string connLimit() const { DARABONBA_PTR_GET_DEFAULT(connLimit_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setConnLimit(string connLimit) { DARABONBA_PTR_SET_VALUE(connLimit_, connLimit) };


    // ctype Field Functions 
    bool hasCtype() const { return this->ctype_ != nullptr;};
    void deleteCtype() { this->ctype_ = nullptr;};
    inline string ctype() const { DARABONBA_PTR_GET_DEFAULT(ctype_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setCtype(string ctype) { DARABONBA_PTR_SET_VALUE(ctype_, ctype) };


    // DBDescription Field Functions 
    bool hasDBDescription() const { return this->DBDescription_ != nullptr;};
    void deleteDBDescription() { this->DBDescription_ = nullptr;};
    inline string DBDescription() const { DARABONBA_PTR_GET_DEFAULT(DBDescription_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setDBDescription(string DBDescription) { DARABONBA_PTR_SET_VALUE(DBDescription_, DBDescription) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBStatus Field Functions 
    bool hasDBStatus() const { return this->DBStatus_ != nullptr;};
    void deleteDBStatus() { this->DBStatus_ = nullptr;};
    inline string DBStatus() const { DARABONBA_PTR_GET_DEFAULT(DBStatus_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setDBStatus(string DBStatus) { DARABONBA_PTR_SET_VALUE(DBStatus_, DBStatus) };


    // duckDBEnabled Field Functions 
    bool hasDuckDBEnabled() const { return this->duckDBEnabled_ != nullptr;};
    void deleteDuckDBEnabled() { this->duckDBEnabled_ = nullptr;};
    inline bool duckDBEnabled() const { DARABONBA_PTR_GET_DEFAULT(duckDBEnabled_, false) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setDuckDBEnabled(bool duckDBEnabled) { DARABONBA_PTR_SET_VALUE(duckDBEnabled_, duckDBEnabled) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // runtimeInfo Field Functions 
    bool hasRuntimeInfo() const { return this->runtimeInfo_ != nullptr;};
    void deleteRuntimeInfo() { this->runtimeInfo_ = nullptr;};
    inline const Models::DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo & runtimeInfo() const { DARABONBA_PTR_GET_CONST(runtimeInfo_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo) };
    inline Models::DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo runtimeInfo() { DARABONBA_PTR_GET(runtimeInfo_, Models::DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setRuntimeInfo(const Models::DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo & runtimeInfo) { DARABONBA_PTR_SET_VALUE(runtimeInfo_, runtimeInfo) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setRuntimeInfo(Models::DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo && runtimeInfo) { DARABONBA_PTR_SET_RVALUE(runtimeInfo_, runtimeInfo) };


    // tablespace Field Functions 
    bool hasTablespace() const { return this->tablespace_ != nullptr;};
    void deleteTablespace() { this->tablespace_ = nullptr;};
    inline string tablespace() const { DARABONBA_PTR_GET_DEFAULT(tablespace_, "") };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setTablespace(string tablespace) { DARABONBA_PTR_SET_VALUE(tablespace_, tablespace) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDatabasesResponseBodyDatabasesDatabase& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the account. Each account has specific permissions on the database.
    std::shared_ptr<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAccounts> accounts_ = nullptr;
    // The advanced information about the database.
    // 
    // >  This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<Models::DescribeDatabasesResponseBodyDatabasesDatabaseAdvancedInfo> advancedInfo_ = nullptr;
    // The basic information about the database.
    // 
    // >  This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<Models::DescribeDatabasesResponseBodyDatabasesDatabaseBasicInfo> basicInfo_ = nullptr;
    // The name of the character set.
    std::shared_ptr<string> characterSetName_ = nullptr;
    // The collation of the character set. The example value C indicates localization.
    // 
    // >  This parameter is returned only for instances that run PostgreSQL.
    std::shared_ptr<string> collate_ = nullptr;
    // The limit on the number of concurrent requests. The value -1 indicates that the number of concurrent requests is unlimited.
    // 
    // >  This parameter is returned only for instances that run PostgreSQL.
    std::shared_ptr<string> connLimit_ = nullptr;
    // The type of the character set.
    // 
    // >  This parameter is returned only for instances that run PostgreSQL.
    std::shared_ptr<string> ctype_ = nullptr;
    // The description of the database.
    std::shared_ptr<string> DBDescription_ = nullptr;
    // The ID of the instance to which the database belongs.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The database name.
    std::shared_ptr<string> DBName_ = nullptr;
    // The database status. Valid values:
    // 
    // *   **Creating**
    // *   **Running**
    // *   **Deleting**
    // *   **Cold**
    std::shared_ptr<string> DBStatus_ = nullptr;
    std::shared_ptr<bool> duckDBEnabled_ = nullptr;
    // The database engine of the instance.
    std::shared_ptr<string> engine_ = nullptr;
    // The page number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The runtime information about the database.
    // 
    // >  This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<Models::DescribeDatabasesResponseBodyDatabasesDatabaseRuntimeInfo> runtimeInfo_ = nullptr;
    // The database tablespace.
    // 
    // >  This parameter is returned only for instances that run PostgreSQL.
    std::shared_ptr<string> tablespace_ = nullptr;
    // The total number of entries returned.
    // 
    // >  This parameter is returned only for instances that run SQL Server.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
