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
      // The tag key of the command execute. If this value is specified, it cannot be an empty string.
      // 
      // When you use a single tag to filter resources, the resource count under that tag cannot exceed 1,000. When you use multiple tags to filter resources, the resource count of resources that are attached to all specified tags cannot exceed 1,000. If the resource count exceeds 1,000, use the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation to query resources.
      // 
      // The key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the command execution. The value can be an empty string.
      // 
      // The value can be up to 128 characters in length and cannot contain `http://` or `https://`.
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
      // The tag key used to filter instances.
      // 
      // Precautions:
      // 
      // - This parameter conflicts with the InstanceId parameter. They cannot be specified at the same time.
      // 
      // - If this value is specified, it cannot be an empty string.
      // 
      // - The number of instances under the tag cannot exceed the quantity limit of InstanceId.N. If the number of instances exceeds the limit, control the number of instances by adding batch tags, such as batch: b1.
      // 
      // - The key can be up to 64 characters in length and cannot start with aliyun or acs:, and cannot contain http:// or https://.
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
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. **ClientToken** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The command content. The command content can be plaintext or Base64-encoded. Note the following items:
    // 
    // - The command content cannot exceed 24 KB after Base64 encoding. You can use `KeepCommand` to specify whether to retain the command.
    // - If the command content is Base64-encoded, you must set `ContentEncoding=Base64`.
    // - When `EnableParameter=true` is specified, the custom parameter feature is enabled in the command content:
    //     - Define custom parameters by enclosing them in `{{}}`. Spaces and line breaks before and after the parameter name within `{{}}` are ignored.
    //     - The number of custom parameters cannot exceed 20.
    //     - Custom parameter names can contain a-zA-Z0-9-_ combinations. The acs:: prefix for specifying non-built-in environment parameters is not supported. Other characters are not supported. Parameter names are case-insensitive.
    //     - Each custom parameter name cannot exceed 64 bytes.
    // 
    // - You can specify built-in environment parameters as custom parameters. When running the command, you do not need to manually assign values to these parameters because Cloud Assistant automatically replaces them with the corresponding values. The following built-in environment parameters are supported:
    //     - `{{ACS::RegionId}}`: The region ID.
    //     - `{{ACS::AccountId}}`: The Alibaba Cloud account ID.
    //     - `{{ACS::InstanceId}}`: The instance ID. When a command is sent to multiple instances and you want to use `{{ACS::InstanceId}}` as a built-in environment parameter, ensure that the Cloud Assistant Agent version is no earlier than:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    //     - `{{ACS::InstanceName}}`: The instance name. When a command is sent to multiple instances and you want to use `{{ACS::InstanceName}}` as a built-in environment parameter, ensure that the Cloud Assistant Agent version is no earlier than:
    //         - Linux: 2.2.3.344
    //         - Windows: 2.1.3.344
    //     - `{{ACS::InvokeId}}`: The invocation ID. To use `{{ACS::InvokeId}}` as a built-in environment parameter, ensure that the Cloud Assistant Agent version is no earlier than:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    //     - `{{ACS::CommandId}}`: The command ID. When running a command by calling this operation and you want to use `{{ACS::CommandId}}` as a built-in environment parameter, ensure that the Cloud Assistant Agent version is no earlier than: 
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    // 
    // This parameter is required.
    shared_ptr<string> commandContent_ {};
    // The container ID. Only 64-bit hexadecimal strings are supported. The `docker://`, `containerd://`, or `cri-o://` prefix can be used to explicitly specify the container runtime.
    // 
    // Precautions:
    // - If this parameter is specified, Cloud Assistant runs the script in the specified container on the instance.
    // - If this parameter is specified, the command can only be run on Linux instances with Cloud Assistant Agent version 2.2.3.344 or later.
    // - If this parameter is specified, the `Username` and `WorkingDir` parameters do not take effect. The command is run only as the default container user in the default working directory of the container. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    // > Only Shell scripts are supported in Linux containers. Specifying an interpreter at the beginning of the script in the format of `#!/usr/bin/python` is not supported. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    shared_ptr<string> containerId_ {};
    // The container name.
    // 
    // Precautions:
    // - If this parameter is specified, Cloud Assistant runs the script in the specified container on the instance.
    // - If this parameter is specified, the command can only be run on Linux instances with Cloud Assistant Agent version 2.2.3.344 or later.
    // - If this parameter is specified, the `Username` and `WorkingDir` parameters do not take effect. The command is run only as the default container user in the default working directory of the container. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    // > Only Shell scripts are supported in Linux containers. Specifying an interpreter at the beginning of the script in the format of `#!/usr/bin/python` is not supported. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    shared_ptr<string> containerName_ {};
    // The encoding method of the command content (`CommandContent`). Valid values (case-insensitive):
    // 
    // - PlainText: no encoding. The content is transmitted in plaintext.
    // - Base64: Base64 encoding.
    // 
    // Default value: PlainText. Invalid values are treated as PlainText.
    shared_ptr<string> contentEncoding_ {};
    // The command description. All character sets are supported. The description cannot exceed 512 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether the command contains custom parameters.
    // 
    // Default value: false.
    shared_ptr<bool> enableParameter_ {};
    // The schedule for running the command. Three scheduling methods are supported: execution at fixed intervals (based on Rate expressions), one-time execution at a specified time, and clock-based scheduled execution (based on Cron expressions).
    // 
    // - Execution at fixed intervals: Based on Rate expressions, the command is run at the specified interval. The interval can be specified in seconds (s), minutes (m), hours (h), or days (d). This method is applicable to scenarios where tasks are run at fixed intervals. Format: `rate(<interval value><interval unit>)`. For example, to run a command every 5 minutes, use `rate(5m)`. The following limits apply to fixed-interval execution:
    //     - The interval must be no greater than 7 days and no less than 60 seconds, and must be greater than the timeout period of the scheduled task.
    //     - The interval is based on a fixed frequency and is not related to the actual execution time of the task. For example, if a command is set to run every 5 minutes and the task takes 2 minutes to complete, the next round starts 3 minutes after the task is completed.
    //     - The task is not run immediately upon creation. For example, if a command is set to run every 5 minutes, the command is not run immediately when the task is created. Instead, execution starts 5 minutes after the task is created.
    // 
    // - One-time execution at a specified time: The command is run once at the specified time zone and time point. Format: `at(yyyy-MM-dd HH:mm:ss <time zone>)`. If no time zone is specified, UTC is used by default. The time zone supports the following three formats:
    //     - Full time zone name: such as `Asia/Shanghai` (China/Shanghai time) or `America/Los_Angeles` (US/Los Angeles time).
    //     - Time zone offset from Greenwich Mean Time: such as `GMT+8:00` (East 8th time zone) or `GMT-7:00` (West 7th time zone). When using the GMT format, leading zeros are not supported in the hour field.
    //     - Time zone abbreviation: Only UTC (Coordinated Universal Time) is supported.
    // 
    //   For example, to run a command once at 13:15:30 on June 6, 2022 in China/Shanghai time, use: `at(2022-06-06 13:15:30 Asia/Shanghai)`. To run a command once at 13:15:30 on June 6, 2022 in the West 7th time zone, use: `at(2022-06-06 13:15:30 GMT-7:00)`.
    // 
    // - Clock-based scheduled execution (based on Cron expressions): Based on Cron expressions, the command is run according to the scheduled task settings. Format: `<seconds> <minutes> <hours> <day of month> <month> <day of week> <year (optional)> <time zone>`, i.e., `<Cron expression> <time zone>`. The scheduled task execution time is calculated based on the Cron expression in the specified time zone. If no time zone is specified, the system time zone of the instance running the scheduled task is used by default. For more information about Cron expressions, see [Cron expressions](https://help.aliyun.com/document_detail/64769.html). The time zone supports the following three formats:
    //     - Full time zone name: such as `Asia/Shanghai` (China/Shanghai time) or `America/Los_Angeles` (US/Los Angeles time).
    //     - Time zone offset from Greenwich Mean Time: such as `GMT+8:00` (East 8th time zone) or `GMT-7:00` (West 7th time zone). When using the GMT format, leading zeros are not supported in the hour field.
    //     - Time zone abbreviation: Only UTC (Coordinated Universal Time) is supported.
    //   For example, to run a command once every day at 10:15 AM in China/Shanghai time in 2022, use `0 15 10 ? * * 2022 Asia/Shanghai`. To run a command every 30 minutes from 10:00 AM to 11:30 AM every day in the East 8th time zone in 2022, use `0 0/30 10-11 * * ? 2022 GMT+8:00`. To run a command every 5 minutes from 2:00 PM to 2:55 PM every day in October every two years starting from 2022 in UTC, use `0 0/5 14 * 10 ? 2022/2 UTC`.
    // 
    //     > The minimum interval must be greater than or equal to the timeout period of the scheduled task and no less than 10 seconds.
    shared_ptr<string> frequency_ {};
    // The instance ID array of ECS instances. Array length: 1 to 100.
    // 
    // If any of the specified instances does not meet the execution conditions, you must reselect the instances.
    // 
    // You can also request a quota increase in Quota Center (quota name: Maximum number of instances supported for command execute).
    shared_ptr<vector<string>> instanceId_ {};
    // Specifies whether to retain the command after execution. Valid values:
    // 
    // - true: retains the command. The command can be run again by calling InvokeCommand. This counts toward the Cloud Assistant command retention quota.
    // - false: does not retain the command. The command is automatically deleted after execution and does not count toward the Cloud Assistant command retention quota.
    // 
    // Default value: false.
    shared_ptr<bool> keepCommand_ {};
    // The bootstrap program for script execution. The value cannot exceed 1 KB in length.
    shared_ptr<string> launcher_ {};
    // The command name. All character sets are supported. The name cannot exceed 128 characters in length.
    shared_ptr<string> name_ {};
    // The OSS delivery configuration for command execution output.
    // 
    // - Format: oss://${BucketName}/${Prefix}, where ${BucketName} is the name of the destination OSS bucket and ${Prefix} is the directory prefix for delivery.
    shared_ptr<string> ossOutputDelivery_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key-value pairs of custom parameters to pass in when running a command that contains custom parameters. For example, if the command content is `echo {{name}}`, you can pass in the key-value pair `{"name":"Jack"}` through the Parameter parameter. The custom parameter automatically replaces the variable value `name`, and the actual command executed is `echo Jack`.
    // 
    // The number of custom parameters ranges from 0 to 10. Note the following items:
    // 
    // - Keys cannot be empty strings and can contain up to 64 characters.
    // - Values can be empty strings.
    // - After custom parameters and the original command content are Base64-encoded, the total size cannot exceed 24 KB. You can use `KeepCommand` to specify whether to retain the command.
    // - The set of custom parameter names must be a subset of the parameter set defined when the command was created. For parameters that are not passed in, you can use empty strings as substitutes.
    // 
    // Default value: empty, which disables custom parameters.
    Darabonba::Json parameters_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The execution mode of the command. Valid values:
    // 
    // - Once: immediately runs the command.
    // - Period: runs the command on a schedule. When this parameter is set to `Period`, you must also specify the `Frequency` parameter.
    // - NextRebootOnly: automatically runs the command the next time the instance starts.
    // - EveryReboot: automatically runs the command every time the instance starts.
    // - DryRun: performs a dry run of the request without actually running the command. Checks include request parameters, instance execution environment, and Cloud Assistant Agent running status.
    // 
    // Default values:
    // - When the `Frequency` parameter is not specified, the default value is `Once`.
    // - When the `Frequency` parameter is specified, the command is processed as `Period` regardless of whether this parameter is set.
    // 
    // Precautions:
    // - You can call [StopInvocation](https://help.aliyun.com/document_detail/64838.html) to stop a pending or scheduled command.
    // - When this parameter is set to `Period` or `EveryReboot`, you can call [DescribeInvocationResults](https://help.aliyun.com/document_detail/64845.html) and specify `IncludeHistory=true` to view the execution history of the scheduled command.
    shared_ptr<string> repeatMode_ {};
    // The resource group ID for the command execution. When this parameter is specified:
    // 
    // - If the ECS instance corresponding to InstanceId belongs to a non-default resource group, the ECS instance must belong to this resource group.
    // 
    // - You can filter the corresponding command execution results by specifying this parameter (by calling [DescribeInvocations](https://help.aliyun.com/document_detail/64840.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/64845.html)).
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags used to filter instances. Array length: 0 to 20. You can run commands in batches on instances with the same tags without specifying InstanceId.
    shared_ptr<vector<RunCommandRequest::ResourceTag>> resourceTag_ {};
    // The tag pairs. Array length: 0 to 20.
    shared_ptr<vector<RunCommandRequest::Tag>> tag_ {};
    // The mode for stopping the task (manual stop or timeout interruption). Valid values:
    // - Process: stops the current script process.
    // - ProcessTree: stops the current process tree (the collection of the script process and all child processes it created).
    shared_ptr<string> terminationMode_ {};
    // **[Deprecated]** This parameter is deprecated. Passing in this parameter has no effect.
    shared_ptr<bool> timed_ {};
    // The timeout period for command execution. Unit: seconds.
    // 
    // A timeout occurs when a command cannot be run because of process issues, missing modules, or missing Cloud Assistant Agent. When a timeout occurs, the command process is forcefully terminated.
    // 
    // Default value: 60.
    shared_ptr<int64_t> timeout_ {};
    // The command type. Valid values:
    // 
    // - RunBatScript: Bat commands for Windows instances.
    // - RunPowerShellScript: PowerShell commands for Windows instances.
    // - RunShellScript: Shell commands for Linux instances.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The username for running the command on the ECS instance. The value cannot exceed 255 characters in length.
    // 
    // - For Linux ECS instances, commands are run as the root user by default.
    // - For Windows ECS instances, commands are run as the System user by default.
    // 
    // You can also specify another existing user on the instance to run the command. Running Cloud Assistant commands as a regular user is more secure. For more information, see [Configure a regular user to run Cloud Assistant commands](https://help.aliyun.com/document_detail/203771.html).
    shared_ptr<string> username_ {};
    // The name of the password for the user who executes the command on a Windows instance. The value cannot exceed 255 characters in length.
    // 
    // When you want to execute a command as a non-default user (System) on a Windows instance, you must specify both `Username` and this parameter. To reduce the risk of password leaks, store the plaintext password in the parameter repository of operations management, and pass in only the password name here. For more information, see [Encryption parameters](https://help.aliyun.com/document_detail/186828.html) and [Settings for a regular user to execute Cloud Assistant commands](https://help.aliyun.com/document_detail/203771.html).
    // 
    // > This parameter is not required when you execute commands as the root user on a Linux instance or the System user on a Windows instance.
    shared_ptr<string> windowsPasswordName_ {};
    // The working directory of the command on the ECS instance. The value cannot exceed 200 characters in length.
    // 
    // Default values:
    // 
    // - For Linux instances, the default directory is the home directory of the root user, which is `/root`.
    // - For Windows instances, the default directory is the directory where the Cloud Assistant Agent process is located, such as `C:\\Windows\\System32`.
    shared_ptr<string> workingDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
