// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEDGECONTAINERAPPSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListEdgeContainerAppsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEdgeContainerAppsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_TO_JSON(SearchType, searchType_);
    };
    friend void from_json(const Darabonba::Json& j, ListEdgeContainerAppsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OrderKey, orderKey_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SearchKey, searchKey_);
      DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
    };
    ListEdgeContainerAppsRequest() = default ;
    ListEdgeContainerAppsRequest(const ListEdgeContainerAppsRequest &) = default ;
    ListEdgeContainerAppsRequest(ListEdgeContainerAppsRequest &&) = default ;
    ListEdgeContainerAppsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEdgeContainerAppsRequest() = default ;
    ListEdgeContainerAppsRequest& operator=(const ListEdgeContainerAppsRequest &) = default ;
    ListEdgeContainerAppsRequest& operator=(ListEdgeContainerAppsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderKey_ != nullptr
        && this->orderType_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->searchKey_ != nullptr && this->searchType_ != nullptr; };
    // orderKey Field Functions 
    bool hasOrderKey() const { return this->orderKey_ != nullptr;};
    void deleteOrderKey() { this->orderKey_ = nullptr;};
    inline string orderKey() const { DARABONBA_PTR_GET_DEFAULT(orderKey_, "") };
    inline ListEdgeContainerAppsRequest& setOrderKey(string orderKey) { DARABONBA_PTR_SET_VALUE(orderKey_, orderKey) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline ListEdgeContainerAppsRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListEdgeContainerAppsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListEdgeContainerAppsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // searchKey Field Functions 
    bool hasSearchKey() const { return this->searchKey_ != nullptr;};
    void deleteSearchKey() { this->searchKey_ = nullptr;};
    inline string searchKey() const { DARABONBA_PTR_GET_DEFAULT(searchKey_, "") };
    inline ListEdgeContainerAppsRequest& setSearchKey(string searchKey) { DARABONBA_PTR_SET_VALUE(searchKey_, searchKey) };


    // searchType Field Functions 
    bool hasSearchType() const { return this->searchType_ != nullptr;};
    void deleteSearchType() { this->searchType_ = nullptr;};
    inline string searchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
    inline ListEdgeContainerAppsRequest& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


  protected:
    // The sorting field. This parameter is left empty by default. Valid values:
    // 
    // *   Name: the version name.
    // *   CreateTime: the time when the version was created.
    // *   UpdateTime: the time when the version was last modified.
    std::shared_ptr<string> orderKey_ = nullptr;
    // The order in which you want to sort the query results. This parameter is left empty by default. Valid values:
    // 
    // *   ASC: in ascending order.
    // *   DESC: in descending order.
    std::shared_ptr<string> orderType_ = nullptr;
    // The page number. Default value: **1**. Valid values: 1 to 65535.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **20**. Valid values: 1 to 500.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The search keyword.
    std::shared_ptr<string> searchKey_ = nullptr;
    // The search criterion based on which you want to perform fuzzy search. Valid values:
    // 
    // *   Appid: the application ID.
    // *   Name: the application name.
    std::shared_ptr<string> searchType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
