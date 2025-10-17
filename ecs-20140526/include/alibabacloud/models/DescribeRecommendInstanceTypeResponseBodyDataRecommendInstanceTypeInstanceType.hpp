// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATARECOMMENDINSTANCETYPEINSTANCETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPERESPONSEBODYDATARECOMMENDINSTANCETYPEINSTANCETYPE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(Generation, generation_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(SupportIoOptimized, supportIoOptimized_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(Generation, generation_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(SupportIoOptimized, supportIoOptimized_);
    };
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType() = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType(const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType &) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType(DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType &&) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType() = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& operator=(const DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType &) = default ;
    DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& operator=(DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cores_ == nullptr
        && return this->generation_ == nullptr && return this->instanceType_ == nullptr && return this->instanceTypeFamily_ == nullptr && return this->memory_ == nullptr && return this->supportIoOptimized_ == nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // generation Field Functions 
    bool hasGeneration() const { return this->generation_ != nullptr;};
    void deleteGeneration() { this->generation_ = nullptr;};
    inline string generation() const { DARABONBA_PTR_GET_DEFAULT(generation_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& setGeneration(string generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // supportIoOptimized Field Functions 
    bool hasSupportIoOptimized() const { return this->supportIoOptimized_ != nullptr;};
    void deleteSupportIoOptimized() { this->supportIoOptimized_ = nullptr;};
    inline string supportIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(supportIoOptimized_, "") };
    inline DescribeRecommendInstanceTypeResponseBodyDataRecommendInstanceTypeInstanceType& setSupportIoOptimized(string supportIoOptimized) { DARABONBA_PTR_SET_VALUE(supportIoOptimized_, supportIoOptimized) };


  protected:
    // The number of vCPUs of the instance type.
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The generation of the instance family.
    std::shared_ptr<string> generation_ = nullptr;
    // The name of the instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The instance family.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The memory size of the instance type. Unit: MB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // Indicates whether the instance type supports I/O optimization.
    std::shared_ptr<string> supportIoOptimized_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
