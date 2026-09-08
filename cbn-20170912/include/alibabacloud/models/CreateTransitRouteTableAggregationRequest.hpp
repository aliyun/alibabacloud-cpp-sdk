// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRANSITROUTETABLEAGGREGATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRANSITROUTETABLEAGGREGATIONREQUEST_HPP_
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
  class CreateTransitRouteTableAggregationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTransitRouteTableAggregationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableAggregationDescription, transitRouteTableAggregationDescription_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableAggregationName, transitRouteTableAggregationName_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableAggregationScope, transitRouteTableAggregationScope_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableAggregationScopeList, transitRouteTableAggregationScopeList_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableId, transitRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTransitRouteTableAggregationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableAggregationDescription, transitRouteTableAggregationDescription_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableAggregationName, transitRouteTableAggregationName_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableAggregationScope, transitRouteTableAggregationScope_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableAggregationScopeList, transitRouteTableAggregationScopeList_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableId, transitRouteTableId_);
    };
    CreateTransitRouteTableAggregationRequest() = default ;
    CreateTransitRouteTableAggregationRequest(const CreateTransitRouteTableAggregationRequest &) = default ;
    CreateTransitRouteTableAggregationRequest(CreateTransitRouteTableAggregationRequest &&) = default ;
    CreateTransitRouteTableAggregationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTransitRouteTableAggregationRequest() = default ;
    CreateTransitRouteTableAggregationRequest& operator=(const CreateTransitRouteTableAggregationRequest &) = default ;
    CreateTransitRouteTableAggregationRequest& operator=(CreateTransitRouteTableAggregationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->transitRouteTableAggregationCidr_ == nullptr && this->transitRouteTableAggregationDescription_ == nullptr && this->transitRouteTableAggregationName_ == nullptr && this->transitRouteTableAggregationScope_ == nullptr && this->transitRouteTableAggregationScopeList_ == nullptr
        && this->transitRouteTableId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTransitRouteTableAggregationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTransitRouteTableAggregationRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTransitRouteTableAggregationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTransitRouteTableAggregationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTransitRouteTableAggregationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTransitRouteTableAggregationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouteTableAggregationCidr Field Functions 
    bool hasTransitRouteTableAggregationCidr() const { return this->transitRouteTableAggregationCidr_ != nullptr;};
    void deleteTransitRouteTableAggregationCidr() { this->transitRouteTableAggregationCidr_ = nullptr;};
    inline string getTransitRouteTableAggregationCidr() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableAggregationCidr_, "") };
    inline CreateTransitRouteTableAggregationRequest& setTransitRouteTableAggregationCidr(string transitRouteTableAggregationCidr) { DARABONBA_PTR_SET_VALUE(transitRouteTableAggregationCidr_, transitRouteTableAggregationCidr) };


    // transitRouteTableAggregationDescription Field Functions 
    bool hasTransitRouteTableAggregationDescription() const { return this->transitRouteTableAggregationDescription_ != nullptr;};
    void deleteTransitRouteTableAggregationDescription() { this->transitRouteTableAggregationDescription_ = nullptr;};
    inline string getTransitRouteTableAggregationDescription() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableAggregationDescription_, "") };
    inline CreateTransitRouteTableAggregationRequest& setTransitRouteTableAggregationDescription(string transitRouteTableAggregationDescription) { DARABONBA_PTR_SET_VALUE(transitRouteTableAggregationDescription_, transitRouteTableAggregationDescription) };


    // transitRouteTableAggregationName Field Functions 
    bool hasTransitRouteTableAggregationName() const { return this->transitRouteTableAggregationName_ != nullptr;};
    void deleteTransitRouteTableAggregationName() { this->transitRouteTableAggregationName_ = nullptr;};
    inline string getTransitRouteTableAggregationName() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableAggregationName_, "") };
    inline CreateTransitRouteTableAggregationRequest& setTransitRouteTableAggregationName(string transitRouteTableAggregationName) { DARABONBA_PTR_SET_VALUE(transitRouteTableAggregationName_, transitRouteTableAggregationName) };


    // transitRouteTableAggregationScope Field Functions 
    bool hasTransitRouteTableAggregationScope() const { return this->transitRouteTableAggregationScope_ != nullptr;};
    void deleteTransitRouteTableAggregationScope() { this->transitRouteTableAggregationScope_ = nullptr;};
    inline string getTransitRouteTableAggregationScope() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableAggregationScope_, "") };
    inline CreateTransitRouteTableAggregationRequest& setTransitRouteTableAggregationScope(string transitRouteTableAggregationScope) { DARABONBA_PTR_SET_VALUE(transitRouteTableAggregationScope_, transitRouteTableAggregationScope) };


    // transitRouteTableAggregationScopeList Field Functions 
    bool hasTransitRouteTableAggregationScopeList() const { return this->transitRouteTableAggregationScopeList_ != nullptr;};
    void deleteTransitRouteTableAggregationScopeList() { this->transitRouteTableAggregationScopeList_ = nullptr;};
    inline const vector<string> & getTransitRouteTableAggregationScopeList() const { DARABONBA_PTR_GET_CONST(transitRouteTableAggregationScopeList_, vector<string>) };
    inline vector<string> getTransitRouteTableAggregationScopeList() { DARABONBA_PTR_GET(transitRouteTableAggregationScopeList_, vector<string>) };
    inline CreateTransitRouteTableAggregationRequest& setTransitRouteTableAggregationScopeList(const vector<string> & transitRouteTableAggregationScopeList) { DARABONBA_PTR_SET_VALUE(transitRouteTableAggregationScopeList_, transitRouteTableAggregationScopeList) };
    inline CreateTransitRouteTableAggregationRequest& setTransitRouteTableAggregationScopeList(vector<string> && transitRouteTableAggregationScopeList) { DARABONBA_PTR_SET_RVALUE(transitRouteTableAggregationScopeList_, transitRouteTableAggregationScopeList) };


    // transitRouteTableId Field Functions 
    bool hasTransitRouteTableId() const { return this->transitRouteTableId_ != nullptr;};
    void deleteTransitRouteTableId() { this->transitRouteTableId_ = nullptr;};
    inline string getTransitRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableId_, "") };
    inline CreateTransitRouteTableAggregationRequest& setTransitRouteTableId(string transitRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouteTableId_, transitRouteTableId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >If you do not specify this parameter, the system automatically uses the RequestId of the API request as the ClientToken. The RequestId may be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. The dry run checks items such as permissions and instance status. Valid values:
    // 
    // - **false** (default): sends a normal request and directly creates the aggregate route after the request passes the check.
    // - **true**: sends a check request without creating the aggregate route. The check items include required parameters and request format. If the check fails, the corresponding error is returned. If the check succeeds, the error code `DryRunOperation` is returned.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The destination CIDR block of the aggregate route.
    // 
    // > The following CIDR blocks are not supported:
    // - CIDR blocks that start with "0" or "100.64"
    // - Multicast addresses (224.0.0.1 to 239.255.255.254)
    // 
    // This parameter is required.
    shared_ptr<string> transitRouteTableAggregationCidr_ {};
    // The description of the aggregate route.
    // 
    // The description can be empty or 1 to 256 characters in length and cannot start with http:// or https://.
    shared_ptr<string> transitRouteTableAggregationDescription_ {};
    // The name of the aggregate route.
    // 
    // The name can be empty or 1 to 128 characters in length and cannot start with http:// or https://.
    shared_ptr<string> transitRouteTableAggregationName_ {};
    // The propagation scope of the aggregate route.
    // 
    // Set the value to **VPC**, which indicates that the aggregate route is propagated to all VPC-connected instances that have established an associated forwarding relationship with the current Enterprise Edition transit router route table and have the route synchronization feature enabled.
    shared_ptr<string> transitRouteTableAggregationScope_ {};
    // The propagation scope list of the aggregate route.
    // >You must specify at least one of the propagation scope and the propagation scope list. We recommend that you use the propagation scope list. The elements in the propagation scope list cannot duplicate the value of the propagation scope.
    shared_ptr<vector<string>> transitRouteTableAggregationScopeList_ {};
    // The ID of the Enterprise Edition transit router route table.
    // 
    // This parameter is required.
    shared_ptr<string> transitRouteTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
