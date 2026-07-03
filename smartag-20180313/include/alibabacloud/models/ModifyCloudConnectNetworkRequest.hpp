// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDCONNECTNETWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDCONNECTNETWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ModifyCloudConnectNetworkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudConnectNetworkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CcnId, ccnId_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InterworkingStatus, interworkingStatus_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudConnectNetworkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CcnId, ccnId_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InterworkingStatus, interworkingStatus_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyCloudConnectNetworkRequest() = default ;
    ModifyCloudConnectNetworkRequest(const ModifyCloudConnectNetworkRequest &) = default ;
    ModifyCloudConnectNetworkRequest(ModifyCloudConnectNetworkRequest &&) = default ;
    ModifyCloudConnectNetworkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudConnectNetworkRequest() = default ;
    ModifyCloudConnectNetworkRequest& operator=(const ModifyCloudConnectNetworkRequest &) = default ;
    ModifyCloudConnectNetworkRequest& operator=(ModifyCloudConnectNetworkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ccnId_ == nullptr
        && this->cidrBlock_ == nullptr && this->description_ == nullptr && this->interworkingStatus_ == nullptr && this->name_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // ccnId Field Functions 
    bool hasCcnId() const { return this->ccnId_ != nullptr;};
    void deleteCcnId() { this->ccnId_ = nullptr;};
    inline string getCcnId() const { DARABONBA_PTR_GET_DEFAULT(ccnId_, "") };
    inline ModifyCloudConnectNetworkRequest& setCcnId(string ccnId) { DARABONBA_PTR_SET_VALUE(ccnId_, ccnId) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline ModifyCloudConnectNetworkRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyCloudConnectNetworkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // interworkingStatus Field Functions 
    bool hasInterworkingStatus() const { return this->interworkingStatus_ != nullptr;};
    void deleteInterworkingStatus() { this->interworkingStatus_ = nullptr;};
    inline string getInterworkingStatus() const { DARABONBA_PTR_GET_DEFAULT(interworkingStatus_, "") };
    inline ModifyCloudConnectNetworkRequest& setInterworkingStatus(string interworkingStatus) { DARABONBA_PTR_SET_VALUE(interworkingStatus_, interworkingStatus) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyCloudConnectNetworkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyCloudConnectNetworkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCloudConnectNetworkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudConnectNetworkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyCloudConnectNetworkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCloudConnectNetworkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The ID of the CCN instance.
    // 
    // This parameter is required.
    shared_ptr<string> ccnId_ {};
    // The private CIDR block.
    shared_ptr<string> cidrBlock_ {};
    // The description of the CCN instance.
    // 
    // The description must be 2 to 256 characters in length. The description must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to allow the SAG instances associated with the same CCN instance to communicate with each other.
    // 
    // - **enable**: yes
    // 
    // - **disable**: no
    shared_ptr<string> interworkingStatus_ {};
    // The name of the CCN instance.
    // 
    // The name must be 2 to 128 characters in length, and can contain digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter and cannot start with `http://` or `https://`.
    shared_ptr<string> name_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the CCN instance is deployed.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
