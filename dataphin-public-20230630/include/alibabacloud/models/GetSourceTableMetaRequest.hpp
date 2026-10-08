// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSOURCETABLEMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSOURCETABLEMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSourceTableMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSourceTableMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, GetSourceTableMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    GetSourceTableMetaRequest() = default ;
    GetSourceTableMetaRequest(const GetSourceTableMetaRequest &) = default ;
    GetSourceTableMetaRequest(GetSourceTableMetaRequest &&) = default ;
    GetSourceTableMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSourceTableMetaRequest() = default ;
    GetSourceTableMetaRequest& operator=(const GetSourceTableMetaRequest &) = default ;
    GetSourceTableMetaRequest& operator=(GetSourceTableMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Query : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Query& obj) { 
        DARABONBA_PTR_TO_JSON(Catalog, catalog_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(QueryMode, queryMode_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Query& obj) { 
        DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(QueryMode, queryMode_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      Query() = default ;
      Query(const Query &) = default ;
      Query(Query &&) = default ;
      Query(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Query() = default ;
      Query& operator=(const Query &) = default ;
      Query& operator=(Query &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->catalog_ == nullptr
        && this->id_ == nullptr && this->queryMode_ == nullptr && this->schemaName_ == nullptr && this->tableName_ == nullptr; };
      // catalog Field Functions 
      bool hasCatalog() const { return this->catalog_ != nullptr;};
      void deleteCatalog() { this->catalog_ = nullptr;};
      inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
      inline Query& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Query& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // queryMode Field Functions 
      bool hasQueryMode() const { return this->queryMode_ != nullptr;};
      void deleteQueryMode() { this->queryMode_ = nullptr;};
      inline string getQueryMode() const { DARABONBA_PTR_GET_DEFAULT(queryMode_, "") };
      inline Query& setQueryMode(string queryMode) { DARABONBA_PTR_SET_VALUE(queryMode_, queryMode) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Query& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Query& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      shared_ptr<string> catalog_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> queryMode_ {};
      shared_ptr<string> schemaName_ {};
      shared_ptr<string> tableName_ {};
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
      shared_ptr<string> env_ {};
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->query_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const GetSourceTableMetaRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, GetSourceTableMetaRequest::Context) };
    inline GetSourceTableMetaRequest::Context getContext() { DARABONBA_PTR_GET(context_, GetSourceTableMetaRequest::Context) };
    inline GetSourceTableMetaRequest& setContext(const GetSourceTableMetaRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline GetSourceTableMetaRequest& setContext(GetSourceTableMetaRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetSourceTableMetaRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetSourceTableMetaRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline const GetSourceTableMetaRequest::Query & getQuery() const { DARABONBA_PTR_GET_CONST(query_, GetSourceTableMetaRequest::Query) };
    inline GetSourceTableMetaRequest::Query getQuery() { DARABONBA_PTR_GET(query_, GetSourceTableMetaRequest::Query) };
    inline GetSourceTableMetaRequest& setQuery(const GetSourceTableMetaRequest::Query & query) { DARABONBA_PTR_SET_VALUE(query_, query) };
    inline GetSourceTableMetaRequest& setQuery(GetSourceTableMetaRequest::Query && query) { DARABONBA_PTR_SET_RVALUE(query_, query) };


  protected:
    // This parameter is required.
    shared_ptr<GetSourceTableMetaRequest::Context> context_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> opUserId_ {};
    // This parameter is required.
    shared_ptr<GetSourceTableMetaRequest::Query> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
