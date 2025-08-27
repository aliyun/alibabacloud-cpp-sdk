// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTASEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListFlightRuleListBaggageItem.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRule.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRule.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListFlightRuleListSignRule.hpp>
#include <alibabacloud/models/FlightOtaSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaSearchResponseBodyModuleFlightListFlightRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& obj) { 
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
    FlightOtaSearchResponseBodyModuleFlightListFlightRuleList() = default ;
    FlightOtaSearchResponseBodyModuleFlightListFlightRuleList(const FlightOtaSearchResponseBodyModuleFlightListFlightRuleList &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListFlightRuleList(FlightOtaSearchResponseBodyModuleFlightListFlightRuleList &&) = default ;
    FlightOtaSearchResponseBodyModuleFlightListFlightRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaSearchResponseBodyModuleFlightListFlightRuleList() = default ;
    FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& operator=(const FlightOtaSearchResponseBodyModuleFlightListFlightRuleList &) = default ;
    FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& operator=(FlightOtaSearchResponseBodyModuleFlightListFlightRuleList &&) = default ;
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
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setBaggageInfo(string baggageInfo) { DARABONBA_PTR_SET_VALUE(baggageInfo_, baggageInfo) };


    // baggageItem Field Functions 
    bool hasBaggageItem() const { return this->baggageItem_ != nullptr;};
    void deleteBaggageItem() { this->baggageItem_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListBaggageItem & baggageItem() const { DARABONBA_PTR_GET_CONST(baggageItem_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListBaggageItem) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListBaggageItem baggageItem() { DARABONBA_PTR_GET(baggageItem_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListBaggageItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setBaggageItem(const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListBaggageItem & baggageItem) { DARABONBA_PTR_SET_VALUE(baggageItem_, baggageItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setBaggageItem(Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListBaggageItem && baggageItem) { DARABONBA_PTR_SET_RVALUE(baggageItem_, baggageItem) };


    // changeRule Field Functions 
    bool hasChangeRule() const { return this->changeRule_ != nullptr;};
    void deleteChangeRule() { this->changeRule_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRule & changeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRule) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRule changeRule() { DARABONBA_PTR_GET(changeRule_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setChangeRule(const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRule & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setChangeRule(Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRule && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


    // changeRuleItem Field Functions 
    bool hasChangeRuleItem() const { return this->changeRuleItem_ != nullptr;};
    void deleteChangeRuleItem() { this->changeRuleItem_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem & changeRuleItem() const { DARABONBA_PTR_GET_CONST(changeRuleItem_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem changeRuleItem() { DARABONBA_PTR_GET(changeRuleItem_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setChangeRuleItem(const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem & changeRuleItem) { DARABONBA_PTR_SET_VALUE(changeRuleItem_, changeRuleItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setChangeRuleItem(Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem && changeRuleItem) { DARABONBA_PTR_SET_RVALUE(changeRuleItem_, changeRuleItem) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // refundRule Field Functions 
    bool hasRefundRule() const { return this->refundRule_ != nullptr;};
    void deleteRefundRule() { this->refundRule_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRule & refundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRule) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRule refundRule() { DARABONBA_PTR_GET(refundRule_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setRefundRule(const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setRefundRule(Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


    // refundRuleItem Field Functions 
    bool hasRefundRuleItem() const { return this->refundRuleItem_ != nullptr;};
    void deleteRefundRuleItem() { this->refundRuleItem_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem & refundRuleItem() const { DARABONBA_PTR_GET_CONST(refundRuleItem_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem refundRuleItem() { DARABONBA_PTR_GET(refundRuleItem_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setRefundRuleItem(const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem & refundRuleItem) { DARABONBA_PTR_SET_VALUE(refundRuleItem_, refundRuleItem) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setRefundRuleItem(Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem && refundRuleItem) { DARABONBA_PTR_SET_RVALUE(refundRuleItem_, refundRuleItem) };


    // signRule Field Functions 
    bool hasSignRule() const { return this->signRule_ != nullptr;};
    void deleteSignRule() { this->signRule_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListSignRule & signRule() const { DARABONBA_PTR_GET_CONST(signRule_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListSignRule) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListSignRule signRule() { DARABONBA_PTR_GET(signRule_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListSignRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setSignRule(const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListSignRule & signRule) { DARABONBA_PTR_SET_VALUE(signRule_, signRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setSignRule(Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListSignRule && signRule) { DARABONBA_PTR_SET_RVALUE(signRule_, signRule) };


    // tuigaiqianInfo Field Functions 
    bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
    void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
    inline string tuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


    // upgradeRule Field Functions 
    bool hasUpgradeRule() const { return this->upgradeRule_ != nullptr;};
    void deleteUpgradeRule() { this->upgradeRule_ = nullptr;};
    inline const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule & upgradeRule() const { DARABONBA_PTR_GET_CONST(upgradeRule_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule) };
    inline Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule upgradeRule() { DARABONBA_PTR_GET(upgradeRule_, Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setUpgradeRule(const Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule & upgradeRule) { DARABONBA_PTR_SET_VALUE(upgradeRule_, upgradeRule) };
    inline FlightOtaSearchResponseBodyModuleFlightListFlightRuleList& setUpgradeRule(Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule && upgradeRule) { DARABONBA_PTR_SET_RVALUE(upgradeRule_, upgradeRule) };


  protected:
    std::shared_ptr<string> baggageInfo_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListBaggageItem> baggageItem_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRule> changeRule_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem> changeRuleItem_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRule> refundRule_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem> refundRuleItem_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListSignRule> signRule_ = nullptr;
    std::shared_ptr<string> tuigaiqianInfo_ = nullptr;
    std::shared_ptr<Models::FlightOtaSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule> upgradeRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
