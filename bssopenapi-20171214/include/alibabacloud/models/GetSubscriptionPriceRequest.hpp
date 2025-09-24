// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetSubscriptionPriceRequestModuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetSubscriptionPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSubscriptionPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ModuleList, moduleList_);
      DARABONBA_PTR_TO_JSON(OrderType, orderType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Quantity, quantity_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ServicePeriodQuantity, servicePeriodQuantity_);
      DARABONBA_PTR_TO_JSON(ServicePeriodUnit, servicePeriodUnit_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, GetSubscriptionPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ModuleList, moduleList_);
      DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ServicePeriodQuantity, servicePeriodQuantity_);
      DARABONBA_PTR_FROM_JSON(ServicePeriodUnit, servicePeriodUnit_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    GetSubscriptionPriceRequest() = default ;
    GetSubscriptionPriceRequest(const GetSubscriptionPriceRequest &) = default ;
    GetSubscriptionPriceRequest(GetSubscriptionPriceRequest &&) = default ;
    GetSubscriptionPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSubscriptionPriceRequest() = default ;
    GetSubscriptionPriceRequest& operator=(const GetSubscriptionPriceRequest &) = default ;
    GetSubscriptionPriceRequest& operator=(GetSubscriptionPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->moduleList_ != nullptr && this->orderType_ != nullptr && this->ownerId_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr
        && this->quantity_ != nullptr && this->region_ != nullptr && this->servicePeriodQuantity_ != nullptr && this->servicePeriodUnit_ != nullptr && this->subscriptionType_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSubscriptionPriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleList Field Functions 
    bool hasModuleList() const { return this->moduleList_ != nullptr;};
    void deleteModuleList() { this->moduleList_ = nullptr;};
    inline const vector<GetSubscriptionPriceRequestModuleList> & moduleList() const { DARABONBA_PTR_GET_CONST(moduleList_, vector<GetSubscriptionPriceRequestModuleList>) };
    inline vector<GetSubscriptionPriceRequestModuleList> moduleList() { DARABONBA_PTR_GET(moduleList_, vector<GetSubscriptionPriceRequestModuleList>) };
    inline GetSubscriptionPriceRequest& setModuleList(const vector<GetSubscriptionPriceRequestModuleList> & moduleList) { DARABONBA_PTR_SET_VALUE(moduleList_, moduleList) };
    inline GetSubscriptionPriceRequest& setModuleList(vector<GetSubscriptionPriceRequestModuleList> && moduleList) { DARABONBA_PTR_SET_RVALUE(moduleList_, moduleList) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string orderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetSubscriptionPriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetSubscriptionPriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetSubscriptionPriceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetSubscriptionPriceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t quantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline GetSubscriptionPriceRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetSubscriptionPriceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // servicePeriodQuantity Field Functions 
    bool hasServicePeriodQuantity() const { return this->servicePeriodQuantity_ != nullptr;};
    void deleteServicePeriodQuantity() { this->servicePeriodQuantity_ = nullptr;};
    inline int32_t servicePeriodQuantity() const { DARABONBA_PTR_GET_DEFAULT(servicePeriodQuantity_, 0) };
    inline GetSubscriptionPriceRequest& setServicePeriodQuantity(int32_t servicePeriodQuantity) { DARABONBA_PTR_SET_VALUE(servicePeriodQuantity_, servicePeriodQuantity) };


    // servicePeriodUnit Field Functions 
    bool hasServicePeriodUnit() const { return this->servicePeriodUnit_ != nullptr;};
    void deleteServicePeriodUnit() { this->servicePeriodUnit_ = nullptr;};
    inline string servicePeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(servicePeriodUnit_, "") };
    inline GetSubscriptionPriceRequest& setServicePeriodUnit(string servicePeriodUnit) { DARABONBA_PTR_SET_VALUE(servicePeriodUnit_, servicePeriodUnit) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline GetSubscriptionPriceRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the instance for which the price is queried. This parameter is required if you upgrade an instance. You can specify this parameter to obtain the pre-upgrade configurations of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The information about the pricing module.
    // 
    // This parameter is required.
    std::shared_ptr<vector<GetSubscriptionPriceRequestModuleList>> moduleList_ = nullptr;
    // The type of the order. Valid values:
    // 
    // *   NewOrder: purchases an instance of an Alibaba Cloud service.
    // *   Renewal: renews an instance of an Alibaba Cloud service.
    // *   Upgrade: upgrades an instance of an Alibaba Cloud service.
    // 
    // This parameter is required.
    std::shared_ptr<string> orderType_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The code of the service. For more information about the service code, see **Codes of Alibaba Cloud Services**.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the service. Specify the parameter based on the pricing document of the specific service.
    std::shared_ptr<string> productType_ = nullptr;
    // The quantity.
    std::shared_ptr<int32_t> quantity_ = nullptr;
    // The ID of the region in which the instance resides.
    std::shared_ptr<string> region_ = nullptr;
    // The service duration.
    std::shared_ptr<int32_t> servicePeriodQuantity_ = nullptr;
    // The unit of the service duration. Valid values:
    // 
    // *   Year
    // *   Month
    std::shared_ptr<string> servicePeriodUnit_ = nullptr;
    // The billing method. Set the value to Subscription.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscriptionType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
