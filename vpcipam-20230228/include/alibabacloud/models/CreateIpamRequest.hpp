// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPAMREQUEST_HPP_
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
  class CreateIpamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamDescription, ipamDescription_);
      DARABONBA_PTR_TO_JSON(IpamName, ipamName_);
      DARABONBA_PTR_TO_JSON(OperatingRegionList, operatingRegionList_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamDescription, ipamDescription_);
      DARABONBA_PTR_FROM_JSON(IpamName, ipamName_);
      DARABONBA_PTR_FROM_JSON(OperatingRegionList, operatingRegionList_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateIpamRequest() = default ;
    CreateIpamRequest(const CreateIpamRequest &) = default ;
    CreateIpamRequest(CreateIpamRequest &&) = default ;
    CreateIpamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpamRequest() = default ;
    CreateIpamRequest& operator=(const CreateIpamRequest &) = default ;
    CreateIpamRequest& operator=(CreateIpamRequest &&) = default ;
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
        && this->dryRun_ == nullptr && this->ipamDescription_ == nullptr && this->ipamName_ == nullptr && this->operatingRegionList_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->tag_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateIpamRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateIpamRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamDescription Field Functions 
    bool hasIpamDescription() const { return this->ipamDescription_ != nullptr;};
    void deleteIpamDescription() { this->ipamDescription_ = nullptr;};
    inline string getIpamDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamDescription_, "") };
    inline CreateIpamRequest& setIpamDescription(string ipamDescription) { DARABONBA_PTR_SET_VALUE(ipamDescription_, ipamDescription) };


    // ipamName Field Functions 
    bool hasIpamName() const { return this->ipamName_ != nullptr;};
    void deleteIpamName() { this->ipamName_ = nullptr;};
    inline string getIpamName() const { DARABONBA_PTR_GET_DEFAULT(ipamName_, "") };
    inline CreateIpamRequest& setIpamName(string ipamName) { DARABONBA_PTR_SET_VALUE(ipamName_, ipamName) };


    // operatingRegionList Field Functions 
    bool hasOperatingRegionList() const { return this->operatingRegionList_ != nullptr;};
    void deleteOperatingRegionList() { this->operatingRegionList_ = nullptr;};
    inline const vector<string> & getOperatingRegionList() const { DARABONBA_PTR_GET_CONST(operatingRegionList_, vector<string>) };
    inline vector<string> getOperatingRegionList() { DARABONBA_PTR_GET(operatingRegionList_, vector<string>) };
    inline CreateIpamRequest& setOperatingRegionList(const vector<string> & operatingRegionList) { DARABONBA_PTR_SET_VALUE(operatingRegionList_, operatingRegionList) };
    inline CreateIpamRequest& setOperatingRegionList(vector<string> && operatingRegionList) { DARABONBA_PTR_SET_RVALUE(operatingRegionList_, operatingRegionList) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateIpamRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateIpamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateIpamRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateIpamRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateIpamRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateIpamRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateIpamRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateIpamRequest::Tag>) };
    inline vector<CreateIpamRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateIpamRequest::Tag>) };
    inline CreateIpamRequest& setTag(const vector<CreateIpamRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateIpamRequest& setTag(vector<CreateIpamRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The client token used to ensure the idempotence of the request. Use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The description of the IPAM.
    // 
    // It must be 1 to 256 characters in length. Start with a letter but cannot start with `http://` or `https://`. If you do not specify a description, the description is empty by default.
    shared_ptr<string> ipamDescription_ {};
    // The name of the IPAM.
    // 
    // It must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> ipamName_ {};
    // The effective regions of the IPAM.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> operatingRegionList_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the IPAM instance is hosted. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The resource group ID of the IPAM.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag list.
    shared_ptr<vector<CreateIpamRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
