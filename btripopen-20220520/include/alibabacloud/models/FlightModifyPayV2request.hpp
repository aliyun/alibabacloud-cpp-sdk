// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYPAYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYPAYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyPayV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyPayV2Request& obj) { 
      DARABONBA_ANY_TO_JSON(ext_params, extParams_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(modify_pay_amount, modifyPayAmount_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyPayV2Request& obj) { 
      DARABONBA_ANY_FROM_JSON(ext_params, extParams_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(modify_pay_amount, modifyPayAmount_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
    };
    FlightModifyPayV2Request() = default ;
    FlightModifyPayV2Request(const FlightModifyPayV2Request &) = default ;
    FlightModifyPayV2Request(FlightModifyPayV2Request &&) = default ;
    FlightModifyPayV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyPayV2Request() = default ;
    FlightModifyPayV2Request& operator=(const FlightModifyPayV2Request &) = default ;
    FlightModifyPayV2Request& operator=(FlightModifyPayV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extParams_ != nullptr
        && this->isvName_ != nullptr && this->modifyPayAmount_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->outSubOrderId_ != nullptr
        && this->subOrderId_ != nullptr; };
    // extParams Field Functions 
    bool hasExtParams() const { return this->extParams_ != nullptr;};
    void deleteExtParams() { this->extParams_ = nullptr;};
    inline     const Darabonba::Json & extParams() const { DARABONBA_GET(extParams_) };
    Darabonba::Json & extParams() { DARABONBA_GET(extParams_) };
    inline FlightModifyPayV2Request& setExtParams(const Darabonba::Json & extParams) { DARABONBA_SET_VALUE(extParams_, extParams) };
    inline FlightModifyPayV2Request& setExtParams(Darabonba::Json & extParams) { DARABONBA_SET_RVALUE(extParams_, extParams) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyPayV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // modifyPayAmount Field Functions 
    bool hasModifyPayAmount() const { return this->modifyPayAmount_ != nullptr;};
    void deleteModifyPayAmount() { this->modifyPayAmount_ = nullptr;};
    inline int64_t modifyPayAmount() const { DARABONBA_PTR_GET_DEFAULT(modifyPayAmount_, 0L) };
    inline FlightModifyPayV2Request& setModifyPayAmount(int64_t modifyPayAmount) { DARABONBA_PTR_SET_VALUE(modifyPayAmount_, modifyPayAmount) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyPayV2Request& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyPayV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline FlightModifyPayV2Request& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline int64_t subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, 0L) };
    inline FlightModifyPayV2Request& setSubOrderId(int64_t subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


  protected:
    Darabonba::Json extParams_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<int64_t> modifyPayAmount_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outSubOrderId_ = nullptr;
    std::shared_ptr<int64_t> subOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
