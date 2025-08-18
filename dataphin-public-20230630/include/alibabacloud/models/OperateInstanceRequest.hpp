// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OperateInstanceRequestOperateCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OperateInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OperateCommand, operateCommand_);
    };
    friend void from_json(const Darabonba::Json& j, OperateInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OperateCommand, operateCommand_);
    };
    OperateInstanceRequest() = default ;
    OperateInstanceRequest(const OperateInstanceRequest &) = default ;
    OperateInstanceRequest(OperateInstanceRequest &&) = default ;
    OperateInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateInstanceRequest() = default ;
    OperateInstanceRequest& operator=(const OperateInstanceRequest &) = default ;
    OperateInstanceRequest& operator=(OperateInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->opTenantId_ != nullptr && this->operateCommand_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline OperateInstanceRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OperateInstanceRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // operateCommand Field Functions 
    bool hasOperateCommand() const { return this->operateCommand_ != nullptr;};
    void deleteOperateCommand() { this->operateCommand_ = nullptr;};
    inline const OperateInstanceRequestOperateCommand & operateCommand() const { DARABONBA_PTR_GET_CONST(operateCommand_, OperateInstanceRequestOperateCommand) };
    inline OperateInstanceRequestOperateCommand operateCommand() { DARABONBA_PTR_GET(operateCommand_, OperateInstanceRequestOperateCommand) };
    inline OperateInstanceRequest& setOperateCommand(const OperateInstanceRequestOperateCommand & operateCommand) { DARABONBA_PTR_SET_VALUE(operateCommand_, operateCommand) };
    inline OperateInstanceRequest& setOperateCommand(OperateInstanceRequestOperateCommand && operateCommand) { DARABONBA_PTR_SET_RVALUE(operateCommand_, operateCommand) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<OperateInstanceRequestOperateCommand> operateCommand_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
