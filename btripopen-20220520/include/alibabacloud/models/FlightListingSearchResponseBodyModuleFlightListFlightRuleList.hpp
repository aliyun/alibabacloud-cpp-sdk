// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTLISTINGSEARCHRESPONSEBODYMODULEFLIGHTLISTFLIGHTRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItem.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRule.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListSignRule.hpp>
#include <alibabacloud/models/FlightListingSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightListingSearchResponseBodyModuleFlightListFlightRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightListingSearchResponseBodyModuleFlightListFlightRuleList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, FlightListingSearchResponseBodyModuleFlightListFlightRuleList& obj) { 
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
    FlightListingSearchResponseBodyModuleFlightListFlightRuleList() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleList(const FlightListingSearchResponseBodyModuleFlightListFlightRuleList &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleList(FlightListingSearchResponseBodyModuleFlightListFlightRuleList &&) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightListingSearchResponseBodyModuleFlightListFlightRuleList() = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleList& operator=(const FlightListingSearchResponseBodyModuleFlightListFlightRuleList &) = default ;
    FlightListingSearchResponseBodyModuleFlightListFlightRuleList& operator=(FlightListingSearchResponseBodyModuleFlightListFlightRuleList &&) = default ;
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
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setBaggageInfo(string baggageInfo) { DARABONBA_PTR_SET_VALUE(baggageInfo_, baggageInfo) };


    // baggageItem Field Functions 
    bool hasBaggageItem() const { return this->baggageItem_ != nullptr;};
    void deleteBaggageItem() { this->baggageItem_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItem & baggageItem() const { DARABONBA_PTR_GET_CONST(baggageItem_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItem) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItem baggageItem() { DARABONBA_PTR_GET(baggageItem_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItem) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setBaggageItem(const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItem & baggageItem) { DARABONBA_PTR_SET_VALUE(baggageItem_, baggageItem) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setBaggageItem(Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItem && baggageItem) { DARABONBA_PTR_SET_RVALUE(baggageItem_, baggageItem) };


    // changeRule Field Functions 
    bool hasChangeRule() const { return this->changeRule_ != nullptr;};
    void deleteChangeRule() { this->changeRule_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRule & changeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRule) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRule changeRule() { DARABONBA_PTR_GET(changeRule_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRule) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setChangeRule(const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRule & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setChangeRule(Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRule && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


    // changeRuleItem Field Functions 
    bool hasChangeRuleItem() const { return this->changeRuleItem_ != nullptr;};
    void deleteChangeRuleItem() { this->changeRuleItem_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem & changeRuleItem() const { DARABONBA_PTR_GET_CONST(changeRuleItem_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem changeRuleItem() { DARABONBA_PTR_GET(changeRuleItem_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setChangeRuleItem(const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem & changeRuleItem) { DARABONBA_PTR_SET_VALUE(changeRuleItem_, changeRuleItem) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setChangeRuleItem(Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem && changeRuleItem) { DARABONBA_PTR_SET_RVALUE(changeRuleItem_, changeRuleItem) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // refundRule Field Functions 
    bool hasRefundRule() const { return this->refundRule_ != nullptr;};
    void deleteRefundRule() { this->refundRule_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule & refundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule refundRule() { DARABONBA_PTR_GET(refundRule_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setRefundRule(const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setRefundRule(Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


    // refundRuleItem Field Functions 
    bool hasRefundRuleItem() const { return this->refundRuleItem_ != nullptr;};
    void deleteRefundRuleItem() { this->refundRuleItem_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem & refundRuleItem() const { DARABONBA_PTR_GET_CONST(refundRuleItem_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem refundRuleItem() { DARABONBA_PTR_GET(refundRuleItem_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setRefundRuleItem(const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem & refundRuleItem) { DARABONBA_PTR_SET_VALUE(refundRuleItem_, refundRuleItem) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setRefundRuleItem(Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem && refundRuleItem) { DARABONBA_PTR_SET_RVALUE(refundRuleItem_, refundRuleItem) };


    // signRule Field Functions 
    bool hasSignRule() const { return this->signRule_ != nullptr;};
    void deleteSignRule() { this->signRule_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListSignRule & signRule() const { DARABONBA_PTR_GET_CONST(signRule_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListSignRule) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListSignRule signRule() { DARABONBA_PTR_GET(signRule_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListSignRule) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setSignRule(const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListSignRule & signRule) { DARABONBA_PTR_SET_VALUE(signRule_, signRule) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setSignRule(Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListSignRule && signRule) { DARABONBA_PTR_SET_RVALUE(signRule_, signRule) };


    // tuigaiqianInfo Field Functions 
    bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
    void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
    inline string tuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


    // upgradeRule Field Functions 
    bool hasUpgradeRule() const { return this->upgradeRule_ != nullptr;};
    void deleteUpgradeRule() { this->upgradeRule_ = nullptr;};
    inline const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule & upgradeRule() const { DARABONBA_PTR_GET_CONST(upgradeRule_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule) };
    inline Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule upgradeRule() { DARABONBA_PTR_GET(upgradeRule_, Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setUpgradeRule(const Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule & upgradeRule) { DARABONBA_PTR_SET_VALUE(upgradeRule_, upgradeRule) };
    inline FlightListingSearchResponseBodyModuleFlightListFlightRuleList& setUpgradeRule(Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule && upgradeRule) { DARABONBA_PTR_SET_RVALUE(upgradeRule_, upgradeRule) };


  protected:
    std::shared_ptr<string> baggageInfo_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListBaggageItem> baggageItem_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRule> changeRule_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListChangeRuleItem> changeRuleItem_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRule> refundRule_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListRefundRuleItem> refundRuleItem_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListSignRule> signRule_ = nullptr;
    std::shared_ptr<string> tuigaiqianInfo_ = nullptr;
    std::shared_ptr<Models::FlightListingSearchResponseBodyModuleFlightListFlightRuleListUpgradeRule> upgradeRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
