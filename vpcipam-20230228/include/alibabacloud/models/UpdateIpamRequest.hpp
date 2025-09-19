// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIPAMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIPAMREQUEST_HPP_
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
  class UpdateIpamRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIpamRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddOperatingRegion, addOperatingRegion_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamDescription, ipamDescription_);
      DARABONBA_PTR_TO_JSON(IpamId, ipamId_);
      DARABONBA_PTR_TO_JSON(IpamName, ipamName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RemoveOperatingRegion, removeOperatingRegion_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIpamRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddOperatingRegion, addOperatingRegion_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamDescription, ipamDescription_);
      DARABONBA_PTR_FROM_JSON(IpamId, ipamId_);
      DARABONBA_PTR_FROM_JSON(IpamName, ipamName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RemoveOperatingRegion, removeOperatingRegion_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateIpamRequest() = default ;
    UpdateIpamRequest(const UpdateIpamRequest &) = default ;
    UpdateIpamRequest(UpdateIpamRequest &&) = default ;
    UpdateIpamRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIpamRequest() = default ;
    UpdateIpamRequest& operator=(const UpdateIpamRequest &) = default ;
    UpdateIpamRequest& operator=(UpdateIpamRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addOperatingRegion_ != nullptr
        && this->clientToken_ != nullptr && this->dryRun_ != nullptr && this->ipamDescription_ != nullptr && this->ipamId_ != nullptr && this->ipamName_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->removeOperatingRegion_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // addOperatingRegion Field Functions 
    bool hasAddOperatingRegion() const { return this->addOperatingRegion_ != nullptr;};
    void deleteAddOperatingRegion() { this->addOperatingRegion_ = nullptr;};
    inline const vector<string> & addOperatingRegion() const { DARABONBA_PTR_GET_CONST(addOperatingRegion_, vector<string>) };
    inline vector<string> addOperatingRegion() { DARABONBA_PTR_GET(addOperatingRegion_, vector<string>) };
    inline UpdateIpamRequest& setAddOperatingRegion(const vector<string> & addOperatingRegion) { DARABONBA_PTR_SET_VALUE(addOperatingRegion_, addOperatingRegion) };
    inline UpdateIpamRequest& setAddOperatingRegion(vector<string> && addOperatingRegion) { DARABONBA_PTR_SET_RVALUE(addOperatingRegion_, addOperatingRegion) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateIpamRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateIpamRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamDescription Field Functions 
    bool hasIpamDescription() const { return this->ipamDescription_ != nullptr;};
    void deleteIpamDescription() { this->ipamDescription_ = nullptr;};
    inline string ipamDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamDescription_, "") };
    inline UpdateIpamRequest& setIpamDescription(string ipamDescription) { DARABONBA_PTR_SET_VALUE(ipamDescription_, ipamDescription) };


    // ipamId Field Functions 
    bool hasIpamId() const { return this->ipamId_ != nullptr;};
    void deleteIpamId() { this->ipamId_ = nullptr;};
    inline string ipamId() const { DARABONBA_PTR_GET_DEFAULT(ipamId_, "") };
    inline UpdateIpamRequest& setIpamId(string ipamId) { DARABONBA_PTR_SET_VALUE(ipamId_, ipamId) };


    // ipamName Field Functions 
    bool hasIpamName() const { return this->ipamName_ != nullptr;};
    void deleteIpamName() { this->ipamName_ = nullptr;};
    inline string ipamName() const { DARABONBA_PTR_GET_DEFAULT(ipamName_, "") };
    inline UpdateIpamRequest& setIpamName(string ipamName) { DARABONBA_PTR_SET_VALUE(ipamName_, ipamName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateIpamRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateIpamRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateIpamRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // removeOperatingRegion Field Functions 
    bool hasRemoveOperatingRegion() const { return this->removeOperatingRegion_ != nullptr;};
    void deleteRemoveOperatingRegion() { this->removeOperatingRegion_ = nullptr;};
    inline const vector<string> & removeOperatingRegion() const { DARABONBA_PTR_GET_CONST(removeOperatingRegion_, vector<string>) };
    inline vector<string> removeOperatingRegion() { DARABONBA_PTR_GET(removeOperatingRegion_, vector<string>) };
    inline UpdateIpamRequest& setRemoveOperatingRegion(const vector<string> & removeOperatingRegion) { DARABONBA_PTR_SET_VALUE(removeOperatingRegion_, removeOperatingRegion) };
    inline UpdateIpamRequest& setRemoveOperatingRegion(vector<string> && removeOperatingRegion) { DARABONBA_PTR_SET_RVALUE(removeOperatingRegion_, removeOperatingRegion) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateIpamRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateIpamRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The effective region that you want to add.
    std::shared_ptr<vector<string>> addOperatingRegion_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The description of the IPAM.
    // 
    // It must be 2 to 256 characters in length and must start with a letter. It cannot start with `http://` or `https://`. The default value is empty.
    std::shared_ptr<string> ipamDescription_ = nullptr;
    // The ID of the IPAM.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipamId_ = nullptr;
    // The name of the IPAM.
    // 
    // It must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> ipamName_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the IPAM instance is hosted. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The effective region that you want to remove.
    std::shared_ptr<vector<string>> removeOperatingRegion_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
