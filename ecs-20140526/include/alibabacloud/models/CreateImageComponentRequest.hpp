// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIMAGECOMPONENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIMAGECOMPONENTREQUEST_HPP_
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
  class CreateImageComponentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateImageComponentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(ComponentVersion, componentVersion_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SystemType, systemType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateImageComponentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(ComponentVersion, componentVersion_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SystemType, systemType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateImageComponentRequest() = default ;
    CreateImageComponentRequest(const CreateImageComponentRequest &) = default ;
    CreateImageComponentRequest(CreateImageComponentRequest &&) = default ;
    CreateImageComponentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateImageComponentRequest() = default ;
    CreateImageComponentRequest& operator=(const CreateImageComponentRequest &) = default ;
    CreateImageComponentRequest& operator=(CreateImageComponentRequest &&) = default ;
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
      // The key of the tag. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with aliyun or acs:. The tag key cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The value of the tag. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot start with acs:. The tag value cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->componentType_ == nullptr && this->componentVersion_ == nullptr && this->content_ == nullptr && this->description_ == nullptr && this->name_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->systemType_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateImageComponentRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline CreateImageComponentRequest& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // componentVersion Field Functions 
    bool hasComponentVersion() const { return this->componentVersion_ != nullptr;};
    void deleteComponentVersion() { this->componentVersion_ = nullptr;};
    inline string getComponentVersion() const { DARABONBA_PTR_GET_DEFAULT(componentVersion_, "") };
    inline CreateImageComponentRequest& setComponentVersion(string componentVersion) { DARABONBA_PTR_SET_VALUE(componentVersion_, componentVersion) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateImageComponentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateImageComponentRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateImageComponentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateImageComponentRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateImageComponentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateImageComponentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateImageComponentRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateImageComponentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateImageComponentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // systemType Field Functions 
    bool hasSystemType() const { return this->systemType_ != nullptr;};
    void deleteSystemType() { this->systemType_ = nullptr;};
    inline string getSystemType() const { DARABONBA_PTR_GET_DEFAULT(systemType_, "") };
    inline CreateImageComponentRequest& setSystemType(string systemType) { DARABONBA_PTR_SET_VALUE(systemType_, systemType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateImageComponentRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateImageComponentRequest::Tag>) };
    inline vector<CreateImageComponentRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateImageComponentRequest::Tag>) };
    inline CreateImageComponentRequest& setTag(const vector<CreateImageComponentRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateImageComponentRequest& setTag(vector<CreateImageComponentRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The value of **ClientToken** can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The component type. Image build components and test components are supported.
    // 
    // Valid values:
    // - Build
    // - Test
    // 
    // Default value: Build.
    // > Build components can be used only in build templates. Test components can be used only in test templates.
    shared_ptr<string> componentType_ {};
    // The version number of the component, which is used together with the component name. The format is major.minor.patch, and all values are non-negative integers.
    // 
    // Default value: (x+1).0.0, where x is the current maximum major version number of the component.
    shared_ptr<string> componentVersion_ {};
    // The component content, which consists of multiple commands. The content cannot exceed 16 KB. For more information about supported commands and command formats, see [Commands supported by Image Builder](https://help.aliyun.com/document_detail/200206.html).
    shared_ptr<string> content_ {};
    // The description. The description must be 2 to 256 characters in length and cannot start with http:// or https://.
    shared_ptr<string> description_ {};
    // The component name. The name must be 2 to 128 characters in length and must start with a letter or a Chinese character. The name cannot start with http:// or https://. The name can contain letters, Chinese characters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    // 
    // > If you do not specify Name, the ImageComponentId return value is used by default.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent list of Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the enterprise resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The operating system supported by the component.
    // 
    // Valid values:
    // - Linux
    // - Windows
    // 
    // Default value: Linux.
    shared_ptr<string> systemType_ {};
    // The tags.
    shared_ptr<vector<CreateImageComponentRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
