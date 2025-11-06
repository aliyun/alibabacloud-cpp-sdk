// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GatewayBlackWhiteListRequestFilterParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GatewayBlackWhiteListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GatewayBlackWhiteListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DescSort, descSort_);
      DARABONBA_PTR_TO_JSON(FilterParams, filterParams_);
      DARABONBA_PTR_TO_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GatewayBlackWhiteListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DescSort, descSort_);
      DARABONBA_PTR_FROM_JSON(FilterParams, filterParams_);
      DARABONBA_PTR_FROM_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    GatewayBlackWhiteListRequest() = default ;
    GatewayBlackWhiteListRequest(const GatewayBlackWhiteListRequest &) = default ;
    GatewayBlackWhiteListRequest(GatewayBlackWhiteListRequest &&) = default ;
    GatewayBlackWhiteListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GatewayBlackWhiteListRequest() = default ;
    GatewayBlackWhiteListRequest& operator=(const GatewayBlackWhiteListRequest &) = default ;
    GatewayBlackWhiteListRequest& operator=(GatewayBlackWhiteListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->descSort_ == nullptr && return this->filterParams_ == nullptr && return this->orderItem_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GatewayBlackWhiteListRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // descSort Field Functions 
    bool hasDescSort() const { return this->descSort_ != nullptr;};
    void deleteDescSort() { this->descSort_ = nullptr;};
    inline bool descSort() const { DARABONBA_PTR_GET_DEFAULT(descSort_, false) };
    inline GatewayBlackWhiteListRequest& setDescSort(bool descSort) { DARABONBA_PTR_SET_VALUE(descSort_, descSort) };


    // filterParams Field Functions 
    bool hasFilterParams() const { return this->filterParams_ != nullptr;};
    void deleteFilterParams() { this->filterParams_ = nullptr;};
    inline const GatewayBlackWhiteListRequestFilterParams & filterParams() const { DARABONBA_PTR_GET_CONST(filterParams_, GatewayBlackWhiteListRequestFilterParams) };
    inline GatewayBlackWhiteListRequestFilterParams filterParams() { DARABONBA_PTR_GET(filterParams_, GatewayBlackWhiteListRequestFilterParams) };
    inline GatewayBlackWhiteListRequest& setFilterParams(const GatewayBlackWhiteListRequestFilterParams & filterParams) { DARABONBA_PTR_SET_VALUE(filterParams_, filterParams) };
    inline GatewayBlackWhiteListRequest& setFilterParams(GatewayBlackWhiteListRequestFilterParams && filterParams) { DARABONBA_PTR_SET_RVALUE(filterParams_, filterParams) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline string orderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, "") };
    inline GatewayBlackWhiteListRequest& setOrderItem(string orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GatewayBlackWhiteListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GatewayBlackWhiteListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // This parameter is unavailable for public use.
    std::shared_ptr<bool> descSort_ = nullptr;
    // The filter parameters.
    std::shared_ptr<GatewayBlackWhiteListRequestFilterParams> filterParams_ = nullptr;
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
