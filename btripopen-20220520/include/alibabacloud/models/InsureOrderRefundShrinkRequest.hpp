// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERREFUNDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERREFUNDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderRefundShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderRefundShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_TO_JSON(policy_no_list, policyNoListShrink_);
      DARABONBA_PTR_TO_JSON(sub_ins_order_ids, subInsOrderIdsShrink_);
      DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderRefundShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_FROM_JSON(policy_no_list, policyNoListShrink_);
      DARABONBA_PTR_FROM_JSON(sub_ins_order_ids, subInsOrderIdsShrink_);
      DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
    };
    InsureOrderRefundShrinkRequest() = default ;
    InsureOrderRefundShrinkRequest(const InsureOrderRefundShrinkRequest &) = default ;
    InsureOrderRefundShrinkRequest(InsureOrderRefundShrinkRequest &&) = default ;
    InsureOrderRefundShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderRefundShrinkRequest() = default ;
    InsureOrderRefundShrinkRequest& operator=(const InsureOrderRefundShrinkRequest &) = default ;
    InsureOrderRefundShrinkRequest& operator=(InsureOrderRefundShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->buyerName_ != nullptr && this->isvName_ != nullptr && this->outApplyId_ != nullptr && this->policyNoListShrink_ != nullptr && this->subInsOrderIdsShrink_ != nullptr
        && this->supplierCode_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline InsureOrderRefundShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline InsureOrderRefundShrinkRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline InsureOrderRefundShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outApplyId Field Functions 
    bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
    void deleteOutApplyId() { this->outApplyId_ = nullptr;};
    inline string outApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
    inline InsureOrderRefundShrinkRequest& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


    // policyNoListShrink Field Functions 
    bool hasPolicyNoListShrink() const { return this->policyNoListShrink_ != nullptr;};
    void deletePolicyNoListShrink() { this->policyNoListShrink_ = nullptr;};
    inline string policyNoListShrink() const { DARABONBA_PTR_GET_DEFAULT(policyNoListShrink_, "") };
    inline InsureOrderRefundShrinkRequest& setPolicyNoListShrink(string policyNoListShrink) { DARABONBA_PTR_SET_VALUE(policyNoListShrink_, policyNoListShrink) };


    // subInsOrderIdsShrink Field Functions 
    bool hasSubInsOrderIdsShrink() const { return this->subInsOrderIdsShrink_ != nullptr;};
    void deleteSubInsOrderIdsShrink() { this->subInsOrderIdsShrink_ = nullptr;};
    inline string subInsOrderIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(subInsOrderIdsShrink_, "") };
    inline InsureOrderRefundShrinkRequest& setSubInsOrderIdsShrink(string subInsOrderIdsShrink) { DARABONBA_PTR_SET_VALUE(subInsOrderIdsShrink_, subInsOrderIdsShrink) };


    // supplierCode Field Functions 
    bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
    void deleteSupplierCode() { this->supplierCode_ = nullptr;};
    inline string supplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
    inline InsureOrderRefundShrinkRequest& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> outApplyId_ = nullptr;
    std::shared_ptr<string> policyNoListShrink_ = nullptr;
    std::shared_ptr<string> subInsOrderIdsShrink_ = nullptr;
    std::shared_ptr<string> supplierCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
