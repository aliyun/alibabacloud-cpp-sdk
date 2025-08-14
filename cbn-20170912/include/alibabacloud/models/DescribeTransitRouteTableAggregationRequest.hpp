// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSITROUTETABLEAGGREGATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class DescribeTransitRouteTableAggregationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransitRouteTableAggregationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
      DARABONBA_PTR_TO_JSON(TransitRouteTableId, transitRouteTableId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransitRouteTableAggregationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableAggregationCidr, transitRouteTableAggregationCidr_);
      DARABONBA_PTR_FROM_JSON(TransitRouteTableId, transitRouteTableId_);
    };
    DescribeTransitRouteTableAggregationRequest() = default ;
    DescribeTransitRouteTableAggregationRequest(const DescribeTransitRouteTableAggregationRequest &) = default ;
    DescribeTransitRouteTableAggregationRequest(DescribeTransitRouteTableAggregationRequest &&) = default ;
    DescribeTransitRouteTableAggregationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransitRouteTableAggregationRequest() = default ;
    DescribeTransitRouteTableAggregationRequest& operator=(const DescribeTransitRouteTableAggregationRequest &) = default ;
    DescribeTransitRouteTableAggregationRequest& operator=(DescribeTransitRouteTableAggregationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->transitRouteTableAggregationCidr_ != nullptr && this->transitRouteTableId_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeTransitRouteTableAggregationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeTransitRouteTableAggregationRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTransitRouteTableAggregationRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeTransitRouteTableAggregationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeTransitRouteTableAggregationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeTransitRouteTableAggregationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeTransitRouteTableAggregationRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouteTableAggregationCidr Field Functions 
    bool hasTransitRouteTableAggregationCidr() const { return this->transitRouteTableAggregationCidr_ != nullptr;};
    void deleteTransitRouteTableAggregationCidr() { this->transitRouteTableAggregationCidr_ = nullptr;};
    inline string transitRouteTableAggregationCidr() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableAggregationCidr_, "") };
    inline DescribeTransitRouteTableAggregationRequest& setTransitRouteTableAggregationCidr(string transitRouteTableAggregationCidr) { DARABONBA_PTR_SET_VALUE(transitRouteTableAggregationCidr_, transitRouteTableAggregationCidr) };


    // transitRouteTableId Field Functions 
    bool hasTransitRouteTableId() const { return this->transitRouteTableId_ != nullptr;};
    void deleteTransitRouteTableId() { this->transitRouteTableId_ = nullptr;};
    inline string transitRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(transitRouteTableId_, "") };
    inline DescribeTransitRouteTableAggregationRequest& setTransitRouteTableId(string transitRouteTableId) { DARABONBA_PTR_SET_VALUE(transitRouteTableId_, transitRouteTableId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If this is your first query or no subsequent query is to be sent, ignore this parameter.
    // *   If a next query is to be sent, set the value to the value of **NextToken** that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The destination CIDR block of the aggregate route.
    std::shared_ptr<string> transitRouteTableAggregationCidr_ = nullptr;
    // The ID of the route table of the Enterprise Edition transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouteTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
