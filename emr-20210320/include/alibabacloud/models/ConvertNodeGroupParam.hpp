// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTNODEGROUPPARAM_HPP_
#define ALIBABACLOUD_MODELS_CONVERTNODEGROUPPARAM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ConvertNodeGroupParam : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertNodeGroupParam& obj) { 
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertNodeGroupParam& obj) { 
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
    };
    ConvertNodeGroupParam() = default ;
    ConvertNodeGroupParam(const ConvertNodeGroupParam &) = default ;
    ConvertNodeGroupParam(ConvertNodeGroupParam &&) = default ;
    ConvertNodeGroupParam(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertNodeGroupParam() = default ;
    ConvertNodeGroupParam& operator=(const ConvertNodeGroupParam &) = default ;
    ConvertNodeGroupParam& operator=(ConvertNodeGroupParam &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nodeGroupId_ != nullptr
        && this->paymentDuration_ != nullptr && this->paymentDurationUnit_ != nullptr && this->paymentType_ != nullptr; };
    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ConvertNodeGroupParam& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline int64_t paymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, 0L) };
    inline ConvertNodeGroupParam& setPaymentDuration(int64_t paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline ConvertNodeGroupParam& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ConvertNodeGroupParam& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> paymentDuration_ = nullptr;
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> paymentType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
