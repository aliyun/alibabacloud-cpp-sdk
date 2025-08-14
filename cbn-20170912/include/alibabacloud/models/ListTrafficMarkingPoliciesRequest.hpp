// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMARKINGPOLICIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMARKINGPOLICIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTrafficMarkingPoliciesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMarkingPoliciesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_TO_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMarkingPoliciesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyDescription, trafficMarkingPolicyDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyId, trafficMarkingPolicyId_);
      DARABONBA_PTR_FROM_JSON(TrafficMarkingPolicyName, trafficMarkingPolicyName_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    ListTrafficMarkingPoliciesRequest() = default ;
    ListTrafficMarkingPoliciesRequest(const ListTrafficMarkingPoliciesRequest &) = default ;
    ListTrafficMarkingPoliciesRequest(ListTrafficMarkingPoliciesRequest &&) = default ;
    ListTrafficMarkingPoliciesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMarkingPoliciesRequest() = default ;
    ListTrafficMarkingPoliciesRequest& operator=(const ListTrafficMarkingPoliciesRequest &) = default ;
    ListTrafficMarkingPoliciesRequest& operator=(ListTrafficMarkingPoliciesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->trafficMarkingPolicyDescription_ != nullptr && this->trafficMarkingPolicyId_ != nullptr && this->trafficMarkingPolicyName_ != nullptr && this->transitRouterId_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrafficMarkingPoliciesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrafficMarkingPoliciesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTrafficMarkingPoliciesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTrafficMarkingPoliciesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTrafficMarkingPoliciesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTrafficMarkingPoliciesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMarkingPolicyDescription Field Functions 
    bool hasTrafficMarkingPolicyDescription() const { return this->trafficMarkingPolicyDescription_ != nullptr;};
    void deleteTrafficMarkingPolicyDescription() { this->trafficMarkingPolicyDescription_ = nullptr;};
    inline string trafficMarkingPolicyDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyDescription_, "") };
    inline ListTrafficMarkingPoliciesRequest& setTrafficMarkingPolicyDescription(string trafficMarkingPolicyDescription) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyDescription_, trafficMarkingPolicyDescription) };


    // trafficMarkingPolicyId Field Functions 
    bool hasTrafficMarkingPolicyId() const { return this->trafficMarkingPolicyId_ != nullptr;};
    void deleteTrafficMarkingPolicyId() { this->trafficMarkingPolicyId_ = nullptr;};
    inline string trafficMarkingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyId_, "") };
    inline ListTrafficMarkingPoliciesRequest& setTrafficMarkingPolicyId(string trafficMarkingPolicyId) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyId_, trafficMarkingPolicyId) };


    // trafficMarkingPolicyName Field Functions 
    bool hasTrafficMarkingPolicyName() const { return this->trafficMarkingPolicyName_ != nullptr;};
    void deleteTrafficMarkingPolicyName() { this->trafficMarkingPolicyName_ = nullptr;};
    inline string trafficMarkingPolicyName() const { DARABONBA_PTR_GET_DEFAULT(trafficMarkingPolicyName_, "") };
    inline ListTrafficMarkingPoliciesRequest& setTrafficMarkingPolicyName(string trafficMarkingPolicyName) { DARABONBA_PTR_SET_VALUE(trafficMarkingPolicyName_, trafficMarkingPolicyName) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTrafficMarkingPoliciesRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The number of entries to return on each page. Valid values: **1** to **100**. Default value: **20**.
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
    // The description of the traffic marking policy.
    // 
    // This parameter is optional. If you enter a description, it must be 1 to 256 characters in length and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMarkingPolicyDescription_ = nullptr;
    // The ID of the traffic marking policy.
    std::shared_ptr<string> trafficMarkingPolicyId_ = nullptr;
    // The name of the traffic marking policy.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://.
    std::shared_ptr<string> trafficMarkingPolicyName_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
