// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICROUTESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICROUTESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDynamicRoutesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicRoutesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DynamicRouteIds, dynamicRouteIds_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TagId, tagId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicRoutesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DynamicRouteIds, dynamicRouteIds_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TagId, tagId_);
    };
    ListDynamicRoutesRequest() = default ;
    ListDynamicRoutesRequest(const ListDynamicRoutesRequest &) = default ;
    ListDynamicRoutesRequest(ListDynamicRoutesRequest &&) = default ;
    ListDynamicRoutesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicRoutesRequest() = default ;
    ListDynamicRoutesRequest& operator=(const ListDynamicRoutesRequest &) = default ;
    ListDynamicRoutesRequest& operator=(ListDynamicRoutesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->currentPage_ == nullptr && this->dynamicRouteIds_ == nullptr && this->name_ == nullptr && this->nextHop_ == nullptr && this->pageSize_ == nullptr
        && this->regionIds_ == nullptr && this->status_ == nullptr && this->tagId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ListDynamicRoutesRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDynamicRoutesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dynamicRouteIds Field Functions 
    bool hasDynamicRouteIds() const { return this->dynamicRouteIds_ != nullptr;};
    void deleteDynamicRouteIds() { this->dynamicRouteIds_ = nullptr;};
    inline const vector<string> & getDynamicRouteIds() const { DARABONBA_PTR_GET_CONST(dynamicRouteIds_, vector<string>) };
    inline vector<string> getDynamicRouteIds() { DARABONBA_PTR_GET(dynamicRouteIds_, vector<string>) };
    inline ListDynamicRoutesRequest& setDynamicRouteIds(const vector<string> & dynamicRouteIds) { DARABONBA_PTR_SET_VALUE(dynamicRouteIds_, dynamicRouteIds) };
    inline ListDynamicRoutesRequest& setDynamicRouteIds(vector<string> && dynamicRouteIds) { DARABONBA_PTR_SET_RVALUE(dynamicRouteIds_, dynamicRouteIds) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDynamicRoutesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline ListDynamicRoutesRequest& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDynamicRoutesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline ListDynamicRoutesRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline ListDynamicRoutesRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDynamicRoutesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tagId Field Functions 
    bool hasTagId() const { return this->tagId_ != nullptr;};
    void deleteTagId() { this->tagId_ = nullptr;};
    inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
    inline ListDynamicRoutesRequest& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


  protected:
    // The ID of the private access application for the dynamic route. You cannot filter by both the private access application ID and the private access tag ID. You can obtain the ID from the following sources:
    // 
    // - [ListPrivateAccessApplications](~~ListPrivateAccessApplications~~): Queries multiple private access applications.
    // 
    // - [CreatePrivateAccessApplication](~~CreatePrivateAccessApplication~~): Creates a private access application.
    shared_ptr<string> applicationId_ {};
    // The number of the page to return for a paged query. Valid values: 1 to 10000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The IDs of the dynamic routes. You can specify up to 100 dynamic route IDs.
    shared_ptr<vector<string>> dynamicRouteIds_ {};
    // The name of the dynamic route. The name must be 1 to 128 characters in length and can contain Chinese characters, letters, digits, periods (.), underscores (_), and hyphens (-).
    shared_ptr<string> name_ {};
    // The ID of the next hop instance for the dynamic route. You can obtain the ID from the following source:
    // 
    // - [ListConnectors](~~ListConnectors~~): Queries multiple connectors.
    shared_ptr<string> nextHop_ {};
    // The number of entries to return on each page for a paged query. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The list of regions where the SASE POP cluster endpoint is supported.
    shared_ptr<vector<string>> regionIds_ {};
    // The status of the dynamic route. Valid values:
    // 
    // - **Enabled**: The dynamic route is enabled.
    // 
    // - **Disabled**: The dynamic route is disabled.
    shared_ptr<string> status_ {};
    // The ID of the private access tag for the dynamic route. You cannot filter by both the private access tag ID and the private access application ID. You can obtain the ID from the following sources:
    // 
    // - [ListPrivateAccessTags](~~ListPrivateAccessTags~~): Queries multiple private access tags.
    // 
    // - [CreatePrivateAccessTag](~~CreatePrivateAccessTag~~): Creates a private access tag.
    shared_ptr<string> tagId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
