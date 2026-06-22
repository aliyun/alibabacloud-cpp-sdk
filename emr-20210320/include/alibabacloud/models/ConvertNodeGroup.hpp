// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTNODEGROUP_HPP_
#define ALIBABACLOUD_MODELS_CONVERTNODEGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ConvertNodeGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertNodeGroup& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertNodeGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
    };
    ConvertNodeGroup() = default ;
    ConvertNodeGroup(const ConvertNodeGroup &) = default ;
    ConvertNodeGroup(ConvertNodeGroup &&) = default ;
    ConvertNodeGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertNodeGroup() = default ;
    ConvertNodeGroup& operator=(const ConvertNodeGroup &) = default ;
    ConvertNodeGroup& operator=(ConvertNodeGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nodeGroupId_ == nullptr
        && this->paymentDuration_ == nullptr && this->paymentDurationUnit_ == nullptr && this->paymentType_ == nullptr; };
    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string getNodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ConvertNodeGroup& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int32_t getPaymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0) };
    inline ConvertNodeGroup& setPaymentDuration(int32_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string getPaymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline ConvertNodeGroup& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ConvertNodeGroup& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


  protected:
    // 节点组ID。
    shared_ptr<string> nodeGroupId_ {};
    // 付费时长。
    shared_ptr<int32_t> paymentDuration_ {};
    // 付费时长单位。
    shared_ptr<string> paymentDurationUnit_ {};
    // 付费类型。
    shared_ptr<string> paymentType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
