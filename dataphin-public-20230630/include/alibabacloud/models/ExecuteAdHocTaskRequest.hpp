// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEADHOCTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEADHOCTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExecuteAdHocTaskRequestExecuteCommand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ExecuteAdHocTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteAdHocTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecuteCommand, executeCommand_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteAdHocTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecuteCommand, executeCommand_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    ExecuteAdHocTaskRequest() = default ;
    ExecuteAdHocTaskRequest(const ExecuteAdHocTaskRequest &) = default ;
    ExecuteAdHocTaskRequest(ExecuteAdHocTaskRequest &&) = default ;
    ExecuteAdHocTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteAdHocTaskRequest() = default ;
    ExecuteAdHocTaskRequest& operator=(const ExecuteAdHocTaskRequest &) = default ;
    ExecuteAdHocTaskRequest& operator=(ExecuteAdHocTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executeCommand_ != nullptr
        && this->opTenantId_ != nullptr; };
    // executeCommand Field Functions 
    bool hasExecuteCommand() const { return this->executeCommand_ != nullptr;};
    void deleteExecuteCommand() { this->executeCommand_ = nullptr;};
    inline const ExecuteAdHocTaskRequestExecuteCommand & executeCommand() const { DARABONBA_PTR_GET_CONST(executeCommand_, ExecuteAdHocTaskRequestExecuteCommand) };
    inline ExecuteAdHocTaskRequestExecuteCommand executeCommand() { DARABONBA_PTR_GET(executeCommand_, ExecuteAdHocTaskRequestExecuteCommand) };
    inline ExecuteAdHocTaskRequest& setExecuteCommand(const ExecuteAdHocTaskRequestExecuteCommand & executeCommand) { DARABONBA_PTR_SET_VALUE(executeCommand_, executeCommand) };
    inline ExecuteAdHocTaskRequest& setExecuteCommand(ExecuteAdHocTaskRequestExecuteCommand && executeCommand) { DARABONBA_PTR_SET_RVALUE(executeCommand_, executeCommand) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline ExecuteAdHocTaskRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    // This parameter is required.
    std::shared_ptr<ExecuteAdHocTaskRequestExecuteCommand> executeCommand_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
