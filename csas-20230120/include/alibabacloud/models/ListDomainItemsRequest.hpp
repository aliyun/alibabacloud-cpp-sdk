// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOMAINITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDOMAINITEMSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDomainItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDomainItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ItemValue, itemValue_);
      DARABONBA_PTR_TO_JSON(ListId, listId_);
      DARABONBA_PTR_TO_JSON(ListType, listType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDomainItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ItemValue, itemValue_);
      DARABONBA_PTR_FROM_JSON(ListId, listId_);
      DARABONBA_PTR_FROM_JSON(ListType, listType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListDomainItemsRequest() = default ;
    ListDomainItemsRequest(const ListDomainItemsRequest &) = default ;
    ListDomainItemsRequest(ListDomainItemsRequest &&) = default ;
    ListDomainItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDomainItemsRequest() = default ;
    ListDomainItemsRequest& operator=(const ListDomainItemsRequest &) = default ;
    ListDomainItemsRequest& operator=(ListDomainItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->itemValue_ == nullptr && this->listId_ == nullptr && this->listType_ == nullptr && this->pageSize_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline ListDomainItemsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // itemValue Field Functions 
    bool hasItemValue() const { return this->itemValue_ != nullptr;};
    void deleteItemValue() { this->itemValue_ = nullptr;};
    inline string getItemValue() const { DARABONBA_PTR_GET_DEFAULT(itemValue_, "") };
    inline ListDomainItemsRequest& setItemValue(string itemValue) { DARABONBA_PTR_SET_VALUE(itemValue_, itemValue) };


    // listId Field Functions 
    bool hasListId() const { return this->listId_ != nullptr;};
    void deleteListId() { this->listId_ = nullptr;};
    inline string getListId() const { DARABONBA_PTR_GET_DEFAULT(listId_, "") };
    inline ListDomainItemsRequest& setListId(string listId) { DARABONBA_PTR_SET_VALUE(listId_, listId) };


    // listType Field Functions 
    bool hasListType() const { return this->listType_ != nullptr;};
    void deleteListType() { this->listType_ = nullptr;};
    inline string getListType() const { DARABONBA_PTR_GET_DEFAULT(listType_, "") };
    inline ListDomainItemsRequest& setListType(string listType) { DARABONBA_PTR_SET_VALUE(listType_, listType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDomainItemsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The current page number in paging.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The domain name value filter. Fuzzy match is supported.
    shared_ptr<string> itemValue_ {};
    // The list ID. This is a unique business identifier used for policy references and CRUD operations.
    // 
    // This parameter is required.
    shared_ptr<string> listId_ {};
    // The list type (Blacklist/Whitelist).
    // 
    // This parameter is required.
    shared_ptr<string> listType_ {};
    // The number of entries per page in paging. Valid values: 1 to 1000.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
