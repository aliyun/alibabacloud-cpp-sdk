// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICERESPONSEBODYCOMMODITY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceResponseBodyCommodityCssMetadata.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommodityMarketplaceMetadata.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommodityMeteringEntities.hpp>
#include <alibabacloud/models/GetServiceResponseBodyCommoditySpecifications.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceResponseBodyCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceResponseBodyCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(Components, components_);
      DARABONBA_PTR_TO_JSON(CssMetadata, cssMetadata_);
      DARABONBA_PTR_TO_JSON(MarketplaceMetadata, marketplaceMetadata_);
      DARABONBA_PTR_TO_JSON(MeteringEntities, meteringEntities_);
      DARABONBA_PTR_TO_JSON(SaasBoostMetadata, saasBoostMetadata_);
      DARABONBA_PTR_TO_JSON(Specifications, specifications_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceResponseBodyCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(Components, components_);
      DARABONBA_PTR_FROM_JSON(CssMetadata, cssMetadata_);
      DARABONBA_PTR_FROM_JSON(MarketplaceMetadata, marketplaceMetadata_);
      DARABONBA_PTR_FROM_JSON(MeteringEntities, meteringEntities_);
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
        && this->commodityCode_ != nullptr && this->components_ != nullptr && this->cssMetadata_ != nullptr && this->marketplaceMetadata_ != nullptr && this->meteringEntities_ != nullptr
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


    // components Field Functions 
    bool hasComponents() const { return this->components_ != nullptr;};
    void deleteComponents() { this->components_ = nullptr;};
    inline const vector<string> & components() const { DARABONBA_PTR_GET_CONST(components_, vector<string>) };
    inline vector<string> components() { DARABONBA_PTR_GET(components_, vector<string>) };
    inline GetServiceResponseBodyCommodity& setComponents(const vector<string> & components) { DARABONBA_PTR_SET_VALUE(components_, components) };
    inline GetServiceResponseBodyCommodity& setComponents(vector<string> && components) { DARABONBA_PTR_SET_RVALUE(components_, components) };


    // cssMetadata Field Functions 
    bool hasCssMetadata() const { return this->cssMetadata_ != nullptr;};
    void deleteCssMetadata() { this->cssMetadata_ = nullptr;};
    inline const Models::GetServiceResponseBodyCommodityCssMetadata & cssMetadata() const { DARABONBA_PTR_GET_CONST(cssMetadata_, Models::GetServiceResponseBodyCommodityCssMetadata) };
    inline Models::GetServiceResponseBodyCommodityCssMetadata cssMetadata() { DARABONBA_PTR_GET(cssMetadata_, Models::GetServiceResponseBodyCommodityCssMetadata) };
    inline GetServiceResponseBodyCommodity& setCssMetadata(const Models::GetServiceResponseBodyCommodityCssMetadata & cssMetadata) { DARABONBA_PTR_SET_VALUE(cssMetadata_, cssMetadata) };
    inline GetServiceResponseBodyCommodity& setCssMetadata(Models::GetServiceResponseBodyCommodityCssMetadata && cssMetadata) { DARABONBA_PTR_SET_RVALUE(cssMetadata_, cssMetadata) };


    // marketplaceMetadata Field Functions 
    bool hasMarketplaceMetadata() const { return this->marketplaceMetadata_ != nullptr;};
    void deleteMarketplaceMetadata() { this->marketplaceMetadata_ = nullptr;};
    inline const Models::GetServiceResponseBodyCommodityMarketplaceMetadata & marketplaceMetadata() const { DARABONBA_PTR_GET_CONST(marketplaceMetadata_, Models::GetServiceResponseBodyCommodityMarketplaceMetadata) };
    inline Models::GetServiceResponseBodyCommodityMarketplaceMetadata marketplaceMetadata() { DARABONBA_PTR_GET(marketplaceMetadata_, Models::GetServiceResponseBodyCommodityMarketplaceMetadata) };
    inline GetServiceResponseBodyCommodity& setMarketplaceMetadata(const Models::GetServiceResponseBodyCommodityMarketplaceMetadata & marketplaceMetadata) { DARABONBA_PTR_SET_VALUE(marketplaceMetadata_, marketplaceMetadata) };
    inline GetServiceResponseBodyCommodity& setMarketplaceMetadata(Models::GetServiceResponseBodyCommodityMarketplaceMetadata && marketplaceMetadata) { DARABONBA_PTR_SET_RVALUE(marketplaceMetadata_, marketplaceMetadata) };


    // meteringEntities Field Functions 
    bool hasMeteringEntities() const { return this->meteringEntities_ != nullptr;};
    void deleteMeteringEntities() { this->meteringEntities_ = nullptr;};
    inline const vector<Models::GetServiceResponseBodyCommodityMeteringEntities> & meteringEntities() const { DARABONBA_PTR_GET_CONST(meteringEntities_, vector<Models::GetServiceResponseBodyCommodityMeteringEntities>) };
    inline vector<Models::GetServiceResponseBodyCommodityMeteringEntities> meteringEntities() { DARABONBA_PTR_GET(meteringEntities_, vector<Models::GetServiceResponseBodyCommodityMeteringEntities>) };
    inline GetServiceResponseBodyCommodity& setMeteringEntities(const vector<Models::GetServiceResponseBodyCommodityMeteringEntities> & meteringEntities) { DARABONBA_PTR_SET_VALUE(meteringEntities_, meteringEntities) };
    inline GetServiceResponseBodyCommodity& setMeteringEntities(vector<Models::GetServiceResponseBodyCommodityMeteringEntities> && meteringEntities) { DARABONBA_PTR_SET_RVALUE(meteringEntities_, meteringEntities) };


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
    // The commodity modules.
    std::shared_ptr<vector<string>> components_ = nullptr;
    // The configuration metadata related to Lingxiao.
    std::shared_ptr<Models::GetServiceResponseBodyCommodityCssMetadata> cssMetadata_ = nullptr;
    // The metadata of Alibaba Cloud Marketplace.
    std::shared_ptr<Models::GetServiceResponseBodyCommodityMarketplaceMetadata> marketplaceMetadata_ = nullptr;
    // The information about the billable item.
    std::shared_ptr<vector<Models::GetServiceResponseBodyCommodityMeteringEntities>> meteringEntities_ = nullptr;
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
} // namespace ComputeNestSupplier20210521
#endif
