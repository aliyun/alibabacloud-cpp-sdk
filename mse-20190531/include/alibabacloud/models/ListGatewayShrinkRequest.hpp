// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DescSort, descSort_);
      DARABONBA_PTR_TO_JSON(FilterParams, filterParamsShrink_);
      DARABONBA_PTR_TO_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DescSort, descSort_);
      DARABONBA_PTR_FROM_JSON(FilterParams, filterParamsShrink_);
      DARABONBA_PTR_FROM_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListGatewayShrinkRequest() = default ;
    ListGatewayShrinkRequest(const ListGatewayShrinkRequest &) = default ;
    ListGatewayShrinkRequest(ListGatewayShrinkRequest &&) = default ;
    ListGatewayShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayShrinkRequest() = default ;
    ListGatewayShrinkRequest& operator=(const ListGatewayShrinkRequest &) = default ;
    ListGatewayShrinkRequest& operator=(ListGatewayShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->descSort_ == nullptr && return this->filterParamsShrink_ == nullptr && return this->orderItem_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListGatewayShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // descSort Field Functions 
    bool hasDescSort() const { return this->descSort_ != nullptr;};
    void deleteDescSort() { this->descSort_ = nullptr;};
    inline bool descSort() const { DARABONBA_PTR_GET_DEFAULT(descSort_, false) };
    inline ListGatewayShrinkRequest& setDescSort(bool descSort) { DARABONBA_PTR_SET_VALUE(descSort_, descSort) };


    // filterParamsShrink Field Functions 
    bool hasFilterParamsShrink() const { return this->filterParamsShrink_ != nullptr;};
    void deleteFilterParamsShrink() { this->filterParamsShrink_ = nullptr;};
    inline string filterParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(filterParamsShrink_, "") };
    inline ListGatewayShrinkRequest& setFilterParamsShrink(string filterParamsShrink) { DARABONBA_PTR_SET_VALUE(filterParamsShrink_, filterParamsShrink) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline string orderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, "") };
    inline ListGatewayShrinkRequest& setOrderItem(string orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // Specifies whether to enable the sorting feature. This feature is not available.
    std::shared_ptr<bool> descSort_ = nullptr;
    // The details of parameters.
    std::shared_ptr<string> filterParamsShrink_ = nullptr;
    // The order information.
    std::shared_ptr<string> orderItem_ = nullptr;
    // The number of the page to return.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
