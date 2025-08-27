// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERPAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERPAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderPayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderPayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(pay_amount, payAmount_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderPayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(pay_amount, payAmount_);
    };
    TrainOrderPayRequest() = default ;
    TrainOrderPayRequest(const TrainOrderPayRequest &) = default ;
    TrainOrderPayRequest(TrainOrderPayRequest &&) = default ;
    TrainOrderPayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderPayRequest() = default ;
    TrainOrderPayRequest& operator=(const TrainOrderPayRequest &) = default ;
    TrainOrderPayRequest& operator=(TrainOrderPayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->outOrderId_ != nullptr && this->payAmount_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainOrderPayRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainOrderPayRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // payAmount Field Functions 
    bool hasPayAmount() const { return this->payAmount_ != nullptr;};
    void deletePayAmount() { this->payAmount_ = nullptr;};
    inline int64_t payAmount() const { DARABONBA_PTR_GET_DEFAULT(payAmount_, 0L) };
    inline TrainOrderPayRequest& setPayAmount(int64_t payAmount) { DARABONBA_PTR_SET_VALUE(payAmount_, payAmount) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> payAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
