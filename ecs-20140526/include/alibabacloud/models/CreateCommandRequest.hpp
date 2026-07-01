// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMANDREQUEST_HPP_
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
  class CreateCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_TO_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_TO_JSON(Launcher, launcher_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkingDir, workingDir_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CommandContent, commandContent_);
      DARABONBA_PTR_FROM_JSON(ContentEncoding, contentEncoding_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableParameter, enableParameter_);
      DARABONBA_PTR_FROM_JSON(Launcher, launcher_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkingDir, workingDir_);
    };
    CreateCommandRequest() = default ;
    CreateCommandRequest(const CreateCommandRequest &) = default ;
    CreateCommandRequest(CreateCommandRequest &&) = default ;
    CreateCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCommandRequest() = default ;
    CreateCommandRequest& operator=(const CreateCommandRequest &) = default ;
    CreateCommandRequest& operator=(CreateCommandRequest &&) = default ;
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
      // The tag key of the command. Valid values of N: 1 to 20. The tag key cannot be an empty string.
      // 
      // If you use a single tag to filter resources, the resource count with the specified tag cannot exceed 1,000. If you use multiple tags to filter resources, the resource count of resources that have all specified tags attached cannot exceed 1,000. If the resource count exceeds 1,000, use the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation to query resources.
      // 
      // The tag key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the command. Valid values of N: 1 to 20. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->commandContent_ == nullptr && this->contentEncoding_ == nullptr && this->description_ == nullptr && this->enableParameter_ == nullptr && this->launcher_ == nullptr
        && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->timeout_ == nullptr && this->type_ == nullptr
        && this->workingDir_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCommandRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // commandContent Field Functions 
    bool hasCommandContent() const { return this->commandContent_ != nullptr;};
    void deleteCommandContent() { this->commandContent_ = nullptr;};
    inline string getCommandContent() const { DARABONBA_PTR_GET_DEFAULT(commandContent_, "") };
    inline CreateCommandRequest& setCommandContent(string commandContent) { DARABONBA_PTR_SET_VALUE(commandContent_, commandContent) };


    // contentEncoding Field Functions 
    bool hasContentEncoding() const { return this->contentEncoding_ != nullptr;};
    void deleteContentEncoding() { this->contentEncoding_ = nullptr;};
    inline string getContentEncoding() const { DARABONBA_PTR_GET_DEFAULT(contentEncoding_, "") };
    inline CreateCommandRequest& setContentEncoding(string contentEncoding) { DARABONBA_PTR_SET_VALUE(contentEncoding_, contentEncoding) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCommandRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableParameter Field Functions 
    bool hasEnableParameter() const { return this->enableParameter_ != nullptr;};
    void deleteEnableParameter() { this->enableParameter_ = nullptr;};
    inline bool getEnableParameter() const { DARABONBA_PTR_GET_DEFAULT(enableParameter_, false) };
    inline CreateCommandRequest& setEnableParameter(bool enableParameter) { DARABONBA_PTR_SET_VALUE(enableParameter_, enableParameter) };


    // launcher Field Functions 
    bool hasLauncher() const { return this->launcher_ != nullptr;};
    void deleteLauncher() { this->launcher_ = nullptr;};
    inline string getLauncher() const { DARABONBA_PTR_GET_DEFAULT(launcher_, "") };
    inline CreateCommandRequest& setLauncher(string launcher) { DARABONBA_PTR_SET_VALUE(launcher_, launcher) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCommandRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateCommandRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCommandRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCommandRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateCommandRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateCommandRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateCommandRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateCommandRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateCommandRequest::Tag>) };
    inline vector<CreateCommandRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateCommandRequest::Tag>) };
    inline CreateCommandRequest& setTag(const vector<CreateCommandRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateCommandRequest& setTag(vector<CreateCommandRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline CreateCommandRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateCommandRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // workingDir Field Functions 
    bool hasWorkingDir() const { return this->workingDir_ != nullptr;};
    void deleteWorkingDir() { this->workingDir_ = nullptr;};
    inline string getWorkingDir() const { DARABONBA_PTR_GET_DEFAULT(workingDir_, "") };
    inline CreateCommandRequest& setWorkingDir(string workingDir) { DARABONBA_PTR_SET_VALUE(workingDir_, workingDir) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. **ClientToken** supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The Base64-encoded content of the command.
    // 
    // - The value of this parameter must be Base64-encoded, and the script content cannot exceed 18 KB in size after Base64 encoding.
    // - The command content supports custom parameters. To enable the custom parameter feature, set `EnableParameter=true`:
    //     - Custom parameters are defined by enclosing them in `{{}}`. Spaces and line breaks before and after the parameter name within `{{}}` are ignored.
    //     - The number of custom parameters cannot exceed 20.
    //     - Custom parameter names can contain letters (a-z, A-Z), digits (0-9), hyphens (-), and underscores (_). The acs:: prefix for specifying non-built-in environment parameters is not supported. Other characters are not supported. Parameter names are case-insensitive.
    //     - Each parameter name cannot exceed 64 bytes in length.
    // 
    // - You can specify built-in environment parameters as custom parameters. When the command is run, Cloud Assistant automatically replaces them with the corresponding values from the environment without requiring manual assignment. The following built-in environment parameters are supported:
    //     - `{{ACS::RegionId}}`: the region ID.
    //     - `{{ACS::AccountId}}`: the UID of the Alibaba Cloud account.
    //     - `{{ACS::InstanceId}}`: the instance ID. When a command is sent to multiple instances and you want to use `{{ACS::InstanceId}}` as a built-in environment parameter, make sure that the Cloud Assistant Agent version is not earlier than:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    //     - `{{ACS::InstanceName}}`: the instance name. When a command is sent to multiple instances and you want to use `{{ACS::InstanceName}}` as a built-in environment parameter, make sure that the Cloud Assistant Agent version is not earlier than:
    //         - Linux: 2.2.3.344
    //         - Windows: 2.1.3.344
    // 
    //     - `{{ACS::InvokeId}}`: the command execution ID. To use `{{ACS::InvokeId}}` as a built-in environment parameter, make sure that the Cloud Assistant Agent version is not earlier than:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309
    //      
    //     - `{{ACS::CommandId}}`: the command ID. When you run a command by calling the [RunCommand](https://help.aliyun.com/document_detail/141751.html) operation and want to use `{{ACS::CommandId}}` as a built-in environment parameter, make sure that the Cloud Assistant Agent version is not earlier than:
    //         - Linux: 2.2.3.309
    //         - Windows: 2.1.3.309.
    // 
    // This parameter is required.
    shared_ptr<string> commandContent_ {};
    // The encoding mode of the command content (CommandContent). Valid values:
    // 
    // - PlainText: no encoding. The content is transmitted in plaintext.
    // 
    // - Base64: Base64 encoding.
    // 
    // Default value: Base64.
    // 
    // > If an invalid value is specified, it is treated as Base64.
    shared_ptr<string> contentEncoding_ {};
    // The command description. All character sets are supported. The description cannot exceed 512 characters in length.
    shared_ptr<string> description_ {};
    // Specifies whether the command uses custom parameters.
    // 
    // Default value: false.
    shared_ptr<bool> enableParameter_ {};
    // The bootstrap program for script execution. The value cannot exceed 1 KB in length.
    shared_ptr<string> launcher_ {};
    // The command name. All character sets are supported. The name cannot exceed 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the command belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of tags.
    shared_ptr<vector<CreateCommandRequest::Tag>> tag_ {};
    // The maximum timeout period for the command to run on the ECS instance. Unit: seconds. If the command cannot be run for any reason, a timeout occurs. After the timeout, the command process is forcefully terminated by canceling the PID of the command.
    // 
    // Default value: 60.
    shared_ptr<int64_t> timeout_ {};
    // The type of the command. Valid values: 
    // 
    // - RunBatScript: creates a Bat script to run on Windows instances.
    // - RunPowerShellScript: creates a PowerShell script to run on Windows instances.
    // - RunShellScript: creates a Shell script to run on Linux instances.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The directory where the command is run on the ECS instance. The value cannot exceed 200 characters in length.
    // 
    // Default value: 
    // - Linux instances: the home directory of the root user, which is `/root`.  
    // - Windows instances: the directory where the Cloud Assistant Agent process is located, such as `C:\\Windows\\System32`.
    // 
    // > If you set this parameter to a different directory, make sure that the directory exists on the instance.
    shared_ptr<string> workingDir_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
