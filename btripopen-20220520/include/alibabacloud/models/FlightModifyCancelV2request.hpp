// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYCANCELV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYCANCELV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyCancelV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyCancelV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(sub_order_id, subOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyCancelV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(sub_order_id, subOrderId_);
    };
    FlightModifyCancelV2Request() = default ;
    FlightModifyCancelV2Request(const FlightModifyCancelV2Request &) = default ;
    FlightModifyCancelV2Request(FlightModifyCancelV2Request &&) = default ;
    FlightModifyCancelV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyCancelV2Request() = default ;
    FlightModifyCancelV2Request& operator=(const FlightModifyCancelV2Request &) = default ;
    FlightModifyCancelV2Request& operator=(FlightModifyCancelV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isvName_ != nullptr
        && this->orderId_ != nullptr && this->outOrderId_ != nullptr && this->outSubOrderId_ != nullptr && this->subOrderId_ != nullptr; };
    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyCancelV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline FlightModifyCancelV2Request& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyCancelV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline FlightModifyCancelV2Request& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // subOrderId Field Functions 
    bool hasSubOrderId() const { return this->subOrderId_ != nullptr;};
    void deleteSubOrderId() { this->subOrderId_ = nullptr;};
    inline int64_t subOrderId() const { DARABONBA_PTR_GET_DEFAULT(subOrderId_, 0L) };
    inline FlightModifyCancelV2Request& setSubOrderId(int64_t subOrderId) { DARABONBA_PTR_SET_VALUE(subOrderId_, subOrderId) };


  protected:
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outSubOrderId_ = nullptr;
    std::shared_ptr<int64_t> subOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
