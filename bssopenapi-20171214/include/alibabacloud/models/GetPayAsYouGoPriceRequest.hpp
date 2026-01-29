// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICEREQUEST_HPP_
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
  class GetPayAsYouGoPriceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPayAsYouGoPriceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ModuleList, moduleList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPayAsYouGoPriceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ModuleList, moduleList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
    };
    GetPayAsYouGoPriceRequest() = default ;
    GetPayAsYouGoPriceRequest(const GetPayAsYouGoPriceRequest &) = default ;
    GetPayAsYouGoPriceRequest(GetPayAsYouGoPriceRequest &&) = default ;
    GetPayAsYouGoPriceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPayAsYouGoPriceRequest() = default ;
    GetPayAsYouGoPriceRequest& operator=(const GetPayAsYouGoPriceRequest &) = default ;
    GetPayAsYouGoPriceRequest& operator=(GetPayAsYouGoPriceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ModuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ModuleList& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_TO_JSON(PriceType, priceType_);
      };
      friend void from_json(const Darabonba::Json& j, ModuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
        DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
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
        && this->moduleCode_ == nullptr && this->priceType_ == nullptr; };
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


      // priceType Field Functions 
      bool hasPriceType() const { return this->priceType_ != nullptr;};
      void deletePriceType() { this->priceType_ = nullptr;};
      inline string getPriceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
      inline ModuleList& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


    protected:
      // The configuration of the Nth pricing module. Valid values of N: 1 to 50. Format: AA:aa,BB:bb. The values of AA and BB are the property IDs of the pricing module. The values of aa and bb are the property values of the pricing module.
      // 
      // >  You can call the [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html) operation to obtain the configuration parameters of the pricing module.
      // 
      // This parameter is required.
      shared_ptr<string> config_ {};
      // The code of the Nth pricing module.
      // 
      // >  You can call the [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html) operation to obtain the module code.
      // 
      // This parameter is required.
      shared_ptr<string> moduleCode_ {};
      // The price type of the Nth pricing module. Valid values:
      // 
      // *   Hour: hourly price
      // *   Usage: usage price
      // *   Month: monthly price
      // *   Year: annual price
      // 
      // >  You can call the [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html) operation to obtain the configuration parameters of the pricing module.
      // 
      // This parameter is required.
      shared_ptr<string> priceType_ {};
    };

    virtual bool empty() const override { return this->moduleList_ == nullptr
        && this->ownerId_ == nullptr && this->productCode_ == nullptr && this->productType_ == nullptr && this->region_ == nullptr && this->subscriptionType_ == nullptr; };
    // moduleList Field Functions 
    bool hasModuleList() const { return this->moduleList_ != nullptr;};
    void deleteModuleList() { this->moduleList_ = nullptr;};
    inline const vector<GetPayAsYouGoPriceRequest::ModuleList> & getModuleList() const { DARABONBA_PTR_GET_CONST(moduleList_, vector<GetPayAsYouGoPriceRequest::ModuleList>) };
    inline vector<GetPayAsYouGoPriceRequest::ModuleList> getModuleList() { DARABONBA_PTR_GET(moduleList_, vector<GetPayAsYouGoPriceRequest::ModuleList>) };
    inline GetPayAsYouGoPriceRequest& setModuleList(const vector<GetPayAsYouGoPriceRequest::ModuleList> & moduleList) { DARABONBA_PTR_SET_VALUE(moduleList_, moduleList) };
    inline GetPayAsYouGoPriceRequest& setModuleList(vector<GetPayAsYouGoPriceRequest::ModuleList> && moduleList) { DARABONBA_PTR_SET_RVALUE(moduleList_, moduleList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline GetPayAsYouGoPriceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetPayAsYouGoPriceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline GetPayAsYouGoPriceRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetPayAsYouGoPriceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string getSubscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline GetPayAsYouGoPriceRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


  protected:
    // The details of pricing modules.
    // 
    // This parameter is required.
    shared_ptr<vector<GetPayAsYouGoPriceRequest::ModuleList>> moduleList_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The code of the service.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The type of the service.
    shared_ptr<string> productType_ {};
    // The ID of the region in which the instance resides.
    shared_ptr<string> region_ {};
    // The billing method. Set the value to PayAsYouGo.
    // 
    // This parameter is required.
    shared_ptr<string> subscriptionType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
