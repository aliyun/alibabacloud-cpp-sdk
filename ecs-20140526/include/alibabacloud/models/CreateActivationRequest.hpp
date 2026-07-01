// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACTIVATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACTIVATIONREQUEST_HPP_
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
  class CreateActivationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateActivationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(IpAddressRange, ipAddressRange_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TimeToLiveInHours, timeToLiveInHours_);
    };
    friend void from_json(const Darabonba::Json& j, CreateActivationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceCount, instanceCount_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(IpAddressRange, ipAddressRange_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TimeToLiveInHours, timeToLiveInHours_);
    };
    CreateActivationRequest() = default ;
    CreateActivationRequest(const CreateActivationRequest &) = default ;
    CreateActivationRequest(CreateActivationRequest &&) = default ;
    CreateActivationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateActivationRequest() = default ;
    CreateActivationRequest& operator=(const CreateActivationRequest &) = default ;
    CreateActivationRequest& operator=(CreateActivationRequest &&) = default ;
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
      // The tag key of the managed instance activation code. Valid values of N: 1 to 20. The tag key cannot be an empty string.
      // 
      // If you use a single tag to filter resources, the resource count with the tag cannot exceed 1000. If you use multiple tags to filter resources, the resource count with all the specified tags attached cannot exceed 1000. If the resource count exceeds 1000, use the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation to query resources.
      // 
      // The tag key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the managed instance activation code. Valid values of N: 1 to 20. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->instanceCount_ == nullptr && this->instanceName_ == nullptr && this->ipAddressRange_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->tag_ == nullptr && this->timeToLiveInHours_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateActivationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateActivationRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceCount Field Functions 
    bool hasInstanceCount() const { return this->instanceCount_ != nullptr;};
    void deleteInstanceCount() { this->instanceCount_ = nullptr;};
    inline int32_t getInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCount_, 0) };
    inline CreateActivationRequest& setInstanceCount(int32_t instanceCount) { DARABONBA_PTR_SET_VALUE(instanceCount_, instanceCount) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateActivationRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // ipAddressRange Field Functions 
    bool hasIpAddressRange() const { return this->ipAddressRange_ != nullptr;};
    void deleteIpAddressRange() { this->ipAddressRange_ = nullptr;};
    inline string getIpAddressRange() const { DARABONBA_PTR_GET_DEFAULT(ipAddressRange_, "") };
    inline CreateActivationRequest& setIpAddressRange(string ipAddressRange) { DARABONBA_PTR_SET_VALUE(ipAddressRange_, ipAddressRange) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateActivationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateActivationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateActivationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateActivationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateActivationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateActivationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateActivationRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateActivationRequest::Tag>) };
    inline vector<CreateActivationRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateActivationRequest::Tag>) };
    inline CreateActivationRequest& setTag(const vector<CreateActivationRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateActivationRequest& setTag(vector<CreateActivationRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // timeToLiveInHours Field Functions 
    bool hasTimeToLiveInHours() const { return this->timeToLiveInHours_ != nullptr;};
    void deleteTimeToLiveInHours() { this->timeToLiveInHours_ = nullptr;};
    inline int64_t getTimeToLiveInHours() const { DARABONBA_PTR_GET_DEFAULT(timeToLiveInHours_, 0L) };
    inline CreateActivationRequest& setTimeToLiveInHours(int64_t timeToLiveInHours) { DARABONBA_PTR_SET_VALUE(timeToLiveInHours_, timeToLiveInHours) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. **ClientToken** supports only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The description of the activation code. The value can be 1 to 100 characters in length.
    shared_ptr<string> description_ {};
    // The maximum number of times that the activation code can be used to register managed instances. Valid values: 1 to 1000.
    // 
    // Default value: 10.
    shared_ptr<int32_t> instanceCount_ {};
    // The default instance name prefix. The value must be 2 to 50 characters in length and must start with a letter. It cannot start with a special character or digit. It can contain only periods (.), underscores (_), hyphens (-), and colons (:). It cannot start with `http://` or `https://`.
    // 
    // Instances registered with the activation code created by this operation use this value as the prefix to generate sequential instance names. You can also specify a new instance name when you register a managed instance to override this default value.
    // 
    // When you register a managed instance, if you specify a value for InstanceName, a name in the format of `<InstanceName>-001` is generated. The number of digits in `001` depends on the number of digits in the `InstanceCount` value. If you do not specify a value for InstanceName, the hostname of the host is used as the instance name.
    shared_ptr<string> instanceName_ {};
    // The IP addresses of hosts that are allowed to use the activation code. The value can be an IPv4 address, an IPv6 address, or a CIDR block.
    shared_ptr<string> ipAddressRange_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID. Currently supported regions include China (Qingdao), China (Beijing), China (Zhangjiakou), China (Hohhot), China (Ulanqab), China (Hangzhou), China (Shanghai), China (Shenzhen), China (Heyuan), China (Guangzhou), China (Chengdu), Hong Kong (China), Singapore, Japan (Tokyo), US (Silicon Valley), and US (Virginia).
    // You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query region IDs and other information.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the activation code belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags.
    shared_ptr<vector<CreateActivationRequest::Tag>> tag_ {};
    // The validity period of the activation code. After the validity period expires, the activation code cannot be used to register new instances. Unit: hours. Valid values: 1 to 4.
    // 
    // Default value: 4.
    shared_ptr<int64_t> timeToLiveInHours_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
