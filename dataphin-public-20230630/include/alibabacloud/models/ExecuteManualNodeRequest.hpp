// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMANUALNODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMANUALNODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExecuteManualNodeRequestExecuteCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteManualNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteManualNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(ExecuteCommand, executeCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteManualNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(ExecuteCommand, executeCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ExecuteManualNodeRequest() = default ;
    ExecuteManualNodeRequest(const ExecuteManualNodeRequest &) = default ;
    ExecuteManualNodeRequest(ExecuteManualNodeRequest &&) = default ;
    ExecuteManualNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteManualNodeRequest() = default ;
    ExecuteManualNodeRequest& operator=(const ExecuteManualNodeRequest &) = default ;
    ExecuteManualNodeRequest& operator=(ExecuteManualNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->executeCommand_ != nullptr && this->opTenantId_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline ExecuteManualNodeRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // executeCommand Field Functions 
    bool hasExecuteCommand() const { return this->executeCommand_ != nullptr;};
    void deleteExecuteCommand() { this->executeCommand_ = nullptr;};
    inline const ExecuteManualNodeRequestExecuteCommand & executeCommand() const { DARABONBA_PTR_GET_CONST(executeCommand_, ExecuteManualNodeRequestExecuteCommand) };
    inline ExecuteManualNodeRequestExecuteCommand executeCommand() { DARABONBA_PTR_GET(executeCommand_, ExecuteManualNodeRequestExecuteCommand) };
    inline ExecuteManualNodeRequest& setExecuteCommand(const ExecuteManualNodeRequestExecuteCommand & executeCommand) { DARABONBA_PTR_SET_VALUE(executeCommand_, executeCommand) };
    inline ExecuteManualNodeRequest& setExecuteCommand(ExecuteManualNodeRequestExecuteCommand && executeCommand) { DARABONBA_PTR_SET_RVALUE(executeCommand_, executeCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ExecuteManualNodeRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ExecuteManualNodeRequestExecuteCommand> executeCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
