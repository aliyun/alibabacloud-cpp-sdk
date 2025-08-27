// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEREFUNDORDERINFO_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTREFUNDDETAILRESPONSEBODYMODULEREFUNDORDERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& obj) { 
      DARABONBA_PTR_TO_JSON(apply_time, applyTime_);
      DARABONBA_PTR_TO_JSON(close_reason, closeReason_);
      DARABONBA_PTR_TO_JSON(handing_amount, handingAmount_);
      DARABONBA_PTR_TO_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_TO_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_TO_JSON(reason_desc, reasonDesc_);
      DARABONBA_PTR_TO_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_TO_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_TO_JSON(relation_refund_apply_id, relationRefundApplyId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(success_time, successTime_);
      DARABONBA_PTR_TO_JSON(voluntary, voluntary_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_time, applyTime_);
      DARABONBA_PTR_FROM_JSON(close_reason, closeReason_);
      DARABONBA_PTR_FROM_JSON(handing_amount, handingAmount_);
      DARABONBA_PTR_FROM_JSON(out_refund_apply_id, outRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(reason_code, reasonCode_);
      DARABONBA_PTR_FROM_JSON(reason_desc, reasonDesc_);
      DARABONBA_PTR_FROM_JSON(refund_amount, refundAmount_);
      DARABONBA_PTR_FROM_JSON(refund_apply_id, refundApplyId_);
      DARABONBA_PTR_FROM_JSON(relation_refund_apply_id, relationRefundApplyId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(success_time, successTime_);
      DARABONBA_PTR_FROM_JSON(voluntary, voluntary_);
    };
    IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo() = default ;
    IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo(const IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo &) = default ;
    IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo(IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo &&) = default ;
    IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo() = default ;
    IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& operator=(const IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo &) = default ;
    IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& operator=(IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyTime_ != nullptr
        && this->closeReason_ != nullptr && this->handingAmount_ != nullptr && this->outRefundApplyId_ != nullptr && this->reasonCode_ != nullptr && this->reasonDesc_ != nullptr
        && this->refundAmount_ != nullptr && this->refundApplyId_ != nullptr && this->relationRefundApplyId_ != nullptr && this->status_ != nullptr && this->successTime_ != nullptr
        && this->voluntary_ != nullptr; };
    // applyTime Field Functions 
    bool hasApplyTime() const { return this->applyTime_ != nullptr;};
    void deleteApplyTime() { this->applyTime_ = nullptr;};
    inline string applyTime() const { DARABONBA_PTR_GET_DEFAULT(applyTime_, "") };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setApplyTime(string applyTime) { DARABONBA_PTR_SET_VALUE(applyTime_, applyTime) };


    // closeReason Field Functions 
    bool hasCloseReason() const { return this->closeReason_ != nullptr;};
    void deleteCloseReason() { this->closeReason_ = nullptr;};
    inline string closeReason() const { DARABONBA_PTR_GET_DEFAULT(closeReason_, "") };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setCloseReason(string closeReason) { DARABONBA_PTR_SET_VALUE(closeReason_, closeReason) };


    // handingAmount Field Functions 
    bool hasHandingAmount() const { return this->handingAmount_ != nullptr;};
    void deleteHandingAmount() { this->handingAmount_ = nullptr;};
    inline int64_t handingAmount() const { DARABONBA_PTR_GET_DEFAULT(handingAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setHandingAmount(int64_t handingAmount) { DARABONBA_PTR_SET_VALUE(handingAmount_, handingAmount) };


    // outRefundApplyId Field Functions 
    bool hasOutRefundApplyId() const { return this->outRefundApplyId_ != nullptr;};
    void deleteOutRefundApplyId() { this->outRefundApplyId_ = nullptr;};
    inline string outRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(outRefundApplyId_, "") };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setOutRefundApplyId(string outRefundApplyId) { DARABONBA_PTR_SET_VALUE(outRefundApplyId_, outRefundApplyId) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonDesc Field Functions 
    bool hasReasonDesc() const { return this->reasonDesc_ != nullptr;};
    void deleteReasonDesc() { this->reasonDesc_ = nullptr;};
    inline string reasonDesc() const { DARABONBA_PTR_GET_DEFAULT(reasonDesc_, "") };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setReasonDesc(string reasonDesc) { DARABONBA_PTR_SET_VALUE(reasonDesc_, reasonDesc) };


    // refundAmount Field Functions 
    bool hasRefundAmount() const { return this->refundAmount_ != nullptr;};
    void deleteRefundAmount() { this->refundAmount_ = nullptr;};
    inline int64_t refundAmount() const { DARABONBA_PTR_GET_DEFAULT(refundAmount_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setRefundAmount(int64_t refundAmount) { DARABONBA_PTR_SET_VALUE(refundAmount_, refundAmount) };


    // refundApplyId Field Functions 
    bool hasRefundApplyId() const { return this->refundApplyId_ != nullptr;};
    void deleteRefundApplyId() { this->refundApplyId_ = nullptr;};
    inline string refundApplyId() const { DARABONBA_PTR_GET_DEFAULT(refundApplyId_, "") };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setRefundApplyId(string refundApplyId) { DARABONBA_PTR_SET_VALUE(refundApplyId_, refundApplyId) };


    // relationRefundApplyId Field Functions 
    bool hasRelationRefundApplyId() const { return this->relationRefundApplyId_ != nullptr;};
    void deleteRelationRefundApplyId() { this->relationRefundApplyId_ = nullptr;};
    inline int64_t relationRefundApplyId() const { DARABONBA_PTR_GET_DEFAULT(relationRefundApplyId_, 0L) };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setRelationRefundApplyId(int64_t relationRefundApplyId) { DARABONBA_PTR_SET_VALUE(relationRefundApplyId_, relationRefundApplyId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // successTime Field Functions 
    bool hasSuccessTime() const { return this->successTime_ != nullptr;};
    void deleteSuccessTime() { this->successTime_ = nullptr;};
    inline string successTime() const { DARABONBA_PTR_GET_DEFAULT(successTime_, "") };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setSuccessTime(string successTime) { DARABONBA_PTR_SET_VALUE(successTime_, successTime) };


    // voluntary Field Functions 
    bool hasVoluntary() const { return this->voluntary_ != nullptr;};
    void deleteVoluntary() { this->voluntary_ = nullptr;};
    inline bool voluntary() const { DARABONBA_PTR_GET_DEFAULT(voluntary_, false) };
    inline IntlFlightRefundDetailResponseBodyModuleRefundOrderInfo& setVoluntary(bool voluntary) { DARABONBA_PTR_SET_VALUE(voluntary_, voluntary) };


  protected:
    std::shared_ptr<string> applyTime_ = nullptr;
    std::shared_ptr<string> closeReason_ = nullptr;
    std::shared_ptr<int64_t> handingAmount_ = nullptr;
    std::shared_ptr<string> outRefundApplyId_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonDesc_ = nullptr;
    std::shared_ptr<int64_t> refundAmount_ = nullptr;
    std::shared_ptr<string> refundApplyId_ = nullptr;
    std::shared_ptr<int64_t> relationRefundApplyId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> successTime_ = nullptr;
    std::shared_ptr<bool> voluntary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
