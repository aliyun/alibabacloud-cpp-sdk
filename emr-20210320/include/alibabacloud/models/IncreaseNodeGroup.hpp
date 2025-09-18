// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCREASENODEGROUP_HPP_
#define ALIBABACLOUD_MODELS_INCREASENODEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class IncreaseNodeGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncreaseNodeGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, IncreaseNodeGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    IncreaseNodeGroup() = default ;
    IncreaseNodeGroup(const IncreaseNodeGroup &) = default ;
    IncreaseNodeGroup(IncreaseNodeGroup &&) = default ;
    IncreaseNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncreaseNodeGroup() = default ;
    IncreaseNodeGroup& operator=(const IncreaseNodeGroup &) = default ;
    IncreaseNodeGroup& operator=(IncreaseNodeGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->nodeCount_ != nullptr && this->nodeGroupId_ != nullptr && this->paymentDuration_ != nullptr && this->paymentDurationUnit_ != nullptr && this->vSwitchId_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline IncreaseNodeGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int32_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
    inline IncreaseNodeGroup& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline IncreaseNodeGroup& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t paymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline IncreaseNodeGroup& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline IncreaseNodeGroup& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline IncreaseNodeGroup& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // 描述。
    std::shared_ptr<string> description_ = nullptr;
    // 节点数量。
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> nodeCount_ = nullptr;
    // 节点组ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // 付费时长。
    std::shared_ptr<int32_t> paymentDuration_ = nullptr;
    // 付费时长单位。
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    // 虚拟机交换机ID。
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
