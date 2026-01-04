// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEXPRESSCLOUDCONNECTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEXPRESSCLOUDCONNECTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateExpressCloudConnectionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateExpressCloudConnectionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(ContactMail, contactMail_);
      DARABONBA_PTR_TO_JSON(ContactTel, contactTel_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IDCardNo, IDCardNo_);
      DARABONBA_PTR_TO_JSON(IdcSP, idcSP_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerCity, peerCity_);
      DARABONBA_PTR_TO_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_TO_JSON(PortType, portType_);
      DARABONBA_PTR_TO_JSON(RedundantEccId, redundantEccId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateExpressCloudConnectionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(ContactMail, contactMail_);
      DARABONBA_PTR_FROM_JSON(ContactTel, contactTel_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IDCardNo, IDCardNo_);
      DARABONBA_PTR_FROM_JSON(IdcSP, idcSP_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerCity, peerCity_);
      DARABONBA_PTR_FROM_JSON(PeerLocation, peerLocation_);
      DARABONBA_PTR_FROM_JSON(PortType, portType_);
      DARABONBA_PTR_FROM_JSON(RedundantEccId, redundantEccId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateExpressCloudConnectionRequest() = default ;
    CreateExpressCloudConnectionRequest(const CreateExpressCloudConnectionRequest &) = default ;
    CreateExpressCloudConnectionRequest(CreateExpressCloudConnectionRequest &&) = default ;
    CreateExpressCloudConnectionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateExpressCloudConnectionRequest() = default ;
    CreateExpressCloudConnectionRequest& operator=(const CreateExpressCloudConnectionRequest &) = default ;
    CreateExpressCloudConnectionRequest& operator=(CreateExpressCloudConnectionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bandwidth_ == nullptr
        && this->contactMail_ == nullptr && this->contactTel_ == nullptr && this->description_ == nullptr && this->IDCardNo_ == nullptr && this->idcSP_ == nullptr
        && this->name_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->peerCity_ == nullptr && this->peerLocation_ == nullptr
        && this->portType_ == nullptr && this->redundantEccId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateExpressCloudConnectionRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // contactMail Field Functions 
    bool hasContactMail() const { return this->contactMail_ != nullptr;};
    void deleteContactMail() { this->contactMail_ = nullptr;};
    inline string getContactMail() const { DARABONBA_PTR_GET_DEFAULT(contactMail_, "") };
    inline CreateExpressCloudConnectionRequest& setContactMail(string contactMail) { DARABONBA_PTR_SET_VALUE(contactMail_, contactMail) };


    // contactTel Field Functions 
    bool hasContactTel() const { return this->contactTel_ != nullptr;};
    void deleteContactTel() { this->contactTel_ = nullptr;};
    inline string getContactTel() const { DARABONBA_PTR_GET_DEFAULT(contactTel_, "") };
    inline CreateExpressCloudConnectionRequest& setContactTel(string contactTel) { DARABONBA_PTR_SET_VALUE(contactTel_, contactTel) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateExpressCloudConnectionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // IDCardNo Field Functions 
    bool hasIDCardNo() const { return this->IDCardNo_ != nullptr;};
    void deleteIDCardNo() { this->IDCardNo_ = nullptr;};
    inline string getIDCardNo() const { DARABONBA_PTR_GET_DEFAULT(IDCardNo_, "") };
    inline CreateExpressCloudConnectionRequest& setIDCardNo(string IDCardNo) { DARABONBA_PTR_SET_VALUE(IDCardNo_, IDCardNo) };


    // idcSP Field Functions 
    bool hasIdcSP() const { return this->idcSP_ != nullptr;};
    void deleteIdcSP() { this->idcSP_ = nullptr;};
    inline string getIdcSP() const { DARABONBA_PTR_GET_DEFAULT(idcSP_, "") };
    inline CreateExpressCloudConnectionRequest& setIdcSP(string idcSP) { DARABONBA_PTR_SET_VALUE(idcSP_, idcSP) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateExpressCloudConnectionRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateExpressCloudConnectionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateExpressCloudConnectionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerCity Field Functions 
    bool hasPeerCity() const { return this->peerCity_ != nullptr;};
    void deletePeerCity() { this->peerCity_ = nullptr;};
    inline string getPeerCity() const { DARABONBA_PTR_GET_DEFAULT(peerCity_, "") };
    inline CreateExpressCloudConnectionRequest& setPeerCity(string peerCity) { DARABONBA_PTR_SET_VALUE(peerCity_, peerCity) };


    // peerLocation Field Functions 
    bool hasPeerLocation() const { return this->peerLocation_ != nullptr;};
    void deletePeerLocation() { this->peerLocation_ = nullptr;};
    inline string getPeerLocation() const { DARABONBA_PTR_GET_DEFAULT(peerLocation_, "") };
    inline CreateExpressCloudConnectionRequest& setPeerLocation(string peerLocation) { DARABONBA_PTR_SET_VALUE(peerLocation_, peerLocation) };


    // portType Field Functions 
    bool hasPortType() const { return this->portType_ != nullptr;};
    void deletePortType() { this->portType_ = nullptr;};
    inline string getPortType() const { DARABONBA_PTR_GET_DEFAULT(portType_, "") };
    inline CreateExpressCloudConnectionRequest& setPortType(string portType) { DARABONBA_PTR_SET_VALUE(portType_, portType) };


    // redundantEccId Field Functions 
    bool hasRedundantEccId() const { return this->redundantEccId_ != nullptr;};
    void deleteRedundantEccId() { this->redundantEccId_ = nullptr;};
    inline string getRedundantEccId() const { DARABONBA_PTR_GET_DEFAULT(redundantEccId_, "") };
    inline CreateExpressCloudConnectionRequest& setRedundantEccId(string redundantEccId) { DARABONBA_PTR_SET_VALUE(redundantEccId_, redundantEccId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateExpressCloudConnectionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateExpressCloudConnectionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateExpressCloudConnectionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The bandwidth for ECC, which corresponds to the bandwidth for the underlying circuit.
    // 
    // Unit: Mbit/s.
    // 
    // This parameter is required.
    shared_ptr<int32_t> bandwidth_ {};
    // The email address of the contact who applies for ECC.
    shared_ptr<string> contactMail_ {};
    // The phone number of the contact who applies for ECC.
    shared_ptr<string> contactTel_ {};
    // The description of ECC.
    // 
    // The description must be 2 to 256 characters in length. It must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The ID card number of the contact who applies for ECC.
    shared_ptr<string> IDCardNo_ {};
    // The Internet service provider (ISP) for the data center.
    // 
    // This parameter is required.
    shared_ptr<string> idcSP_ {};
    // The name of the ECC instance.
    // 
    // The name must be 2 to 128 characters in length and can contain letters, digits, periods (.), underscores (_), and hyphens (-). It must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The city where the data center is located.
    shared_ptr<string> peerCity_ {};
    // The geographical location of the data center.
    // 
    // > It must be accurate to house number-floor-room number-server rack number.
    // 
    // This parameter is required.
    shared_ptr<string> peerLocation_ {};
    // The port of the Express Connect circuit. Valid values:
    // 
    // *   100Base-T
    // *   1000Base-T
    // *   1000Base-LX
    // *   10GBase-T
    // *   10GBase-LR
    shared_ptr<string> portType_ {};
    // The ID of the standby Express Connect circuit.
    shared_ptr<string> redundantEccId_ {};
    // The region ID of the ECC instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
