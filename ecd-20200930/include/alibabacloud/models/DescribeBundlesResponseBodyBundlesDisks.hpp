// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODYBUNDLESDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBUNDLESRESPONSEBODYBUNDLESDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeBundlesResponseBodyBundlesDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBundlesResponseBodyBundlesDisks& obj) { 
      DARABONBA_PTR_TO_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBundlesResponseBodyBundlesDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskPerformanceLevel, diskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
    };
    DescribeBundlesResponseBodyBundlesDisks() = default ;
    DescribeBundlesResponseBodyBundlesDisks(const DescribeBundlesResponseBodyBundlesDisks &) = default ;
    DescribeBundlesResponseBodyBundlesDisks(DescribeBundlesResponseBodyBundlesDisks &&) = default ;
    DescribeBundlesResponseBodyBundlesDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBundlesResponseBodyBundlesDisks() = default ;
    DescribeBundlesResponseBodyBundlesDisks& operator=(const DescribeBundlesResponseBodyBundlesDisks &) = default ;
    DescribeBundlesResponseBodyBundlesDisks& operator=(DescribeBundlesResponseBodyBundlesDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskPerformanceLevel_ != nullptr
        && this->diskSize_ != nullptr && this->diskType_ != nullptr; };
    // diskPerformanceLevel Field Functions 
    bool hasDiskPerformanceLevel() const { return this->diskPerformanceLevel_ != nullptr;};
    void deleteDiskPerformanceLevel() { this->diskPerformanceLevel_ = nullptr;};
    inline string diskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(diskPerformanceLevel_, "") };
    inline DescribeBundlesResponseBodyBundlesDisks& setDiskPerformanceLevel(string diskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(diskPerformanceLevel_, diskPerformanceLevel) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline DescribeBundlesResponseBodyBundlesDisks& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeBundlesResponseBodyBundlesDisks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


  protected:
    // The PL of the disk.
    // 
    // Valid values:
    // 
    // *   PL1
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PL0
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PL3
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   PL2
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> diskPerformanceLevel_ = nullptr;
    // The size of the disk. Unit: GiB.
    std::shared_ptr<int32_t> diskSize_ = nullptr;
    // The type of the disk.
    // 
    // Valid values:
    // 
    // *   SYSTEM: system disk
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   DATA: data disk
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> diskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
