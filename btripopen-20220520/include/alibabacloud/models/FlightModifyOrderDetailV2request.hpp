// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTMODIFYORDERDETAILV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightModifyOrderDetailV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightModifyOrderDetailV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(modify_apply_id, modifyApplyId_);
      DARABONBA_PTR_TO_JSON(need_query_service_fee, needQueryServiceFee_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_modify_apply_id, outModifyApplyId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, FlightModifyOrderDetailV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(modify_apply_id, modifyApplyId_);
      DARABONBA_PTR_FROM_JSON(need_query_service_fee, needQueryServiceFee_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_modify_apply_id, outModifyApplyId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
    };
    FlightModifyOrderDetailV2Request() = default ;
    FlightModifyOrderDetailV2Request(const FlightModifyOrderDetailV2Request &) = default ;
    FlightModifyOrderDetailV2Request(FlightModifyOrderDetailV2Request &&) = default ;
    FlightModifyOrderDetailV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightModifyOrderDetailV2Request() = default ;
    FlightModifyOrderDetailV2Request& operator=(const FlightModifyOrderDetailV2Request &) = default ;
    FlightModifyOrderDetailV2Request& operator=(FlightModifyOrderDetailV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isvName_ != nullptr
        && this->modifyApplyId_ != nullptr && this->needQueryServiceFee_ != nullptr && this->orderId_ != nullptr && this->outModifyApplyId_ != nullptr && this->outOrderId_ != nullptr; };
    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline FlightModifyOrderDetailV2Request& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // modifyApplyId Field Functions 
    bool hasModifyApplyId() const { return this->modifyApplyId_ != nullptr;};
    void deleteModifyApplyId() { this->modifyApplyId_ = nullptr;};
    inline string modifyApplyId() const { DARABONBA_PTR_GET_DEFAULT(modifyApplyId_, "") };
    inline FlightModifyOrderDetailV2Request& setModifyApplyId(string modifyApplyId) { DARABONBA_PTR_SET_VALUE(modifyApplyId_, modifyApplyId) };


    // needQueryServiceFee Field Functions 
    bool hasNeedQueryServiceFee() const { return this->needQueryServiceFee_ != nullptr;};
    void deleteNeedQueryServiceFee() { this->needQueryServiceFee_ = nullptr;};
    inline bool needQueryServiceFee() const { DARABONBA_PTR_GET_DEFAULT(needQueryServiceFee_, false) };
    inline FlightModifyOrderDetailV2Request& setNeedQueryServiceFee(bool needQueryServiceFee) { DARABONBA_PTR_SET_VALUE(needQueryServiceFee_, needQueryServiceFee) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline FlightModifyOrderDetailV2Request& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outModifyApplyId Field Functions 
    bool hasOutModifyApplyId() const { return this->outModifyApplyId_ != nullptr;};
    void deleteOutModifyApplyId() { this->outModifyApplyId_ = nullptr;};
    inline string outModifyApplyId() const { DARABONBA_PTR_GET_DEFAULT(outModifyApplyId_, "") };
    inline FlightModifyOrderDetailV2Request& setOutModifyApplyId(string outModifyApplyId) { DARABONBA_PTR_SET_VALUE(outModifyApplyId_, outModifyApplyId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline FlightModifyOrderDetailV2Request& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


  protected:
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> modifyApplyId_ = nullptr;
    std::shared_ptr<bool> needQueryServiceFee_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outModifyApplyId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
