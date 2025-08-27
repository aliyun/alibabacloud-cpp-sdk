// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTCABININFOLISTFLIGHTRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& obj) { 
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
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList() = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList(const FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList &) = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList(FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList &&) = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList() = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& operator=(const FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList &) = default ;
    FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& operator=(FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList &&) = default ;
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
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setBaggageInfo(string baggageInfo) { DARABONBA_PTR_SET_VALUE(baggageInfo_, baggageInfo) };


    // baggageItem Field Functions 
    bool hasBaggageItem() const { return this->baggageItem_ != nullptr;};
    void deleteBaggageItem() { this->baggageItem_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem & baggageItem() const { DARABONBA_PTR_GET_CONST(baggageItem_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem) };
    inline Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem baggageItem() { DARABONBA_PTR_GET(baggageItem_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setBaggageItem(const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem & baggageItem) { DARABONBA_PTR_SET_VALUE(baggageItem_, baggageItem) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setBaggageItem(Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem && baggageItem) { DARABONBA_PTR_SET_RVALUE(baggageItem_, baggageItem) };


    // changeRule Field Functions 
    bool hasChangeRule() const { return this->changeRule_ != nullptr;};
    void deleteChangeRule() { this->changeRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule & changeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule changeRule() { DARABONBA_PTR_GET(changeRule_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setChangeRule(const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setChangeRule(Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


    // changeRuleItem Field Functions 
    bool hasChangeRuleItem() const { return this->changeRuleItem_ != nullptr;};
    void deleteChangeRuleItem() { this->changeRuleItem_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem & changeRuleItem() const { DARABONBA_PTR_GET_CONST(changeRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem) };
    inline Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem changeRuleItem() { DARABONBA_PTR_GET(changeRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setChangeRuleItem(const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem & changeRuleItem) { DARABONBA_PTR_SET_VALUE(changeRuleItem_, changeRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setChangeRuleItem(Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem && changeRuleItem) { DARABONBA_PTR_SET_RVALUE(changeRuleItem_, changeRuleItem) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // refundRule Field Functions 
    bool hasRefundRule() const { return this->refundRule_ != nullptr;};
    void deleteRefundRule() { this->refundRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule & refundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule refundRule() { DARABONBA_PTR_GET(refundRule_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setRefundRule(const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setRefundRule(Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


    // refundRuleItem Field Functions 
    bool hasRefundRuleItem() const { return this->refundRuleItem_ != nullptr;};
    void deleteRefundRuleItem() { this->refundRuleItem_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem & refundRuleItem() const { DARABONBA_PTR_GET_CONST(refundRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem) };
    inline Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem refundRuleItem() { DARABONBA_PTR_GET(refundRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setRefundRuleItem(const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem & refundRuleItem) { DARABONBA_PTR_SET_VALUE(refundRuleItem_, refundRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setRefundRuleItem(Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem && refundRuleItem) { DARABONBA_PTR_SET_RVALUE(refundRuleItem_, refundRuleItem) };


    // signRule Field Functions 
    bool hasSignRule() const { return this->signRule_ != nullptr;};
    void deleteSignRule() { this->signRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule & signRule() const { DARABONBA_PTR_GET_CONST(signRule_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule signRule() { DARABONBA_PTR_GET(signRule_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setSignRule(const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule & signRule) { DARABONBA_PTR_SET_VALUE(signRule_, signRule) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setSignRule(Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule && signRule) { DARABONBA_PTR_SET_RVALUE(signRule_, signRule) };


    // tuigaiqianInfo Field Functions 
    bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
    void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
    inline string tuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


    // upgradeRule Field Functions 
    bool hasUpgradeRule() const { return this->upgradeRule_ != nullptr;};
    void deleteUpgradeRule() { this->upgradeRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule & upgradeRule() const { DARABONBA_PTR_GET_CONST(upgradeRule_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule upgradeRule() { DARABONBA_PTR_GET(upgradeRule_, Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setUpgradeRule(const Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule & upgradeRule) { DARABONBA_PTR_SET_VALUE(upgradeRule_, upgradeRule) };
    inline FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleList& setUpgradeRule(Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule && upgradeRule) { DARABONBA_PTR_SET_RVALUE(upgradeRule_, upgradeRule) };


  protected:
    std::shared_ptr<string> baggageInfo_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListBaggageItem> baggageItem_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRule> changeRule_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListChangeRuleItem> changeRuleItem_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRule> refundRule_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListRefundRuleItem> refundRuleItem_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListSignRule> signRule_ = nullptr;
    std::shared_ptr<string> tuigaiqianInfo_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListCabinInfoListFlightRuleListUpgradeRule> upgradeRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
