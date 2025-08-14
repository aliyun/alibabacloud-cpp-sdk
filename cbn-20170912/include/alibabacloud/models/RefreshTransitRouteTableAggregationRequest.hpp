// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFRESHTRANSITROUTETABLEAGGREGATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REFRESHTRANSITROUTETABLEAGGREGATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class RefreshTransitRouteTableAggregationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefreshTransitRouteTableAggregationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableId, transitRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, RefreshTransitRouteTableAggregationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableId, transitRouteTableId_);
    };
    RefreshTransitRouteTableAggregationRequest() = default ;
    RefreshTransitRouteTableAggregationRequest(const RefreshTransitRouteTableAggregationRequest &) = default ;
    RefreshTransitRouteTableAggregationRequest(RefreshTransitRouteTableAggregationRequest &&) = default ;
    RefreshTransitRouteTableAggregationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefreshTransitRouteTableAggregationRequest() = default ;
    RefreshTransitRouteTableAggregationRequest& operator=(const RefreshTransitRouteTableAggregationRequest &) = default ;
    RefreshTransitRouteTableAggregationRequest& operator=(RefreshTransitRouteTableAggregationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->transitRouteTableAggregationCidr_ != nullptr
        && this->transitRouteTableId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RefreshTransitRouteTableAggregationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RefreshTransitRouteTableAggregationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RefreshTransitRouteTableAggregationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RefreshTransitRouteTableAggregationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RefreshTransitRouteTableAggregationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouteTableAggregationCidr Field Functions 
    bool hasTransitRouteTableAggregationCidr() const { return this->transitRouteTableAggregationCidr_ != nullptr;};
    void deleteTransitRouteTableAggregationCidr() { this->transitRouteTableAggregationCidr_ = nullptr;};
    inline string transitRouteTableAggregationCidr() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableAggregationCidr_, "") };
    inline RefreshTransitRouteTableAggregationRequest& setTransitRouteTableAggregationCidr(string transitRouteTableAggregationCidr) { DARABONBA_PTR_SET_VALUE(transitRouteTableAggregationCidr_, transitRouteTableAggregationCidr) };


    // transitRouteTableId Field Functions 
    bool hasTransitRouteTableId() const { return this->transitRouteTableId_ != nullptr;};
    void deleteTransitRouteTableId() { this->transitRouteTableId_ = nullptr;};
    inline string transitRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableId_, "") };
    inline RefreshTransitRouteTableAggregationRequest& setTransitRouteTableId(string transitRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouteTableId_, transitRouteTableId) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> transitRouteTableAggregationCidr_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> transitRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
