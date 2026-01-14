// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListGatewayServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(DescSort, descSort_);
      DARABONBA_PTR_TO_JSON(FilterParams, filterParams_);
      DARABONBA_PTR_TO_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(DescSort, descSort_);
      DARABONBA_PTR_FROM_JSON(FilterParams, filterParams_);
      DARABONBA_PTR_FROM_JSON(OrderItem, orderItem_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListGatewayServiceRequest() = default ;
    ListGatewayServiceRequest(const ListGatewayServiceRequest &) = default ;
    ListGatewayServiceRequest(ListGatewayServiceRequest &&) = default ;
    ListGatewayServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayServiceRequest() = default ;
    ListGatewayServiceRequest& operator=(const ListGatewayServiceRequest &) = default ;
    ListGatewayServiceRequest& operator=(ListGatewayServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FilterParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterParams& obj) { 
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      };
      friend void from_json(const Darabonba::Json& j, FilterParams& obj) { 
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(ServiceProtocol, serviceProtocol_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
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
        && this->groupName_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->serviceProtocol_ == nullptr && this->sourceType_ == nullptr; };
      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline FilterParams& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline FilterParams& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FilterParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline FilterParams& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // serviceProtocol Field Functions 
      bool hasServiceProtocol() const { return this->serviceProtocol_ != nullptr;};
      void deleteServiceProtocol() { this->serviceProtocol_ = nullptr;};
      inline string getServiceProtocol() const { DARABONBA_PTR_GET_DEFAULT(serviceProtocol_, "") };
      inline FilterParams& setServiceProtocol(string serviceProtocol) { DARABONBA_PTR_SET_VALUE(serviceProtocol_, serviceProtocol) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline FilterParams& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    protected:
      // The unique ID of the gateway.
      shared_ptr<string> gatewayUniqueId_ {};
      // The group.
      shared_ptr<string> groupName_ {};
      // The name of the service.
      shared_ptr<string> name_ {};
      // The namespace to which the service belongs.
      shared_ptr<string> namespace_ {};
      // The protocol of the service.
      // 
      // *   HTTP
      // *   HTTPS
      // *   HTTP2
      // *   GRPC
      // *   DUBBO
      shared_ptr<string> serviceProtocol_ {};
      // The type of the source.
      shared_ptr<string> sourceType_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->descSort_ == nullptr && this->filterParams_ == nullptr && this->orderItem_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListGatewayServiceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // descSort Field Functions 
    bool hasDescSort() const { return this->descSort_ != nullptr;};
    void deleteDescSort() { this->descSort_ = nullptr;};
    inline bool getDescSort() const { DARABONBA_PTR_GET_DEFAULT(descSort_, false) };
    inline ListGatewayServiceRequest& setDescSort(bool descSort) { DARABONBA_PTR_SET_VALUE(descSort_, descSort) };


    // filterParams Field Functions 
    bool hasFilterParams() const { return this->filterParams_ != nullptr;};
    void deleteFilterParams() { this->filterParams_ = nullptr;};
    inline const ListGatewayServiceRequest::FilterParams & getFilterParams() const { DARABONBA_PTR_GET_CONST(filterParams_, ListGatewayServiceRequest::FilterParams) };
    inline ListGatewayServiceRequest::FilterParams getFilterParams() { DARABONBA_PTR_GET(filterParams_, ListGatewayServiceRequest::FilterParams) };
    inline ListGatewayServiceRequest& setFilterParams(const ListGatewayServiceRequest::FilterParams & filterParams) { DARABONBA_PTR_SET_VALUE(filterParams_, filterParams) };
    inline ListGatewayServiceRequest& setFilterParams(ListGatewayServiceRequest::FilterParams && filterParams) { DARABONBA_PTR_SET_RVALUE(filterParams_, filterParams) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline string getOrderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, "") };
    inline ListGatewayServiceRequest& setOrderItem(string orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayServiceRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayServiceRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to enable sorting.
    shared_ptr<bool> descSort_ {};
    // The parameters that are used to specify filter conditions. The values of the parameters are in the format of {"key1":"value1"}.
    shared_ptr<ListGatewayServiceRequest::FilterParams> filterParams_ {};
    // The item based on which entries are sorted.
    shared_ptr<string> orderItem_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
