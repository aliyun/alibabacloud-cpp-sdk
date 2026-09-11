// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSPECTYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSPECTYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Starrocks20221019
{
namespace Models
{
  class ModifySpecTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySpecTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(FastMode, fastMode_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_TO_JSON(TargetSpecType, targetSpecType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySpecTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(FastMode, fastMode_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(PromotionOptionNo, promotionOptionNo_);
      DARABONBA_PTR_FROM_JSON(TargetSpecType, targetSpecType_);
    };
    ModifySpecTypeRequest() = default ;
    ModifySpecTypeRequest(const ModifySpecTypeRequest &) = default ;
    ModifySpecTypeRequest(ModifySpecTypeRequest &&) = default ;
    ModifySpecTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySpecTypeRequest() = default ;
    ModifySpecTypeRequest& operator=(const ModifySpecTypeRequest &) = default ;
    ModifySpecTypeRequest& operator=(ModifySpecTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->fastMode_ == nullptr && this->instanceId_ == nullptr && this->nodeGroupId_ == nullptr && this->promotionOptionNo_ == nullptr && this->targetSpecType_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifySpecTypeRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // fastMode Field Functions 
    bool hasFastMode() const { return this->fastMode_ != nullptr;};
    void deleteFastMode() { this->fastMode_ = nullptr;};
    inline bool getFastMode() const { DARABONBA_PTR_GET_DEFAULT(fastMode_, false) };
    inline ModifySpecTypeRequest& setFastMode(bool fastMode) { DARABONBA_PTR_SET_VALUE(fastMode_, fastMode) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifySpecTypeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ModifySpecTypeRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // promotionOptionNo Field Functions 
    bool hasPromotionOptionNo() const { return this->promotionOptionNo_ != nullptr;};
    void deletePromotionOptionNo() { this->promotionOptionNo_ = nullptr;};
    inline string getPromotionOptionNo() const { DARABONBA_PTR_GET_DEFAULT(promotionOptionNo_, "") };
    inline ModifySpecTypeRequest& setPromotionOptionNo(string promotionOptionNo) { DARABONBA_PTR_SET_VALUE(promotionOptionNo_, promotionOptionNo) };


    // targetSpecType Field Functions 
    bool hasTargetSpecType() const { return this->targetSpecType_ != nullptr;};
    void deleteTargetSpecType() { this->targetSpecType_ = nullptr;};
    inline string getTargetSpecType() const { DARABONBA_PTR_GET_DEFAULT(targetSpecType_, "") };
    inline ModifySpecTypeRequest& setTargetSpecType(string targetSpecType) { DARABONBA_PTR_SET_VALUE(targetSpecType_, targetSpecType) };


  protected:
    // Specifies whether to automatically purchase (pay for) all products specified in the Products parameter.
    // - true: Automatic payment.
    // - false: No automatic payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to use the fast restart mode. Default value: false.
    // 
    // - true: Restarts compute nodes in fast restart mode. Compute nodes are restarted in multiple batches. Nodes within a batch are restarted in parallel, and batches execute sequentially.
    // - false: Restarts compute nodes in rolling restart mode.
    shared_ptr<bool> fastMode_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The compute group ID.
    // 
    // This parameter is required.
    shared_ptr<string> nodeGroupId_ {};
    // The coupon ID.
    shared_ptr<string> promotionOptionNo_ {};
    // The target specification type.
    // 
    // This parameter is required.
    shared_ptr<string> targetSpecType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Starrocks20221019
#endif
