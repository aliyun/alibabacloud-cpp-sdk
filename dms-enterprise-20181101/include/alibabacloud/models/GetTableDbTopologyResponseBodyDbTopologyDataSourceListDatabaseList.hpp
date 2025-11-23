// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODYDBTOPOLOGYDATASOURCELISTDATABASELIST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDBTOPOLOGYRESPONSEBODYDBTOPOLOGYDATASOURCELISTDATABASELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(TableList, tableList_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(TableList, tableList_);
    };
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList() = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList(const GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList &) = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList(GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList &&) = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList() = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& operator=(const GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList &) = default ;
    GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& operator=(GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && return this->dbName_ == nullptr && return this->dbType_ == nullptr && return this->envType_ == nullptr && return this->tableList_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline string dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& setDbId(string dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // tableList Field Functions 
    bool hasTableList() const { return this->tableList_ != nullptr;};
    void deleteTableList() { this->tableList_ = nullptr;};
    inline const vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList> & tableList() const { DARABONBA_PTR_GET_CONST(tableList_, vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList>) };
    inline vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList> tableList() { DARABONBA_PTR_GET(tableList_, vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList>) };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& setTableList(const vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList> & tableList) { DARABONBA_PTR_SET_VALUE(tableList_, tableList) };
    inline GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseList& setTableList(vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList> && tableList) { DARABONBA_PTR_SET_RVALUE(tableList_, tableList) };


  protected:
    // The ID of the database.
    std::shared_ptr<string> dbId_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The type of the database. For more information about the valid values of this parameter, see [DbType parameter](https://help.aliyun.com/document_detail/198106.html).
    std::shared_ptr<string> dbType_ = nullptr;
    // The type of the environment to which the database belongs. Valid values:
    // 
    // *   **product**: production environment
    // *   **dev**: development environment
    // *   **pre**: pre-release environment
    // *   **test**: test environment
    // *   **sit**: system integration testing (SIT) environment
    // *   **uat**: user acceptance testing (UAT) environment
    // *   **pet**: stress testing environment
    // *   **stag**: staging environment
    // 
    // > For more information, see [Change the environment type of an instance](https://help.aliyun.com/document_detail/163309.html).
    std::shared_ptr<string> envType_ = nullptr;
    // The physical tables.
    std::shared_ptr<vector<Models::GetTableDBTopologyResponseBodyDBTopologyDataSourceListDatabaseListTableList>> tableList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
