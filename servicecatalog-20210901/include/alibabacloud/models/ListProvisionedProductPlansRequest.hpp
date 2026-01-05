// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTPLANSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTPLANSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListProvisionedProductPlansRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProvisionedProductPlansRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLevelFilter, accessLevelFilter_);
      DARABONBA_PTR_TO_JSON(ApprovalFilter, approvalFilter_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListProvisionedProductPlansRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLevelFilter, accessLevelFilter_);
      DARABONBA_PTR_FROM_JSON(ApprovalFilter, approvalFilter_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProvisionedProductId, provisionedProductId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    ListProvisionedProductPlansRequest() = default ;
    ListProvisionedProductPlansRequest(const ListProvisionedProductPlansRequest &) = default ;
    ListProvisionedProductPlansRequest(ListProvisionedProductPlansRequest &&) = default ;
    ListProvisionedProductPlansRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProvisionedProductPlansRequest() = default ;
    ListProvisionedProductPlansRequest& operator=(const ListProvisionedProductPlansRequest &) = default ;
    ListProvisionedProductPlansRequest& operator=(ListProvisionedProductPlansRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the filter condition. Valid values:
      // 
      // *   ProvisionedProductPlanName: performs exact matches by plan name. Plan names are not case-sensitive.
      // *   ProvisionedProductPlanApprover: performs exact matches by reviewer. You must specify a reviewer in the `RamUser/RamRole:<Name of the reviewer>` format. You can specify multiple reviewers.
      // *   ProvisionedProductPlanApproverName: performs matches by reviewer name. You must specify the Resource Access Management (RAM) entity name of the reviewer. You can specify multiple reviewer names.
      // *   ProvisionedProductPlanStatus: performs matches by plan status. You must specify the state of the plan. You can specify multiple states.
      // *   ProvisionedProductPlanOwnerUid: performs exact matches by ID of Alibaba Cloud account to which a plan belongs.
      // *   FullTextSearch: performs fuzzy full-text searches by plan name.
      shared_ptr<string> key_ {};
      // The value of the filter condition.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accessLevelFilter_ == nullptr
        && this->approvalFilter_ == nullptr && this->filters_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->provisionedProductId_ == nullptr
        && this->sortBy_ == nullptr && this->sortOrder_ == nullptr; };
    // accessLevelFilter Field Functions 
    bool hasAccessLevelFilter() const { return this->accessLevelFilter_ != nullptr;};
    void deleteAccessLevelFilter() { this->accessLevelFilter_ = nullptr;};
    inline string getAccessLevelFilter() const { DARABONBA_PTR_GET_DEFAULT(accessLevelFilter_, "") };
    inline ListProvisionedProductPlansRequest& setAccessLevelFilter(string accessLevelFilter) { DARABONBA_PTR_SET_VALUE(accessLevelFilter_, accessLevelFilter) };


    // approvalFilter Field Functions 
    bool hasApprovalFilter() const { return this->approvalFilter_ != nullptr;};
    void deleteApprovalFilter() { this->approvalFilter_ = nullptr;};
    inline string getApprovalFilter() const { DARABONBA_PTR_GET_DEFAULT(approvalFilter_, "") };
    inline ListProvisionedProductPlansRequest& setApprovalFilter(string approvalFilter) { DARABONBA_PTR_SET_VALUE(approvalFilter_, approvalFilter) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListProvisionedProductPlansRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListProvisionedProductPlansRequest::Filters>) };
    inline vector<ListProvisionedProductPlansRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ListProvisionedProductPlansRequest::Filters>) };
    inline ListProvisionedProductPlansRequest& setFilters(const vector<ListProvisionedProductPlansRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListProvisionedProductPlansRequest& setFilters(vector<ListProvisionedProductPlansRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProvisionedProductPlansRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProvisionedProductPlansRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // provisionedProductId Field Functions 
    bool hasProvisionedProductId() const { return this->provisionedProductId_ != nullptr;};
    void deleteProvisionedProductId() { this->provisionedProductId_ = nullptr;};
    inline string getProvisionedProductId() const { DARABONBA_PTR_GET_DEFAULT(provisionedProductId_, "") };
    inline ListProvisionedProductPlansRequest& setProvisionedProductId(string provisionedProductId) { DARABONBA_PTR_SET_VALUE(provisionedProductId_, provisionedProductId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListProvisionedProductPlansRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListProvisionedProductPlansRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // The access filter. Valid values:
    // 
    // *   User (default): queries the plans that are created by the current requester.
    // *   Account: queries the plans that belong to the current Alibaba Cloud account.
    // *   ResourceDirectory: queries the plans that belong to the current resource directory.
    shared_ptr<string> accessLevelFilter_ {};
    // The access filter of the review dimension. Valid values:
    // 
    // *   ReceivedRequests: queries plans that are pending for review.
    // *   ApprovalHistory: queries review history.
    // *   AccountRequests: queries all plans that belong to the current Alibaba Cloud account.
    // *   AccountRequests: queries all plans that belong to the current Alibaba Cloud account.
    shared_ptr<string> approvalFilter_ {};
    // An array that consists of filter conditions.
    shared_ptr<vector<ListProvisionedProductPlansRequest::Filters>> filters_ {};
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100. Minimum value: 1. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the product instance.
    shared_ptr<string> provisionedProductId_ {};
    // The information based on which you want to sort the query results.
    // 
    // Set the value to CreateTime, which specifies the creation time of plans.
    shared_ptr<string> sortBy_ {};
    // The order in which you want to sort the query results. Valid values:
    // 
    // *   Asc: the ascending order
    // *   Desc (default): the descending order.
    shared_ptr<string> sortOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
