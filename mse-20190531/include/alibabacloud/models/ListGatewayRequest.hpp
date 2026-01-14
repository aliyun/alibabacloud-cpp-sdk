// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
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
    class FilterParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterParams& obj) { 
        DARABONBA_PTR_TO_JSON(GatewayType, gatewayType_);
        DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MseTag, mseTag_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(Vpc, vpc_);
      };
      friend void from_json(const Darabonba::Json& j, FilterParams& obj) { 
        DARABONBA_PTR_FROM_JSON(GatewayType, gatewayType_);
        DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MseTag, mseTag_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
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
      virtual bool empty() const override { return this->gatewayType_ == nullptr
        && this->gatewayUniqueId_ == nullptr && this->instanceId_ == nullptr && this->mseTag_ == nullptr && this->name_ == nullptr && this->resourceGroupId_ == nullptr
        && this->vpc_ == nullptr; };
      // gatewayType Field Functions 
      bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
      void deleteGatewayType() { this->gatewayType_ = nullptr;};
      inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
      inline FilterParams& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


      // gatewayUniqueId Field Functions 
      bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
      void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
      inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
      inline FilterParams& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline FilterParams& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // mseTag Field Functions 
      bool hasMseTag() const { return this->mseTag_ != nullptr;};
      void deleteMseTag() { this->mseTag_ = nullptr;};
      inline string getMseTag() const { DARABONBA_PTR_GET_DEFAULT(mseTag_, "") };
      inline FilterParams& setMseTag(string mseTag) { DARABONBA_PTR_SET_VALUE(mseTag_, mseTag) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline FilterParams& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline FilterParams& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // vpc Field Functions 
      bool hasVpc() const { return this->vpc_ != nullptr;};
      void deleteVpc() { this->vpc_ = nullptr;};
      inline string getVpc() const { DARABONBA_PTR_GET_DEFAULT(vpc_, "") };
      inline FilterParams& setVpc(string vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };


    protected:
      // The type of the gateway.
      shared_ptr<string> gatewayType_ {};
      // The unique ID of the gateway.
      shared_ptr<string> gatewayUniqueId_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The tag of the instance.
      shared_ptr<string> mseTag_ {};
      // The name of the gateway.
      shared_ptr<string> name_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The ID of the virtual private cloud (VPC).
      shared_ptr<string> vpc_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->descSort_ == nullptr && this->filterParams_ == nullptr && this->orderItem_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline ListGatewayRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // descSort Field Functions 
    bool hasDescSort() const { return this->descSort_ != nullptr;};
    void deleteDescSort() { this->descSort_ = nullptr;};
    inline bool getDescSort() const { DARABONBA_PTR_GET_DEFAULT(descSort_, false) };
    inline ListGatewayRequest& setDescSort(bool descSort) { DARABONBA_PTR_SET_VALUE(descSort_, descSort) };


    // filterParams Field Functions 
    bool hasFilterParams() const { return this->filterParams_ != nullptr;};
    void deleteFilterParams() { this->filterParams_ = nullptr;};
    inline const ListGatewayRequest::FilterParams & getFilterParams() const { DARABONBA_PTR_GET_CONST(filterParams_, ListGatewayRequest::FilterParams) };
    inline ListGatewayRequest::FilterParams getFilterParams() { DARABONBA_PTR_GET(filterParams_, ListGatewayRequest::FilterParams) };
    inline ListGatewayRequest& setFilterParams(const ListGatewayRequest::FilterParams & filterParams) { DARABONBA_PTR_SET_VALUE(filterParams_, filterParams) };
    inline ListGatewayRequest& setFilterParams(ListGatewayRequest::FilterParams && filterParams) { DARABONBA_PTR_SET_RVALUE(filterParams_, filterParams) };


    // orderItem Field Functions 
    bool hasOrderItem() const { return this->orderItem_ != nullptr;};
    void deleteOrderItem() { this->orderItem_ = nullptr;};
    inline string getOrderItem() const { DARABONBA_PTR_GET_DEFAULT(orderItem_, "") };
    inline ListGatewayRequest& setOrderItem(string orderItem) { DARABONBA_PTR_SET_VALUE(orderItem_, orderItem) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListGatewayRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListGatewayRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // Specifies whether to enable the sorting feature. This feature is not available.
    shared_ptr<bool> descSort_ {};
    // The details of parameters.
    shared_ptr<ListGatewayRequest::FilterParams> filterParams_ {};
    // The order information.
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
