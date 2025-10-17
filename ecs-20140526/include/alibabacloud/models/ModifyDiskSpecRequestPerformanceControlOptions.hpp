// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISKSPECREQUESTPERFORMANCECONTROLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISKSPECREQUESTPERFORMANCECONTROLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyDiskSpecRequestPerformanceControlOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDiskSpecRequestPerformanceControlOptions& obj) { 
      DARABONBA_PTR_TO_JSON(IOPS, IOPS_);
      DARABONBA_PTR_TO_JSON(Recover, recover_);
      DARABONBA_PTR_TO_JSON(Throughput, throughput_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDiskSpecRequestPerformanceControlOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(IOPS, IOPS_);
      DARABONBA_PTR_FROM_JSON(Recover, recover_);
      DARABONBA_PTR_FROM_JSON(Throughput, throughput_);
    };
    ModifyDiskSpecRequestPerformanceControlOptions() = default ;
    ModifyDiskSpecRequestPerformanceControlOptions(const ModifyDiskSpecRequestPerformanceControlOptions &) = default ;
    ModifyDiskSpecRequestPerformanceControlOptions(ModifyDiskSpecRequestPerformanceControlOptions &&) = default ;
    ModifyDiskSpecRequestPerformanceControlOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDiskSpecRequestPerformanceControlOptions() = default ;
    ModifyDiskSpecRequestPerformanceControlOptions& operator=(const ModifyDiskSpecRequestPerformanceControlOptions &) = default ;
    ModifyDiskSpecRequestPerformanceControlOptions& operator=(ModifyDiskSpecRequestPerformanceControlOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IOPS_ == nullptr
        && return this->recover_ == nullptr && return this->throughput_ == nullptr; };
    // IOPS Field Functions 
    bool hasIOPS() const { return this->IOPS_ != nullptr;};
    void deleteIOPS() { this->IOPS_ = nullptr;};
    inline int32_t IOPS() const { DARABONBA_PTR_GET_DEFAULT(IOPS_, 0) };
    inline ModifyDiskSpecRequestPerformanceControlOptions& setIOPS(int32_t IOPS) { DARABONBA_PTR_SET_VALUE(IOPS_, IOPS) };


    // recover Field Functions 
    bool hasRecover() const { return this->recover_ != nullptr;};
    void deleteRecover() { this->recover_ = nullptr;};
    inline string recover() const { DARABONBA_PTR_GET_DEFAULT(recover_, "") };
    inline ModifyDiskSpecRequestPerformanceControlOptions& setRecover(string recover) { DARABONBA_PTR_SET_VALUE(recover_, recover) };


    // throughput Field Functions 
    bool hasThroughput() const { return this->throughput_ != nullptr;};
    void deleteThroughput() { this->throughput_ = nullptr;};
    inline int32_t throughput() const { DARABONBA_PTR_GET_DEFAULT(throughput_, 0) };
    inline ModifyDiskSpecRequestPerformanceControlOptions& setThroughput(int32_t throughput) { DARABONBA_PTR_SET_VALUE(throughput_, throughput) };


  protected:
    // The new IOPS rate of the cloud disk. You can modify the IOPS rate of only cloud disks in dedicated block storage clusters.
    // 
    // Valid values: 900 to maximum IOPS per disk (with an increment of 100).
    // 
    // For more information, see [Block storage performance](https://help.aliyun.com/document_detail/25382.html).
    std::shared_ptr<int32_t> IOPS_ = nullptr;
    // Specifies whether to reset the IOPS rate and throughput of the cloud disk. This parameter takes effect only when the cloud disk belongs to a dedicated block storage cluster.
    // 
    // After you specify this parameter, PerformanceControlOptions.IOPS and PerformanceControlOptions.Throughput do not take effect.
    // 
    // Set the value to All, which indicates that the IOPS rate and throughput of the cloud disk are reset to the initial values.
    std::shared_ptr<string> recover_ = nullptr;
    // The new throughput of the cloud disk. You can change the throughput of only cloud disks in dedicated block storage clusters. Unit: MB/s.
    // 
    // Valid values: 60 to maximum throughput per disk.
    // 
    // For more information, see [Block storage performance](https://help.aliyun.com/document_detail/25382.html).
    std::shared_ptr<int32_t> throughput_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
