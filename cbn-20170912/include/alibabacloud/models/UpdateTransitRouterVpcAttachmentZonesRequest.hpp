// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTZONESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRANSITROUTERVPCATTACHMENTZONESREQUEST_HPP_
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
  class UpdateTransitRouterVpcAttachmentZonesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTransitRouterVpcAttachmentZonesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddZoneMappings, addZoneMappings_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RemoveZoneMappings, removeZoneMappings_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTransitRouterVpcAttachmentZonesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddZoneMappings, addZoneMappings_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RemoveZoneMappings, removeZoneMappings_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
    };
    UpdateTransitRouterVpcAttachmentZonesRequest() = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest(const UpdateTransitRouterVpcAttachmentZonesRequest &) = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest(UpdateTransitRouterVpcAttachmentZonesRequest &&) = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTransitRouterVpcAttachmentZonesRequest() = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest& operator=(const UpdateTransitRouterVpcAttachmentZonesRequest &) = default ;
    UpdateTransitRouterVpcAttachmentZonesRequest& operator=(UpdateTransitRouterVpcAttachmentZonesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RemoveZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RemoveZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, RemoveZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      RemoveZoneMappings() = default ;
      RemoveZoneMappings(const RemoveZoneMappings &) = default ;
      RemoveZoneMappings(RemoveZoneMappings &&) = default ;
      RemoveZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RemoveZoneMappings() = default ;
      RemoveZoneMappings& operator=(const RemoveZoneMappings &) = default ;
      RemoveZoneMappings& operator=(RemoveZoneMappings &&) = default ;
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
      inline RemoveZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline RemoveZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the vSwitch to remove from the VPC connection.
      // 
      // You can remove up to 10 vSwitches at a time.
      // 
      // If you set **VSwitchId**, you must also set **ZoneId**.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the zone to which the vSwitch to remove from the VPC connection belongs.
      // 
      // You can remove up to 10 vSwitches at a time.
      // 
      // If you set **ZoneId**, you must also set **VSwitchId**.
      shared_ptr<string> zoneId_ {};
    };

    class AddZoneMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AddZoneMappings& obj) { 
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, AddZoneMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      AddZoneMappings() = default ;
      AddZoneMappings(const AddZoneMappings &) = default ;
      AddZoneMappings(AddZoneMappings &&) = default ;
      AddZoneMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AddZoneMappings() = default ;
      AddZoneMappings& operator=(const AddZoneMappings &) = default ;
      AddZoneMappings& operator=(AddZoneMappings &&) = default ;
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
      inline AddZoneMappings& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline AddZoneMappings& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The ID of the vSwitch to add to the VPC connection.
      // 
      // You can add up to 10 vSwitches at a time.
      // 
      // - If the Alibaba Cloud account that you use to log on and the VPC-connected instance belong to the same account, you can invoke the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation to query the vSwitch IDs and the IDs of the zones to which the vSwitches belong in the VPC-connected instance.
      // - If the Alibaba Cloud account that you use to log on and the VPC-connected instance belong to different accounts, you can invoke the [ListGrantVSwitchesToCen](https://help.aliyun.com/document_detail/427599.html) operation to query the vSwitch IDs and the IDs of the zones to which the vSwitches belong in the VPC-connected instance.
      // 
      // If you set **VSwitchId**, you must also set **ZoneId**.
      shared_ptr<string> vSwitchId_ {};
      // The ID of the zone to which the vSwitch to add to the VPC connection belongs.
      // 
      // You can add up to 10 vSwitches at a time.
      // 
      // If you set **ZoneId**, you must also set **VSwitchId**.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->addZoneMappings_ == nullptr
        && this->clientToken_ == nullptr && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->removeZoneMappings_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->transitRouterAttachmentId_ == nullptr; };
    // addZoneMappings Field Functions 
    bool hasAddZoneMappings() const { return this->addZoneMappings_ != nullptr;};
    void deleteAddZoneMappings() { this->addZoneMappings_ = nullptr;};
    inline const vector<UpdateTransitRouterVpcAttachmentZonesRequest::AddZoneMappings> & getAddZoneMappings() const { DARABONBA_PTR_GET_CONST(addZoneMappings_, vector<UpdateTransitRouterVpcAttachmentZonesRequest::AddZoneMappings>) };
    inline vector<UpdateTransitRouterVpcAttachmentZonesRequest::AddZoneMappings> getAddZoneMappings() { DARABONBA_PTR_GET(addZoneMappings_, vector<UpdateTransitRouterVpcAttachmentZonesRequest::AddZoneMappings>) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setAddZoneMappings(const vector<UpdateTransitRouterVpcAttachmentZonesRequest::AddZoneMappings> & addZoneMappings) { DARABONBA_PTR_SET_VALUE(addZoneMappings_, addZoneMappings) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setAddZoneMappings(vector<UpdateTransitRouterVpcAttachmentZonesRequest::AddZoneMappings> && addZoneMappings) { DARABONBA_PTR_SET_RVALUE(addZoneMappings_, addZoneMappings) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // removeZoneMappings Field Functions 
    bool hasRemoveZoneMappings() const { return this->removeZoneMappings_ != nullptr;};
    void deleteRemoveZoneMappings() { this->removeZoneMappings_ = nullptr;};
    inline const vector<UpdateTransitRouterVpcAttachmentZonesRequest::RemoveZoneMappings> & getRemoveZoneMappings() const { DARABONBA_PTR_GET_CONST(removeZoneMappings_, vector<UpdateTransitRouterVpcAttachmentZonesRequest::RemoveZoneMappings>) };
    inline vector<UpdateTransitRouterVpcAttachmentZonesRequest::RemoveZoneMappings> getRemoveZoneMappings() { DARABONBA_PTR_GET(removeZoneMappings_, vector<UpdateTransitRouterVpcAttachmentZonesRequest::RemoveZoneMappings>) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setRemoveZoneMappings(const vector<UpdateTransitRouterVpcAttachmentZonesRequest::RemoveZoneMappings> & removeZoneMappings) { DARABONBA_PTR_SET_VALUE(removeZoneMappings_, removeZoneMappings) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setRemoveZoneMappings(vector<UpdateTransitRouterVpcAttachmentZonesRequest::RemoveZoneMappings> && removeZoneMappings) { DARABONBA_PTR_SET_RVALUE(removeZoneMappings_, removeZoneMappings) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline UpdateTransitRouterVpcAttachmentZonesRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


  protected:
    // The list of zones and vSwitches to add to the VPC connection.
    shared_ptr<vector<UpdateTransitRouterVpcAttachmentZonesRequest::AddZoneMappings>> addZoneMappings_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the API request as the **ClientToken**. The **RequestId** may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run. The system checks the required parameters, request syntax, and business restrictions. If the request fails the dry run, the corresponding error message is returned. If the request passes the dry run, the error code `DryRunOperation` is returned. The zones and vSwitches of the VPC connection are not modified.
    // - **false** (default): performs a dry run and sends the request. If the request passes the dry run, the zones and vSwitches of the VPC connection are modified.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The list of zones and vSwitches to remove from the VPC connection.
    shared_ptr<vector<UpdateTransitRouterVpcAttachmentZonesRequest::RemoveZoneMappings>> removeZoneMappings_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the VPC connection.
    // 
    // This parameter is required.
    shared_ptr<string> transitRouterAttachmentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
