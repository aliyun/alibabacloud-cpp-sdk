// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERPEERATTACHMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERPEERATTACHMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterPeerAttachmentsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterPeerAttachmentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterPeerAttachmentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterPeerAttachmentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    ListTransitRouterPeerAttachmentsRequest() = default ;
    ListTransitRouterPeerAttachmentsRequest(const ListTransitRouterPeerAttachmentsRequest &) = default ;
    ListTransitRouterPeerAttachmentsRequest(ListTransitRouterPeerAttachmentsRequest &&) = default ;
    ListTransitRouterPeerAttachmentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterPeerAttachmentsRequest() = default ;
    ListTransitRouterPeerAttachmentsRequest& operator=(const ListTransitRouterPeerAttachmentsRequest &) = default ;
    ListTransitRouterPeerAttachmentsRequest& operator=(ListTransitRouterPeerAttachmentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tag_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterId_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListTransitRouterPeerAttachmentsRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterPeerAttachmentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterPeerAttachmentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTransitRouterPeerAttachmentsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTransitRouterPeerAttachmentsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTransitRouterPeerAttachmentsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTransitRouterPeerAttachmentsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterPeerAttachmentsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListTransitRouterPeerAttachmentsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListTransitRouterPeerAttachmentsRequestTag>) };
    inline vector<ListTransitRouterPeerAttachmentsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListTransitRouterPeerAttachmentsRequestTag>) };
    inline ListTransitRouterPeerAttachmentsRequest& setTag(const vector<ListTransitRouterPeerAttachmentsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListTransitRouterPeerAttachmentsRequest& setTag(vector<ListTransitRouterPeerAttachmentsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterPeerAttachmentsRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRouterPeerAttachmentsRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The ID of the Cloud Enterprise Network (CEN) instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The number of entries returned per page. Default value: **20**. Maximum value: **100**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of **NextToken**.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the Enterprise Edition transit router is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The information about the tag.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<ListTransitRouterPeerAttachmentsRequestTag>> tag_ = nullptr;
    // The ID of the inter-region connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the Enterprise Edition transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
