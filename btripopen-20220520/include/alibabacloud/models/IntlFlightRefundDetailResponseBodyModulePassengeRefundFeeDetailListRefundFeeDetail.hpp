// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEPASSENGEREFUNDFEEDETAILLISTREFUNDFEEDETAIL_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEPASSENGEREFUNDFEEDETAILLISTREFUNDFEEDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& obj) { 
      DARABONBA_PTR_TO_JSON(already_used_total_amount, alreadyUsedTotalAmount_);
      DARABONBA_PTR_TO_JSON(non_refundable_re_shop_handling_fee, nonRefundableReShopHandlingFee_);
      DARABONBA_PTR_TO_JSON(non_refundable_re_shop_upgrade_fee, nonRefundableReShopUpgradeFee_);
      DARABONBA_PTR_TO_JSON(non_refundable_tax_diff_fee, nonRefundableTaxDiffFee_);
      DARABONBA_PTR_TO_JSON(re_shop_refund_amount, reShopRefundAmount_);
      DARABONBA_PTR_TO_JSON(re_shop_service_refund_amount, reShopServiceRefundAmount_);
      DARABONBA_PTR_TO_JSON(re_shop_upgrade_refund_amount, reShopUpgradeRefundAmount_);
      DARABONBA_PTR_TO_JSON(refund_re_shop_fee_detail_list, refundReShopFeeDetailList_);
      DARABONBA_PTR_TO_JSON(refund_tax_diff_amount, refundTaxDiffAmount_);
      DARABONBA_PTR_TO_JSON(refund_tax_fee, refundTaxFee_);
      DARABONBA_PTR_TO_JSON(refund_ticket_fee, refundTicketFee_);
      DARABONBA_PTR_TO_JSON(tax_refund_amount, taxRefundAmount_);
      DARABONBA_PTR_TO_JSON(ticket_refund_amount, ticketRefundAmount_);
      DARABONBA_PTR_TO_JSON(total_refund_amount, totalRefundAmount_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(already_used_total_amount, alreadyUsedTotalAmount_);
      DARABONBA_PTR_FROM_JSON(non_refundable_re_shop_handling_fee, nonRefundableReShopHandlingFee_);
      DARABONBA_PTR_FROM_JSON(non_refundable_re_shop_upgrade_fee, nonRefundableReShopUpgradeFee_);
      DARABONBA_PTR_FROM_JSON(non_refundable_tax_diff_fee, nonRefundableTaxDiffFee_);
      DARABONBA_PTR_FROM_JSON(re_shop_refund_amount, reShopRefundAmount_);
      DARABONBA_PTR_FROM_JSON(re_shop_service_refund_amount, reShopServiceRefundAmount_);
      DARABONBA_PTR_FROM_JSON(re_shop_upgrade_refund_amount, reShopUpgradeRefundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_re_shop_fee_detail_list, refundReShopFeeDetailList_);
      DARABONBA_PTR_FROM_JSON(refund_tax_diff_amount, refundTaxDiffAmount_);
      DARABONBA_PTR_FROM_JSON(refund_tax_fee, refundTaxFee_);
      DARABONBA_PTR_FROM_JSON(refund_ticket_fee, refundTicketFee_);
      DARABONBA_PTR_FROM_JSON(tax_refund_amount, taxRefundAmount_);
      DARABONBA_PTR_FROM_JSON(ticket_refund_amount, ticketRefundAmount_);
      DARABONBA_PTR_FROM_JSON(total_refund_amount, totalRefundAmount_);
    };
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail() = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail(const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail &) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail(IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail &&) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail() = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& operator=(const IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail &) = default ;
    IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& operator=(IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alreadyUsedTotalAmount_ != nullptr
        && this->nonRefundableReShopHandlingFee_ != nullptr && this->nonRefundableReShopUpgradeFee_ != nullptr && this->nonRefundableTaxDiffFee_ != nullptr && this->reShopRefundAmount_ != nullptr && this->reShopServiceRefundAmount_ != nullptr
        && this->reShopUpgradeRefundAmount_ != nullptr && this->refundReShopFeeDetailList_ != nullptr && this->refundTaxDiffAmount_ != nullptr && this->refundTaxFee_ != nullptr && this->refundTicketFee_ != nullptr
        && this->taxRefundAmount_ != nullptr && this->ticketRefundAmount_ != nullptr && this->totalRefundAmount_ != nullptr; };
    // alreadyUsedTotalAmount Field Functions 
    bool hasAlreadyUsedTotalAmount() const { return this->alreadyUsedTotalAmount_ != nullptr;};
    void deleteAlreadyUsedTotalAmount() { this->alreadyUsedTotalAmount_ = nullptr;};
    inline int64_t alreadyUsedTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(alreadyUsedTotalAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setAlreadyUsedTotalAmount(int64_t alreadyUsedTotalAmount) { DARABONBA_PTR_SET_VALUE(alreadyUsedTotalAmount_, alreadyUsedTotalAmount) };


    // nonRefundableReShopHandlingFee Field Functions 
    bool hasNonRefundableReShopHandlingFee() const { return this->nonRefundableReShopHandlingFee_ != nullptr;};
    void deleteNonRefundableReShopHandlingFee() { this->nonRefundableReShopHandlingFee_ = nullptr;};
    inline int64_t nonRefundableReShopHandlingFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReShopHandlingFee_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setNonRefundableReShopHandlingFee(int64_t nonRefundableReShopHandlingFee) { DARABONBA_PTR_SET_VALUE(nonRefundableReShopHandlingFee_, nonRefundableReShopHandlingFee) };


    // nonRefundableReShopUpgradeFee Field Functions 
    bool hasNonRefundableReShopUpgradeFee() const { return this->nonRefundableReShopUpgradeFee_ != nullptr;};
    void deleteNonRefundableReShopUpgradeFee() { this->nonRefundableReShopUpgradeFee_ = nullptr;};
    inline int64_t nonRefundableReShopUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableReShopUpgradeFee_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setNonRefundableReShopUpgradeFee(int64_t nonRefundableReShopUpgradeFee) { DARABONBA_PTR_SET_VALUE(nonRefundableReShopUpgradeFee_, nonRefundableReShopUpgradeFee) };


    // nonRefundableTaxDiffFee Field Functions 
    bool hasNonRefundableTaxDiffFee() const { return this->nonRefundableTaxDiffFee_ != nullptr;};
    void deleteNonRefundableTaxDiffFee() { this->nonRefundableTaxDiffFee_ = nullptr;};
    inline int64_t nonRefundableTaxDiffFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableTaxDiffFee_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setNonRefundableTaxDiffFee(int64_t nonRefundableTaxDiffFee) { DARABONBA_PTR_SET_VALUE(nonRefundableTaxDiffFee_, nonRefundableTaxDiffFee) };


    // reShopRefundAmount Field Functions 
    bool hasReShopRefundAmount() const { return this->reShopRefundAmount_ != nullptr;};
    void deleteReShopRefundAmount() { this->reShopRefundAmount_ = nullptr;};
    inline int64_t reShopRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopRefundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setReShopRefundAmount(int64_t reShopRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopRefundAmount_, reShopRefundAmount) };


    // reShopServiceRefundAmount Field Functions 
    bool hasReShopServiceRefundAmount() const { return this->reShopServiceRefundAmount_ != nullptr;};
    void deleteReShopServiceRefundAmount() { this->reShopServiceRefundAmount_ = nullptr;};
    inline int64_t reShopServiceRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopServiceRefundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setReShopServiceRefundAmount(int64_t reShopServiceRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopServiceRefundAmount_, reShopServiceRefundAmount) };


    // reShopUpgradeRefundAmount Field Functions 
    bool hasReShopUpgradeRefundAmount() const { return this->reShopUpgradeRefundAmount_ != nullptr;};
    void deleteReShopUpgradeRefundAmount() { this->reShopUpgradeRefundAmount_ = nullptr;};
    inline int64_t reShopUpgradeRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(reShopUpgradeRefundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setReShopUpgradeRefundAmount(int64_t reShopUpgradeRefundAmount) { DARABONBA_PTR_SET_VALUE(reShopUpgradeRefundAmount_, reShopUpgradeRefundAmount) };


    // refundReShopFeeDetailList Field Functions 
    bool hasRefundReShopFeeDetailList() const { return this->refundReShopFeeDetailList_ != nullptr;};
    void deleteRefundReShopFeeDetailList() { this->refundReShopFeeDetailList_ = nullptr;};
    inline const vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList> & refundReShopFeeDetailList() const { DARABONBA_PTR_GET_CONST(refundReShopFeeDetailList_, vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList>) };
    inline vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList> refundReShopFeeDetailList() { DARABONBA_PTR_GET(refundReShopFeeDetailList_, vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList>) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setRefundReShopFeeDetailList(const vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList> & refundReShopFeeDetailList) { DARABONBA_PTR_SET_VALUE(refundReShopFeeDetailList_, refundReShopFeeDetailList) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setRefundReShopFeeDetailList(vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList> && refundReShopFeeDetailList) { DARABONBA_PTR_SET_RVALUE(refundReShopFeeDetailList_, refundReShopFeeDetailList) };


    // refundTaxDiffAmount Field Functions 
    bool hasRefundTaxDiffAmount() const { return this->refundTaxDiffAmount_ != nullptr;};
    void deleteRefundTaxDiffAmount() { this->refundTaxDiffAmount_ = nullptr;};
    inline int64_t refundTaxDiffAmount() const { DARABONBA_PTR_GET_DEFAULT(refundTaxDiffAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setRefundTaxDiffAmount(int64_t refundTaxDiffAmount) { DARABONBA_PTR_SET_VALUE(refundTaxDiffAmount_, refundTaxDiffAmount) };


    // refundTaxFee Field Functions 
    bool hasRefundTaxFee() const { return this->refundTaxFee_ != nullptr;};
    void deleteRefundTaxFee() { this->refundTaxFee_ = nullptr;};
    inline int64_t refundTaxFee() const { DARABONBA_PTR_GET_DEFAULT(refundTaxFee_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setRefundTaxFee(int64_t refundTaxFee) { DARABONBA_PTR_SET_VALUE(refundTaxFee_, refundTaxFee) };


    // refundTicketFee Field Functions 
    bool hasRefundTicketFee() const { return this->refundTicketFee_ != nullptr;};
    void deleteRefundTicketFee() { this->refundTicketFee_ = nullptr;};
    inline int64_t refundTicketFee() const { DARABONBA_PTR_GET_DEFAULT(refundTicketFee_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setRefundTicketFee(int64_t refundTicketFee) { DARABONBA_PTR_SET_VALUE(refundTicketFee_, refundTicketFee) };


    // taxRefundAmount Field Functions 
    bool hasTaxRefundAmount() const { return this->taxRefundAmount_ != nullptr;};
    void deleteTaxRefundAmount() { this->taxRefundAmount_ = nullptr;};
    inline int64_t taxRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(taxRefundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setTaxRefundAmount(int64_t taxRefundAmount) { DARABONBA_PTR_SET_VALUE(taxRefundAmount_, taxRefundAmount) };


    // ticketRefundAmount Field Functions 
    bool hasTicketRefundAmount() const { return this->ticketRefundAmount_ != nullptr;};
    void deleteTicketRefundAmount() { this->ticketRefundAmount_ = nullptr;};
    inline int64_t ticketRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(ticketRefundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setTicketRefundAmount(int64_t ticketRefundAmount) { DARABONBA_PTR_SET_VALUE(ticketRefundAmount_, ticketRefundAmount) };


    // totalRefundAmount Field Functions 
    bool hasTotalRefundAmount() const { return this->totalRefundAmount_ != nullptr;};
    void deleteTotalRefundAmount() { this->totalRefundAmount_ = nullptr;};
    inline int64_t totalRefundAmount() const { DARABONBA_PTR_GET_DEFAULT(totalRefundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetail& setTotalRefundAmount(int64_t totalRefundAmount) { DARABONBA_PTR_SET_VALUE(totalRefundAmount_, totalRefundAmount) };


  protected:
    std::shared_ptr<int64_t> alreadyUsedTotalAmount_ = nullptr;
    std::shared_ptr<int64_t> nonRefundableReShopHandlingFee_ = nullptr;
    std::shared_ptr<int64_t> nonRefundableReShopUpgradeFee_ = nullptr;
    std::shared_ptr<int64_t> nonRefundableTaxDiffFee_ = nullptr;
    std::shared_ptr<int64_t> reShopRefundAmount_ = nullptr;
    std::shared_ptr<int64_t> reShopServiceRefundAmount_ = nullptr;
    std::shared_ptr<int64_t> reShopUpgradeRefundAmount_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightRefundDetailResponseBodyModulePassengeRefundFeeDetailListRefundFeeDetailRefundReShopFeeDetailList>> refundReShopFeeDetailList_ = nullptr;
    std::shared_ptr<int64_t> refundTaxDiffAmount_ = nullptr;
    std::shared_ptr<int64_t> refundTaxFee_ = nullptr;
    std::shared_ptr<int64_t> refundTicketFee_ = nullptr;
    std::shared_ptr<int64_t> taxRefundAmount_ = nullptr;
    std::shared_ptr<int64_t> ticketRefundAmount_ = nullptr;
    std::shared_ptr<int64_t> totalRefundAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
