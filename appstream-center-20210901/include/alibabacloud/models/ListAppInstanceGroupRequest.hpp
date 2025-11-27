// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAppInstanceGroupRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListAppInstanceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_TO_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_TO_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_TO_JSON(ExcludedUserGroupIds, excludedUserGroupIds_);
      DARABONBA_PTR_TO_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserGroupIds, userGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCenterImageId, appCenterImageId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupId, appInstanceGroupId_);
      DARABONBA_PTR_FROM_JSON(AppInstanceGroupName, appInstanceGroupName_);
      DARABONBA_PTR_FROM_JSON(BizRegionId, bizRegionId_);
      DARABONBA_PTR_FROM_JSON(ExcludedUserGroupIds, excludedUserGroupIds_);
      DARABONBA_PTR_FROM_JSON(NodeInstanceType, nodeInstanceType_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserGroupIds, userGroupIds_);
    };
    ListAppInstanceGroupRequest() = default ;
    ListAppInstanceGroupRequest(const ListAppInstanceGroupRequest &) = default ;
    ListAppInstanceGroupRequest(ListAppInstanceGroupRequest &&) = default ;
    ListAppInstanceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceGroupRequest() = default ;
    ListAppInstanceGroupRequest& operator=(const ListAppInstanceGroupRequest &) = default ;
    ListAppInstanceGroupRequest& operator=(ListAppInstanceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appCenterImageId_ == nullptr
        && return this->appInstanceGroupId_ == nullptr && return this->appInstanceGroupName_ == nullptr && return this->bizRegionId_ == nullptr && return this->excludedUserGroupIds_ == nullptr && return this->nodeInstanceType_ == nullptr
        && return this->officeSiteId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->productType_ == nullptr && return this->regionId_ == nullptr
        && return this->status_ == nullptr && return this->tag_ == nullptr && return this->userGroupIds_ == nullptr; };
    // appCenterImageId Field Functions 
    bool hasAppCenterImageId() const { return this->appCenterImageId_ != nullptr;};
    void deleteAppCenterImageId() { this->appCenterImageId_ = nullptr;};
    inline string appCenterImageId() const { DARABONBA_PTR_GET_DEFAULT(appCenterImageId_, "") };
    inline ListAppInstanceGroupRequest& setAppCenterImageId(string appCenterImageId) { DARABONBA_PTR_SET_VALUE(appCenterImageId_, appCenterImageId) };


    // appInstanceGroupId Field Functions 
    bool hasAppInstanceGroupId() const { return this->appInstanceGroupId_ != nullptr;};
    void deleteAppInstanceGroupId() { this->appInstanceGroupId_ = nullptr;};
    inline string appInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupId_, "") };
    inline ListAppInstanceGroupRequest& setAppInstanceGroupId(string appInstanceGroupId) { DARABONBA_PTR_SET_VALUE(appInstanceGroupId_, appInstanceGroupId) };


    // appInstanceGroupName Field Functions 
    bool hasAppInstanceGroupName() const { return this->appInstanceGroupName_ != nullptr;};
    void deleteAppInstanceGroupName() { this->appInstanceGroupName_ = nullptr;};
    inline string appInstanceGroupName() const { DARABONBA_PTR_GET_DEFAULT(appInstanceGroupName_, "") };
    inline ListAppInstanceGroupRequest& setAppInstanceGroupName(string appInstanceGroupName) { DARABONBA_PTR_SET_VALUE(appInstanceGroupName_, appInstanceGroupName) };


    // bizRegionId Field Functions 
    bool hasBizRegionId() const { return this->bizRegionId_ != nullptr;};
    void deleteBizRegionId() { this->bizRegionId_ = nullptr;};
    inline string bizRegionId() const { DARABONBA_PTR_GET_DEFAULT(bizRegionId_, "") };
    inline ListAppInstanceGroupRequest& setBizRegionId(string bizRegionId) { DARABONBA_PTR_SET_VALUE(bizRegionId_, bizRegionId) };


    // excludedUserGroupIds Field Functions 
    bool hasExcludedUserGroupIds() const { return this->excludedUserGroupIds_ != nullptr;};
    void deleteExcludedUserGroupIds() { this->excludedUserGroupIds_ = nullptr;};
    inline const vector<string> & excludedUserGroupIds() const { DARABONBA_PTR_GET_CONST(excludedUserGroupIds_, vector<string>) };
    inline vector<string> excludedUserGroupIds() { DARABONBA_PTR_GET(excludedUserGroupIds_, vector<string>) };
    inline ListAppInstanceGroupRequest& setExcludedUserGroupIds(const vector<string> & excludedUserGroupIds) { DARABONBA_PTR_SET_VALUE(excludedUserGroupIds_, excludedUserGroupIds) };
    inline ListAppInstanceGroupRequest& setExcludedUserGroupIds(vector<string> && excludedUserGroupIds) { DARABONBA_PTR_SET_RVALUE(excludedUserGroupIds_, excludedUserGroupIds) };


    // nodeInstanceType Field Functions 
    bool hasNodeInstanceType() const { return this->nodeInstanceType_ != nullptr;};
    void deleteNodeInstanceType() { this->nodeInstanceType_ = nullptr;};
    inline string nodeInstanceType() const { DARABONBA_PTR_GET_DEFAULT(nodeInstanceType_, "") };
    inline ListAppInstanceGroupRequest& setNodeInstanceType(string nodeInstanceType) { DARABONBA_PTR_SET_VALUE(nodeInstanceType_, nodeInstanceType) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListAppInstanceGroupRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListAppInstanceGroupRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListAppInstanceGroupRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline ListAppInstanceGroupRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAppInstanceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const vector<string> & status() const { DARABONBA_PTR_GET_CONST(status_, vector<string>) };
    inline vector<string> status() { DARABONBA_PTR_GET(status_, vector<string>) };
    inline ListAppInstanceGroupRequest& setStatus(const vector<string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListAppInstanceGroupRequest& setStatus(vector<string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListAppInstanceGroupRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListAppInstanceGroupRequestTag>) };
    inline vector<ListAppInstanceGroupRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<ListAppInstanceGroupRequestTag>) };
    inline ListAppInstanceGroupRequest& setTag(const vector<ListAppInstanceGroupRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListAppInstanceGroupRequest& setTag(vector<ListAppInstanceGroupRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & userGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> userGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline ListAppInstanceGroupRequest& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline ListAppInstanceGroupRequest& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


  protected:
    // The image ID of the app. You can obtain the ID from the Images page in the App Streaming console.
    std::shared_ptr<string> appCenterImageId_ = nullptr;
    // The ID of the delivery group.
    std::shared_ptr<string> appInstanceGroupId_ = nullptr;
    // The name of the delivery groups to query. Fuzzy match is used for queries. For example, if you set this parameter to `Office App`, all delivery groups whose names contain `Office App` are queried, such as `My Office Apps` and `Office App A`.
    std::shared_ptr<string> appInstanceGroupName_ = nullptr;
    // The ID of the region where the delivery group resides. For information about the supported regions, see [Limits](https://help.aliyun.com/document_detail/426036.html).
    // 
    // Valid values:
    // 
    // *   cn-shanghai: China (Shanghai)
    // *   cn-hangzhou: China (Hangzhou)
    std::shared_ptr<string> bizRegionId_ = nullptr;
    std::shared_ptr<vector<string>> excludedUserGroupIds_ = nullptr;
    // The ID of the resource specification that you purchase. You can call the [ListNodeInstanceType](~~ListNodeInstanceType~~) operation to obtain the ID.
    std::shared_ptr<string> nodeInstanceType_ = nullptr;
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. The value cannot be greater than `100`.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The product type.
    // 
    // Valid value:
    // 
    // *   CloudApp: App Streaming
    // 
    // This parameter is required.
    std::shared_ptr<string> productType_ = nullptr;
    // The region ID
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the delivery groups.
    std::shared_ptr<vector<string>> status_ = nullptr;
    std::shared_ptr<vector<ListAppInstanceGroupRequestTag>> tag_ = nullptr;
    std::shared_ptr<vector<string>> userGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
