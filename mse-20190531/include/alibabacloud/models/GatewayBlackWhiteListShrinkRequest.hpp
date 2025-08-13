// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GatewayBlackWhiteListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayBlackWhiteListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DescSort, descSort_);
      DARABONBA_PTR_TO_JSON(FilterParams, filterParamsShrink_);
      DARABONBA_PTR_TO_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayBlackWhiteListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DescSort, descSort_);
      DARABONBA_PTR_FROM_JSON(FilterParams, filterParamsShrink_);
      DARABONBA_PTR_FROM_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GatewayBlackWhiteListShrinkRequest() = default ;
    GatewayBlackWhiteListShrinkRequest(const GatewayBlackWhiteListShrinkRequest &) = default ;
    GatewayBlackWhiteListShrinkRequest(GatewayBlackWhiteListShrinkRequest &&) = default ;
    GatewayBlackWhiteListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayBlackWhiteListShrinkRequest() = default ;
    GatewayBlackWhiteListShrinkRequest& operator=(const GatewayBlackWhiteListShrinkRequest &) = default ;
    GatewayBlackWhiteListShrinkRequest& operator=(GatewayBlackWhiteListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->descSort_ != nullptr && this->filterParamsShrink_ != nullptr && this->orderItem_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GatewayBlackWhiteListShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // descSort Field Functions 
    bool hasDescSort() const { return this->descSort_ != nullptr;};
    void deleteDescSort() { this->descSort_ = nullptr;};
    inline bool descSort() const { DARABONBA_PTR_GET_DEFAULT(descSort_, false) };
    inline GatewayBlackWhiteListShrinkRequest& setDescSort(bool descSort) { DARABONBA_PTR_SET_VALUE(descSort_, descSort) };


    // filterParamsShrink Field Functions 
    bool hasFilterParamsShrink() const { return this->filterParamsShrink_ != nullptr;};
    void deleteFilterParamsShrink() { this->filterParamsShrink_ = nullptr;};
    inline string filterParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(filterParamsShrink_, "") };
    inline GatewayBlackWhiteListShrinkRequest& setFilterParamsShrink(string filterParamsShrink) { DARABONBA_PTR_SET_VALUE(filterParamsShrink_, filterParamsShrink) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline string orderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, "") };
    inline GatewayBlackWhiteListShrinkRequest& setOrderItem(string orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GatewayBlackWhiteListShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GatewayBlackWhiteListShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // This parameter is unavailable for public use.
    std::shared_ptr<bool> descSort_ = nullptr;
    // The filter parameters.
    std::shared_ptr<string> filterParamsShrink_ = nullptr;
    // This parameter is unavailable for public use.
    std::shared_ptr<string> orderItem_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: 1.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
