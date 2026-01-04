// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVSWITCHCIDRRESERVATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVSWITCHCIDRRESERVATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVSwitchCidrReservationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVSwitchCidrReservationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationCidr, vSwitchCidrReservationCidr_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationDescription, vSwitchCidrReservationDescription_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationMask, vSwitchCidrReservationMask_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationName, vSwitchCidrReservationName_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationType, vSwitchCidrReservationType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVSwitchCidrReservationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationCidr, vSwitchCidrReservationCidr_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationDescription, vSwitchCidrReservationDescription_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationMask, vSwitchCidrReservationMask_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationName, vSwitchCidrReservationName_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationType, vSwitchCidrReservationType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateVSwitchCidrReservationRequest() = default ;
    CreateVSwitchCidrReservationRequest(const CreateVSwitchCidrReservationRequest &) = default ;
    CreateVSwitchCidrReservationRequest(CreateVSwitchCidrReservationRequest &&) = default ;
    CreateVSwitchCidrReservationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVSwitchCidrReservationRequest() = default ;
    CreateVSwitchCidrReservationRequest& operator=(const CreateVSwitchCidrReservationRequest &) = default ;
    CreateVSwitchCidrReservationRequest& operator=(CreateVSwitchCidrReservationRequest &&) = default ;
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
      // The key of tag N to add to the resource. You can specify at most 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 128 characters in length. It cannot start with aliyun or acs:, and cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the resource. You can specify at most 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length and cannot start with acs: or aliyun. It cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ipVersion_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->vSwitchCidrReservationCidr_ == nullptr && this->vSwitchCidrReservationDescription_ == nullptr
        && this->vSwitchCidrReservationMask_ == nullptr && this->vSwitchCidrReservationName_ == nullptr && this->vSwitchCidrReservationType_ == nullptr && this->vSwitchId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateVSwitchCidrReservationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVSwitchCidrReservationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline CreateVSwitchCidrReservationRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateVSwitchCidrReservationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateVSwitchCidrReservationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVSwitchCidrReservationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateVSwitchCidrReservationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateVSwitchCidrReservationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateVSwitchCidrReservationRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateVSwitchCidrReservationRequest::Tag>) };
    inline vector<CreateVSwitchCidrReservationRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateVSwitchCidrReservationRequest::Tag>) };
    inline CreateVSwitchCidrReservationRequest& setTag(const vector<CreateVSwitchCidrReservationRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateVSwitchCidrReservationRequest& setTag(vector<CreateVSwitchCidrReservationRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchCidrReservationCidr Field Functions 
    bool hasVSwitchCidrReservationCidr() const { return this->vSwitchCidrReservationCidr_ != nullptr;};
    void deleteVSwitchCidrReservationCidr() { this->vSwitchCidrReservationCidr_ = nullptr;};
    inline string getVSwitchCidrReservationCidr() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationCidr_, "") };
    inline CreateVSwitchCidrReservationRequest& setVSwitchCidrReservationCidr(string vSwitchCidrReservationCidr) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationCidr_, vSwitchCidrReservationCidr) };


    // vSwitchCidrReservationDescription Field Functions 
    bool hasVSwitchCidrReservationDescription() const { return this->vSwitchCidrReservationDescription_ != nullptr;};
    void deleteVSwitchCidrReservationDescription() { this->vSwitchCidrReservationDescription_ = nullptr;};
    inline string getVSwitchCidrReservationDescription() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationDescription_, "") };
    inline CreateVSwitchCidrReservationRequest& setVSwitchCidrReservationDescription(string vSwitchCidrReservationDescription) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationDescription_, vSwitchCidrReservationDescription) };


    // vSwitchCidrReservationMask Field Functions 
    bool hasVSwitchCidrReservationMask() const { return this->vSwitchCidrReservationMask_ != nullptr;};
    void deleteVSwitchCidrReservationMask() { this->vSwitchCidrReservationMask_ = nullptr;};
    inline string getVSwitchCidrReservationMask() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationMask_, "") };
    inline CreateVSwitchCidrReservationRequest& setVSwitchCidrReservationMask(string vSwitchCidrReservationMask) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationMask_, vSwitchCidrReservationMask) };


    // vSwitchCidrReservationName Field Functions 
    bool hasVSwitchCidrReservationName() const { return this->vSwitchCidrReservationName_ != nullptr;};
    void deleteVSwitchCidrReservationName() { this->vSwitchCidrReservationName_ = nullptr;};
    inline string getVSwitchCidrReservationName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationName_, "") };
    inline CreateVSwitchCidrReservationRequest& setVSwitchCidrReservationName(string vSwitchCidrReservationName) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationName_, vSwitchCidrReservationName) };


    // vSwitchCidrReservationType Field Functions 
    bool hasVSwitchCidrReservationType() const { return this->vSwitchCidrReservationType_ != nullptr;};
    void deleteVSwitchCidrReservationType() { this->vSwitchCidrReservationType_ = nullptr;};
    inline string getVSwitchCidrReservationType() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationType_, "") };
    inline CreateVSwitchCidrReservationRequest& setVSwitchCidrReservationType(string vSwitchCidrReservationType) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationType_, vSwitchCidrReservationType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateVSwitchCidrReservationRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run, without performing the actual request. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The IP version of the reserved CIDR block. Valid values:
    // 
    // *   **IPv4** (default)
    // *   **IPv6**
    shared_ptr<string> ipVersion_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the vSwitch is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Resource tags
    shared_ptr<vector<CreateVSwitchCidrReservationRequest::Tag>> tag_ {};
    // The reserved CIDR block of the vSwitch.
    // 
    // *   When **IpVersion** is set to **IPv4**, the reserved CIDR block must be a proper subset of the IPv4 CIDR block of the vSwitch and the subnet mask length of the reserved CIDR block cannot be greater than 28.
    // *   When **IpVersion** is set to **IPv6**, the reserved CIDR block must be a proper subset of the IPv6 CIDR block of the vSwitch and the subnet mask length of the reserved CIDR block cannot be greater than 80.
    // 
    // >  You must specify one of **VSwitchCidrReservationMask** and **VSwitchCidrReservationCidr**.
    shared_ptr<string> vSwitchCidrReservationCidr_ {};
    // The description of the reserved CIDR block. This parameter is empty by default.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter and cannot start with `http://` or `https://`.
    shared_ptr<string> vSwitchCidrReservationDescription_ {};
    // The subnet mask of the reserved CIDR block.
    // 
    // *   When **IpVersion** is set to **IPv4**, the subnet mask length of the CIDR block must be greater than the IPv4 subnet mask length of the vSwitch and cannot be greater than 28.
    // *   When **IpVersion** is set to **IPv6**, the subnet mask length of the CIDR block must be greater than the IPv6 subnet mask length of the vSwitch and cannot be greater than 80.
    // 
    // >  You must specify one of **VSwitchCidrReservationMask** and **VSwitchCidrReservationCidr**.
    shared_ptr<string> vSwitchCidrReservationMask_ {};
    // The name of the reserved CIDR block.
    // 
    // The name must be 2 to 128 characters in length and can contain digits, underscores (_), and hyphens (-). It must start with a letter.
    shared_ptr<string> vSwitchCidrReservationName_ {};
    // The type of reserved CIDR block. Set the value to **prefix**.
    // 
    // >  When a user or a cloud service allocates a CIDR block to an elastic network interface (ENI), the CIDR block must be allocated from the reserved CIDR block. If the reserved CIDR block is exhausted, an error is returned.
    shared_ptr<string> vSwitchCidrReservationType_ {};
    // The ID of the vSwitch to which the reserved CIDR block belongs.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
