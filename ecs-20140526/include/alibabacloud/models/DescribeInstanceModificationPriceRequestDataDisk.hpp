// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICEREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEMODIFICATIONPRICEREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceModificationPriceRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceModificationPriceRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceModificationPriceRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribeInstanceModificationPriceRequestDataDisk() = default ;
    DescribeInstanceModificationPriceRequestDataDisk(const DescribeInstanceModificationPriceRequestDataDisk &) = default ;
    DescribeInstanceModificationPriceRequestDataDisk(DescribeInstanceModificationPriceRequestDataDisk &&) = default ;
    DescribeInstanceModificationPriceRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceModificationPriceRequestDataDisk() = default ;
    DescribeInstanceModificationPriceRequestDataDisk& operator=(const DescribeInstanceModificationPriceRequestDataDisk &) = default ;
    DescribeInstanceModificationPriceRequestDataDisk& operator=(DescribeInstanceModificationPriceRequestDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->category_ != nullptr
        && this->performanceLevel_ != nullptr && this->size_ != nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeInstanceModificationPriceRequestDataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribeInstanceModificationPriceRequestDataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeInstanceModificationPriceRequestDataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The category of data disk N. You can specify this parameter if you want to query the pricing information about newly attached subscription data disks. Valid values of N: 1 to 16. Valid values:
    // 
    // *   cloud_efficiency: utra disk.
    // *   cloud_ssd: standard SSD.
    // *   cloud_essd: ESSD.
    // *   cloud: basic disk.
    // 
    // This parameter is empty by default.
    // 
    // >  When you call the DescribeInstanceModificationPrice operation, you must specify at least one of the following parameters: `InstanceType` and `DataDisk.N.*`.
    std::shared_ptr<string> category_ = nullptr;
    // The performance level of data disk N that is an enhanced SSD (ESSD). The value of N must be the same as that in `DataDisk.N.Category` when DataDisk.N.Category is set to cloud_essd. Valid values:
    // 
    // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
    // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
    // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
    // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
    // 
    // Default value: PL1.
    // 
    // For more information about ESSD performance levels, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The capacity of data disk N. Valid values of N: 1 to 16. Unit: GiB. Valid values:
    // 
    // *   Valid values when DataDisk.N.Category is set to cloud_efficiency: 20 to 32768.
    // 
    // *   Valid values when DataDisk.N.Category is set to cloud_ssd: 20 to 32768.
    // 
    // *   Valid values when DataDisk.N.Category is set to cloud_essd: vary based on the `DataDisk.N.PerformanceLevel` value.
    // 
    //     *   Valid values when DataDisk.N.PerformanceLevel is set to PL0: 1 to 32768.
    //     *   Valid values when DataDisk.N.PerformanceLevel is set to PL1: 20 to 32768.
    //     *   Valid values when DataDisk.N.PerformanceLevel is set to PL2: 461 to 32768.
    //     *   Valid values when DataDisk.N.PerformanceLevel is set to PL3: 1261 to 32768.
    // 
    // *   Valid values when DataDisk.N.Category is set to cloud: 5 to 2000.
    // 
    // The default value is the minimum capacity allowed for the specified data disk category.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
