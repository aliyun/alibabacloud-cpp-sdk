// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSDISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSRESPONSEBODYDESKTOPSDISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsResponseBodyDesktopsDisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsResponseBodyDesktopsDisks& obj) { 
      DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsResponseBodyDesktopsDisks& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
    };
    DescribeDesktopsResponseBodyDesktopsDisks() = default ;
    DescribeDesktopsResponseBodyDesktopsDisks(const DescribeDesktopsResponseBodyDesktopsDisks &) = default ;
    DescribeDesktopsResponseBodyDesktopsDisks(DescribeDesktopsResponseBodyDesktopsDisks &&) = default ;
    DescribeDesktopsResponseBodyDesktopsDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsResponseBodyDesktopsDisks() = default ;
    DescribeDesktopsResponseBodyDesktopsDisks& operator=(const DescribeDesktopsResponseBodyDesktopsDisks &) = default ;
    DescribeDesktopsResponseBodyDesktopsDisks& operator=(DescribeDesktopsResponseBodyDesktopsDisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskCategory_ == nullptr
        && return this->diskId_ == nullptr && return this->diskSize_ == nullptr && return this->diskType_ == nullptr && return this->performanceLevel_ == nullptr; };
    // diskCategory Field Functions 
    bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
    void deleteDiskCategory() { this->diskCategory_ = nullptr;};
    inline string diskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
    inline DescribeDesktopsResponseBodyDesktopsDisks& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeDesktopsResponseBodyDesktopsDisks& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // diskSize Field Functions 
    bool hasDiskSize() const { return this->diskSize_ != nullptr;};
    void deleteDiskSize() { this->diskSize_ = nullptr;};
    inline int32_t diskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
    inline DescribeDesktopsResponseBodyDesktopsDisks& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeDesktopsResponseBodyDesktopsDisks& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeDesktopsResponseBodyDesktopsDisks& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


  protected:
    // The type of the disk. Valid values:
    // 
    // *   cloud_efficiency: ultra disk.
    // *   cloud_auto: standard SSD.
    // *   cloud_essd: enhanced SSD (ESSD).
    std::shared_ptr<string> diskCategory_ = nullptr;
    // The disk ID.
    std::shared_ptr<string> diskId_ = nullptr;
    // The disk size. Unit: GiB.
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
    // The performance level (PL) of the disk when an enterprise SSD (ESSD) is used.
    // 
    // For more information about the differences among enterprise SSDs (ESSDs) at different PLs, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    // 
    // Valid values:
    // 
    // *   PL1
    // *   PL0
    // *   PL3
    // *   PL2
    std::shared_ptr<string> performanceLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
