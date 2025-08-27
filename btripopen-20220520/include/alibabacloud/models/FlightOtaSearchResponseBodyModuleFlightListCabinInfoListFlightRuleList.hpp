// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_info, baggageInfo_);
      DARABONBA_PTR_TO_JSON(baggage_item, baggageItem_);
      DARABONBA_PTR_TO_JSON(change_rule, changeRule_);
      DARABONBA_PTR_TO_JSON(change_rule_item, changeRuleItem_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(refund_rule, refundRule_);
      DARABONBA_PTR_TO_JSON(refund_rule_item, refundRuleItem_);
      DARABONBA_PTR_TO_JSON(sign_rule, signRule_);
      DARABONBA_PTR_TO_JSON(tuigaiqian_info, tuigaiqianInfo_);
      DARABONBA_PTR_TO_JSON(upgrade_rule, upgradeRule_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_info, baggageInfo_);
      DARABONBA_PTR_FROM_JSON(baggage_item, baggageItem_);
      DARABONBA_PTR_FROM_JSON(change_rule, changeRule_);
      DARABONBA_PTR_FROM_JSON(change_rule_item, changeRuleItem_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(refund_rule, refundRule_);
      DARABONBA_PTR_FROM_JSON(refund_rule_item, refundRuleItem_);
      DARABONBA_PTR_FROM_JSON(sign_rule, signRule_);
      DARABONBA_PTR_FROM_JSON(tuigaiqian_info, tuigaiqianInfo_);
      DARABONBA_PTR_FROM_JSON(upgrade_rule, upgradeRule_);
    };
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList() = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList(const FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList(FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList &&) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList() = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& operator=(const FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& operator=(FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageInfo_ != nullptr
        && this->baggageItem_ != nullptr && this->changeRule_ != nullptr && this->changeRuleItem_ != nullptr && this->extra_ != nullptr && this->refundRule_ != nullptr
        && this->refundRuleItem_ != nullptr && this->signRule_ != nullptr && this->tuigaiqianInfo_ != nullptr && this->upgradeRule_ != nullptr; };
    // baggageInfo Field Functions 
    bool hasBaggageInfo() const { return this->baggageInfo_ != nullptr;};
    void deleteBaggageInfo() { this->baggageInfo_ = nullptr;};
    inline string baggageInfo() const { DARABONBA_PTR_GET_DEFAULT(baggageInfo_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setBaggageInfo(string baggageInfo) { DARABONBA_PTR_SET_VALUE(baggageInfo_, baggageInfo) };


    // baggageItem Field Functions 
    bool hasBaggageItem() const { return this->baggageItem_ != nullptr;};
    void deleteBaggageItem() { this->baggageItem_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem & baggageItem() const { DARABONBA_PTR_GET_CONST(baggageItem_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem baggageItem() { DARABONBA_PTR_GET(baggageItem_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setBaggageItem(const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem & baggageItem) { DARABONBA_PTR_SET_VALUE(baggageItem_, baggageItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setBaggageItem(Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem && baggageItem) { DARABONBA_PTR_SET_RVALUE(baggageItem_, baggageItem) };


    // changeRule Field Functions 
    bool hasChangeRule() const { return this->changeRule_ != nullptr;};
    void deleteChangeRule() { this->changeRule_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule & changeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule changeRule() { DARABONBA_PTR_GET(changeRule_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setChangeRule(const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setChangeRule(Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


    // changeRuleItem Field Functions 
    bool hasChangeRuleItem() const { return this->changeRuleItem_ != nullptr;};
    void deleteChangeRuleItem() { this->changeRuleItem_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem & changeRuleItem() const { DARABONBA_PTR_GET_CONST(changeRuleItem_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem changeRuleItem() { DARABONBA_PTR_GET(changeRuleItem_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setChangeRuleItem(const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem & changeRuleItem) { DARABONBA_PTR_SET_VALUE(changeRuleItem_, changeRuleItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setChangeRuleItem(Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem && changeRuleItem) { DARABONBA_PTR_SET_RVALUE(changeRuleItem_, changeRuleItem) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // refundRule Field Functions 
    bool hasRefundRule() const { return this->refundRule_ != nullptr;};
    void deleteRefundRule() { this->refundRule_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule & refundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule refundRule() { DARABONBA_PTR_GET(refundRule_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setRefundRule(const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setRefundRule(Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


    // refundRuleItem Field Functions 
    bool hasRefundRuleItem() const { return this->refundRuleItem_ != nullptr;};
    void deleteRefundRuleItem() { this->refundRuleItem_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem & refundRuleItem() const { DARABONBA_PTR_GET_CONST(refundRuleItem_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem refundRuleItem() { DARABONBA_PTR_GET(refundRuleItem_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setRefundRuleItem(const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem & refundRuleItem) { DARABONBA_PTR_SET_VALUE(refundRuleItem_, refundRuleItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setRefundRuleItem(Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem && refundRuleItem) { DARABONBA_PTR_SET_RVALUE(refundRuleItem_, refundRuleItem) };


    // signRule Field Functions 
    bool hasSignRule() const { return this->signRule_ != nullptr;};
    void deleteSignRule() { this->signRule_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule & signRule() const { DARABONBA_PTR_GET_CONST(signRule_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule signRule() { DARABONBA_PTR_GET(signRule_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setSignRule(const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule & signRule) { DARABONBA_PTR_SET_VALUE(signRule_, signRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setSignRule(Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule && signRule) { DARABONBA_PTR_SET_RVALUE(signRule_, signRule) };


    // tuigaiqianInfo Field Functions 
    bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
    void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
    inline string tuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


    // upgradeRule Field Functions 
    bool hasUpgradeRule() const { return this->upgradeRule_ != nullptr;};
    void deleteUpgradeRule() { this->upgradeRule_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule & upgradeRule() const { DARABONBA_PTR_GET_CONST(upgradeRule_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule upgradeRule() { DARABONBA_PTR_GET(upgradeRule_, Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setUpgradeRule(const Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule & upgradeRule) { DARABONBA_PTR_SET_VALUE(upgradeRule_, upgradeRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleList& setUpgradeRule(Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule && upgradeRule) { DARABONBA_PTR_SET_RVALUE(upgradeRule_, upgradeRule) };


  protected:
    std::shared_ptr<string> baggageInfo_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem> baggageItem_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule> changeRule_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem> changeRuleItem_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule> refundRule_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem> refundRuleItem_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule> signRule_ = nullptr;
    std::shared_ptr<string> tuigaiqianInfo_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule> upgradeRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
