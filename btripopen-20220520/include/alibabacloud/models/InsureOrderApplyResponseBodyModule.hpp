// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERAPPLYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERAPPLYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InsureOrderApplyResponseBodyModuleInsOrderPolicyList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderApplyResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_TO_JSON(ins_order_policy_list, insOrderPolicyList_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderApplyResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(ins_order_id, insOrderId_);
      DARABONBA_PTR_FROM_JSON(ins_order_policy_list, insOrderPolicyList_);
    };
    InsureOrderApplyResponseBodyModule() = default ;
    InsureOrderApplyResponseBodyModule(const InsureOrderApplyResponseBodyModule &) = default ;
    InsureOrderApplyResponseBodyModule(InsureOrderApplyResponseBodyModule &&) = default ;
    InsureOrderApplyResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderApplyResponseBodyModule() = default ;
    InsureOrderApplyResponseBodyModule& operator=(const InsureOrderApplyResponseBodyModule &) = default ;
    InsureOrderApplyResponseBodyModule& operator=(InsureOrderApplyResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->insOrderId_ != nullptr
        && this->insOrderPolicyList_ != nullptr; };
    // insOrderId Field Functions 
    bool hasInsOrderId() const { return this->insOrderId_ != nullptr;};
    void deleteInsOrderId() { this->insOrderId_ = nullptr;};
    inline string insOrderId() const { DARABONBA_PTR_GET_DEFAULT(insOrderId_, "") };
    inline InsureOrderApplyResponseBodyModule& setInsOrderId(string insOrderId) { DARABONBA_PTR_SET_VALUE(insOrderId_, insOrderId) };


    // insOrderPolicyList Field Functions 
    bool hasInsOrderPolicyList() const { return this->insOrderPolicyList_ != nullptr;};
    void deleteInsOrderPolicyList() { this->insOrderPolicyList_ = nullptr;};
    inline const vector<Models::InsureOrderApplyResponseBodyModuleInsOrderPolicyList> & insOrderPolicyList() const { DARABONBA_PTR_GET_CONST(insOrderPolicyList_, vector<Models::InsureOrderApplyResponseBodyModuleInsOrderPolicyList>) };
    inline vector<Models::InsureOrderApplyResponseBodyModuleInsOrderPolicyList> insOrderPolicyList() { DARABONBA_PTR_GET(insOrderPolicyList_, vector<Models::InsureOrderApplyResponseBodyModuleInsOrderPolicyList>) };
    inline InsureOrderApplyResponseBodyModule& setInsOrderPolicyList(const vector<Models::InsureOrderApplyResponseBodyModuleInsOrderPolicyList> & insOrderPolicyList) { DARABONBA_PTR_SET_VALUE(insOrderPolicyList_, insOrderPolicyList) };
    inline InsureOrderApplyResponseBodyModule& setInsOrderPolicyList(vector<Models::InsureOrderApplyResponseBodyModuleInsOrderPolicyList> && insOrderPolicyList) { DARABONBA_PTR_SET_RVALUE(insOrderPolicyList_, insOrderPolicyList) };


  protected:
    std::shared_ptr<string> insOrderId_ = nullptr;
    std::shared_ptr<vector<Models::InsureOrderApplyResponseBodyModuleInsOrderPolicyList>> insOrderPolicyList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
