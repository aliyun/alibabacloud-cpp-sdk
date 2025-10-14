// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_ORDERLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OrderListResponseBodyDataListPassengerList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(book_time, bookTime_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_TO_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_TO_JSON(real_pay_price, realPayPrice_);
      DARABONBA_PTR_TO_JSON(session_nick, sessionNick_);
      DARABONBA_PTR_TO_JSON(succeed_time, succeedTime_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
      DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
    };
    friend void from_json(const Darabonba::Json& j, OrderListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(book_time, bookTime_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(out_order_num, outOrderNum_);
      DARABONBA_PTR_FROM_JSON(passenger_list, passengerList_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(promotion_price, promotionPrice_);
      DARABONBA_PTR_FROM_JSON(real_pay_price, realPayPrice_);
      DARABONBA_PTR_FROM_JSON(session_nick, sessionNick_);
      DARABONBA_PTR_FROM_JSON(succeed_time, succeedTime_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
      DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
    };
    OrderListResponseBodyDataList() = default ;
    OrderListResponseBodyDataList(const OrderListResponseBodyDataList &) = default ;
    OrderListResponseBodyDataList(OrderListResponseBodyDataList &&) = default ;
    OrderListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderListResponseBodyDataList() = default ;
    OrderListResponseBodyDataList& operator=(const OrderListResponseBodyDataList &) = default ;
    OrderListResponseBodyDataList& operator=(OrderListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bookTime_ == nullptr
        && return this->orderNum_ == nullptr && return this->orderStatus_ == nullptr && return this->outOrderNum_ == nullptr && return this->passengerList_ == nullptr && return this->payStatus_ == nullptr
        && return this->payTime_ == nullptr && return this->promotionPrice_ == nullptr && return this->realPayPrice_ == nullptr && return this->sessionNick_ == nullptr && return this->succeedTime_ == nullptr
        && return this->totalPrice_ == nullptr && return this->transactionNo_ == nullptr; };
    // bookTime Field Functions 
    bool hasBookTime() const { return this->bookTime_ != nullptr;};
    void deleteBookTime() { this->bookTime_ = nullptr;};
    inline int64_t bookTime() const { DARABONBA_PTR_GET_DEFAULT(bookTime_, 0L) };
    inline OrderListResponseBodyDataList& setBookTime(int64_t bookTime) { DARABONBA_PTR_SET_VALUE(bookTime_, bookTime) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline OrderListResponseBodyDataList& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline string orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, "") };
    inline OrderListResponseBodyDataList& setOrderStatus(string orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // outOrderNum Field Functions 
    bool hasOutOrderNum() const { return this->outOrderNum_ != nullptr;};
    void deleteOutOrderNum() { this->outOrderNum_ = nullptr;};
    inline string outOrderNum() const { DARABONBA_PTR_GET_DEFAULT(outOrderNum_, "") };
    inline OrderListResponseBodyDataList& setOutOrderNum(string outOrderNum) { DARABONBA_PTR_SET_VALUE(outOrderNum_, outOrderNum) };


    // passengerList Field Functions 
    bool hasPassengerList() const { return this->passengerList_ != nullptr;};
    void deletePassengerList() { this->passengerList_ = nullptr;};
    inline const vector<Models::OrderListResponseBodyDataListPassengerList> & passengerList() const { DARABONBA_PTR_GET_CONST(passengerList_, vector<Models::OrderListResponseBodyDataListPassengerList>) };
    inline vector<Models::OrderListResponseBodyDataListPassengerList> passengerList() { DARABONBA_PTR_GET(passengerList_, vector<Models::OrderListResponseBodyDataListPassengerList>) };
    inline OrderListResponseBodyDataList& setPassengerList(const vector<Models::OrderListResponseBodyDataListPassengerList> & passengerList) { DARABONBA_PTR_SET_VALUE(passengerList_, passengerList) };
    inline OrderListResponseBodyDataList& setPassengerList(vector<Models::OrderListResponseBodyDataListPassengerList> && passengerList) { DARABONBA_PTR_SET_RVALUE(passengerList_, passengerList) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline string payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, "") };
    inline OrderListResponseBodyDataList& setPayStatus(string payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline int64_t payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
    inline OrderListResponseBodyDataList& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // promotionPrice Field Functions 
    bool hasPromotionPrice() const { return this->promotionPrice_ != nullptr;};
    void deletePromotionPrice() { this->promotionPrice_ = nullptr;};
    inline double promotionPrice() const { DARABONBA_PTR_GET_DEFAULT(promotionPrice_, 0.0) };
    inline OrderListResponseBodyDataList& setPromotionPrice(double promotionPrice) { DARABONBA_PTR_SET_VALUE(promotionPrice_, promotionPrice) };


    // realPayPrice Field Functions 
    bool hasRealPayPrice() const { return this->realPayPrice_ != nullptr;};
    void deleteRealPayPrice() { this->realPayPrice_ = nullptr;};
    inline double realPayPrice() const { DARABONBA_PTR_GET_DEFAULT(realPayPrice_, 0.0) };
    inline OrderListResponseBodyDataList& setRealPayPrice(double realPayPrice) { DARABONBA_PTR_SET_VALUE(realPayPrice_, realPayPrice) };


    // sessionNick Field Functions 
    bool hasSessionNick() const { return this->sessionNick_ != nullptr;};
    void deleteSessionNick() { this->sessionNick_ = nullptr;};
    inline string sessionNick() const { DARABONBA_PTR_GET_DEFAULT(sessionNick_, "") };
    inline OrderListResponseBodyDataList& setSessionNick(string sessionNick) { DARABONBA_PTR_SET_VALUE(sessionNick_, sessionNick) };


    // succeedTime Field Functions 
    bool hasSucceedTime() const { return this->succeedTime_ != nullptr;};
    void deleteSucceedTime() { this->succeedTime_ = nullptr;};
    inline int64_t succeedTime() const { DARABONBA_PTR_GET_DEFAULT(succeedTime_, 0L) };
    inline OrderListResponseBodyDataList& setSucceedTime(int64_t succeedTime) { DARABONBA_PTR_SET_VALUE(succeedTime_, succeedTime) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline double totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0.0) };
    inline OrderListResponseBodyDataList& setTotalPrice(double totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


    // transactionNo Field Functions 
    bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
    void deleteTransactionNo() { this->transactionNo_ = nullptr;};
    inline string transactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
    inline OrderListResponseBodyDataList& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


  protected:
    // book time(timestamp)
    std::shared_ptr<int64_t> bookTime_ = nullptr;
    // order number created by book
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    // order status
    // 
    // 1: order reservation in process
    // 
    // 2: order reservation successful
    // 
    // 3: order paid
    // 
    // 4: order successful
    // 
    // 5: order closed
    std::shared_ptr<string> orderStatus_ = nullptr;
    // external order number(customized by buyer when book)
    std::shared_ptr<string> outOrderNum_ = nullptr;
    // the information about all passenger of current order
    std::shared_ptr<vector<Models::OrderListResponseBodyDataListPassengerList>> passengerList_ = nullptr;
    // payment status
    // 
    // 1: payment in process
    // 
    // 2: deduction successful
    // 
    // 3: paid to the seller
    // 
    // 4: transaction closed
    std::shared_ptr<string> payStatus_ = nullptr;
    // pay time(timestamp)
    std::shared_ptr<int64_t> payTime_ = nullptr;
    // discount amount
    std::shared_ptr<double> promotionPrice_ = nullptr;
    // actual payment amount
    std::shared_ptr<double> realPayPrice_ = nullptr;
    // buyer nickname
    std::shared_ptr<string> sessionNick_ = nullptr;
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
