// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERCREATERESPONSEBODYMODULEINSUREORDERDETAILLIST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERCREATERESPONSEBODYMODULEINSUREORDERDETAILLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderCreateResponseBodyModuleInsureOrderDetailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderCreateResponseBodyModuleInsureOrderDetailList& obj) { 
      DARABONBA_PTR_TO_JSON(out_sub_ins_order_id, outSubInsOrderId_);
      DARABONBA_PTR_TO_JSON(policy_no, policyNo_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(sub_ins_order_id, subInsOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderCreateResponseBodyModuleInsureOrderDetailList& obj) { 
      DARABONBA_PTR_FROM_JSON(out_sub_ins_order_id, outSubInsOrderId_);
      DARABONBA_PTR_FROM_JSON(policy_no, policyNo_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(sub_ins_order_id, subInsOrderId_);
    };
    InsureOrderCreateResponseBodyModuleInsureOrderDetailList() = default ;
    InsureOrderCreateResponseBodyModuleInsureOrderDetailList(const InsureOrderCreateResponseBodyModuleInsureOrderDetailList &) = default ;
    InsureOrderCreateResponseBodyModuleInsureOrderDetailList(InsureOrderCreateResponseBodyModuleInsureOrderDetailList &&) = default ;
    InsureOrderCreateResponseBodyModuleInsureOrderDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderCreateResponseBodyModuleInsureOrderDetailList() = default ;
    InsureOrderCreateResponseBodyModuleInsureOrderDetailList& operator=(const InsureOrderCreateResponseBodyModuleInsureOrderDetailList &) = default ;
    InsureOrderCreateResponseBodyModuleInsureOrderDetailList& operator=(InsureOrderCreateResponseBodyModuleInsureOrderDetailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outSubInsOrderId_ != nullptr
        && this->policyNo_ != nullptr && this->status_ != nullptr && this->subInsOrderId_ != nullptr; };
    // outSubInsOrderId Field Functions 
    bool hasOutSubInsOrderId() const { return this->outSubInsOrderId_ != nullptr;};
    void deleteOutSubInsOrderId() { this->outSubInsOrderId_ = nullptr;};
    inline string outSubInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(outSubInsOrderId_, "") };
    inline InsureOrderCreateResponseBodyModuleInsureOrderDetailList& setOutSubInsOrderId(string outSubInsOrderId) { DARABONBA_PTR_SET_VALUE(outSubInsOrderId_, outSubInsOrderId) };


    // policyNo Field Functions 
    bool hasPolicyNo() const { return this->policyNo_ != nullptr;};
    void deletePolicyNo() { this->policyNo_ = nullptr;};
    inline string policyNo() const { DARABONBA_PTR_GET_DEFAULT(policyNo_, "") };
    inline InsureOrderCreateResponseBodyModuleInsureOrderDetailList& setPolicyNo(string policyNo) { DARABONBA_PTR_SET_VALUE(policyNo_, policyNo) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline InsureOrderCreateResponseBodyModuleInsureOrderDetailList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subInsOrderId Field Functions 
    bool hasSubInsOrderId() const { return this->subInsOrderId_ != nullptr;};
    void deleteSubInsOrderId() { this->subInsOrderId_ = nullptr;};
    inline string subInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(subInsOrderId_, "") };
    inline InsureOrderCreateResponseBodyModuleInsureOrderDetailList& setSubInsOrderId(string subInsOrderId) { DARABONBA_PTR_SET_VALUE(subInsOrderId_, subInsOrderId) };


  protected:
    std::shared_ptr<string> outSubInsOrderId_ = nullptr;
    std::shared_ptr<string> policyNo_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> subInsOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
