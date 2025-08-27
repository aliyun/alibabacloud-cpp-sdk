// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERCREATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERCREATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderCreateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderCreateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicantShrink_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(ins_person_and_segment_list, insPersonAndSegmentListShrink_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_ins_order_id, outInsOrderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderCreateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicantShrink_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(ins_person_and_segment_list, insPersonAndSegmentListShrink_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_ins_order_id, outInsOrderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
    };
    InsureOrderCreateShrinkRequest() = default ;
    InsureOrderCreateShrinkRequest(const InsureOrderCreateShrinkRequest &) = default ;
    InsureOrderCreateShrinkRequest(InsureOrderCreateShrinkRequest &&) = default ;
    InsureOrderCreateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderCreateShrinkRequest() = default ;
    InsureOrderCreateShrinkRequest& operator=(const InsureOrderCreateShrinkRequest &) = default ;
    InsureOrderCreateShrinkRequest& operator=(InsureOrderCreateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicantShrink_ != nullptr
        && this->btripUserId_ != nullptr && this->buyerName_ != nullptr && this->insPersonAndSegmentListShrink_ != nullptr && this->isvName_ != nullptr && this->outInsOrderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outSubOrderId_ != nullptr && this->supplierCode_ != nullptr; };
    // applicantShrink Field Functions 
    bool hasApplicantShrink() const { return this->applicantShrink_ != nullptr;};
    void deleteApplicantShrink() { this->applicantShrink_ = nullptr;};
    inline string applicantShrink() const { DARABONBA_PTR_GET_DEFAULT(applicantShrink_, "") };
    inline InsureOrderCreateShrinkRequest& setApplicantShrink(string applicantShrink) { DARABONBA_PTR_SET_VALUE(applicantShrink_, applicantShrink) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline InsureOrderCreateShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline InsureOrderCreateShrinkRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // insPersonAndSegmentListShrink Field Functions 
    bool hasInsPersonAndSegmentListShrink() const { return this->insPersonAndSegmentListShrink_ != nullptr;};
    void deleteInsPersonAndSegmentListShrink() { this->insPersonAndSegmentListShrink_ = nullptr;};
    inline string insPersonAndSegmentListShrink() const { DARABONBA_PTR_GET_DEFAULT(insPersonAndSegmentListShrink_, "") };
    inline InsureOrderCreateShrinkRequest& setInsPersonAndSegmentListShrink(string insPersonAndSegmentListShrink) { DARABONBA_PTR_SET_VALUE(insPersonAndSegmentListShrink_, insPersonAndSegmentListShrink) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline InsureOrderCreateShrinkRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outInsOrderId Field Functions 
    bool hasOutInsOrderId() const { return this->outInsOrderId_ != nullptr;};
    void deleteOutInsOrderId() { this->outInsOrderId_ = nullptr;};
    inline string outInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outInsOrderId_, "") };
    inline InsureOrderCreateShrinkRequest& setOutInsOrderId(string outInsOrderId) { DARABONBA_PTR_SET_VALUE(outInsOrderId_, outInsOrderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline InsureOrderCreateShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline InsureOrderCreateShrinkRequest& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // supplierCode Field Functions 
    bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
    void deleteSupplierCode() { this->supplierCode_ = nullptr;};
    inline string supplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
    inline InsureOrderCreateShrinkRequest& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> applicantShrink_ = nullptr;
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> insPersonAndSegmentListShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> isvName_ = nullptr;
    std::shared_ptr<string> outInsOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outSubOrderId_ = nullptr;
    std::shared_ptr<string> supplierCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
