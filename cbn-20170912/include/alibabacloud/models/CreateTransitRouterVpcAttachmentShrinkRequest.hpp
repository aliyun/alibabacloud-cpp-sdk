// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTERVPCATTACHMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTERVPCATTACHMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class CreateTransitRouterVpcAttachmentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouterVpcAttachmentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Options, optionsShrink_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterVPCAttachmentOptions, transitRouterVPCAttachmentOptionsShrink_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_TO_JSON(ZoneMappings, zoneMappings_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouterVpcAttachmentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPublishRouteEnabled, autoPublishRouteEnabled_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Options, optionsShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentDescription, transitRouterAttachmentDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentName, transitRouterAttachmentName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterVPCAttachmentOptions, transitRouterVPCAttachmentOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcOwnerId, vpcOwnerId_);
      DARABONBA_PTR_FROM_JSON(ZoneMappings, zoneMappings_);
    };
    CreateTransitRouterVpcAttachmentShrinkRequest() = default ;
    CreateTransitRouterVpcAttachmentShrinkRequest(const CreateTransitRouterVpcAttachmentShrinkRequest &) = default ;
    CreateTransitRouterVpcAttachmentShrinkRequest(CreateTransitRouterVpcAttachmentShrinkRequest &&) = default ;
    CreateTransitRouterVpcAttachmentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouterVpcAttachmentShrinkRequest() = default ;
    CreateTransitRouterVpcAttachmentShrinkRequest& operator=(const CreateTransitRouterVpcAttachmentShrinkRequest &) = default ;
    CreateTransitRouterVpcAttachmentShrinkRequest& operator=(CreateTransitRouterVpcAttachmentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ZoneMappings() = default ;
      ZoneMappings(const ZoneMappings &) = default ;
      ZoneMappings(ZoneMappings &&) = default ;
      ZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ZoneMappings() = default ;
      ZoneMappings& operator=(const ZoneMappings &) = default ;
      ZoneMappings& operator=(ZoneMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->vSwitchId_ == nullptr
        && this->zoneId_ == nullptr; };
      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline ZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The vSwitch instance in a zone supported by the Enterprise Edition transit router.
      // 
      // You can select vSwitch instances for up to 10 zones at a time.
      // 
      // This parameter is required.
      shared_ptr<string> vSwitchId_ {};
      // The ID of a zone supported by the Enterprise Edition transit router.
      // 
      // You can call [DescribeZones](https://help.aliyun.com/document_detail/36064.html) to query zone IDs.
      // 
      // You can select up to 10 zones at a time.
      // 
      // This parameter is required.
      shared_ptr<string> zoneId_ {};
    };

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
      // The tag key of the resource.
      // 
      // If this parameter is specified, it cannot be an empty string. The tag key can be up to 64 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      // 
      // You can specify up to 20 tag keys at a time.
      shared_ptr<string> key_ {};
      // The tag value of the resource.
      // 
      // If this parameter is specified, it cannot be empty. The tag value can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      // 
      // Each tag key corresponds to one tag value. You can specify up to 20 tag key-value pairs at a time.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->autoPublishRouteEnabled_ == nullptr
        && this->cenId_ == nullptr && this->chargeType_ == nullptr && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->optionsShrink_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->tag_ == nullptr && this->transitRouterAttachmentDescription_ == nullptr && this->transitRouterAttachmentName_ == nullptr && this->transitRouterId_ == nullptr && this->transitRouterVPCAttachmentOptionsShrink_ == nullptr
        && this->vpcId_ == nullptr && this->vpcOwnerId_ == nullptr && this->zoneMappings_ == nullptr; };
    // autoPublishRouteEnabled Field Functions 
    bool hasAutoPublishRouteEnabled() const { return this->autoPublishRouteEnabled_ != nullptr;};
    void deleteAutoPublishRouteEnabled() { this->autoPublishRouteEnabled_ = nullptr;};
    inline bool getAutoPublishRouteEnabled() const { DARABONBA_PTR_GET_DEFAULT(autoPublishRouteEnabled_, false) };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setAutoPublishRouteEnabled(bool autoPublishRouteEnabled) { DARABONBA_PTR_SET_VALUE(autoPublishRouteEnabled_, autoPublishRouteEnabled) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // optionsShrink Field Functions 
    bool hasOptionsShrink() const { return this->optionsShrink_ != nullptr;};
    void deleteOptionsShrink() { this->optionsShrink_ = nullptr;};
    inline string getOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(optionsShrink_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setOptionsShrink(string optionsShrink) { DARABONBA_PTR_SET_VALUE(optionsShrink_, optionsShrink) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTransitRouterVpcAttachmentShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTransitRouterVpcAttachmentShrinkRequest::Tag>) };
    inline vector<CreateTransitRouterVpcAttachmentShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateTransitRouterVpcAttachmentShrinkRequest::Tag>) };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setTag(const vector<CreateTransitRouterVpcAttachmentShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setTag(vector<CreateTransitRouterVpcAttachmentShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterAttachmentDescription Field Functions 
    bool hasTransitRouterAttachmentDescription() const { return this->transitRouterAttachmentDescription_ != nullptr;};
    void deleteTransitRouterAttachmentDescription() { this->transitRouterAttachmentDescription_ = nullptr;};
    inline string getTransitRouterAttachmentDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentDescription_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setTransitRouterAttachmentDescription(string transitRouterAttachmentDescription) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentDescription_, transitRouterAttachmentDescription) };


    // transitRouterAttachmentName Field Functions 
    bool hasTransitRouterAttachmentName() const { return this->transitRouterAttachmentName_ != nullptr;};
    void deleteTransitRouterAttachmentName() { this->transitRouterAttachmentName_ = nullptr;};
    inline string getTransitRouterAttachmentName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentName_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setTransitRouterAttachmentName(string transitRouterAttachmentName) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentName_, transitRouterAttachmentName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string getTransitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterVPCAttachmentOptionsShrink Field Functions 
    bool hasTransitRouterVPCAttachmentOptionsShrink() const { return this->transitRouterVPCAttachmentOptionsShrink_ != nullptr;};
    void deleteTransitRouterVPCAttachmentOptionsShrink() { this->transitRouterVPCAttachmentOptionsShrink_ = nullptr;};
    inline string getTransitRouterVPCAttachmentOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(transitRouterVPCAttachmentOptionsShrink_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setTransitRouterVPCAttachmentOptionsShrink(string transitRouterVPCAttachmentOptionsShrink) { DARABONBA_PTR_SET_VALUE(transitRouterVPCAttachmentOptionsShrink_, transitRouterVPCAttachmentOptionsShrink) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcOwnerId Field Functions 
    bool hasVpcOwnerId() const { return this->vpcOwnerId_ != nullptr;};
    void deleteVpcOwnerId() { this->vpcOwnerId_ = nullptr;};
    inline int64_t getVpcOwnerId() const { DARABONBA_PTR_GET_DEFAULT(vpcOwnerId_, 0L) };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setVpcOwnerId(int64_t vpcOwnerId) { DARABONBA_PTR_SET_VALUE(vpcOwnerId_, vpcOwnerId) };


    // zoneMappings Field Functions 
    bool hasZoneMappings() const { return this->zoneMappings_ != nullptr;};
    void deleteZoneMappings() { this->zoneMappings_ = nullptr;};
    inline const vector<CreateTransitRouterVpcAttachmentShrinkRequest::ZoneMappings> & getZoneMappings() const { DARABONBA_PTR_GET_CONST(zoneMappings_, vector<CreateTransitRouterVpcAttachmentShrinkRequest::ZoneMappings>) };
    inline vector<CreateTransitRouterVpcAttachmentShrinkRequest::ZoneMappings> getZoneMappings() { DARABONBA_PTR_GET(zoneMappings_, vector<CreateTransitRouterVpcAttachmentShrinkRequest::ZoneMappings>) };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setZoneMappings(const vector<CreateTransitRouterVpcAttachmentShrinkRequest::ZoneMappings> & zoneMappings) { DARABONBA_PTR_SET_VALUE(zoneMappings_, zoneMappings) };
    inline CreateTransitRouterVpcAttachmentShrinkRequest& setZoneMappings(vector<CreateTransitRouterVpcAttachmentShrinkRequest::ZoneMappings> && zoneMappings) { DARABONBA_PTR_SET_RVALUE(zoneMappings_, zoneMappings) };


  protected:
    // Specifies whether the Enterprise Edition transit router automatically publishes route entries to the VPC instance.
    // 
    // - **false** (default): does not automatically publish route entries.
    // - **true**: automatically publishes route entries.
    shared_ptr<bool> autoPublishRouteEnabled_ {};
    // The instance ID of the Cloud Enterprise Network (CEN).
    shared_ptr<string> cenId_ {};
    // The billing method. Default value: **POSTPAY**, which indicates the pay-as-you-go billing method.
    shared_ptr<string> chargeType_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // Generate a unique value from your client for this parameter. ClientToken supports only ASCII characters.
    // 
    // >If you do not specify this parameter, the system uses the RequestId of the API request as the ClientToken. The RequestId of each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run on the request, including permission checks and instance status validation. Valid values:
    // 
    // - **false** (default): sends a normal request and creates a VPC after the check passes. Use this value to create a VPC.
    // - **true**: sends a dry run request for validation only without creating the VPC attachment. The check includes whether required parameters are specified and whether the request format is valid. If the check fails, the corresponding error is returned. If the check passes, the error code `DryRunOperation` is returned.
    shared_ptr<bool> dryRun_ {};
    // The collection of feature attributes.
    shared_ptr<string> optionsShrink_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the VPC instance is deployed.
    // 
    // You can call [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) to query region IDs.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of tags.
    // 
    // You can specify up to 20 tags at a time.
    shared_ptr<vector<CreateTransitRouterVpcAttachmentShrinkRequest::Tag>> tag_ {};
    // The description of the VPC attachment.
    // 
    // The description can be left empty or can contain 1 to 256 characters. It cannot start with http:// or https://.
    shared_ptr<string> transitRouterAttachmentDescription_ {};
    // The name of the VPC attachment.
    // 
    // The name can be left empty or can contain 1 to 128 characters. It cannot start with http:// or https://.
    shared_ptr<string> transitRouterAttachmentName_ {};
    // The instance ID of the Enterprise Edition transit router.
    shared_ptr<string> transitRouterId_ {};
    // The list of feature attributes for the VPC attachment (to be deprecated — use the new Options parameter instead).
    shared_ptr<string> transitRouterVPCAttachmentOptionsShrink_ {};
    // The instance ID of the VPC.
    // 
    // This parameter is required.
    shared_ptr<string> vpcId_ {};
    // The ID of the Alibaba Cloud account to which the VPC instance belongs. The default value is the ID of the current logon Alibaba Cloud account.
    // 
    // > This parameter is required if you want to attach a network instance that belongs to a different account.
    shared_ptr<int64_t> vpcOwnerId_ {};
    // Select a vSwitch instance in a zone supported by the Enterprise Edition transit router.
    // 
    // You can add up to 10 entries at a time.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateTransitRouterVpcAttachmentShrinkRequest::ZoneMappings>> zoneMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
