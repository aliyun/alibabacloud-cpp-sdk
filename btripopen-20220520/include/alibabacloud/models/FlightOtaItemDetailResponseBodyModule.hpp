// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTOTAITEMDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/FlightOtaItemDetailResponseBodyModuleBaggageRule.hpp>
#include <alibabacloud/models/FlightOtaItemDetailResponseBodyModuleChangeRule.hpp>
#include <alibabacloud/models/FlightOtaItemDetailResponseBodyModuleRefundRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightOtaItemDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightOtaItemDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_TO_JSON(change_rule, changeRule_);
      DARABONBA_PTR_TO_JSON(refund_rule, refundRule_);
      DARABONBA_PTR_TO_JSON(sell_price, sellPrice_);
      DARABONBA_PTR_TO_JSON(sell_price_list, sellPriceList_);
      DARABONBA_PTR_TO_JSON(trip_type, tripType_);
    };
    friend void from_json(const Darabonba::Json& j, FlightOtaItemDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_rule, baggageRule_);
      DARABONBA_PTR_FROM_JSON(change_rule, changeRule_);
      DARABONBA_PTR_FROM_JSON(refund_rule, refundRule_);
      DARABONBA_PTR_FROM_JSON(sell_price, sellPrice_);
      DARABONBA_PTR_FROM_JSON(sell_price_list, sellPriceList_);
      DARABONBA_PTR_FROM_JSON(trip_type, tripType_);
    };
    FlightOtaItemDetailResponseBodyModule() = default ;
    FlightOtaItemDetailResponseBodyModule(const FlightOtaItemDetailResponseBodyModule &) = default ;
    FlightOtaItemDetailResponseBodyModule(FlightOtaItemDetailResponseBodyModule &&) = default ;
    FlightOtaItemDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightOtaItemDetailResponseBodyModule() = default ;
    FlightOtaItemDetailResponseBodyModule& operator=(const FlightOtaItemDetailResponseBodyModule &) = default ;
    FlightOtaItemDetailResponseBodyModule& operator=(FlightOtaItemDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageRule_ != nullptr
        && this->changeRule_ != nullptr && this->refundRule_ != nullptr && this->sellPrice_ != nullptr && this->sellPriceList_ != nullptr && this->tripType_ != nullptr; };
    // baggageRule Field Functions 
    bool hasBaggageRule() const { return this->baggageRule_ != nullptr;};
    void deleteBaggageRule() { this->baggageRule_ = nullptr;};
    inline const vector<Models::FlightOtaItemDetailResponseBodyModuleBaggageRule> & baggageRule() const { DARABONBA_PTR_GET_CONST(baggageRule_, vector<Models::FlightOtaItemDetailResponseBodyModuleBaggageRule>) };
    inline vector<Models::FlightOtaItemDetailResponseBodyModuleBaggageRule> baggageRule() { DARABONBA_PTR_GET(baggageRule_, vector<Models::FlightOtaItemDetailResponseBodyModuleBaggageRule>) };
    inline FlightOtaItemDetailResponseBodyModule& setBaggageRule(const vector<Models::FlightOtaItemDetailResponseBodyModuleBaggageRule> & baggageRule) { DARABONBA_PTR_SET_VALUE(baggageRule_, baggageRule) };
    inline FlightOtaItemDetailResponseBodyModule& setBaggageRule(vector<Models::FlightOtaItemDetailResponseBodyModuleBaggageRule> && baggageRule) { DARABONBA_PTR_SET_RVALUE(baggageRule_, baggageRule) };


    // changeRule Field Functions 
    bool hasChangeRule() const { return this->changeRule_ != nullptr;};
    void deleteChangeRule() { this->changeRule_ = nullptr;};
    inline const vector<Models::FlightOtaItemDetailResponseBodyModuleChangeRule> & changeRule() const { DARABONBA_PTR_GET_CONST(changeRule_, vector<Models::FlightOtaItemDetailResponseBodyModuleChangeRule>) };
    inline vector<Models::FlightOtaItemDetailResponseBodyModuleChangeRule> changeRule() { DARABONBA_PTR_GET(changeRule_, vector<Models::FlightOtaItemDetailResponseBodyModuleChangeRule>) };
    inline FlightOtaItemDetailResponseBodyModule& setChangeRule(const vector<Models::FlightOtaItemDetailResponseBodyModuleChangeRule> & changeRule) { DARABONBA_PTR_SET_VALUE(changeRule_, changeRule) };
    inline FlightOtaItemDetailResponseBodyModule& setChangeRule(vector<Models::FlightOtaItemDetailResponseBodyModuleChangeRule> && changeRule) { DARABONBA_PTR_SET_RVALUE(changeRule_, changeRule) };


    // refundRule Field Functions 
    bool hasRefundRule() const { return this->refundRule_ != nullptr;};
    void deleteRefundRule() { this->refundRule_ = nullptr;};
    inline const vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRule> & refundRule() const { DARABONBA_PTR_GET_CONST(refundRule_, vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRule>) };
    inline vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRule> refundRule() { DARABONBA_PTR_GET(refundRule_, vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRule>) };
    inline FlightOtaItemDetailResponseBodyModule& setRefundRule(const vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRule> & refundRule) { DARABONBA_PTR_SET_VALUE(refundRule_, refundRule) };
    inline FlightOtaItemDetailResponseBodyModule& setRefundRule(vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRule> && refundRule) { DARABONBA_PTR_SET_RVALUE(refundRule_, refundRule) };


    // sellPrice Field Functions 
    bool hasSellPrice() const { return this->sellPrice_ != nullptr;};
    void deleteSellPrice() { this->sellPrice_ = nullptr;};
    inline int32_t sellPrice() const { DARABONBA_PTR_GET_DEFAULT(sellPrice_, 0) };
    inline FlightOtaItemDetailResponseBodyModule& setSellPrice(int32_t sellPrice) { DARABONBA_PTR_SET_VALUE(sellPrice_, sellPrice) };


    // sellPriceList Field Functions 
    bool hasSellPriceList() const { return this->sellPriceList_ != nullptr;};
    void deleteSellPriceList() { this->sellPriceList_ = nullptr;};
    inline const vector<int32_t> & sellPriceList() const { DARABONBA_PTR_GET_CONST(sellPriceList_, vector<int32_t>) };
    inline vector<int32_t> sellPriceList() { DARABONBA_PTR_GET(sellPriceList_, vector<int32_t>) };
    inline FlightOtaItemDetailResponseBodyModule& setSellPriceList(const vector<int32_t> & sellPriceList) { DARABONBA_PTR_SET_VALUE(sellPriceList_, sellPriceList) };
    inline FlightOtaItemDetailResponseBodyModule& setSellPriceList(vector<int32_t> && sellPriceList) { DARABONBA_PTR_SET_RVALUE(sellPriceList_, sellPriceList) };


    // tripType Field Functions 
    bool hasTripType() const { return this->tripType_ != nullptr;};
    void deleteTripType() { this->tripType_ = nullptr;};
    inline int32_t tripType() const { DARABONBA_PTR_GET_DEFAULT(tripType_, 0) };
    inline FlightOtaItemDetailResponseBodyModule& setTripType(int32_t tripType) { DARABONBA_PTR_SET_VALUE(tripType_, tripType) };


  protected:
    std::shared_ptr<vector<Models::FlightOtaItemDetailResponseBodyModuleBaggageRule>> baggageRule_ = nullptr;
    std::shared_ptr<vector<Models::FlightOtaItemDetailResponseBodyModuleChangeRule>> changeRule_ = nullptr;
    std::shared_ptr<vector<Models::FlightOtaItemDetailResponseBodyModuleRefundRule>> refundRule_ = nullptr;
    std::shared_ptr<int32_t> sellPrice_ = nullptr;
    std::shared_ptr<vector<int32_t>> sellPriceList_ = nullptr;
    std::shared_ptr<int32_t> tripType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
