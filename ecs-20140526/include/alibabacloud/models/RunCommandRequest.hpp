// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KeepCommand, keepCommand_);
      DARABONBA_PTR_TO_JSON(Launcher, launcher_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OssOutputDelivery, ossOutputDelivery_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_ANY_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceTag, resourceTag_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_TO_JSON(Timed, timed_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KeepCommand, keepCommand_);
      DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OssOutputDelivery, ossOutputDelivery_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_ANY_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RepeatMode, repeatMode_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceTag, resourceTag_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TerminationMode, terminationMode_);
      DARABONBA_PTR_FROM_JSON(Timed, timed_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    RunCommandRequest() = default ;
    RunCommandRequest(const RunCommandRequest &) = default ;
    RunCommandRequest(RunCommandRequest &&) = default ;
    RunCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommandRequest() = default ;
    RunCommandRequest& operator=(const RunCommandRequest &) = default ;
    RunCommandRequest& operator=(RunCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key of the command execution. If this value is specified, it cannot be an empty string.
      shared_ptr<string> key_ {};
      // The tag value of the command execution. The value can be an empty string.
      shared_ptr<string> value_ {};
    };

    class ResourceTag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ResourceTag() = default ;
      ResourceTag(const ResourceTag &) = default ;
      ResourceTag(ResourceTag &&) = default ;
      ResourceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTag() = default ;
      ResourceTag& operator=(const ResourceTag &) = default ;
      ResourceTag& operator=(ResourceTag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline ResourceTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ResourceTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key that is used to filter instances.
      shared_ptr<string> key_ {};
      // The tag value used to filter instances.
      // 
      // Precautions:
      // - The value can be an empty string.
      // - The value can be up to 128 characters in length and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commandContent_ == nullptr && this->containerId_ == nullptr && this->containerName_ == nullptr && this->contentEncoding_ == nullptr && this->description_ == nullptr
        && this->enableParameter_ == nullptr && this->frequency_ == nullptr && this->instanceId_ == nullptr && this->keepCommand_ == nullptr && this->launcher_ == nullptr
        && this->name_ == nullptr && this->ossOutputDelivery_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->parameters_ == nullptr
        && this->regionId_ == nullptr && this->repeatMode_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->resourceTag_ == nullptr && this->tag_ == nullptr && this->terminationMode_ == nullptr && this->timed_ == nullptr && this->timeout_ == nullptr
        && this->type_ == nullptr && this->username_ == nullptr && this->windowsPasswordName_ == nullptr && this->workingDir_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunCommandRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline RunCommandRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline RunCommandRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline RunCommandRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline RunCommandRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunCommandRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableParameter Field Functions 
    bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
    void deleteEnableParameter() { this->enableParameter_ = nullptr;};
    inline bool getEnableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
    inline RunCommandRequest& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline RunCommandRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline RunCommandRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline RunCommandRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // keepCommand Field Functions 
    bool hasKeepCommand() const { return this->keepCommand_ != nullptr;};
    void deleteKeepCommand() { this->keepCommand_ = nullptr;};
    inline bool getKeepCommand() const { DARABONBA_PTR_GET_DEFAULT(keepCommand_, false) };
    inline RunCommandRequest& setKeepCommand(bool keepCommand) { DARABONBA_PTR_SET_VALUE(keepCommand_, keepCommand) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string getLauncher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline RunCommandRequest& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunCommandRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossOutputDelivery Field Functions 
    bool hasOssOutputDelivery() const { return this->ossOutputDelivery_ != nullptr;};
    void deleteOssOutputDelivery() { this->ossOutputDelivery_ = nullptr;};
    inline string getOssOutputDelivery() const { DARABONBA_PTR_GET_DEFAULT(ossOutputDelivery_, "") };
    inline RunCommandRequest& setOssOutputDelivery(string ossOutputDelivery) { DARABONBA_PTR_SET_VALUE(ossOutputDelivery_, ossOutputDelivery) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RunCommandRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RunCommandRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline     const Darabonba::Json & getParameters() const { DARABONBA_GET(parameters_) };
    Darabonba::Json & getParameters() { DARABONBA_GET(parameters_) };
    inline RunCommandRequest& setParameters(const Darabonba::Json & parameters) { DARABONBA_SET_VALUE(parameters_, parameters) };
    inline RunCommandRequest& setParameters(Darabonba::Json && parameters) { DARABONBA_SET_RVALUE(parameters_, parameters) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunCommandRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline string getRepeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
    inline RunCommandRequest& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunCommandRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RunCommandRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RunCommandRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceTag Field Functions 
    bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
    void deleteResourceTag() { this->resourceTag_ = nullptr;};
    inline const vector<RunCommandRequest::ResourceTag> & getResourceTag() const { DARABONBA_PTR_GET_CONST(resourceTag_, vector<RunCommandRequest::ResourceTag>) };
    inline vector<RunCommandRequest::ResourceTag> getResourceTag() { DARABONBA_PTR_GET(resourceTag_, vector<RunCommandRequest::ResourceTag>) };
    inline RunCommandRequest& setResourceTag(const vector<RunCommandRequest::ResourceTag> & resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };
    inline RunCommandRequest& setResourceTag(vector<RunCommandRequest::ResourceTag> && resourceTag) { DARABONBA_PTR_SET_RVALUE(resourceTag_, resourceTag) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<RunCommandRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<RunCommandRequest::Tag>) };
    inline vector<RunCommandRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<RunCommandRequest::Tag>) };
    inline RunCommandRequest& setTag(const vector<RunCommandRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline RunCommandRequest& setTag(vector<RunCommandRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // terminationMode Field Functions 
    bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
    void deleteTerminationMode() { this->terminationMode_ = nullptr;};
    inline string getTerminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
    inline RunCommandRequest& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


    // timed Field Functions 
    bool hasTimed() const { return this->timed_ != nullptr;};
    void deleteTimed() { this->timed_ = nullptr;};
    inline bool getTimed() const { DARABONBA_PTR_GET_DEFAULT(timed_, false) };
    inline RunCommandRequest& setTimed(bool timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline RunCommandRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunCommandRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline RunCommandRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // windowsPasswordName Field Functions 
    bool hasWindowsPasswordName() const { return this->windowsPasswordName_ != nullptr;};
    void deleteWindowsPasswordName() { this->windowsPasswordName_ = nullptr;};
    inline string getWindowsPasswordName() const { DARABONBA_PTR_GET_DEFAULT(windowsPasswordName_, "") };
    inline RunCommandRequest& setWindowsPasswordName(string windowsPasswordName) { DARABONBA_PTR_SET_VALUE(windowsPasswordName_, windowsPasswordName) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline RunCommandRequest& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. **ClientToken** supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The command content. The command content can be plaintext or Base64-encoded. Note the following:
    // 
    // - The size of the command content after Base64 encoding cannot exceed 24 KB. You can use `KeepCommand` to specify whether to retain the command.
    // - If the command content is Base64-encoded, set `ContentEncoding=Base64`.
    // - Set `EnableParameter=true` to enable custom parameters in the command content:
    //     - Custom parameters are defined by enclosing them in `{{}}`. Spaces and line breaks before and after the parameter name within `{{}}` are ignored.
    //     - A maximum of 20 custom parameters are supported.
    //     - Custom parameter names can contain only a-z, A-Z, 0-9, hyphens (-), and underscores (_). The acs:: prefix for specifying non-built-in environment parameters is not supported. Other characters are not supported. Parameter names are case-insensitive.
    //     - Each custom parameter name cannot exceed 64 bytes.
    // 
    // - You can specify built-in environment parameters as custom parameters. When the command is run, Cloud Assistant automatically replaces the parameters with the corresponding values in the environment without manual assignment. The following built-in environment parameters are supported:
    //     - `{{ACS::RegionId}}`: The region ID.
    //     - `{{ACS::AccountId}}`: The UID of the Alibaba Cloud account.
    //     - `{{ACS::InstanceId}}`: The instance ID. When the command is sent to multiple instances and you want to use `{{ACS::InstanceId}}` as a built-in environment parameter, make sure that the Cloud Assistant Agent version is not earlier than the following:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    //     - `{{ACS::InstanceName}}`: The instance name. When the command is sent to multiple instances and you want to use `{{ACS::InstanceName}}` as a built-in environment parameter, make sure that the Cloud Assistant Agent version is not earlier than the following:
    //         - Linux: 2.2.3.344
    //         - Windows: 2.1.3.344
    //     - `{{ACS::InvokeId}}`: The command execution ID. To use `{{ACS::InvokeId}}` as a built-in environment parameter, make sure that the Cloud Assistant Agent version is not earlier than the following:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    //     - `{{ACS::CommandId}}`: The command ID. When you call this operation to run a command and want to use `{{ACS::CommandId}}` as a built-in environment parameter, make sure that the Cloud Assistant Agent version is not earlier than the following:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    // 
    // This parameter is required.
    shared_ptr<string> commandContent_ {};
    // The container ID. Only 64-bit hexadecimal strings are supported. The `docker://`, `containerd://`, or `cri-o://` prefix can be added to specify the container runtime.
    // 
    // Precautions:
    // - If this parameter is specified, Cloud Assistant runs the script in the specified container of the instance.
    // - If this parameter is specified, the script can run only on Linux instances whose Cloud Assistant Agent version is 2.2.3.344 or later.
    // - If this parameter is specified, the specified `Username` and `WorkingDir` parameters do not take effect. Commands can be run only by using the default user of the container in the default working directory of the container. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    // > In Linux containers, only shell scripts are supported. You cannot use a command such as `#!/usr/bin/python` at the beginning of a script to specify the interpreter. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    shared_ptr<string> containerId_ {};
    // The container name.
    // 
    // Precautions:
    // - If this parameter is specified, Cloud Assistant runs the script in the specified container of the instance.
    // - If this parameter is specified, the script can run only on Linux instances whose Cloud Assistant Agent version is 2.2.3.344 or later.
    // - If this parameter is specified, the Username and WorkingDir parameters do not take effect. Commands can be run only by using the default user in the default working directory of the container. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    // > In Linux containers, only shell scripts can be run. You cannot specify an interpreter for the script content by adding a command such as `#!/usr/bin/python` to the beginning of the script. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    shared_ptr<string> containerName_ {};
    // The encoding mode of the command content (`CommandContent`). Valid values (case-insensitive):
    shared_ptr<string> contentEncoding_ {};
    // The command description. The description supports all character sets and can be up to 512 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether the command contains custom parameters.
    shared_ptr<bool> enableParameter_ {};
    // The execution time for scheduled command execution. Three scheduling methods are supported: fixed interval execution (based on Rate expressions), one-time execution at a specified time, and clock-based scheduled execution (based on Cron expressions).
    // 
    // - Fixed interval execution: Based on Rate expressions, commands are executed at the specified time interval. The time interval can be specified in seconds (s), minutes (m), hours (h), or days (d). This method is suitable for scenarios that require task execution at fixed intervals. The format is `rate(<interval value><interval unit>)`. For example, to execute a command every 5 minutes, use `rate(5m)`. The following limits apply to fixed interval execution:
    //     - The specified interval cannot exceed 7 days or be less than 60 seconds, and must be greater than the timeout period of the scheduled task.
    //     - The execution interval is based on a fixed frequency and is independent of the actual execution time of the task. For example, if a command is set to execute every 5 minutes and the task takes 2 minutes to complete, the next execution starts 3 minutes after the task is completed.
    //     - The task is not executed immediately upon creation. For example, if a command is set to execute every 5 minutes, the command is not executed immediately when the task is created. Instead, execution starts 5 minutes after the task is created.
    // 
    // - One-time execution at a specified time: The command is executed once at the specified time and time zone. The format is `at(yyyy-MM-dd HH:mm:ss <time zone>)`. If no time zone is specified, the default is UTC. The following three time zone formats are supported:
    //     - Full time zone name: For example, `Asia/Shanghai` (China/Shanghai time) or `America/Los_Angeles` (US/Los Angeles time).
    //     - GMT offset from Greenwich Mean Time: For example, `GMT+8:00` (UTC+8) or `GMT-7:00` (UTC-7). When using the GMT format, leading zeros are not supported for the hour value.
    //     - Time zone abbreviation: Only UTC (Coordinated Universal Time) is supported.
    // 
    //   For example, to execute a command once at 13:15:30 on June 6, 2022 in China/Shanghai time, use `at(2022-06-06 13:15:30 Asia/Shanghai)`. To execute a command once at 13:15:30 on June 6, 2022 in UTC-7, use `at(2022-06-06 13:15:30 GMT-7:00)`.
    // 
    // - Clock-based scheduled execution (based on Cron expressions): Based on Cron expressions, commands are executed according to the scheduled task settings. The format is `<seconds> <minutes> <hours> <day of month> <month> <day of week> <year (optional)> <time zone>`, which is `<Cron expression> <time zone>`. The scheduled task execution time is calculated based on the Cron expression in the specified time zone. If no time zone is specified, the default is the internal system time zone of the instance that runs the scheduled task. For more information about Cron expressions, see [Cron expressions](https://help.aliyun.com/document_detail/64769.html). The following three time zone formats are supported:
    //     - Full time zone name: For example, `Asia/Shanghai` (China/Shanghai time) or `America/Los_Angeles` (US/Los Angeles time).
    //     - GMT offset from Greenwich Mean Time: For example, `GMT+8:00` (UTC+8) or `GMT-7:00` (UTC-7). When using the GMT format, leading zeros are not supported for the hour value.
    //     - Time zone abbreviation: Only UTC (Coordinated Universal Time) is supported.
    // 
    //   For example, to execute a command once at 10:15 every day in 2022 in China/Shanghai time, use `0 15 10 ? * * 2022 Asia/Shanghai`. To execute a command every 30 minutes from 10:00 to 11:30 every day in 2022 in UTC+8, use `0 0/30 10-11 * * ? 2022 GMT+8:00`. To execute a command every 5 minutes from 14:00 to 14:55 every day in October every two years starting from 2022 in UTC, use `0 0/5 14 * 10 ? 2022/2 UTC`.
    // 
    //     >The minimum time interval must be greater than or equal to the timeout period of the scheduled task and no less than 10 seconds.
    shared_ptr<string> frequency_ {};
    // The ECS instance ID array. Array length: 1 to 100.
    shared_ptr<vector<string>> instanceId_ {};
    // Specifies whether to retain the command after it is run. Valid values:
    // 
    // - true: The command is retained. You can run it again by calling InvokeCommand. The command counts against the Cloud Assistant command quota.
    // - false: The command is not retained. It is automatically deleted after execution and does not count against the Cloud Assistant command quota.
    // 
    // Default value: false.
    shared_ptr<bool> keepCommand_ {};
    // The bootstrap program for script execution. The value can be up to 1 KB in length.
    shared_ptr<string> launcher_ {};
    // The command name. The name supports all character sets and can be up to 128 characters in length.
    shared_ptr<string> name_ {};
    // The OSS delivery configuration for command execution output.
    // 
    // - Format: oss://${BucketName}/${Prefix}, where ${BucketName} is the name of the destination OSS bucket and ${Prefix} is the directory prefix of the destination.
    shared_ptr<string> ossOutputDelivery_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key-value pairs of custom parameters to pass in when the command contains custom parameters. For example, if the command content is `echo {{name}}`, you can use the `Parameter` parameter to pass in the key-value pair `{"name":"Jack"}`. The custom parameter automatically replaces the variable value `name`, and the command that is actually run is `echo Jack`.
    Darabonba::Json parameters_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The execution mode of the command. Valid values:
    // 
    // - Once: immediately executes the command.
    // - Period: executes the command on a schedule. If you set this parameter to `Period`, you must also specify the `Frequency` parameter.
    // - NextRebootOnly: automatically executes the command the next time the instance starts.
    // - EveryReboot: automatically executes the command every time the instance starts.
    // - DryRun: performs only a dry run of the request without actually executing the command. The dry run checks items such as request parameters, instance execution environment, and Cloud Assistant Agent status.
    // 
    // Default value:
    // - If the `Frequency` parameter is not specified, the default value is `Once`.
    // - If the `Frequency` parameter is specified, the command is executed as `Period` regardless of whether this parameter is set.
    // 
    // Precautions:
    // - You can call [StopInvocation](https://help.aliyun.com/document_detail/64838.html) to stop a pending or scheduled command.
    // - If this parameter is set to `Period` or `EveryReboot`, you can call [DescribeInvocationResults](https://help.aliyun.com/document_detail/64845.html) and specify `IncludeHistory=true` to view the historical records of scheduled command executions.
    shared_ptr<string> repeatMode_ {};
    // The ID of the resource group for the command execution. When you specify this parameter:
    // 
    // - If the ECS instance specified by InstanceId belongs to a non-default resource group, the ECS instance must belong to this resource group.
    // 
    // - You can filter command execution results by specifying this parameter when you call [DescribeInvocations](https://help.aliyun.com/document_detail/64840.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/64845.html).
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags that are used to filter instances. Array length: 0 to 20. You can run commands on instances that have the same tags in batches without specifying InstanceId.
    shared_ptr<vector<RunCommandRequest::ResourceTag>> resourceTag_ {};
    // The tags. Array length: 0 to 20.
    shared_ptr<vector<RunCommandRequest::Tag>> tag_ {};
    // The mode in which the task is stopped (manually stopped or interrupted due to timeout). Valid values:
    shared_ptr<string> terminationMode_ {};
    // > This parameter is deprecated and has no effect if specified.
    shared_ptr<bool> timed_ {};
    // The timeout period for the command execution. Unit: seconds.
    // 
    // A timeout occurs when the command cannot run due to process issues, missing modules, or missing Cloud Assistant Agent. After a timeout, the command process is forcefully terminated.
    // 
    // Default value: 60.
    shared_ptr<int64_t> timeout_ {};
    // The type of the command. Valid values:
    // 
    // - RunBatScript: Bat command for Windows instances.
    // - RunPowerShellScript: PowerShell command for Windows instances.
    // - RunShellScript: Shell command for Linux instances.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The username that is used to run the command on the ECS instance. The username can be up to 255 characters in length.
    // 
    // - For Linux ECS instances, the command is run by the root user by default.
    // - For Windows ECS instances, the command is run by the System user by default.
    // 
    // You can also specify another existing user of the instance to run the command. Running Cloud Assistant commands as a regular user is more secure. For more information, see [Run Cloud Assistant commands as a regular user](https://help.aliyun.com/document_detail/203771.html).
    shared_ptr<string> username_ {};
    // The name of the password for the user who runs the command on a Windows instance. The value can be up to 255 characters in length.
    shared_ptr<string> windowsPasswordName_ {};
    // The working directory of the command on the ECS instance. Maximum length: 200 characters.
    // 
    // Default value:
    // 
    // - For Linux instances, the default directory is the home directory of the root user, which is `/root`.
    // - For Windows instances, the default directory is the directory where the Cloud Assistant Agent process resides, such as `C:\\Windows\\System32`.
    shared_ptr<string> workingDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
