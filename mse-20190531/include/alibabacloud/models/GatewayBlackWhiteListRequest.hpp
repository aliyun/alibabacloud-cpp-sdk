// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GATEWAYBLACKWHITELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class FilterParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterParams& obj) { 
        DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SearchContent, searchContent_);
        DARABONBA_PTR_TO_JSON(SearchType, searchType_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, FilterParams& obj) { 
        DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SearchContent, searchContent_);
        DARABONBA_PTR_FROM_JSON(SearchType, searchType_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      FilterParams() = default ;
      FilterParams(const FilterParams &) = default ;
      FilterParams(FilterParams &&) = default ;
      FilterParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterParams() = default ;
      FilterParams& operator=(const FilterParams &) = default ;
      FilterParams& operator=(FilterParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gatewayId_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->isWhite_ == nullptr && this->resourceType_ == nullptr && this->searchContent_ == nullptr && this->searchType_ == nullptr
        && this->type_ == nullptr; };
      // gatewayId Field Functions 
      bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
      void deleteGatewayId() { this->gatewayId_ = nullptr;};
      inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
      inline FilterParams& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline FilterParams& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // isWhite Field Functions 
      bool hasIsWhite() const { return this->isWhite_ != nullptr;};
      void deleteIsWhite() { this->isWhite_ = nullptr;};
      inline bool getIsWhite() const { DARABONBA_PTR_GET_DEFAULT(isWhite_, false) };
      inline FilterParams& setIsWhite(bool isWhite) { DARABONBA_PTR_SET_VALUE(isWhite_, isWhite) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline FilterParams& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // searchContent Field Functions 
      bool hasSearchContent() const { return this->searchContent_ != nullptr;};
      void deleteSearchContent() { this->searchContent_ = nullptr;};
      inline string getSearchContent() const { DARABONBA_PTR_GET_DEFAULT(searchContent_, "") };
      inline FilterParams& setSearchContent(string searchContent) { DARABONBA_PTR_SET_VALUE(searchContent_, searchContent) };


      // searchType Field Functions 
      bool hasSearchType() const { return this->searchType_ != nullptr;};
      void deleteSearchType() { this->searchType_ = nullptr;};
      inline string getSearchType() const { DARABONBA_PTR_GET_DEFAULT(searchType_, "") };
      inline FilterParams& setSearchType(string searchType) { DARABONBA_PTR_SET_VALUE(searchType_, searchType) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline FilterParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The gateway ID.
      shared_ptr<int64_t> gatewayId_ {};
      // The unique ID of the gateway. If this parameter is used together with the GatewayId parameter, the value of the GatewayId parameter is used.
      shared_ptr<string> gatewayUniqueId_ {};
      // This parameter is unavailable for public use.
      shared_ptr<bool> isWhite_ {};
      // This parameter is unavailable for public use.
      shared_ptr<string> resourceType_ {};
      // The content that you want to query.
      shared_ptr<string> searchContent_ {};
      // The query type. Valid values:
      // 
      // *   ROUTE: The list is queried by route. If the value of this parameter is ROUTE, set the SearchContent parameter to the route name.
      // *   DOMAIN: The list is queried by domain name. If the value of this parameter is DOMAIN, set the SearchContent parameter to the domain name.
      // *   IP: The list is queried by specified IP address. If the value of this parameter is IP, set the SearchContent parameter to the IP address.
      shared_ptr<string> searchType_ {};
      // This parameter is unavailable for public use.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->descSort_ == nullptr && this->filterParams_ == nullptr && this->orderItem_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GatewayBlackWhiteListRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // descSort Field Functions 
    bool hasDescSort() const { return this->descSort_ != nullptr;};
    void deleteDescSort() { this->descSort_ = nullptr;};
    inline bool getDescSort() const { DARABONBA_PTR_GET_DEFAULT(descSort_, false) };
    inline GatewayBlackWhiteListRequest& setDescSort(bool descSort) { DARABONBA_PTR_SET_VALUE(descSort_, descSort) };


    // filterParams Field Functions 
    bool hasFilterParams() const { return this->filterParams_ != nullptr;};
    void deleteFilterParams() { this->filterParams_ = nullptr;};
    inline const GatewayBlackWhiteListRequest::FilterParams & getFilterParams() const { DARABONBA_PTR_GET_CONST(filterParams_, GatewayBlackWhiteListRequest::FilterParams) };
    inline GatewayBlackWhiteListRequest::FilterParams getFilterParams() { DARABONBA_PTR_GET(filterParams_, GatewayBlackWhiteListRequest::FilterParams) };
    inline GatewayBlackWhiteListRequest& setFilterParams(const GatewayBlackWhiteListRequest::FilterParams & filterParams) { DARABONBA_PTR_SET_VALUE(filterParams_, filterParams) };
    inline GatewayBlackWhiteListRequest& setFilterParams(GatewayBlackWhiteListRequest::FilterParams && filterParams) { DARABONBA_PTR_SET_RVALUE(filterParams_, filterParams) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline string getOrderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, "") };
    inline GatewayBlackWhiteListRequest& setOrderItem(string orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline GatewayBlackWhiteListRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GatewayBlackWhiteListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    shared_ptr<string> acceptLanguage_ {};
    // This parameter is unavailable for public use.
    shared_ptr<bool> descSort_ {};
    // The filter parameters.
    shared_ptr<GatewayBlackWhiteListRequest::FilterParams> filterParams_ {};
    // This parameter is unavailable for public use.
    shared_ptr<string> orderItem_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 1.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
