// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDOWNSTREAMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetInstanceDownStreamShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDownStreamShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(InstanceGet, instanceGetShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(RunStatus, runStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDownStreamShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DownStreamDepth, downStreamDepth_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(InstanceGet, instanceGetShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(RunStatus, runStatus_);
    };
    GetInstanceDownStreamShrinkRequest() = default ;
    GetInstanceDownStreamShrinkRequest(const GetInstanceDownStreamShrinkRequest &) = default ;
    GetInstanceDownStreamShrinkRequest(GetInstanceDownStreamShrinkRequest &&) = default ;
    GetInstanceDownStreamShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDownStreamShrinkRequest() = default ;
    GetInstanceDownStreamShrinkRequest& operator=(const GetInstanceDownStreamShrinkRequest &) = default ;
    GetInstanceDownStreamShrinkRequest& operator=(GetInstanceDownStreamShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downStreamDepth_ == nullptr
        && this->env_ == nullptr && this->instanceGetShrink_ == nullptr && this->opTenantId_ == nullptr && this->runStatus_ == nullptr; };
    // downStreamDepth Field Functions 
    bool hasDownStreamDepth() const { return this->downStreamDepth_ != nullptr;};
    void deleteDownStreamDepth() { this->downStreamDepth_ = nullptr;};
    inline int32_t getDownStreamDepth() const { DARABONBA_PTR_GET_DEFAULT(downStreamDepth_, 0) };
    inline GetInstanceDownStreamShrinkRequest& setDownStreamDepth(int32_t downStreamDepth) { DARABONBA_PTR_SET_VALUE(downStreamDepth_, downStreamDepth) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetInstanceDownStreamShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // instanceGetShrink Field Functions 
    bool hasInstanceGetShrink() const { return this->instanceGetShrink_ != nullptr;};
    void deleteInstanceGetShrink() { this->instanceGetShrink_ = nullptr;};
    inline string getInstanceGetShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceGetShrink_, "") };
    inline GetInstanceDownStreamShrinkRequest& setInstanceGetShrink(string instanceGetShrink) { DARABONBA_PTR_SET_VALUE(instanceGetShrink_, instanceGetShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetInstanceDownStreamShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // runStatus Field Functions 
    bool hasRunStatus() const { return this->runStatus_ != nullptr;};
    void deleteRunStatus() { this->runStatus_ = nullptr;};
    inline string getRunStatus() const { DARABONBA_PTR_GET_DEFAULT(runStatus_, "") };
    inline GetInstanceDownStreamShrinkRequest& setRunStatus(string runStatus) { DARABONBA_PTR_SET_VALUE(runStatus_, runStatus) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> downStreamDepth_ {};
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<string> instanceGetShrink_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    shared_ptr<string> runStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
