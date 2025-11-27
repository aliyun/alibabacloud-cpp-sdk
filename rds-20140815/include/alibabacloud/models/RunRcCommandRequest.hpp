// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNRCCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNRCCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RunRCCommandRequestResourceTags.hpp>
#include <alibabacloud/models/RunRCCommandRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class RunRCCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunRCCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(KeepCommand, keepCommand_);
      DARABONBA_PTR_TO_JSON(Launcher, launcher_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, RunRCCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(KeepCommand, keepCommand_);
      DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    RunRCCommandRequest() = default ;
    RunRCCommandRequest(const RunRCCommandRequest &) = default ;
    RunRCCommandRequest(RunRCCommandRequest &&) = default ;
    RunRCCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunRCCommandRequest() = default ;
    RunRCCommandRequest& operator=(const RunRCCommandRequest &) = default ;
    RunRCCommandRequest& operator=(RunRCCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->commandContent_ == nullptr && return this->containerId_ == nullptr && return this->containerName_ == nullptr && return this->contentEncoding_ == nullptr && return this->description_ == nullptr
        && return this->enableParameter_ == nullptr && return this->frequency_ == nullptr && return this->instanceIds_ == nullptr && return this->keepCommand_ == nullptr && return this->launcher_ == nullptr
        && return this->name_ == nullptr && return this->parameters_ == nullptr && return this->regionId_ == nullptr && return this->repeatMode_ == nullptr && return this->resourceGroupId_ == nullptr
        && return this->resourceTags_ == nullptr && return this->tags_ == nullptr && return this->terminationMode_ == nullptr && return this->timeout_ == nullptr && return this->type_ == nullptr
        && return this->username_ == nullptr && return this->windowsPasswordName_ == nullptr && return this->workingDir_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunRCCommandRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string commandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline RunRCCommandRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline RunRCCommandRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline RunRCCommandRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string contentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline RunRCCommandRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunRCCommandRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableParameter Field Functions 
    bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
    void deleteEnableParameter() { this->enableParameter_ = nullptr;};
    inline bool enableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
    inline RunRCCommandRequest& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string frequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline RunRCCommandRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline RunRCCommandRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline RunRCCommandRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // keepCommand Field Functions 
    bool hasKeepCommand() const { return this->keepCommand_ != nullptr;};
    void deleteKeepCommand() { this->keepCommand_ = nullptr;};
    inline bool keepCommand() const { DARABONBA_PTR_GET_DEFAULT(keepCommand_, false) };
    inline RunRCCommandRequest& setKeepCommand(bool keepCommand) { DARABONBA_PTR_SET_VALUE(keepCommand_, keepCommand) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string launcher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline RunRCCommandRequest& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunRCCommandRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & parameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & parameters() { DARABONBA_GET(parameters_) };
    inline RunRCCommandRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline RunRCCommandRequest& setParameters(Darabonba::Json & parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunRCCommandRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline string repeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
    inline RunRCCommandRequest& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunRCCommandRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline const vector<RunRCCommandRequestResourceTags> & resourceTags() const { DARABONBA_PTR_GET_CONST(resourceTags_, vector<RunRCCommandRequestResourceTags>) };
    inline vector<RunRCCommandRequestResourceTags> resourceTags() { DARABONBA_PTR_GET(resourceTags_, vector<RunRCCommandRequestResourceTags>) };
    inline RunRCCommandRequest& setResourceTags(const vector<RunRCCommandRequestResourceTags> & resourceTags) { DARABONBA_PTR_SET_VALUE(resourceTags_, resourceTags) };
    inline RunRCCommandRequest& setResourceTags(vector<RunRCCommandRequestResourceTags> && resourceTags) { DARABONBA_PTR_SET_RVALUE(resourceTags_, resourceTags) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<RunRCCommandRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<RunRCCommandRequestTags>) };
    inline vector<RunRCCommandRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<RunRCCommandRequestTags>) };
    inline RunRCCommandRequest& setTags(const vector<RunRCCommandRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RunRCCommandRequest& setTags(vector<RunRCCommandRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // terminationMode Field Functions 
    bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
    void deleteTerminationMode() { this->terminationMode_ = nullptr;};
    inline string terminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
    inline RunRCCommandRequest& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline RunRCCommandRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunRCCommandRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline RunRCCommandRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // windowsPasswordName Field Functions 
    bool hasWindowsPasswordName() const { return this->windowsPasswordName_ != nullptr;};
    void deleteWindowsPasswordName() { this->windowsPasswordName_ = nullptr;};
    inline string windowsPasswordName() const { DARABONBA_PTR_GET_DEFAULT(windowsPasswordName_, "") };
    inline RunRCCommandRequest& setWindowsPasswordName(string windowsPasswordName) { DARABONBA_PTR_SET_VALUE(windowsPasswordName_, windowsPasswordName) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string workingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline RunRCCommandRequest& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


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
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    std::shared_ptr<bool> keepCommand_ = nullptr;
    std::shared_ptr<string> launcher_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    Darabonba::Json parameters_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> repeatMode_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<RunRCCommandRequestResourceTags>> resourceTags_ = nullptr;
    std::shared_ptr<vector<RunRCCommandRequestTags>> tags_ = nullptr;
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
