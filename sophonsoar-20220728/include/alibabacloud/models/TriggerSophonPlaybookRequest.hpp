// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERSOPHONPLAYBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERSOPHONPLAYBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class TriggerSophonPlaybookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerSophonPlaybookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommandName, commandName_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerSophonPlaybookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommandName, commandName_);
      DARABONBA_PTR_FROM_JSON(InputParams, inputParams_);
      DARABONBA_PTR_FROM_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_FROM_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    TriggerSophonPlaybookRequest() = default ;
    TriggerSophonPlaybookRequest(const TriggerSophonPlaybookRequest &) = default ;
    TriggerSophonPlaybookRequest(TriggerSophonPlaybookRequest &&) = default ;
    TriggerSophonPlaybookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerSophonPlaybookRequest() = default ;
    TriggerSophonPlaybookRequest& operator=(const TriggerSophonPlaybookRequest &) = default ;
    TriggerSophonPlaybookRequest& operator=(TriggerSophonPlaybookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commandName_ == nullptr && this->inputParams_ == nullptr && this->sophonTaskId_ == nullptr && this->triggerType_ == nullptr && this->uuid_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline TriggerSophonPlaybookRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandName Field Functions 
    bool hasCommandName() const { return this->commandName_ != nullptr;};
    void deleteCommandName() { this->commandName_ = nullptr;};
    inline string getCommandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
    inline TriggerSophonPlaybookRequest& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string getInputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline TriggerSophonPlaybookRequest& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // sophonTaskId Field Functions 
    bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
    void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
    inline string getSophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
    inline TriggerSophonPlaybookRequest& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string getTriggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline TriggerSophonPlaybookRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline TriggerSophonPlaybookRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
    // The name of the command that you want to trigger.
    // >You can call the [DescribeSophonCommands](~~DescribeSophonCommands~~) operation to obtain this parameter.
    shared_ptr<string> commandName_ {};
    // The input parameters for triggering the command or playbook.
    // 
    // This parameter is required.
    shared_ptr<string> inputParams_ {};
    // The custom ID of the task. If you do not specify this parameter when triggering a playbook, a random ID is generated. This ID is used for troubleshooting.
    shared_ptr<string> sophonTaskId_ {};
    // The trigger type. Valid values:
    // 
    // - **command**: Triggers a command task.
    // - **playbook**: Triggers a playbook task.
    shared_ptr<string> triggerType_ {};
    // The UUID of the playbook.
    // >You can call the [DescribePlaybooks](~~DescribePlaybooks~~) operation to obtain this parameter.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
