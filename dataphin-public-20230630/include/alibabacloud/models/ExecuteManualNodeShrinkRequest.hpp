// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMANUALNODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMANUALNODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteManualNodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteManualNodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ExecuteCommand, executeCommandShrink_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteManualNodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ExecuteCommand, executeCommandShrink_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ExecuteManualNodeShrinkRequest() = default ;
    ExecuteManualNodeShrinkRequest(const ExecuteManualNodeShrinkRequest &) = default ;
    ExecuteManualNodeShrinkRequest(ExecuteManualNodeShrinkRequest &&) = default ;
    ExecuteManualNodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteManualNodeShrinkRequest() = default ;
    ExecuteManualNodeShrinkRequest& operator=(const ExecuteManualNodeShrinkRequest &) = default ;
    ExecuteManualNodeShrinkRequest& operator=(ExecuteManualNodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && return this->executeCommandShrink_ == nullptr && return this->opTenantId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ExecuteManualNodeShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // executeCommandShrink Field Functions 
    bool hasExecuteCommandShrink() const { return this->executeCommandShrink_ != nullptr;};
    void deleteExecuteCommandShrink() { this->executeCommandShrink_ = nullptr;};
    inline string executeCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(executeCommandShrink_, "") };
    inline ExecuteManualNodeShrinkRequest& setExecuteCommandShrink(string executeCommandShrink) { DARABONBA_PTR_SET_VALUE(executeCommandShrink_, executeCommandShrink) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ExecuteManualNodeShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> executeCommandShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
