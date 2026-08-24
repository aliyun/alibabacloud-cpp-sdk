// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKECOMMANDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INVOKECOMMANDSHRINKREQUEST_HPP_
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
  class InvokeCommandShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeCommandShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommandId, commandId_);
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(Frequency, frequency_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Launcher, launcher_);
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
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeCommandShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommandId, commandId_);
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
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
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(WindowsPasswordName, windowsPasswordName_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    InvokeCommandShrinkRequest() = default ;
    InvokeCommandShrinkRequest(const InvokeCommandShrinkRequest &) = default ;
    InvokeCommandShrinkRequest(InvokeCommandShrinkRequest &&) = default ;
    InvokeCommandShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeCommandShrinkRequest() = default ;
    InvokeCommandShrinkRequest& operator=(const InvokeCommandShrinkRequest &) = default ;
    InvokeCommandShrinkRequest& operator=(InvokeCommandShrinkRequest &&) = default ;
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
      // The tag key of the command execution. Valid values of N: 1 to 20. The tag key cannot be an empty string once specified.
      // 
      // If you use a single tag to filter resources, the resource count with this tag cannot exceed 1,000. If you use multiple tags to filter resources, the resource count with all specified tags attached cannot exceed 1,000. If the resource count exceeds 1,000, execute the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation to query resources.
      // 
      // The tag key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`, or contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the command execution. Valid values of N: 1 to 20. The value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
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
      // - This parameter conflicts with the InstanceId parameter. You cannot specify both parameters at the same time.
      // 
      // - Valid values of N: 1 to 10. The tag key cannot be an empty string once specified.
      // 
      // - The number of instances with the tag cannot exceed the limit of InstanceId.N. If the number of instances exceeds the limit, control the number of instances by adding batch tags, such as batch: b1.
      // 
      // - The tag key can be up to 64 characters in length and cannot start with aliyun or acs:, or contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value used to filter instances.
      // 
      // Precautions:
      // 
      // - Valid values of N: 1 to 10.
      // - The value can be an empty string.
      // - The tag value can be up to 128 characters in length and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commandId_ == nullptr && this->containerId_ == nullptr && this->containerName_ == nullptr && this->frequency_ == nullptr && this->instanceId_ == nullptr
        && this->launcher_ == nullptr && this->ossOutputDelivery_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->parametersShrink_ == nullptr
        && this->regionId_ == nullptr && this->repeatMode_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->resourceTag_ == nullptr && this->tag_ == nullptr && this->terminationMode_ == nullptr && this->timed_ == nullptr && this->timeout_ == nullptr
        && this->username_ == nullptr && this->windowsPasswordName_ == nullptr && this->workingDir_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline InvokeCommandShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandId Field Functions 
    bool hasCommandId() const { return this->commandId_ != nullptr;};
    void deleteCommandId() { this->commandId_ = nullptr;};
    inline string getCommandId() const { DARABONBA_PTR_GET_DEFAULT(commandId_, "") };
    inline InvokeCommandShrinkRequest& setCommandId(string commandId) { DARABONBA_PTR_SET_VALUE(commandId_, commandId) };


    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline string getContainerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, "") };
    inline InvokeCommandShrinkRequest& setContainerId(string containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline InvokeCommandShrinkRequest& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // frequency Field Functions 
    bool hasFrequency() const { return this->frequency_ != nullptr;};
    void deleteFrequency() { this->frequency_ = nullptr;};
    inline string getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, "") };
    inline InvokeCommandShrinkRequest& setFrequency(string frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> getInstanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline InvokeCommandShrinkRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline InvokeCommandShrinkRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string getLauncher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline InvokeCommandShrinkRequest& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // ossOutputDelivery Field Functions 
    bool hasOssOutputDelivery() const { return this->ossOutputDelivery_ != nullptr;};
    void deleteOssOutputDelivery() { this->ossOutputDelivery_ = nullptr;};
    inline string getOssOutputDelivery() const { DARABONBA_PTR_GET_DEFAULT(ossOutputDelivery_, "") };
    inline InvokeCommandShrinkRequest& setOssOutputDelivery(string ossOutputDelivery) { DARABONBA_PTR_SET_VALUE(ossOutputDelivery_, ossOutputDelivery) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline InvokeCommandShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline InvokeCommandShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parametersShrink Field Functions 
    bool hasParametersShrink() const { return this->parametersShrink_ != nullptr;};
    void deleteParametersShrink() { this->parametersShrink_ = nullptr;};
    inline string getParametersShrink() const { DARABONBA_PTR_GET_DEFAULT(parametersShrink_, "") };
    inline InvokeCommandShrinkRequest& setParametersShrink(string parametersShrink) { DARABONBA_PTR_SET_VALUE(parametersShrink_, parametersShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline InvokeCommandShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // repeatMode Field Functions 
    bool hasRepeatMode() const { return this->repeatMode_ != nullptr;};
    void deleteRepeatMode() { this->repeatMode_ = nullptr;};
    inline string getRepeatMode() const { DARABONBA_PTR_GET_DEFAULT(repeatMode_, "") };
    inline InvokeCommandShrinkRequest& setRepeatMode(string repeatMode) { DARABONBA_PTR_SET_VALUE(repeatMode_, repeatMode) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline InvokeCommandShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline InvokeCommandShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline InvokeCommandShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceTag Field Functions 
    bool hasResourceTag() const { return this->resourceTag_ != nullptr;};
    void deleteResourceTag() { this->resourceTag_ = nullptr;};
    inline const vector<InvokeCommandShrinkRequest::ResourceTag> & getResourceTag() const { DARABONBA_PTR_GET_CONST(resourceTag_, vector<InvokeCommandShrinkRequest::ResourceTag>) };
    inline vector<InvokeCommandShrinkRequest::ResourceTag> getResourceTag() { DARABONBA_PTR_GET(resourceTag_, vector<InvokeCommandShrinkRequest::ResourceTag>) };
    inline InvokeCommandShrinkRequest& setResourceTag(const vector<InvokeCommandShrinkRequest::ResourceTag> & resourceTag) { DARABONBA_PTR_SET_VALUE(resourceTag_, resourceTag) };
    inline InvokeCommandShrinkRequest& setResourceTag(vector<InvokeCommandShrinkRequest::ResourceTag> && resourceTag) { DARABONBA_PTR_SET_RVALUE(resourceTag_, resourceTag) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<InvokeCommandShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<InvokeCommandShrinkRequest::Tag>) };
    inline vector<InvokeCommandShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<InvokeCommandShrinkRequest::Tag>) };
    inline InvokeCommandShrinkRequest& setTag(const vector<InvokeCommandShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline InvokeCommandShrinkRequest& setTag(vector<InvokeCommandShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // terminationMode Field Functions 
    bool hasTerminationMode() const { return this->terminationMode_ != nullptr;};
    void deleteTerminationMode() { this->terminationMode_ = nullptr;};
    inline string getTerminationMode() const { DARABONBA_PTR_GET_DEFAULT(terminationMode_, "") };
    inline InvokeCommandShrinkRequest& setTerminationMode(string terminationMode) { DARABONBA_PTR_SET_VALUE(terminationMode_, terminationMode) };


    // timed Field Functions 
    bool hasTimed() const { return this->timed_ != nullptr;};
    void deleteTimed() { this->timed_ = nullptr;};
    inline bool getTimed() const { DARABONBA_PTR_GET_DEFAULT(timed_, false) };
    inline InvokeCommandShrinkRequest& setTimed(bool timed) { DARABONBA_PTR_SET_VALUE(timed_, timed) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline InvokeCommandShrinkRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline InvokeCommandShrinkRequest& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    // windowsPasswordName Field Functions 
    bool hasWindowsPasswordName() const { return this->windowsPasswordName_ != nullptr;};
    void deleteWindowsPasswordName() { this->windowsPasswordName_ = nullptr;};
    inline string getWindowsPasswordName() const { DARABONBA_PTR_GET_DEFAULT(windowsPasswordName_, "") };
    inline InvokeCommandShrinkRequest& setWindowsPasswordName(string windowsPasswordName) { DARABONBA_PTR_SET_VALUE(windowsPasswordName_, windowsPasswordName) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline InvokeCommandShrinkRequest& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The ClientToken value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The command ID. You can call [DescribeCommands](https://help.aliyun.com/document_detail/64843.html) to query all available command IDs. 
    // 
    // >You can run public commands by specifying the command name. For more information, see [View and run Cloud Assistant public commands](https://help.aliyun.com/document_detail/429635.html).
    // 
    // This parameter is required.
    shared_ptr<string> commandId_ {};
    // The container ID. Only 64-bit hexadecimal strings are supported. You can use the `docker://`, `containerd://`, or `cri-o://` prefix to specify the container runtime.
    // 
    // Precautions:
    // - If you specify this parameter, Cloud Assistant executes the script in the specified container of the instance.
    // - If you specify this parameter, the command can only run on Linux instances with Cloud Assistant Agent version 2.2.3.344 or later.
    // 
    //     - To view the Cloud Assistant Agent version, see [Install Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
    //     - To upgrade the Cloud Assistant Agent version, see [Upgrade or disable upgrades for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
    // 
    // - If you specify this parameter, the `Username` parameter specified in this operation and the `WorkingDir` parameter specified in [CreateCommand](https://help.aliyun.com/document_detail/64844.html) do not take effect. The command can only be executed by the default user of the container in the default working directory of the container. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    // - If you specify this parameter, only Shell scripts can be executed in Linux containers. You cannot use a format such as `#!/usr/bin/python` at the beginning of the script to specify an interpreter. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    shared_ptr<string> containerId_ {};
    // The container name.
    // 
    // Precautions:
    // - If you specify this parameter, Cloud Assistant executes the script in the specified container of the instance.
    // - If you specify this parameter, the command can only run on Linux instances with Cloud Assistant Agent version 2.2.3.344 or later.
    // 
    //     - To view the Cloud Assistant Agent version, see [Install Cloud Assistant Agent](https://help.aliyun.com/document_detail/64921.html).
    //     - To upgrade the Cloud Assistant Agent version, see [Upgrade or disable upgrades for Cloud Assistant Agent](https://help.aliyun.com/document_detail/134383.html).
    // - If you specify this parameter, the `Username` parameter specified in this operation and the `WorkingDir` parameter specified in [CreateCommand](https://help.aliyun.com/document_detail/64844.html) do not take effect. The command can only be executed by the default user of the container in the default working directory of the container. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    // - If you specify this parameter, only Shell scripts can be executed in Linux containers. You cannot use a format such as `#!/usr/bin/python` at the beginning of the script to specify an interpreter. For more information, see [Use Cloud Assistant to run commands in containers](https://help.aliyun.com/document_detail/456641.html).
    shared_ptr<string> containerName_ {};
    // The schedule on which the command is executed. Three types of scheduled execution are supported: fixed interval (based on a Rate expression), one-time execution at a specified time, and clock-based scheduling (based on a Cron expression).
    // 
    // - Fixed interval execution: Based on a Rate expression, the command is executed at a set interval. The interval can be specified in seconds (s), minutes (m), hours (h), or days (d). This is suitable for scenarios that require execution at fixed intervals. Format: `rate(<interval value><interval unit>)`. For example, to execute every 5 minutes, use `rate(5m)`. Fixed interval execution has the following limits:
    //     - The interval must not exceed 7 days or be less than 60 seconds, and must be greater than the timeout period of the scheduled task.
    //     - The execution interval is based on a fixed frequency and is unrelated to the actual execution time of the task. For example, if the command is set to execute every 5 minutes and the task takes 2 minutes to complete, the next execution starts 3 minutes after the task completes.
    //     - The task is not executed immediately upon creation. For example, if the command is set to execute every 5 minutes, the first execution starts 5 minutes after the task is created.
    // 
    // - One-time execution at a specified time: The command is executed once at the specified time zone and time. Format: `at(yyyy-MM-dd HH:mm:ss <time zone>)`. If no time zone is specified, UTC is used by default. The time zone supports the following three formats:
    //     - Full time zone name: For example, `Asia/Shanghai` (China/Shanghai time) or `America/Los_Angeles` (US/Los Angeles time).
    //     - Time zone offset from Greenwich Mean Time: For example, `GMT+8:00` (East 8th time zone) or `GMT-7:00` (West 7th time zone). When using GMT format, leading zeros are not supported in the hour field.
    //     - Time zone abbreviation: Only UTC (Coordinated Universal Time) is supported.
    // 
    //   For example, to execute once at 13:15:30 on June 6, 2022 in China/Shanghai time, use: `at(2022-06-06 13:15:30 Asia/Shanghai)`. To execute once at 13:15:30 on June 6, 2022 in the West 7th time zone, use: `at(2022-06-06 13:15:30 GMT-7:00)`.
    // 
    // - Clock-based scheduling (based on a Cron expression): Based on a Cron expression, the command is executed according to the scheduled task settings. Format: `<seconds> <minutes> <hours> <day of month> <month> <day of week> <year (optional)> <time zone>`, that is, `<Cron expression> <time zone>`. The scheduled task execution time is calculated based on the Cron expression in the specified time zone. If no time zone is specified, the system time zone of the instance running the scheduled task is used. For more information about Cron expressions, see [Cron expressions](https://help.aliyun.com/document_detail/64769.html). The time zone supports the following three formats:
    //     - Full time zone name: For example, `Asia/Shanghai` (China/Shanghai time) or `America/Los_Angeles` (US/Los Angeles time).
    //     - Time zone offset from Greenwich Mean Time: For example, `GMT+8:00` (East 8th time zone) or `GMT-7:00` (West 7th time zone). When using GMT format, leading zeros are not supported in the hour field.
    //     - Time zone abbreviation: Only UTC (Coordinated Universal Time) is supported.
    //   For example, to execute once at 10:15 every day in 2022 in China/Shanghai time, use `0 15 10 ? * * 2022 Asia/Shanghai`. To execute every 30 minutes from 10:00 to 11:30 every day in 2022 in the East 8th time zone, use `0 0/30 10-11 * * ? 2022 GMT+8:00`. To execute every 5 minutes from 14:00 to 14:55 every day in October every two years starting from 2022 in UTC, use `0 0/5 14 * 10 ? 2022/2 UTC`.
    // 
    //     >The minimum interval must be greater than or equal to the timeout period of the scheduled task and no less than 10 seconds.
    shared_ptr<string> frequency_ {};
    // The list of instances on which to execute the command. You can specify up to 100 instance IDs. Valid values of N: 1 to 100.
    // 
    // You can also apply for a quota increase in Quota Center (quota name: Maximum number of instances supported for command execution).
    shared_ptr<vector<string>> instanceId_ {};
    // The bootstrap program for script execution. The length cannot exceed 1 KB.
    shared_ptr<string> launcher_ {};
    // The OSS delivery configuration for command execution output.
    // 
    // - Format: oss://${BucketName}/${Prefix}, where ${BucketName} is the name of the OSS bucket to deliver to, and ${Prefix} is the directory prefix to deliver to.
    shared_ptr<string> ossOutputDelivery_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The key-value pairs of custom parameters to pass in when executing the command with the custom parameter feature enabled. The number of custom parameters ranges from 0 to 10.
    // 
    // - Map keys cannot be empty strings and can contain up to 64 characters.
    // - Map values can be empty strings.
    // - After Base64 encoding, the total length of custom parameters and the original command content cannot exceed 24 KB.
    // - The set of custom parameter names must be a subset of the parameter set defined when the command was created. For parameters that are not passed in, you can use an empty string as a substitute.
    // 
    // You can disable custom parameters by not setting this parameter.
    shared_ptr<string> parametersShrink_ {};
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
    // - DryRun: only performs a dry run of the request. The command is not actually executed. The dry run checks request parameters, the instance execution environment, and the Cloud Assistant Agent running status.
    // 
    // Default value:
    // 
    // - If you do not specify the `Frequency` parameter, the default value is `Once`.
    // - If you specify the `Frequency` parameter, the command is executed as `Period` regardless of whether this parameter is set.
    // 
    // Precautions:
    // 
    // - You can call [StopInvocation](https://help.aliyun.com/document_detail/64838.html) to stop a pending or scheduled command.
    // - If you set this parameter to `Period` or `EveryReboot`, you can call [DescribeInvocationResults](https://help.aliyun.com/document_detail/64845.html) and specify `IncludeHistory=true` to view the execution history of the scheduled command.
    shared_ptr<string> repeatMode_ {};
    // The ID of the resource group for the command execution. When you specify this parameter:
    // 
    // - The ECS instance specified by InstanceId must belong to this resource group if the instance is not in the default resource group.
    // 
    // - You can filter command execution results by specifying this parameter (by calling [DescribeInvocations](https://help.aliyun.com/document_detail/64840.html) or [DescribeInvocationResults](https://help.aliyun.com/document_detail/64845.html)).
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags used to filter instances. You can run commands in batches on instances with the same tag without specifying InstanceId.
    shared_ptr<vector<InvokeCommandShrinkRequest::ResourceTag>> resourceTag_ {};
    // The tags.
    shared_ptr<vector<InvokeCommandShrinkRequest::Tag>> tag_ {};
    // The mode for stopping the task (manual stop or timeout interruption). Valid values:
    // - Process: stops the current script process.
    // - ProcessTree: stops the current process tree (the collection of the script process and all child processes it created).
    shared_ptr<string> terminationMode_ {};
    // >This parameter is deprecated and has no effect if specified.
    shared_ptr<bool> timed_ {};
    // The timeout period for the command execution. Unit: seconds.
    // 
    // - The value cannot be less than 10 seconds.
    // 
    // - If the command cannot run due to process issues, missing modules, or missing Cloud Assistant Agent, a timeout occurs. When a timeout occurs, the command process is forcefully terminated.
    // 
    // - If this value is not set, the timeout period specified when the command was created is used.
    // 
    // - This value only applies as the timeout period for this command execution and does not change the timeout period of the command itself.
    shared_ptr<int64_t> timeout_ {};
    // The username used to execute the command on the ECS instance. The length cannot exceed 255 characters.
    // 
    // - For Linux instances, the command is executed as the root user by default.
    // - For Windows instances, the command is executed as the System user by default.
    // 
    // You can also specify another existing user on the instance to execute the command. Executing Cloud Assistant commands as a regular user is more secure. For more information, see [Configure a regular user to run Cloud Assistant commands](https://help.aliyun.com/document_detail/203771.html).
    shared_ptr<string> username_ {};
    // The name of the password for the user who executes the command on a Windows instance. The length cannot exceed 255 characters.
    // 
    // When you want to execute a command as a non-default user (System) on a Windows instance, you must specify both `Username` and this parameter. To reduce the risk of password leaks, the plaintext password must be stored in the parameter repository of CloudOps Orchestration Service. Only the password name is passed in here. For more information, see [Encryption parameters](https://help.aliyun.com/document_detail/186828.html) and [Settings for a regular user to run Cloud Assistant commands](https://help.aliyun.com/document_detail/203771.html).
    // 
    // > This parameter is not required when you execute a command as the root user on a Linux instance or the System user on a Windows instance.
    shared_ptr<string> windowsPasswordName_ {};
    // The directory in which the command is executed on the ECS instance. The length cannot exceed 200 characters.
    // - If this value is not set, the working directory specified when the command was created is used.
    // - This value only applies as the working directory for this command execution and does not change the working directory of the command itself.
    shared_ptr<string> workingDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
