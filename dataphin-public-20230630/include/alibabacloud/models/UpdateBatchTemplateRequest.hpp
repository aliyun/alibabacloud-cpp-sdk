// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBATCHTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBATCHTEMPLATEREQUEST_HPP_
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
  class UpdateBatchTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBatchTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(UpdateCommand, updateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBatchTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(UpdateCommand, updateCommand_);
    };
    UpdateBatchTemplateRequest() = default ;
    UpdateBatchTemplateRequest(const UpdateBatchTemplateRequest &) = default ;
    UpdateBatchTemplateRequest(UpdateBatchTemplateRequest &&) = default ;
    UpdateBatchTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBatchTemplateRequest() = default ;
    UpdateBatchTemplateRequest& operator=(const UpdateBatchTemplateRequest &) = default ;
    UpdateBatchTemplateRequest& operator=(UpdateBatchTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpdateCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpdateCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DataSourceConfig, dataSourceConfig_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DevResourceGroupId, devResourceGroupId_);
        DARABONBA_PTR_TO_JSON(Directory, directory_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Params, params_);
        DARABONBA_PTR_TO_JSON(PythonModuleIds, pythonModuleIds_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ShareRuntimeResource, shareRuntimeResource_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, UpdateCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DataSourceConfig, dataSourceConfig_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DevResourceGroupId, devResourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Directory, directory_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Params, params_);
        DARABONBA_PTR_FROM_JSON(PythonModuleIds, pythonModuleIds_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ShareRuntimeResource, shareRuntimeResource_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      UpdateCommand() = default ;
      UpdateCommand(const UpdateCommand &) = default ;
      UpdateCommand(UpdateCommand &&) = default ;
      UpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpdateCommand() = default ;
      UpdateCommand& operator=(const UpdateCommand &) = default ;
      UpdateCommand& operator=(UpdateCommand &&) = default ;
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
        && this->dataSourceConfig_ == nullptr && this->description_ == nullptr && this->devResourceGroupId_ == nullptr && this->directory_ == nullptr && this->name_ == nullptr
        && this->params_ == nullptr && this->pythonModuleIds_ == nullptr && this->resourceGroupId_ == nullptr && this->shareRuntimeResource_ == nullptr && this->templateId_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline UpdateCommand& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // dataSourceConfig Field Functions 
      bool hasDataSourceConfig() const { return this->dataSourceConfig_ != nullptr;};
      void deleteDataSourceConfig() { this->dataSourceConfig_ = nullptr;};
      inline const UpdateCommand::DataSourceConfig & getDataSourceConfig() const { DARABONBA_PTR_GET_CONST(dataSourceConfig_, UpdateCommand::DataSourceConfig) };
      inline UpdateCommand::DataSourceConfig getDataSourceConfig() { DARABONBA_PTR_GET(dataSourceConfig_, UpdateCommand::DataSourceConfig) };
      inline UpdateCommand& setDataSourceConfig(const UpdateCommand::DataSourceConfig & dataSourceConfig) { DARABONBA_PTR_SET_VALUE(dataSourceConfig_, dataSourceConfig) };
      inline UpdateCommand& setDataSourceConfig(UpdateCommand::DataSourceConfig && dataSourceConfig) { DARABONBA_PTR_SET_RVALUE(dataSourceConfig_, dataSourceConfig) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // devResourceGroupId Field Functions 
      bool hasDevResourceGroupId() const { return this->devResourceGroupId_ != nullptr;};
      void deleteDevResourceGroupId() { this->devResourceGroupId_ = nullptr;};
      inline string getDevResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(devResourceGroupId_, "") };
      inline UpdateCommand& setDevResourceGroupId(string devResourceGroupId) { DARABONBA_PTR_SET_VALUE(devResourceGroupId_, devResourceGroupId) };


      // directory Field Functions 
      bool hasDirectory() const { return this->directory_ != nullptr;};
      void deleteDirectory() { this->directory_ = nullptr;};
      inline string getDirectory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
      inline UpdateCommand& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // params Field Functions 
      bool hasParams() const { return this->params_ != nullptr;};
      void deleteParams() { this->params_ = nullptr;};
      inline const vector<UpdateCommand::Params> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<UpdateCommand::Params>) };
      inline vector<UpdateCommand::Params> getParams() { DARABONBA_PTR_GET(params_, vector<UpdateCommand::Params>) };
      inline UpdateCommand& setParams(const vector<UpdateCommand::Params> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
      inline UpdateCommand& setParams(vector<UpdateCommand::Params> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


      // pythonModuleIds Field Functions 
      bool hasPythonModuleIds() const { return this->pythonModuleIds_ != nullptr;};
      void deletePythonModuleIds() { this->pythonModuleIds_ = nullptr;};
      inline const vector<int64_t> & getPythonModuleIds() const { DARABONBA_PTR_GET_CONST(pythonModuleIds_, vector<int64_t>) };
      inline vector<int64_t> getPythonModuleIds() { DARABONBA_PTR_GET(pythonModuleIds_, vector<int64_t>) };
      inline UpdateCommand& setPythonModuleIds(const vector<int64_t> & pythonModuleIds) { DARABONBA_PTR_SET_VALUE(pythonModuleIds_, pythonModuleIds) };
      inline UpdateCommand& setPythonModuleIds(vector<int64_t> && pythonModuleIds) { DARABONBA_PTR_SET_RVALUE(pythonModuleIds_, pythonModuleIds) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline UpdateCommand& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // shareRuntimeResource Field Functions 
      bool hasShareRuntimeResource() const { return this->shareRuntimeResource_ != nullptr;};
      void deleteShareRuntimeResource() { this->shareRuntimeResource_ = nullptr;};
      inline bool getShareRuntimeResource() const { DARABONBA_PTR_GET_DEFAULT(shareRuntimeResource_, false) };
      inline UpdateCommand& setShareRuntimeResource(bool shareRuntimeResource) { DARABONBA_PTR_SET_VALUE(shareRuntimeResource_, shareRuntimeResource) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline UpdateCommand& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The template content.
      // 
      // This parameter is required.
      shared_ptr<string> content_ {};
      // The datasource config for database SQL templates. This parameter takes effect only for database SQL templates.
      shared_ptr<UpdateCommand::DataSourceConfig> dataSourceConfig_ {};
      // The description of the template.
      shared_ptr<string> description_ {};
      // The ID of the resource group in the development environment. By default, the default resource group of the project is used.
      shared_ptr<string> devResourceGroupId_ {};
      // The folder of the template.
      // 
      // This parameter is required.
      shared_ptr<string> directory_ {};
      // The name of the template.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The list of template parameters.
      shared_ptr<vector<UpdateCommand::Params>> params_ {};
      // The list of IDs of dependent third-party Python packages.
      shared_ptr<vector<int64_t>> pythonModuleIds_ {};
      // The ID of the resource group in the production environment. By default, the default resource group of the project is used.
      shared_ptr<string> resourceGroupId_ {};
      // Specifies whether to share runtime resources.
      shared_ptr<bool> shareRuntimeResource_ {};
      // The ID of the template.
      // 
      // This parameter is required.
      shared_ptr<int64_t> templateId_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->opUserId_ == nullptr && this->projectId_ == nullptr && this->updateCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpdateBatchTemplateRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline UpdateBatchTemplateRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateBatchTemplateRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // updateCommand Field Functions 
    bool hasUpdateCommand() const { return this->updateCommand_ != nullptr;};
    void deleteUpdateCommand() { this->updateCommand_ = nullptr;};
    inline const UpdateBatchTemplateRequest::UpdateCommand & getUpdateCommand() const { DARABONBA_PTR_GET_CONST(updateCommand_, UpdateBatchTemplateRequest::UpdateCommand) };
    inline UpdateBatchTemplateRequest::UpdateCommand getUpdateCommand() { DARABONBA_PTR_GET(updateCommand_, UpdateBatchTemplateRequest::UpdateCommand) };
    inline UpdateBatchTemplateRequest& setUpdateCommand(const UpdateBatchTemplateRequest::UpdateCommand & updateCommand) { DARABONBA_PTR_SET_VALUE(updateCommand_, updateCommand) };
    inline UpdateBatchTemplateRequest& setUpdateCommand(UpdateBatchTemplateRequest::UpdateCommand && updateCommand) { DARABONBA_PTR_SET_RVALUE(updateCommand_, updateCommand) };


  protected:
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
    // The template update command.
    // 
    // This parameter is required.
    shared_ptr<UpdateBatchTemplateRequest::UpdateCommand> updateCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
