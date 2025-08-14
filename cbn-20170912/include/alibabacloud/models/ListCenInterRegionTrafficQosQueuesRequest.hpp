// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCENINTERREGIONTRAFFICQOSQUEUESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListCenInterRegionTrafficQosQueuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCenInterRegionTrafficQosQueuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EffectiveBandwidthFilter, effectiveBandwidthFilter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
      DARABONBA_PTR_TO_JSON(TrafficQosQueueDescription, trafficQosQueueDescription_);
      DARABONBA_PTR_TO_JSON(TrafficQosQueueId, trafficQosQueueId_);
      DARABONBA_PTR_TO_JSON(TrafficQosQueueName, trafficQosQueueName_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCenInterRegionTrafficQosQueuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectiveBandwidthFilter, effectiveBandwidthFilter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficQosPolicyId, trafficQosPolicyId_);
      DARABONBA_PTR_FROM_JSON(TrafficQosQueueDescription, trafficQosQueueDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficQosQueueId, trafficQosQueueId_);
      DARABONBA_PTR_FROM_JSON(TrafficQosQueueName, trafficQosQueueName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    ListCenInterRegionTrafficQosQueuesRequest() = default ;
    ListCenInterRegionTrafficQosQueuesRequest(const ListCenInterRegionTrafficQosQueuesRequest &) = default ;
    ListCenInterRegionTrafficQosQueuesRequest(ListCenInterRegionTrafficQosQueuesRequest &&) = default ;
    ListCenInterRegionTrafficQosQueuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCenInterRegionTrafficQosQueuesRequest() = default ;
    ListCenInterRegionTrafficQosQueuesRequest& operator=(const ListCenInterRegionTrafficQosQueuesRequest &) = default ;
    ListCenInterRegionTrafficQosQueuesRequest& operator=(ListCenInterRegionTrafficQosQueuesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveBandwidthFilter_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->trafficQosPolicyId_ != nullptr && this->trafficQosQueueDescription_ != nullptr && this->trafficQosQueueId_ != nullptr && this->trafficQosQueueName_ != nullptr
        && this->transitRouterAttachmentId_ != nullptr && this->transitRouterId_ != nullptr; };
    // effectiveBandwidthFilter Field Functions 
    bool hasEffectiveBandwidthFilter() const { return this->effectiveBandwidthFilter_ != nullptr;};
    void deleteEffectiveBandwidthFilter() { this->effectiveBandwidthFilter_ = nullptr;};
    inline const ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter & effectiveBandwidthFilter() const { DARABONBA_PTR_GET_CONST(effectiveBandwidthFilter_, ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter) };
    inline ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter effectiveBandwidthFilter() { DARABONBA_PTR_GET(effectiveBandwidthFilter_, ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter) };
    inline ListCenInterRegionTrafficQosQueuesRequest& setEffectiveBandwidthFilter(const ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter & effectiveBandwidthFilter) { DARABONBA_PTR_SET_VALUE(effectiveBandwidthFilter_, effectiveBandwidthFilter) };
    inline ListCenInterRegionTrafficQosQueuesRequest& setEffectiveBandwidthFilter(ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter && effectiveBandwidthFilter) { DARABONBA_PTR_SET_RVALUE(effectiveBandwidthFilter_, effectiveBandwidthFilter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCenInterRegionTrafficQosQueuesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCenInterRegionTrafficQosQueuesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListCenInterRegionTrafficQosQueuesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListCenInterRegionTrafficQosQueuesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListCenInterRegionTrafficQosQueuesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListCenInterRegionTrafficQosQueuesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficQosPolicyId Field Functions 
    bool hasTrafficQosPolicyId() const { return this->trafficQosPolicyId_ != nullptr;};
    void deleteTrafficQosPolicyId() { this->trafficQosPolicyId_ = nullptr;};
    inline string trafficQosPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosPolicyId_, "") };
    inline ListCenInterRegionTrafficQosQueuesRequest& setTrafficQosPolicyId(string trafficQosPolicyId) { DARABONBA_PTR_SET_VALUE(trafficQosPolicyId_, trafficQosPolicyId) };


    // trafficQosQueueDescription Field Functions 
    bool hasTrafficQosQueueDescription() const { return this->trafficQosQueueDescription_ != nullptr;};
    void deleteTrafficQosQueueDescription() { this->trafficQosQueueDescription_ = nullptr;};
    inline string trafficQosQueueDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficQosQueueDescription_, "") };
    inline ListCenInterRegionTrafficQosQueuesRequest& setTrafficQosQueueDescription(string trafficQosQueueDescription) { DARABONBA_PTR_SET_VALUE(trafficQosQueueDescription_, trafficQosQueueDescription) };


    // trafficQosQueueId Field Functions 
    bool hasTrafficQosQueueId() const { return this->trafficQosQueueId_ != nullptr;};
    void deleteTrafficQosQueueId() { this->trafficQosQueueId_ = nullptr;};
    inline string trafficQosQueueId() const { DARABONBA_PTR_GET_DEFAULT(trafficQosQueueId_, "") };
    inline ListCenInterRegionTrafficQosQueuesRequest& setTrafficQosQueueId(string trafficQosQueueId) { DARABONBA_PTR_SET_VALUE(trafficQosQueueId_, trafficQosQueueId) };


    // trafficQosQueueName Field Functions 
    bool hasTrafficQosQueueName() const { return this->trafficQosQueueName_ != nullptr;};
    void deleteTrafficQosQueueName() { this->trafficQosQueueName_ = nullptr;};
    inline string trafficQosQueueName() const { DARABONBA_PTR_GET_DEFAULT(trafficQosQueueName_, "") };
    inline ListCenInterRegionTrafficQosQueuesRequest& setTrafficQosQueueName(string trafficQosQueueName) { DARABONBA_PTR_SET_VALUE(trafficQosQueueName_, trafficQosQueueName) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListCenInterRegionTrafficQosQueuesRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListCenInterRegionTrafficQosQueuesRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The filter works based on the actual bandwidth. Enter a positive integer. Unit: Mbit/s.
    std::shared_ptr<ListCenInterRegionTrafficQosQueuesRequestEffectiveBandwidthFilter> effectiveBandwidthFilter_ = nullptr;
    // The number of entries to return on each page. Valid values: **1** to **100**. Default value: **20**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the QoS policy.
    std::shared_ptr<string> trafficQosPolicyId_ = nullptr;
    // The description of the QoS queue.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> trafficQosQueueDescription_ = nullptr;
    // The ID of the queue.
    std::shared_ptr<string> trafficQosQueueId_ = nullptr;
    // The name of the QoS queue.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficQosQueueName_ = nullptr;
    // The ID of the inter-region connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
