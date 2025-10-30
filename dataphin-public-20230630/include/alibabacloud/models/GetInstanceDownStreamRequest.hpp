// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceDownStreamRequestInstanceGet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetInstanceDownStreamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDownStreamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(InstanceGet, instanceGet_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDownStreamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(InstanceGet, instanceGet_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
    };
    GetInstanceDownStreamRequest() = default ;
    GetInstanceDownStreamRequest(const GetInstanceDownStreamRequest &) = default ;
    GetInstanceDownStreamRequest(GetInstanceDownStreamRequest &&) = default ;
    GetInstanceDownStreamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDownStreamRequest() = default ;
    GetInstanceDownStreamRequest& operator=(const GetInstanceDownStreamRequest &) = default ;
    GetInstanceDownStreamRequest& operator=(GetInstanceDownStreamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downStreamDepth_ == nullptr
        && return this->env_ == nullptr && return this->instanceGet_ == nullptr && return this->opTenantId_ == nullptr && return this->runStatus_ == nullptr; };
    // downStreamDepth Field Functions 
    bool hasDownStreamDepth() const { return this->downStreamDepth_ != nullptr;};
    void deleteDownStreamDepth() { this->downStreamDepth_ = nullptr;};
    inline int32_t downStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(downStreamDepth_, 0) };
    inline GetInstanceDownStreamRequest& setDownStreamDepth(int32_t downStreamDepth) { DARABONBA_PTR_SET_VALUE(downStreamDepth_, downStreamDepth) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetInstanceDownStreamRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // instanceGet Field Functions 
    bool hasInstanceGet() const { return this->instanceGet_ != nullptr;};
    void deleteInstanceGet() { this->instanceGet_ = nullptr;};
    inline const GetInstanceDownStreamRequestInstanceGet & instanceGet() const { DARABONBA_PTR_GET_CONST(instanceGet_, GetInstanceDownStreamRequestInstanceGet) };
    inline GetInstanceDownStreamRequestInstanceGet instanceGet() { DARABONBA_PTR_GET(instanceGet_, GetInstanceDownStreamRequestInstanceGet) };
    inline GetInstanceDownStreamRequest& setInstanceGet(const GetInstanceDownStreamRequestInstanceGet & instanceGet) { DARABONBA_PTR_SET_VALUE(instanceGet_, instanceGet) };
    inline GetInstanceDownStreamRequest& setInstanceGet(GetInstanceDownStreamRequestInstanceGet && instanceGet) { DARABONBA_PTR_SET_RVALUE(instanceGet_, instanceGet) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetInstanceDownStreamRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // runStatus Field Functions 
    bool hasRunStatus() const { return this->runStatus_ != nullptr;};
    void deleteRunStatus() { this->runStatus_ = nullptr;};
    inline string runStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
    inline GetInstanceDownStreamRequest& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


  protected:
    // This parameter is required.
    std::shared_ptr<int32_t> downStreamDepth_ = nullptr;
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetInstanceDownStreamRequestInstanceGet> instanceGet_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    std::shared_ptr<string> runStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
