// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEASSOCIATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEASSOCIATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteTableAssociationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTableAssociationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentResourceId, transitRouterAttachmentResourceId_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentResourceType, transitRouterAttachmentResourceType_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTableAssociationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentResourceId, transitRouterAttachmentResourceId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentResourceType, transitRouterAttachmentResourceType_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTableId, transitRouterRouteTableId_);
    };
    ListTransitRouterRouteTableAssociationsRequest() = default ;
    ListTransitRouterRouteTableAssociationsRequest(const ListTransitRouterRouteTableAssociationsRequest &) = default ;
    ListTransitRouterRouteTableAssociationsRequest(ListTransitRouterRouteTableAssociationsRequest &&) = default ;
    ListTransitRouterRouteTableAssociationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTableAssociationsRequest() = default ;
    ListTransitRouterRouteTableAssociationsRequest& operator=(const ListTransitRouterRouteTableAssociationsRequest &) = default ;
    ListTransitRouterRouteTableAssociationsRequest& operator=(ListTransitRouterRouteTableAssociationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->status_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterAttachmentResourceId_ != nullptr && this->transitRouterAttachmentResourceType_ != nullptr && this->transitRouterRouteTableId_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteTableAssociationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteTableAssociationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTransitRouterRouteTableAssociationsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTransitRouterRouteTableAssociationsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTransitRouterRouteTableAssociationsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterRouteTableAssociationsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterRouteTableAssociationsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterRouteTableAssociationsRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterAttachmentResourceId Field Functions 
    bool hasTransitRouterAttachmentResourceId() const { return this->transitRouterAttachmentResourceId_ != nullptr;};
    void deleteTransitRouterAttachmentResourceId() { this->transitRouterAttachmentResourceId_ = nullptr;};
    inline string transitRouterAttachmentResourceId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentResourceId_, "") };
    inline ListTransitRouterRouteTableAssociationsRequest& setTransitRouterAttachmentResourceId(string transitRouterAttachmentResourceId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentResourceId_, transitRouterAttachmentResourceId) };


    // transitRouterAttachmentResourceType Field Functions 
    bool hasTransitRouterAttachmentResourceType() const { return this->transitRouterAttachmentResourceType_ != nullptr;};
    void deleteTransitRouterAttachmentResourceType() { this->transitRouterAttachmentResourceType_ = nullptr;};
    inline string transitRouterAttachmentResourceType() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentResourceType_, "") };
    inline ListTransitRouterRouteTableAssociationsRequest& setTransitRouterAttachmentResourceType(string transitRouterAttachmentResourceType) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentResourceType_, transitRouterAttachmentResourceType) };


    // transitRouterRouteTableId Field Functions 
    bool hasTransitRouterRouteTableId() const { return this->transitRouterRouteTableId_ != nullptr;};
    void deleteTransitRouterRouteTableId() { this->transitRouterRouteTableId_ = nullptr;};
    inline string transitRouterRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterRouteTableId_, "") };
    inline ListTransitRouterRouteTableAssociationsRequest& setTransitRouterRouteTableId(string transitRouterRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTableId_, transitRouterRouteTableId) };


  protected:
    // The number of entries to return on each page. Default value: **50**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If this is your first query or no subsequent query is to be sent, ignore this parameter.
    // *   If a next query is to be sent, set the value to the value of **NextToken** that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The status of the associated forwarding correlation. Valid values:
    // 
    // *   **Active**: The associated forwarding correlation is available.
    // *   **Associating**: The associated forwarding correlation is being created.
    // *   **Dissociating**: The associated forwarding correlation is being deleted.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the network instance connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the next hop.
    std::shared_ptr<string> transitRouterAttachmentResourceId_ = nullptr;
    // The type of next hop. Valid values:
    // 
    // *   **VPC**: virtual private cloud (VPC)
    // *   **VBR**: virtual border router (VBR)
    // *   **TR**: transit router
    // *   **VPN**: VPN attachment
    std::shared_ptr<string> transitRouterAttachmentResourceType_ = nullptr;
    // The ID of the route table of the Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
