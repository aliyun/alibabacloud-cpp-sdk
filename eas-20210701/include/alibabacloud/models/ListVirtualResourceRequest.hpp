// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ListVirtualResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Sort, sort_);
      DARABONBA_PTR_TO_JSON(VirtualResourceId, virtualResourceId_);
      DARABONBA_PTR_TO_JSON(VirtualResourceName, virtualResourceName_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Sort, sort_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceId, virtualResourceId_);
      DARABONBA_PTR_FROM_JSON(VirtualResourceName, virtualResourceName_);
    };
    ListVirtualResourceRequest() = default ;
    ListVirtualResourceRequest(const ListVirtualResourceRequest &) = default ;
    ListVirtualResourceRequest(ListVirtualResourceRequest &&) = default ;
    ListVirtualResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualResourceRequest() = default ;
    ListVirtualResourceRequest& operator=(const ListVirtualResourceRequest &) = default ;
    ListVirtualResourceRequest& operator=(ListVirtualResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->order_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->sort_ == nullptr && return this->virtualResourceId_ == nullptr && return this->virtualResourceName_ == nullptr; };
    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListVirtualResourceRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListVirtualResourceRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListVirtualResourceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sort Field Functions 
    bool hasSort() const { return this->sort_ != nullptr;};
    void deleteSort() { this->sort_ = nullptr;};
    inline string sort() const { DARABONBA_PTR_GET_DEFAULT(sort_, "") };
    inline ListVirtualResourceRequest& setSort(string sort) { DARABONBA_PTR_SET_VALUE(sort_, sort) };


    // virtualResourceId Field Functions 
    bool hasVirtualResourceId() const { return this->virtualResourceId_ != nullptr;};
    void deleteVirtualResourceId() { this->virtualResourceId_ = nullptr;};
    inline string virtualResourceId() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceId_, "") };
    inline ListVirtualResourceRequest& setVirtualResourceId(string virtualResourceId) { DARABONBA_PTR_SET_VALUE(virtualResourceId_, virtualResourceId) };


    // virtualResourceName Field Functions 
    bool hasVirtualResourceName() const { return this->virtualResourceName_ != nullptr;};
    void deleteVirtualResourceName() { this->virtualResourceName_ = nullptr;};
    inline string virtualResourceName() const { DARABONBA_PTR_GET_DEFAULT(virtualResourceName_, "") };
    inline ListVirtualResourceRequest& setVirtualResourceName(string virtualResourceName) { DARABONBA_PTR_SET_VALUE(virtualResourceName_, virtualResourceName) };


  protected:
    std::shared_ptr<string> order_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> sort_ = nullptr;
    // The ID of the virtual resource group.
    std::shared_ptr<string> virtualResourceId_ = nullptr;
    // The name of the virtual resource group.
    std::shared_ptr<string> virtualResourceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
