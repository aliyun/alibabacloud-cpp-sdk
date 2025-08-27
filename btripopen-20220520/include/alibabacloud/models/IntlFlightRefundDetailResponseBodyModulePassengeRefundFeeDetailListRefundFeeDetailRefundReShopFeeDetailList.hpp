// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEPASSENGEREFUNDFEEDETAILLISTREFUNDFEEDETAILREFUNDRESHOPFEEDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEPASSENGEREFUNDFEEDETAILLISTREFUNDFEEDETAILREFUNDRESHOPFEEDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(non_refundable_re_shop_handling_fee, nonRefundableReShopHandlingFee_);
      DARABONBA_PTR_TO_JSON(non_refundable_re_shop_upgrade_fee, nonRefundableReShopUpgradeFee_);
      DARABONBA_PTR_TO_JSON(non_refundable_tax_diff_fee, nonRefundableTaxDiffFee_);
      DARABONBA_PTR_TO_JSON(re_shop_apply_id, reShopApplyId_);
      DARABONBA_PTR_TO_JSON(re_shop_refund_amount, reShopRefundAmount_);
      DARABONBA_PTR_TO_JSON(re_shop_service_refund_amount, reShopServiceRefundAmount_);
      DARABONBA_PTR_TO_JSON(re_shop_upgrade_refund_amount, reShopUpgradeRefundAmount_);
      DARABONBA_PTR_TO_JSON(refund_tax_diff_amount, refundTaxDiffAmount_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(non_refundable_re_shop_handling_fee, nonRefundableReShopHandlingFee_);
      DARABONBA_PTR_FROM_JSON(non_refundable_re_shop_upgrade_fee, nonRefundableReShopUpgradeFee_);
      DARABONBA_PTR_FROM_JSON(non_refundable_tax_diff_fee, nonRefundableTaxDiffFee_);
      DARABONBA_PTR_FROM_JSON(re_shop_apply_id, reShopApplyId_);
      DARABONBA_PTR_FROM_JSON(re_shop_refund_amount, reShopRefundAmount_);
      DARABONBA_PTR_FROM_JSON(re_shop_service_refund_amount, reShopServiceRefundAmount_);
      DARABONBA_PTR_FROM_JSON(re_shop_upgrade_refund_amount, reShopUpgradeRefundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_tax_diff_amount, refundTaxDiffAmount_);
    };
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList() = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList(const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList &) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList(IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList &&) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList() = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& operator=(const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList &) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& operator=(IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nonRefundableReShopHandlingFee_ != nullptr
        && this->nonRefundableReShopUpgradeFee_ != nullptr && this->nonRefundableTaxDiffFee_ != nullptr && this->reShopApplyId_ != nullptr && this->reShopRefundAmount_ != nullptr && this->reShopServiceRefundAmount_ != nullptr
        && this->reShopUpgradeRefundAmount_ != nullptr && this->refundTaxDiffAmount_ != nullptr; };
    // nonRefundableReShopHandlingFee Field Functions 
    bool hasNonRefundableReShopHandlingFee() const { return this->nonRefundableReShopHandlingFee_ != nullptr;};
    void deleteNonRefundableReShopHandlingFee() { this->nonRefundableReShopHandlingFee_ = nullptr;};
    inline int64_t nonRefundableReShopHandlingFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReShopHandlingFee_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& setNonRefundableReShopHandlingFee(int64_t nonRefundableReShopHandlingFee) { DARABONBA_PTR_SET_VALUE(nonRefundableReShopHandlingFee_, nonRefundableReShopHandlingFee) };


    // nonRefundableReShopUpgradeFee Field Functions 
    bool hasNonRefundableReShopUpgradeFee() const { return this->nonRefundableReShopUpgradeFee_ != nullptr;};
    void deleteNonRefundableReShopUpgradeFee() { this->nonRefundableReShopUpgradeFee_ = nullptr;};
    inline int64_t nonRefundableReShopUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReShopUpgradeFee_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& setNonRefundableReShopUpgradeFee(int64_t nonRefundableReShopUpgradeFee) { DARABONBA_PTR_SET_VALUE(nonRefundableReShopUpgradeFee_, nonRefundableReShopUpgradeFee) };


    // nonRefundableTaxDiffFee Field Functions 
    bool hasNonRefundableTaxDiffFee() const { return this->nonRefundableTaxDiffFee_ != nullptr;};
    void deleteNonRefundableTaxDiffFee() { this->nonRefundableTaxDiffFee_ = nullptr;};
    inline int64_t nonRefundableTaxDiffFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableTaxDiffFee_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& setNonRefundableTaxDiffFee(int64_t nonRefundableTaxDiffFee) { DARABONBA_PTR_SET_VALUE(nonRefundableTaxDiffFee_, nonRefundableTaxDiffFee) };


    // reShopApplyId Field Functions 
    bool hasReShopApplyId() const { return this->reShopApplyId_ != nullptr;};
    void deleteReShopApplyId() { this->reShopApplyId_ = nullptr;};
    inline string reShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(reShopApplyId_, "") };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& setReShopApplyId(string reShopApplyId) { DARABONBA_PTR_SET_VALUE(reShopApplyId_, reShopApplyId) };


    // reShopRefundAmount Field Functions 
    bool hasReShopRefundAmount() const { return this->reShopRefundAmount_ != nullptr;};
    void deleteReShopRefundAmount() { this->reShopRefundAmount_ = nullptr;};
    inline int64_t reShopRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopRefundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& setReShopRefundAmount(int64_t reShopRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopRefundAmount_, reShopRefundAmount) };


    // reShopServiceRefundAmount Field Functions 
    bool hasReShopServiceRefundAmount() const { return this->reShopServiceRefundAmount_ != nullptr;};
    void deleteReShopServiceRefundAmount() { this->reShopServiceRefundAmount_ = nullptr;};
    inline int64_t reShopServiceRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopServiceRefundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& setReShopServiceRefundAmount(int64_t reShopServiceRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopServiceRefundAmount_, reShopServiceRefundAmount) };


    // reShopUpgradeRefundAmount Field Functions 
    bool hasReShopUpgradeRefundAmount() const { return this->reShopUpgradeRefundAmount_ != nullptr;};
    void deleteReShopUpgradeRefundAmount() { this->reShopUpgradeRefundAmount_ = nullptr;};
    inline int64_t reShopUpgradeRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopUpgradeRefundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& setReShopUpgradeRefundAmount(int64_t reShopUpgradeRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopUpgradeRefundAmount_, reShopUpgradeRefundAmount) };


    // refundTaxDiffAmount Field Functions 
    bool hasRefundTaxDiffAmount() const { return this->refundTaxDiffAmount_ != nullptr;};
    void deleteRefundTaxDiffAmount() { this->refundTaxDiffAmount_ = nullptr;};
    inline int64_t refundTaxDiffAmount() const { DARABONBA_PTR_GET_DEFAULT(refundTaxDiffAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList& setRefundTaxDiffAmount(int64_t refundTaxDiffAmount) { DARABONBA_PTR_SET_VALUE(refundTaxDiffAmount_, refundTaxDiffAmount) };


  protected:
    std::shared_ptr<int64_t> nonRefundableReShopHandlingFee_ = nullptr;
    std::shared_ptr<int64_t> nonRefundableReShopUpgradeFee_ = nullptr;
    std::shared_ptr<int64_t> nonRefundableTaxDiffFee_ = nullptr;
    std::shared_ptr<string> reShopApplyId_ = nullptr;
    std::shared_ptr<int64_t> reShopRefundAmount_ = nullptr;
    std::shared_ptr<int64_t> reShopServiceRefundAmount_ = nullptr;
    std::shared_ptr<int64_t> reShopUpgradeRefundAmount_ = nullptr;
    std::shared_ptr<int64_t> refundTaxDiffAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
