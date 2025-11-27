// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCCOMMANDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNRCCOMMANDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RunRCCommandShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCCommandShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(KeepCommand, keepCommand_);
      DARABONBA_PTR_TO_JSON(Launcher, launcher_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceTags, resourceTagsShrink_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCCommandShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(KeepCommand, keepCommand_);
      DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceTags, resourceTagsShrink_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    RunRCCommandShrinkRequest() = default ;
    RunRCCommandShrinkRequest(const RunRCCommandShrinkRequest &) = default ;
    RunRCCommandShrinkRequest(RunRCCommandShrinkRequest &&) = default ;
    RunRCCommandShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCCommandShrinkRequest() = default ;
    RunRCCommandShrinkRequest& operator=(const RunRCCommandShrinkRequest &) = default ;
    RunRCCommandShrinkRequest& operator=(RunRCCommandShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->commandContent_ == nullptr && return this->containerId_ == nullptr && return this->containerName_ == nullptr && return this->contentEncoding_ == nullptr && return this->description_ == nullptr
        && return this->enableParameter_ == nullptr && return this->frequency_ == nullptr && return this->instanceIdsShrink_ == nullptr && return this->keepCommand_ == nullptr && return this->launcher_ == nullptr
        && return this->name_ == nullptr && return this->parametersShrink_ == nullptr && return this->regionId_ == nullptr && return this->repeatMode_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceTagsShrink_ == nullptr && return this->tagsShrink_ == nullptr && return this->terminationMode_ == nullptr && return this->timeout_ == nullptr && return this->type_ == nullptr
        && return this->username_ == nullptr && return this->windowsPasswordName_ == nullptr && return this->workingDir_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunRCCommandShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string commandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline RunRCCommandShrinkRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline RunRCCommandShrinkRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline RunRCCommandShrinkRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string contentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline RunRCCommandShrinkRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunRCCommandShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableParameter Field Functions 
    bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
    void deleteEnableParameter() { this->enableParameter_ = nullptr;};
    inline bool enableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
    inline RunRCCommandShrinkRequest& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline RunRCCommandShrinkRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline RunRCCommandShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // keepCommand Field Functions 
    bool hasKeepCommand() const { return this->keepCommand_ != nullptr;};
    void deleteKeepCommand() { this->keepCommand_ = nullptr;};
    inline bool keepCommand() const { DARABONBA_PTR_GET_DEFAULT(keepCommand_, false) };
    inline RunRCCommandShrinkRequest& setKeepCommand(bool keepCommand) { DARABONBA_PTR_SET_VALUE(keepCommand_, keepCommand) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string launcher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline RunRCCommandShrinkRequest& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunRCCommandShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string parametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline RunRCCommandShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunRCCommandShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline string repeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
    inline RunRCCommandShrinkRequest& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunRCCommandShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceTagsShrink Field Functions 
    bool hasResourceTagsShrink() const { return this->resourceTagsShrink_ != nullptr;};
    void deleteResourceTagsShrink() { this->resourceTagsShrink_ = nullptr;};
    inline string resourceTagsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceTagsShrink_, "") };
    inline RunRCCommandShrinkRequest& setResourceTagsShrink(string resourceTagsShrink) { DARABONBA_PTR_SET_VALUE(resourceTagsShrink_, resourceTagsShrink) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline RunRCCommandShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // terminationMode Field Functions 
    bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
    void deleteTerminationMode() { this->terminationMode_ = nullptr;};
    inline string terminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
    inline RunRCCommandShrinkRequest& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline RunRCCommandShrinkRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunRCCommandShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline RunRCCommandShrinkRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // windowsPasswordName Field Functions 
    bool hasWindowsPasswordName() const { return this->windowsPasswordName_ != nullptr;};
    void deleteWindowsPasswordName() { this->windowsPasswordName_ = nullptr;};
    inline string windowsPasswordName() const { DARABONBA_PTR_GET_DEFAULT(windowsPasswordName_, "") };
    inline RunRCCommandShrinkRequest& setWindowsPasswordName(string windowsPasswordName) { DARABONBA_PTR_SET_VALUE(windowsPasswordName_, windowsPasswordName) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline RunRCCommandShrinkRequest& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> commandContent_ = nullptr;
    std::shared_ptr<string> containerId_ = nullptr;
    std::shared_ptr<string> containerName_ = nullptr;
    std::shared_ptr<string> contentEncoding_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enableParameter_ = nullptr;
    std::shared_ptr<string> frequency_ = nullptr;
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    std::shared_ptr<bool> keepCommand_ = nullptr;
    std::shared_ptr<string> launcher_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> parametersShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> repeatMode_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceTagsShrink_ = nullptr;
    std::shared_ptr<string> tagsShrink_ = nullptr;
    std::shared_ptr<string> terminationMode_ = nullptr;
    std::shared_ptr<int64_t> timeout_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
    std::shared_ptr<string> windowsPasswordName_ = nullptr;
    std::shared_ptr<string> workingDir_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
