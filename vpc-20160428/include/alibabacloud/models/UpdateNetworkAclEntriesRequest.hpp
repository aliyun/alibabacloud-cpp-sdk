// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENETWORKACLENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENETWORKACLENTRIESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateNetworkAclEntriesRequestEgressAclEntries.hpp>
#include <alibabacloud/models/UpdateNetworkAclEntriesRequestIngressAclEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateNetworkAclEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNetworkAclEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(EgressAclEntries, egressAclEntries_);
      DARABONBA_PTR_TO_JSON(IngressAclEntries, ingressAclEntries_);
      DARABONBA_PTR_TO_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(UpdateEgressAclEntries, updateEgressAclEntries_);
      DARABONBA_PTR_TO_JSON(UpdateIngressAclEntries, updateIngressAclEntries_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNetworkAclEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(EgressAclEntries, egressAclEntries_);
      DARABONBA_PTR_FROM_JSON(IngressAclEntries, ingressAclEntries_);
      DARABONBA_PTR_FROM_JSON(NetworkAclId, networkAclId_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(UpdateEgressAclEntries, updateEgressAclEntries_);
      DARABONBA_PTR_FROM_JSON(UpdateIngressAclEntries, updateIngressAclEntries_);
    };
    UpdateNetworkAclEntriesRequest() = default ;
    UpdateNetworkAclEntriesRequest(const UpdateNetworkAclEntriesRequest &) = default ;
    UpdateNetworkAclEntriesRequest(UpdateNetworkAclEntriesRequest &&) = default ;
    UpdateNetworkAclEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNetworkAclEntriesRequest() = default ;
    UpdateNetworkAclEntriesRequest& operator=(const UpdateNetworkAclEntriesRequest &) = default ;
    UpdateNetworkAclEntriesRequest& operator=(UpdateNetworkAclEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dryRun_ != nullptr && this->egressAclEntries_ != nullptr && this->ingressAclEntries_ != nullptr && this->networkAclId_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->updateEgressAclEntries_ != nullptr
        && this->updateIngressAclEntries_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateNetworkAclEntriesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateNetworkAclEntriesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // egressAclEntries Field Functions 
    bool hasEgressAclEntries() const { return this->egressAclEntries_ != nullptr;};
    void deleteEgressAclEntries() { this->egressAclEntries_ = nullptr;};
    inline const vector<UpdateNetworkAclEntriesRequestEgressAclEntries> & egressAclEntries() const { DARABONBA_PTR_GET_CONST(egressAclEntries_, vector<UpdateNetworkAclEntriesRequestEgressAclEntries>) };
    inline vector<UpdateNetworkAclEntriesRequestEgressAclEntries> egressAclEntries() { DARABONBA_PTR_GET(egressAclEntries_, vector<UpdateNetworkAclEntriesRequestEgressAclEntries>) };
    inline UpdateNetworkAclEntriesRequest& setEgressAclEntries(const vector<UpdateNetworkAclEntriesRequestEgressAclEntries> & egressAclEntries) { DARABONBA_PTR_SET_VALUE(egressAclEntries_, egressAclEntries) };
    inline UpdateNetworkAclEntriesRequest& setEgressAclEntries(vector<UpdateNetworkAclEntriesRequestEgressAclEntries> && egressAclEntries) { DARABONBA_PTR_SET_RVALUE(egressAclEntries_, egressAclEntries) };


    // ingressAclEntries Field Functions 
    bool hasIngressAclEntries() const { return this->ingressAclEntries_ != nullptr;};
    void deleteIngressAclEntries() { this->ingressAclEntries_ = nullptr;};
    inline const vector<UpdateNetworkAclEntriesRequestIngressAclEntries> & ingressAclEntries() const { DARABONBA_PTR_GET_CONST(ingressAclEntries_, vector<UpdateNetworkAclEntriesRequestIngressAclEntries>) };
    inline vector<UpdateNetworkAclEntriesRequestIngressAclEntries> ingressAclEntries() { DARABONBA_PTR_GET(ingressAclEntries_, vector<UpdateNetworkAclEntriesRequestIngressAclEntries>) };
    inline UpdateNetworkAclEntriesRequest& setIngressAclEntries(const vector<UpdateNetworkAclEntriesRequestIngressAclEntries> & ingressAclEntries) { DARABONBA_PTR_SET_VALUE(ingressAclEntries_, ingressAclEntries) };
    inline UpdateNetworkAclEntriesRequest& setIngressAclEntries(vector<UpdateNetworkAclEntriesRequestIngressAclEntries> && ingressAclEntries) { DARABONBA_PTR_SET_RVALUE(ingressAclEntries_, ingressAclEntries) };


    // networkAclId Field Functions 
    bool hasNetworkAclId() const { return this->networkAclId_ != nullptr;};
    void deleteNetworkAclId() { this->networkAclId_ = nullptr;};
    inline string networkAclId() const { DARABONBA_PTR_GET_DEFAULT(networkAclId_, "") };
    inline UpdateNetworkAclEntriesRequest& setNetworkAclId(string networkAclId) { DARABONBA_PTR_SET_VALUE(networkAclId_, networkAclId) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateNetworkAclEntriesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateNetworkAclEntriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateNetworkAclEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateNetworkAclEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateNetworkAclEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // updateEgressAclEntries Field Functions 
    bool hasUpdateEgressAclEntries() const { return this->updateEgressAclEntries_ != nullptr;};
    void deleteUpdateEgressAclEntries() { this->updateEgressAclEntries_ = nullptr;};
    inline bool updateEgressAclEntries() const { DARABONBA_PTR_GET_DEFAULT(updateEgressAclEntries_, false) };
    inline UpdateNetworkAclEntriesRequest& setUpdateEgressAclEntries(bool updateEgressAclEntries) { DARABONBA_PTR_SET_VALUE(updateEgressAclEntries_, updateEgressAclEntries) };


    // updateIngressAclEntries Field Functions 
    bool hasUpdateIngressAclEntries() const { return this->updateIngressAclEntries_ != nullptr;};
    void deleteUpdateIngressAclEntries() { this->updateIngressAclEntries_ = nullptr;};
    inline bool updateIngressAclEntries() const { DARABONBA_PTR_GET_DEFAULT(updateIngressAclEntries_, false) };
    inline UpdateNetworkAclEntriesRequest& setUpdateIngressAclEntries(bool updateIngressAclEntries) { DARABONBA_PTR_SET_VALUE(updateIngressAclEntries_, updateIngressAclEntries) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the request for potential issues, including the AccessKey pair, the permissions of the RAM user, and the required parameters. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The information about the outbound rules.
    std::shared_ptr<vector<UpdateNetworkAclEntriesRequestEgressAclEntries>> egressAclEntries_ = nullptr;
    // The information about the inbound rule.
    std::shared_ptr<vector<UpdateNetworkAclEntriesRequestIngressAclEntries>> ingressAclEntries_ = nullptr;
    // The ID of the network ACL.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkAclId_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the network ACL.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to update outbound rules. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  This parameter cannot be used to add outbound rules to ACLs. If you want to add more outbound rules to ACLs, specify both the existing rule and the rule that you want to add when you call this API operation. If you specify only the rule that you want to add, it overwrites the existing rule.
    std::shared_ptr<bool> updateEgressAclEntries_ = nullptr;
    // Specifies whether to update inbound rules. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    // 
    // >  This parameter cannot be used to add inbound rules to ACLs. If you want to add more inbound rules to ACLs, you must specify both the existing rule and the rule that you want to add when you call this API operation. If you specify only the rule that you want to add, it overwrites the existing rule.
    std::shared_ptr<bool> updateIngressAclEntries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
