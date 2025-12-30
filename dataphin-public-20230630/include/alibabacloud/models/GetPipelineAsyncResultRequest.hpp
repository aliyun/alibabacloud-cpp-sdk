// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineAsyncResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineAsyncResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AsyncId, asyncId_);
      DARABONBA_PTR_TO_JSON(Context, context_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineAsyncResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AsyncId, asyncId_);
      DARABONBA_PTR_FROM_JSON(Context, context_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetPipelineAsyncResultRequest() = default ;
    GetPipelineAsyncResultRequest(const GetPipelineAsyncResultRequest &) = default ;
    GetPipelineAsyncResultRequest(GetPipelineAsyncResultRequest &&) = default ;
    GetPipelineAsyncResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineAsyncResultRequest() = default ;
    GetPipelineAsyncResultRequest& operator=(const GetPipelineAsyncResultRequest &) = default ;
    GetPipelineAsyncResultRequest& operator=(GetPipelineAsyncResultRequest &&) = default ;
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
      // This parameter is required.
      shared_ptr<string> env_ {};
      // This parameter is required.
      shared_ptr<int64_t> projectId_ {};
    };

    virtual bool empty() const override { return this->asyncId_ == nullptr
        && this->context_ == nullptr && this->opTenantId_ == nullptr; };
    // asyncId Field Functions 
    bool hasAsyncId() const { return this->asyncId_ != nullptr;};
    void deleteAsyncId() { this->asyncId_ = nullptr;};
    inline int64_t getAsyncId() const { DARABONBA_PTR_GET_DEFAULT(asyncId_, 0L) };
    inline GetPipelineAsyncResultRequest& setAsyncId(int64_t asyncId) { DARABONBA_PTR_SET_VALUE(asyncId_, asyncId) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const GetPipelineAsyncResultRequest::Context & getContext() const { DARABONBA_PTR_GET_CONST(context_, GetPipelineAsyncResultRequest::Context) };
    inline GetPipelineAsyncResultRequest::Context getContext() { DARABONBA_PTR_GET(context_, GetPipelineAsyncResultRequest::Context) };
    inline GetPipelineAsyncResultRequest& setContext(const GetPipelineAsyncResultRequest::Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline GetPipelineAsyncResultRequest& setContext(GetPipelineAsyncResultRequest::Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetPipelineAsyncResultRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> asyncId_ {};
    // This parameter is required.
    shared_ptr<GetPipelineAsyncResultRequest::Context> context_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
