// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsureOrderCreateRequestApplicant.hpp>
#include <vector>
#include <alibabacloud/models/InsureOrderCreateRequestInsPersonAndSegmentList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicant, applicant_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_TO_JSON(ins_person_and_segment_list, insPersonAndSegmentList_);
      DARABONBA_PTR_TO_JSON(isv_name, isvName_);
      DARABONBA_PTR_TO_JSON(out_ins_order_id, outInsOrderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_TO_JSON(supplier_code, supplierCode_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicant, applicant_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(buyer_name, buyerName_);
      DARABONBA_PTR_FROM_JSON(ins_person_and_segment_list, insPersonAndSegmentList_);
      DARABONBA_PTR_FROM_JSON(isv_name, isvName_);
      DARABONBA_PTR_FROM_JSON(out_ins_order_id, outInsOrderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_sub_order_id, outSubOrderId_);
      DARABONBA_PTR_FROM_JSON(supplier_code, supplierCode_);
    };
    InsureOrderCreateRequest() = default ;
    InsureOrderCreateRequest(const InsureOrderCreateRequest &) = default ;
    InsureOrderCreateRequest(InsureOrderCreateRequest &&) = default ;
    InsureOrderCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderCreateRequest() = default ;
    InsureOrderCreateRequest& operator=(const InsureOrderCreateRequest &) = default ;
    InsureOrderCreateRequest& operator=(InsureOrderCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applicant_ != nullptr
        && this->btripUserId_ != nullptr && this->buyerName_ != nullptr && this->insPersonAndSegmentList_ != nullptr && this->isvName_ != nullptr && this->outInsOrderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outSubOrderId_ != nullptr && this->supplierCode_ != nullptr; };
    // applicant Field Functions 
    bool hasApplicant() const { return this->applicant_ != nullptr;};
    void deleteApplicant() { this->applicant_ = nullptr;};
    inline const InsureOrderCreateRequestApplicant & applicant() const { DARABONBA_PTR_GET_CONST(applicant_, InsureOrderCreateRequestApplicant) };
    inline InsureOrderCreateRequestApplicant applicant() { DARABONBA_PTR_GET(applicant_, InsureOrderCreateRequestApplicant) };
    inline InsureOrderCreateRequest& setApplicant(const InsureOrderCreateRequestApplicant & applicant) { DARABONBA_PTR_SET_VALUE(applicant_, applicant) };
    inline InsureOrderCreateRequest& setApplicant(InsureOrderCreateRequestApplicant && applicant) { DARABONBA_PTR_SET_RVALUE(applicant_, applicant) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline InsureOrderCreateRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // buyerName Field Functions 
    bool hasBuyerName() const { return this->buyerName_ != nullptr;};
    void deleteBuyerName() { this->buyerName_ = nullptr;};
    inline string buyerName() const { DARABONBA_PTR_GET_DEFAULT(buyerName_, "") };
    inline InsureOrderCreateRequest& setBuyerName(string buyerName) { DARABONBA_PTR_SET_VALUE(buyerName_, buyerName) };


    // insPersonAndSegmentList Field Functions 
    bool hasInsPersonAndSegmentList() const { return this->insPersonAndSegmentList_ != nullptr;};
    void deleteInsPersonAndSegmentList() { this->insPersonAndSegmentList_ = nullptr;};
    inline const vector<InsureOrderCreateRequestInsPersonAndSegmentList> & insPersonAndSegmentList() const { DARABONBA_PTR_GET_CONST(insPersonAndSegmentList_, vector<InsureOrderCreateRequestInsPersonAndSegmentList>) };
    inline vector<InsureOrderCreateRequestInsPersonAndSegmentList> insPersonAndSegmentList() { DARABONBA_PTR_GET(insPersonAndSegmentList_, vector<InsureOrderCreateRequestInsPersonAndSegmentList>) };
    inline InsureOrderCreateRequest& setInsPersonAndSegmentList(const vector<InsureOrderCreateRequestInsPersonAndSegmentList> & insPersonAndSegmentList) { DARABONBA_PTR_SET_VALUE(insPersonAndSegmentList_, insPersonAndSegmentList) };
    inline InsureOrderCreateRequest& setInsPersonAndSegmentList(vector<InsureOrderCreateRequestInsPersonAndSegmentList> && insPersonAndSegmentList) { DARABONBA_PTR_SET_RVALUE(insPersonAndSegmentList_, insPersonAndSegmentList) };


    // isvName Field Functions 
    bool hasIsvName() const { return this->isvName_ != nullptr;};
    void deleteIsvName() { this->isvName_ = nullptr;};
    inline string isvName() const { DARABONBA_PTR_GET_DEFAULT(isvName_, "") };
    inline InsureOrderCreateRequest& setIsvName(string isvName) { DARABONBA_PTR_SET_VALUE(isvName_, isvName) };


    // outInsOrderId Field Functions 
    bool hasOutInsOrderId() const { return this->outInsOrderId_ != nullptr;};
    void deleteOutInsOrderId() { this->outInsOrderId_ = nullptr;};
    inline string outInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outInsOrderId_, "") };
    inline InsureOrderCreateRequest& setOutInsOrderId(string outInsOrderId) { DARABONBA_PTR_SET_VALUE(outInsOrderId_, outInsOrderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline InsureOrderCreateRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outSubOrderId Field Functions 
    bool hasOutSubOrderId() const { return this->outSubOrderId_ != nullptr;};
    void deleteOutSubOrderId() { this->outSubOrderId_ = nullptr;};
    inline string outSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubOrderId_, "") };
    inline InsureOrderCreateRequest& setOutSubOrderId(string outSubOrderId) { DARABONBA_PTR_SET_VALUE(outSubOrderId_, outSubOrderId) };


    // supplierCode Field Functions 
    bool hasSupplierCode() const { return this->supplierCode_ != nullptr;};
    void deleteSupplierCode() { this->supplierCode_ = nullptr;};
    inline string supplierCode() const { DARABONBA_PTR_GET_DEFAULT(supplierCode_, "") };
    inline InsureOrderCreateRequest& setSupplierCode(string supplierCode) { DARABONBA_PTR_SET_VALUE(supplierCode_, supplierCode) };


  protected:
    // This parameter is required.
    std::shared_ptr<InsureOrderCreateRequestApplicant> applicant_ = nullptr;
    std::shared_ptr<string> btripUserId_ = nullptr;
    std::shared_ptr<string> buyerName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<InsureOrderCreateRequestInsPersonAndSegmentList>> insPersonAndSegmentList_ = nullptr;
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
