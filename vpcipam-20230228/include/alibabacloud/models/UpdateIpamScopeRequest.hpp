// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEIPAMSCOPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEIPAMSCOPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class UpdateIpamScopeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIpamScopeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(IpamScopeDescription, ipamScopeDescription_);
      DARABONBA_PTR_TO_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_TO_JSON(IpamScopeName, ipamScopeName_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIpamScopeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(IpamScopeDescription, ipamScopeDescription_);
      DARABONBA_PTR_FROM_JSON(IpamScopeId, ipamScopeId_);
      DARABONBA_PTR_FROM_JSON(IpamScopeName, ipamScopeName_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateIpamScopeRequest() = default ;
    UpdateIpamScopeRequest(const UpdateIpamScopeRequest &) = default ;
    UpdateIpamScopeRequest(UpdateIpamScopeRequest &&) = default ;
    UpdateIpamScopeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIpamScopeRequest() = default ;
    UpdateIpamScopeRequest& operator=(const UpdateIpamScopeRequest &) = default ;
    UpdateIpamScopeRequest& operator=(UpdateIpamScopeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ipamScopeDescription_ == nullptr && this->ipamScopeId_ == nullptr && this->ipamScopeName_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateIpamScopeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateIpamScopeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ipamScopeDescription Field Functions 
    bool hasIpamScopeDescription() const { return this->ipamScopeDescription_ != nullptr;};
    void deleteIpamScopeDescription() { this->ipamScopeDescription_ = nullptr;};
    inline string getIpamScopeDescription() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeDescription_, "") };
    inline UpdateIpamScopeRequest& setIpamScopeDescription(string ipamScopeDescription) { DARABONBA_PTR_SET_VALUE(ipamScopeDescription_, ipamScopeDescription) };


    // ipamScopeId Field Functions 
    bool hasIpamScopeId() const { return this->ipamScopeId_ != nullptr;};
    void deleteIpamScopeId() { this->ipamScopeId_ = nullptr;};
    inline string getIpamScopeId() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeId_, "") };
    inline UpdateIpamScopeRequest& setIpamScopeId(string ipamScopeId) { DARABONBA_PTR_SET_VALUE(ipamScopeId_, ipamScopeId) };


    // ipamScopeName Field Functions 
    bool hasIpamScopeName() const { return this->ipamScopeName_ != nullptr;};
    void deleteIpamScopeName() { this->ipamScopeName_ = nullptr;};
    inline string getIpamScopeName() const { DARABONBA_PTR_GET_DEFAULT(ipamScopeName_, "") };
    inline UpdateIpamScopeRequest& setIpamScopeName(string ipamScopeName) { DARABONBA_PTR_SET_VALUE(ipamScopeName_, ipamScopeName) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateIpamScopeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateIpamScopeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateIpamScopeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateIpamScopeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateIpamScopeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request. Generate a value for this parameter that is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the RequestId of the request as the ClientToken. The RequestId of each request is unique.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: Performs a dry run. The system checks the request for potential issues, including missing required parameters, incorrect request format, and instance status. If the request fails the dry run, an error is returned. If the request passes the dry run, the DryRunOperation error code is returned.
    // 
    // - **false** (Default): Sends a normal request. After the request passes the check, the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The description of the IPAM scope.
    // 
    // The description must be 1 to 256 characters long. It must start with a letter and cannot start with `http://` or `https://`. If you do not specify this parameter, the value is not modified.
    shared_ptr<string> ipamScopeDescription_ {};
    // The ID of the IPAM scope.
    // 
    // This parameter is required.
    shared_ptr<string> ipamScopeId_ {};
    // The name of the IPAM scope.
    // 
    // The name must be 1 to 128 characters long and cannot start with `http://` or `https://`.
    shared_ptr<string> ipamScopeName_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region where the IPAM is hosted. Call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to get the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
