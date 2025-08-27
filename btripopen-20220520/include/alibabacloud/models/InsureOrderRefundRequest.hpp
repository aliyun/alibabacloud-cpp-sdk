// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERREFUNDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERREFUNDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderRefundRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderRefundRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_TO_JSON(policy_no_list, policyNoList_);
      DARABONBA_PTR_TO_JSON(sub_ins_order_ids, subInsOrderIds_);
      DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderRefundRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_FROM_JSON(policy_no_list, policyNoList_);
      DARABONBA_PTR_FROM_JSON(sub_ins_order_ids, subInsOrderIds_);
      DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
    };
    InsureOrderRefundRequest() = default ;
    InsureOrderRefundRequest(const InsureOrderRefundRequest &) = default ;
    InsureOrderRefundRequest(InsureOrderRefundRequest &&) = default ;
    InsureOrderRefundRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderRefundRequest() = default ;
    InsureOrderRefundRequest& operator=(const InsureOrderRefundRequest &) = default ;
    InsureOrderRefundRequest& operator=(InsureOrderRefundRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->buyerName_ != nullptr && this->isvName_ != nullptr && this->outApplyId_ != nullptr && this->policyNoList_ != nullptr && this->subInsOrderIds_ != nullptr
        && this->supplierCode_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline InsureOrderRefundRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline InsureOrderRefundRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline InsureOrderRefundRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outApplyId Field Functions 
    bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
    void deleteOutApplyId() { this->outApplyId_ = nullptr;};
    inline string outApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
    inline InsureOrderRefundRequest& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


    // policyNoList Field Functions 
    bool hasPolicyNoList() const { return this->policyNoList_ != nullptr;};
    void deletePolicyNoList() { this->policyNoList_ = nullptr;};
    inline const vector<string> & policyNoList() const { DARABONBA_PTR_GET_CONST(policyNoList_, vector<string>) };
    inline vector<string> policyNoList() { DARABONBA_PTR_GET(policyNoList_, vector<string>) };
    inline InsureOrderRefundRequest& setPolicyNoList(const vector<string> & policyNoList) { DARABONBA_PTR_SET_VALUE(policyNoList_, policyNoList) };
    inline InsureOrderRefundRequest& setPolicyNoList(vector<string> && policyNoList) { DARABONBA_PTR_SET_RVALUE(policyNoList_, policyNoList) };


    // subInsOrderIds Field Functions 
    bool hasSubInsOrderIds() const { return this->subInsOrderIds_ != nullptr;};
    void deleteSubInsOrderIds() { this->subInsOrderIds_ = nullptr;};
    inline const vector<string> & subInsOrderIds() const { DARABONBA_PTR_GET_CONST(subInsOrderIds_, vector<string>) };
    inline vector<string> subInsOrderIds() { DARABONBA_PTR_GET(subInsOrderIds_, vector<string>) };
    inline InsureOrderRefundRequest& setSubInsOrderIds(const vector<string> & subInsOrderIds) { DARABONBA_PTR_SET_VALUE(subInsOrderIds_, subInsOrderIds) };
    inline InsureOrderRefundRequest& setSubInsOrderIds(vector<string> && subInsOrderIds) { DARABONBA_PTR_SET_RVALUE(subInsOrderIds_, subInsOrderIds) };


    // supplierCode Field Functions 
    bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
    void deleteSupplierCode() { this->supplierCode_ = nullptr;};
    inline string supplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
    inline InsureOrderRefundRequest& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


  protected:
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> outApplyId_ = nullptr;
    std::shared_ptr<vector<string>> policyNoList_ = nullptr;
    std::shared_ptr<vector<string>> subInsOrderIds_ = nullptr;
    std::shared_ptr<string> supplierCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
