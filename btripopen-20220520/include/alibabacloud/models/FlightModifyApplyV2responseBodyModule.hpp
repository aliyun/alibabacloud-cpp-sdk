// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYAPPLYV2RESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYAPPLYV2RESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyApplyV2ResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyApplyV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyApplyV2ResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
    };
    FlightModifyApplyV2ResponseBodyModule() = default ;
    FlightModifyApplyV2ResponseBodyModule(const FlightModifyApplyV2ResponseBodyModule &) = default ;
    FlightModifyApplyV2ResponseBodyModule(FlightModifyApplyV2ResponseBodyModule &&) = default ;
    FlightModifyApplyV2ResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyApplyV2ResponseBodyModule() = default ;
    FlightModifyApplyV2ResponseBodyModule& operator=(const FlightModifyApplyV2ResponseBodyModule &) = default ;
    FlightModifyApplyV2ResponseBodyModule& operator=(FlightModifyApplyV2ResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outSubOrderId_ != nullptr && this->subOrderId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline FlightModifyApplyV2ResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyApplyV2ResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline FlightModifyApplyV2ResponseBodyModule& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline string subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, "") };
    inline FlightModifyApplyV2ResponseBodyModule& setSubOrderId(string subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


  protected:
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outSubOrderId_ = nullptr;
    std::shared_ptr<string> subOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
