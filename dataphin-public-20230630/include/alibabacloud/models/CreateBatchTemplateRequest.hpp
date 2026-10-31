// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBATCHTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBATCHTEMPLATEREQUEST_HPP_
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
  class CreateBatchTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBatchTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBatchTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    CreateBatchTemplateRequest() = default ;
    CreateBatchTemplateRequest(const CreateBatchTemplateRequest &) = default ;
    CreateBatchTemplateRequest(CreateBatchTemplateRequest &&) = default ;
    CreateBatchTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBatchTemplateRequest() = default ;
    CreateBatchTemplateRequest& operator=(const CreateBatchTemplateRequest &) = default ;
    CreateBatchTemplateRequest& operator=(CreateBatchTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DataSourceConfig, dataSourceConfig_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DevResourceGroupId, devResourceGroupId_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Engine, engine_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(PythonModuleIds, pythonModuleIds_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShareRuntimeResource, shareRuntimeResource_);
      };
      friend void from_json(const Darabonba::Json& j, CreateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DataSourceConfig, dataSourceConfig_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DevResourceGroupId, devResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Engine, engine_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(PythonModuleIds, pythonModuleIds_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShareRuntimeResource, shareRuntimeResource_);
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
      class Params : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Params& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EncryptEnabled, encryptEnabled_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Params& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EncryptEnabled, encryptEnabled_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Params() = default ;
        Params(const Params &) = default ;
        Params(Params &&) = default ;
        Params(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Params() = default ;
        Params& operator=(const Params &) = default ;
        Params& operator=(Params &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->encryptEnabled_ == nullptr && this->key_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Params& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // encryptEnabled Field Functions 
        bool hasEncryptEnabled() const { return this->encryptEnabled_ != nullptr;};
        void deleteEncryptEnabled() { this->encryptEnabled_ = nullptr;};
        inline bool getEncryptEnabled() const { DARABONBA_PTR_GET_DEFAULT(encryptEnabled_, false) };
        inline Params& setEncryptEnabled(bool encryptEnabled) { DARABONBA_PTR_SET_VALUE(encryptEnabled_, encryptEnabled) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Params& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Params& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The parameter description.
        shared_ptr<string> description_ {};
        // Specifies whether encryption is enabled for the parameter.
        shared_ptr<bool> encryptEnabled_ {};
        // The key of the parameter.
        // 
        // This parameter is required.
        shared_ptr<string> key_ {};
        // The default value of the parameter.
        shared_ptr<string> value_ {};
      };

      class DataSourceConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSourceConfig& obj) { 
          DARABONBA_PTR_TO_JSON(Catalog, catalog_);
          DARABONBA_PTR_TO_JSON(DsId, dsId_);
          DARABONBA_PTR_TO_JSON(Schema, schema_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, DataSourceConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
          DARABONBA_PTR_FROM_JSON(DsId, dsId_);
          DARABONBA_PTR_FROM_JSON(Schema, schema_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        DataSourceConfig() = default ;
        DataSourceConfig(const DataSourceConfig &) = default ;
        DataSourceConfig(DataSourceConfig &&) = default ;
        DataSourceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSourceConfig() = default ;
        DataSourceConfig& operator=(const DataSourceConfig &) = default ;
        DataSourceConfig& operator=(DataSourceConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->catalog_ == nullptr
        && this->dsId_ == nullptr && this->schema_ == nullptr && this->type_ == nullptr; };
        // catalog Field Functions 
        bool hasCatalog() const { return this->catalog_ != nullptr;};
        void deleteCatalog() { this->catalog_ = nullptr;};
        inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
        inline DataSourceConfig& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


        // dsId Field Functions 
        bool hasDsId() const { return this->dsId_ != nullptr;};
        void deleteDsId() { this->dsId_ = nullptr;};
        inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
        inline DataSourceConfig& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


        // schema Field Functions 
        bool hasSchema() const { return this->schema_ != nullptr;};
        void deleteSchema() { this->schema_ = nullptr;};
        inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
        inline DataSourceConfig& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DataSourceConfig& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The catalog of the data source for the database SQL template.
        shared_ptr<string> catalog_ {};
        // The ID of the data source for the database SQL template.
        // 
        // This parameter is required.
        shared_ptr<string> dsId_ {};
        // The schema of the data source for the database SQL template.
        shared_ptr<string> schema_ {};
        // The type of the data source for the database SQL template. Valid values: MYSQL, ORACLE, ADB_FOR_PG, OUSHUDB, PRESTO, POSTGRE_SQL, STARROCKS, CLICKHOUSE, ANALYTICDB, ADB_FOR_MYSQL_V3, GAUSSDB, SELECTDB, DORIS, SQL_SERVER, HOLOGRES, OPENGAUSS, DAMENG, OCEANBASE, TRINO, POLARDB_X2, LINDORM, EMR_SPARK_SERVERLESS, TDSQL_FOR_PG, TDSQL_FOR_MYSQL, GBASE_8A, and TDENGINE.
        // 
        // This parameter is required.
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->dataSourceConfig_ == nullptr && this->description_ == nullptr && this->devResourceGroupId_ == nullptr && this->directory_ == nullptr && this->engine_ == nullptr
        && this->name_ == nullptr && this->operatorType_ == nullptr && this->params_ == nullptr && this->pythonModuleIds_ == nullptr && this->resourceGroupId_ == nullptr
        && this->shareRuntimeResource_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline CreateCommand& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // dataSourceConfig Field Functions 
      bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
      void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
      inline const CreateCommand::DataSourceConfig & getDataSourceConfig() const { DARABONBA_PTR_GET_CONST(dataSourceConfig_, CreateCommand::DataSourceConfig) };
      inline CreateCommand::DataSourceConfig getDataSourceConfig() { DARABONBA_PTR_GET(dataSourceConfig_, CreateCommand::DataSourceConfig) };
      inline CreateCommand& setDataSourceConfig(const CreateCommand::DataSourceConfig & dataSourceConfig) { DARABONBA_PTR_SET_VALUE(dataSourceConfig_, dataSourceConfig) };
      inline CreateCommand& setDataSourceConfig(CreateCommand::DataSourceConfig && dataSourceConfig) { DARABONBA_PTR_SET_RVALUE(dataSourceConfig_, dataSourceConfig) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // devResourceGroupId Field Functions 
      bool hasDevResourceGroupId() const { return this->devResourceGroupId_ != nullptr;};
      void deleteDevResourceGroupId() { this->devResourceGroupId_ = nullptr;};
      inline string getDevResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(devResourceGroupId_, "") };
      inline CreateCommand& setDevResourceGroupId(string devResourceGroupId) { DARABONBA_PTR_SET_VALUE(devResourceGroupId_, devResourceGroupId) };


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


      // operatorType Field Functions 
      bool hasOperatorType() const { return this->operatorType_ != nullptr;};
      void deleteOperatorType() { this->operatorType_ = nullptr;};
      inline int32_t getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, 0) };
      inline CreateCommand& setOperatorType(int32_t operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline const vector<CreateCommand::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<CreateCommand::Params>) };
      inline vector<CreateCommand::Params> getParams() { DARABONBA_PTR_GET(params_, vector<CreateCommand::Params>) };
      inline CreateCommand& setParams(const vector<CreateCommand::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
      inline CreateCommand& setParams(vector<CreateCommand::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


      // pythonModuleIds Field Functions 
      bool hasPythonModuleIds() const { return this->pythonModuleIds_ != nullptr;};
      void deletePythonModuleIds() { this->pythonModuleIds_ = nullptr;};
      inline const vector<int64_t> & getPythonModuleIds() const { DARABONBA_PTR_GET_CONST(pythonModuleIds_, vector<int64_t>) };
      inline vector<int64_t> getPythonModuleIds() { DARABONBA_PTR_GET(pythonModuleIds_, vector<int64_t>) };
      inline CreateCommand& setPythonModuleIds(const vector<int64_t> & pythonModuleIds) { DARABONBA_PTR_SET_VALUE(pythonModuleIds_, pythonModuleIds) };
      inline CreateCommand& setPythonModuleIds(vector<int64_t> && pythonModuleIds) { DARABONBA_PTR_SET_RVALUE(pythonModuleIds_, pythonModuleIds) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline CreateCommand& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareRuntimeResource Field Functions 
      bool hasShareRuntimeResource() const { return this->shareRuntimeResource_ != nullptr;};
      void deleteShareRuntimeResource() { this->shareRuntimeResource_ = nullptr;};
      inline bool getShareRuntimeResource() const { DARABONBA_PTR_GET_DEFAULT(shareRuntimeResource_, false) };
      inline CreateCommand& setShareRuntimeResource(bool shareRuntimeResource) { DARABONBA_PTR_SET_VALUE(shareRuntimeResource_, shareRuntimeResource) };


    protected:
      // The content of the template.
      // 
      // This parameter is required.
      shared_ptr<string> content_ {};
      // The datasource config for database SQL templates, which takes effect only for database SQL templates.
      shared_ptr<CreateCommand::DataSourceConfig> dataSourceConfig_ {};
      // The description of the template.
      shared_ptr<string> description_ {};
      // The ID of the resource group in the development environment. By default, the default resource group of the project is used.
      shared_ptr<string> devResourceGroupId_ {};
      // The directory of the template.
      // 
      // This parameter is required.
      shared_ptr<string> directory_ {};
      // The compute engine version. Valid values: PYTHON_2_7, PYTHON_3_7, and PYTHON_3_11.
      shared_ptr<string> engine_ {};
      // The name of the template.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The node type of the template. Valid values: 10: Shell, 21: Python, 998: Database SQL, 5: MaxCompute SQL, 6: MapReduce on MaxCompute, 8: Spark on MaxCompute, 28: Hologres SQL, 1: Hive SQL, 2: MapReduce on Yarn, 18: Spark on Yarn, 78: Impala SQL, 80: Spark SQL, 10000: Inceptor SQL, 51: AnalyticDB for PostgreSQL SQL, 81: GaussDB SQL, 82: Databricks SQL, 76: ArgoDB SQL, 79: StarRocks SQL, 202: SelectDB SQL, 201: Doris SQL, and 203: OushuDB SQL.
      // 
      // This parameter is required.
      shared_ptr<int32_t> operatorType_ {};
      // The list of template parameters.
      shared_ptr<vector<CreateCommand::Params>> params_ {};
      // The list of IDs of dependent third-party Python packages.
      shared_ptr<vector<int64_t>> pythonModuleIds_ {};
      // The ID of the resource group in the production environment. By default, the default resource group of the project is used.
      shared_ptr<string> resourceGroupId_ {};
      // Specifies whether to share runtime resources.
      shared_ptr<bool> shareRuntimeResource_ {};
    };

    virtual bool empty() const override { return this->createCommand_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->projectId_ == nullptr; };
    // createCommand Field Functions 
    bool hasCreateCommand() const { return this->createCommand_ != nullptr;};
    void deleteCreateCommand() { this->createCommand_ = nullptr;};
    inline const CreateBatchTemplateRequest::CreateCommand & getCreateCommand() const { DARABONBA_PTR_GET_CONST(createCommand_, CreateBatchTemplateRequest::CreateCommand) };
    inline CreateBatchTemplateRequest::CreateCommand getCreateCommand() { DARABONBA_PTR_GET(createCommand_, CreateBatchTemplateRequest::CreateCommand) };
    inline CreateBatchTemplateRequest& setCreateCommand(const CreateBatchTemplateRequest::CreateCommand & createCommand) { DARABONBA_PTR_SET_VALUE(createCommand_, createCommand) };
    inline CreateBatchTemplateRequest& setCreateCommand(CreateBatchTemplateRequest::CreateCommand && createCommand) { DARABONBA_PTR_SET_RVALUE(createCommand_, createCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateBatchTemplateRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CreateBatchTemplateRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateBatchTemplateRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The command to create a template.
    // 
    // This parameter is required.
    shared_ptr<CreateBatchTemplateRequest::CreateCommand> createCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The project ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
