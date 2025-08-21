// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATASPEC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSCALINGCONFIGRESPONSEBODYDATASPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeAutoScalingConfigResponseBodyDataSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoScalingConfigResponseBodyDataSpec& obj) { 
      DARABONBA_PTR_TO_JSON(CoolDownTime, coolDownTime_);
      DARABONBA_PTR_TO_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_TO_JSON(MaxReadOnlyNodes, maxReadOnlyNodes_);
      DARABONBA_PTR_TO_JSON(MaxSpec, maxSpec_);
      DARABONBA_PTR_TO_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(ObservationWindowSize, observationWindowSize_);
      DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoScalingConfigResponseBodyDataSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(CoolDownTime, coolDownTime_);
      DARABONBA_PTR_FROM_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_FROM_JSON(MaxReadOnlyNodes, maxReadOnlyNodes_);
      DARABONBA_PTR_FROM_JSON(MaxSpec, maxSpec_);
      DARABONBA_PTR_FROM_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(ObservationWindowSize, observationWindowSize_);
      DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
    };
    DescribeAutoScalingConfigResponseBodyDataSpec() = default ;
    DescribeAutoScalingConfigResponseBodyDataSpec(const DescribeAutoScalingConfigResponseBodyDataSpec &) = default ;
    DescribeAutoScalingConfigResponseBodyDataSpec(DescribeAutoScalingConfigResponseBodyDataSpec &&) = default ;
    DescribeAutoScalingConfigResponseBodyDataSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoScalingConfigResponseBodyDataSpec() = default ;
    DescribeAutoScalingConfigResponseBodyDataSpec& operator=(const DescribeAutoScalingConfigResponseBodyDataSpec &) = default ;
    DescribeAutoScalingConfigResponseBodyDataSpec& operator=(DescribeAutoScalingConfigResponseBodyDataSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coolDownTime_ != nullptr
        && this->cpuUsageUpperThreshold_ != nullptr && this->downgrade_ != nullptr && this->maxReadOnlyNodes_ != nullptr && this->maxSpec_ != nullptr && this->memUsageUpperThreshold_ != nullptr
        && this->observationWindowSize_ != nullptr && this->upgrade_ != nullptr; };
    // coolDownTime Field Functions 
    bool hasCoolDownTime() const { return this->coolDownTime_ != nullptr;};
    void deleteCoolDownTime() { this->coolDownTime_ = nullptr;};
    inline string coolDownTime() const { DARABONBA_PTR_GET_DEFAULT(coolDownTime_, "") };
    inline DescribeAutoScalingConfigResponseBodyDataSpec& setCoolDownTime(string coolDownTime) { DARABONBA_PTR_SET_VALUE(coolDownTime_, coolDownTime) };


    // cpuUsageUpperThreshold Field Functions 
    bool hasCpuUsageUpperThreshold() const { return this->cpuUsageUpperThreshold_ != nullptr;};
    void deleteCpuUsageUpperThreshold() { this->cpuUsageUpperThreshold_ = nullptr;};
    inline int32_t cpuUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageUpperThreshold_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataSpec& setCpuUsageUpperThreshold(int32_t cpuUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(cpuUsageUpperThreshold_, cpuUsageUpperThreshold) };


    // downgrade Field Functions 
    bool hasDowngrade() const { return this->downgrade_ != nullptr;};
    void deleteDowngrade() { this->downgrade_ = nullptr;};
    inline bool downgrade() const { DARABONBA_PTR_GET_DEFAULT(downgrade_, false) };
    inline DescribeAutoScalingConfigResponseBodyDataSpec& setDowngrade(bool downgrade) { DARABONBA_PTR_SET_VALUE(downgrade_, downgrade) };


    // maxReadOnlyNodes Field Functions 
    bool hasMaxReadOnlyNodes() const { return this->maxReadOnlyNodes_ != nullptr;};
    void deleteMaxReadOnlyNodes() { this->maxReadOnlyNodes_ = nullptr;};
    inline int32_t maxReadOnlyNodes() const { DARABONBA_PTR_GET_DEFAULT(maxReadOnlyNodes_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataSpec& setMaxReadOnlyNodes(int32_t maxReadOnlyNodes) { DARABONBA_PTR_SET_VALUE(maxReadOnlyNodes_, maxReadOnlyNodes) };


    // maxSpec Field Functions 
    bool hasMaxSpec() const { return this->maxSpec_ != nullptr;};
    void deleteMaxSpec() { this->maxSpec_ = nullptr;};
    inline string maxSpec() const { DARABONBA_PTR_GET_DEFAULT(maxSpec_, "") };
    inline DescribeAutoScalingConfigResponseBodyDataSpec& setMaxSpec(string maxSpec) { DARABONBA_PTR_SET_VALUE(maxSpec_, maxSpec) };


    // memUsageUpperThreshold Field Functions 
    bool hasMemUsageUpperThreshold() const { return this->memUsageUpperThreshold_ != nullptr;};
    void deleteMemUsageUpperThreshold() { this->memUsageUpperThreshold_ = nullptr;};
    inline int32_t memUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageUpperThreshold_, 0) };
    inline DescribeAutoScalingConfigResponseBodyDataSpec& setMemUsageUpperThreshold(int32_t memUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(memUsageUpperThreshold_, memUsageUpperThreshold) };


    // observationWindowSize Field Functions 
    bool hasObservationWindowSize() const { return this->observationWindowSize_ != nullptr;};
    void deleteObservationWindowSize() { this->observationWindowSize_ = nullptr;};
    inline string observationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(observationWindowSize_, "") };
    inline DescribeAutoScalingConfigResponseBodyDataSpec& setObservationWindowSize(string observationWindowSize) { DARABONBA_PTR_SET_VALUE(observationWindowSize_, observationWindowSize) };


    // upgrade Field Functions 
    bool hasUpgrade() const { return this->upgrade_ != nullptr;};
    void deleteUpgrade() { this->upgrade_ = nullptr;};
    inline bool upgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
    inline DescribeAutoScalingConfigResponseBodyDataSpec& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


  protected:
    // The quiescent period. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
    // 
    // *   **s**: seconds.
    // *   **m**: minutes.
    // *   **h**: hours.
    // *   **d**: days.
    // 
    // >  A value of **5m** indicates 5 minutes.
    std::shared_ptr<string> coolDownTime_ = nullptr;
    // The average CPU utilization threshold that triggers automatic specification scale-up. Unit: %.
    std::shared_ptr<int32_t> cpuUsageUpperThreshold_ = nullptr;
    // Indicates whether the automatic specification scale-down feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> downgrade_ = nullptr;
    // The maximum number of read-only nodes of the instance.
    std::shared_ptr<int32_t> maxReadOnlyNodes_ = nullptr;
    // The maximum specifications to which the cluster can be scaled up. For more information about the specifications of each type of supported database instances, see the following topics:
    // 
    // *   PolarDB for MySQL Cluster Edition instances: [Compute node specifications of PolarDB for MySQL Enterprise Edition](https://help.aliyun.com/document_detail/102542.html)
    // *   ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs: [Specifications](https://help.aliyun.com/document_detail/276974.html)
    std::shared_ptr<string> maxSpec_ = nullptr;
    // The average memory usage threshold that triggers automatic specification scale-up. Unit: %.
    std::shared_ptr<int32_t> memUsageUpperThreshold_ = nullptr;
    // The observation window. The return value consists of a numeric value and a time unit suffix. Valid values of the time unit suffix:
    // 
    // *   **s**: seconds.
    // *   **m**: minutes.
    // *   **h**: hours.
    // *   **d**: days.
    // 
    // >  A value of **5m** indicates 5 minutes.
    std::shared_ptr<string> observationWindowSize_ = nullptr;
    // Indicates whether the automatic specification scale-up feature is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
