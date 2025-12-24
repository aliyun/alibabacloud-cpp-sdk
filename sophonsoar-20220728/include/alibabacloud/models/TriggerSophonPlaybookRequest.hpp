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
      DARABONBA_PTR_TO_JSON(CommandName, commandName_);
      DARABONBA_PTR_TO_JSON(InputParams, inputParams_);
      DARABONBA_PTR_TO_JSON(SophonTaskId, sophonTaskId_);
      DARABONBA_PTR_TO_JSON(TriggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerSophonPlaybookRequest& obj) { 
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
    virtual bool empty() const override { return this->commandName_ == nullptr
        && return this->inputParams_ == nullptr && return this->sophonTaskId_ == nullptr && return this->triggerType_ == nullptr && return this->uuid_ == nullptr; };
    // commandName Field Functions 
    bool hasCommandName() const { return this->commandName_ != nullptr;};
    void deleteCommandName() { this->commandName_ = nullptr;};
    inline string commandName() const { DARABONBA_PTR_GET_DEFAULT(commandName_, "") };
    inline TriggerSophonPlaybookRequest& setCommandName(string commandName) { DARABONBA_PTR_SET_VALUE(commandName_, commandName) };


    // inputParams Field Functions 
    bool hasInputParams() const { return this->inputParams_ != nullptr;};
    void deleteInputParams() { this->inputParams_ = nullptr;};
    inline string inputParams() const { DARABONBA_PTR_GET_DEFAULT(inputParams_, "") };
    inline TriggerSophonPlaybookRequest& setInputParams(string inputParams) { DARABONBA_PTR_SET_VALUE(inputParams_, inputParams) };


    // sophonTaskId Field Functions 
    bool hasSophonTaskId() const { return this->sophonTaskId_ != nullptr;};
    void deleteSophonTaskId() { this->sophonTaskId_ = nullptr;};
    inline string sophonTaskId() const { DARABONBA_PTR_GET_DEFAULT(sophonTaskId_, "") };
    inline TriggerSophonPlaybookRequest& setSophonTaskId(string sophonTaskId) { DARABONBA_PTR_SET_VALUE(sophonTaskId_, sophonTaskId) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline TriggerSophonPlaybookRequest& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline TriggerSophonPlaybookRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The name of the command that you want to trigger.
    // 
    // >  You can call the [DescribeSophonCommands](~~DescribeSophonCommands~~) operation to query the command name.
    std::shared_ptr<string> commandName_ = nullptr;
    // The input parameters of the command or playbook that you want to trigger.
    // 
    // This parameter is required.
    std::shared_ptr<string> inputParams_ = nullptr;
    // The custom ID. If you do not specify this parameter when the playbook is triggered, a random ID is generated for fault locating and troubleshooting.
    std::shared_ptr<string> sophonTaskId_ = nullptr;
    // The task type. Valid values:
    // 
    // *   **command**
    // *   **playbook**
    std::shared_ptr<string> triggerType_ = nullptr;
    // The UUID of the playbook.
    // 
    // >  You can call the [DescribePlaybooks](~~DescribePlaybooks~~)operation to query the playbook UUID.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
