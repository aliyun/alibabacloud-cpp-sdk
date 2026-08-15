// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEGROUPSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEGROUPSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ModifyInstanceGroupSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceGroupSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_TO_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceGroupSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupIds, instanceGroupIds_);
      DARABONBA_PTR_FROM_JSON(InstanceGroupSpec, instanceGroupSpec_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
    };
    ModifyInstanceGroupSpecRequest() = default ;
    ModifyInstanceGroupSpecRequest(const ModifyInstanceGroupSpecRequest &) = default ;
    ModifyInstanceGroupSpecRequest(ModifyInstanceGroupSpecRequest &&) = default ;
    ModifyInstanceGroupSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceGroupSpecRequest() = default ;
    ModifyInstanceGroupSpecRequest& operator=(const ModifyInstanceGroupSpecRequest &) = default ;
    ModifyInstanceGroupSpecRequest& operator=(ModifyInstanceGroupSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->instanceGroupIds_ == nullptr && this->instanceGroupSpec_ == nullptr && this->promotionId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyInstanceGroupSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // instanceGroupIds Field Functions 
    bool hasInstanceGroupIds() const { return this->instanceGroupIds_ != nullptr;};
    void deleteInstanceGroupIds() { this->instanceGroupIds_ = nullptr;};
    inline const vector<string> & getInstanceGroupIds() const { DARABONBA_PTR_GET_CONST(instanceGroupIds_, vector<string>) };
    inline vector<string> getInstanceGroupIds() { DARABONBA_PTR_GET(instanceGroupIds_, vector<string>) };
    inline ModifyInstanceGroupSpecRequest& setInstanceGroupIds(const vector<string> & instanceGroupIds) { DARABONBA_PTR_SET_VALUE(instanceGroupIds_, instanceGroupIds) };
    inline ModifyInstanceGroupSpecRequest& setInstanceGroupIds(vector<string> && instanceGroupIds) { DARABONBA_PTR_SET_RVALUE(instanceGroupIds_, instanceGroupIds) };


    // instanceGroupSpec Field Functions 
    bool hasInstanceGroupSpec() const { return this->instanceGroupSpec_ != nullptr;};
    void deleteInstanceGroupSpec() { this->instanceGroupSpec_ = nullptr;};
    inline string getInstanceGroupSpec() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupSpec_, "") };
    inline ModifyInstanceGroupSpecRequest& setInstanceGroupSpec(string instanceGroupSpec) { DARABONBA_PTR_SET_VALUE(instanceGroupSpec_, instanceGroupSpec) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ModifyInstanceGroupSpecRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


  protected:
    // Specifies whether to enable automatic payment. Valid values:
    // 
    // - **true**: Automatic payment is enabled. Make sure that your account balance is sufficient.
    // - **false** (default): Only generates an order without deducting fees.
    // 
    // 
    // 
    // 
    // > If your payment method balance is insufficient, set this parameter to false. An unpaid order is generated, and you can log on to the Cloud Phone console to complete the payment.
    // >
    shared_ptr<bool> autoPay_ {};
    // The list of instance group IDs.
    shared_ptr<vector<string>> instanceGroupIds_ {};
    // The instance group specification. You can call [DescribeSpec](~~DescribeSpec~~) to query the specifications available for purchase for cloud phones.
    // 
    // This parameter is required.
    shared_ptr<string> instanceGroupSpec_ {};
    // The promotion ID.
    shared_ptr<string> promotionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
