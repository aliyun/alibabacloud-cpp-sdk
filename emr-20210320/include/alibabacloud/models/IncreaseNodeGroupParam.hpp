// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCREASENODEGROUPPARAM_HPP_
#define ALIBABACLOUD_MODELS_INCREASENODEGROUPPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class IncreaseNodeGroupParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncreaseNodeGroupParam& obj) { 
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, IncreaseNodeGroupParam& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    IncreaseNodeGroupParam() = default ;
    IncreaseNodeGroupParam(const IncreaseNodeGroupParam &) = default ;
    IncreaseNodeGroupParam(IncreaseNodeGroupParam &&) = default ;
    IncreaseNodeGroupParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncreaseNodeGroupParam() = default ;
    IncreaseNodeGroupParam& operator=(const IncreaseNodeGroupParam &) = default ;
    IncreaseNodeGroupParam& operator=(IncreaseNodeGroupParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeCount_ != nullptr
        && this->nodeGroupId_ != nullptr && this->paymentDuration_ != nullptr && this->paymentDurationUnit_ != nullptr && this->vSwitchId_ != nullptr; };
    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline IncreaseNodeGroupParam& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline IncreaseNodeGroupParam& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t paymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline IncreaseNodeGroupParam& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline IncreaseNodeGroupParam& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline IncreaseNodeGroupParam& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<int64_t> nodeCount_ = nullptr;
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    std::shared_ptr<int32_t> paymentDuration_ = nullptr;
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
