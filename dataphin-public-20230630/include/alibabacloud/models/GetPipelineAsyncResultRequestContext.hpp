// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTREQUESTCONTEXT_HPP_
#define ALIBABACLOUD_MODELS_GETPIPELINEASYNCRESULTREQUESTCONTEXT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetPipelineAsyncResultRequestContext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPipelineAsyncResultRequestContext& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPipelineAsyncResultRequestContext& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    GetPipelineAsyncResultRequestContext() = default ;
    GetPipelineAsyncResultRequestContext(const GetPipelineAsyncResultRequestContext &) = default ;
    GetPipelineAsyncResultRequestContext(GetPipelineAsyncResultRequestContext &&) = default ;
    GetPipelineAsyncResultRequestContext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPipelineAsyncResultRequestContext() = default ;
    GetPipelineAsyncResultRequestContext& operator=(const GetPipelineAsyncResultRequestContext &) = default ;
    GetPipelineAsyncResultRequestContext& operator=(GetPipelineAsyncResultRequestContext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && return this->projectId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetPipelineAsyncResultRequestContext& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetPipelineAsyncResultRequestContext& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
