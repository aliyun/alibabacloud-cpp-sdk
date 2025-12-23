// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIPAMRESOURCEDISCOVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIPAMRESOURCEDISCOVERYREQUEST_HPP_
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
  class UpdateIpamResourceDiscoveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIpamResourceDiscoveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddOperatingRegion, addOperatingRegion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryDescription, ipamResourceDiscoveryDescription_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_TO_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveOperatingRegion, removeOperatingRegion_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIpamResourceDiscoveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddOperatingRegion, addOperatingRegion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryDescription, ipamResourceDiscoveryDescription_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryId, ipamResourceDiscoveryId_);
      DARABONBA_PTR_FROM_JSON(IpamResourceDiscoveryName, ipamResourceDiscoveryName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveOperatingRegion, removeOperatingRegion_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateIpamResourceDiscoveryRequest() = default ;
    UpdateIpamResourceDiscoveryRequest(const UpdateIpamResourceDiscoveryRequest &) = default ;
    UpdateIpamResourceDiscoveryRequest(UpdateIpamResourceDiscoveryRequest &&) = default ;
    UpdateIpamResourceDiscoveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIpamResourceDiscoveryRequest() = default ;
    UpdateIpamResourceDiscoveryRequest& operator=(const UpdateIpamResourceDiscoveryRequest &) = default ;
    UpdateIpamResourceDiscoveryRequest& operator=(UpdateIpamResourceDiscoveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addOperatingRegion_ == nullptr
        && return this->clientToken_ == nullptr && return this->dryRun_ == nullptr && return this->ipamResourceDiscoveryDescription_ == nullptr && return this->ipamResourceDiscoveryId_ == nullptr && return this->ipamResourceDiscoveryName_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->removeOperatingRegion_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr; };
    // addOperatingRegion Field Functions 
    bool hasAddOperatingRegion() const { return this->addOperatingRegion_ != nullptr;};
    void deleteAddOperatingRegion() { this->addOperatingRegion_ = nullptr;};
    inline const vector<string> & addOperatingRegion() const { DARABONBA_PTR_GET_CONST(addOperatingRegion_, vector<string>) };
    inline vector<string> addOperatingRegion() { DARABONBA_PTR_GET(addOperatingRegion_, vector<string>) };
    inline UpdateIpamResourceDiscoveryRequest& setAddOperatingRegion(const vector<string> & addOperatingRegion) { DARABONBA_PTR_SET_VALUE(addOperatingRegion_, addOperatingRegion) };
    inline UpdateIpamResourceDiscoveryRequest& setAddOperatingRegion(vector<string> && addOperatingRegion) { DARABONBA_PTR_SET_RVALUE(addOperatingRegion_, addOperatingRegion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateIpamResourceDiscoveryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateIpamResourceDiscoveryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamResourceDiscoveryDescription Field Functions 
    bool hasIpamResourceDiscoveryDescription() const { return this->ipamResourceDiscoveryDescription_ != nullptr;};
    void deleteIpamResourceDiscoveryDescription() { this->ipamResourceDiscoveryDescription_ = nullptr;};
    inline string ipamResourceDiscoveryDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryDescription_, "") };
    inline UpdateIpamResourceDiscoveryRequest& setIpamResourceDiscoveryDescription(string ipamResourceDiscoveryDescription) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryDescription_, ipamResourceDiscoveryDescription) };


    // ipamResourceDiscoveryId Field Functions 
    bool hasIpamResourceDiscoveryId() const { return this->ipamResourceDiscoveryId_ != nullptr;};
    void deleteIpamResourceDiscoveryId() { this->ipamResourceDiscoveryId_ = nullptr;};
    inline string ipamResourceDiscoveryId() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryId_, "") };
    inline UpdateIpamResourceDiscoveryRequest& setIpamResourceDiscoveryId(string ipamResourceDiscoveryId) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryId_, ipamResourceDiscoveryId) };


    // ipamResourceDiscoveryName Field Functions 
    bool hasIpamResourceDiscoveryName() const { return this->ipamResourceDiscoveryName_ != nullptr;};
    void deleteIpamResourceDiscoveryName() { this->ipamResourceDiscoveryName_ = nullptr;};
    inline string ipamResourceDiscoveryName() const { DARABONBA_PTR_GET_DEFAULT(ipamResourceDiscoveryName_, "") };
    inline UpdateIpamResourceDiscoveryRequest& setIpamResourceDiscoveryName(string ipamResourceDiscoveryName) { DARABONBA_PTR_SET_VALUE(ipamResourceDiscoveryName_, ipamResourceDiscoveryName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateIpamResourceDiscoveryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateIpamResourceDiscoveryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateIpamResourceDiscoveryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeOperatingRegion Field Functions 
    bool hasRemoveOperatingRegion() const { return this->removeOperatingRegion_ != nullptr;};
    void deleteRemoveOperatingRegion() { this->removeOperatingRegion_ = nullptr;};
    inline const vector<string> & removeOperatingRegion() const { DARABONBA_PTR_GET_CONST(removeOperatingRegion_, vector<string>) };
    inline vector<string> removeOperatingRegion() { DARABONBA_PTR_GET(removeOperatingRegion_, vector<string>) };
    inline UpdateIpamResourceDiscoveryRequest& setRemoveOperatingRegion(const vector<string> & removeOperatingRegion) { DARABONBA_PTR_SET_VALUE(removeOperatingRegion_, removeOperatingRegion) };
    inline UpdateIpamResourceDiscoveryRequest& setRemoveOperatingRegion(vector<string> && removeOperatingRegion) { DARABONBA_PTR_SET_RVALUE(removeOperatingRegion_, removeOperatingRegion) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateIpamResourceDiscoveryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateIpamResourceDiscoveryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The list of effective regions to add.
    std::shared_ptr<vector<string>> addOperatingRegion_ = nullptr;
    // The client token used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform the dry run. Valid values:
    // 
    // *   **true**: Performs a dry run without modifying the resource discovery instance. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error code is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): Performs a dry run and the actual request. If the request passes the check, an HTTP 2xx status code is returned and the resource discovery instance is modified.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The description of resource discovery.
    std::shared_ptr<string> ipamResourceDiscoveryDescription_ = nullptr;
    // The ID of resource discovery instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipamResourceDiscoveryId_ = nullptr;
    // The name of the resource discovery.
    std::shared_ptr<string> ipamResourceDiscoveryName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The request region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of effective regions to remove.
    std::shared_ptr<vector<string>> removeOperatingRegion_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
