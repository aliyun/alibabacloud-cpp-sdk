// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREREFUNDDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSUREREFUNDDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureRefundDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureRefundDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
    };
    friend void from_json(const Darabonba::Json& j, InsureRefundDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
    };
    InsureRefundDetailRequest() = default ;
    InsureRefundDetailRequest(const InsureRefundDetailRequest &) = default ;
    InsureRefundDetailRequest(InsureRefundDetailRequest &&) = default ;
    InsureRefundDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureRefundDetailRequest() = default ;
    InsureRefundDetailRequest& operator=(const InsureRefundDetailRequest &) = default ;
    InsureRefundDetailRequest& operator=(InsureRefundDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->btripUserId_ != nullptr && this->buyerName_ != nullptr && this->insOrderId_ != nullptr && this->isvName_ != nullptr && this->outApplyId_ != nullptr
        && this->supplierCode_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline InsureRefundDetailRequest& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline InsureRefundDetailRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline InsureRefundDetailRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // insOrderId Field Functions 
    bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
    void deleteInsOrderId() { this->insOrderId_ = nullptr;};
    inline string insOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
    inline InsureRefundDetailRequest& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline InsureRefundDetailRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outApplyId Field Functions 
    bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
    void deleteOutApplyId() { this->outApplyId_ = nullptr;};
    inline string outApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
    inline InsureRefundDetailRequest& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


    // supplierCode Field Functions 
    bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
    void deleteSupplierCode() { this->supplierCode_ = nullptr;};
    inline string supplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
    inline InsureRefundDetailRequest& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    std::shared_ptr<string> insOrderId_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> outApplyId_ = nullptr;
    std::shared_ptr<string> supplierCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
