// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODULEGROUPITEMSUBITEMSREFUNDCHANGERULEOFFERPENALTYINFOMAPVALUE_HPP_
#define ALIBABACLOUD_MODELS_MODULEGROUPITEMSUBITEMSREFUNDCHANGERULEOFFERPENALTYINFOMAPVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& obj) { 
      DARABONBA_PTR_TO_JSON(struct, struct_);
      DARABONBA_PTR_TO_JSON(cancel_fee_ind, cancelFeeInd_);
      DARABONBA_PTR_TO_JSON(change_fee_ind, changeFeeInd_);
      DARABONBA_PTR_TO_JSON(upgrade_fee_ind, upgradeFeeInd_);
      DARABONBA_PTR_TO_JSON(reissue_ind, reissueInd_);
      DARABONBA_PTR_TO_JSON(penalty_type_code, penaltyTypeCode_);
      DARABONBA_PTR_TO_JSON(penalty_apply_range_code, penaltyApplyRangeCode_);
      DARABONBA_PTR_TO_JSON(penalty_charge_type_code, penaltyChargeTypeCode_);
      DARABONBA_PTR_TO_JSON(fee, fee_);
      DARABONBA_PTR_TO_JSON(currency, currency_);
      DARABONBA_PTR_TO_JSON(penalty_percent, penaltyPercent_);
      DARABONBA_PTR_TO_JSON(start_time, startTime_);
      DARABONBA_PTR_TO_JSON(end_time, endTime_);
      DARABONBA_PTR_TO_JSON(time_unit_code, timeUnitCode_);
    };
    friend void from_json(const Darabonba::Json& j, ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& obj) { 
      DARABONBA_PTR_FROM_JSON(struct, struct_);
      DARABONBA_PTR_FROM_JSON(cancel_fee_ind, cancelFeeInd_);
      DARABONBA_PTR_FROM_JSON(change_fee_ind, changeFeeInd_);
      DARABONBA_PTR_FROM_JSON(upgrade_fee_ind, upgradeFeeInd_);
      DARABONBA_PTR_FROM_JSON(reissue_ind, reissueInd_);
      DARABONBA_PTR_FROM_JSON(penalty_type_code, penaltyTypeCode_);
      DARABONBA_PTR_FROM_JSON(penalty_apply_range_code, penaltyApplyRangeCode_);
      DARABONBA_PTR_FROM_JSON(penalty_charge_type_code, penaltyChargeTypeCode_);
      DARABONBA_PTR_FROM_JSON(fee, fee_);
      DARABONBA_PTR_FROM_JSON(currency, currency_);
      DARABONBA_PTR_FROM_JSON(penalty_percent, penaltyPercent_);
      DARABONBA_PTR_FROM_JSON(start_time, startTime_);
      DARABONBA_PTR_FROM_JSON(end_time, endTime_);
      DARABONBA_PTR_FROM_JSON(time_unit_code, timeUnitCode_);
    };
    ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue() = default ;
    ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue(const ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue &) = default ;
    ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue(ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue &&) = default ;
    ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue() = default ;
    ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& operator=(const ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue &) = default ;
    ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& operator=(ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->struct_ != nullptr
        && this->cancelFeeInd_ != nullptr && this->changeFeeInd_ != nullptr && this->upgradeFeeInd_ != nullptr && this->reissueInd_ != nullptr && this->penaltyTypeCode_ != nullptr
        && this->penaltyApplyRangeCode_ != nullptr && this->penaltyChargeTypeCode_ != nullptr && this->fee_ != nullptr && this->currency_ != nullptr && this->penaltyPercent_ != nullptr
        && this->startTime_ != nullptr && this->endTime_ != nullptr && this->timeUnitCode_ != nullptr; };
    // struct Field Functions 
    bool hasStruct() const { return this->struct_ != nullptr;};
    void deleteStruct() { this->struct_ = nullptr;};
    inline bool _struct() const { DARABONBA_PTR_GET_DEFAULT(struct_, false) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setStruct(bool _struct) { DARABONBA_PTR_SET_VALUE(struct_, _struct) };


    // cancelFeeInd Field Functions 
    bool hasCancelFeeInd() const { return this->cancelFeeInd_ != nullptr;};
    void deleteCancelFeeInd() { this->cancelFeeInd_ = nullptr;};
    inline bool cancelFeeInd() const { DARABONBA_PTR_GET_DEFAULT(cancelFeeInd_, false) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setCancelFeeInd(bool cancelFeeInd) { DARABONBA_PTR_SET_VALUE(cancelFeeInd_, cancelFeeInd) };


    // changeFeeInd Field Functions 
    bool hasChangeFeeInd() const { return this->changeFeeInd_ != nullptr;};
    void deleteChangeFeeInd() { this->changeFeeInd_ = nullptr;};
    inline bool changeFeeInd() const { DARABONBA_PTR_GET_DEFAULT(changeFeeInd_, false) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setChangeFeeInd(bool changeFeeInd) { DARABONBA_PTR_SET_VALUE(changeFeeInd_, changeFeeInd) };


    // upgradeFeeInd Field Functions 
    bool hasUpgradeFeeInd() const { return this->upgradeFeeInd_ != nullptr;};
    void deleteUpgradeFeeInd() { this->upgradeFeeInd_ = nullptr;};
    inline bool upgradeFeeInd() const { DARABONBA_PTR_GET_DEFAULT(upgradeFeeInd_, false) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setUpgradeFeeInd(bool upgradeFeeInd) { DARABONBA_PTR_SET_VALUE(upgradeFeeInd_, upgradeFeeInd) };


    // reissueInd Field Functions 
    bool hasReissueInd() const { return this->reissueInd_ != nullptr;};
    void deleteReissueInd() { this->reissueInd_ = nullptr;};
    inline bool reissueInd() const { DARABONBA_PTR_GET_DEFAULT(reissueInd_, false) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setReissueInd(bool reissueInd) { DARABONBA_PTR_SET_VALUE(reissueInd_, reissueInd) };


    // penaltyTypeCode Field Functions 
    bool hasPenaltyTypeCode() const { return this->penaltyTypeCode_ != nullptr;};
    void deletePenaltyTypeCode() { this->penaltyTypeCode_ = nullptr;};
    inline int32_t penaltyTypeCode() const { DARABONBA_PTR_GET_DEFAULT(penaltyTypeCode_, 0) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setPenaltyTypeCode(int32_t penaltyTypeCode) { DARABONBA_PTR_SET_VALUE(penaltyTypeCode_, penaltyTypeCode) };


    // penaltyApplyRangeCode Field Functions 
    bool hasPenaltyApplyRangeCode() const { return this->penaltyApplyRangeCode_ != nullptr;};
    void deletePenaltyApplyRangeCode() { this->penaltyApplyRangeCode_ = nullptr;};
    inline int32_t penaltyApplyRangeCode() const { DARABONBA_PTR_GET_DEFAULT(penaltyApplyRangeCode_, 0) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setPenaltyApplyRangeCode(int32_t penaltyApplyRangeCode) { DARABONBA_PTR_SET_VALUE(penaltyApplyRangeCode_, penaltyApplyRangeCode) };


    // penaltyChargeTypeCode Field Functions 
    bool hasPenaltyChargeTypeCode() const { return this->penaltyChargeTypeCode_ != nullptr;};
    void deletePenaltyChargeTypeCode() { this->penaltyChargeTypeCode_ = nullptr;};
    inline int32_t penaltyChargeTypeCode() const { DARABONBA_PTR_GET_DEFAULT(penaltyChargeTypeCode_, 0) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setPenaltyChargeTypeCode(int32_t penaltyChargeTypeCode) { DARABONBA_PTR_SET_VALUE(penaltyChargeTypeCode_, penaltyChargeTypeCode) };


    // fee Field Functions 
    bool hasFee() const { return this->fee_ != nullptr;};
    void deleteFee() { this->fee_ = nullptr;};
    inline double fee() const { DARABONBA_PTR_GET_DEFAULT(fee_, 0.0) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setFee(double fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // penaltyPercent Field Functions 
    bool hasPenaltyPercent() const { return this->penaltyPercent_ != nullptr;};
    void deletePenaltyPercent() { this->penaltyPercent_ = nullptr;};
    inline double penaltyPercent() const { DARABONBA_PTR_GET_DEFAULT(penaltyPercent_, 0.0) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setPenaltyPercent(double penaltyPercent) { DARABONBA_PTR_SET_VALUE(penaltyPercent_, penaltyPercent) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int32_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setStartTime(int32_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // timeUnitCode Field Functions 
    bool hasTimeUnitCode() const { return this->timeUnitCode_ != nullptr;};
    void deleteTimeUnitCode() { this->timeUnitCode_ = nullptr;};
    inline int32_t timeUnitCode() const { DARABONBA_PTR_GET_DEFAULT(timeUnitCode_, 0) };
    inline ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue& setTimeUnitCode(int32_t timeUnitCode) { DARABONBA_PTR_SET_VALUE(timeUnitCode_, timeUnitCode) };


  protected:
    std::shared_ptr<bool> struct_ = nullptr;
    std::shared_ptr<bool> cancelFeeInd_ = nullptr;
    std::shared_ptr<bool> changeFeeInd_ = nullptr;
    std::shared_ptr<bool> upgradeFeeInd_ = nullptr;
    std::shared_ptr<bool> reissueInd_ = nullptr;
    std::shared_ptr<int32_t> penaltyTypeCode_ = nullptr;
    std::shared_ptr<int32_t> penaltyApplyRangeCode_ = nullptr;
    std::shared_ptr<int32_t> penaltyChargeTypeCode_ = nullptr;
    std::shared_ptr<double> fee_ = nullptr;
    std::shared_ptr<string> currency_ = nullptr;
    std::shared_ptr<double> penaltyPercent_ = nullptr;
    std::shared_ptr<int32_t> startTime_ = nullptr;
    std::shared_ptr<int32_t> endTime_ = nullptr;
    std::shared_ptr<int32_t> timeUnitCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
