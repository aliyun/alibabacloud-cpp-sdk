// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPIPELINEASYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPIPELINEASYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class SubmitPipelineAsyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitPipelineAsyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitPipelineAsyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
    };
    SubmitPipelineAsyncRequest() = default ;
    SubmitPipelineAsyncRequest(const SubmitPipelineAsyncRequest &) = default ;
    SubmitPipelineAsyncRequest(SubmitPipelineAsyncRequest &&) = default ;
    SubmitPipelineAsyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitPipelineAsyncRequest() = default ;
    SubmitPipelineAsyncRequest& operator=(const SubmitPipelineAsyncRequest &) = default ;
    SubmitPipelineAsyncRequest& operator=(SubmitPipelineAsyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class QueryId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const QueryId& obj) { 
        DARABONBA_PTR_TO_JSON(FileId, fileId_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      };
      friend void from_json(const Darabonba::Json& j, QueryId& obj) { 
        DARABONBA_PTR_FROM_JSON(FileId, fileId_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      };
      QueryId() = default ;
      QueryId(const QueryId &) = default ;
      QueryId(QueryId &&) = default ;
      QueryId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~QueryId() = default ;
      QueryId& operator=(const QueryId &) = default ;
      QueryId& operator=(QueryId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->fileId_ == nullptr
        && this->nodeId_ == nullptr && this->pipelineId_ == nullptr; };
      // fileId Field Functions 
      bool hasFileId() const { return this->fileId_ != nullptr;};
      void deleteFileId() { this->fileId_ = nullptr;};
      inline int64_t getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, 0L) };
      inline QueryId& setFileId(int64_t fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline QueryId& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline int64_t getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, 0L) };
      inline QueryId& setPipelineId(int64_t pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    protected:
      // The ID of the integration task file. You can specify any one of pipelineId, fileId, or nodeId.
      shared_ptr<int64_t> fileId_ {};
      // The ID of the scheduling node for the integration task. You can specify any one of pipelineId, fileId, or nodeId.
      shared_ptr<string> nodeId_ {};
      // The primary key of the integration pipeline. You can specify any one of pipelineId, fileId, or nodeId.
      shared_ptr<int64_t> pipelineId_ {};
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
      // The current operation environment. Valid values: DEV: development environment. PROD: production environment.
      // 
      // This parameter is required.
      shared_ptr<string> env_ {};
      // The ID of the project to which the integration pipeline task belongs.
      // 
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->queryId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const SubmitPipelineAsyncRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, SubmitPipelineAsyncRequest::Context) };
    inline SubmitPipelineAsyncRequest::Context getContext() { DARABONBA_PTR_GET(context_, SubmitPipelineAsyncRequest::Context) };
    inline SubmitPipelineAsyncRequest& setContext(const SubmitPipelineAsyncRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline SubmitPipelineAsyncRequest& setContext(SubmitPipelineAsyncRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline SubmitPipelineAsyncRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline SubmitPipelineAsyncRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline const SubmitPipelineAsyncRequest::QueryId & getQueryId() const { DARABONBA_PTR_GET_CONST(queryId_, SubmitPipelineAsyncRequest::QueryId) };
    inline SubmitPipelineAsyncRequest::QueryId getQueryId() { DARABONBA_PTR_GET(queryId_, SubmitPipelineAsyncRequest::QueryId) };
    inline SubmitPipelineAsyncRequest& setQueryId(const SubmitPipelineAsyncRequest::QueryId & queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };
    inline SubmitPipelineAsyncRequest& setQueryId(SubmitPipelineAsyncRequest::QueryId && queryId) { DARABONBA_PTR_SET_RVALUE(queryId_, queryId) };


  protected:
    // The request context information.
    // 
    // This parameter is required.
    shared_ptr<SubmitPipelineAsyncRequest::Context> context_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The operator user ID.
    shared_ptr<string> opUserId_ {};
    // The ID used to query the pipeline task.
    // 
    // This parameter is required.
    shared_ptr<SubmitPipelineAsyncRequest::QueryId> queryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
