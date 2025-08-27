// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYREFUNDRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainApplyRefundResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyRefundResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyRefundResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
    };
    TrainApplyRefundResponseBodyModule() = default ;
    TrainApplyRefundResponseBodyModule(const TrainApplyRefundResponseBodyModule &) = default ;
    TrainApplyRefundResponseBodyModule(TrainApplyRefundResponseBodyModule &&) = default ;
    TrainApplyRefundResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyRefundResponseBodyModule() = default ;
    TrainApplyRefundResponseBodyModule& operator=(const TrainApplyRefundResponseBodyModule &) = default ;
    TrainApplyRefundResponseBodyModule& operator=(TrainApplyRefundResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->outOrderId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainApplyRefundResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainApplyRefundResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


  protected:
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
