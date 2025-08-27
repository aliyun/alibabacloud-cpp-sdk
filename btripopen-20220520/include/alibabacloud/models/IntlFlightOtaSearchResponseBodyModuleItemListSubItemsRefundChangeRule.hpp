// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLISTSUBITEMSREFUNDCHANGERULE_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTOTASEARCHRESPONSEBODYMODULEITEMLISTSUBITEMSREFUNDCHANGERULE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
#include <alibabacloud/models/ModuleItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& obj) { 
      DARABONBA_PTR_TO_JSON(cancel_fee_ind, cancelFeeInd_);
      DARABONBA_PTR_TO_JSON(change_fee_ind, changeFeeInd_);
      DARABONBA_PTR_TO_JSON(change_rule_desc, changeRuleDesc_);
      DARABONBA_PTR_TO_JSON(offer_penalty_info_map, offerPenaltyInfoMap_);
      DARABONBA_PTR_TO_JSON(refund_change_digest, refundChangeDigest_);
      DARABONBA_PTR_TO_JSON(refund_rule_desc, refundRuleDesc_);
      DARABONBA_PTR_TO_JSON(structured_refund, structuredRefund_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& obj) { 
      DARABONBA_PTR_FROM_JSON(cancel_fee_ind, cancelFeeInd_);
      DARABONBA_PTR_FROM_JSON(change_fee_ind, changeFeeInd_);
      DARABONBA_PTR_FROM_JSON(change_rule_desc, changeRuleDesc_);
      DARABONBA_PTR_FROM_JSON(offer_penalty_info_map, offerPenaltyInfoMap_);
      DARABONBA_PTR_FROM_JSON(refund_change_digest, refundChangeDigest_);
      DARABONBA_PTR_FROM_JSON(refund_rule_desc, refundRuleDesc_);
      DARABONBA_PTR_FROM_JSON(structured_refund, structuredRefund_);
    };
    IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule(const IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule(IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule &&) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule() = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& operator=(const IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule &) = default ;
    IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& operator=(IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cancelFeeInd_ != nullptr
        && this->changeFeeInd_ != nullptr && this->changeRuleDesc_ != nullptr && this->offerPenaltyInfoMap_ != nullptr && this->refundChangeDigest_ != nullptr && this->refundRuleDesc_ != nullptr
        && this->structuredRefund_ != nullptr; };
    // cancelFeeInd Field Functions 
    bool hasCancelFeeInd() const { return this->cancelFeeInd_ != nullptr;};
    void deleteCancelFeeInd() { this->cancelFeeInd_ = nullptr;};
    inline bool cancelFeeInd() const { DARABONBA_PTR_GET_DEFAULT(cancelFeeInd_, false) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& setCancelFeeInd(bool cancelFeeInd) { DARABONBA_PTR_SET_VALUE(cancelFeeInd_, cancelFeeInd) };


    // changeFeeInd Field Functions 
    bool hasChangeFeeInd() const { return this->changeFeeInd_ != nullptr;};
    void deleteChangeFeeInd() { this->changeFeeInd_ = nullptr;};
    inline bool changeFeeInd() const { DARABONBA_PTR_GET_DEFAULT(changeFeeInd_, false) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& setChangeFeeInd(bool changeFeeInd) { DARABONBA_PTR_SET_VALUE(changeFeeInd_, changeFeeInd) };


    // changeRuleDesc Field Functions 
    bool hasChangeRuleDesc() const { return this->changeRuleDesc_ != nullptr;};
    void deleteChangeRuleDesc() { this->changeRuleDesc_ = nullptr;};
    inline string changeRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(changeRuleDesc_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& setChangeRuleDesc(string changeRuleDesc) { DARABONBA_PTR_SET_VALUE(changeRuleDesc_, changeRuleDesc) };


    // offerPenaltyInfoMap Field Functions 
    bool hasOfferPenaltyInfoMap() const { return this->offerPenaltyInfoMap_ != nullptr;};
    void deleteOfferPenaltyInfoMap() { this->offerPenaltyInfoMap_ = nullptr;};
    inline const map<string, vector<Models::ModuleItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> & offerPenaltyInfoMap() const { DARABONBA_PTR_GET_CONST(offerPenaltyInfoMap_, map<string, vector<Models::ModuleItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>) };
    inline map<string, vector<Models::ModuleItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> offerPenaltyInfoMap() { DARABONBA_PTR_GET(offerPenaltyInfoMap_, map<string, vector<Models::ModuleItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& setOfferPenaltyInfoMap(const map<string, vector<Models::ModuleItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> & offerPenaltyInfoMap) { DARABONBA_PTR_SET_VALUE(offerPenaltyInfoMap_, offerPenaltyInfoMap) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& setOfferPenaltyInfoMap(map<string, vector<Models::ModuleItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>> && offerPenaltyInfoMap) { DARABONBA_PTR_SET_RVALUE(offerPenaltyInfoMap_, offerPenaltyInfoMap) };


    // refundChangeDigest Field Functions 
    bool hasRefundChangeDigest() const { return this->refundChangeDigest_ != nullptr;};
    void deleteRefundChangeDigest() { this->refundChangeDigest_ = nullptr;};
    inline string refundChangeDigest() const { DARABONBA_PTR_GET_DEFAULT(refundChangeDigest_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& setRefundChangeDigest(string refundChangeDigest) { DARABONBA_PTR_SET_VALUE(refundChangeDigest_, refundChangeDigest) };


    // refundRuleDesc Field Functions 
    bool hasRefundRuleDesc() const { return this->refundRuleDesc_ != nullptr;};
    void deleteRefundRuleDesc() { this->refundRuleDesc_ = nullptr;};
    inline string refundRuleDesc() const { DARABONBA_PTR_GET_DEFAULT(refundRuleDesc_, "") };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& setRefundRuleDesc(string refundRuleDesc) { DARABONBA_PTR_SET_VALUE(refundRuleDesc_, refundRuleDesc) };


    // structuredRefund Field Functions 
    bool hasStructuredRefund() const { return this->structuredRefund_ != nullptr;};
    void deleteStructuredRefund() { this->structuredRefund_ = nullptr;};
    inline bool structuredRefund() const { DARABONBA_PTR_GET_DEFAULT(structuredRefund_, false) };
    inline IntlFlightOtaSearchResponseBodyModuleItemListSubItemsRefundChangeRule& setStructuredRefund(bool structuredRefund) { DARABONBA_PTR_SET_VALUE(structuredRefund_, structuredRefund) };


  protected:
    std::shared_ptr<bool> cancelFeeInd_ = nullptr;
    std::shared_ptr<bool> changeFeeInd_ = nullptr;
    std::shared_ptr<string> changeRuleDesc_ = nullptr;
    std::shared_ptr<map<string, vector<Models::ModuleItemListSubItemsRefundChangeRuleOfferPenaltyInfoMapValue>>> offerPenaltyInfoMap_ = nullptr;
    std::shared_ptr<string> refundChangeDigest_ = nullptr;
    std::shared_ptr<string> refundRuleDesc_ = nullptr;
    std::shared_ptr<bool> structuredRefund_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
