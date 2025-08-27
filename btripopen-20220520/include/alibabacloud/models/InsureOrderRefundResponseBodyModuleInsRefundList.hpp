// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSUREORDERREFUNDRESPONSEBODYMODULEINSREFUNDLIST_HPP_
#define ALIBABACLOUD_MODELS_INSUREORDERREFUNDRESPONSEBODYMODULEINSREFUNDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class InsureOrderRefundResponseBodyModuleInsRefundList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsureOrderRefundResponseBodyModuleInsRefundList& obj) { 
      DARABONBA_PTR_TO_JSON(policy_refund_no, policyRefundNo_);
      DARABONBA_PTR_TO_JSON(refund_status, refundStatus_);
      DARABONBA_PTR_TO_JSON(sub_ins_order_id, subInsOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, InsureOrderRefundResponseBodyModuleInsRefundList& obj) { 
      DARABONBA_PTR_FROM_JSON(policy_refund_no, policyRefundNo_);
      DARABONBA_PTR_FROM_JSON(refund_status, refundStatus_);
      DARABONBA_PTR_FROM_JSON(sub_ins_order_id, subInsOrderId_);
    };
    InsureOrderRefundResponseBodyModuleInsRefundList() = default ;
    InsureOrderRefundResponseBodyModuleInsRefundList(const InsureOrderRefundResponseBodyModuleInsRefundList &) = default ;
    InsureOrderRefundResponseBodyModuleInsRefundList(InsureOrderRefundResponseBodyModuleInsRefundList &&) = default ;
    InsureOrderRefundResponseBodyModuleInsRefundList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsureOrderRefundResponseBodyModuleInsRefundList() = default ;
    InsureOrderRefundResponseBodyModuleInsRefundList& operator=(const InsureOrderRefundResponseBodyModuleInsRefundList &) = default ;
    InsureOrderRefundResponseBodyModuleInsRefundList& operator=(InsureOrderRefundResponseBodyModuleInsRefundList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyRefundNo_ != nullptr
        && this->refundStatus_ != nullptr && this->subInsOrderId_ != nullptr; };
    // policyRefundNo Field Functions 
    bool hasPolicyRefundNo() const { return this->policyRefundNo_ != nullptr;};
    void deletePolicyRefundNo() { this->policyRefundNo_ = nullptr;};
    inline string policyRefundNo() const { DARABONBA_PTR_GET_DEFAULT(policyRefundNo_, "") };
    inline InsureOrderRefundResponseBodyModuleInsRefundList& setPolicyRefundNo(string policyRefundNo) { DARABONBA_PTR_SET_VALUE(policyRefundNo_, policyRefundNo) };


    // refundStatus Field Functions 
    bool hasRefundStatus() const { return this->refundStatus_ != nullptr;};
    void deleteRefundStatus() { this->refundStatus_ = nullptr;};
    inline string refundStatus() const { DARABONBA_PTR_GET_DEFAULT(refundStatus_, "") };
    inline InsureOrderRefundResponseBodyModuleInsRefundList& setRefundStatus(string refundStatus) { DARABONBA_PTR_SET_VALUE(refundStatus_, refundStatus) };


    // subInsOrderId Field Functions 
    bool hasSubInsOrderId() const { return this->subInsOrderId_ != nullptr;};
    void deleteSubInsOrderId() { this->subInsOrderId_ = nullptr;};
    inline string subInsOrderId() const { DARABONBA_PTR_GET_DEFAULT(subInsOrderId_, "") };
    inline InsureOrderRefundResponseBodyModuleInsRefundList& setSubInsOrderId(string subInsOrderId) { DARABONBA_PTR_SET_VALUE(subInsOrderId_, subInsOrderId) };


  protected:
    std::shared_ptr<string> policyRefundNo_ = nullptr;
    std::shared_ptr<string> refundStatus_ = nullptr;
    std::shared_ptr<string> subInsOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
