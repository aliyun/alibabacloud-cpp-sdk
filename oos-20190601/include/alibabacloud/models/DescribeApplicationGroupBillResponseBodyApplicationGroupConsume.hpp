// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPBILLRESPONSEBODYAPPLICATIONGROUPCONSUME_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPBILLRESPONSEBODYAPPLICATIONGROUPCONSUME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DescribeApplicationGroupBillResponseBodyApplicationGroupConsume : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Currency, currency_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Optimization, optimization_);
      DARABONBA_PTR_TO_JSON(PeakType, peakType_);
      DARABONBA_PTR_TO_JSON(Performance, performance_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Currency, currency_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Optimization, optimization_);
      DARABONBA_PTR_FROM_JSON(PeakType, peakType_);
      DARABONBA_PTR_FROM_JSON(Performance, performance_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeApplicationGroupBillResponseBodyApplicationGroupConsume() = default ;
    DescribeApplicationGroupBillResponseBodyApplicationGroupConsume(const DescribeApplicationGroupBillResponseBodyApplicationGroupConsume &) = default ;
    DescribeApplicationGroupBillResponseBodyApplicationGroupConsume(DescribeApplicationGroupBillResponseBodyApplicationGroupConsume &&) = default ;
    DescribeApplicationGroupBillResponseBodyApplicationGroupConsume(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationGroupBillResponseBodyApplicationGroupConsume() = default ;
    DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& operator=(const DescribeApplicationGroupBillResponseBodyApplicationGroupConsume &) = default ;
    DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& operator=(DescribeApplicationGroupBillResponseBodyApplicationGroupConsume &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->creationTime_ == nullptr && return this->currency_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr
        && return this->optimization_ == nullptr && return this->peakType_ == nullptr && return this->performance_ == nullptr && return this->status_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline float amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0.0) };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setAmount(float amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // currency Field Functions 
    bool hasCurrency() const { return this->currency_ != nullptr;};
    void deleteCurrency() { this->currency_ = nullptr;};
    inline string currency() const { DARABONBA_PTR_GET_DEFAULT(currency_, "") };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setCurrency(string currency) { DARABONBA_PTR_SET_VALUE(currency_, currency) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // optimization Field Functions 
    bool hasOptimization() const { return this->optimization_ != nullptr;};
    void deleteOptimization() { this->optimization_ = nullptr;};
    inline string optimization() const { DARABONBA_PTR_GET_DEFAULT(optimization_, "") };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setOptimization(string optimization) { DARABONBA_PTR_SET_VALUE(optimization_, optimization) };


    // peakType Field Functions 
    bool hasPeakType() const { return this->peakType_ != nullptr;};
    void deletePeakType() { this->peakType_ = nullptr;};
    inline string peakType() const { DARABONBA_PTR_GET_DEFAULT(peakType_, "") };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setPeakType(string peakType) { DARABONBA_PTR_SET_VALUE(peakType_, peakType) };


    // performance Field Functions 
    bool hasPerformance() const { return this->performance_ != nullptr;};
    void deletePerformance() { this->performance_ = nullptr;};
    inline string performance() const { DARABONBA_PTR_GET_DEFAULT(performance_, "") };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setPerformance(string performance) { DARABONBA_PTR_SET_VALUE(performance_, performance) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApplicationGroupBillResponseBodyApplicationGroupConsume& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The amount consumed by the instance.
    std::shared_ptr<float> amount_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The currency unit.
    std::shared_ptr<string> currency_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // Optimization suggestions.
    std::shared_ptr<string> optimization_ = nullptr;
    // The peak type.
    std::shared_ptr<string> peakType_ = nullptr;
    // The performance of the data synchronization instance.
    std::shared_ptr<string> performance_ = nullptr;
    // The status of instance.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
