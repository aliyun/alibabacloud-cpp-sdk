// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDDOSINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDDOSINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListDDoSInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDDoSInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SiteInstanceId, siteInstanceId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListDDoSInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SiteInstanceId, siteInstanceId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListDDoSInstancesRequest() = default ;
    ListDDoSInstancesRequest(const ListDDoSInstancesRequest &) = default ;
    ListDDoSInstancesRequest(ListDDoSInstancesRequest &&) = default ;
    ListDDoSInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDDoSInstancesRequest() = default ;
    ListDDoSInstancesRequest& operator=(const ListDDoSInstancesRequest &) = default ;
    ListDDoSInstancesRequest& operator=(ListDDoSInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->siteInstanceId_ == nullptr && this->sortBy_ == nullptr && this->sortOrder_ == nullptr
        && this->status_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDDoSInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDDoSInstancesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDDoSInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // siteInstanceId Field Functions 
    bool hasSiteInstanceId() const { return this->siteInstanceId_ != nullptr;};
    void deleteSiteInstanceId() { this->siteInstanceId_ = nullptr;};
    inline string getSiteInstanceId() const { DARABONBA_PTR_GET_DEFAULT(siteInstanceId_, "") };
    inline ListDDoSInstancesRequest& setSiteInstanceId(string siteInstanceId) { DARABONBA_PTR_SET_VALUE(siteInstanceId_, siteInstanceId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListDDoSInstancesRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListDDoSInstancesRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListDDoSInstancesRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Instance ID.
    shared_ptr<string> instanceId_ {};
    // Page number. Default: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // Number of entries per page. Default: 20. Maximum: 500. Valid values: integers from 1 to 500.
    shared_ptr<int32_t> pageSize_ {};
    // Associated site package instance ID.
    shared_ptr<string> siteInstanceId_ {};
    // Sort field. Default: CreateTime.
    // 
    // - **CreateTime**: Time when the instance was purchased.
    shared_ptr<string> sortBy_ {};
    // Sort order:
    // 
    // - asc: ascending.
    // 
    // - desc: descending.
    shared_ptr<string> sortOrder_ {};
    // Instance status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
