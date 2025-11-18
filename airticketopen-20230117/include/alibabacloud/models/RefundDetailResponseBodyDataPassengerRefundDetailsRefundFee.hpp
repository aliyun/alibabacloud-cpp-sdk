// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAPASSENGERREFUNDDETAILSREFUNDFEE_HPP_
#define ALIBABACLOUD_MODELS_REFUNDDETAILRESPONSEBODYDATAPASSENGERREFUNDDETAILSREFUNDFEE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& obj) { 
      DARABONBA_PTR_TO_JSON(already_used_total_fee, alreadyUsedTotalFee_);
      DARABONBA_PTR_TO_JSON(modify_refund_to_buyer_money, modifyRefundToBuyerMoney_);
      DARABONBA_PTR_TO_JSON(non_refundable_change_service_fee, nonRefundableChangeServiceFee_);
      DARABONBA_PTR_TO_JSON(non_refundable_change_upgrade_fee, nonRefundableChangeUpgradeFee_);
      DARABONBA_PTR_TO_JSON(non_refundable_tax_fee, nonRefundableTaxFee_);
      DARABONBA_PTR_TO_JSON(non_refundable_ticket_fee, nonRefundableTicketFee_);
      DARABONBA_PTR_TO_JSON(refund_to_buyer_money, refundToBuyerMoney_);
    };
    friend void from_json(const Darabonba::Json& j, RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& obj) { 
      DARABONBA_PTR_FROM_JSON(already_used_total_fee, alreadyUsedTotalFee_);
      DARABONBA_PTR_FROM_JSON(modify_refund_to_buyer_money, modifyRefundToBuyerMoney_);
      DARABONBA_PTR_FROM_JSON(non_refundable_change_service_fee, nonRefundableChangeServiceFee_);
      DARABONBA_PTR_FROM_JSON(non_refundable_change_upgrade_fee, nonRefundableChangeUpgradeFee_);
      DARABONBA_PTR_FROM_JSON(non_refundable_tax_fee, nonRefundableTaxFee_);
      DARABONBA_PTR_FROM_JSON(non_refundable_ticket_fee, nonRefundableTicketFee_);
      DARABONBA_PTR_FROM_JSON(refund_to_buyer_money, refundToBuyerMoney_);
    };
    RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee() = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee(const RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee &) = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee(RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee &&) = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee() = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& operator=(const RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee &) = default ;
    RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& operator=(RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alreadyUsedTotalFee_ == nullptr
        && return this->modifyRefundToBuyerMoney_ == nullptr && return this->nonRefundableChangeServiceFee_ == nullptr && return this->nonRefundableChangeUpgradeFee_ == nullptr && return this->nonRefundableTaxFee_ == nullptr && return this->nonRefundableTicketFee_ == nullptr
        && return this->refundToBuyerMoney_ == nullptr; };
    // alreadyUsedTotalFee Field Functions 
    bool hasAlreadyUsedTotalFee() const { return this->alreadyUsedTotalFee_ != nullptr;};
    void deleteAlreadyUsedTotalFee() { this->alreadyUsedTotalFee_ = nullptr;};
    inline double alreadyUsedTotalFee() const { DARABONBA_PTR_GET_DEFAULT(alreadyUsedTotalFee_, 0.0) };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& setAlreadyUsedTotalFee(double alreadyUsedTotalFee) { DARABONBA_PTR_SET_VALUE(alreadyUsedTotalFee_, alreadyUsedTotalFee) };


    // modifyRefundToBuyerMoney Field Functions 
    bool hasModifyRefundToBuyerMoney() const { return this->modifyRefundToBuyerMoney_ != nullptr;};
    void deleteModifyRefundToBuyerMoney() { this->modifyRefundToBuyerMoney_ = nullptr;};
    inline double modifyRefundToBuyerMoney() const { DARABONBA_PTR_GET_DEFAULT(modifyRefundToBuyerMoney_, 0.0) };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& setModifyRefundToBuyerMoney(double modifyRefundToBuyerMoney) { DARABONBA_PTR_SET_VALUE(modifyRefundToBuyerMoney_, modifyRefundToBuyerMoney) };


    // nonRefundableChangeServiceFee Field Functions 
    bool hasNonRefundableChangeServiceFee() const { return this->nonRefundableChangeServiceFee_ != nullptr;};
    void deleteNonRefundableChangeServiceFee() { this->nonRefundableChangeServiceFee_ = nullptr;};
    inline double nonRefundableChangeServiceFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableChangeServiceFee_, 0.0) };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& setNonRefundableChangeServiceFee(double nonRefundableChangeServiceFee) { DARABONBA_PTR_SET_VALUE(nonRefundableChangeServiceFee_, nonRefundableChangeServiceFee) };


    // nonRefundableChangeUpgradeFee Field Functions 
    bool hasNonRefundableChangeUpgradeFee() const { return this->nonRefundableChangeUpgradeFee_ != nullptr;};
    void deleteNonRefundableChangeUpgradeFee() { this->nonRefundableChangeUpgradeFee_ = nullptr;};
    inline double nonRefundableChangeUpgradeFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableChangeUpgradeFee_, 0.0) };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& setNonRefundableChangeUpgradeFee(double nonRefundableChangeUpgradeFee) { DARABONBA_PTR_SET_VALUE(nonRefundableChangeUpgradeFee_, nonRefundableChangeUpgradeFee) };


    // nonRefundableTaxFee Field Functions 
    bool hasNonRefundableTaxFee() const { return this->nonRefundableTaxFee_ != nullptr;};
    void deleteNonRefundableTaxFee() { this->nonRefundableTaxFee_ = nullptr;};
    inline double nonRefundableTaxFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableTaxFee_, 0.0) };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& setNonRefundableTaxFee(double nonRefundableTaxFee) { DARABONBA_PTR_SET_VALUE(nonRefundableTaxFee_, nonRefundableTaxFee) };


    // nonRefundableTicketFee Field Functions 
    bool hasNonRefundableTicketFee() const { return this->nonRefundableTicketFee_ != nullptr;};
    void deleteNonRefundableTicketFee() { this->nonRefundableTicketFee_ = nullptr;};
    inline double nonRefundableTicketFee() const { DARABONBA_PTR_GET_DEFAULT(nonRefundableTicketFee_, 0.0) };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& setNonRefundableTicketFee(double nonRefundableTicketFee) { DARABONBA_PTR_SET_VALUE(nonRefundableTicketFee_, nonRefundableTicketFee) };


    // refundToBuyerMoney Field Functions 
    bool hasRefundToBuyerMoney() const { return this->refundToBuyerMoney_ != nullptr;};
    void deleteRefundToBuyerMoney() { this->refundToBuyerMoney_ = nullptr;};
    inline double refundToBuyerMoney() const { DARABONBA_PTR_GET_DEFAULT(refundToBuyerMoney_, 0.0) };
    inline RefundDetailResponseBodyDataPassengerRefundDetailsRefundFee& setRefundToBuyerMoney(double refundToBuyerMoney) { DARABONBA_PTR_SET_VALUE(refundToBuyerMoney_, refundToBuyerMoney) };


  protected:
    // Total price of the used segments
    std::shared_ptr<double> alreadyUsedTotalFee_ = nullptr;
    // Amount refunded to the user after a change
    std::shared_ptr<double> modifyRefundToBuyerMoney_ = nullptr;
    // Non-refundable change penalty
    std::shared_ptr<double> nonRefundableChangeServiceFee_ = nullptr;
    // Non-refundable fare difference
    std::shared_ptr<double> nonRefundableChangeUpgradeFee_ = nullptr;
    // tax penalty
    std::shared_ptr<double> nonRefundableTaxFee_ = nullptr;
    // fare penalty
    std::shared_ptr<double> nonRefundableTicketFee_ = nullptr;
    // Amount refundable to the user (ticket price + taxes - fare penalty - tax penalty - total price of used segments)
    std::shared_ptr<double> refundToBuyerMoney_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
