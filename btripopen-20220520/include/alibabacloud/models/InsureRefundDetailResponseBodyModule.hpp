// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREREFUNDDETAILRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INSUREREFUNDDETAILRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InsureRefundDetailResponseBodyModuleInsureOrder.hpp>
#include <vector>
#include <alibabacloud/models/InsureRefundDetailResponseBodyModuleSubOrderRefundList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureRefundDetailResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureRefundDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_TO_JSON(insure_order, insureOrder_);
      DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_TO_JSON(sub_order_refund_list, subOrderRefundList_);
    };
    friend void from_json(const Darabonba::Json& j, InsureRefundDetailResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(gmt_create, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmt_modified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_FROM_JSON(insure_order, insureOrder_);
      DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
      DARABONBA_PTR_FROM_JSON(sub_order_refund_list, subOrderRefundList_);
    };
    InsureRefundDetailResponseBodyModule() = default ;
    InsureRefundDetailResponseBodyModule(const InsureRefundDetailResponseBodyModule &) = default ;
    InsureRefundDetailResponseBodyModule(InsureRefundDetailResponseBodyModule &&) = default ;
    InsureRefundDetailResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureRefundDetailResponseBodyModule() = default ;
    InsureRefundDetailResponseBodyModule& operator=(const InsureRefundDetailResponseBodyModule &) = default ;
    InsureRefundDetailResponseBodyModule& operator=(InsureRefundDetailResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr && this->insOrderId_ != nullptr && this->insureOrder_ != nullptr && this->outApplyId_ != nullptr
        && this->subOrderRefundList_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline InsureRefundDetailResponseBodyModule& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline InsureRefundDetailResponseBodyModule& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline InsureRefundDetailResponseBodyModule& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // insOrderId Field Functions 
    bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
    void deleteInsOrderId() { this->insOrderId_ = nullptr;};
    inline string insOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
    inline InsureRefundDetailResponseBodyModule& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


    // insureOrder Field Functions 
    bool hasInsureOrder() const { return this->insureOrder_ != nullptr;};
    void deleteInsureOrder() { this->insureOrder_ = nullptr;};
    inline const Models::InsureRefundDetailResponseBodyModuleInsureOrder & insureOrder() const { DARABONBA_PTR_GET_CONST(insureOrder_, Models::InsureRefundDetailResponseBodyModuleInsureOrder) };
    inline Models::InsureRefundDetailResponseBodyModuleInsureOrder insureOrder() { DARABONBA_PTR_GET(insureOrder_, Models::InsureRefundDetailResponseBodyModuleInsureOrder) };
    inline InsureRefundDetailResponseBodyModule& setInsureOrder(const Models::InsureRefundDetailResponseBodyModuleInsureOrder & insureOrder) { DARABONBA_PTR_SET_VALUE(insureOrder_, insureOrder) };
    inline InsureRefundDetailResponseBodyModule& setInsureOrder(Models::InsureRefundDetailResponseBodyModuleInsureOrder && insureOrder) { DARABONBA_PTR_SET_RVALUE(insureOrder_, insureOrder) };


    // outApplyId Field Functions 
    bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
    void deleteOutApplyId() { this->outApplyId_ = nullptr;};
    inline string outApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
    inline InsureRefundDetailResponseBodyModule& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


    // subOrderRefundList Field Functions 
    bool hasSubOrderRefundList() const { return this->subOrderRefundList_ != nullptr;};
    void deleteSubOrderRefundList() { this->subOrderRefundList_ = nullptr;};
    inline const vector<Models::InsureRefundDetailResponseBodyModuleSubOrderRefundList> & subOrderRefundList() const { DARABONBA_PTR_GET_CONST(subOrderRefundList_, vector<Models::InsureRefundDetailResponseBodyModuleSubOrderRefundList>) };
    inline vector<Models::InsureRefundDetailResponseBodyModuleSubOrderRefundList> subOrderRefundList() { DARABONBA_PTR_GET(subOrderRefundList_, vector<Models::InsureRefundDetailResponseBodyModuleSubOrderRefundList>) };
    inline InsureRefundDetailResponseBodyModule& setSubOrderRefundList(const vector<Models::InsureRefundDetailResponseBodyModuleSubOrderRefundList> & subOrderRefundList) { DARABONBA_PTR_SET_VALUE(subOrderRefundList_, subOrderRefundList) };
    inline InsureRefundDetailResponseBodyModule& setSubOrderRefundList(vector<Models::InsureRefundDetailResponseBodyModuleSubOrderRefundList> && subOrderRefundList) { DARABONBA_PTR_SET_RVALUE(subOrderRefundList_, subOrderRefundList) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> insOrderId_ = nullptr;
    std::shared_ptr<Models::InsureRefundDetailResponseBodyModuleInsureOrder> insureOrder_ = nullptr;
    std::shared_ptr<string> outApplyId_ = nullptr;
    std::shared_ptr<vector<Models::InsureRefundDetailResponseBodyModuleSubOrderRefundList>> subOrderRefundList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
