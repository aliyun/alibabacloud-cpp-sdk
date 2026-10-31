// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPIPELINESUBMITRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPIPELINESUBMITRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class QueryPipelineSubmitResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPipelineSubmitResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(SubmitId, submitId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPipelineSubmitResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(SubmitId, submitId_);
    };
    QueryPipelineSubmitResultRequest() = default ;
    QueryPipelineSubmitResultRequest(const QueryPipelineSubmitResultRequest &) = default ;
    QueryPipelineSubmitResultRequest(QueryPipelineSubmitResultRequest &&) = default ;
    QueryPipelineSubmitResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPipelineSubmitResultRequest() = default ;
    QueryPipelineSubmitResultRequest& operator=(const QueryPipelineSubmitResultRequest &) = default ;
    QueryPipelineSubmitResultRequest& operator=(QueryPipelineSubmitResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr && this->submitId_ == nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const QueryPipelineSubmitResultRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, QueryPipelineSubmitResultRequest::Context) };
    inline QueryPipelineSubmitResultRequest::Context getContext() { DARABONBA_PTR_GET(context_, QueryPipelineSubmitResultRequest::Context) };
    inline QueryPipelineSubmitResultRequest& setContext(const QueryPipelineSubmitResultRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline QueryPipelineSubmitResultRequest& setContext(QueryPipelineSubmitResultRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline QueryPipelineSubmitResultRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline QueryPipelineSubmitResultRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // submitId Field Functions 
    bool hasSubmitId() const { return this->submitId_ != nullptr;};
    void deleteSubmitId() { this->submitId_ = nullptr;};
    inline int64_t getSubmitId() const { DARABONBA_PTR_GET_DEFAULT(submitId_, 0L) };
    inline QueryPipelineSubmitResultRequest& setSubmitId(int64_t submitId) { DARABONBA_PTR_SET_VALUE(submitId_, submitId) };


  protected:
    // The request context information.
    // 
    // This parameter is required.
    shared_ptr<QueryPipelineSubmitResultRequest::Context> context_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator.
    shared_ptr<string> opUserId_ {};
    // The submit detail ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> submitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
