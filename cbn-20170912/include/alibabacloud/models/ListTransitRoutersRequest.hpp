// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRoutersRequestFeatureFilter.hpp>
#include <alibabacloud/models/ListTransitRoutersRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRoutersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRoutersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(FeatureFilter, featureFilter_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_TO_JSON(TransitRouterName, transitRouterName_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRoutersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(FeatureFilter, featureFilter_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterName, transitRouterName_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListTransitRoutersRequest() = default ;
    ListTransitRoutersRequest(const ListTransitRoutersRequest &) = default ;
    ListTransitRoutersRequest(ListTransitRoutersRequest &&) = default ;
    ListTransitRoutersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRoutersRequest() = default ;
    ListTransitRoutersRequest& operator=(const ListTransitRoutersRequest &) = default ;
    ListTransitRoutersRequest& operator=(ListTransitRoutersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cenId_ != nullptr
        && this->featureFilter_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->status_ != nullptr && this->tag_ != nullptr
        && this->transitRouterId_ != nullptr && this->transitRouterName_ != nullptr && this->type_ != nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline ListTransitRoutersRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // featureFilter Field Functions 
    bool hasFeatureFilter() const { return this->featureFilter_ != nullptr;};
    void deleteFeatureFilter() { this->featureFilter_ = nullptr;};
    inline const vector<ListTransitRoutersRequestFeatureFilter> & featureFilter() const { DARABONBA_PTR_GET_CONST(featureFilter_, vector<ListTransitRoutersRequestFeatureFilter>) };
    inline vector<ListTransitRoutersRequestFeatureFilter> featureFilter() { DARABONBA_PTR_GET(featureFilter_, vector<ListTransitRoutersRequestFeatureFilter>) };
    inline ListTransitRoutersRequest& setFeatureFilter(const vector<ListTransitRoutersRequestFeatureFilter> & featureFilter) { DARABONBA_PTR_SET_VALUE(featureFilter_, featureFilter) };
    inline ListTransitRoutersRequest& setFeatureFilter(vector<ListTransitRoutersRequestFeatureFilter> && featureFilter) { DARABONBA_PTR_SET_RVALUE(featureFilter_, featureFilter) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTransitRoutersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTransitRoutersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTransitRoutersRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTransitRoutersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTransitRoutersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTransitRoutersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRoutersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRoutersRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListTransitRoutersRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListTransitRoutersRequestTag>) };
    inline vector<ListTransitRoutersRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListTransitRoutersRequestTag>) };
    inline ListTransitRoutersRequest& setTag(const vector<ListTransitRoutersRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListTransitRoutersRequest& setTag(vector<ListTransitRoutersRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ListTransitRoutersRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


    // transitRouterName Field Functions 
    bool hasTransitRouterName() const { return this->transitRouterName_ != nullptr;};
    void deleteTransitRouterName() { this->transitRouterName_ = nullptr;};
    inline string transitRouterName() const { DARABONBA_PTR_GET_DEFAULT(transitRouterName_, "") };
    inline ListTransitRoutersRequest& setTransitRouterName(string transitRouterName) { DARABONBA_PTR_SET_VALUE(transitRouterName_, transitRouterName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListTransitRoutersRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The field that is used to enable or disable a feature of the transit router.
    std::shared_ptr<vector<ListTransitRoutersRequestFeatureFilter>> featureFilter_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Valid values: **1** to **50**. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the region where the transit router is deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The status of the transit router. Valid values:
    // 
    // *   **Creating**: The transit router is being created.
    // *   **Active**: The transit router is available.
    // *   **Modifying**: The transit router is being modified
    // *   **Deleting**: The transit router is being deleted.
    // *   **Upgrading**: The transit router is being upgraded.
    std::shared_ptr<string> status_ = nullptr;
    // The information about the tags.
    // 
    // You can specify at most 20 tags in each call.
    std::shared_ptr<vector<ListTransitRoutersRequestTag>> tag_ = nullptr;
    // The ID of the transit router.
    std::shared_ptr<string> transitRouterId_ = nullptr;
    // The name of the Enterprise Edition transit router.
    // 
    // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter but cannot start with `http://` or `https://`.
    std::shared_ptr<string> transitRouterName_ = nullptr;
    // The edition of the transit router. Valid values:
    // 
    // *   **Enterprise**: Enhance Edition
    // *   **Basic**: Basic Edition
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
