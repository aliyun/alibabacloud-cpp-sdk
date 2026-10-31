// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateBatchTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    CreateBatchTaskRequest() = default ;
    CreateBatchTaskRequest(const CreateBatchTaskRequest &) = default ;
    CreateBatchTaskRequest(CreateBatchTaskRequest &&) = default ;
    CreateBatchTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchTaskRequest() = default ;
    CreateBatchTaskRequest& operator=(const CreateBatchTaskRequest &) = default ;
    CreateBatchTaskRequest& operator=(CreateBatchTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(CodeTemplateId, codeTemplateId_);
        DARABONBA_PTR_TO_JSON(CodeTemplateVersion, codeTemplateVersion_);
        DARABONBA_PTR_TO_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_TO_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_TO_JSON(DatabricksPythonConnectInfo, databricksPythonConnectInfo_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DevelopOwnerIdList, developOwnerIdList_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OpsOwnerIdList, opsOwnerIdList_);
        DARABONBA_PTR_TO_JSON(PaiConfig, paiConfig_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_TO_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_TO_JSON(SparkDynamicResourceSwitch, sparkDynamicResourceSwitch_);
        DARABONBA_PTR_TO_JSON(SparkResourceEffectScope, sparkResourceEffectScope_);
        DARABONBA_PTR_TO_JSON(SparkSqlResourceConfigMap, sparkSqlResourceConfigMap_);
        DARABONBA_PTR_TO_JSON(SparkVersion, sparkVersion_);
        DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(CodeTemplateId, codeTemplateId_);
        DARABONBA_PTR_FROM_JSON(CodeTemplateVersion, codeTemplateVersion_);
        DARABONBA_PTR_FROM_JSON(DataSourceCatalog, dataSourceCatalog_);
        DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
        DARABONBA_PTR_FROM_JSON(DataSourceSchema, dataSourceSchema_);
        DARABONBA_PTR_FROM_JSON(DatabricksPythonConnectInfo, databricksPythonConnectInfo_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DevelopOwnerIdList, developOwnerIdList_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OpsOwnerIdList, opsOwnerIdList_);
        DARABONBA_PTR_FROM_JSON(PaiConfig, paiConfig_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(PythonModuleList, pythonModuleList_);
        DARABONBA_PTR_FROM_JSON(ScheduleType, scheduleType_);
        DARABONBA_PTR_FROM_JSON(SparkDynamicResourceSwitch, sparkDynamicResourceSwitch_);
        DARABONBA_PTR_FROM_JSON(SparkResourceEffectScope, sparkResourceEffectScope_);
        DARABONBA_PTR_FROM_JSON(SparkSqlResourceConfigMap, sparkSqlResourceConfigMap_);
        DARABONBA_PTR_FROM_JSON(SparkVersion, sparkVersion_);
        DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      };
      CreateCommand() = default ;
      CreateCommand(const CreateCommand &) = default ;
      CreateCommand(CreateCommand &&) = default ;
      CreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateCommand() = default ;
      CreateCommand& operator=(const CreateCommand &) = default ;
      CreateCommand& operator=(CreateCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PaiConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PaiConfig& obj) { 
          DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
          DARABONBA_PTR_TO_JSON(Region, region_);
          DARABONBA_PTR_TO_JSON(WorkSpaceId, workSpaceId_);
        };
        friend void from_json(const Darabonba::Json& j, PaiConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
          DARABONBA_PTR_FROM_JSON(Region, region_);
          DARABONBA_PTR_FROM_JSON(WorkSpaceId, workSpaceId_);
        };
        PaiConfig() = default ;
        PaiConfig(const PaiConfig &) = default ;
        PaiConfig(PaiConfig &&) = default ;
        PaiConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PaiConfig() = default ;
        PaiConfig& operator=(const PaiConfig &) = default ;
        PaiConfig& operator=(PaiConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->experimentId_ == nullptr
        && this->region_ == nullptr && this->workSpaceId_ == nullptr; };
        // experimentId Field Functions 
        bool hasExperimentId() const { return this->experimentId_ != nullptr;};
        void deleteExperimentId() { this->experimentId_ = nullptr;};
        inline string getExperimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
        inline PaiConfig& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline PaiConfig& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // workSpaceId Field Functions 
        bool hasWorkSpaceId() const { return this->workSpaceId_ != nullptr;};
        void deleteWorkSpaceId() { this->workSpaceId_ = nullptr;};
        inline string getWorkSpaceId() const { DARABONBA_PTR_GET_DEFAULT(workSpaceId_, "") };
        inline PaiConfig& setWorkSpaceId(string workSpaceId) { DARABONBA_PTR_SET_VALUE(workSpaceId_, workSpaceId) };


      protected:
        // The ID of the PAI experiment.
        shared_ptr<string> experimentId_ {};
        // The PAI region.
        shared_ptr<string> region_ {};
        // The ID of the PAI workspace.
        shared_ptr<string> workSpaceId_ {};
      };

      class DatabricksPythonConnectInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DatabricksPythonConnectInfo& obj) { 
          DARABONBA_PTR_TO_JSON(DevHttpPath, devHttpPath_);
          DARABONBA_PTR_TO_JSON(EnableDatabricksPythonConnect, enableDatabricksPythonConnect_);
          DARABONBA_PTR_TO_JSON(ProdHttpPath, prodHttpPath_);
        };
        friend void from_json(const Darabonba::Json& j, DatabricksPythonConnectInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(DevHttpPath, devHttpPath_);
          DARABONBA_PTR_FROM_JSON(EnableDatabricksPythonConnect, enableDatabricksPythonConnect_);
          DARABONBA_PTR_FROM_JSON(ProdHttpPath, prodHttpPath_);
        };
        DatabricksPythonConnectInfo() = default ;
        DatabricksPythonConnectInfo(const DatabricksPythonConnectInfo &) = default ;
        DatabricksPythonConnectInfo(DatabricksPythonConnectInfo &&) = default ;
        DatabricksPythonConnectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DatabricksPythonConnectInfo() = default ;
        DatabricksPythonConnectInfo& operator=(const DatabricksPythonConnectInfo &) = default ;
        DatabricksPythonConnectInfo& operator=(DatabricksPythonConnectInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->devHttpPath_ == nullptr
        && this->enableDatabricksPythonConnect_ == nullptr && this->prodHttpPath_ == nullptr; };
        // devHttpPath Field Functions 
        bool hasDevHttpPath() const { return this->devHttpPath_ != nullptr;};
        void deleteDevHttpPath() { this->devHttpPath_ = nullptr;};
        inline string getDevHttpPath() const { DARABONBA_PTR_GET_DEFAULT(devHttpPath_, "") };
        inline DatabricksPythonConnectInfo& setDevHttpPath(string devHttpPath) { DARABONBA_PTR_SET_VALUE(devHttpPath_, devHttpPath) };


        // enableDatabricksPythonConnect Field Functions 
        bool hasEnableDatabricksPythonConnect() const { return this->enableDatabricksPythonConnect_ != nullptr;};
        void deleteEnableDatabricksPythonConnect() { this->enableDatabricksPythonConnect_ = nullptr;};
        inline bool getEnableDatabricksPythonConnect() const { DARABONBA_PTR_GET_DEFAULT(enableDatabricksPythonConnect_, false) };
        inline DatabricksPythonConnectInfo& setEnableDatabricksPythonConnect(bool enableDatabricksPythonConnect) { DARABONBA_PTR_SET_VALUE(enableDatabricksPythonConnect_, enableDatabricksPythonConnect) };


        // prodHttpPath Field Functions 
        bool hasProdHttpPath() const { return this->prodHttpPath_ != nullptr;};
        void deleteProdHttpPath() { this->prodHttpPath_ = nullptr;};
        inline string getProdHttpPath() const { DARABONBA_PTR_GET_DEFAULT(prodHttpPath_, "") };
        inline DatabricksPythonConnectInfo& setProdHttpPath(string prodHttpPath) { DARABONBA_PTR_SET_VALUE(prodHttpPath_, prodHttpPath) };


      protected:
        // The HTTP path for the development environment.
        shared_ptr<string> devHttpPath_ {};
        // Specifies whether to enable Databricks Python connect.
        shared_ptr<bool> enableDatabricksPythonConnect_ {};
        // The HTTP path for the production environment.
        shared_ptr<string> prodHttpPath_ {};
      };

      virtual bool empty() const override { return this->codeTemplateId_ == nullptr
        && this->codeTemplateVersion_ == nullptr && this->dataSourceCatalog_ == nullptr && this->dataSourceId_ == nullptr && this->dataSourceSchema_ == nullptr && this->databricksPythonConnectInfo_ == nullptr
        && this->description_ == nullptr && this->developOwnerIdList_ == nullptr && this->directory_ == nullptr && this->engine_ == nullptr && this->name_ == nullptr
        && this->opsOwnerIdList_ == nullptr && this->paiConfig_ == nullptr && this->projectId_ == nullptr && this->pythonModuleList_ == nullptr && this->scheduleType_ == nullptr
        && this->sparkDynamicResourceSwitch_ == nullptr && this->sparkResourceEffectScope_ == nullptr && this->sparkSqlResourceConfigMap_ == nullptr && this->sparkVersion_ == nullptr && this->taskType_ == nullptr; };
      // codeTemplateId Field Functions 
      bool hasCodeTemplateId() const { return this->codeTemplateId_ != nullptr;};
      void deleteCodeTemplateId() { this->codeTemplateId_ = nullptr;};
      inline string getCodeTemplateId() const { DARABONBA_PTR_GET_DEFAULT(codeTemplateId_, "") };
      inline CreateCommand& setCodeTemplateId(string codeTemplateId) { DARABONBA_PTR_SET_VALUE(codeTemplateId_, codeTemplateId) };


      // codeTemplateVersion Field Functions 
      bool hasCodeTemplateVersion() const { return this->codeTemplateVersion_ != nullptr;};
      void deleteCodeTemplateVersion() { this->codeTemplateVersion_ = nullptr;};
      inline int32_t getCodeTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(codeTemplateVersion_, 0) };
      inline CreateCommand& setCodeTemplateVersion(int32_t codeTemplateVersion) { DARABONBA_PTR_SET_VALUE(codeTemplateVersion_, codeTemplateVersion) };


      // dataSourceCatalog Field Functions 
      bool hasDataSourceCatalog() const { return this->dataSourceCatalog_ != nullptr;};
      void deleteDataSourceCatalog() { this->dataSourceCatalog_ = nullptr;};
      inline string getDataSourceCatalog() const { DARABONBA_PTR_GET_DEFAULT(dataSourceCatalog_, "") };
      inline CreateCommand& setDataSourceCatalog(string dataSourceCatalog) { DARABONBA_PTR_SET_VALUE(dataSourceCatalog_, dataSourceCatalog) };


      // dataSourceId Field Functions 
      bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
      void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
      inline string getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
      inline CreateCommand& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


      // dataSourceSchema Field Functions 
      bool hasDataSourceSchema() const { return this->dataSourceSchema_ != nullptr;};
      void deleteDataSourceSchema() { this->dataSourceSchema_ = nullptr;};
      inline string getDataSourceSchema() const { DARABONBA_PTR_GET_DEFAULT(dataSourceSchema_, "") };
      inline CreateCommand& setDataSourceSchema(string dataSourceSchema) { DARABONBA_PTR_SET_VALUE(dataSourceSchema_, dataSourceSchema) };


      // databricksPythonConnectInfo Field Functions 
      bool hasDatabricksPythonConnectInfo() const { return this->databricksPythonConnectInfo_ != nullptr;};
      void deleteDatabricksPythonConnectInfo() { this->databricksPythonConnectInfo_ = nullptr;};
      inline const CreateCommand::DatabricksPythonConnectInfo & getDatabricksPythonConnectInfo() const { DARABONBA_PTR_GET_CONST(databricksPythonConnectInfo_, CreateCommand::DatabricksPythonConnectInfo) };
      inline CreateCommand::DatabricksPythonConnectInfo getDatabricksPythonConnectInfo() { DARABONBA_PTR_GET(databricksPythonConnectInfo_, CreateCommand::DatabricksPythonConnectInfo) };
      inline CreateCommand& setDatabricksPythonConnectInfo(const CreateCommand::DatabricksPythonConnectInfo & databricksPythonConnectInfo) { DARABONBA_PTR_SET_VALUE(databricksPythonConnectInfo_, databricksPythonConnectInfo) };
      inline CreateCommand& setDatabricksPythonConnectInfo(CreateCommand::DatabricksPythonConnectInfo && databricksPythonConnectInfo) { DARABONBA_PTR_SET_RVALUE(databricksPythonConnectInfo_, databricksPythonConnectInfo) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // developOwnerIdList Field Functions 
      bool hasDevelopOwnerIdList() const { return this->developOwnerIdList_ != nullptr;};
      void deleteDevelopOwnerIdList() { this->developOwnerIdList_ = nullptr;};
      inline const vector<string> & getDevelopOwnerIdList() const { DARABONBA_PTR_GET_CONST(developOwnerIdList_, vector<string>) };
      inline vector<string> getDevelopOwnerIdList() { DARABONBA_PTR_GET(developOwnerIdList_, vector<string>) };
      inline CreateCommand& setDevelopOwnerIdList(const vector<string> & developOwnerIdList) { DARABONBA_PTR_SET_VALUE(developOwnerIdList_, developOwnerIdList) };
      inline CreateCommand& setDevelopOwnerIdList(vector<string> && developOwnerIdList) { DARABONBA_PTR_SET_RVALUE(developOwnerIdList_, developOwnerIdList) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline CreateCommand& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline CreateCommand& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // opsOwnerIdList Field Functions 
      bool hasOpsOwnerIdList() const { return this->opsOwnerIdList_ != nullptr;};
      void deleteOpsOwnerIdList() { this->opsOwnerIdList_ = nullptr;};
      inline const vector<string> & getOpsOwnerIdList() const { DARABONBA_PTR_GET_CONST(opsOwnerIdList_, vector<string>) };
      inline vector<string> getOpsOwnerIdList() { DARABONBA_PTR_GET(opsOwnerIdList_, vector<string>) };
      inline CreateCommand& setOpsOwnerIdList(const vector<string> & opsOwnerIdList) { DARABONBA_PTR_SET_VALUE(opsOwnerIdList_, opsOwnerIdList) };
      inline CreateCommand& setOpsOwnerIdList(vector<string> && opsOwnerIdList) { DARABONBA_PTR_SET_RVALUE(opsOwnerIdList_, opsOwnerIdList) };


      // paiConfig Field Functions 
      bool hasPaiConfig() const { return this->paiConfig_ != nullptr;};
      void deletePaiConfig() { this->paiConfig_ = nullptr;};
      inline const CreateCommand::PaiConfig & getPaiConfig() const { DARABONBA_PTR_GET_CONST(paiConfig_, CreateCommand::PaiConfig) };
      inline CreateCommand::PaiConfig getPaiConfig() { DARABONBA_PTR_GET(paiConfig_, CreateCommand::PaiConfig) };
      inline CreateCommand& setPaiConfig(const CreateCommand::PaiConfig & paiConfig) { DARABONBA_PTR_SET_VALUE(paiConfig_, paiConfig) };
      inline CreateCommand& setPaiConfig(CreateCommand::PaiConfig && paiConfig) { DARABONBA_PTR_SET_RVALUE(paiConfig_, paiConfig) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline CreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // pythonModuleList Field Functions 
      bool hasPythonModuleList() const { return this->pythonModuleList_ != nullptr;};
      void deletePythonModuleList() { this->pythonModuleList_ = nullptr;};
      inline const vector<string> & getPythonModuleList() const { DARABONBA_PTR_GET_CONST(pythonModuleList_, vector<string>) };
      inline vector<string> getPythonModuleList() { DARABONBA_PTR_GET(pythonModuleList_, vector<string>) };
      inline CreateCommand& setPythonModuleList(const vector<string> & pythonModuleList) { DARABONBA_PTR_SET_VALUE(pythonModuleList_, pythonModuleList) };
      inline CreateCommand& setPythonModuleList(vector<string> && pythonModuleList) { DARABONBA_PTR_SET_RVALUE(pythonModuleList_, pythonModuleList) };


      // scheduleType Field Functions 
      bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
      void deleteScheduleType() { this->scheduleType_ = nullptr;};
      inline int32_t getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, 0) };
      inline CreateCommand& setScheduleType(int32_t scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


      // sparkDynamicResourceSwitch Field Functions 
      bool hasSparkDynamicResourceSwitch() const { return this->sparkDynamicResourceSwitch_ != nullptr;};
      void deleteSparkDynamicResourceSwitch() { this->sparkDynamicResourceSwitch_ = nullptr;};
      inline bool getSparkDynamicResourceSwitch() const { DARABONBA_PTR_GET_DEFAULT(sparkDynamicResourceSwitch_, false) };
      inline CreateCommand& setSparkDynamicResourceSwitch(bool sparkDynamicResourceSwitch) { DARABONBA_PTR_SET_VALUE(sparkDynamicResourceSwitch_, sparkDynamicResourceSwitch) };


      // sparkResourceEffectScope Field Functions 
      bool hasSparkResourceEffectScope() const { return this->sparkResourceEffectScope_ != nullptr;};
      void deleteSparkResourceEffectScope() { this->sparkResourceEffectScope_ = nullptr;};
      inline string getSparkResourceEffectScope() const { DARABONBA_PTR_GET_DEFAULT(sparkResourceEffectScope_, "") };
      inline CreateCommand& setSparkResourceEffectScope(string sparkResourceEffectScope) { DARABONBA_PTR_SET_VALUE(sparkResourceEffectScope_, sparkResourceEffectScope) };


      // sparkSqlResourceConfigMap Field Functions 
      bool hasSparkSqlResourceConfigMap() const { return this->sparkSqlResourceConfigMap_ != nullptr;};
      void deleteSparkSqlResourceConfigMap() { this->sparkSqlResourceConfigMap_ = nullptr;};
      inline string getSparkSqlResourceConfigMap() const { DARABONBA_PTR_GET_DEFAULT(sparkSqlResourceConfigMap_, "") };
      inline CreateCommand& setSparkSqlResourceConfigMap(string sparkSqlResourceConfigMap) { DARABONBA_PTR_SET_VALUE(sparkSqlResourceConfigMap_, sparkSqlResourceConfigMap) };


      // sparkVersion Field Functions 
      bool hasSparkVersion() const { return this->sparkVersion_ != nullptr;};
      void deleteSparkVersion() { this->sparkVersion_ = nullptr;};
      inline string getSparkVersion() const { DARABONBA_PTR_GET_DEFAULT(sparkVersion_, "") };
      inline CreateCommand& setSparkVersion(string sparkVersion) { DARABONBA_PTR_SET_VALUE(sparkVersion_, sparkVersion) };


      // taskType Field Functions 
      bool hasTaskType() const { return this->taskType_ != nullptr;};
      void deleteTaskType() { this->taskType_ = nullptr;};
      inline int32_t getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, 0) };
      inline CreateCommand& setTaskType(int32_t taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    protected:
      // The ID of the offline code template.
      shared_ptr<string> codeTemplateId_ {};
      // The version of the offline code template.
      shared_ptr<int32_t> codeTemplateVersion_ {};
      // The catalog for database SQL tasks. This parameter takes effect only for data source types that require a catalog, such as Presto.
      shared_ptr<string> dataSourceCatalog_ {};
      // The ID of the data source for database SQL tasks.
      shared_ptr<string> dataSourceId_ {};
      // The schema for database SQL tasks. This parameter takes effect only for data source types that require a schema, such as Oracle.
      shared_ptr<string> dataSourceSchema_ {};
      // The Python connection configuration.
      shared_ptr<CreateCommand::DatabricksPythonConnectInfo> databricksPythonConnectInfo_ {};
      // The description.
      // 
      // This parameter is required.
      shared_ptr<string> description_ {};
      // The IDs of the development owners.
      shared_ptr<vector<string>> developOwnerIdList_ {};
      // The directory in the menu tree to which the task belongs.
      // 
      // This parameter is required.
      shared_ptr<string> directory_ {};
      // The task execution engine, such as Python tasks. Valid values:
      // - PYTHON2_7
      // - PYTHON3_7
      // - PYTHON3_11
      shared_ptr<string> engine_ {};
      // The name of the offline task.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The IDs of the O&M owners.
      shared_ptr<vector<string>> opsOwnerIdList_ {};
      // The PAI configuration.
      shared_ptr<CreateCommand::PaiConfig> paiConfig_ {};
      // The ID of the project to which the task belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
      // The third-party Python packages that the task depends on.
      shared_ptr<vector<string>> pythonModuleList_ {};
      // The scheduling type. Valid values: 1 (periodic task) and 3 (manual task).
      // 
      // This parameter is required.
      shared_ptr<int32_t> scheduleType_ {};
      // Specifies whether to enable dynamic resource configuration for Spark. This parameter takes effect only for Spark SQL tasks. If you do not specify this parameter, dynamic resource configuration is enabled by default for Spark SQL tasks.
      shared_ptr<bool> sparkDynamicResourceSwitch_ {};
      // The effective scope of Spark resources. Valid values: ONLY_PROD and PROD_AND_DEV. If you do not specify this parameter, the default value ONLY_PROD is used for Spark SQL tasks.
      shared_ptr<string> sparkResourceEffectScope_ {};
      // The resource configuration for the Spark task. The value is a JSON string, such as {"spark.executor.memory":"2g"}.
      shared_ptr<string> sparkSqlResourceConfigMap_ {};
      // The MaxCompute Spark version. Valid values: MAX_COMPUTE_23X, MAX_COMPUTE_245X, and MAX_COMPUTE_311X. For Apsara Stack, only MAX_COMPUTE_APSARA is supported. Display names such as Spark 2.3.0, Spark 2.4.5, and Spark 3.1.1 are also accepted.
      shared_ptr<string> sparkVersion_ {};
      // The task type. Valid values:
      // - 1: Hive_SQL.
      // - 101: Hive_SQL_23X.
      // - 111: HIVE_SQL_FUSION_INSIGHT_80X.
      // - 131: COMMON_HIVE_SQL.
      // - 2: HADOOP_MR.
      // - 5: MaxCompute_SQL.
      // - 6: MaxCompute_MR.
      // - 7: SPARK_SQL_ON_MAX_COMPUTE.
      // - 8: SPARK_JAR_ON_MAX_COMPUTE.
      // - 17: SPARK_SQL_ON_HIVE.
      // - 18: Spark_JAR_ON_HIVE.
      // - 10: Shell.
      // - 71: PAI_DESIGNER.
      // - 15: DataX.
      // - 16: Merge.
      // - 21: Python.
      // - 22: Python37x.
      // - 23: Perl.
      // - 24: Python311x.
      // - 25: OneService_SQL.
      // - 26: ONE_SERVICE_SQL_ADB_FOR_PG.
      // - 27: OneService_SQL_Hive11x.
      // - 29: OneService_SQL_Hive23x.
      // - 75: ONE_SERVICE_SQL_TDH_INCEPTOR.
      // - 91: ONE_SERVICE_SQL_HIVE_CDP.
      // - 92: ONE_SERVICE_SQL_HIVE_ASIA_INFO_DP_53X.
      // - 30: Dlink.
      // - 33: ONE_SERVICE_SQL_ADB_FOR_MYSQL.
      // - 31: Logical.
      // - 41: Flink_Streaming.
      // - 42: Flink_Batch.
      // - 51: ADB_FOR_PG.
      // - 100: DryRun.
      // - 902: CHECK.
      // - 999: VIRTUAL.
      // - 10000: INCEPTOR_SQL.
      // - 28: HOLOGRES_SQL.
      // - 76: ARGODB_SQL.
      // - 78: IMPALA_SQL.
      // - 79: STARROCKS_SQL.
      // - 80: SPARK_SQL.
      // - 81: GAUSS_SQL.
      // - 998: DATABASE_SQL.
      // - 997: EXTERNAL_TRIGGER.
      // 
      // This parameter is required.
      shared_ptr<int32_t> taskType_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateBatchTaskRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateBatchTaskRequest::CreateCommand) };
    inline CreateBatchTaskRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateBatchTaskRequest::CreateCommand) };
    inline CreateBatchTaskRequest& setCreateCommand(const CreateBatchTaskRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateBatchTaskRequest& setCreateCommand(CreateBatchTaskRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateBatchTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CreateBatchTaskRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The create command.
    // 
    // This parameter is required.
    shared_ptr<CreateBatchTaskRequest::CreateCommand> createCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
