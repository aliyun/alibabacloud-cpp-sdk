// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEPASSENGERPRICEINFOLISTPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPDETAILRESPONSEBODYMODULEPASSENGERPRICEINFOLISTPRICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(handling_amount, handlingAmount_);
      DARABONBA_PTR_TO_JSON(tax_diff_amount, taxDiffAmount_);
      DARABONBA_PTR_TO_JSON(total_amount, totalAmount_);
      DARABONBA_PTR_TO_JSON(upgrade_amount, upgradeAmount_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(handling_amount, handlingAmount_);
      DARABONBA_PTR_FROM_JSON(tax_diff_amount, taxDiffAmount_);
      DARABONBA_PTR_FROM_JSON(total_amount, totalAmount_);
      DARABONBA_PTR_FROM_JSON(upgrade_amount, upgradeAmount_);
    };
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo() = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo(const IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo &) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo(IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo &&) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo() = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo& operator=(const IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo &) = default ;
    IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo& operator=(IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->handlingAmount_ != nullptr
        && this->taxDiffAmount_ != nullptr && this->totalAmount_ != nullptr && this->upgradeAmount_ != nullptr; };
    // handlingAmount Field Functions 
    bool hasHandlingAmount() const { return this->handlingAmount_ != nullptr;};
    void deleteHandlingAmount() { this->handlingAmount_ = nullptr;};
    inline int64_t handlingAmount() const { DARABONBA_PTR_GET_DEFAULT(handlingAmount_, 0L) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo& setHandlingAmount(int64_t handlingAmount) { DARABONBA_PTR_SET_VALUE(handlingAmount_, handlingAmount) };


    // taxDiffAmount Field Functions 
    bool hasTaxDiffAmount() const { return this->taxDiffAmount_ != nullptr;};
    void deleteTaxDiffAmount() { this->taxDiffAmount_ = nullptr;};
    inline int64_t taxDiffAmount() const { DARABONBA_PTR_GET_DEFAULT(taxDiffAmount_, 0L) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo& setTaxDiffAmount(int64_t taxDiffAmount) { DARABONBA_PTR_SET_VALUE(taxDiffAmount_, taxDiffAmount) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline int64_t totalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0L) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo& setTotalAmount(int64_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    // upgradeAmount Field Functions 
    bool hasUpgradeAmount() const { return this->upgradeAmount_ != nullptr;};
    void deleteUpgradeAmount() { this->upgradeAmount_ = nullptr;};
    inline int64_t upgradeAmount() const { DARABONBA_PTR_GET_DEFAULT(upgradeAmount_, 0L) };
    inline IntlFlightReShopDetailResponseBodyModulePassengerPriceInfoListPriceInfo& setUpgradeAmount(int64_t upgradeAmount) { DARABONBA_PTR_SET_VALUE(upgradeAmount_, upgradeAmount) };


  protected:
    std::shared_ptr<int64_t> handlingAmount_ = nullptr;
    std::shared_ptr<int64_t> taxDiffAmount_ = nullptr;
    std::shared_ptr<int64_t> totalAmount_ = nullptr;
    std::shared_ptr<int64_t> upgradeAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
