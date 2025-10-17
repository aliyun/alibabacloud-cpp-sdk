// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTDATADISK_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRICEREQUESTDATADISK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribePriceRequestDataDisk : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePriceRequestDataDisk& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePriceRequestDataDisk& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
    };
    DescribePriceRequestDataDisk() = default ;
    DescribePriceRequestDataDisk(const DescribePriceRequestDataDisk &) = default ;
    DescribePriceRequestDataDisk(DescribePriceRequestDataDisk &&) = default ;
    DescribePriceRequestDataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePriceRequestDataDisk() = default ;
    DescribePriceRequestDataDisk& operator=(const DescribePriceRequestDataDisk &) = default ;
    DescribePriceRequestDataDisk& operator=(DescribePriceRequestDataDisk &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->performanceLevel_ == nullptr && return this->size_ == nullptr && return this->provisionedIops_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribePriceRequestDataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // performanceLevel Field Functions 
    bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
    void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
    inline string performanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
    inline DescribePriceRequestDataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline DescribePriceRequestDataDisk& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // provisionedIops Field Functions 
    bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
    void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
    inline int64_t provisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
    inline DescribePriceRequestDataDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


  protected:
    // The category of data disk N. Valid values:
    // 
    // *   cloud: basic disk.
    // *   cloud_efficiency: ultra disk.
    // *   cloud_ssd: standard SSD.
    // *   ephemeral_ssd: local SSD.
    // *   cloud_essd: ESSD.
    // *   cloud_auto: ESSD AutoPL disk.
    // 
    // Valid values of N: 1 to 16.
    std::shared_ptr<string> category_ = nullptr;
    // The performance level of data disk N when the disk is an ESSD. This parameter takes effect only when `DataDisk.N.Category` is set to cloud_essd. Valid values:
    // 
    // *   PL0
    // *   PL1 (default)
    // *   PL2
    // *   PL3
    // 
    // Valid values of N: 1 to 16.
    std::shared_ptr<string> performanceLevel_ = nullptr;
    // The size of data disk N. Unit: GiB. Valid values:
    // 
    // *   Valid values if DataDisk.N.Category is set to cloud: 5 to 2000.
    // 
    // *   Valid values if DataDisk.N.Category is set to cloud_efficiency: 20 to 32768.
    // 
    // *   Valid values if DataDisk.N.Category is set to cloud_ssd: 20 to 32768.
    // 
    // *   Valid values if DataDisk.N.Category is set to cloud_auto: 1 to 32768.
    // 
    // *   Valid values if DataDisk.N.Category is set to cloud_essd: vary based on the `DataDisk.N.PerformanceLevel` value.
    // 
    //     *   Valid values if DataDisk.N.PerformanceLevel is set to PL0: 1 to 32768.
    //     *   Valid values if DataDisk.N.PerformanceLevel is set to PL1: 20 to 32768.
    //     *   Valid values if DataDisk.N.PerformanceLevel is set to PL2: 461 to 32768.
    //     *   Valid values if DataDisk.N.PerformanceLevel is set to PL3: 1261 to 32768.
    // 
    // *   Valid values if DataDisk.N.Category is set to ephemeral_ssd: 5 to 800.
    // 
    // Valid values of N: 1 to 16.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The provisioned read/write IOPS of the ESSD AutoPL disk to use as data disk N. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
    // 
    // Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
    // 
    // >  This parameter is available only if you set `DataDisk.N.Category` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
    std::shared_ptr<int64_t> provisionedIops_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
