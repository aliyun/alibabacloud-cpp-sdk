// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUESTPARAM_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAARCHIVEORDERREQUESTPARAM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataArchiveOrderRequestParamTableIncludes.hpp>
#include <alibabacloud/models/CreateDataArchiveOrderRequestParamVariables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataArchiveOrderRequestParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataArchiveOrderRequestParam& obj) { 
      DARABONBA_PTR_TO_JSON(ArchiveMethod, archiveMethod_);
      DARABONBA_PTR_TO_JSON(CronStr, cronStr_);
      DARABONBA_PTR_TO_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(OrderAfter, orderAfter_);
      DARABONBA_PTR_TO_JSON(RunMethod, runMethod_);
      DARABONBA_PTR_TO_JSON(SourceCatalogName, sourceCatalogName_);
      DARABONBA_PTR_TO_JSON(SourceInstanceName, sourceInstanceName_);
      DARABONBA_PTR_TO_JSON(SourceSchemaName, sourceSchemaName_);
      DARABONBA_PTR_TO_JSON(TableIncludes, tableIncludes_);
      DARABONBA_PTR_TO_JSON(TableMapping, tableMapping_);
      DARABONBA_PTR_TO_JSON(TargetInstanceHost, targetInstanceHost_);
      DARABONBA_PTR_TO_JSON(Variables, variables_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataArchiveOrderRequestParam& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchiveMethod, archiveMethod_);
      DARABONBA_PTR_FROM_JSON(CronStr, cronStr_);
      DARABONBA_PTR_FROM_JSON(DatabaseId, databaseId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(OrderAfter, orderAfter_);
      DARABONBA_PTR_FROM_JSON(RunMethod, runMethod_);
      DARABONBA_PTR_FROM_JSON(SourceCatalogName, sourceCatalogName_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceName, sourceInstanceName_);
      DARABONBA_PTR_FROM_JSON(SourceSchemaName, sourceSchemaName_);
      DARABONBA_PTR_FROM_JSON(TableIncludes, tableIncludes_);
      DARABONBA_PTR_FROM_JSON(TableMapping, tableMapping_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceHost, targetInstanceHost_);
      DARABONBA_PTR_FROM_JSON(Variables, variables_);
    };
    CreateDataArchiveOrderRequestParam() = default ;
    CreateDataArchiveOrderRequestParam(const CreateDataArchiveOrderRequestParam &) = default ;
    CreateDataArchiveOrderRequestParam(CreateDataArchiveOrderRequestParam &&) = default ;
    CreateDataArchiveOrderRequestParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataArchiveOrderRequestParam() = default ;
    CreateDataArchiveOrderRequestParam& operator=(const CreateDataArchiveOrderRequestParam &) = default ;
    CreateDataArchiveOrderRequestParam& operator=(CreateDataArchiveOrderRequestParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->archiveMethod_ == nullptr
        && return this->cronStr_ == nullptr && return this->databaseId_ == nullptr && return this->logic_ == nullptr && return this->orderAfter_ == nullptr && return this->runMethod_ == nullptr
        && return this->sourceCatalogName_ == nullptr && return this->sourceInstanceName_ == nullptr && return this->sourceSchemaName_ == nullptr && return this->tableIncludes_ == nullptr && return this->tableMapping_ == nullptr
        && return this->targetInstanceHost_ == nullptr && return this->variables_ == nullptr; };
    // archiveMethod Field Functions 
    bool hasArchiveMethod() const { return this->archiveMethod_ != nullptr;};
    void deleteArchiveMethod() { this->archiveMethod_ = nullptr;};
    inline string archiveMethod() const { DARABONBA_PTR_GET_DEFAULT(archiveMethod_, "") };
    inline CreateDataArchiveOrderRequestParam& setArchiveMethod(string archiveMethod) { DARABONBA_PTR_SET_VALUE(archiveMethod_, archiveMethod) };


    // cronStr Field Functions 
    bool hasCronStr() const { return this->cronStr_ != nullptr;};
    void deleteCronStr() { this->cronStr_ = nullptr;};
    inline string cronStr() const { DARABONBA_PTR_GET_DEFAULT(cronStr_, "") };
    inline CreateDataArchiveOrderRequestParam& setCronStr(string cronStr) { DARABONBA_PTR_SET_VALUE(cronStr_, cronStr) };


    // databaseId Field Functions 
    bool hasDatabaseId() const { return this->databaseId_ != nullptr;};
    void deleteDatabaseId() { this->databaseId_ = nullptr;};
    inline string databaseId() const { DARABONBA_PTR_GET_DEFAULT(databaseId_, "") };
    inline CreateDataArchiveOrderRequestParam& setDatabaseId(string databaseId) { DARABONBA_PTR_SET_VALUE(databaseId_, databaseId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CreateDataArchiveOrderRequestParam& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // orderAfter Field Functions 
    bool hasOrderAfter() const { return this->orderAfter_ != nullptr;};
    void deleteOrderAfter() { this->orderAfter_ = nullptr;};
    inline const vector<string> & orderAfter() const { DARABONBA_PTR_GET_CONST(orderAfter_, vector<string>) };
    inline vector<string> orderAfter() { DARABONBA_PTR_GET(orderAfter_, vector<string>) };
    inline CreateDataArchiveOrderRequestParam& setOrderAfter(const vector<string> & orderAfter) { DARABONBA_PTR_SET_VALUE(orderAfter_, orderAfter) };
    inline CreateDataArchiveOrderRequestParam& setOrderAfter(vector<string> && orderAfter) { DARABONBA_PTR_SET_RVALUE(orderAfter_, orderAfter) };


    // runMethod Field Functions 
    bool hasRunMethod() const { return this->runMethod_ != nullptr;};
    void deleteRunMethod() { this->runMethod_ = nullptr;};
    inline string runMethod() const { DARABONBA_PTR_GET_DEFAULT(runMethod_, "") };
    inline CreateDataArchiveOrderRequestParam& setRunMethod(string runMethod) { DARABONBA_PTR_SET_VALUE(runMethod_, runMethod) };


    // sourceCatalogName Field Functions 
    bool hasSourceCatalogName() const { return this->sourceCatalogName_ != nullptr;};
    void deleteSourceCatalogName() { this->sourceCatalogName_ = nullptr;};
    inline string sourceCatalogName() const { DARABONBA_PTR_GET_DEFAULT(sourceCatalogName_, "") };
    inline CreateDataArchiveOrderRequestParam& setSourceCatalogName(string sourceCatalogName) { DARABONBA_PTR_SET_VALUE(sourceCatalogName_, sourceCatalogName) };


    // sourceInstanceName Field Functions 
    bool hasSourceInstanceName() const { return this->sourceInstanceName_ != nullptr;};
    void deleteSourceInstanceName() { this->sourceInstanceName_ = nullptr;};
    inline string sourceInstanceName() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceName_, "") };
    inline CreateDataArchiveOrderRequestParam& setSourceInstanceName(string sourceInstanceName) { DARABONBA_PTR_SET_VALUE(sourceInstanceName_, sourceInstanceName) };


    // sourceSchemaName Field Functions 
    bool hasSourceSchemaName() const { return this->sourceSchemaName_ != nullptr;};
    void deleteSourceSchemaName() { this->sourceSchemaName_ = nullptr;};
    inline string sourceSchemaName() const { DARABONBA_PTR_GET_DEFAULT(sourceSchemaName_, "") };
    inline CreateDataArchiveOrderRequestParam& setSourceSchemaName(string sourceSchemaName) { DARABONBA_PTR_SET_VALUE(sourceSchemaName_, sourceSchemaName) };


    // tableIncludes Field Functions 
    bool hasTableIncludes() const { return this->tableIncludes_ != nullptr;};
    void deleteTableIncludes() { this->tableIncludes_ = nullptr;};
    inline const vector<Models::CreateDataArchiveOrderRequestParamTableIncludes> & tableIncludes() const { DARABONBA_PTR_GET_CONST(tableIncludes_, vector<Models::CreateDataArchiveOrderRequestParamTableIncludes>) };
    inline vector<Models::CreateDataArchiveOrderRequestParamTableIncludes> tableIncludes() { DARABONBA_PTR_GET(tableIncludes_, vector<Models::CreateDataArchiveOrderRequestParamTableIncludes>) };
    inline CreateDataArchiveOrderRequestParam& setTableIncludes(const vector<Models::CreateDataArchiveOrderRequestParamTableIncludes> & tableIncludes) { DARABONBA_PTR_SET_VALUE(tableIncludes_, tableIncludes) };
    inline CreateDataArchiveOrderRequestParam& setTableIncludes(vector<Models::CreateDataArchiveOrderRequestParamTableIncludes> && tableIncludes) { DARABONBA_PTR_SET_RVALUE(tableIncludes_, tableIncludes) };


    // tableMapping Field Functions 
    bool hasTableMapping() const { return this->tableMapping_ != nullptr;};
    void deleteTableMapping() { this->tableMapping_ = nullptr;};
    inline const vector<string> & tableMapping() const { DARABONBA_PTR_GET_CONST(tableMapping_, vector<string>) };
    inline vector<string> tableMapping() { DARABONBA_PTR_GET(tableMapping_, vector<string>) };
    inline CreateDataArchiveOrderRequestParam& setTableMapping(const vector<string> & tableMapping) { DARABONBA_PTR_SET_VALUE(tableMapping_, tableMapping) };
    inline CreateDataArchiveOrderRequestParam& setTableMapping(vector<string> && tableMapping) { DARABONBA_PTR_SET_RVALUE(tableMapping_, tableMapping) };


    // targetInstanceHost Field Functions 
    bool hasTargetInstanceHost() const { return this->targetInstanceHost_ != nullptr;};
    void deleteTargetInstanceHost() { this->targetInstanceHost_ = nullptr;};
    inline string targetInstanceHost() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceHost_, "") };
    inline CreateDataArchiveOrderRequestParam& setTargetInstanceHost(string targetInstanceHost) { DARABONBA_PTR_SET_VALUE(targetInstanceHost_, targetInstanceHost) };


    // variables Field Functions 
    bool hasVariables() const { return this->variables_ != nullptr;};
    void deleteVariables() { this->variables_ = nullptr;};
    inline const vector<Models::CreateDataArchiveOrderRequestParamVariables> & variables() const { DARABONBA_PTR_GET_CONST(variables_, vector<Models::CreateDataArchiveOrderRequestParamVariables>) };
    inline vector<Models::CreateDataArchiveOrderRequestParamVariables> variables() { DARABONBA_PTR_GET(variables_, vector<Models::CreateDataArchiveOrderRequestParamVariables>) };
    inline CreateDataArchiveOrderRequestParam& setVariables(const vector<Models::CreateDataArchiveOrderRequestParamVariables> & variables) { DARABONBA_PTR_SET_VALUE(variables_, variables) };
    inline CreateDataArchiveOrderRequestParam& setVariables(vector<Models::CreateDataArchiveOrderRequestParamVariables> && variables) { DARABONBA_PTR_SET_RVALUE(variables_, variables) };


  protected:
    // The archiving destination to which you want to archive data. Valid values:
    // 
    // >  If you set ArchiveMethod to a value other than inner_oss, you must register the corresponding destination database with Data Management (DMS) before you create the data archiving ticket. After the database is registered with DMS, the database is displayed in the Instances Connected section of the DMS console.
    // 
    // *   **inner_oss**: dedicated storage, which is a built-in Object Storage Service (OSS) bucket.
    // *   **oss_userself**: OSS bucket of the user.
    // *   **mysql**: ApsaraDB RDS for MySQL instance.
    // *   **polardb**: PolarDB for MySQL cluster.
    // *   **adb_mysql**: AnalyticDB for MySQL V3.0 cluster.
    // *   **lindorm**: Lindorm instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> archiveMethod_ = nullptr;
    // A crontab expression that specifies the scheduling cycle of the data archiving task. For more information, see the [Crontab expressions](https://help.aliyun.com/document_detail/206581.html) section of the "Create shadow tables for synchronization" topic. You must specify this parameter if you set RunMethod to schedule.
    std::shared_ptr<string> cronStr_ = nullptr;
    // The database ID. If the database is a self-managed database or a third-party cloud database, you can call the [GetDatabase](https://help.aliyun.com/document_detail/465856.html) operation to query the database ID. If the database is an Alibaba Cloud database, ignore this parameter.
    std::shared_ptr<string> databaseId_ = nullptr;
    // Specifies whether the database is a logical database.
    std::shared_ptr<bool> logic_ = nullptr;
    // The post behaviors.
    std::shared_ptr<vector<string>> orderAfter_ = nullptr;
    // The method that is used to run the data archiving task. Valid values:
    // 
    // *   **schedule**: The data archiving task is periodically scheduled.
    // *   **now**: The data archiving task is immediately run.
    // 
    // This parameter is required.
    std::shared_ptr<string> runMethod_ = nullptr;
    // The catalog of the source database. Valid values:
    // 
    // *   **def**: Set this parameter to def if the source database is of the two-layer logical schema, such as a MySQL database, a PolarDB for MySQL cluster, or an AnalyticDB for MySQL instance.
    // *   **Empty string**: Set this parameter to an empty string if the source database is a Lindorm or ApsaraDB for MongoDB instance.
    // *   **Catalog name**: Set this parameter to the catalog name of the source database if the source database is of the three-layer logical schema, such as a PostgreSQL database.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceCatalogName_ = nullptr;
    // The name of the source instance. If the database instance is a self-managed database or a third-party cloud database, you can call the [GetInstance](https://help.aliyun.com/document_detail/465826.html) operation to query the instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceInstanceName_ = nullptr;
    // The schema name of the source database. The schema name of the source database is the same as that of the destination database. If the source database is a MySQL database, this parameter specifies the name of the source database. If the source database is a PostgreSQL database, this parameter specifies the schema name of the source database.
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceSchemaName_ = nullptr;
    // The collection of tables to be archived.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateDataArchiveOrderRequestParamTableIncludes>> tableIncludes_ = nullptr;
    // The table names mapped to the destination database. This parameter is not required and the default value is used.
    std::shared_ptr<vector<string>> tableMapping_ = nullptr;
    // The host of the destination instance. If the destination instance can be accessed over an internal network or the Internet, preferentially set the value to the internal endpoint of the destination instance.
    // 
    // *   If data is archived in an OSS bucket, set the value to the name of the bucket.
    // *   If data is archived in dedicated storage space, set the value to inner_oss.
    // 
    // This parameter is required.
    std::shared_ptr<string> targetInstanceHost_ = nullptr;
    // The configuration of archiving variables. You can use a time variable as a filter condition for archiving data. Each variable has two attributes: name and pattern.
    std::shared_ptr<vector<Models::CreateDataArchiveOrderRequestParamVariables>> variables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
