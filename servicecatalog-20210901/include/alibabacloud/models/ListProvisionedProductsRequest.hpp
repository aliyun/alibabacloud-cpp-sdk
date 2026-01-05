// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPROVISIONEDPRODUCTSREQUEST_HPP_
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
  class ListProvisionedProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProvisionedProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessLevelFilter, accessLevelFilter_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(SortOrder, sortOrder_);
    };
    friend void from_json(const Darabonba::Json& j, ListProvisionedProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessLevelFilter, accessLevelFilter_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(SortOrder, sortOrder_);
    };
    ListProvisionedProductsRequest() = default ;
    ListProvisionedProductsRequest(const ListProvisionedProductsRequest &) = default ;
    ListProvisionedProductsRequest(ListProvisionedProductsRequest &&) = default ;
    ListProvisionedProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProvisionedProductsRequest() = default ;
    ListProvisionedProductsRequest& operator=(const ListProvisionedProductsRequest &) = default ;
    ListProvisionedProductsRequest& operator=(ListProvisionedProductsRequest &&) = default ;
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
      // *   ProvisionedProductName: performs exact matches by product instance name. Product instance names are not case-sensitive.
      // *   FullTextSearch: performs full-text searches by product instance name. Fuzzy match is supported.
      shared_ptr<string> key_ {};
      // The value of the filter condition.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->accessLevelFilter_ == nullptr
        && this->filters_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->sortBy_ == nullptr && this->sortOrder_ == nullptr; };
    // accessLevelFilter Field Functions 
    bool hasAccessLevelFilter() const { return this->accessLevelFilter_ != nullptr;};
    void deleteAccessLevelFilter() { this->accessLevelFilter_ = nullptr;};
    inline string getAccessLevelFilter() const { DARABONBA_PTR_GET_DEFAULT(accessLevelFilter_, "") };
    inline ListProvisionedProductsRequest& setAccessLevelFilter(string accessLevelFilter) { DARABONBA_PTR_SET_VALUE(accessLevelFilter_, accessLevelFilter) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListProvisionedProductsRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListProvisionedProductsRequest::Filters>) };
    inline vector<ListProvisionedProductsRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ListProvisionedProductsRequest::Filters>) };
    inline ListProvisionedProductsRequest& setFilters(const vector<ListProvisionedProductsRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListProvisionedProductsRequest& setFilters(vector<ListProvisionedProductsRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListProvisionedProductsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProvisionedProductsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string getSortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListProvisionedProductsRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // sortOrder Field Functions 
    bool hasSortOrder() const { return this->sortOrder_ != nullptr;};
    void deleteSortOrder() { this->sortOrder_ = nullptr;};
    inline string getSortOrder() const { DARABONBA_PTR_GET_DEFAULT(sortOrder_, "") };
    inline ListProvisionedProductsRequest& setSortOrder(string sortOrder) { DARABONBA_PTR_SET_VALUE(sortOrder_, sortOrder) };


  protected:
    // The access filter. Valid values:
    // 
    // *   User: queries the product instances that are created by the current requester. This is the default value.
    // *   Account: queries the product instances that belong to the current Alibaba Cloud account.
    shared_ptr<string> accessLevelFilter_ {};
    // The filter conditions.
    shared_ptr<vector<ListProvisionedProductsRequest::Filters>> filters_ {};
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The field that is used to sort the queried data.
    // 
    // Set the value to CreateTime, which specifies the time when the product instance was created.
    shared_ptr<string> sortBy_ {};
    // The sorting method. Valid values:
    // 
    // *   Asc: the ascending order.
    // *   Desc (default): the descending order.
    shared_ptr<string> sortOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
