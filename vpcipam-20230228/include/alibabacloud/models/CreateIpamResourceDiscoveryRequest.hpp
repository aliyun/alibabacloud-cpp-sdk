// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMRESOURCEDISCOVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMRESOURCEDISCOVERYREQUEST_HPP_
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
  class CreateIpamResourceDiscoveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamResourceDiscoveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryDescription, ipamResourceDiscoveryDescription_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
      DARABONBA_PTR_TO_JSON(OperatingRegionList, operatingRegionList_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamResourceDiscoveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryDescription, ipamResourceDiscoveryDescription_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
      DARABONBA_PTR_FROM_JSON(OperatingRegionList, operatingRegionList_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateIpamResourceDiscoveryRequest() = default ;
    CreateIpamResourceDiscoveryRequest(const CreateIpamResourceDiscoveryRequest &) = default ;
    CreateIpamResourceDiscoveryRequest(CreateIpamResourceDiscoveryRequest &&) = default ;
    CreateIpamResourceDiscoveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamResourceDiscoveryRequest() = default ;
    CreateIpamResourceDiscoveryRequest& operator=(const CreateIpamResourceDiscoveryRequest &) = default ;
    CreateIpamResourceDiscoveryRequest& operator=(CreateIpamResourceDiscoveryRequest &&) = default ;
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
      // The tag keys. You can specify at most 20 tag keys. It cannot be an empty string.
      // 
      // The tag key can be up to 64 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter but cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the resource. You can specify up to 20 tag values. You can specify empty strings as tag values.
      // 
      // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ipamResourceDiscoveryDescription_ == nullptr && this->ipamResourceDiscoveryName_ == nullptr && this->operatingRegionList_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIpamResourceDiscoveryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateIpamResourceDiscoveryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamResourceDiscoveryDescription Field Functions 
    bool hasIpamResourceDiscoveryDescription() const { return this->ipamResourceDiscoveryDescription_ != nullptr;};
    void deleteIpamResourceDiscoveryDescription() { this->ipamResourceDiscoveryDescription_ = nullptr;};
    inline string getIpamResourceDiscoveryDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryDescription_, "") };
    inline CreateIpamResourceDiscoveryRequest& setIpamResourceDiscoveryDescription(string ipamResourceDiscoveryDescription) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryDescription_, ipamResourceDiscoveryDescription) };


    // ipamResourceDiscoveryName Field Functions 
    bool hasIpamResourceDiscoveryName() const { return this->ipamResourceDiscoveryName_ != nullptr;};
    void deleteIpamResourceDiscoveryName() { this->ipamResourceDiscoveryName_ = nullptr;};
    inline string getIpamResourceDiscoveryName() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryName_, "") };
    inline CreateIpamResourceDiscoveryRequest& setIpamResourceDiscoveryName(string ipamResourceDiscoveryName) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryName_, ipamResourceDiscoveryName) };


    // operatingRegionList Field Functions 
    bool hasOperatingRegionList() const { return this->operatingRegionList_ != nullptr;};
    void deleteOperatingRegionList() { this->operatingRegionList_ = nullptr;};
    inline const vector<string> & getOperatingRegionList() const { DARABONBA_PTR_GET_CONST(operatingRegionList_, vector<string>) };
    inline vector<string> getOperatingRegionList() { DARABONBA_PTR_GET(operatingRegionList_, vector<string>) };
    inline CreateIpamResourceDiscoveryRequest& setOperatingRegionList(const vector<string> & operatingRegionList) { DARABONBA_PTR_SET_VALUE(operatingRegionList_, operatingRegionList) };
    inline CreateIpamResourceDiscoveryRequest& setOperatingRegionList(vector<string> && operatingRegionList) { DARABONBA_PTR_SET_RVALUE(operatingRegionList_, operatingRegionList) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateIpamResourceDiscoveryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateIpamResourceDiscoveryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpamResourceDiscoveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateIpamResourceDiscoveryRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateIpamResourceDiscoveryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateIpamResourceDiscoveryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateIpamResourceDiscoveryRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateIpamResourceDiscoveryRequest::Tag>) };
    inline vector<CreateIpamResourceDiscoveryRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateIpamResourceDiscoveryRequest::Tag>) };
    inline CreateIpamResourceDiscoveryRequest& setTag(const vector<CreateIpamResourceDiscoveryRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateIpamResourceDiscoveryRequest& setTag(vector<CreateIpamResourceDiscoveryRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run, without sending the actual request. Valid value:
    // 
    // *   **true**: Performs the dry run without creating a custom resource discovery instance. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): Performs a dry run and the actual request. If the request passes the dry run, an HTTP 2xx status code is returned and a custom resource discovery instance is created.
    shared_ptr<bool> dryRun_ {};
    // The description of resource discovery.
    shared_ptr<string> ipamResourceDiscoveryDescription_ {};
    // The name of the resource discovery.
    shared_ptr<string> ipamResourceDiscoveryName_ {};
    // The list of effective regions.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> operatingRegionList_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The request region.
    // 
    // >  The request region is the hosted region of the resource discovery instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag information.
    shared_ptr<vector<CreateIpamResourceDiscoveryRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
