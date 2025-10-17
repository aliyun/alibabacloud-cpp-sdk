// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEFEATURES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESRESPONSEBODYIMAGESIMAGEFEATURES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagesResponseBodyImagesImageFeatures : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagesResponseBodyImagesImageFeatures& obj) { 
      DARABONBA_PTR_TO_JSON(CpuOnlineDowngrade, cpuOnlineDowngrade_);
      DARABONBA_PTR_TO_JSON(CpuOnlineUpgrade, cpuOnlineUpgrade_);
      DARABONBA_PTR_TO_JSON(ImdsSupport, imdsSupport_);
      DARABONBA_PTR_TO_JSON(MemoryOnlineDowngrade, memoryOnlineDowngrade_);
      DARABONBA_PTR_TO_JSON(MemoryOnlineUpgrade, memoryOnlineUpgrade_);
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagesResponseBodyImagesImageFeatures& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuOnlineDowngrade, cpuOnlineDowngrade_);
      DARABONBA_PTR_FROM_JSON(CpuOnlineUpgrade, cpuOnlineUpgrade_);
      DARABONBA_PTR_FROM_JSON(ImdsSupport, imdsSupport_);
      DARABONBA_PTR_FROM_JSON(MemoryOnlineDowngrade, memoryOnlineDowngrade_);
      DARABONBA_PTR_FROM_JSON(MemoryOnlineUpgrade, memoryOnlineUpgrade_);
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
    };
    DescribeImagesResponseBodyImagesImageFeatures() = default ;
    DescribeImagesResponseBodyImagesImageFeatures(const DescribeImagesResponseBodyImagesImageFeatures &) = default ;
    DescribeImagesResponseBodyImagesImageFeatures(DescribeImagesResponseBodyImagesImageFeatures &&) = default ;
    DescribeImagesResponseBodyImagesImageFeatures(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagesResponseBodyImagesImageFeatures() = default ;
    DescribeImagesResponseBodyImagesImageFeatures& operator=(const DescribeImagesResponseBodyImagesImageFeatures &) = default ;
    DescribeImagesResponseBodyImagesImageFeatures& operator=(DescribeImagesResponseBodyImagesImageFeatures &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuOnlineDowngrade_ == nullptr
        && return this->cpuOnlineUpgrade_ == nullptr && return this->imdsSupport_ == nullptr && return this->memoryOnlineDowngrade_ == nullptr && return this->memoryOnlineUpgrade_ == nullptr && return this->nvmeSupport_ == nullptr; };
    // cpuOnlineDowngrade Field Functions 
    bool hasCpuOnlineDowngrade() const { return this->cpuOnlineDowngrade_ != nullptr;};
    void deleteCpuOnlineDowngrade() { this->cpuOnlineDowngrade_ = nullptr;};
    inline string cpuOnlineDowngrade() const { DARABONBA_PTR_GET_DEFAULT(cpuOnlineDowngrade_, "") };
    inline DescribeImagesResponseBodyImagesImageFeatures& setCpuOnlineDowngrade(string cpuOnlineDowngrade) { DARABONBA_PTR_SET_VALUE(cpuOnlineDowngrade_, cpuOnlineDowngrade) };


    // cpuOnlineUpgrade Field Functions 
    bool hasCpuOnlineUpgrade() const { return this->cpuOnlineUpgrade_ != nullptr;};
    void deleteCpuOnlineUpgrade() { this->cpuOnlineUpgrade_ = nullptr;};
    inline string cpuOnlineUpgrade() const { DARABONBA_PTR_GET_DEFAULT(cpuOnlineUpgrade_, "") };
    inline DescribeImagesResponseBodyImagesImageFeatures& setCpuOnlineUpgrade(string cpuOnlineUpgrade) { DARABONBA_PTR_SET_VALUE(cpuOnlineUpgrade_, cpuOnlineUpgrade) };


    // imdsSupport Field Functions 
    bool hasImdsSupport() const { return this->imdsSupport_ != nullptr;};
    void deleteImdsSupport() { this->imdsSupport_ = nullptr;};
    inline string imdsSupport() const { DARABONBA_PTR_GET_DEFAULT(imdsSupport_, "") };
    inline DescribeImagesResponseBodyImagesImageFeatures& setImdsSupport(string imdsSupport) { DARABONBA_PTR_SET_VALUE(imdsSupport_, imdsSupport) };


    // memoryOnlineDowngrade Field Functions 
    bool hasMemoryOnlineDowngrade() const { return this->memoryOnlineDowngrade_ != nullptr;};
    void deleteMemoryOnlineDowngrade() { this->memoryOnlineDowngrade_ = nullptr;};
    inline string memoryOnlineDowngrade() const { DARABONBA_PTR_GET_DEFAULT(memoryOnlineDowngrade_, "") };
    inline DescribeImagesResponseBodyImagesImageFeatures& setMemoryOnlineDowngrade(string memoryOnlineDowngrade) { DARABONBA_PTR_SET_VALUE(memoryOnlineDowngrade_, memoryOnlineDowngrade) };


    // memoryOnlineUpgrade Field Functions 
    bool hasMemoryOnlineUpgrade() const { return this->memoryOnlineUpgrade_ != nullptr;};
    void deleteMemoryOnlineUpgrade() { this->memoryOnlineUpgrade_ = nullptr;};
    inline string memoryOnlineUpgrade() const { DARABONBA_PTR_GET_DEFAULT(memoryOnlineUpgrade_, "") };
    inline DescribeImagesResponseBodyImagesImageFeatures& setMemoryOnlineUpgrade(string memoryOnlineUpgrade) { DARABONBA_PTR_SET_VALUE(memoryOnlineUpgrade_, memoryOnlineUpgrade) };


    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string nvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline DescribeImagesResponseBodyImagesImageFeatures& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


  protected:
    std::shared_ptr<string> cpuOnlineDowngrade_ = nullptr;
    std::shared_ptr<string> cpuOnlineUpgrade_ = nullptr;
    // The image metadata access mode. Valid values:
    // 
    // *   v1: You cannot set the image metadata access mode to security hardening when you create instances from the image.
    // *   v2: You can set the image metadata access mode to security hardening when you create instances from the image.
    // 
    // [Overview of instance metadata](https://help.aliyun.com/document_detail/108460.html).
    std::shared_ptr<string> imdsSupport_ = nullptr;
    std::shared_ptr<string> memoryOnlineDowngrade_ = nullptr;
    std::shared_ptr<string> memoryOnlineUpgrade_ = nullptr;
    // Indicates whether the image supports the Non-Volatile Memory Express (NVMe) protocol. Valid values:
    // 
    // *   supported: The image supports the NVMe protocol. Instances created from the image also support the NVMe protocol.
    // *   unsupported: The image does not support the NVMe protocol. Instances created from the image do not support the NVMe protocol.
    std::shared_ptr<string> nvmeSupport_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
