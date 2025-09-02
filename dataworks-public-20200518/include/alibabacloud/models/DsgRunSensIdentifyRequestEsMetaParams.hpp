// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGRUNSENSIDENTIFYREQUESTESMETAPARAMS_HPP_
#define ALIBABACLOUD_MODELS_DSGRUNSENSIDENTIFYREQUESTESMETAPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgRunSensIdentifyRequestEsMetaParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgRunSensIdentifyRequestEsMetaParams& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DbType, dbType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableNameList, tableNameList_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DsgRunSensIdentifyRequestEsMetaParams& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DbType, dbType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableNameList, tableNameList_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DsgRunSensIdentifyRequestEsMetaParams() = default ;
    DsgRunSensIdentifyRequestEsMetaParams(const DsgRunSensIdentifyRequestEsMetaParams &) = default ;
    DsgRunSensIdentifyRequestEsMetaParams(DsgRunSensIdentifyRequestEsMetaParams &&) = default ;
    DsgRunSensIdentifyRequestEsMetaParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgRunSensIdentifyRequestEsMetaParams() = default ;
    DsgRunSensIdentifyRequestEsMetaParams& operator=(const DsgRunSensIdentifyRequestEsMetaParams &) = default ;
    DsgRunSensIdentifyRequestEsMetaParams& operator=(DsgRunSensIdentifyRequestEsMetaParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->dbType_ != nullptr && this->instanceId_ != nullptr && this->projectName_ != nullptr && this->schemaName_ != nullptr && this->tableName_ != nullptr
        && this->tableNameList_ != nullptr && this->user_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DsgRunSensIdentifyRequestEsMetaParams& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dbType Field Functions 
    bool hasDbType() const { return this->dbType_ != nullptr;};
    void deleteDbType() { this->dbType_ = nullptr;};
    inline string dbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
    inline DsgRunSensIdentifyRequestEsMetaParams& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DsgRunSensIdentifyRequestEsMetaParams& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline DsgRunSensIdentifyRequestEsMetaParams& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DsgRunSensIdentifyRequestEsMetaParams& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DsgRunSensIdentifyRequestEsMetaParams& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableNameList Field Functions 
    bool hasTableNameList() const { return this->tableNameList_ != nullptr;};
    void deleteTableNameList() { this->tableNameList_ = nullptr;};
    inline const vector<string> & tableNameList() const { DARABONBA_PTR_GET_CONST(tableNameList_, vector<string>) };
    inline vector<string> tableNameList() { DARABONBA_PTR_GET(tableNameList_, vector<string>) };
    inline DsgRunSensIdentifyRequestEsMetaParams& setTableNameList(const vector<string> & tableNameList) { DARABONBA_PTR_SET_VALUE(tableNameList_, tableNameList) };
    inline DsgRunSensIdentifyRequestEsMetaParams& setTableNameList(vector<string> && tableNameList) { DARABONBA_PTR_SET_RVALUE(tableNameList_, tableNameList) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DsgRunSensIdentifyRequestEsMetaParams& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The cluster ID. You can obtain the ID based on the data source you use.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   ODPS.ODPS
    // *   EMR
    // *   HOLO.POSTGRES
    std::shared_ptr<string> dbType_ = nullptr;
    // The instance ID. You can obtain the ID based on the data source you use.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The name of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the name.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the schema.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The names of the tables.
    std::shared_ptr<vector<string>> tableNameList_ = nullptr;
    // The username of the operator. We recommend that you enter the username of your Alibaba Cloud account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
