// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLRESPONSEBODYNODEPOOLLISTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCNODEPOOLRESPONSEBODYNODEPOOLLISTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCNodePoolResponseBodyNodePoolListSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCNodePoolResponseBodyNodePoolListSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCNodePoolResponseBodyNodePoolListSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeRCNodePoolResponseBodyNodePoolListSystemDisk() = default ;
    DescribeRCNodePoolResponseBodyNodePoolListSystemDisk(const DescribeRCNodePoolResponseBodyNodePoolListSystemDisk &) = default ;
    DescribeRCNodePoolResponseBodyNodePoolListSystemDisk(DescribeRCNodePoolResponseBodyNodePoolListSystemDisk &&) = default ;
    DescribeRCNodePoolResponseBodyNodePoolListSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCNodePoolResponseBodyNodePoolListSystemDisk() = default ;
    DescribeRCNodePoolResponseBodyNodePoolListSystemDisk& operator=(const DescribeRCNodePoolResponseBodyNodePoolListSystemDisk &) = default ;
    DescribeRCNodePoolResponseBodyNodePoolListSystemDisk& operator=(DescribeRCNodePoolResponseBodyNodePoolListSystemDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->performanceLevel_ == nullptr && return this->size_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolListSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeRCNodePoolResponseBodyNodePoolListSystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeRCNodePoolResponseBodyNodePoolListSystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The type of the system disk. Set the value to **cloud_essd**, which indicates ESSDs.
    std::shared_ptr<string> category_ = nullptr;
    // The performance level of the ESSD. Valid values:
    // 
    // *   **PL0**: A single ESSD delivers up to 10,000 random read/write IOPS.
    // *   **PL1**: A single ESSD delivers up to 50,000 random read/write IOPS.
    // *   **PL2**: A single ESSD delivers up to 100,000 random read/write IOPS.
    // *   **PL3**: A single ESSD delivers up to 1,000,000 random read/write IOPS.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The size of the system disk. Unit: GiB.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
