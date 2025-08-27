// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTTRANSFERINFOTRANSFERFLIGHTRULELIST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTSEARCHLISTRESPONSEBODYMODULEFLIGHTLISTTRANSFERINFOTRANSFERFLIGHTRULELIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItem.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRule.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItem.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRule.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRuleItem.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListSignRule.hpp>
#include <alibabacloud/models/FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListUpgradeRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& obj) { 
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
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList() = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList(const FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList &) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList(FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList &&) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList() = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& operator=(const FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList &) = default ;
    FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& operator=(FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList &&) = default ;
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
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setBaggageInfo(string baggageInfo) { DARABONBA_PTR_SET_VALUE(baggageInfo_, baggageInfo) };


    // baggageItem Field Functions 
    bool hasBaggageItem() const { return this->baggageItem_ != nullptr;};
    void deleteBaggageItem() { this->baggageItem_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItem & baggageItem() const { DARABONBA_PTR_GET_CONST(baggageItem_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItem) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItem baggageItem() { DARABONBA_PTR_GET(baggageItem_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItem) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setBaggageItem(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItem & baggageItem) { DARABONBA_PTR_SET_VALUE(baggageItem_, baggageItem) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setBaggageItem(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItem && baggageItem) { DARABONBA_PTR_SET_RVALUE(baggageItem_, baggageItem) };


    // changeRule Field Functions 
    bool hasChangeRule() const { return this->changeRule_ != nullptr;};
    void deleteChangeRule() { this->changeRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRule & changeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRule changeRule() { DARABONBA_PTR_GET(changeRule_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRule) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setChangeRule(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRule & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setChangeRule(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRule && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


    // changeRuleItem Field Functions 
    bool hasChangeRuleItem() const { return this->changeRuleItem_ != nullptr;};
    void deleteChangeRuleItem() { this->changeRuleItem_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItem & changeRuleItem() const { DARABONBA_PTR_GET_CONST(changeRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItem) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItem changeRuleItem() { DARABONBA_PTR_GET(changeRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setChangeRuleItem(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItem & changeRuleItem) { DARABONBA_PTR_SET_VALUE(changeRuleItem_, changeRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setChangeRuleItem(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItem && changeRuleItem) { DARABONBA_PTR_SET_RVALUE(changeRuleItem_, changeRuleItem) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // refundRule Field Functions 
    bool hasRefundRule() const { return this->refundRule_ != nullptr;};
    void deleteRefundRule() { this->refundRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRule & refundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRule refundRule() { DARABONBA_PTR_GET(refundRule_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRule) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setRefundRule(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRule & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setRefundRule(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRule && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


    // refundRuleItem Field Functions 
    bool hasRefundRuleItem() const { return this->refundRuleItem_ != nullptr;};
    void deleteRefundRuleItem() { this->refundRuleItem_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRuleItem & refundRuleItem() const { DARABONBA_PTR_GET_CONST(refundRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRuleItem) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRuleItem refundRuleItem() { DARABONBA_PTR_GET(refundRuleItem_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setRefundRuleItem(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRuleItem & refundRuleItem) { DARABONBA_PTR_SET_VALUE(refundRuleItem_, refundRuleItem) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setRefundRuleItem(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRuleItem && refundRuleItem) { DARABONBA_PTR_SET_RVALUE(refundRuleItem_, refundRuleItem) };


    // signRule Field Functions 
    bool hasSignRule() const { return this->signRule_ != nullptr;};
    void deleteSignRule() { this->signRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListSignRule & signRule() const { DARABONBA_PTR_GET_CONST(signRule_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListSignRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListSignRule signRule() { DARABONBA_PTR_GET(signRule_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListSignRule) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setSignRule(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListSignRule & signRule) { DARABONBA_PTR_SET_VALUE(signRule_, signRule) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setSignRule(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListSignRule && signRule) { DARABONBA_PTR_SET_RVALUE(signRule_, signRule) };


    // tuigaiqianInfo Field Functions 
    bool hasTuigaiqianInfo() const { return this->tuigaiqianInfo_ != nullptr;};
    void deleteTuigaiqianInfo() { this->tuigaiqianInfo_ = nullptr;};
    inline string tuigaiqianInfo() const { DARABONBA_PTR_GET_DEFAULT(tuigaiqianInfo_, "") };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setTuigaiqianInfo(string tuigaiqianInfo) { DARABONBA_PTR_SET_VALUE(tuigaiqianInfo_, tuigaiqianInfo) };


    // upgradeRule Field Functions 
    bool hasUpgradeRule() const { return this->upgradeRule_ != nullptr;};
    void deleteUpgradeRule() { this->upgradeRule_ = nullptr;};
    inline const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListUpgradeRule & upgradeRule() const { DARABONBA_PTR_GET_CONST(upgradeRule_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListUpgradeRule) };
    inline Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListUpgradeRule upgradeRule() { DARABONBA_PTR_GET(upgradeRule_, Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListUpgradeRule) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setUpgradeRule(const Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListUpgradeRule & upgradeRule) { DARABONBA_PTR_SET_VALUE(upgradeRule_, upgradeRule) };
    inline FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleList& setUpgradeRule(Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListUpgradeRule && upgradeRule) { DARABONBA_PTR_SET_RVALUE(upgradeRule_, upgradeRule) };


  protected:
    std::shared_ptr<string> baggageInfo_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListBaggageItem> baggageItem_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRule> changeRule_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListChangeRuleItem> changeRuleItem_ = nullptr;
    std::shared_ptr<string> extra_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRule> refundRule_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListRefundRuleItem> refundRuleItem_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListSignRule> signRule_ = nullptr;
    std::shared_ptr<string> tuigaiqianInfo_ = nullptr;
    std::shared_ptr<Models::FlightSearchListResponseBodyModuleFlightListTransferInfoTransferFlightRuleListUpgradeRule> upgradeRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
