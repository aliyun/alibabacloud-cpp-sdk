// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERAPPLYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERAPPLYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderApplyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderApplyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderApplyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
    };
    InsureOrderApplyRequest() = default ;
    InsureOrderApplyRequest(const InsureOrderApplyRequest &) = default ;
    InsureOrderApplyRequest(InsureOrderApplyRequest &&) = default ;
    InsureOrderApplyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderApplyRequest() = default ;
    InsureOrderApplyRequest& operator=(const InsureOrderApplyRequest &) = default ;
    InsureOrderApplyRequest& operator=(InsureOrderApplyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripUserId_ != nullptr
        && this->buyerName_ != nullptr && this->insOrderId_ != nullptr && this->isvName_ != nullptr && this->outOrderId_ != nullptr && this->outSubOrderId_ != nullptr
        && this->supplierCode_ != nullptr; };
    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline InsureOrderApplyRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline InsureOrderApplyRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // insOrderId Field Functions 
    bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
    void deleteInsOrderId() { this->insOrderId_ = nullptr;};
    inline string insOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
    inline InsureOrderApplyRequest& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline InsureOrderApplyRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline InsureOrderApplyRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline InsureOrderApplyRequest& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // supplierCode Field Functions 
    bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
    void deleteSupplierCode() { this->supplierCode_ = nullptr;};
    inline string supplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
    inline InsureOrderApplyRequest& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> insOrderId_ = nullptr;
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outSubOrderId_ = nullptr;
    std::shared_ptr<string> supplierCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
