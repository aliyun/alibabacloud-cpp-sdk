// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYAUTHSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYAUTHSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayAuthShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayAuthShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DescSort, descSort_);
      DARABONBA_PTR_TO_JSON(FilterParams, filterParamsShrink_);
      DARABONBA_PTR_TO_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayAuthShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DescSort, descSort_);
      DARABONBA_PTR_FROM_JSON(FilterParams, filterParamsShrink_);
      DARABONBA_PTR_FROM_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListGatewayAuthShrinkRequest() = default ;
    ListGatewayAuthShrinkRequest(const ListGatewayAuthShrinkRequest &) = default ;
    ListGatewayAuthShrinkRequest(ListGatewayAuthShrinkRequest &&) = default ;
    ListGatewayAuthShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayAuthShrinkRequest() = default ;
    ListGatewayAuthShrinkRequest& operator=(const ListGatewayAuthShrinkRequest &) = default ;
    ListGatewayAuthShrinkRequest& operator=(ListGatewayAuthShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->descSort_ == nullptr && this->filterParamsShrink_ == nullptr && this->orderItem_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListGatewayAuthShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // descSort Field Functions 
    bool hasDescSort() const { return this->descSort_ != nullptr;};
    void deleteDescSort() { this->descSort_ = nullptr;};
    inline bool getDescSort() const { DARABONBA_PTR_GET_DEFAULT(descSort_, false) };
    inline ListGatewayAuthShrinkRequest& setDescSort(bool descSort) { DARABONBA_PTR_SET_VALUE(descSort_, descSort) };


    // filterParamsShrink Field Functions 
    bool hasFilterParamsShrink() const { return this->filterParamsShrink_ != nullptr;};
    void deleteFilterParamsShrink() { this->filterParamsShrink_ = nullptr;};
    inline string getFilterParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(filterParamsShrink_, "") };
    inline ListGatewayAuthShrinkRequest& setFilterParamsShrink(string filterParamsShrink) { DARABONBA_PTR_SET_VALUE(filterParamsShrink_, filterParamsShrink) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline string getOrderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, "") };
    inline ListGatewayAuthShrinkRequest& setOrderItem(string orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayAuthShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayAuthShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<bool> descSort_ {};
    shared_ptr<string> filterParamsShrink_ {};
    shared_ptr<string> orderItem_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
