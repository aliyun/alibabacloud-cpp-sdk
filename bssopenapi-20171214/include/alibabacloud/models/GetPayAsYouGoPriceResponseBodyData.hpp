// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPAYASYOUGOPRICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPayAsYouGoPriceResponseBodyDataModuleDetails.hpp>
#include <alibabacloud/models/GetPayAsYouGoPriceResponseBodyDataPromotionDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class GetPayAsYouGoPriceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPayAsYouGoPriceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_TO_JSON(PromotionDetails, promotionDetails_);
    };
    friend void from_json(const Darabonba::Json& j, GetPayAsYouGoPriceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(ModuleDetails, moduleDetails_);
      DARABONBA_PTR_FROM_JSON(PromotionDetails, promotionDetails_);
    };
    GetPayAsYouGoPriceResponseBodyData() = default ;
    GetPayAsYouGoPriceResponseBodyData(const GetPayAsYouGoPriceResponseBodyData &) = default ;
    GetPayAsYouGoPriceResponseBodyData(GetPayAsYouGoPriceResponseBodyData &&) = default ;
    GetPayAsYouGoPriceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPayAsYouGoPriceResponseBodyData() = default ;
    GetPayAsYouGoPriceResponseBodyData& operator=(const GetPayAsYouGoPriceResponseBodyData &) = default ;
    GetPayAsYouGoPriceResponseBodyData& operator=(GetPayAsYouGoPriceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currency_ != nullptr
        && this->moduleDetails_ != nullptr && this->promotionDetails_ != nullptr; };
    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline GetPayAsYouGoPriceResponseBodyData& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // moduleDetails Field Functions 
    bool hasModuleDetails() const { return this->moduleDetails_ != nullptr;};
    void deleteModuleDetails() { this->moduleDetails_ = nullptr;};
    inline const Models::GetPayAsYouGoPriceResponseBodyDataModuleDetails & moduleDetails() const { DARABONBA_PTR_GET_CONST(moduleDetails_, Models::GetPayAsYouGoPriceResponseBodyDataModuleDetails) };
    inline Models::GetPayAsYouGoPriceResponseBodyDataModuleDetails moduleDetails() { DARABONBA_PTR_GET(moduleDetails_, Models::GetPayAsYouGoPriceResponseBodyDataModuleDetails) };
    inline GetPayAsYouGoPriceResponseBodyData& setModuleDetails(const Models::GetPayAsYouGoPriceResponseBodyDataModuleDetails & moduleDetails) { DARABONBA_PTR_SET_VALUE(moduleDetails_, moduleDetails) };
    inline GetPayAsYouGoPriceResponseBodyData& setModuleDetails(Models::GetPayAsYouGoPriceResponseBodyDataModuleDetails && moduleDetails) { DARABONBA_PTR_SET_RVALUE(moduleDetails_, moduleDetails) };


    // promotionDetails Field Functions 
    bool hasPromotionDetails() const { return this->promotionDetails_ != nullptr;};
    void deletePromotionDetails() { this->promotionDetails_ = nullptr;};
    inline const Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetails & promotionDetails() const { DARABONBA_PTR_GET_CONST(promotionDetails_, Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetails) };
    inline Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetails promotionDetails() { DARABONBA_PTR_GET(promotionDetails_, Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetails) };
    inline GetPayAsYouGoPriceResponseBodyData& setPromotionDetails(const Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetails & promotionDetails) { DARABONBA_PTR_SET_VALUE(promotionDetails_, promotionDetails) };
    inline GetPayAsYouGoPriceResponseBodyData& setPromotionDetails(Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetails && promotionDetails) { DARABONBA_PTR_SET_RVALUE(promotionDetails_, promotionDetails) };


  protected:
    // The type of the currency. Valid values:
    // 
    // *   CNY: Chinese Yuan
    // *   USD: US dollar
    // *   JPY: Japanese Yen
    std::shared_ptr<string> currency_ = nullptr;
    // The price details of the pricing module.
    std::shared_ptr<Models::GetPayAsYouGoPriceResponseBodyDataModuleDetails> moduleDetails_ = nullptr;
    // The details of the discount.
    std::shared_ptr<Models::GetPayAsYouGoPriceResponseBodyDataPromotionDetails> promotionDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
