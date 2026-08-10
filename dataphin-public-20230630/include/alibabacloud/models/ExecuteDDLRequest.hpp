// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEDDLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEDDLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteDDLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteDDLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(DDLCommand, DDLCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteDDLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(DDLCommand, DDLCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ExecuteDDLRequest() = default ;
    ExecuteDDLRequest(const ExecuteDDLRequest &) = default ;
    ExecuteDDLRequest(ExecuteDDLRequest &&) = default ;
    ExecuteDDLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteDDLRequest() = default ;
    ExecuteDDLRequest& operator=(const ExecuteDDLRequest &) = default ;
    ExecuteDDLRequest& operator=(ExecuteDDLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DDLCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DDLCommand& obj) { 
        DARABONBA_PTR_TO_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_TO_JSON(Ddl, ddl_);
        DARABONBA_PTR_TO_JSON(DropTable, dropTable_);
      };
      friend void from_json(const Darabonba::Json& j, DDLCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(DatasourceId, datasourceId_);
        DARABONBA_PTR_FROM_JSON(Ddl, ddl_);
        DARABONBA_PTR_FROM_JSON(DropTable, dropTable_);
      };
      DDLCommand() = default ;
      DDLCommand(const DDLCommand &) = default ;
      DDLCommand(DDLCommand &&) = default ;
      DDLCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DDLCommand() = default ;
      DDLCommand& operator=(const DDLCommand &) = default ;
      DDLCommand& operator=(DDLCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DatasourceId : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DatasourceId& obj) { 
          DARABONBA_PTR_TO_JSON(Catalog, catalog_);
          DARABONBA_PTR_TO_JSON(DsCategory, dsCategory_);
          DARABONBA_PTR_TO_JSON(DsId, dsId_);
          DARABONBA_PTR_TO_JSON(Env, env_);
          DARABONBA_PTR_TO_JSON(OneCatalogType, oneCatalogType_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, DatasourceId& obj) { 
          DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
          DARABONBA_PTR_FROM_JSON(DsCategory, dsCategory_);
          DARABONBA_PTR_FROM_JSON(DsId, dsId_);
          DARABONBA_PTR_FROM_JSON(Env, env_);
          DARABONBA_PTR_FROM_JSON(OneCatalogType, oneCatalogType_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        DatasourceId() = default ;
        DatasourceId(const DatasourceId &) = default ;
        DatasourceId(DatasourceId &&) = default ;
        DatasourceId(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DatasourceId() = default ;
        DatasourceId& operator=(const DatasourceId &) = default ;
        DatasourceId& operator=(DatasourceId &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->catalog_ == nullptr
        && this->dsCategory_ == nullptr && this->dsId_ == nullptr && this->env_ == nullptr && this->oneCatalogType_ == nullptr && this->projectId_ == nullptr
        && this->version_ == nullptr; };
        // catalog Field Functions 
        bool hasCatalog() const { return this->catalog_ != nullptr;};
        void deleteCatalog() { this->catalog_ = nullptr;};
        inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
        inline DatasourceId& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


        // dsCategory Field Functions 
        bool hasDsCategory() const { return this->dsCategory_ != nullptr;};
        void deleteDsCategory() { this->dsCategory_ = nullptr;};
        inline string getDsCategory() const { DARABONBA_PTR_GET_DEFAULT(dsCategory_, "") };
        inline DatasourceId& setDsCategory(string dsCategory) { DARABONBA_PTR_SET_VALUE(dsCategory_, dsCategory) };


        // dsId Field Functions 
        bool hasDsId() const { return this->dsId_ != nullptr;};
        void deleteDsId() { this->dsId_ = nullptr;};
        inline string getDsId() const { DARABONBA_PTR_GET_DEFAULT(dsId_, "") };
        inline DatasourceId& setDsId(string dsId) { DARABONBA_PTR_SET_VALUE(dsId_, dsId) };


        // env Field Functions 
        bool hasEnv() const { return this->env_ != nullptr;};
        void deleteEnv() { this->env_ = nullptr;};
        inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
        inline DatasourceId& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


        // oneCatalogType Field Functions 
        bool hasOneCatalogType() const { return this->oneCatalogType_ != nullptr;};
        void deleteOneCatalogType() { this->oneCatalogType_ = nullptr;};
        inline string getOneCatalogType() const { DARABONBA_PTR_GET_DEFAULT(oneCatalogType_, "") };
        inline DatasourceId& setOneCatalogType(string oneCatalogType) { DARABONBA_PTR_SET_VALUE(oneCatalogType_, oneCatalogType) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline DatasourceId& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline DatasourceId& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The catalog of the data source or compute cluster. This parameter is required only in OneCatalog scenarios.
        shared_ptr<string> catalog_ {};
        // The data source category. Valid values:
        // 
        // - DATA_SOURCE: physical data source.
        // - PROJECT_COMPUTE_SOURCE: compute source bound to a project.
        // - ONE_CATALOG: compute source or data source in multi-engine mode (OneCatalog).
        // - DATA_SET: dataset.
        // 
        // This parameter is optional. The system automatically infers the category based on other fields if this parameter is not specified.
        shared_ptr<string> dsCategory_ {};
        // The ID of the data source, compute source, or dataset. This parameter is optional when DsCategory is set to PROJECT_COMPUTE_SOURCE.
        shared_ptr<string> dsId_ {};
        // The environment. Valid values:
        // 
        // - DEV: development environment.
        // - PROD: production environment.
        shared_ptr<string> env_ {};
        // The catalog type when DsCategory is set to ONE_CATALOG. Valid values:
        // 
        // - COMPUTE_CLUSTER: compute cluster.
        // - DATA_SOURCE: physical data source.
        shared_ptr<string> oneCatalogType_ {};
        // The ID of the project bound to the compute source. This parameter is required only when DsCategory is set to PROJECT_COMPUTE_SOURCE.
        shared_ptr<int64_t> projectId_ {};
        // The dataset version. This parameter is required only when DsCategory is set to DATA_SET.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->datasourceId_ == nullptr
        && this->ddl_ == nullptr && this->dropTable_ == nullptr; };
      // datasourceId Field Functions 
      bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
      void deleteDatasourceId() { this->datasourceId_ = nullptr;};
      inline const DDLCommand::DatasourceId & getDatasourceId() const { DARABONBA_PTR_GET_CONST(datasourceId_, DDLCommand::DatasourceId) };
      inline DDLCommand::DatasourceId getDatasourceId() { DARABONBA_PTR_GET(datasourceId_, DDLCommand::DatasourceId) };
      inline DDLCommand& setDatasourceId(const DDLCommand::DatasourceId & datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };
      inline DDLCommand& setDatasourceId(DDLCommand::DatasourceId && datasourceId) { DARABONBA_PTR_SET_RVALUE(datasourceId_, datasourceId) };


      // ddl Field Functions 
      bool hasDdl() const { return this->ddl_ != nullptr;};
      void deleteDdl() { this->ddl_ = nullptr;};
      inline string getDdl() const { DARABONBA_PTR_GET_DEFAULT(ddl_, "") };
      inline DDLCommand& setDdl(string ddl) { DARABONBA_PTR_SET_VALUE(ddl_, ddl) };


      // dropTable Field Functions 
      bool hasDropTable() const { return this->dropTable_ != nullptr;};
      void deleteDropTable() { this->dropTable_ = nullptr;};
      inline bool getDropTable() const { DARABONBA_PTR_GET_DEFAULT(dropTable_, false) };
      inline DDLCommand& setDropTable(bool dropTable) { DARABONBA_PTR_SET_VALUE(dropTable_, dropTable) };


    protected:
      // The identifier of the data source, compute source, or dataset used for table creation.
      // 
      // This parameter is required.
      shared_ptr<DDLCommand::DatasourceId> datasourceId_ {};
      // The DDL statement for table creation.
      // 
      // This parameter is required.
      shared_ptr<string> ddl_ {};
      // Specifies whether to drop the table if it already exists.
      shared_ptr<bool> dropTable_ {};
    };

    class Context : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Context& obj) { 
        DARABONBA_PTR_TO_JSON(Env, env_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      };
      friend void from_json(const Darabonba::Json& j, Context& obj) { 
        DARABONBA_PTR_FROM_JSON(Env, env_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      };
      Context() = default ;
      Context(const Context &) = default ;
      Context(Context &&) = default ;
      Context(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Context() = default ;
      Context& operator=(const Context &) = default ;
      Context& operator=(Context &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->env_ == nullptr
        && this->projectId_ == nullptr; };
      // env Field Functions 
      bool hasEnv() const { return this->env_ != nullptr;};
      void deleteEnv() { this->env_ = nullptr;};
      inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
      inline Context& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Context& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    protected:
      // The current operating environment. Valid values:
      // 
      // - DEV: development environment.
      // - PROD: production environment.
      // 
      // This parameter is required.
      shared_ptr<string> env_ {};
      // The ID of the project to which the integration pipeline task belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->DDLCommand_ == nullptr && this->opTenantId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const ExecuteDDLRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, ExecuteDDLRequest::Context) };
    inline ExecuteDDLRequest::Context getContext() { DARABONBA_PTR_GET(context_, ExecuteDDLRequest::Context) };
    inline ExecuteDDLRequest& setContext(const ExecuteDDLRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline ExecuteDDLRequest& setContext(ExecuteDDLRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // DDLCommand Field Functions 
    bool hasDDLCommand() const { return this->DDLCommand_ != nullptr;};
    void deleteDDLCommand() { this->DDLCommand_ = nullptr;};
    inline const ExecuteDDLRequest::DDLCommand & getDDLCommand() const { DARABONBA_PTR_GET_CONST(DDLCommand_, ExecuteDDLRequest::DDLCommand) };
    inline ExecuteDDLRequest::DDLCommand getDDLCommand() { DARABONBA_PTR_GET(DDLCommand_, ExecuteDDLRequest::DDLCommand) };
    inline ExecuteDDLRequest& setDDLCommand(const ExecuteDDLRequest::DDLCommand & dDLCommand) { DARABONBA_PTR_SET_VALUE(DDLCommand_, dDLCommand) };
    inline ExecuteDDLRequest& setDDLCommand(ExecuteDDLRequest::DDLCommand && dDLCommand) { DARABONBA_PTR_SET_RVALUE(DDLCommand_, dDLCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ExecuteDDLRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // The request context information.
    // 
    // This parameter is required.
    shared_ptr<ExecuteDDLRequest::Context> context_ {};
    // The one-click table creation parameters.
    // 
    // This parameter is required.
    shared_ptr<ExecuteDDLRequest::DDLCommand> DDLCommand_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
