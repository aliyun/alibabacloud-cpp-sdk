// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OrderDetailResponseBodyDataAncillaryItemDetailList.hpp>
#include <map>
#include <alibabacloud/models/DataBaggageAllowanceMapValue.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataFlightItemDetailList.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataPassengerList.hpp>
#include <alibabacloud/models/DataRefundChangeRuleMapValue.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataSolution.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ancillary_item_detail_list, ancillaryItemDetailList_);
      DARABONBA_PTR_TO_JSON(baggage_allowance_map, baggageAllowanceMap_);
      DARABONBA_PTR_TO_JSON(book_time, bookTime_);
      DARABONBA_PTR_TO_JSON(flight_item_detail_list, flightItemDetailList_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_TO_JSON(real_pay_price, realPayPrice_);
      DARABONBA_PTR_TO_JSON(refund_change_rule_map, refundChangeRuleMap_);
      DARABONBA_PTR_TO_JSON(session_nick, sessionNick_);
      DARABONBA_PTR_TO_JSON(solution, solution_);
      DARABONBA_PTR_TO_JSON(succeed_time, succeedTime_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
    };
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ancillary_item_detail_list, ancillaryItemDetailList_);
      DARABONBA_PTR_FROM_JSON(baggage_allowance_map, baggageAllowanceMap_);
      DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
      DARABONBA_PTR_FROM_JSON(flight_item_detail_list, flightItemDetailList_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_FROM_JSON(real_pay_price, realPayPrice_);
      DARABONBA_PTR_FROM_JSON(refund_change_rule_map, refundChangeRuleMap_);
      DARABONBA_PTR_FROM_JSON(session_nick, sessionNick_);
      DARABONBA_PTR_FROM_JSON(solution, solution_);
      DARABONBA_PTR_FROM_JSON(succeed_time, succeedTime_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
      DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
    };
    OrderDetailResponseBodyData() = default ;
    OrderDetailResponseBodyData(const OrderDetailResponseBodyData &) = default ;
    OrderDetailResponseBodyData(OrderDetailResponseBodyData &&) = default ;
    OrderDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyData() = default ;
    OrderDetailResponseBodyData& operator=(const OrderDetailResponseBodyData &) = default ;
    OrderDetailResponseBodyData& operator=(OrderDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ancillaryItemDetailList_ == nullptr
        && return this->baggageAllowanceMap_ == nullptr && return this->bookTime_ == nullptr && return this->flightItemDetailList_ == nullptr && return this->orderNum_ == nullptr && return this->orderStatus_ == nullptr
        && return this->outOrderNum_ == nullptr && return this->passengerList_ == nullptr && return this->payStatus_ == nullptr && return this->payTime_ == nullptr && return this->promotionPrice_ == nullptr
        && return this->realPayPrice_ == nullptr && return this->refundChangeRuleMap_ == nullptr && return this->sessionNick_ == nullptr && return this->solution_ == nullptr && return this->succeedTime_ == nullptr
        && return this->totalPrice_ == nullptr && return this->transactionNo_ == nullptr; };
    // ancillaryItemDetailList Field Functions 
    bool hasAncillaryItemDetailList() const { return this->ancillaryItemDetailList_ != nullptr;};
    void deleteAncillaryItemDetailList() { this->ancillaryItemDetailList_ = nullptr;};
    inline const vector<Models::OrderDetailResponseBodyDataAncillaryItemDetailList> & ancillaryItemDetailList() const { DARABONBA_PTR_GET_CONST(ancillaryItemDetailList_, vector<Models::OrderDetailResponseBodyDataAncillaryItemDetailList>) };
    inline vector<Models::OrderDetailResponseBodyDataAncillaryItemDetailList> ancillaryItemDetailList() { DARABONBA_PTR_GET(ancillaryItemDetailList_, vector<Models::OrderDetailResponseBodyDataAncillaryItemDetailList>) };
    inline OrderDetailResponseBodyData& setAncillaryItemDetailList(const vector<Models::OrderDetailResponseBodyDataAncillaryItemDetailList> & ancillaryItemDetailList) { DARABONBA_PTR_SET_VALUE(ancillaryItemDetailList_, ancillaryItemDetailList) };
    inline OrderDetailResponseBodyData& setAncillaryItemDetailList(vector<Models::OrderDetailResponseBodyDataAncillaryItemDetailList> && ancillaryItemDetailList) { DARABONBA_PTR_SET_RVALUE(ancillaryItemDetailList_, ancillaryItemDetailList) };


    // baggageAllowanceMap Field Functions 
    bool hasBaggageAllowanceMap() const { return this->baggageAllowanceMap_ != nullptr;};
    void deleteBaggageAllowanceMap() { this->baggageAllowanceMap_ = nullptr;};
    inline const map<string, Models::DataBaggageAllowanceMapValue> & baggageAllowanceMap() const { DARABONBA_PTR_GET_CONST(baggageAllowanceMap_, map<string, Models::DataBaggageAllowanceMapValue>) };
    inline map<string, Models::DataBaggageAllowanceMapValue> baggageAllowanceMap() { DARABONBA_PTR_GET(baggageAllowanceMap_, map<string, Models::DataBaggageAllowanceMapValue>) };
    inline OrderDetailResponseBodyData& setBaggageAllowanceMap(const map<string, Models::DataBaggageAllowanceMapValue> & baggageAllowanceMap) { DARABONBA_PTR_SET_VALUE(baggageAllowanceMap_, baggageAllowanceMap) };
    inline OrderDetailResponseBodyData& setBaggageAllowanceMap(map<string, Models::DataBaggageAllowanceMapValue> && baggageAllowanceMap) { DARABONBA_PTR_SET_RVALUE(baggageAllowanceMap_, baggageAllowanceMap) };


    // bookTime Field Functions 
    bool hasBookTime() const { return this->bookTime_ != nullptr;};
    void deleteBookTime() { this->bookTime_ = nullptr;};
    inline int64_t bookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, 0L) };
    inline OrderDetailResponseBodyData& setBookTime(int64_t bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


    // flightItemDetailList Field Functions 
    bool hasFlightItemDetailList() const { return this->flightItemDetailList_ != nullptr;};
    void deleteFlightItemDetailList() { this->flightItemDetailList_ = nullptr;};
    inline const vector<Models::OrderDetailResponseBodyDataFlightItemDetailList> & flightItemDetailList() const { DARABONBA_PTR_GET_CONST(flightItemDetailList_, vector<Models::OrderDetailResponseBodyDataFlightItemDetailList>) };
    inline vector<Models::OrderDetailResponseBodyDataFlightItemDetailList> flightItemDetailList() { DARABONBA_PTR_GET(flightItemDetailList_, vector<Models::OrderDetailResponseBodyDataFlightItemDetailList>) };
    inline OrderDetailResponseBodyData& setFlightItemDetailList(const vector<Models::OrderDetailResponseBodyDataFlightItemDetailList> & flightItemDetailList) { DARABONBA_PTR_SET_VALUE(flightItemDetailList_, flightItemDetailList) };
    inline OrderDetailResponseBodyData& setFlightItemDetailList(vector<Models::OrderDetailResponseBodyDataFlightItemDetailList> && flightItemDetailList) { DARABONBA_PTR_SET_RVALUE(flightItemDetailList_, flightItemDetailList) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline OrderDetailResponseBodyData& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline OrderDetailResponseBodyData& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // outOrderNum Field Functions 
    bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
    void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
    inline string outOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
    inline OrderDetailResponseBodyData& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::OrderDetailResponseBodyDataPassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::OrderDetailResponseBodyDataPassengerList>) };
    inline vector<Models::OrderDetailResponseBodyDataPassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::OrderDetailResponseBodyDataPassengerList>) };
    inline OrderDetailResponseBodyData& setPassengerList(const vector<Models::OrderDetailResponseBodyDataPassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline OrderDetailResponseBodyData& setPassengerList(vector<Models::OrderDetailResponseBodyDataPassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline OrderDetailResponseBodyData& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline int64_t payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
    inline OrderDetailResponseBodyData& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // promotionPrice Field Functions 
    bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
    void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
    inline double promotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, 0.0) };
    inline OrderDetailResponseBodyData& setPromotionPrice(double promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


    // realPayPrice Field Functions 
    bool hasRealPayPrice() const { return this->realPayPrice_ != nullptr;};
    void deleteRealPayPrice() { this->realPayPrice_ = nullptr;};
    inline double realPayPrice() const { DARABONBA_PTR_GET_DEFAULT(realPayPrice_, 0.0) };
    inline OrderDetailResponseBodyData& setRealPayPrice(double realPayPrice) { DARABONBA_PTR_SET_VALUE(realPayPrice_, realPayPrice) };


    // refundChangeRuleMap Field Functions 
    bool hasRefundChangeRuleMap() const { return this->refundChangeRuleMap_ != nullptr;};
    void deleteRefundChangeRuleMap() { this->refundChangeRuleMap_ = nullptr;};
    inline const map<string, Models::DataRefundChangeRuleMapValue> & refundChangeRuleMap() const { DARABONBA_PTR_GET_CONST(refundChangeRuleMap_, map<string, Models::DataRefundChangeRuleMapValue>) };
    inline map<string, Models::DataRefundChangeRuleMapValue> refundChangeRuleMap() { DARABONBA_PTR_GET(refundChangeRuleMap_, map<string, Models::DataRefundChangeRuleMapValue>) };
    inline OrderDetailResponseBodyData& setRefundChangeRuleMap(const map<string, Models::DataRefundChangeRuleMapValue> & refundChangeRuleMap) { DARABONBA_PTR_SET_VALUE(refundChangeRuleMap_, refundChangeRuleMap) };
    inline OrderDetailResponseBodyData& setRefundChangeRuleMap(map<string, Models::DataRefundChangeRuleMapValue> && refundChangeRuleMap) { DARABONBA_PTR_SET_RVALUE(refundChangeRuleMap_, refundChangeRuleMap) };


    // sessionNick Field Functions 
    bool hasSessionNick() const { return this->sessionNick_ != nullptr;};
    void deleteSessionNick() { this->sessionNick_ = nullptr;};
    inline string sessionNick() const { DARABONBA_PTR_GET_DEFAULT(sessionNick_, "") };
    inline OrderDetailResponseBodyData& setSessionNick(string sessionNick) { DARABONBA_PTR_SET_VALUE(sessionNick_, sessionNick) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline const Models::OrderDetailResponseBodyDataSolution & solution() const { DARABONBA_PTR_GET_CONST(solution_, Models::OrderDetailResponseBodyDataSolution) };
    inline Models::OrderDetailResponseBodyDataSolution solution() { DARABONBA_PTR_GET(solution_, Models::OrderDetailResponseBodyDataSolution) };
    inline OrderDetailResponseBodyData& setSolution(const Models::OrderDetailResponseBodyDataSolution & solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };
    inline OrderDetailResponseBodyData& setSolution(Models::OrderDetailResponseBodyDataSolution && solution) { DARABONBA_PTR_SET_RVALUE(solution_, solution) };


    // succeedTime Field Functions 
    bool hasSucceedTime() const { return this->succeedTime_ != nullptr;};
    void deleteSucceedTime() { this->succeedTime_ = nullptr;};
    inline int64_t succeedTime() const { DARABONBA_PTR_GET_DEFAULT(succeedTime_, 0L) };
    inline OrderDetailResponseBodyData& setSucceedTime(int64_t succeedTime) { DARABONBA_PTR_SET_VALUE(succeedTime_, succeedTime) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline double totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
    inline OrderDetailResponseBodyData& setTotalPrice(double totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    // transactionNo Field Functions 
    bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
    void deleteTransactionNo() { this->transactionNo_ = nullptr;};
    inline string transactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
    inline OrderDetailResponseBodyData& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


  protected:
    // ancillary product fulfillment details
    std::shared_ptr<vector<Models::OrderDetailResponseBodyDataAncillaryItemDetailList>> ancillaryItemDetailList_ = nullptr;
    // baggage rule mapping, key is passenger type, value is baggage allowance details
    std::shared_ptr<map<string, Models::DataBaggageAllowanceMapValue>> baggageAllowanceMap_ = nullptr;
    // book time(timestamp)
    std::shared_ptr<int64_t> bookTime_ = nullptr;
    // flight product fulfillment details
    std::shared_ptr<vector<Models::OrderDetailResponseBodyDataFlightItemDetailList>> flightItemDetailList_ = nullptr;
    // order number created by book
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    // order status 
    // 
    // 1: order creation in process; 
    // 
    // 2: order creation successful; 
    // 
    // 3: order paid; 
    // 
    // 4: order successful; 
    // 
    // 5: order closed
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    // external order number(customized by buyer when book)
    std::shared_ptr<string> outOrderNum_ = nullptr;
    // the information about all passenger of current order
    std::shared_ptr<vector<Models::OrderDetailResponseBodyDataPassengerList>> passengerList_ = nullptr;
    // payment status 
    // 
    // 1: payment in process; 
    // 
    // 2: deduction successful; 
    // 
    // 3: paid to the seller; 
    // 
    // 4: transaction closed
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    // pay time(timestamp)
    std::shared_ptr<int64_t> payTime_ = nullptr;
    // discount amount
    std::shared_ptr<double> promotionPrice_ = nullptr;
    // actual payment amount
    std::shared_ptr<double> realPayPrice_ = nullptr;
    // change and refund policy mapping, key is passenger type, value is change and refund policy details
    std::shared_ptr<map<string, Models::DataRefundChangeRuleMapValue>> refundChangeRuleMap_ = nullptr;
    // buyer nickname
    std::shared_ptr<string> sessionNick_ = nullptr;
    // the solution buyer booked
    std::shared_ptr<Models::OrderDetailResponseBodyDataSolution> solution_ = nullptr;
    // order success time(timestamp)
    std::shared_ptr<int64_t> succeedTime_ = nullptr;
    // total price of current order
    std::shared_ptr<double> totalPrice_ = nullptr;
    // transaction number
    std::shared_ptr<string> transactionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
