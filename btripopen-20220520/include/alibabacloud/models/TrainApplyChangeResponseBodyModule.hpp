// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYCHANGERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYCHANGERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainApplyChangeResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyChangeResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(pay_status, payStatus_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyChangeResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(pay_status, payStatus_);
    };
    TrainApplyChangeResponseBodyModule() = default ;
    TrainApplyChangeResponseBodyModule(const TrainApplyChangeResponseBodyModule &) = default ;
    TrainApplyChangeResponseBodyModule(TrainApplyChangeResponseBodyModule &&) = default ;
    TrainApplyChangeResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyChangeResponseBodyModule() = default ;
    TrainApplyChangeResponseBodyModule& operator=(const TrainApplyChangeResponseBodyModule &) = default ;
    TrainApplyChangeResponseBodyModule& operator=(TrainApplyChangeResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeOrderId_ != nullptr
        && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->payStatus_ != nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline TrainApplyChangeResponseBodyModule& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainApplyChangeResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainApplyChangeResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // payStatus Field Functions 
    bool hasPayStatus() const { return this->payStatus_ != nullptr;};
    void deletePayStatus() { this->payStatus_ = nullptr;};
    inline string payStatus() const { DARABONBA_PTR_GET_DEFAULT(payStatus_, "") };
    inline TrainApplyChangeResponseBodyModule& setPayStatus(string payStatus) { DARABONBA_PTR_SET_VALUE(payStatus_, payStatus) };


  protected:
    std::shared_ptr<string> changeOrderId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> payStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
