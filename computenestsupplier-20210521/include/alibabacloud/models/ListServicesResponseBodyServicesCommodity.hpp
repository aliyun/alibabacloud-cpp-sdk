// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODYSERVICESCOMMODITY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESRESPONSEBODYSERVICESCOMMODITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServicesResponseBodyServicesCommodity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesResponseBodyServicesCommodity& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(SaasBoostMetadata, saasBoostMetadata_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesResponseBodyServicesCommodity& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(SaasBoostMetadata, saasBoostMetadata_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListServicesResponseBodyServicesCommodity() = default ;
    ListServicesResponseBodyServicesCommodity(const ListServicesResponseBodyServicesCommodity &) = default ;
    ListServicesResponseBodyServicesCommodity(ListServicesResponseBodyServicesCommodity &&) = default ;
    ListServicesResponseBodyServicesCommodity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesResponseBodyServicesCommodity() = default ;
    ListServicesResponseBodyServicesCommodity& operator=(const ListServicesResponseBodyServicesCommodity &) = default ;
    ListServicesResponseBodyServicesCommodity& operator=(ListServicesResponseBodyServicesCommodity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commodityCode_ != nullptr
        && this->saasBoostMetadata_ != nullptr && this->type_ != nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListServicesResponseBodyServicesCommodity& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // saasBoostMetadata Field Functions 
    bool hasSaasBoostMetadata() const { return this->saasBoostMetadata_ != nullptr;};
    void deleteSaasBoostMetadata() { this->saasBoostMetadata_ = nullptr;};
    inline string saasBoostMetadata() const { DARABONBA_PTR_GET_DEFAULT(saasBoostMetadata_, "") };
    inline ListServicesResponseBodyServicesCommodity& setSaasBoostMetadata(string saasBoostMetadata) { DARABONBA_PTR_SET_VALUE(saasBoostMetadata_, saasBoostMetadata) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListServicesResponseBodyServicesCommodity& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The commodity code.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The configuration metadata related to Saas Boost.
    std::shared_ptr<string> saasBoostMetadata_ = nullptr;
    // The platform type. Valid values:
    // 
    // *   marketplace: Alibaba Cloud Marketplace.
    // *   Css: Lingxiao.
    // *   SaasBoost: Saas Boost.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
