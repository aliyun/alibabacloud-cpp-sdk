// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODYBUNDLESDESKTOPTYPEATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODYBUNDLESDESKTOPTYPEATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeBundlesResponseBodyBundlesDesktopTypeAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBundlesResponseBodyBundlesDesktopTypeAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBundlesResponseBodyBundlesDesktopTypeAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuCount, gpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
    };
    DescribeBundlesResponseBodyBundlesDesktopTypeAttribute() = default ;
    DescribeBundlesResponseBodyBundlesDesktopTypeAttribute(const DescribeBundlesResponseBodyBundlesDesktopTypeAttribute &) = default ;
    DescribeBundlesResponseBodyBundlesDesktopTypeAttribute(DescribeBundlesResponseBodyBundlesDesktopTypeAttribute &&) = default ;
    DescribeBundlesResponseBodyBundlesDesktopTypeAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBundlesResponseBodyBundlesDesktopTypeAttribute() = default ;
    DescribeBundlesResponseBodyBundlesDesktopTypeAttribute& operator=(const DescribeBundlesResponseBodyBundlesDesktopTypeAttribute &) = default ;
    DescribeBundlesResponseBodyBundlesDesktopTypeAttribute& operator=(DescribeBundlesResponseBodyBundlesDesktopTypeAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCount_ == nullptr
        && return this->gpuCount_ == nullptr && return this->gpuSpec_ == nullptr && return this->memorySize_ == nullptr; };
    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t cpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline DescribeBundlesResponseBodyBundlesDesktopTypeAttribute& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // gpuCount Field Functions 
    bool hasGpuCount() const { return this->gpuCount_ != nullptr;};
    void deleteGpuCount() { this->gpuCount_ = nullptr;};
    inline float gpuCount() const { DARABONBA_PTR_GET_DEFAULT(gpuCount_, 0.0) };
    inline DescribeBundlesResponseBodyBundlesDesktopTypeAttribute& setGpuCount(float gpuCount) { DARABONBA_PTR_SET_VALUE(gpuCount_, gpuCount) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline string gpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
    inline DescribeBundlesResponseBodyBundlesDesktopTypeAttribute& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int32_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0) };
    inline DescribeBundlesResponseBodyBundlesDesktopTypeAttribute& setMemorySize(int32_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


  protected:
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpuCount_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<float> gpuCount_ = nullptr;
    // The GPU type.
    std::shared_ptr<string> gpuSpec_ = nullptr;
    // The memory size. Unit: MiB.
    std::shared_ptr<int32_t> memorySize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
