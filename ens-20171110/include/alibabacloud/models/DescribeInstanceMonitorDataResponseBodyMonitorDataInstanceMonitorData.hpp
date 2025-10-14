// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODYMONITORDATAINSTANCEMONITORDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMONITORDATARESPONSEBODYMONITORDATAINSTANCEMONITORDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& obj) { 
      DARABONBA_PTR_TO_JSON(CPU, CPU_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& obj) { 
      DARABONBA_PTR_FROM_JSON(CPU, CPU_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
    };
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData() = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData(const DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData &) = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData(DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData &&) = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData() = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& operator=(const DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData &) = default ;
    DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& operator=(DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CPU_ == nullptr
        && return this->instanceId_ == nullptr && return this->memory_ == nullptr; };
    // CPU Field Functions 
    bool hasCPU() const { return this->CPU_ != nullptr;};
    void deleteCPU() { this->CPU_ = nullptr;};
    inline string CPU() const { DARABONBA_PTR_GET_DEFAULT(CPU_, "") };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setCPU(string CPU) { DARABONBA_PTR_SET_VALUE(CPU_, CPU) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline DescribeInstanceMonitorDataResponseBodyMonitorDataInstanceMonitorData& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


  protected:
    // The vCPU usage of the instance, which is raw data. For example, a value of 0.02 indicates that the usage is 2%.
    std::shared_ptr<string> CPU_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is not yet supported.
    std::shared_ptr<string> memory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
