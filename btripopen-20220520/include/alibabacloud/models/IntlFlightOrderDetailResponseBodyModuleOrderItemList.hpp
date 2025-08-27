// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEORDERITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTORDERDETAILRESPONSEBODYMODULEORDERITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule.hpp>
#include <vector>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleOrderItemListPassengerPriceList.hpp>
#include <alibabacloud/models/IntlFlightOrderDetailResponseBodyModuleOrderItemListRefundChangeRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightOrderDetailResponseBodyModuleOrderItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightOrderDetailResponseBodyModuleOrderItemList& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_TO_JSON(passenger_price_list, passengerPriceList_);
      DARABONBA_PTR_TO_JSON(refund_change_rule, refundChangeRule_);
      DARABONBA_PTR_TO_JSON(segment_key_list, segmentKeyList_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightOrderDetailResponseBodyModuleOrderItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_FROM_JSON(passenger_price_list, passengerPriceList_);
      DARABONBA_PTR_FROM_JSON(refund_change_rule, refundChangeRule_);
      DARABONBA_PTR_FROM_JSON(segment_key_list, segmentKeyList_);
    };
    IntlFlightOrderDetailResponseBodyModuleOrderItemList() = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemList(const IntlFlightOrderDetailResponseBodyModuleOrderItemList &) = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemList(IntlFlightOrderDetailResponseBodyModuleOrderItemList &&) = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightOrderDetailResponseBodyModuleOrderItemList() = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemList& operator=(const IntlFlightOrderDetailResponseBodyModuleOrderItemList &) = default ;
    IntlFlightOrderDetailResponseBodyModuleOrderItemList& operator=(IntlFlightOrderDetailResponseBodyModuleOrderItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageRule_ != nullptr
        && this->passengerPriceList_ != nullptr && this->refundChangeRule_ != nullptr && this->segmentKeyList_ != nullptr; };
    // baggageRule Field Functions 
    bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
    void deleteBaggageRule() { this->baggageRule_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule & baggageRule() const { DARABONBA_PTR_GET_CONST(baggageRule_, Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule) };
    inline Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule baggageRule() { DARABONBA_PTR_GET(baggageRule_, Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemList& setBaggageRule(const Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule & baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemList& setBaggageRule(Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule && baggageRule) { DARABONBA_PTR_SET_RVALUE(baggageRule_, baggageRule) };


    // passengerPriceList Field Functions 
    bool hasPassengerPriceList() const { return this->passengerPriceList_ != nullptr;};
    void deletePassengerPriceList() { this->passengerPriceList_ = nullptr;};
    inline const vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListPassengerPriceList> & passengerPriceList() const { DARABONBA_PTR_GET_CONST(passengerPriceList_, vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListPassengerPriceList>) };
    inline vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListPassengerPriceList> passengerPriceList() { DARABONBA_PTR_GET(passengerPriceList_, vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListPassengerPriceList>) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemList& setPassengerPriceList(const vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListPassengerPriceList> & passengerPriceList) { DARABONBA_PTR_SET_VALUE(passengerPriceList_, passengerPriceList) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemList& setPassengerPriceList(vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListPassengerPriceList> && passengerPriceList) { DARABONBA_PTR_SET_RVALUE(passengerPriceList_, passengerPriceList) };


    // refundChangeRule Field Functions 
    bool hasRefundChangeRule() const { return this->refundChangeRule_ != nullptr;};
    void deleteRefundChangeRule() { this->refundChangeRule_ = nullptr;};
    inline const Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListRefundChangeRule & refundChangeRule() const { DARABONBA_PTR_GET_CONST(refundChangeRule_, Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListRefundChangeRule) };
    inline Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListRefundChangeRule refundChangeRule() { DARABONBA_PTR_GET(refundChangeRule_, Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListRefundChangeRule) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemList& setRefundChangeRule(const Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListRefundChangeRule & refundChangeRule) { DARABONBA_PTR_SET_VALUE(refundChangeRule_, refundChangeRule) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemList& setRefundChangeRule(Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListRefundChangeRule && refundChangeRule) { DARABONBA_PTR_SET_RVALUE(refundChangeRule_, refundChangeRule) };


    // segmentKeyList Field Functions 
    bool hasSegmentKeyList() const { return this->segmentKeyList_ != nullptr;};
    void deleteSegmentKeyList() { this->segmentKeyList_ = nullptr;};
    inline const vector<string> & segmentKeyList() const { DARABONBA_PTR_GET_CONST(segmentKeyList_, vector<string>) };
    inline vector<string> segmentKeyList() { DARABONBA_PTR_GET(segmentKeyList_, vector<string>) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemList& setSegmentKeyList(const vector<string> & segmentKeyList) { DARABONBA_PTR_SET_VALUE(segmentKeyList_, segmentKeyList) };
    inline IntlFlightOrderDetailResponseBodyModuleOrderItemList& setSegmentKeyList(vector<string> && segmentKeyList) { DARABONBA_PTR_SET_RVALUE(segmentKeyList_, segmentKeyList) };


  protected:
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListBaggageRule> baggageRule_ = nullptr;
    std::shared_ptr<vector<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListPassengerPriceList>> passengerPriceList_ = nullptr;
    std::shared_ptr<Models::IntlFlightOrderDetailResponseBodyModuleOrderItemListRefundChangeRule> refundChangeRule_ = nullptr;
    std::shared_ptr<vector<string>> segmentKeyList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
