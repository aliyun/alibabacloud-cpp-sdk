// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTSYSTEMDISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTSYSTEMDISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceRequestSystemDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequestSystemDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequestSystemDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    DescribePriceRequestSystemDisk() = default ;
    DescribePriceRequestSystemDisk(const DescribePriceRequestSystemDisk &) = default ;
    DescribePriceRequestSystemDisk(DescribePriceRequestSystemDisk &&) = default ;
    DescribePriceRequestSystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequestSystemDisk() = default ;
    DescribePriceRequestSystemDisk& operator=(const DescribePriceRequestSystemDisk &) = default ;
    DescribePriceRequestSystemDisk& operator=(DescribePriceRequestSystemDisk &&) = default ;
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
    inline DescribePriceRequestSystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribePriceRequestSystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribePriceRequestSystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    // The category of the system disk. Valid values:
    // 
    // *   cloud: basic disk
    // *   cloud_efficiency: ultra disk
    // *   cloud_ssd: standard SSD
    // *   ephemeral_ssd: local SSD
    // *   cloud_essd: Enterprise SSD (ESSD)
    // *   cloud_auto: ESSD AutoPL disk
    // 
    // Default value:
    // 
    // *   When InstanceType is set to a retired instance type and `IoOptimized` is set to `none`, the default value is `cloud`.
    // *   In other cases, the default value is `cloud_efficiency`.
    // 
    // >  If you want to query the price of a system disk, you must also specify `ImageId`.
    std::shared_ptr<string> category_ = nullptr;
    // The performance level of the system disk when the disk is an ESSD. This parameter is valid only when `SystemDiskCategory` is set to cloud_essd. Valid values:
    // 
    // PL0, PL1 (default), PL2, PL3.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The size of the system disk. Unit: GiB. Valid values:
    // 
    // *   Basic disk (cloud): 20 to 500.
    // 
    // *   ESSD (cloud_essd): Valid values vary based on the SystemDisk.PerformanceLevel value.
    // 
    //     *   Valid values when SystemDisk.PerformanceLevel is set to PL0: 1 to 2048.
    //     *   Valid values when SystemDisk.PerformanceLevel is set to PL1: 20 to 2048.
    //     *   Valid values when SystemDisk.PerformanceLevel is set to PL2: 461 to 2048.
    //     *   Valid values when SystemDisk.PerformanceLevel is set to PL3: 1261 to 2048.
    // 
    // *   ESSD AutoPL disk (cloud_auto): 1 to 2048.
    // 
    // *   Other disk categories: 20 to 2048.
    // 
    // Default value: 20 or the size of the image specified by ImageId, whichever is greater.
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
