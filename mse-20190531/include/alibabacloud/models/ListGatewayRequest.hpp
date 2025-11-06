// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewayRequestFilterParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DescSort, descSort_);
      DARABONBA_PTR_TO_JSON(FilterParams, filterParams_);
      DARABONBA_PTR_TO_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DescSort, descSort_);
      DARABONBA_PTR_FROM_JSON(FilterParams, filterParams_);
      DARABONBA_PTR_FROM_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListGatewayRequest() = default ;
    ListGatewayRequest(const ListGatewayRequest &) = default ;
    ListGatewayRequest(ListGatewayRequest &&) = default ;
    ListGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRequest() = default ;
    ListGatewayRequest& operator=(const ListGatewayRequest &) = default ;
    ListGatewayRequest& operator=(ListGatewayRequest &&) = default ;
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
    inline ListGatewayRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // descSort Field Functions 
    bool hasDescSort() const { return this->descSort_ != nullptr;};
    void deleteDescSort() { this->descSort_ = nullptr;};
    inline bool descSort() const { DARABONBA_PTR_GET_DEFAULT(descSort_, false) };
    inline ListGatewayRequest& setDescSort(bool descSort) { DARABONBA_PTR_SET_VALUE(descSort_, descSort) };


    // filterParams Field Functions 
    bool hasFilterParams() const { return this->filterParams_ != nullptr;};
    void deleteFilterParams() { this->filterParams_ = nullptr;};
    inline const ListGatewayRequestFilterParams & filterParams() const { DARABONBA_PTR_GET_CONST(filterParams_, ListGatewayRequestFilterParams) };
    inline ListGatewayRequestFilterParams filterParams() { DARABONBA_PTR_GET(filterParams_, ListGatewayRequestFilterParams) };
    inline ListGatewayRequest& setFilterParams(const ListGatewayRequestFilterParams & filterParams) { DARABONBA_PTR_SET_VALUE(filterParams_, filterParams) };
    inline ListGatewayRequest& setFilterParams(ListGatewayRequestFilterParams && filterParams) { DARABONBA_PTR_SET_RVALUE(filterParams_, filterParams) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline string orderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, "") };
    inline ListGatewayRequest& setOrderItem(string orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // Specifies whether to enable the sorting feature. This feature is not available.
    std::shared_ptr<bool> descSort_ = nullptr;
    // The details of parameters.
    std::shared_ptr<ListGatewayRequestFilterParams> filterParams_ = nullptr;
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
