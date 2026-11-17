// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAPPINSTANCECOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNAPPINSTANCECOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class RunAppInstanceCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAppInstanceCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupIds, appInstanceGroupIds_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_TO_JSON(AppInstancePersistentIds, appInstancePersistentIds_);
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(CommandParam, commandParam_);
      DARABONBA_PTR_TO_JSON(CommandType, commandType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RunScriptType, runScriptType_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, RunAppInstanceCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupIds, appInstanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentId, appInstancePersistentId_);
      DARABONBA_PTR_FROM_JSON(AppInstancePersistentIds, appInstancePersistentIds_);
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(CommandParam, commandParam_);
      DARABONBA_PTR_FROM_JSON(CommandType, commandType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RunScriptType, runScriptType_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    RunAppInstanceCommandRequest() = default ;
    RunAppInstanceCommandRequest(const RunAppInstanceCommandRequest &) = default ;
    RunAppInstanceCommandRequest(RunAppInstanceCommandRequest &&) = default ;
    RunAppInstanceCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAppInstanceCommandRequest() = default ;
    RunAppInstanceCommandRequest& operator=(const RunAppInstanceCommandRequest &) = default ;
    RunAppInstanceCommandRequest& operator=(RunAppInstanceCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appInstanceGroupId_ == nullptr
        && this->appInstanceGroupIds_ == nullptr && this->appInstancePersistentId_ == nullptr && this->appInstancePersistentIds_ == nullptr && this->commandContent_ == nullptr && this->commandParam_ == nullptr
        && this->commandType_ == nullptr && this->description_ == nullptr && this->productType_ == nullptr && this->runScriptType_ == nullptr && this->timeout_ == nullptr; };
    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string getAppInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline RunAppInstanceCommandRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupIds Field Functions 
    bool hasAppInstanceGroupIds() const { return this->appInstanceGroupIds_ != nullptr;};
    void deleteAppInstanceGroupIds() { this->appInstanceGroupIds_ = nullptr;};
    inline const vector<string> & getAppInstanceGroupIds() const { DARABONBA_PTR_GET_CONST(appInstanceGroupIds_, vector<string>) };
    inline vector<string> getAppInstanceGroupIds() { DARABONBA_PTR_GET(appInstanceGroupIds_, vector<string>) };
    inline RunAppInstanceCommandRequest& setAppInstanceGroupIds(const vector<string> & appInstanceGroupIds) { DARABONBA_PTR_SET_VALUE(appInstanceGroupIds_, appInstanceGroupIds) };
    inline RunAppInstanceCommandRequest& setAppInstanceGroupIds(vector<string> && appInstanceGroupIds) { DARABONBA_PTR_SET_RVALUE(appInstanceGroupIds_, appInstanceGroupIds) };


    // appInstancePersistentId Field Functions 
    bool hasAppInstancePersistentId() const { return this->appInstancePersistentId_ != nullptr;};
    void deleteAppInstancePersistentId() { this->appInstancePersistentId_ = nullptr;};
    inline string getAppInstancePersistentId() const { DARABONBA_PTR_GET_DEFAULT(appInstancePersistentId_, "") };
    inline RunAppInstanceCommandRequest& setAppInstancePersistentId(string appInstancePersistentId) { DARABONBA_PTR_SET_VALUE(appInstancePersistentId_, appInstancePersistentId) };


    // appInstancePersistentIds Field Functions 
    bool hasAppInstancePersistentIds() const { return this->appInstancePersistentIds_ != nullptr;};
    void deleteAppInstancePersistentIds() { this->appInstancePersistentIds_ = nullptr;};
    inline const vector<string> & getAppInstancePersistentIds() const { DARABONBA_PTR_GET_CONST(appInstancePersistentIds_, vector<string>) };
    inline vector<string> getAppInstancePersistentIds() { DARABONBA_PTR_GET(appInstancePersistentIds_, vector<string>) };
    inline RunAppInstanceCommandRequest& setAppInstancePersistentIds(const vector<string> & appInstancePersistentIds) { DARABONBA_PTR_SET_VALUE(appInstancePersistentIds_, appInstancePersistentIds) };
    inline RunAppInstanceCommandRequest& setAppInstancePersistentIds(vector<string> && appInstancePersistentIds) { DARABONBA_PTR_SET_RVALUE(appInstancePersistentIds_, appInstancePersistentIds) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline RunAppInstanceCommandRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // commandParam Field Functions 
    bool hasCommandParam() const { return this->commandParam_ != nullptr;};
    void deleteCommandParam() { this->commandParam_ = nullptr;};
    inline string getCommandParam() const { DARABONBA_PTR_GET_DEFAULT(commandParam_, "") };
    inline RunAppInstanceCommandRequest& setCommandParam(string commandParam) { DARABONBA_PTR_SET_VALUE(commandParam_, commandParam) };


    // commandType Field Functions 
    bool hasCommandType() const { return this->commandType_ != nullptr;};
    void deleteCommandType() { this->commandType_ = nullptr;};
    inline string getCommandType() const { DARABONBA_PTR_GET_DEFAULT(commandType_, "") };
    inline RunAppInstanceCommandRequest& setCommandType(string commandType) { DARABONBA_PTR_SET_VALUE(commandType_, commandType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunAppInstanceCommandRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline RunAppInstanceCommandRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // runScriptType Field Functions 
    bool hasRunScriptType() const { return this->runScriptType_ != nullptr;};
    void deleteRunScriptType() { this->runScriptType_ = nullptr;};
    inline string getRunScriptType() const { DARABONBA_PTR_GET_DEFAULT(runScriptType_, "") };
    inline RunAppInstanceCommandRequest& setRunScriptType(string runScriptType) { DARABONBA_PTR_SET_VALUE(runScriptType_, runScriptType) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline RunAppInstanceCommandRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // The ID of the delivery group. This parameter is used to execute commands within a single delivery group. You can call the [ListAppInstanceGroup](~~ListAppInstanceGroup~~) operation to obtain the ID. If AppInstanceGroupIds is not specified, you must specify this parameter. Otherwise, a parameter error is returned. If AppInstanceGroupIds is specified, this parameter does not take effect.
    shared_ptr<string> appInstanceGroupId_ {};
    // The list of delivery group IDs. This parameter is used to issue commands in batches to multiple delivery groups in the same region. The command is executed on all persistent sessions in each delivery group in the list, and only one command execution ID is returned. You can specify up to 100 delivery group IDs. Duplicate IDs are automatically deduplicated. All delivery groups must belong to the same region. Otherwise, the InvalidRegion.NotMatch error is returned. If any delivery group does not exist, the InvalidAppInstanceGroup.NotFound error is returned. If this parameter is specified, AppInstanceGroupId and AppInstancePersistentIds do not take effect.
    shared_ptr<vector<string>> appInstanceGroupIds_ {};
    // The ID of the persistent session. This parameter is used to select a single persistent session within the delivery group specified by AppInstanceGroupId to execute the command. The session must belong to the specified delivery group. Otherwise, an error is returned.
    shared_ptr<string> appInstancePersistentId_ {};
    // The list of persistent session IDs. This parameter is used to select multiple persistent sessions within the delivery group specified by AppInstanceGroupId to execute the command. You can specify up to 100 session IDs. If AppInstanceGroupIds is specified, this parameter does not take effect, and the command is executed on all persistent sessions in each delivery group.
    shared_ptr<vector<string>> appInstancePersistentIds_ {};
    // The command content, which is the script content executed in the session. The content must match the script type specified by RunScriptType.
    // 
    // This parameter is required.
    shared_ptr<string> commandContent_ {};
    // The command parameters, which are passed through to the session execution end along with the command content. Whether to specify this parameter and the specific format depend on the command content. If not required, you can leave this parameter empty.
    shared_ptr<string> commandParam_ {};
    // The command type. Currently, only CloudAssistantCmd (Cloud Assistant command) is supported. Specifying other values results in a parameter error.
    // 
    // This parameter is required.
    shared_ptr<string> commandType_ {};
    // The description of the command. This parameter is used to describe the purpose of the issued command for subsequent identification.
    shared_ptr<string> description_ {};
    // The product type. Currently, only WuyingServer (WUYING Workspace) is supported. Specifying other values results in a parameter error.
    // 
    // This parameter is required.
    shared_ptr<string> productType_ {};
    // The type of the script to execute. Valid values:
    // - RunBatScript: BAT script.
    // - RunPowerShellScript: PowerShell script.
    // - RunShellScript: Shell script.
    // - RunAIAgentScript: AI agent script.
    shared_ptr<string> runScriptType_ {};
    // The timeout period for command execution, in seconds. If this parameter is not specified, the default value is 60 seconds.
    shared_ptr<int64_t> timeout_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
