// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMSUBITEMSREFUNDCHANGERULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTAITEMDETAILRESPONSEBODYMODULEGROUPITEMSUBITEMSREFUNDCHANGERULE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& obj) { 
      DARABONBA_PTR_TO_JSON(cancel_fee_ind, cancelFeeInd_);
      DARABONBA_PTR_TO_JSON(change_fee_ind, changeFeeInd_);
      DARABONBA_PTR_TO_JSON(offer_penalty_info_map, offerPenaltyInfoMap_);
      DARABONBA_PTR_TO_JSON(refund_change_digest, refundChangeDigest_);
      DARABONBA_PTR_TO_JSON(structured_refund, structuredRefund_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& obj) { 
      DARABONBA_PTR_FROM_JSON(cancel_fee_ind, cancelFeeInd_);
      DARABONBA_PTR_FROM_JSON(change_fee_ind, changeFeeInd_);
      DARABONBA_PTR_FROM_JSON(offer_penalty_info_map, offerPenaltyInfoMap_);
      DARABONBA_PTR_FROM_JSON(refund_change_digest, refundChangeDigest_);
      DARABONBA_PTR_FROM_JSON(structured_refund, structuredRefund_);
    };
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule(IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule &&) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule() = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& operator=(const IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule &) = default ;
    IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& operator=(IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelFeeInd_ != nullptr
        && this->changeFeeInd_ != nullptr && this->offerPenaltyInfoMap_ != nullptr && this->refundChangeDigest_ != nullptr && this->structuredRefund_ != nullptr; };
    // cancelFeeInd Field Functions 
    bool hasCancelFeeInd() const { return this->cancelFeeInd_ != nullptr;};
    void deleteCancelFeeInd() { this->cancelFeeInd_ = nullptr;};
    inline bool cancelFeeInd() const { DARABONBA_PTR_GET_DEFAULT(cancelFeeInd_, false) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& setCancelFeeInd(bool cancelFeeInd) { DARABONBA_PTR_SET_VALUE(cancelFeeInd_, cancelFeeInd) };


    // changeFeeInd Field Functions 
    bool hasChangeFeeInd() const { return this->changeFeeInd_ != nullptr;};
    void deleteChangeFeeInd() { this->changeFeeInd_ = nullptr;};
    inline bool changeFeeInd() const { DARABONBA_PTR_GET_DEFAULT(changeFeeInd_, false) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& setChangeFeeInd(bool changeFeeInd) { DARABONBA_PTR_SET_VALUE(changeFeeInd_, changeFeeInd) };


    // offerPenaltyInfoMap Field Functions 
    bool hasOfferPenaltyInfoMap() const { return this->offerPenaltyInfoMap_ != nullptr;};
    void deleteOfferPenaltyInfoMap() { this->offerPenaltyInfoMap_ = nullptr;};
    inline const map<string, vector<Models::ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> & offerPenaltyInfoMap() const { DARABONBA_PTR_GET_CONST(offerPenaltyInfoMap_, map<string, vector<Models::ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>) };
    inline map<string, vector<Models::ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> offerPenaltyInfoMap() { DARABONBA_PTR_GET(offerPenaltyInfoMap_, map<string, vector<Models::ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& setOfferPenaltyInfoMap(const map<string, vector<Models::ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> & offerPenaltyInfoMap) { DARABONBA_PTR_SET_VALUE(offerPenaltyInfoMap_, offerPenaltyInfoMap) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& setOfferPenaltyInfoMap(map<string, vector<Models::ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> && offerPenaltyInfoMap) { DARABONBA_PTR_SET_RVALUE(offerPenaltyInfoMap_, offerPenaltyInfoMap) };


    // refundChangeDigest Field Functions 
    bool hasRefundChangeDigest() const { return this->refundChangeDigest_ != nullptr;};
    void deleteRefundChangeDigest() { this->refundChangeDigest_ = nullptr;};
    inline string refundChangeDigest() const { DARABONBA_PTR_GET_DEFAULT(refundChangeDigest_, "") };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& setRefundChangeDigest(string refundChangeDigest) { DARABONBA_PTR_SET_VALUE(refundChangeDigest_, refundChangeDigest) };


    // structuredRefund Field Functions 
    bool hasStructuredRefund() const { return this->structuredRefund_ != nullptr;};
    void deleteStructuredRefund() { this->structuredRefund_ = nullptr;};
    inline bool structuredRefund() const { DARABONBA_PTR_GET_DEFAULT(structuredRefund_, false) };
    inline IntlFlightOtaItemDetailResponseBodyModuleGroupItemSubItemsRefundChangeRule& setStructuredRefund(bool structuredRefund) { DARABONBA_PTR_SET_VALUE(structuredRefund_, structuredRefund) };


  protected:
    std::shared_ptr<bool> cancelFeeInd_ = nullptr;
    std::shared_ptr<bool> changeFeeInd_ = nullptr;
    std::shared_ptr<map<string, vector<Models::ModuleGroupItemSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>> offerPenaltyInfoMap_ = nullptr;
    std::shared_ptr<string> refundChangeDigest_ = nullptr;
    std::shared_ptr<bool> structuredRefund_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
