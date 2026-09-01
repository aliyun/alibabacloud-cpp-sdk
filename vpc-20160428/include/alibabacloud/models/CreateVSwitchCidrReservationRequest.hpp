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
      DARABONBA_PTR_TO_JSON(IpPrefixNumber, ipPrefixNumber_);
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
      DARABONBA_PTR_FROM_JSON(IpPrefixNumber, ipPrefixNumber_);
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
      // The tag key of the resource. You can specify up to 20 tag keys. If you specify this parameter, the value cannot be an empty string.
      // 
      // A tag key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the resource. You can specify up to 20 tag values. If you specify this parameter, the value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ipPrefixNumber_ == nullptr && this->ipVersion_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->tag_ == nullptr && this->vSwitchCidrReservationCidr_ == nullptr
        && this->vSwitchCidrReservationDescription_ == nullptr && this->vSwitchCidrReservationMask_ == nullptr && this->vSwitchCidrReservationName_ == nullptr && this->vSwitchCidrReservationType_ == nullptr && this->vSwitchId_ == nullptr; };
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


    // ipPrefixNumber Field Functions 
    bool hasIpPrefixNumber() const { return this->ipPrefixNumber_ != nullptr;};
    void deleteIpPrefixNumber() { this->ipPrefixNumber_ = nullptr;};
    inline int32_t getIpPrefixNumber() const { DARABONBA_PTR_GET_DEFAULT(ipPrefixNumber_, 0) };
    inline CreateVSwitchCidrReservationRequest& setIpPrefixNumber(int32_t ipPrefixNumber) { DARABONBA_PTR_SET_VALUE(ipPrefixNumber_, ipPrefixNumber) };


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
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // - **true**: sends a check request without creating the reserved CIDR block for a vSwitch. The system checks whether the required parameters are specified, the request format is valid, and the service limits are not exceeded. If the check fails, the corresponding error message is returned. If the check passes, the `DryRunOperation` error code is returned.
    // - **false** (default): sends a Normal request. After the check passes, an HTTP 2xx status code is returned and the vSwitch reserved CIDR block for a vSwitch is created.
    shared_ptr<bool> dryRun_ {};
    // The expected number of IP prefixes to reserve. Valid values: 1 to 32.
    shared_ptr<int32_t> ipPrefixNumber_ {};
    // The IP version of the reserved CIDR block for a vSwitch. Valid values:
    // 
    // - **IPv4** (default)
    // - **IPv6**
    // 
    // > You do not need to specify this parameter when creating an IPv4 reserved CIDR block for a vSwitch. This parameter is required when creating an IPv6 reserved CIDR block for a vSwitch.
    shared_ptr<string> ipVersion_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the vSwitch.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The resource tags.
    shared_ptr<vector<CreateVSwitchCidrReservationRequest::Tag>> tag_ {};
    // The reserved CIDR block for a vSwitch.
    // 
    // - If **IpVersion** is set to **IPv4**, the reserved CIDR block for a vSwitch must be a proper subset of the IPv4 CIDR block of the vSwitch, and the mask length cannot exceed 28.
    // - If **IpVersion** is set to **IPv6**, the reserved CIDR block for a vSwitch must be a proper subset of the IPv6 CIDR block of the vSwitch, and the mask length cannot exceed 80.
    // 
    // > - You must specify either the **VSwitchCidrReservationMask** parameter or the **VSwitchCidrReservationCidr** parameter.
    // > - The reserved CIDR block cannot contain the system reserved IP addresses of the vSwitch.
    shared_ptr<string> vSwitchCidrReservationCidr_ {};
    // The description of the reserved CIDR block for a vSwitch. If you leave this parameter empty, the default value is empty.
    // 
    // The description must be 1 to 256 characters in length and must start with a letter or Chinese character. It cannot start with `http://` or `https://`.
    shared_ptr<string> vSwitchCidrReservationDescription_ {};
    // The mask of the reserved CIDR block for a vSwitch.
    // 
    // - If **IpVersion** is set to **IPv4**, the mask length of the reserved CIDR block must be at least 2 bits longer than the IPv4 CIDR block mask of the vSwitch and cannot exceed 28.
    // - If **IpVersion** is set to **IPv6**, the mask length of the reserved CIDR block must be longer than the IPv6 CIDR block mask of the vSwitch and cannot exceed 80.
    // 
    // > - You must specify either the **VSwitchCidrReservationMask** parameter or the **VSwitchCidrReservationCidr** parameter.
    // > - The reserved CIDR block cannot contain the system reserved IP addresses of the vSwitch.
    shared_ptr<string> vSwitchCidrReservationMask_ {};
    // The name of the reserved CIDR block for a vSwitch.
    // 
    // The name must be 1 to 128 characters in length and must start with a letter or Chinese character. It can contain digits, underscores (_), and hyphens (-). It cannot start with `http://` or `https://`.
    shared_ptr<string> vSwitchCidrReservationName_ {};
    // The type of the reserved CIDR block for a vSwitch. Valid values: **prefix**, which indicates that IP addresses are allocated by CIDR block.
    // 
    // > When users or cloud services automatically assign CIDR blocks to elastic network interfaces (ENIs), the CIDR blocks must be allocated from the reserved CIDR block for a vSwitch. If the IP addresses in the reserved CIDR block for a vSwitch are exhausted, the system returns an error.
    shared_ptr<string> vSwitchCidrReservationType_ {};
    // The ID of the vSwitch for which you want to create a reserved CIDR block for a vSwitch.
    // 
    // This parameter is required.
    shared_ptr<string> vSwitchId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
