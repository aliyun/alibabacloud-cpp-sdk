// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRule.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRuleItem.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRule.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListSignRule.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListFlightRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListFlightRuleList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListFlightRuleList& obj) { 
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
    FlightSearchListResponseBodyModuleFlightListFlightRuleList() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleList(const FlightSearchListResponseBodyModuleFlightListFlightRuleList &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleList(FlightSearchListResponseBodyModuleFlightListFlightRuleList &&) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListFlightRuleList() = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleList& operator=(const FlightSearchListResponseBodyModuleFlightListFlightRuleList &) = default ;
    FlightSearchListResponseBodyModuleFlightListFlightRuleList& operator=(FlightSearchListResponseBodyModuleFlightListFlightRuleList &&) = default ;
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
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setBaggageInfo(string baggageInfo) { DARABONBA_PTR_SET_VALUE(baggageInfo_, baggageInfo) };


    // baggageItem Field Functions 
    bool hasBaggageItem() const { return this->baggageItem_ != nullptr;};
    void deleteBaggageItem() { this->baggageItem_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem & baggageItem() const { DARABONBA_PTR_GET_CONST(baggageItem_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem baggageItem() { DARABONBA_PTR_GET(baggageItem_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setBaggageItem(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem & baggageItem) { DARABONBA_PTR_SET_VALUE(baggageItem_, baggageItem) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setBaggageItem(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem && baggageItem) { DARABONBA_PTR_SET_RVALUE(baggageItem_, baggageItem) };


    // changeRule Field Functions 
    bool hasChangeRule() const { return this->changeRule_ != nullptr;};
    void deleteChangeRule() { this->changeRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRule & changeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRule changeRule() { DARABONBA_PTR_GET(changeRule_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRule) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setChangeRule(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRule & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setChangeRule(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRule && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


    // changeRuleItem Field Functions 
    bool hasChangeRuleItem() const { return this->changeRuleItem_ != nullptr;};
    void deleteChangeRuleItem() { this->changeRuleItem_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRuleItem & changeRuleItem() const { DARABONBA_PTR_GET_CONST(changeRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRuleItem) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRuleItem changeRuleItem() { DARABONBA_PTR_GET(changeRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setChangeRuleItem(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRuleItem & changeRuleItem) { DARABONBA_PTR_SET_VALUE(changeRuleItem_, changeRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setChangeRuleItem(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRuleItem && changeRuleItem) { DARABONBA_PTR_SET_RVALUE(changeRuleItem_, changeRuleItem) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // refundRule Field Functions 
    bool hasRefundRule() const { return this->refundRule_ != nullptr;};
    void deleteRefundRule() { this->refundRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRule & refundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRule refundRule() { DARABONBA_PTR_GET(refundRule_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRule) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setRefundRule(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setRefundRule(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


    // refundRuleItem Field Functions 
    bool hasRefundRuleItem() const { return this->refundRuleItem_ != nullptr;};
    void deleteRefundRuleItem() { this->refundRuleItem_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem & refundRuleItem() const { DARABONBA_PTR_GET_CONST(refundRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem refundRuleItem() { DARABONBA_PTR_GET(refundRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setRefundRuleItem(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem & refundRuleItem) { DARABONBA_PTR_SET_VALUE(refundRuleItem_, refundRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setRefundRuleItem(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem && refundRuleItem) { DARABONBA_PTR_SET_RVALUE(refundRuleItem_, refundRuleItem) };


    // signRule Field Functions 
    bool hasSignRule() const { return this->signRule_ != nullptr;};
    void deleteSignRule() { this->signRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListSignRule & signRule() const { DARABONBA_PTR_GET_CONST(signRule_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListSignRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListSignRule signRule() { DARABONBA_PTR_GET(signRule_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListSignRule) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setSignRule(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListSignRule & signRule) { DARABONBA_PTR_SET_VALUE(signRule_, signRule) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setSignRule(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListSignRule && signRule) { DARABONBA_PTR_SET_RVALUE(signRule_, signRule) };


    // tuigaiqianInfo Field Functions 
    bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
    void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
    inline string tuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


    // upgradeRule Field Functions 
    bool hasUpgradeRule() const { return this->upgradeRule_ != nullptr;};
    void deleteUpgradeRule() { this->upgradeRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule & upgradeRule() const { DARABONBA_PTR_GET_CONST(upgradeRule_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule upgradeRule() { DARABONBA_PTR_GET(upgradeRule_, Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setUpgradeRule(const Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule & upgradeRule) { DARABONBA_PTR_SET_VALUE(upgradeRule_, upgradeRule) };
    inline FlightSearchListResponseBodyModuleFlightListFlightRuleList& setUpgradeRule(Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule && upgradeRule) { DARABONBA_PTR_SET_RVALUE(upgradeRule_, upgradeRule) };


  protected:
    std::shared_ptr<string> baggageInfo_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListBaggageItem> baggageItem_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRule> changeRule_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListChangeRuleItem> changeRuleItem_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRule> refundRule_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListRefundRuleItem> refundRuleItem_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListSignRule> signRule_ = nullptr;
    std::shared_ptr<string> tuigaiqianInfo_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListFlightRuleListUpgradeRule> upgradeRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
