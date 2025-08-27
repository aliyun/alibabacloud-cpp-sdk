// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREREFUNDDETAILRESPONSEBODYMODULEINSUREORDER_HPP_
#define ALIBABACLOUD_MODELS_INSUREREFUNDDETAILRESPONSEBODYMODULEINSUREORDER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsureRefundDetailResponseBodyModuleInsureOrderApplicant.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureRefundDetailResponseBodyModuleInsureOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureRefundDetailResponseBodyModuleInsureOrder& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(biz_order_id, bizOrderId_);
      DARABONBA_PTR_TO_JSON(biz_type, bizType_);
      DARABONBA_PTR_TO_JSON(close_time, closeTime_);
      DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_TO_JSON(out_ins_order_id, outInsOrderId_);
      DARABONBA_PTR_TO_JSON(pay_time, payTime_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(settle_type, settleType_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, InsureRefundDetailResponseBodyModuleInsureOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(biz_order_id, bizOrderId_);
      DARABONBA_PTR_FROM_JSON(biz_type, bizType_);
      DARABONBA_PTR_FROM_JSON(close_time, closeTime_);
      DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_FROM_JSON(out_ins_order_id, outInsOrderId_);
      DARABONBA_PTR_FROM_JSON(pay_time, payTime_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(settle_type, settleType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    InsureRefundDetailResponseBodyModuleInsureOrder() = default ;
    InsureRefundDetailResponseBodyModuleInsureOrder(const InsureRefundDetailResponseBodyModuleInsureOrder &) = default ;
    InsureRefundDetailResponseBodyModuleInsureOrder(InsureRefundDetailResponseBodyModuleInsureOrder &&) = default ;
    InsureRefundDetailResponseBodyModuleInsureOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureRefundDetailResponseBodyModuleInsureOrder() = default ;
    InsureRefundDetailResponseBodyModuleInsureOrder& operator=(const InsureRefundDetailResponseBodyModuleInsureOrder &) = default ;
    InsureRefundDetailResponseBodyModuleInsureOrder& operator=(InsureRefundDetailResponseBodyModuleInsureOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicant_ != nullptr
        && this->bizOrderId_ != nullptr && this->bizType_ != nullptr && this->closeTime_ != nullptr && this->insOrderId_ != nullptr && this->outInsOrderId_ != nullptr
        && this->payTime_ != nullptr && this->price_ != nullptr && this->settleType_ != nullptr && this->status_ != nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline const Models::InsureRefundDetailResponseBodyModuleInsureOrderApplicant & applicant() const { DARABONBA_PTR_GET_CONST(applicant_, Models::InsureRefundDetailResponseBodyModuleInsureOrderApplicant) };
    inline Models::InsureRefundDetailResponseBodyModuleInsureOrderApplicant applicant() { DARABONBA_PTR_GET(applicant_, Models::InsureRefundDetailResponseBodyModuleInsureOrderApplicant) };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setApplicant(const Models::InsureRefundDetailResponseBodyModuleInsureOrderApplicant & applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setApplicant(Models::InsureRefundDetailResponseBodyModuleInsureOrderApplicant && applicant) { DARABONBA_PTR_SET_RVALUE(applicant_, applicant) };


    // bizOrderId Field Functions 
    bool hasBizOrderId() const { return this->bizOrderId_ != nullptr;};
    void deleteBizOrderId() { this->bizOrderId_ = nullptr;};
    inline string bizOrderId() const { DARABONBA_PTR_GET_DEFAULT(bizOrderId_, "") };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setBizOrderId(string bizOrderId) { DARABONBA_PTR_SET_VALUE(bizOrderId_, bizOrderId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // closeTime Field Functions 
    bool hasCloseTime() const { return this->closeTime_ != nullptr;};
    void deleteCloseTime() { this->closeTime_ = nullptr;};
    inline string closeTime() const { DARABONBA_PTR_GET_DEFAULT(closeTime_, "") };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setCloseTime(string closeTime) { DARABONBA_PTR_SET_VALUE(closeTime_, closeTime) };


    // insOrderId Field Functions 
    bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
    void deleteInsOrderId() { this->insOrderId_ = nullptr;};
    inline string insOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


    // outInsOrderId Field Functions 
    bool hasOutInsOrderId() const { return this->outInsOrderId_ != nullptr;};
    void deleteOutInsOrderId() { this->outInsOrderId_ = nullptr;};
    inline string outInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outInsOrderId_, "") };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setOutInsOrderId(string outInsOrderId) { DARABONBA_PTR_SET_VALUE(outInsOrderId_, outInsOrderId) };


    // payTime Field Functions 
    bool hasPayTime() const { return this->payTime_ != nullptr;};
    void deletePayTime() { this->payTime_ = nullptr;};
    inline string payTime() const { DARABONBA_PTR_GET_DEFAULT(payTime_, "") };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setPayTime(string payTime) { DARABONBA_PTR_SET_VALUE(payTime_, payTime) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // settleType Field Functions 
    bool hasSettleType() const { return this->settleType_ != nullptr;};
    void deleteSettleType() { this->settleType_ = nullptr;};
    inline int32_t settleType() const { DARABONBA_PTR_GET_DEFAULT(settleType_, 0) };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setSettleType(int32_t settleType) { DARABONBA_PTR_SET_VALUE(settleType_, settleType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline InsureRefundDetailResponseBodyModuleInsureOrder& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::InsureRefundDetailResponseBodyModuleInsureOrderApplicant> applicant_ = nullptr;
    std::shared_ptr<string> bizOrderId_ = nullptr;
    std::shared_ptr<int32_t> bizType_ = nullptr;
    std::shared_ptr<string> closeTime_ = nullptr;
    std::shared_ptr<string> insOrderId_ = nullptr;
    std::shared_ptr<string> outInsOrderId_ = nullptr;
    std::shared_ptr<string> payTime_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<int32_t> settleType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
