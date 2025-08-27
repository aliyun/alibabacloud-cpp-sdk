// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREREFUNDDETAILRESPONSEBODYMODULESUBORDERREFUNDLIST_HPP_
#define ALIBABACLOUD_MODELS_INSUREREFUNDDETAILRESPONSEBODYMODULESUBORDERREFUNDLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment.hpp>
#include <alibabacloud/models/InsureRefundDetailResponseBodyModuleSubOrderRefundListInsured.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureRefundDetailResponseBodyModuleSubOrderRefundList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureRefundDetailResponseBodyModuleSubOrderRefundList& obj) { 
      DARABONBA_PTR_TO_JSON(effective_end_time, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(effective_start_time, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(insure_segment, insureSegment_);
      DARABONBA_PTR_TO_JSON(insure_time, insureTime_);
      DARABONBA_PTR_TO_JSON(insured, insured_);
      DARABONBA_PTR_TO_JSON(out_sub_ins_order_id, outSubInsOrderId_);
      DARABONBA_PTR_TO_JSON(policy_no, policyNo_);
      DARABONBA_PTR_TO_JSON(policy_refund_no, policyRefundNo_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(product_name, productName_);
      DARABONBA_PTR_TO_JSON(product_no, productNo_);
      DARABONBA_PTR_TO_JSON(refund_status, refundStatus_);
      DARABONBA_PTR_TO_JSON(refund_time, refundTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sub_ins_order_id, subInsOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureRefundDetailResponseBodyModuleSubOrderRefundList& obj) { 
      DARABONBA_PTR_FROM_JSON(effective_end_time, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(effective_start_time, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(insure_segment, insureSegment_);
      DARABONBA_PTR_FROM_JSON(insure_time, insureTime_);
      DARABONBA_PTR_FROM_JSON(insured, insured_);
      DARABONBA_PTR_FROM_JSON(out_sub_ins_order_id, outSubInsOrderId_);
      DARABONBA_PTR_FROM_JSON(policy_no, policyNo_);
      DARABONBA_PTR_FROM_JSON(policy_refund_no, policyRefundNo_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(product_name, productName_);
      DARABONBA_PTR_FROM_JSON(product_no, productNo_);
      DARABONBA_PTR_FROM_JSON(refund_status, refundStatus_);
      DARABONBA_PTR_FROM_JSON(refund_time, refundTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sub_ins_order_id, subInsOrderId_);
    };
    InsureRefundDetailResponseBodyModuleSubOrderRefundList() = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundList(const InsureRefundDetailResponseBodyModuleSubOrderRefundList &) = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundList(InsureRefundDetailResponseBodyModuleSubOrderRefundList &&) = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureRefundDetailResponseBodyModuleSubOrderRefundList() = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundList& operator=(const InsureRefundDetailResponseBodyModuleSubOrderRefundList &) = default ;
    InsureRefundDetailResponseBodyModuleSubOrderRefundList& operator=(InsureRefundDetailResponseBodyModuleSubOrderRefundList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveEndTime_ != nullptr
        && this->effectiveStartTime_ != nullptr && this->insureSegment_ != nullptr && this->insureTime_ != nullptr && this->insured_ != nullptr && this->outSubInsOrderId_ != nullptr
        && this->policyNo_ != nullptr && this->policyRefundNo_ != nullptr && this->price_ != nullptr && this->productName_ != nullptr && this->productNo_ != nullptr
        && this->refundStatus_ != nullptr && this->refundTime_ != nullptr && this->status_ != nullptr && this->subInsOrderId_ != nullptr; };
    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline string effectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setEffectiveEndTime(string effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline string effectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // insureSegment Field Functions 
    bool hasInsureSegment() const { return this->insureSegment_ != nullptr;};
    void deleteInsureSegment() { this->insureSegment_ = nullptr;};
    inline const Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment & insureSegment() const { DARABONBA_PTR_GET_CONST(insureSegment_, Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment) };
    inline Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment insureSegment() { DARABONBA_PTR_GET(insureSegment_, Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment) };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setInsureSegment(const Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment & insureSegment) { DARABONBA_PTR_SET_VALUE(insureSegment_, insureSegment) };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setInsureSegment(Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment && insureSegment) { DARABONBA_PTR_SET_RVALUE(insureSegment_, insureSegment) };


    // insureTime Field Functions 
    bool hasInsureTime() const { return this->insureTime_ != nullptr;};
    void deleteInsureTime() { this->insureTime_ = nullptr;};
    inline string insureTime() const { DARABONBA_PTR_GET_DEFAULT(insureTime_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setInsureTime(string insureTime) { DARABONBA_PTR_SET_VALUE(insureTime_, insureTime) };


    // insured Field Functions 
    bool hasInsured() const { return this->insured_ != nullptr;};
    void deleteInsured() { this->insured_ = nullptr;};
    inline const Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsured & insured() const { DARABONBA_PTR_GET_CONST(insured_, Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsured) };
    inline Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsured insured() { DARABONBA_PTR_GET(insured_, Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsured) };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setInsured(const Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsured & insured) { DARABONBA_PTR_SET_VALUE(insured_, insured) };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setInsured(Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsured && insured) { DARABONBA_PTR_SET_RVALUE(insured_, insured) };


    // outSubInsOrderId Field Functions 
    bool hasOutSubInsOrderId() const { return this->outSubInsOrderId_ != nullptr;};
    void deleteOutSubInsOrderId() { this->outSubInsOrderId_ = nullptr;};
    inline string outSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubInsOrderId_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setOutSubInsOrderId(string outSubInsOrderId) { DARABONBA_PTR_SET_VALUE(outSubInsOrderId_, outSubInsOrderId) };


    // policyNo Field Functions 
    bool hasPolicyNo() const { return this->policyNo_ != nullptr;};
    void deletePolicyNo() { this->policyNo_ = nullptr;};
    inline string policyNo() const { DARABONBA_PTR_GET_DEFAULT(policyNo_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setPolicyNo(string policyNo) { DARABONBA_PTR_SET_VALUE(policyNo_, policyNo) };


    // policyRefundNo Field Functions 
    bool hasPolicyRefundNo() const { return this->policyRefundNo_ != nullptr;};
    void deletePolicyRefundNo() { this->policyRefundNo_ = nullptr;};
    inline string policyRefundNo() const { DARABONBA_PTR_GET_DEFAULT(policyRefundNo_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setPolicyRefundNo(string policyRefundNo) { DARABONBA_PTR_SET_VALUE(policyRefundNo_, policyRefundNo) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productNo Field Functions 
    bool hasProductNo() const { return this->productNo_ != nullptr;};
    void deleteProductNo() { this->productNo_ = nullptr;};
    inline string productNo() const { DARABONBA_PTR_GET_DEFAULT(productNo_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setProductNo(string productNo) { DARABONBA_PTR_SET_VALUE(productNo_, productNo) };


    // refundStatus Field Functions 
    bool hasRefundStatus() const { return this->refundStatus_ != nullptr;};
    void deleteRefundStatus() { this->refundStatus_ = nullptr;};
    inline string refundStatus() const { DARABONBA_PTR_GET_DEFAULT(refundStatus_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setRefundStatus(string refundStatus) { DARABONBA_PTR_SET_VALUE(refundStatus_, refundStatus) };


    // refundTime Field Functions 
    bool hasRefundTime() const { return this->refundTime_ != nullptr;};
    void deleteRefundTime() { this->refundTime_ = nullptr;};
    inline string refundTime() const { DARABONBA_PTR_GET_DEFAULT(refundTime_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setRefundTime(string refundTime) { DARABONBA_PTR_SET_VALUE(refundTime_, refundTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subInsOrderId Field Functions 
    bool hasSubInsOrderId() const { return this->subInsOrderId_ != nullptr;};
    void deleteSubInsOrderId() { this->subInsOrderId_ = nullptr;};
    inline string subInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(subInsOrderId_, "") };
    inline InsureRefundDetailResponseBodyModuleSubOrderRefundList& setSubInsOrderId(string subInsOrderId) { DARABONBA_PTR_SET_VALUE(subInsOrderId_, subInsOrderId) };


  protected:
    std::shared_ptr<string> effectiveEndTime_ = nullptr;
    std::shared_ptr<string> effectiveStartTime_ = nullptr;
    std::shared_ptr<Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsureSegment> insureSegment_ = nullptr;
    std::shared_ptr<string> insureTime_ = nullptr;
    std::shared_ptr<Models::InsureRefundDetailResponseBodyModuleSubOrderRefundListInsured> insured_ = nullptr;
    std::shared_ptr<string> outSubInsOrderId_ = nullptr;
    std::shared_ptr<string> policyNo_ = nullptr;
    std::shared_ptr<string> policyRefundNo_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productNo_ = nullptr;
    std::shared_ptr<string> refundStatus_ = nullptr;
    std::shared_ptr<string> refundTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subInsOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
