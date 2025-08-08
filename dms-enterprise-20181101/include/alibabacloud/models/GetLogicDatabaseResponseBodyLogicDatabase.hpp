// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGICDATABASERESPONSEBODYLOGICDATABASE_HPP_
#define ALIBABACLOUD_MODELS_GETLOGICDATABASERESPONSEBODYLOGICDATABASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds.hpp>
#include <alibabacloud/models/GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList.hpp>
#include <alibabacloud/models/GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetLogicDatabaseResponseBodyLogicDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogicDatabaseResponseBodyLogicDatabase& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_TO_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SearchName, searchName_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogicDatabaseResponseBodyLogicDatabase& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(DatabaseIds, databaseIds_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(OwnerIdList, ownerIdList_);
      DARABONBA_PTR_FROM_JSON(OwnerNameList, ownerNameList_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SearchName, searchName_);
    };
    GetLogicDatabaseResponseBodyLogicDatabase() = default ;
    GetLogicDatabaseResponseBodyLogicDatabase(const GetLogicDatabaseResponseBodyLogicDatabase &) = default ;
    GetLogicDatabaseResponseBodyLogicDatabase(GetLogicDatabaseResponseBodyLogicDatabase &&) = default ;
    GetLogicDatabaseResponseBodyLogicDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogicDatabaseResponseBodyLogicDatabase() = default ;
    GetLogicDatabaseResponseBodyLogicDatabase& operator=(const GetLogicDatabaseResponseBodyLogicDatabase &) = default ;
    GetLogicDatabaseResponseBodyLogicDatabase& operator=(GetLogicDatabaseResponseBodyLogicDatabase &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->databaseId_ != nullptr && this->databaseIds_ != nullptr && this->dbType_ != nullptr && this->envType_ != nullptr && this->logic_ != nullptr
        && this->ownerIdList_ != nullptr && this->ownerNameList_ != nullptr && this->schemaName_ != nullptr && this->searchName_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // databaseIds Field Functions 
    bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
    void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
    inline const Models::GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds & databaseIds() const { DARABONBA_PTR_GET_CONST(databaseIds_, Models::GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds) };
    inline Models::GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds databaseIds() { DARABONBA_PTR_GET(databaseIds_, Models::GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds) };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setDatabaseIds(const Models::GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setDatabaseIds(Models::GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList) };
    inline Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList) };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setOwnerIdList(const Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setOwnerIdList(Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // ownerNameList Field Functions 
    bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
    void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
    inline const Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList & ownerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList) };
    inline Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList ownerNameList() { DARABONBA_PTR_GET(ownerNameList_, Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList) };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setOwnerNameList(const Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setOwnerNameList(Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline GetLogicDatabaseResponseBodyLogicDatabase& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


  protected:
    // The alias of the logical database.
    std::shared_ptr<string> alias_ = nullptr;
    // The ID of the logical database.
    std::shared_ptr<string> databaseId_ = nullptr;
    // The IDs of database shards of the logical database.
    std::shared_ptr<Models::GetLogicDatabaseResponseBodyLogicDatabaseDatabaseIds> databaseIds_ = nullptr;
    // The database engine. For more information about the valid values of the DbType parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment to which the database belongs. Valid values:
    // 
    // *   product: production environment
    // *   dev: development environment
    // *   pre: pre-release environment
    // *   test: test environment
    // *   sit: system integration testing (SIT) environment
    // *   uat: user acceptance testing (UAT) environment
    // *   pet: stress testing environment
    // *   stag: staging environment
    std::shared_ptr<string> envType_ = nullptr;
    // Indicates whether the database is a logical database. The return value is true.
    std::shared_ptr<bool> logic_ = nullptr;
    // The IDs of the owners of the logical database.
    std::shared_ptr<Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerIdList> ownerIdList_ = nullptr;
    // The names of the owners of the logical database.
    std::shared_ptr<Models::GetLogicDatabaseResponseBodyLogicDatabaseOwnerNameList> ownerNameList_ = nullptr;
    // The name of the logical database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name that is used to search for the logical database.
    std::shared_ptr<string> searchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
