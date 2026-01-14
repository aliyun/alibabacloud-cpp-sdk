// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYAUTHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYAUTHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayAuthRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayAuthRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DescSort, descSort_);
      DARABONBA_PTR_TO_JSON(FilterParams, filterParams_);
      DARABONBA_PTR_TO_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayAuthRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DescSort, descSort_);
      DARABONBA_PTR_FROM_JSON(FilterParams, filterParams_);
      DARABONBA_PTR_FROM_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListGatewayAuthRequest() = default ;
    ListGatewayAuthRequest(const ListGatewayAuthRequest &) = default ;
    ListGatewayAuthRequest(ListGatewayAuthRequest &&) = default ;
    ListGatewayAuthRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayAuthRequest() = default ;
    ListGatewayAuthRequest& operator=(const ListGatewayAuthRequest &) = default ;
    ListGatewayAuthRequest& operator=(ListGatewayAuthRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FilterParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterParams& obj) { 
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(IsWhite, isWhite_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, FilterParams& obj) { 
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(IsWhite, isWhite_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->gatewayUniqueId_ == nullptr
        && this->isWhite_ == nullptr && this->name_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
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


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FilterParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline bool getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
      inline FilterParams& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline FilterParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> gatewayUniqueId_ {};
      shared_ptr<bool> isWhite_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->descSort_ == nullptr && this->filterParams_ == nullptr && this->orderItem_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListGatewayAuthRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // descSort Field Functions 
    bool hasDescSort() const { return this->descSort_ != nullptr;};
    void deleteDescSort() { this->descSort_ = nullptr;};
    inline bool getDescSort() const { DARABONBA_PTR_GET_DEFAULT(descSort_, false) };
    inline ListGatewayAuthRequest& setDescSort(bool descSort) { DARABONBA_PTR_SET_VALUE(descSort_, descSort) };


    // filterParams Field Functions 
    bool hasFilterParams() const { return this->filterParams_ != nullptr;};
    void deleteFilterParams() { this->filterParams_ = nullptr;};
    inline const ListGatewayAuthRequest::FilterParams & getFilterParams() const { DARABONBA_PTR_GET_CONST(filterParams_, ListGatewayAuthRequest::FilterParams) };
    inline ListGatewayAuthRequest::FilterParams getFilterParams() { DARABONBA_PTR_GET(filterParams_, ListGatewayAuthRequest::FilterParams) };
    inline ListGatewayAuthRequest& setFilterParams(const ListGatewayAuthRequest::FilterParams & filterParams) { DARABONBA_PTR_SET_VALUE(filterParams_, filterParams) };
    inline ListGatewayAuthRequest& setFilterParams(ListGatewayAuthRequest::FilterParams && filterParams) { DARABONBA_PTR_SET_RVALUE(filterParams_, filterParams) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline string getOrderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, "") };
    inline ListGatewayAuthRequest& setOrderItem(string orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayAuthRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayAuthRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<bool> descSort_ {};
    shared_ptr<ListGatewayAuthRequest::FilterParams> filterParams_ {};
    shared_ptr<string> orderItem_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
