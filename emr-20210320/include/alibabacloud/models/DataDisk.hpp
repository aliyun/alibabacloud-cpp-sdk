// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATADISK_HPP_
#define ALIBABACLOUD_MODELS_DATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DataDisk() = default ;
    DataDisk(const DataDisk &) = default ;
    DataDisk(DataDisk &&) = default ;
    DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataDisk() = default ;
    DataDisk& operator=(const DataDisk &) = default ;
    DataDisk& operator=(DataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->count_ == nullptr && this->performanceLevel_ == nullptr && this->size_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DataDisk& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The disk type. Valid values:
    // 
    // - `cloud_efficiency`: Ultra Disk.
    // 
    // - `cloud_ssd`: Standard SSD.
    // 
    // - `cloud_essd`: ESSD.
    // 
    // - `cloud`: Basic Disk.
    // 
    // This parameter is required.
    shared_ptr<string> category_ {};
    // The number of data disks.
    shared_ptr<int32_t> count_ {};
    // The performance level of an ESSD. This parameter applies only when the `Category` parameter is set to `cloud_essd`. Valid values:
    // 
    // - PL0: A maximum of 10,000 random read/write IOPS per disk.
    // 
    // - PL1: A maximum of 50,000 random read/write IOPS per disk.
    // 
    // - PL2: A maximum of 100,000 random read/write IOPS per disk.
    // 
    // - PL3: A maximum of 1,000,000 random read/write IOPS per disk.
    // 
    // Default value: PL1.
    shared_ptr<string> performanceLevel_ {};
    // The size of each data disk, in GB.
    // 
    // This parameter is required.
    shared_ptr<int32_t> size_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
