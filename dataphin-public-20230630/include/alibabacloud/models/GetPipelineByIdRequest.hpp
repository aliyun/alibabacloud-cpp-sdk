// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(QueryId, queryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(QueryId, queryId_);
    };
    GetPipelineByIdRequest() = default ;
    GetPipelineByIdRequest(const GetPipelineByIdRequest &) = default ;
    GetPipelineByIdRequest(GetPipelineByIdRequest &&) = default ;
    GetPipelineByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineByIdRequest() = default ;
    GetPipelineByIdRequest& operator=(const GetPipelineByIdRequest &) = default ;
    GetPipelineByIdRequest& operator=(GetPipelineByIdRequest &&) = default ;
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
      shared_ptr<int64_t> fileId_ {};
      shared_ptr<string> nodeId_ {};
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
      // This parameter is required.
      shared_ptr<string> env_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->context_ == nullptr
        && this->opTenantId_ == nullptr && this->queryId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const GetPipelineByIdRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, GetPipelineByIdRequest::Context) };
    inline GetPipelineByIdRequest::Context getContext() { DARABONBA_PTR_GET(context_, GetPipelineByIdRequest::Context) };
    inline GetPipelineByIdRequest& setContext(const GetPipelineByIdRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline GetPipelineByIdRequest& setContext(GetPipelineByIdRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetPipelineByIdRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // queryId Field Functions 
    bool hasQueryId() const { return this->queryId_ != nullptr;};
    void deleteQueryId() { this->queryId_ = nullptr;};
    inline const GetPipelineByIdRequest::QueryId & getQueryId() const { DARABONBA_PTR_GET_CONST(queryId_, GetPipelineByIdRequest::QueryId) };
    inline GetPipelineByIdRequest::QueryId getQueryId() { DARABONBA_PTR_GET(queryId_, GetPipelineByIdRequest::QueryId) };
    inline GetPipelineByIdRequest& setQueryId(const GetPipelineByIdRequest::QueryId & queryId) { DARABONBA_PTR_SET_VALUE(queryId_, queryId) };
    inline GetPipelineByIdRequest& setQueryId(GetPipelineByIdRequest::QueryId && queryId) { DARABONBA_PTR_SET_RVALUE(queryId_, queryId) };


  protected:
    // This parameter is required.
    shared_ptr<GetPipelineByIdRequest::Context> context_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<GetPipelineByIdRequest::QueryId> queryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
