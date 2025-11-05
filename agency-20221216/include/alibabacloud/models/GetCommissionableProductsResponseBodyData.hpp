// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMMISSIONABLEPRODUCTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCOMMISSIONABLEPRODUCTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCommissionableProductsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCommissionableProductsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActualStartMonth, actualStartMonth_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_TO_JSON(EligibleForCommission, eligibleForCommission_);
      DARABONBA_PTR_TO_JSON(EligibleForDiscount, eligibleForDiscount_);
      DARABONBA_PTR_TO_JSON(EndMonth, endMonth_);
      DARABONBA_PTR_TO_JSON(ProductCampaign, productCampaign_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(SevenCoreProducts, sevenCoreProducts_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetCommissionableProductsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualStartMonth, actualStartMonth_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CommodityName, commodityName_);
      DARABONBA_PTR_FROM_JSON(EligibleForCommission, eligibleForCommission_);
      DARABONBA_PTR_FROM_JSON(EligibleForDiscount, eligibleForDiscount_);
      DARABONBA_PTR_FROM_JSON(EndMonth, endMonth_);
      DARABONBA_PTR_FROM_JSON(ProductCampaign, productCampaign_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(SevenCoreProducts, sevenCoreProducts_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetCommissionableProductsResponseBodyData() = default ;
    GetCommissionableProductsResponseBodyData(const GetCommissionableProductsResponseBodyData &) = default ;
    GetCommissionableProductsResponseBodyData(GetCommissionableProductsResponseBodyData &&) = default ;
    GetCommissionableProductsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCommissionableProductsResponseBodyData() = default ;
    GetCommissionableProductsResponseBodyData& operator=(const GetCommissionableProductsResponseBodyData &) = default ;
    GetCommissionableProductsResponseBodyData& operator=(GetCommissionableProductsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualStartMonth_ == nullptr
        && return this->commodityCode_ == nullptr && return this->commodityName_ == nullptr && return this->eligibleForCommission_ == nullptr && return this->eligibleForDiscount_ == nullptr && return this->endMonth_ == nullptr
        && return this->productCampaign_ == nullptr && return this->productCode_ == nullptr && return this->productName_ == nullptr && return this->sevenCoreProducts_ == nullptr && return this->status_ == nullptr; };
    // actualStartMonth Field Functions 
    bool hasActualStartMonth() const { return this->actualStartMonth_ != nullptr;};
    void deleteActualStartMonth() { this->actualStartMonth_ = nullptr;};
    inline string actualStartMonth() const { DARABONBA_PTR_GET_DEFAULT(actualStartMonth_, "") };
    inline GetCommissionableProductsResponseBodyData& setActualStartMonth(string actualStartMonth) { DARABONBA_PTR_SET_VALUE(actualStartMonth_, actualStartMonth) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetCommissionableProductsResponseBodyData& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // commodityName Field Functions 
    bool hasCommodityName() const { return this->commodityName_ != nullptr;};
    void deleteCommodityName() { this->commodityName_ = nullptr;};
    inline string commodityName() const { DARABONBA_PTR_GET_DEFAULT(commodityName_, "") };
    inline GetCommissionableProductsResponseBodyData& setCommodityName(string commodityName) { DARABONBA_PTR_SET_VALUE(commodityName_, commodityName) };


    // eligibleForCommission Field Functions 
    bool hasEligibleForCommission() const { return this->eligibleForCommission_ != nullptr;};
    void deleteEligibleForCommission() { this->eligibleForCommission_ = nullptr;};
    inline string eligibleForCommission() const { DARABONBA_PTR_GET_DEFAULT(eligibleForCommission_, "") };
    inline GetCommissionableProductsResponseBodyData& setEligibleForCommission(string eligibleForCommission) { DARABONBA_PTR_SET_VALUE(eligibleForCommission_, eligibleForCommission) };


    // eligibleForDiscount Field Functions 
    bool hasEligibleForDiscount() const { return this->eligibleForDiscount_ != nullptr;};
    void deleteEligibleForDiscount() { this->eligibleForDiscount_ = nullptr;};
    inline string eligibleForDiscount() const { DARABONBA_PTR_GET_DEFAULT(eligibleForDiscount_, "") };
    inline GetCommissionableProductsResponseBodyData& setEligibleForDiscount(string eligibleForDiscount) { DARABONBA_PTR_SET_VALUE(eligibleForDiscount_, eligibleForDiscount) };


    // endMonth Field Functions 
    bool hasEndMonth() const { return this->endMonth_ != nullptr;};
    void deleteEndMonth() { this->endMonth_ = nullptr;};
    inline string endMonth() const { DARABONBA_PTR_GET_DEFAULT(endMonth_, "") };
    inline GetCommissionableProductsResponseBodyData& setEndMonth(string endMonth) { DARABONBA_PTR_SET_VALUE(endMonth_, endMonth) };


    // productCampaign Field Functions 
    bool hasProductCampaign() const { return this->productCampaign_ != nullptr;};
    void deleteProductCampaign() { this->productCampaign_ = nullptr;};
    inline string productCampaign() const { DARABONBA_PTR_GET_DEFAULT(productCampaign_, "") };
    inline GetCommissionableProductsResponseBodyData& setProductCampaign(string productCampaign) { DARABONBA_PTR_SET_VALUE(productCampaign_, productCampaign) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline GetCommissionableProductsResponseBodyData& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline GetCommissionableProductsResponseBodyData& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // sevenCoreProducts Field Functions 
    bool hasSevenCoreProducts() const { return this->sevenCoreProducts_ != nullptr;};
    void deleteSevenCoreProducts() { this->sevenCoreProducts_ = nullptr;};
    inline string sevenCoreProducts() const { DARABONBA_PTR_GET_DEFAULT(sevenCoreProducts_, "") };
    inline GetCommissionableProductsResponseBodyData& setSevenCoreProducts(string sevenCoreProducts) { DARABONBA_PTR_SET_VALUE(sevenCoreProducts_, sevenCoreProducts) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCommissionableProductsResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> actualStartMonth_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> commodityName_ = nullptr;
    std::shared_ptr<string> eligibleForCommission_ = nullptr;
    std::shared_ptr<string> eligibleForDiscount_ = nullptr;
    std::shared_ptr<string> endMonth_ = nullptr;
    std::shared_ptr<string> productCampaign_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> sevenCoreProducts_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
