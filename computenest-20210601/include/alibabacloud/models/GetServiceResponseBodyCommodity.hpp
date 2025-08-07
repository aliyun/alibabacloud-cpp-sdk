// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommodityCssMetadata.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommodityMarketplaceMetadata.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/GetServiceResponseBodyCommoditySpecifications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class GetServiceResponseBodyCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CssMetadata, cssMetadata_);
      DARABONBA_PTR_TO_JSON(DeployPage, deployPage_);
      DARABONBA_PTR_TO_JSON(MarketplaceMetadata, marketplaceMetadata_);
      DARABONBA_PTR_TO_JSON(OrderTime, orderTime_);
      DARABONBA_PTR_TO_JSON(SaasBoostMetadata, saasBoostMetadata_);
      DARABONBA_PTR_TO_JSON(Specifications, specifications_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CssMetadata, cssMetadata_);
      DARABONBA_PTR_FROM_JSON(DeployPage, deployPage_);
      DARABONBA_PTR_FROM_JSON(MarketplaceMetadata, marketplaceMetadata_);
      DARABONBA_PTR_FROM_JSON(OrderTime, orderTime_);
      DARABONBA_PTR_FROM_JSON(SaasBoostMetadata, saasBoostMetadata_);
      DARABONBA_PTR_FROM_JSON(Specifications, specifications_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetServiceResponseBodyCommodity() = default ;
    GetServiceResponseBodyCommodity(const GetServiceResponseBodyCommodity &) = default ;
    GetServiceResponseBodyCommodity(GetServiceResponseBodyCommodity &&) = default ;
    GetServiceResponseBodyCommodity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceResponseBodyCommodity() = default ;
    GetServiceResponseBodyCommodity& operator=(const GetServiceResponseBodyCommodity &) = default ;
    GetServiceResponseBodyCommodity& operator=(GetServiceResponseBodyCommodity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->commodityCode_ != nullptr && this->cssMetadata_ != nullptr && this->deployPage_ != nullptr && this->marketplaceMetadata_ != nullptr && this->orderTime_ != nullptr
        && this->saasBoostMetadata_ != nullptr && this->specifications_ != nullptr && this->type_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetServiceResponseBodyCommodity& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetServiceResponseBodyCommodity& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // cssMetadata Field Functions 
    bool hasCssMetadata() const { return this->cssMetadata_ != nullptr;};
    void deleteCssMetadata() { this->cssMetadata_ = nullptr;};
    inline const Models::GetServiceResponseBodyCommodityCssMetadata & cssMetadata() const { DARABONBA_PTR_GET_CONST(cssMetadata_, Models::GetServiceResponseBodyCommodityCssMetadata) };
    inline Models::GetServiceResponseBodyCommodityCssMetadata cssMetadata() { DARABONBA_PTR_GET(cssMetadata_, Models::GetServiceResponseBodyCommodityCssMetadata) };
    inline GetServiceResponseBodyCommodity& setCssMetadata(const Models::GetServiceResponseBodyCommodityCssMetadata & cssMetadata) { DARABONBA_PTR_SET_VALUE(cssMetadata_, cssMetadata) };
    inline GetServiceResponseBodyCommodity& setCssMetadata(Models::GetServiceResponseBodyCommodityCssMetadata && cssMetadata) { DARABONBA_PTR_SET_RVALUE(cssMetadata_, cssMetadata) };


    // deployPage Field Functions 
    bool hasDeployPage() const { return this->deployPage_ != nullptr;};
    void deleteDeployPage() { this->deployPage_ = nullptr;};
    inline string deployPage() const { DARABONBA_PTR_GET_DEFAULT(deployPage_, "") };
    inline GetServiceResponseBodyCommodity& setDeployPage(string deployPage) { DARABONBA_PTR_SET_VALUE(deployPage_, deployPage) };


    // marketplaceMetadata Field Functions 
    bool hasMarketplaceMetadata() const { return this->marketplaceMetadata_ != nullptr;};
    void deleteMarketplaceMetadata() { this->marketplaceMetadata_ = nullptr;};
    inline const Models::GetServiceResponseBodyCommodityMarketplaceMetadata & marketplaceMetadata() const { DARABONBA_PTR_GET_CONST(marketplaceMetadata_, Models::GetServiceResponseBodyCommodityMarketplaceMetadata) };
    inline Models::GetServiceResponseBodyCommodityMarketplaceMetadata marketplaceMetadata() { DARABONBA_PTR_GET(marketplaceMetadata_, Models::GetServiceResponseBodyCommodityMarketplaceMetadata) };
    inline GetServiceResponseBodyCommodity& setMarketplaceMetadata(const Models::GetServiceResponseBodyCommodityMarketplaceMetadata & marketplaceMetadata) { DARABONBA_PTR_SET_VALUE(marketplaceMetadata_, marketplaceMetadata) };
    inline GetServiceResponseBodyCommodity& setMarketplaceMetadata(Models::GetServiceResponseBodyCommodityMarketplaceMetadata && marketplaceMetadata) { DARABONBA_PTR_SET_RVALUE(marketplaceMetadata_, marketplaceMetadata) };


    // orderTime Field Functions 
    bool hasOrderTime() const { return this->orderTime_ != nullptr;};
    void deleteOrderTime() { this->orderTime_ = nullptr;};
    inline const map<string, vector<string>> & orderTime() const { DARABONBA_PTR_GET_CONST(orderTime_, map<string, vector<string>>) };
    inline map<string, vector<string>> orderTime() { DARABONBA_PTR_GET(orderTime_, map<string, vector<string>>) };
    inline GetServiceResponseBodyCommodity& setOrderTime(const map<string, vector<string>> & orderTime) { DARABONBA_PTR_SET_VALUE(orderTime_, orderTime) };
    inline GetServiceResponseBodyCommodity& setOrderTime(map<string, vector<string>> && orderTime) { DARABONBA_PTR_SET_RVALUE(orderTime_, orderTime) };


    // saasBoostMetadata Field Functions 
    bool hasSaasBoostMetadata() const { return this->saasBoostMetadata_ != nullptr;};
    void deleteSaasBoostMetadata() { this->saasBoostMetadata_ = nullptr;};
    inline string saasBoostMetadata() const { DARABONBA_PTR_GET_DEFAULT(saasBoostMetadata_, "") };
    inline GetServiceResponseBodyCommodity& setSaasBoostMetadata(string saasBoostMetadata) { DARABONBA_PTR_SET_VALUE(saasBoostMetadata_, saasBoostMetadata) };


    // specifications Field Functions 
    bool hasSpecifications() const { return this->specifications_ != nullptr;};
    void deleteSpecifications() { this->specifications_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommoditySpecifications> & specifications() const { DARABONBA_PTR_GET_CONST(specifications_, vector<Models::GetServiceResponseBodyCommoditySpecifications>) };
    inline vector<Models::GetServiceResponseBodyCommoditySpecifications> specifications() { DARABONBA_PTR_GET(specifications_, vector<Models::GetServiceResponseBodyCommoditySpecifications>) };
    inline GetServiceResponseBodyCommodity& setSpecifications(const vector<Models::GetServiceResponseBodyCommoditySpecifications> & specifications) { DARABONBA_PTR_SET_VALUE(specifications_, specifications) };
    inline GetServiceResponseBodyCommodity& setSpecifications(vector<Models::GetServiceResponseBodyCommoditySpecifications> && specifications) { DARABONBA_PTR_SET_RVALUE(specifications_, specifications) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetServiceResponseBodyCommodity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The billing method of the service. Valid values:
    // 
    // *   **PREPAY** (default): subscription.
    // *   **POSTPAY**: pay-as-you-go.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The commodity code of the service in Alibaba Cloud Marketplace.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The configuration metadata related to Lingxiao.
    std::shared_ptr<Models::GetServiceResponseBodyCommodityCssMetadata> cssMetadata_ = nullptr;
    // The deploy page.
    std::shared_ptr<string> deployPage_ = nullptr;
    // The metadata of Alibaba Cloud Marketplace.
    std::shared_ptr<Models::GetServiceResponseBodyCommodityMarketplaceMetadata> marketplaceMetadata_ = nullptr;
    // The order time.
    std::shared_ptr<map<string, vector<string>>> orderTime_ = nullptr;
    // The configuration metadata related to Saas Boost.
    std::shared_ptr<string> saasBoostMetadata_ = nullptr;
    // The specification details of the service in Alibaba Cloud Marketplace.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommoditySpecifications>> specifications_ = nullptr;
    // The service type. Valid values:
    // 
    // *   marketplace: Alibaba Cloud Marketplace.
    // *   Css: Lingxiao.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
