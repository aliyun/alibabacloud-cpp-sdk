// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICEREQUESTMODULELIST_HPP_
#define ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICEREQUESTMODULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetPayAsYouGoPriceRequestModuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPayAsYouGoPriceRequestModuleList& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_TO_JSON(PriceType, priceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetPayAsYouGoPriceRequestModuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ModuleCode, moduleCode_);
      DARABONBA_PTR_FROM_JSON(PriceType, priceType_);
    };
    GetPayAsYouGoPriceRequestModuleList() = default ;
    GetPayAsYouGoPriceRequestModuleList(const GetPayAsYouGoPriceRequestModuleList &) = default ;
    GetPayAsYouGoPriceRequestModuleList(GetPayAsYouGoPriceRequestModuleList &&) = default ;
    GetPayAsYouGoPriceRequestModuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPayAsYouGoPriceRequestModuleList() = default ;
    GetPayAsYouGoPriceRequestModuleList& operator=(const GetPayAsYouGoPriceRequestModuleList &) = default ;
    GetPayAsYouGoPriceRequestModuleList& operator=(GetPayAsYouGoPriceRequestModuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->moduleCode_ != nullptr && this->priceType_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetPayAsYouGoPriceRequestModuleList& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // moduleCode Field Functions 
    bool hasModuleCode() const { return this->moduleCode_ != nullptr;};
    void deleteModuleCode() { this->moduleCode_ = nullptr;};
    inline string moduleCode() const { DARABONBA_PTR_GET_DEFAULT(moduleCode_, "") };
    inline GetPayAsYouGoPriceRequestModuleList& setModuleCode(string moduleCode) { DARABONBA_PTR_SET_VALUE(moduleCode_, moduleCode) };


    // priceType Field Functions 
    bool hasPriceType() const { return this->priceType_ != nullptr;};
    void deletePriceType() { this->priceType_ = nullptr;};
    inline string priceType() const { DARABONBA_PTR_GET_DEFAULT(priceType_, "") };
    inline GetPayAsYouGoPriceRequestModuleList& setPriceType(string priceType) { DARABONBA_PTR_SET_VALUE(priceType_, priceType) };


  protected:
    // The configuration of the Nth pricing module. Valid values of N: 1 to 50. Format: AA:aa,BB:bb. The values of AA and BB are the property IDs of the pricing module. The values of aa and bb are the property values of the pricing module.
    // 
    // >  You can call the [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html) operation to obtain the configuration parameters of the pricing module.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The code of the Nth pricing module.
    // 
    // >  You can call the [DescribePricingModule](https://help.aliyun.com/document_detail/96469.html) operation to obtain the module code.
    // 
    // This parameter is required.
    std::shared_ptr<string> moduleCode_ = nullptr;
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
    std::shared_ptr<string> priceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
