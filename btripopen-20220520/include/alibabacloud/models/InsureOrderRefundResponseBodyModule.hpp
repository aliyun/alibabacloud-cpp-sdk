// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERREFUNDRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERREFUNDRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsureOrderRefundResponseBodyModuleInsRefundList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderRefundResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderRefundResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(apply_id, applyId_);
      DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_TO_JSON(ins_refund_list, insRefundList_);
      DARABONBA_PTR_TO_JSON(out_apply_id, outApplyId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderRefundResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(apply_id, applyId_);
      DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_FROM_JSON(ins_refund_list, insRefundList_);
      DARABONBA_PTR_FROM_JSON(out_apply_id, outApplyId_);
    };
    InsureOrderRefundResponseBodyModule() = default ;
    InsureOrderRefundResponseBodyModule(const InsureOrderRefundResponseBodyModule &) = default ;
    InsureOrderRefundResponseBodyModule(InsureOrderRefundResponseBodyModule &&) = default ;
    InsureOrderRefundResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderRefundResponseBodyModule() = default ;
    InsureOrderRefundResponseBodyModule& operator=(const InsureOrderRefundResponseBodyModule &) = default ;
    InsureOrderRefundResponseBodyModule& operator=(InsureOrderRefundResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->applyId_ != nullptr
        && this->insOrderId_ != nullptr && this->insRefundList_ != nullptr && this->outApplyId_ != nullptr; };
    // applyId Field Functions 
    bool hasApplyId() const { return this->applyId_ != nullptr;};
    void deleteApplyId() { this->applyId_ = nullptr;};
    inline string applyId() const { DARABONBA_PTR_GET_DEFAULT(applyId_, "") };
    inline InsureOrderRefundResponseBodyModule& setApplyId(string applyId) { DARABONBA_PTR_SET_VALUE(applyId_, applyId) };


    // insOrderId Field Functions 
    bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
    void deleteInsOrderId() { this->insOrderId_ = nullptr;};
    inline string insOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
    inline InsureOrderRefundResponseBodyModule& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


    // insRefundList Field Functions 
    bool hasInsRefundList() const { return this->insRefundList_ != nullptr;};
    void deleteInsRefundList() { this->insRefundList_ = nullptr;};
    inline const vector<Models::InsureOrderRefundResponseBodyModuleInsRefundList> & insRefundList() const { DARABONBA_PTR_GET_CONST(insRefundList_, vector<Models::InsureOrderRefundResponseBodyModuleInsRefundList>) };
    inline vector<Models::InsureOrderRefundResponseBodyModuleInsRefundList> insRefundList() { DARABONBA_PTR_GET(insRefundList_, vector<Models::InsureOrderRefundResponseBodyModuleInsRefundList>) };
    inline InsureOrderRefundResponseBodyModule& setInsRefundList(const vector<Models::InsureOrderRefundResponseBodyModuleInsRefundList> & insRefundList) { DARABONBA_PTR_SET_VALUE(insRefundList_, insRefundList) };
    inline InsureOrderRefundResponseBodyModule& setInsRefundList(vector<Models::InsureOrderRefundResponseBodyModuleInsRefundList> && insRefundList) { DARABONBA_PTR_SET_RVALUE(insRefundList_, insRefundList) };


    // outApplyId Field Functions 
    bool hasOutApplyId() const { return this->outApplyId_ != nullptr;};
    void deleteOutApplyId() { this->outApplyId_ = nullptr;};
    inline string outApplyId() const { DARABONBA_PTR_GET_DEFAULT(outApplyId_, "") };
    inline InsureOrderRefundResponseBodyModule& setOutApplyId(string outApplyId) { DARABONBA_PTR_SET_VALUE(outApplyId_, outApplyId) };


  protected:
    std::shared_ptr<string> applyId_ = nullptr;
    std::shared_ptr<string> insOrderId_ = nullptr;
    std::shared_ptr<vector<Models::InsureOrderRefundResponseBodyModuleInsRefundList>> insRefundList_ = nullptr;
    std::shared_ptr<string> outApplyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
