// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERDETAILRESPONSEBODYMODULEINSUREORDERDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERDETAILRESPONSEBODYMODULEINSUREORDERDETAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsureSegment.hpp>
#include <alibabacloud/models/InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsured.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderDetailResponseBodyModuleInsureOrderDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderDetailResponseBodyModuleInsureOrderDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(effective_end_time, effectiveEndTime_);
      DARABONBA_PTR_TO_JSON(effective_start_time, effectiveStartTime_);
      DARABONBA_PTR_TO_JSON(insure_segment, insureSegment_);
      DARABONBA_PTR_TO_JSON(insure_time, insureTime_);
      DARABONBA_PTR_TO_JSON(insured, insured_);
      DARABONBA_PTR_TO_JSON(out_sub_ins_order_id, outSubInsOrderId_);
      DARABONBA_PTR_TO_JSON(policy_no, policyNo_);
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(product_name, productName_);
      DARABONBA_PTR_TO_JSON(product_no, productNo_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sub_ins_order_id, subInsOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderDetailResponseBodyModuleInsureOrderDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(effective_end_time, effectiveEndTime_);
      DARABONBA_PTR_FROM_JSON(effective_start_time, effectiveStartTime_);
      DARABONBA_PTR_FROM_JSON(insure_segment, insureSegment_);
      DARABONBA_PTR_FROM_JSON(insure_time, insureTime_);
      DARABONBA_PTR_FROM_JSON(insured, insured_);
      DARABONBA_PTR_FROM_JSON(out_sub_ins_order_id, outSubInsOrderId_);
      DARABONBA_PTR_FROM_JSON(policy_no, policyNo_);
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(product_name, productName_);
      DARABONBA_PTR_FROM_JSON(product_no, productNo_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sub_ins_order_id, subInsOrderId_);
    };
    InsureOrderDetailResponseBodyModuleInsureOrderDetailList() = default ;
    InsureOrderDetailResponseBodyModuleInsureOrderDetailList(const InsureOrderDetailResponseBodyModuleInsureOrderDetailList &) = default ;
    InsureOrderDetailResponseBodyModuleInsureOrderDetailList(InsureOrderDetailResponseBodyModuleInsureOrderDetailList &&) = default ;
    InsureOrderDetailResponseBodyModuleInsureOrderDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderDetailResponseBodyModuleInsureOrderDetailList() = default ;
    InsureOrderDetailResponseBodyModuleInsureOrderDetailList& operator=(const InsureOrderDetailResponseBodyModuleInsureOrderDetailList &) = default ;
    InsureOrderDetailResponseBodyModuleInsureOrderDetailList& operator=(InsureOrderDetailResponseBodyModuleInsureOrderDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectiveEndTime_ != nullptr
        && this->effectiveStartTime_ != nullptr && this->insureSegment_ != nullptr && this->insureTime_ != nullptr && this->insured_ != nullptr && this->outSubInsOrderId_ != nullptr
        && this->policyNo_ != nullptr && this->price_ != nullptr && this->productName_ != nullptr && this->productNo_ != nullptr && this->status_ != nullptr
        && this->subInsOrderId_ != nullptr; };
    // effectiveEndTime Field Functions 
    bool hasEffectiveEndTime() const { return this->effectiveEndTime_ != nullptr;};
    void deleteEffectiveEndTime() { this->effectiveEndTime_ = nullptr;};
    inline string effectiveEndTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveEndTime_, "") };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setEffectiveEndTime(string effectiveEndTime) { DARABONBA_PTR_SET_VALUE(effectiveEndTime_, effectiveEndTime) };


    // effectiveStartTime Field Functions 
    bool hasEffectiveStartTime() const { return this->effectiveStartTime_ != nullptr;};
    void deleteEffectiveStartTime() { this->effectiveStartTime_ = nullptr;};
    inline string effectiveStartTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveStartTime_, "") };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setEffectiveStartTime(string effectiveStartTime) { DARABONBA_PTR_SET_VALUE(effectiveStartTime_, effectiveStartTime) };


    // insureSegment Field Functions 
    bool hasInsureSegment() const { return this->insureSegment_ != nullptr;};
    void deleteInsureSegment() { this->insureSegment_ = nullptr;};
    inline const Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsureSegment & insureSegment() const { DARABONBA_PTR_GET_CONST(insureSegment_, Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsureSegment) };
    inline Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsureSegment insureSegment() { DARABONBA_PTR_GET(insureSegment_, Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsureSegment) };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setInsureSegment(const Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsureSegment & insureSegment) { DARABONBA_PTR_SET_VALUE(insureSegment_, insureSegment) };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setInsureSegment(Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsureSegment && insureSegment) { DARABONBA_PTR_SET_RVALUE(insureSegment_, insureSegment) };


    // insureTime Field Functions 
    bool hasInsureTime() const { return this->insureTime_ != nullptr;};
    void deleteInsureTime() { this->insureTime_ = nullptr;};
    inline string insureTime() const { DARABONBA_PTR_GET_DEFAULT(insureTime_, "") };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setInsureTime(string insureTime) { DARABONBA_PTR_SET_VALUE(insureTime_, insureTime) };


    // insured Field Functions 
    bool hasInsured() const { return this->insured_ != nullptr;};
    void deleteInsured() { this->insured_ = nullptr;};
    inline const Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsured & insured() const { DARABONBA_PTR_GET_CONST(insured_, Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsured) };
    inline Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsured insured() { DARABONBA_PTR_GET(insured_, Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsured) };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setInsured(const Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsured & insured) { DARABONBA_PTR_SET_VALUE(insured_, insured) };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setInsured(Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsured && insured) { DARABONBA_PTR_SET_RVALUE(insured_, insured) };


    // outSubInsOrderId Field Functions 
    bool hasOutSubInsOrderId() const { return this->outSubInsOrderId_ != nullptr;};
    void deleteOutSubInsOrderId() { this->outSubInsOrderId_ = nullptr;};
    inline string outSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubInsOrderId_, "") };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setOutSubInsOrderId(string outSubInsOrderId) { DARABONBA_PTR_SET_VALUE(outSubInsOrderId_, outSubInsOrderId) };


    // policyNo Field Functions 
    bool hasPolicyNo() const { return this->policyNo_ != nullptr;};
    void deletePolicyNo() { this->policyNo_ = nullptr;};
    inline string policyNo() const { DARABONBA_PTR_GET_DEFAULT(policyNo_, "") };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setPolicyNo(string policyNo) { DARABONBA_PTR_SET_VALUE(policyNo_, policyNo) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // productNo Field Functions 
    bool hasProductNo() const { return this->productNo_ != nullptr;};
    void deleteProductNo() { this->productNo_ = nullptr;};
    inline string productNo() const { DARABONBA_PTR_GET_DEFAULT(productNo_, "") };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setProductNo(string productNo) { DARABONBA_PTR_SET_VALUE(productNo_, productNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subInsOrderId Field Functions 
    bool hasSubInsOrderId() const { return this->subInsOrderId_ != nullptr;};
    void deleteSubInsOrderId() { this->subInsOrderId_ = nullptr;};
    inline string subInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(subInsOrderId_, "") };
    inline InsureOrderDetailResponseBodyModuleInsureOrderDetailList& setSubInsOrderId(string subInsOrderId) { DARABONBA_PTR_SET_VALUE(subInsOrderId_, subInsOrderId) };


  protected:
    std::shared_ptr<string> effectiveEndTime_ = nullptr;
    std::shared_ptr<string> effectiveStartTime_ = nullptr;
    std::shared_ptr<Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsureSegment> insureSegment_ = nullptr;
    std::shared_ptr<string> insureTime_ = nullptr;
    std::shared_ptr<Models::InsureOrderDetailResponseBodyModuleInsureOrderDetailListInsured> insured_ = nullptr;
    std::shared_ptr<string> outSubInsOrderId_ = nullptr;
    std::shared_ptr<string> policyNo_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> productNo_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subInsOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
