// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMSCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class CreateIpamScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
      DARABONBA_PTR_TO_JSON(IpamScopeDescription, ipamScopeDescription_);
      DARABONBA_PTR_TO_JSON(IpamScopeName, ipamScopeName_);
      DARABONBA_PTR_TO_JSON(IpamScopeType, ipamScopeType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
      DARABONBA_PTR_FROM_JSON(IpamScopeDescription, ipamScopeDescription_);
      DARABONBA_PTR_FROM_JSON(IpamScopeName, ipamScopeName_);
      DARABONBA_PTR_FROM_JSON(IpamScopeType, ipamScopeType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateIpamScopeRequest() = default ;
    CreateIpamScopeRequest(const CreateIpamScopeRequest &) = default ;
    CreateIpamScopeRequest(CreateIpamScopeRequest &&) = default ;
    CreateIpamScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamScopeRequest() = default ;
    CreateIpamScopeRequest& operator=(const CreateIpamScopeRequest &) = default ;
    CreateIpamScopeRequest& operator=(CreateIpamScopeRequest &&) = default ;
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
      // The tag key of the resource. You can specify at most 20 tag keys. It cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter but cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the resource. You can specify up to 20 tag values. You can specify empty strings as tag values.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ipamId_ == nullptr && this->ipamScopeDescription_ == nullptr && this->ipamScopeName_ == nullptr && this->ipamScopeType_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIpamScopeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateIpamScopeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamId Field Functions 
    bool hasIpamId() const { return this->ipamId_ != nullptr;};
    void deleteIpamId() { this->ipamId_ = nullptr;};
    inline string getIpamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
    inline CreateIpamScopeRequest& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


    // ipamScopeDescription Field Functions 
    bool hasIpamScopeDescription() const { return this->ipamScopeDescription_ != nullptr;};
    void deleteIpamScopeDescription() { this->ipamScopeDescription_ = nullptr;};
    inline string getIpamScopeDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeDescription_, "") };
    inline CreateIpamScopeRequest& setIpamScopeDescription(string ipamScopeDescription) { DARABONBA_PTR_SET_VALUE(ipamScopeDescription_, ipamScopeDescription) };


    // ipamScopeName Field Functions 
    bool hasIpamScopeName() const { return this->ipamScopeName_ != nullptr;};
    void deleteIpamScopeName() { this->ipamScopeName_ = nullptr;};
    inline string getIpamScopeName() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeName_, "") };
    inline CreateIpamScopeRequest& setIpamScopeName(string ipamScopeName) { DARABONBA_PTR_SET_VALUE(ipamScopeName_, ipamScopeName) };


    // ipamScopeType Field Functions 
    bool hasIpamScopeType() const { return this->ipamScopeType_ != nullptr;};
    void deleteIpamScopeType() { this->ipamScopeType_ = nullptr;};
    inline string getIpamScopeType() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeType_, "") };
    inline CreateIpamScopeRequest& setIpamScopeType(string ipamScopeType) { DARABONBA_PTR_SET_VALUE(ipamScopeType_, ipamScopeType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateIpamScopeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateIpamScopeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpamScopeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateIpamScopeRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateIpamScopeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateIpamScopeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateIpamScopeRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateIpamScopeRequest::Tag>) };
    inline vector<CreateIpamScopeRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateIpamScopeRequest::Tag>) };
    inline CreateIpamScopeRequest& setTag(const vector<CreateIpamScopeRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateIpamScopeRequest& setTag(vector<CreateIpamScopeRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including invalid AccessKey pairs, unauthorized RAM users, and missing parameter values. If the request fails the dry run, an error code is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**: performs a dry run and the actual request. After the request passes the dry run, a 2xx HTTP status code is returned and the IPAM scope is created.
    shared_ptr<bool> dryRun_ {};
    // The ID of the IPAM.
    // 
    // This parameter is required.
    shared_ptr<string> ipamId_ {};
    // The description of the IPAM scope.
    // 
    // It must be 1 to 256 characters in length. It must start with a letter but cannot start with `http://` or `https://`. This parameter is empty by default.
    shared_ptr<string> ipamScopeDescription_ {};
    // The name of the IPAM scope.
    // 
    // It must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> ipamScopeName_ {};
    // The type of IPAM scope: **private**
    // 
    // 
    // **Usage notes** You can create only private IPAM scopes.
    shared_ptr<string> ipamScopeType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the IPAM instance is hosted. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID of the IPAM scope.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag list.
    shared_ptr<vector<CreateIpamScopeRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
