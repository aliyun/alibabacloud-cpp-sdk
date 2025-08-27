// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYPAYV2SHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYPAYV2SHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyPayV2ShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyPayV2ShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ext_params, extParamsShrink_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(modify_pay_amount, modifyPayAmount_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyPayV2ShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ext_params, extParamsShrink_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(modify_pay_amount, modifyPayAmount_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
    };
    FlightModifyPayV2ShrinkRequest() = default ;
    FlightModifyPayV2ShrinkRequest(const FlightModifyPayV2ShrinkRequest &) = default ;
    FlightModifyPayV2ShrinkRequest(FlightModifyPayV2ShrinkRequest &&) = default ;
    FlightModifyPayV2ShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyPayV2ShrinkRequest() = default ;
    FlightModifyPayV2ShrinkRequest& operator=(const FlightModifyPayV2ShrinkRequest &) = default ;
    FlightModifyPayV2ShrinkRequest& operator=(FlightModifyPayV2ShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->extParamsShrink_ != nullptr
        && this->isvName_ != nullptr && this->modifyPayAmount_ != nullptr && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->outSubOrderId_ != nullptr
        && this->subOrderId_ != nullptr; };
    // extParamsShrink Field Functions 
    bool hasExtParamsShrink() const { return this->extParamsShrink_ != nullptr;};
    void deleteExtParamsShrink() { this->extParamsShrink_ = nullptr;};
    inline string extParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(extParamsShrink_, "") };
    inline FlightModifyPayV2ShrinkRequest& setExtParamsShrink(string extParamsShrink) { DARABONBA_PTR_SET_VALUE(extParamsShrink_, extParamsShrink) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyPayV2ShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // modifyPayAmount Field Functions 
    bool hasModifyPayAmount() const { return this->modifyPayAmount_ != nullptr;};
    void deleteModifyPayAmount() { this->modifyPayAmount_ = nullptr;};
    inline int64_t modifyPayAmount() const { DARABONBA_PTR_GET_DEFAULT(modifyPayAmount_, 0L) };
    inline FlightModifyPayV2ShrinkRequest& setModifyPayAmount(int64_t modifyPayAmount) { DARABONBA_PTR_SET_VALUE(modifyPayAmount_, modifyPayAmount) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyPayV2ShrinkRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyPayV2ShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline FlightModifyPayV2ShrinkRequest& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline int64_t subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, 0L) };
    inline FlightModifyPayV2ShrinkRequest& setSubOrderId(int64_t subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


  protected:
    std::shared_ptr<string> extParamsShrink_ = nullptr;
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
