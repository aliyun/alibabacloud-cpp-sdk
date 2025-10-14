// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGECONFIRMRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGECONFIRMRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class ChangeConfirmResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeConfirmResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(pay_amount, payAmount_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(transaction_no, transactionNo_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeConfirmResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(pay_amount, payAmount_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(transaction_no, transactionNo_);
    };
    ChangeConfirmResponseBodyData() = default ;
    ChangeConfirmResponseBodyData(const ChangeConfirmResponseBodyData &) = default ;
    ChangeConfirmResponseBodyData(ChangeConfirmResponseBodyData &&) = default ;
    ChangeConfirmResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeConfirmResponseBodyData() = default ;
    ChangeConfirmResponseBodyData& operator=(const ChangeConfirmResponseBodyData &) = default ;
    ChangeConfirmResponseBodyData& operator=(ChangeConfirmResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->payAmount_ == nullptr
        && return this->payTime_ == nullptr && return this->transactionNo_ == nullptr; };
    // payAmount Field Functions 
    bool hasPayAmount() const { return this->payAmount_ != nullptr;};
    void deletePayAmount() { this->payAmount_ = nullptr;};
    inline double payAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0.0) };
    inline ChangeConfirmResponseBodyData& setPayAmount(double payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline int64_t payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, 0L) };
    inline ChangeConfirmResponseBodyData& setPayTime(int64_t payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // transactionNo Field Functions 
    bool hasTransactionNo() const { return this->transactionNo_ != nullptr;};
    void deleteTransactionNo() { this->transactionNo_ = nullptr;};
    inline string transactionNo() const { DARABONBA_PTR_GET_DEFAULT(transactionNo_, "") };
    inline ChangeConfirmResponseBodyData& setTransactionNo(string transactionNo) { DARABONBA_PTR_SET_VALUE(transactionNo_, transactionNo) };


  protected:
    std::shared_ptr<double> payAmount_ = nullptr;
    std::shared_ptr<int64_t> payTime_ = nullptr;
    std::shared_ptr<string> transactionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
