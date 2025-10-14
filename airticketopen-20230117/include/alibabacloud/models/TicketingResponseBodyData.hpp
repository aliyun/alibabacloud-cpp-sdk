// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETINGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TICKETINGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketingResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketingResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
    };
    friend void from_json(const Darabonba::Json& j, TicketingResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
    };
    TicketingResponseBodyData() = default ;
    TicketingResponseBodyData(const TicketingResponseBodyData &) = default ;
    TicketingResponseBodyData(TicketingResponseBodyData &&) = default ;
    TicketingResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketingResponseBodyData() = default ;
    TicketingResponseBodyData& operator=(const TicketingResponseBodyData &) = default ;
    TicketingResponseBodyData& operator=(TicketingResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr
        && return this->payTime_ == nullptr && return this->transactionNo_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline TicketingResponseBodyData& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline int64_t payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
    inline TicketingResponseBodyData& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // transactionNo Field Functions 
    bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
    void deleteTransactionNo() { this->transactionNo_ = nullptr;};
    inline string transactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
    inline TicketingResponseBodyData& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


  protected:
    // order number
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    std::shared_ptr<int64_t> payTime_ = nullptr;
    // transaction serial number
    std::shared_ptr<string> transactionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
