// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGRUNSENSIDENTIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DSGRUNSENSIDENTIFYREQUEST_HPP_
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
  class DsgRunSensIdentifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgRunSensIdentifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EsMetaParams, esMetaParams_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DsgRunSensIdentifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EsMetaParams, esMetaParams_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DsgRunSensIdentifyRequest() = default ;
    DsgRunSensIdentifyRequest(const DsgRunSensIdentifyRequest &) = default ;
    DsgRunSensIdentifyRequest(DsgRunSensIdentifyRequest &&) = default ;
    DsgRunSensIdentifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgRunSensIdentifyRequest() = default ;
    DsgRunSensIdentifyRequest& operator=(const DsgRunSensIdentifyRequest &) = default ;
    DsgRunSensIdentifyRequest& operator=(DsgRunSensIdentifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EsMetaParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EsMetaParams& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(DbType, dbType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TableNameList, tableNameList_);
        DARABONBA_PTR_TO_JSON(User, user_);
      };
      friend void from_json(const Darabonba::Json& j, EsMetaParams& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(DbType, dbType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TableNameList, tableNameList_);
        DARABONBA_PTR_FROM_JSON(User, user_);
      };
      EsMetaParams() = default ;
      EsMetaParams(const EsMetaParams &) = default ;
      EsMetaParams(EsMetaParams &&) = default ;
      EsMetaParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EsMetaParams() = default ;
      EsMetaParams& operator=(const EsMetaParams &) = default ;
      EsMetaParams& operator=(EsMetaParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dbType_ == nullptr && this->instanceId_ == nullptr && this->projectName_ == nullptr && this->schemaName_ == nullptr && this->tableName_ == nullptr
        && this->tableNameList_ == nullptr && this->user_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline EsMetaParams& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // dbType Field Functions 
      bool hasDbType() const { return this->dbType_ != nullptr;};
      void deleteDbType() { this->dbType_ = nullptr;};
      inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
      inline EsMetaParams& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
      inline EsMetaParams& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline EsMetaParams& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline EsMetaParams& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline EsMetaParams& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // tableNameList Field Functions 
      bool hasTableNameList() const { return this->tableNameList_ != nullptr;};
      void deleteTableNameList() { this->tableNameList_ = nullptr;};
      inline const vector<string> & getTableNameList() const { DARABONBA_PTR_GET_CONST(tableNameList_, vector<string>) };
      inline vector<string> getTableNameList() { DARABONBA_PTR_GET(tableNameList_, vector<string>) };
      inline EsMetaParams& setTableNameList(const vector<string> & tableNameList) { DARABONBA_PTR_SET_VALUE(tableNameList_, tableNameList) };
      inline EsMetaParams& setTableNameList(vector<string> && tableNameList) { DARABONBA_PTR_SET_RVALUE(tableNameList_, tableNameList) };


      // user Field Functions 
      bool hasUser() const { return this->user_ != nullptr;};
      void deleteUser() { this->user_ = nullptr;};
      inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
      inline EsMetaParams& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    protected:
      // The cluster ID. You can obtain the ID based on the data source you use.
      shared_ptr<string> clusterId_ {};
      // The type of the data source. Valid values:
      // 
      // *   ODPS.ODPS
      // *   EMR
      // *   HOLO.POSTGRES
      shared_ptr<string> dbType_ {};
      // The instance ID. You can obtain the ID based on the data source you use.
      shared_ptr<int64_t> instanceId_ {};
      // The name of the DataWorks workspace. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the name.
      shared_ptr<string> projectName_ {};
      // The name of the schema.
      shared_ptr<string> schemaName_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // The names of the tables.
      shared_ptr<vector<string>> tableNameList_ {};
      // The username of the operator. We recommend that you enter the username of your Alibaba Cloud account.
      shared_ptr<string> user_ {};
    };

    virtual bool empty() const override { return this->esMetaParams_ == nullptr
        && this->tenantId_ == nullptr; };
    // esMetaParams Field Functions 
    bool hasEsMetaParams() const { return this->esMetaParams_ != nullptr;};
    void deleteEsMetaParams() { this->esMetaParams_ = nullptr;};
    inline const vector<DsgRunSensIdentifyRequest::EsMetaParams> & getEsMetaParams() const { DARABONBA_PTR_GET_CONST(esMetaParams_, vector<DsgRunSensIdentifyRequest::EsMetaParams>) };
    inline vector<DsgRunSensIdentifyRequest::EsMetaParams> getEsMetaParams() { DARABONBA_PTR_GET(esMetaParams_, vector<DsgRunSensIdentifyRequest::EsMetaParams>) };
    inline DsgRunSensIdentifyRequest& setEsMetaParams(const vector<DsgRunSensIdentifyRequest::EsMetaParams> & esMetaParams) { DARABONBA_PTR_SET_VALUE(esMetaParams_, esMetaParams) };
    inline DsgRunSensIdentifyRequest& setEsMetaParams(vector<DsgRunSensIdentifyRequest::EsMetaParams> && esMetaParams) { DARABONBA_PTR_SET_RVALUE(esMetaParams_, esMetaParams) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DsgRunSensIdentifyRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The parameters that you need to configure to scan specified metadata.
    shared_ptr<vector<DsgRunSensIdentifyRequest::EsMetaParams>> esMetaParams_ {};
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    // 
    // This parameter is required.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
