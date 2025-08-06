// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMAND_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOMMANDSRESPONSEBODYCOMMANDSCOMMAND_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCommandsResponseBodyCommandsCommandParameterDefinitions.hpp>
#include <alibabacloud/models/DescribeCommandsResponseBodyCommandsCommandParameterNames.hpp>
#include <alibabacloud/models/DescribeCommandsResponseBodyCommandsCommandTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeCommandsResponseBodyCommandsCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCommandsResponseBodyCommandsCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_TO_JSON(InvokeTimes, invokeTimes_);
      DARABONBA_PTR_TO_JSON(Latest, latest_);
      DARABONBA_PTR_TO_JSON(Launcher, launcher_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParameterDefinitions, parameterDefinitions_);
      DARABONBA_PTR_TO_JSON(ParameterNames, parameterNames_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Version, version_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCommandsResponseBodyCommandsCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_FROM_JSON(InvokeTimes, invokeTimes_);
      DARABONBA_PTR_FROM_JSON(Latest, latest_);
      DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParameterDefinitions, parameterDefinitions_);
      DARABONBA_PTR_FROM_JSON(ParameterNames, parameterNames_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    DescribeCommandsResponseBodyCommandsCommand() = default ;
    DescribeCommandsResponseBodyCommandsCommand(const DescribeCommandsResponseBodyCommandsCommand &) = default ;
    DescribeCommandsResponseBodyCommandsCommand(DescribeCommandsResponseBodyCommandsCommand &&) = default ;
    DescribeCommandsResponseBodyCommandsCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCommandsResponseBodyCommandsCommand() = default ;
    DescribeCommandsResponseBodyCommandsCommand& operator=(const DescribeCommandsResponseBodyCommandsCommand &) = default ;
    DescribeCommandsResponseBodyCommandsCommand& operator=(DescribeCommandsResponseBodyCommandsCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->commandContent_ != nullptr && this->commandId_ != nullptr && this->creationTime_ != nullptr && this->description_ != nullptr && this->enableParameter_ != nullptr
        && this->invokeTimes_ != nullptr && this->latest_ != nullptr && this->launcher_ != nullptr && this->name_ != nullptr && this->parameterDefinitions_ != nullptr
        && this->parameterNames_ != nullptr && this->provider_ != nullptr && this->resourceGroupId_ != nullptr && this->tags_ != nullptr && this->timeout_ != nullptr
        && this->type_ != nullptr && this->version_ != nullptr && this->workingDir_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string commandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string commandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableParameter Field Functions 
    bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
    void deleteEnableParameter() { this->enableParameter_ = nullptr;};
    inline bool enableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
    inline DescribeCommandsResponseBodyCommandsCommand& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


    // invokeTimes Field Functions 
    bool hasInvokeTimes() const { return this->invokeTimes_ != nullptr;};
    void deleteInvokeTimes() { this->invokeTimes_ = nullptr;};
    inline int32_t invokeTimes() const { DARABONBA_PTR_GET_DEFAULT(invokeTimes_, 0) };
    inline DescribeCommandsResponseBodyCommandsCommand& setInvokeTimes(int32_t invokeTimes) { DARABONBA_PTR_SET_VALUE(invokeTimes_, invokeTimes) };


    // latest Field Functions 
    bool hasLatest() const { return this->latest_ != nullptr;};
    void deleteLatest() { this->latest_ = nullptr;};
    inline bool latest() const { DARABONBA_PTR_GET_DEFAULT(latest_, false) };
    inline DescribeCommandsResponseBodyCommandsCommand& setLatest(bool latest) { DARABONBA_PTR_SET_VALUE(latest_, latest) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string launcher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameterDefinitions Field Functions 
    bool hasParameterDefinitions() const { return this->parameterDefinitions_ != nullptr;};
    void deleteParameterDefinitions() { this->parameterDefinitions_ = nullptr;};
    inline const Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitions & parameterDefinitions() const { DARABONBA_PTR_GET_CONST(parameterDefinitions_, Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitions) };
    inline Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitions parameterDefinitions() { DARABONBA_PTR_GET(parameterDefinitions_, Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitions) };
    inline DescribeCommandsResponseBodyCommandsCommand& setParameterDefinitions(const Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitions & parameterDefinitions) { DARABONBA_PTR_SET_VALUE(parameterDefinitions_, parameterDefinitions) };
    inline DescribeCommandsResponseBodyCommandsCommand& setParameterDefinitions(Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitions && parameterDefinitions) { DARABONBA_PTR_SET_RVALUE(parameterDefinitions_, parameterDefinitions) };


    // parameterNames Field Functions 
    bool hasParameterNames() const { return this->parameterNames_ != nullptr;};
    void deleteParameterNames() { this->parameterNames_ = nullptr;};
    inline const Models::DescribeCommandsResponseBodyCommandsCommandParameterNames & parameterNames() const { DARABONBA_PTR_GET_CONST(parameterNames_, Models::DescribeCommandsResponseBodyCommandsCommandParameterNames) };
    inline Models::DescribeCommandsResponseBodyCommandsCommandParameterNames parameterNames() { DARABONBA_PTR_GET(parameterNames_, Models::DescribeCommandsResponseBodyCommandsCommandParameterNames) };
    inline DescribeCommandsResponseBodyCommandsCommand& setParameterNames(const Models::DescribeCommandsResponseBodyCommandsCommandParameterNames & parameterNames) { DARABONBA_PTR_SET_VALUE(parameterNames_, parameterNames) };
    inline DescribeCommandsResponseBodyCommandsCommand& setParameterNames(Models::DescribeCommandsResponseBodyCommandsCommandParameterNames && parameterNames) { DARABONBA_PTR_SET_RVALUE(parameterNames_, parameterNames) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeCommandsResponseBodyCommandsCommandTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeCommandsResponseBodyCommandsCommandTags) };
    inline Models::DescribeCommandsResponseBodyCommandsCommandTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeCommandsResponseBodyCommandsCommandTags) };
    inline DescribeCommandsResponseBodyCommandsCommand& setTags(const Models::DescribeCommandsResponseBodyCommandsCommandTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeCommandsResponseBodyCommandsCommand& setTags(Models::DescribeCommandsResponseBodyCommandsCommandTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline DescribeCommandsResponseBodyCommandsCommand& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline int32_t version() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
    inline DescribeCommandsResponseBodyCommandsCommand& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline DescribeCommandsResponseBodyCommandsCommand& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The category of the common command.
    std::shared_ptr<string> category_ = nullptr;
    // The content of the command, which is Base64-encoded.
    // 
    // *   If ContentEncoding is set to PlainText in the request, the original command content is returned.
    // *   If ContentEncoding is set to Base64 in the request, the Base64-encoded command content is returned.
    std::shared_ptr<string> commandContent_ = nullptr;
    // The command ID.
    std::shared_ptr<string> commandId_ = nullptr;
    // The time when the command was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the command.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the custom parameter feature is enabled for the command.
    std::shared_ptr<bool> enableParameter_ = nullptr;
    // The number of tasks created by using the command.
    std::shared_ptr<int32_t> invokeTimes_ = nullptr;
    // Indicates whether the common command is of the latest version. If multiple common commands from the same provider (`Provider`) belong to the same category and have the same name, these commands are different versions of the same command. This parameter is not returned for the Cloud Assistant commands that you created.
    std::shared_ptr<bool> latest_ = nullptr;
    // The launcher for script execution. The value cannot exceed 1 KB in length.
    std::shared_ptr<string> launcher_ = nullptr;
    // The name of the command.
    std::shared_ptr<string> name_ = nullptr;
    // The custom parameters of the command.
    std::shared_ptr<Models::DescribeCommandsResponseBodyCommandsCommandParameterDefinitions> parameterDefinitions_ = nullptr;
    // The custom parameter names that are parsed from the command content specified when the command was created. If the custom parameter feature is disabled, an empty list is returned.
    std::shared_ptr<Models::DescribeCommandsResponseBodyCommandsCommandParameterNames> parameterNames_ = nullptr;
    // The provider of the common command.
    std::shared_ptr<string> provider_ = nullptr;
    // The ID of the resource group to which the command belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The tags of the command.
    std::shared_ptr<Models::DescribeCommandsResponseBodyCommandsCommandTags> tags_ = nullptr;
    // The timeout period. Unit: seconds.
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // The type of the command.
    std::shared_ptr<string> type_ = nullptr;
    // The version of the common command. If multiple common commands from the same provider (`Provider`) belong to the same category and have the same name, these commands are different versions of the same command. This parameter is not returned for the Cloud Assistant commands that you created.
    std::shared_ptr<int32_t> version_ = nullptr;
    // The execution path of the command.
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
