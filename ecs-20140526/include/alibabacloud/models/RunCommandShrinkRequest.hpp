// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMANDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMANDSHRINKREQUEST_HPP_
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
  class RunCommandShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommandShrinkRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(Parameters, parametersShrink_);
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
    friend void from_json(const Darabonba::Json& j, RunCommandShrinkRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(Parameters, parametersShrink_);
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
    RunCommandShrinkRequest() = default ;
    RunCommandShrinkRequest(const RunCommandShrinkRequest &) = default ;
    RunCommandShrinkRequest(RunCommandShrinkRequest &&) = default ;
    RunCommandShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommandShrinkRequest() = default ;
    RunCommandShrinkRequest& operator=(const RunCommandShrinkRequest &) = default ;
    RunCommandShrinkRequest& operator=(RunCommandShrinkRequest &&) = default ;
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
      // The tag key for the command execution. The key cannot be an empty string.
      // 
      // The key can be up to 64 characters long and cannot start with `aliyun` or `acs:`. It also cannot contain `http://` or `https://`.
      // 
      // The value can be up to 64 characters long and cannot start with `aliyun` or `acs:` or contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value for the command execution. The value can be an empty string.
      // 
      // The value can be up to 128 characters long and cannot contain `http://` or `https://`.
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
      // 
      // Notes:
      // 
      // - You cannot specify both this parameter and the InstanceId parameter.
      // 
      // - The tag key cannot be an empty string.
      // 
      // - The number of instances matching the specified tag cannot exceed the per-execution instance limit (100 by default). If the number of matching instances exceeds this limit, you can use additional tags, such as `batch:b1`, to refine the selection.
      // 
      // - The value can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It also cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value that is used to filter instances.
      // 
      // Notes:
      // 
      // - The value can be an empty string.
      // 
      // - The value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commandContent_ == nullptr && this->containerId_ == nullptr && this->containerName_ == nullptr && this->contentEncoding_ == nullptr && this->description_ == nullptr
        && this->enableParameter_ == nullptr && this->frequency_ == nullptr && this->instanceId_ == nullptr && this->keepCommand_ == nullptr && this->launcher_ == nullptr
        && this->name_ == nullptr && this->ossOutputDelivery_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->parametersShrink_ == nullptr
        && this->regionId_ == nullptr && this->repeatMode_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->resourceTag_ == nullptr && this->tag_ == nullptr && this->terminationMode_ == nullptr && this->timed_ == nullptr && this->timeout_ == nullptr
        && this->type_ == nullptr && this->username_ == nullptr && this->windowsPasswordName_ == nullptr && this->workingDir_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunCommandShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline RunCommandShrinkRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline RunCommandShrinkRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline RunCommandShrinkRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline RunCommandShrinkRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunCommandShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableParameter Field Functions 
    bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
    void deleteEnableParameter() { this->enableParameter_ = nullptr;};
    inline bool getEnableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
    inline RunCommandShrinkRequest& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline RunCommandShrinkRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline RunCommandShrinkRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline RunCommandShrinkRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // keepCommand Field Functions 
    bool hasKeepCommand() const { return this->keepCommand_ != nullptr;};
    void deleteKeepCommand() { this->keepCommand_ = nullptr;};
    inline bool getKeepCommand() const { DARABONBA_PTR_GET_DEFAULT(keepCommand_, false) };
    inline RunCommandShrinkRequest& setKeepCommand(bool keepCommand) { DARABONBA_PTR_SET_VALUE(keepCommand_, keepCommand) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string getLauncher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline RunCommandShrinkRequest& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RunCommandShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossOutputDelivery Field Functions 
    bool hasOssOutputDelivery() const { return this->ossOutputDelivery_ != nullptr;};
    void deleteOssOutputDelivery() { this->ossOutputDelivery_ = nullptr;};
    inline string getOssOutputDelivery() const { DARABONBA_PTR_GET_DEFAULT(ossOutputDelivery_, "") };
    inline RunCommandShrinkRequest& setOssOutputDelivery(string ossOutputDelivery) { DARABONBA_PTR_SET_VALUE(ossOutputDelivery_, ossOutputDelivery) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RunCommandShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RunCommandShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string getParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline RunCommandShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunCommandShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline string getRepeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
    inline RunCommandShrinkRequest& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunCommandShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RunCommandShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RunCommandShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceTag Field Functions 
    bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
    void deleteResourceTag() { this->resourceTag_ = nullptr;};
    inline const vector<RunCommandShrinkRequest::ResourceTag> & getResourceTag() const { DARABONBA_PTR_GET_CONST(resourceTag_, vector<RunCommandShrinkRequest::ResourceTag>) };
    inline vector<RunCommandShrinkRequest::ResourceTag> getResourceTag() { DARABONBA_PTR_GET(resourceTag_, vector<RunCommandShrinkRequest::ResourceTag>) };
    inline RunCommandShrinkRequest& setResourceTag(const vector<RunCommandShrinkRequest::ResourceTag> & resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };
    inline RunCommandShrinkRequest& setResourceTag(vector<RunCommandShrinkRequest::ResourceTag> && resourceTag) { DARABONBA_PTR_SET_RVALUE(resourceTag_, resourceTag) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<RunCommandShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<RunCommandShrinkRequest::Tag>) };
    inline vector<RunCommandShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<RunCommandShrinkRequest::Tag>) };
    inline RunCommandShrinkRequest& setTag(const vector<RunCommandShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline RunCommandShrinkRequest& setTag(vector<RunCommandShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // terminationMode Field Functions 
    bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
    void deleteTerminationMode() { this->terminationMode_ = nullptr;};
    inline string getTerminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
    inline RunCommandShrinkRequest& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


    // timed Field Functions 
    bool hasTimed() const { return this->timed_ != nullptr;};
    void deleteTimed() { this->timed_ = nullptr;};
    inline bool getTimed() const { DARABONBA_PTR_GET_DEFAULT(timed_, false) };
    inline RunCommandShrinkRequest& setTimed(bool timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline RunCommandShrinkRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RunCommandShrinkRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline RunCommandShrinkRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // windowsPasswordName Field Functions 
    bool hasWindowsPasswordName() const { return this->windowsPasswordName_ != nullptr;};
    void deleteWindowsPasswordName() { this->windowsPasswordName_ = nullptr;};
    inline string getWindowsPasswordName() const { DARABONBA_PTR_GET_DEFAULT(windowsPasswordName_, "") };
    inline RunCommandShrinkRequest& setWindowsPasswordName(string windowsPasswordName) { DARABONBA_PTR_SET_VALUE(windowsPasswordName_, windowsPasswordName) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline RunCommandShrinkRequest& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // A client-generated token that is used to ensure the idempotence of the request. You must make sure that the token is unique among different requests. The `ClientToken` parameter can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The command content, which can be in plaintext or Base64-encoded. Note the following:
    // 
    // - The size of the Base64-encoded command content is limited to 18 KB if `KeepCommand` is `true`, or 24 KB if `KeepCommand` is `false`.
    // 
    // - If the command content is Base64-encoded, you must set `ContentEncoding` to `Base64`.
    // 
    // - Set `EnableParameter` to `true` to enable the custom parameter feature in the command content.
    // 
    //   - Define custom parameters by using the `{{}}` format. Spaces and line breaks before and after the parameter names within `{{}}` are ignored.
    // 
    //   - You can define up to 20 custom parameters.
    // 
    //   - A custom parameter name can contain only letters, digits, underscores (_), and hyphens (-). The name is case-insensitive and cannot start with `acs::`, which is reserved for built-in environment parameters.
    // 
    //   - A custom parameter name can be up to 64 bytes long.
    // 
    // - You can use built-in environment parameters, which Cloud Assistant automatically replaces with their corresponding values at runtime. The following built-in environment parameters are supported:
    // 
    //   - `{{ACS::RegionId}}`: the region ID.
    // 
    //   - `{{ACS::AccountId}}`: the UID of the Alibaba Cloud account.
    // 
    //   - `{{ACS::InstanceId}}`: the instance ID. To use this parameter on multiple instances, the required Cloud Assistant Agent version is 2.2.3.309 or later for Linux instances, or 2.1.3.309 or later for Windows instances.
    // 
    //     - Linux: 2.2.3.309
    // 
    //     - Windows: 2.1.3.309
    // 
    //   - `{{ACS::InstanceName}}`: the instance name. To use this parameter on multiple instances, the required Cloud Assistant Agent version is 2.2.3.344 or later for Linux instances, or 2.1.3.344 or later for Windows instances.
    // 
    //     - Linux: 2.2.3.344
    // 
    //     - Windows: 2.1.3.344
    // 
    //   - `{{ACS::InvokeId}}`: the invocation ID. To use this parameter, the required Cloud Assistant Agent version is 2.2.3.309 or later for Linux instances, or 2.1.3.309 or later for Windows instances.
    // 
    //     - Linux: 2.2.3.309
    // 
    //     - Windows: 2.1.3.309
    // 
    //   - `{{ACS::CommandId}}`: the command ID. To use this parameter, the required Cloud Assistant Agent version is 2.2.3.309 or later for Linux instances, or 2.1.3.309 or later for Windows instances.
    // 
    //     - Linux: 2.2.3.309
    // 
    //     - Windows: 2.1.3.309
    // 
    // This parameter is required.
    shared_ptr<string> commandContent_ {};
    // The ID of the container. The ID must be a 64-bit hexadecimal string. You can add the `docker://`, `containerd://`, or `cri-o://` prefix to explicitly specify the container runtime.
    // 
    // Notes:
    // 
    // - If you specify this parameter, Cloud Assistant runs the script in the specified container of the instance.
    // 
    // - This parameter is supported only on Linux instances with Cloud Assistant Agent version 2.2.3.344 or later.
    // 
    // - If you specify this parameter, the specified `Username` and `WorkingDir` parameters are ignored. The command is run only by the default user in the default working directory of the container. For more information, see [Run commands in a container by using Cloud Assistant](https://help.aliyun.com/document_detail/456641.html).
    // 
    // > In Linux containers, you can run only Shell scripts. You cannot use commands such as `#!/usr/bin/python` at the beginning of a script to specify an interpreter. For more information, see [Run commands in a container by using Cloud Assistant](https://help.aliyun.com/document_detail/456641.html).
    shared_ptr<string> containerId_ {};
    // The name of the container.
    // 
    // Notes:
    // 
    // - If you specify this parameter, Cloud Assistant runs the script in the specified container of the instance.
    // 
    // - This parameter is supported only on Linux instances with Cloud Assistant Agent version 2.2.3.344 or later.
    // 
    // - If you specify this parameter, the specified `Username` and `WorkingDir` parameters are ignored. The command is run only by the default user in the default working directory of the container. For more information, see [Run commands in a container by using Cloud Assistant](https://help.aliyun.com/document_detail/456641.html).
    // 
    // > In Linux containers, you can run only Shell scripts. You cannot use commands such as `#!/usr/bin/python` at the beginning of a script to specify an interpreter. For more information, see [Run commands in a container by using Cloud Assistant](https://help.aliyun.com/document_detail/456641.html).
    shared_ptr<string> containerName_ {};
    // The encoding mode of the command content (`CommandContent`). Valid values (case-insensitive):
    // 
    // - `PlainText`: The command content is not encoded and is transmitted in plaintext.
    // 
    // - `Base64`: The command content is Base64-encoded.
    // 
    // Default value: `PlainText`. If you specify an invalid value, the value is automatically set to `PlainText`.
    shared_ptr<string> contentEncoding_ {};
    // The description of the command. It can be up to 512 characters long and supports all character sets.
    shared_ptr<string> description_ {};
    // Specifies whether to use custom parameters in the command.
    // 
    // Default value: false.
    shared_ptr<bool> enableParameter_ {};
    // The schedule for the command. You can specify a rate expression, an at expression for one-time execution, or a cron expression.
    // 
    // - **Fixed-interval execution**: Runs the command at fixed intervals defined by a rate expression. You can specify the interval in seconds (s), minutes (m), hours (h), or days (d). This method is suitable for tasks that must be run at fixed intervals. The format is `rate(<value><unit>)`. For example, to run a command every 5 minutes, use `rate(5m)`. The following limits apply to this method:
    // 
    //   - The interval must be in the range of 60 seconds to 7 days, and must be longer than the timeout of the scheduled task.
    // 
    //   - The interval is fixed and starts from the beginning of the previous execution, not from its completion.
    // 
    //   - The task does not immediately run after it is created. For example, if you set an interval of 5 minutes, the first run starts 5 minutes after the task is created.
    // 
    // - **One-time execution**: Run the command once at a specified time and in a specified time zone. The format is `at(yyyy-MM-dd HH:mm:ss <time_zone>)`. If you do not specify a time zone, UTC is used by default. The following time zone formats are supported:
    // 
    //   - Full time zone name, such as `Asia/Shanghai` or `America/Los_Angeles`.
    // 
    //   - Offset from GMT, such as `GMT+8:00` or `GMT-7:00`. When you use the GMT format, you cannot add a leading zero to the hour.
    // 
    //   - Time zone abbreviation. Only `UTC` is supported.
    // 
    //   Example 1: To run a task at 13:15:30 on June 6, 2022 in the `Asia/Shanghai` time zone, use `at(2022-06-06 13:15:30 Asia/Shanghai)`. Example 2: To run a task at 13:15:30 on June 6, 2022 in the `GMT-7:00` time zone, use `at(2022-06-06 13:15:30 GMT-7:00)`.
    // 
    // - **Scheduled execution based on a cron expression**: Runs the command on a schedule defined by a cron expression. The format is `<second> <minute> <hour> <day_of_month> <month> <day_of_week> <year (optional)> <time_zone>`, or `<cron_expression> <time_zone>`. The task is run based on the cron expression in the specified time zone. If you do not specify a time zone, the system time zone of the instance where the task is run is used by default. For more information about cron expressions, see [Cron expressions](https://help.aliyun.com/document_detail/64769.html). The following time zone formats are supported:
    // 
    //   - Full time zone name, such as `Asia/Shanghai` or `America/Los_Angeles`.
    // 
    //   - Offset from GMT, such as `GMT+8:00` or `GMT-7:00`. When you use the GMT format, you cannot add a leading zero to the hour.
    // 
    //   - Time zone abbreviation. Only `UTC` is supported.
    //     For example, to run a command at 10:15 every day in 2022 in the `Asia/Shanghai` time zone, use `0 15 10 ? * * 2022 Asia/Shanghai`. To run a command every 30 minutes from 10:00 to 11:30 every day in 2022 in the `GMT+8:00` time zone, use `0 0/30 10-11 * * ? 2022 GMT+8:00`. To run a command every 5 minutes from 14:00 to 14:55 every day in October of every two years starting from 2022 in `UTC`, use `0 0/5 14 * 10 ? 2022/2 UTC`.
    // 
    //   > The minimum interval must be greater than or equal to the timeout of the scheduled task, and cannot be less than 10 seconds.
    shared_ptr<string> frequency_ {};
    // The IDs of the ECS instances on which to run the command. You can specify from 1 to 100 instance IDs.
    // 
    // If any specified instance does not meet the execution requirements, the entire operation fails.
    // 
    // You can apply for a quota increase in Quota Center. The quota is named Maximum number of instances supported per command execution.
    shared_ptr<vector<string>> instanceId_ {};
    // Specifies whether to save the command after it is run. Valid values:
    // 
    // - `true`: Saves the command. You can then re-run it by calling InvokeCommand. Saved commands count towards your Cloud Assistant command quota.
    // 
    // - `false`: Does not save the command. The command is deleted after execution and does not count towards your quota.
    // 
    // Default value: false.
    shared_ptr<bool> keepCommand_ {};
    // The launcher that is used to run the script. The value can be up to 1 KB in length.
    shared_ptr<string> launcher_ {};
    // The name of the command. It can be up to 128 characters long and supports all character sets.
    shared_ptr<string> name_ {};
    // The OSS delivery configuration for the command output.
    // 
    // - Format: oss\\://${BucketName}/${Prefix}, where ${BucketName} is the name of the destination OSS bucket and ${Prefix} is the destination prefix.
    shared_ptr<string> ossOutputDelivery_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key-value pairs for custom parameters. For example, if `CommandContent` is `echo {{name}}`, setting `Parameters` to `{"name":"Jack"}` results in the command `echo Jack` being run.
    // 
    // You can specify 0 to 10 key-value pairs. Note the following:
    // 
    // - The key cannot be an empty string and can be up to 64 characters in length.
    // 
    // - The value can be an empty string.
    // 
    // - After Base64 encoding, the total size of the custom parameters and the original command content is limited to 18 KB if `KeepCommand` is `true`, or 24 KB if `KeepCommand` is `false`.
    // 
    // - The set of custom parameter names that you specify must be a subset of the parameters defined in `CommandContent`. The value of an omitted parameter defaults to an empty string.
    // 
    // By default, this parameter is empty, which indicates that no custom parameters are used.
    shared_ptr<string> parametersShrink_ {};
    // The ID of the region. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the latest Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The execution mode of the command. Valid values:
    // 
    // - `Once`: The command is immediately run.
    // 
    // - `Period`: Runs the command as a scheduled task. This mode requires the `Frequency` parameter.
    // 
    // - `NextRebootOnly`: The command is automatically run the next time the instance starts.
    // 
    // - `EveryReboot`: The command is automatically run every time the instance starts.
    // 
    // - `DryRun`: Performs a dry run to check parameters and the environment without actually running the command.
    // 
    // Default value:
    // 
    // - If the `Frequency` parameter is not specified, the default value is `Once`.
    // 
    // - If `Frequency` is specified, this parameter is automatically set to `Period`.
    // 
    // Notes:
    // 
    // - You can call the [StopInvocation](https://help.aliyun.com/document_detail/64838.html) operation to stop pending or scheduled commands.
    // 
    // - If you set this parameter to `Period` or `EveryReboot`, you can call the [DescribeInvocationResults](https://help.aliyun.com/document_detail/64845.html) operation and set `IncludeHistory=true` to query the historical execution records of the scheduled command.
    shared_ptr<string> repeatMode_ {};
    // The ID of the resource group for the command execution. When you specify this parameter, the following rules apply:
    // 
    // - If an ECS instance specified by `InstanceId` is in a non-default resource group, it must belong to the resource group specified by this parameter.
    // 
    // - You can use this parameter to filter command execution results when you call the [DescribeInvocations](https://help.aliyun.com/document_detail/64840.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/64845.html) operation.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Tags used to filter instances for command execution. This allows you to run the command on all instances with matching tags, as an alternative to specifying instance IDs. The array can contain 0 to 20 tags.
    shared_ptr<vector<RunCommandShrinkRequest::ResourceTag>> resourceTag_ {};
    // An array of tag pairs. The array can contain 0 to 20 tags.
    shared_ptr<vector<RunCommandShrinkRequest::Tag>> tag_ {};
    // The mode for stopping the task when it is manually stopped or times out. Valid values:
    // 
    // - `Process`: Stops the current script process.
    // 
    // - `ProcessTree`: Stops the current process tree. A process tree includes the current script process and all of its subprocesses.
    shared_ptr<string> terminationMode_ {};
    // > This parameter is deprecated and no longer has any effect.
    shared_ptr<bool> timed_ {};
    // The command execution timeout, in seconds.
    // 
    // A timeout forcibly terminates the command process if the command fails to run due to exceptions, such as a process conflict, a missing module, or a disabled Cloud Assistant Agent.
    // 
    // Default value: 60.
    shared_ptr<int64_t> timeout_ {};
    // The type of the command. Valid values:
    // 
    // - `RunBatScript`: Bat commands for Windows instances.
    // 
    // - `RunPowerShellScript`: PowerShell commands for Windows instances.
    // 
    // - `RunShellScript`: Shell commands for Linux instances.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The name of the user that runs the command on the ECS instance. The name can be up to 255 characters in length.
    // 
    // - Default on Linux: `root`.
    // 
    // - Default on Windows: `System`.
    // 
    // You can specify another existing user on the instance to run the command. Running Cloud Assistant commands as a standard user is more secure. For more information, see [Run Cloud Assistant commands as a standard user](https://help.aliyun.com/document_detail/203771.html).
    shared_ptr<string> username_ {};
    // The name of the password of the user that runs the command on a Windows instance. The name can be up to 255 characters in length.
    // 
    // To run a command as a non-default user on a Windows instance, you must specify both `Username` and `WindowsPasswordName`. To reduce the risk of password leaks, we recommend storing the password in OOS Parameter Store and providing the parameter name here. For more information, see [Encryption parameters](https://help.aliyun.com/document_detail/186828.html) and [Run Cloud Assistant commands as a standard user](https://help.aliyun.com/document_detail/203771.html).
    // 
    // > You do not need to specify this parameter when you run a command as the `root` user on a Linux instance or as the `System` user on a Windows instance.
    shared_ptr<string> windowsPasswordName_ {};
    // The working directory for the command on the instance. The path can be up to 200 characters long.
    // 
    // Default values:
    // 
    // - For Linux instances, the default is the home directory of the `root` user (`/root`).
    // 
    // - For Windows instances, the default is the directory of the Cloud Assistant Agent process, such as `C:\\Windows\\System32`.
    shared_ptr<string> workingDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
