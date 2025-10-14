// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFBUYERRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_CHANGEDETAILLISTOFBUYERRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeDetailListOfBuyerResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeDetailListOfBuyerResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(change_order_num, changeOrderNum_);
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
      DARABONBA_PTR_TO_JSON(order_status, orderStatus_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
      DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
      DARABONBA_PTR_TO_JSON(utc_create_time, utcCreateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeDetailListOfBuyerResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(change_order_num, changeOrderNum_);
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
      DARABONBA_PTR_FROM_JSON(order_status, orderStatus_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
      DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
      DARABONBA_PTR_FROM_JSON(utc_create_time, utcCreateTime_);
    };
    ChangeDetailListOfBuyerResponseBodyDataList() = default ;
    ChangeDetailListOfBuyerResponseBodyDataList(const ChangeDetailListOfBuyerResponseBodyDataList &) = default ;
    ChangeDetailListOfBuyerResponseBodyDataList(ChangeDetailListOfBuyerResponseBodyDataList &&) = default ;
    ChangeDetailListOfBuyerResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeDetailListOfBuyerResponseBodyDataList() = default ;
    ChangeDetailListOfBuyerResponseBodyDataList& operator=(const ChangeDetailListOfBuyerResponseBodyDataList &) = default ;
    ChangeDetailListOfBuyerResponseBodyDataList& operator=(ChangeDetailListOfBuyerResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->changeOrderNum_ == nullptr
        && return this->orderNum_ == nullptr && return this->orderStatus_ == nullptr && return this->payStatus_ == nullptr && return this->transactionNo_ == nullptr && return this->utcCreateTime_ == nullptr; };
    // changeOrderNum Field Functions 
    bool hasChangeOrderNum() const { return this->changeOrderNum_ != nullptr;};
    void deleteChangeOrderNum() { this->changeOrderNum_ = nullptr;};
    inline int64_t changeOrderNum() const { DARABONBA_PTR_GET_DEFAULT(changeOrderNum_, 0L) };
    inline ChangeDetailListOfBuyerResponseBodyDataList& setChangeOrderNum(int64_t changeOrderNum) { DARABONBA_PTR_SET_VALUE(changeOrderNum_, changeOrderNum) };


    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline ChangeDetailListOfBuyerResponseBodyDataList& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


    // orderStatus Field Functions 
    bool hasOrderStatus() const { return this->orderStatus_ != nullptr;};
    void deleteOrderStatus() { this->orderStatus_ = nullptr;};
    inline int32_t orderStatus() const { DARABONBA_PTR_GET_DEFAULT(orderStatus_, 0) };
    inline ChangeDetailListOfBuyerResponseBodyDataList& setOrderStatus(int32_t orderStatus) { DARABONBA_PTR_SET_VALUE(orderStatus_, orderStatus) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline int32_t payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, 0) };
    inline ChangeDetailListOfBuyerResponseBodyDataList& setPayStatus(int32_t payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


    // transactionNo Field Functions 
    bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
    void deleteTransactionNo() { this->transactionNo_ = nullptr;};
    inline string transactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
    inline ChangeDetailListOfBuyerResponseBodyDataList& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


    // utcCreateTime Field Functions 
    bool hasUtcCreateTime() const { return this->utcCreateTime_ != nullptr;};
    void deleteUtcCreateTime() { this->utcCreateTime_ = nullptr;};
    inline int64_t utcCreateTime() const { DARABONBA_PTR_GET_DEFAULT(utcCreateTime_, 0L) };
    inline ChangeDetailListOfBuyerResponseBodyDataList& setUtcCreateTime(int64_t utcCreateTime) { DARABONBA_PTR_SET_VALUE(utcCreateTime_, utcCreateTime) };


  protected:
    std::shared_ptr<int64_t> changeOrderNum_ = nullptr;
    std::shared_ptr<int64_t> orderNum_ = nullptr;
    std::shared_ptr<int32_t> orderStatus_ = nullptr;
    std::shared_ptr<int32_t> payStatus_ = nullptr;
    std::shared_ptr<string> transactionNo_ = nullptr;
    std::shared_ptr<int64_t> utcCreateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
