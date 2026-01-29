// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUBSCRIPTIONPRICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class ModuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModuleList& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(ModuleStatus, moduleStatus_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
      };
      friend void from_json(const Darabonba::Json& j, ModuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(ModuleStatus, moduleStatus_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
      };
      ModuleList() = default ;
      ModuleList(const ModuleList &) = default ;
      ModuleList(ModuleList &&) = default ;
      ModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ModuleList() = default ;
      ModuleList& operator=(const ModuleList &) = default ;
      ModuleList& operator=(ModuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->config_ == nullptr
        && this->moduleCode_ == nullptr && this->moduleStatus_ == nullptr && this->tag_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline ModuleList& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // moduleCode Field Functions 
      bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
      void deleteModuleCode() { this->moduleCode_ = nullptr;};
      inline string getModuleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
      inline ModuleList& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


      // moduleStatus Field Functions 
      bool hasModuleStatus() const { return this->moduleStatus_ != nullptr;};
      void deleteModuleStatus() { this->moduleStatus_ = nullptr;};
      inline int32_t getModuleStatus() const { DARABONBA_PTR_GET_DEFAULT(moduleStatus_, 0) };
      inline ModuleList& setModuleStatus(int32_t moduleStatus) { DARABONBA_PTR_SET_VALUE(moduleStatus_, moduleStatus) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline ModuleList& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    protected:
      // The configurations of the Nth pricing module. Valid values of N: 1 to 50. Format: AA:aa,BB:bb. The values of AA and BB are the property IDs of the pricing module. The values of aa and bb are the property values of the pricing module.
      // 
      // This parameter is required.
      shared_ptr<string> config_ {};
      // The identifier of the Nth pricing module.
      // 
      // This parameter is required.
      shared_ptr<string> moduleCode_ {};
      // The status of the pricing module. This parameter is required only if the order type is Upgrade. Valid values:
      // 
      // *   1: adds one or more instances.
      // *   2: modifies the configurations of an instance. In the upgrade scenario, if the configurations of the pricing module change, you must specify this value for the parameter.
      // 
      // Default value: 1.
      shared_ptr<int32_t> moduleStatus_ {};
      // The tag of the specified resource. This parameter is required only if you upgrade or modify the configurations of an Alibaba Cloud service. For example, if you want to modify the configurations of a disk, you can use a tag to identify the ID of the disk.
      shared_ptr<string> tag_ {};
    };

    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->moduleList_ == nullptr && this->orderType_ == nullptr && this->ownerId_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr
        && this->quantity_ == nullptr && this->region_ == nullptr && this->servicePeriodQuantity_ == nullptr && this->servicePeriodUnit_ == nullptr && this->subscriptionType_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSubscriptionPriceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // moduleList Field Functions 
    bool hasModuleList() const { return this->moduleList_ != nullptr;};
    void deleteModuleList() { this->moduleList_ = nullptr;};
    inline const vector<GetSubscriptionPriceRequest::ModuleList> & getModuleList() const { DARABONBA_PTR_GET_CONST(moduleList_, vector<GetSubscriptionPriceRequest::ModuleList>) };
    inline vector<GetSubscriptionPriceRequest::ModuleList> getModuleList() { DARABONBA_PTR_GET(moduleList_, vector<GetSubscriptionPriceRequest::ModuleList>) };
    inline GetSubscriptionPriceRequest& setModuleList(const vector<GetSubscriptionPriceRequest::ModuleList> & moduleList) { DARABONBA_PTR_SET_VALUE(moduleList_, moduleList) };
    inline GetSubscriptionPriceRequest& setModuleList(vector<GetSubscriptionPriceRequest::ModuleList> && moduleList) { DARABONBA_PTR_SET_RVALUE(moduleList_, moduleList) };


    // orderType Field Functions 
    bool hasOrderType() const { return this->orderType_ != nullptr;};
    void deleteOrderType() { this->orderType_ = nullptr;};
    inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
    inline GetSubscriptionPriceRequest& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetSubscriptionPriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetSubscriptionPriceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetSubscriptionPriceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // quantity Field Functions 
    bool hasQuantity() const { return this->quantity_ != nullptr;};
    void deleteQuantity() { this->quantity_ = nullptr;};
    inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
    inline GetSubscriptionPriceRequest& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetSubscriptionPriceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // servicePeriodQuantity Field Functions 
    bool hasServicePeriodQuantity() const { return this->servicePeriodQuantity_ != nullptr;};
    void deleteServicePeriodQuantity() { this->servicePeriodQuantity_ = nullptr;};
    inline int32_t getServicePeriodQuantity() const { DARABONBA_PTR_GET_DEFAULT(servicePeriodQuantity_, 0) };
    inline GetSubscriptionPriceRequest& setServicePeriodQuantity(int32_t servicePeriodQuantity) { DARABONBA_PTR_SET_VALUE(servicePeriodQuantity_, servicePeriodQuantity) };


    // servicePeriodUnit Field Functions 
    bool hasServicePeriodUnit() const { return this->servicePeriodUnit_ != nullptr;};
    void deleteServicePeriodUnit() { this->servicePeriodUnit_ = nullptr;};
    inline string getServicePeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(servicePeriodUnit_, "") };
    inline GetSubscriptionPriceRequest& setServicePeriodUnit(string servicePeriodUnit) { DARABONBA_PTR_SET_VALUE(servicePeriodUnit_, servicePeriodUnit) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline GetSubscriptionPriceRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The ID of the instance for which the price is queried. This parameter is required if you upgrade an instance. You can specify this parameter to obtain the pre-upgrade configurations of the instance.
    shared_ptr<string> instanceId_ {};
    // The information about the pricing module.
    // 
    // This parameter is required.
    shared_ptr<vector<GetSubscriptionPriceRequest::ModuleList>> moduleList_ {};
    // The type of the order. Valid values:
    // 
    // *   NewOrder: purchases an instance of an Alibaba Cloud service.
    // *   Renewal: renews an instance of an Alibaba Cloud service.
    // *   Upgrade: upgrades an instance of an Alibaba Cloud service.
    // 
    // This parameter is required.
    shared_ptr<string> orderType_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The code of the service. For more information about the service code, see **Codes of Alibaba Cloud Services**.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The type of the service. Specify the parameter based on the pricing document of the specific service.
    shared_ptr<string> productType_ {};
    // The quantity.
    shared_ptr<int32_t> quantity_ {};
    // The ID of the region in which the instance resides.
    shared_ptr<string> region_ {};
    // The service duration.
    shared_ptr<int32_t> servicePeriodQuantity_ {};
    // The unit of the service duration. Valid values:
    // 
    // *   Year
    // *   Month
    shared_ptr<string> servicePeriodUnit_ {};
    // The billing method. Set the value to Subscription.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
