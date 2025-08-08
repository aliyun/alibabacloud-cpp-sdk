// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLOGICDATABASESRESPONSEBODYLOGICDATABASELISTLOGICDATABASE_HPP_
#define ALIBABACLOUD_MODELS_LISTLOGICDATABASESRESPONSEBODYLOGICDATABASELISTLOGICDATABASE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds.hpp>
#include <alibabacloud/models/ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList.hpp>
#include <alibabacloud/models/ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& obj) { 
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
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase() = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase(const ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase &) = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase(ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase &&) = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase() = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& operator=(const ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase &) = default ;
    ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& operator=(ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase &&) = default ;
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
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // databaseIds Field Functions 
    bool hasDatabaseIds() const { return this->databaseIds_ != nullptr;};
    void deleteDatabaseIds() { this->databaseIds_ = nullptr;};
    inline const Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds & databaseIds() const { DARABONBA_PTR_GET_CONST(databaseIds_, Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds) };
    inline Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds databaseIds() { DARABONBA_PTR_GET(databaseIds_, Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setDatabaseIds(const Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds & databaseIds) { DARABONBA_PTR_SET_VALUE(databaseIds_, databaseIds) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setDatabaseIds(Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds && databaseIds) { DARABONBA_PTR_SET_RVALUE(databaseIds_, databaseIds) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // ownerIdList Field Functions 
    bool hasOwnerIdList() const { return this->ownerIdList_ != nullptr;};
    void deleteOwnerIdList() { this->ownerIdList_ = nullptr;};
    inline const Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList & ownerIdList() const { DARABONBA_PTR_GET_CONST(ownerIdList_, Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList) };
    inline Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList ownerIdList() { DARABONBA_PTR_GET(ownerIdList_, Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setOwnerIdList(const Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList & ownerIdList) { DARABONBA_PTR_SET_VALUE(ownerIdList_, ownerIdList) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setOwnerIdList(Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList && ownerIdList) { DARABONBA_PTR_SET_RVALUE(ownerIdList_, ownerIdList) };


    // ownerNameList Field Functions 
    bool hasOwnerNameList() const { return this->ownerNameList_ != nullptr;};
    void deleteOwnerNameList() { this->ownerNameList_ = nullptr;};
    inline const Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList & ownerNameList() const { DARABONBA_PTR_GET_CONST(ownerNameList_, Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList) };
    inline Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList ownerNameList() { DARABONBA_PTR_GET(ownerNameList_, Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setOwnerNameList(const Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList & ownerNameList) { DARABONBA_PTR_SET_VALUE(ownerNameList_, ownerNameList) };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setOwnerNameList(Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList && ownerNameList) { DARABONBA_PTR_SET_RVALUE(ownerNameList_, ownerNameList) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // searchName Field Functions 
    bool hasSearchName() const { return this->searchName_ != nullptr;};
    void deleteSearchName() { this->searchName_ = nullptr;};
    inline string searchName() const { DARABONBA_PTR_GET_DEFAULT(searchName_, "") };
    inline ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabase& setSearchName(string searchName) { DARABONBA_PTR_SET_VALUE(searchName_, searchName) };


  protected:
    // The alias of the logical database.
    std::shared_ptr<string> alias_ = nullptr;
    // The ID of the logical database.
    std::shared_ptr<string> databaseId_ = nullptr;
    // Logical database sub-ID list.
    std::shared_ptr<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseDatabaseIds> databaseIds_ = nullptr;
    // The type of the logical database. For more information about the valid values of this parameter, see [DbType parameter](https://www.alibabacloud.com/help/en/data-management-service/latest/dbtype-parameter).
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment to which the logical database belongs. Valid values:
    // 
    // - **product**: production environment
    // - **dev**: development environment
    // - **pre**: staging environment
    // - **test**: test environment
    // - **sit**: system integration testing (SIT) environment
    // - **uat**: user acceptance testing (UAT) environment
    // - **pet**: stress testing environment
    // - **stag**: STAG environment
    std::shared_ptr<string> envType_ = nullptr;
    // Indicates whether the database is a logical database. The return value is true.
    std::shared_ptr<bool> logic_ = nullptr;
    // The IDs of the owners of the logical database.
    std::shared_ptr<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerIdList> ownerIdList_ = nullptr;
    // The names of the owners of the logical database.
    std::shared_ptr<Models::ListLogicDatabasesResponseBodyLogicDatabaseListLogicDatabaseOwnerNameList> ownerNameList_ = nullptr;
    // The name of the logical database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name that is used to search for the logical database.
    // 
    // > We recommend that you do not use this parameter for business development. The format of the parameter value may be modified in later versions.
    std::shared_ptr<string> searchName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
