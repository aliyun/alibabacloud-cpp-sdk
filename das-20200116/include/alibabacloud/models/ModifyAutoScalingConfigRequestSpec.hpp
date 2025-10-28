// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTSPEC_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOSCALINGCONFIGREQUESTSPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ModifyAutoScalingConfigRequestSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoScalingConfigRequestSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Apply, apply_);
      DARABONBA_PTR_TO_JSON(CoolDownTime, coolDownTime_);
      DARABONBA_PTR_TO_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_TO_JSON(MaxReadOnlyNodes, maxReadOnlyNodes_);
      DARABONBA_PTR_TO_JSON(MaxSpec, maxSpec_);
      DARABONBA_PTR_TO_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
      DARABONBA_PTR_TO_JSON(ObservationWindowSize, observationWindowSize_);
      DARABONBA_PTR_TO_JSON(Upgrade, upgrade_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoScalingConfigRequestSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Apply, apply_);
      DARABONBA_PTR_FROM_JSON(CoolDownTime, coolDownTime_);
      DARABONBA_PTR_FROM_JSON(CpuUsageUpperThreshold, cpuUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(Downgrade, downgrade_);
      DARABONBA_PTR_FROM_JSON(MaxReadOnlyNodes, maxReadOnlyNodes_);
      DARABONBA_PTR_FROM_JSON(MaxSpec, maxSpec_);
      DARABONBA_PTR_FROM_JSON(MemUsageUpperThreshold, memUsageUpperThreshold_);
      DARABONBA_PTR_FROM_JSON(ObservationWindowSize, observationWindowSize_);
      DARABONBA_PTR_FROM_JSON(Upgrade, upgrade_);
    };
    ModifyAutoScalingConfigRequestSpec() = default ;
    ModifyAutoScalingConfigRequestSpec(const ModifyAutoScalingConfigRequestSpec &) = default ;
    ModifyAutoScalingConfigRequestSpec(ModifyAutoScalingConfigRequestSpec &&) = default ;
    ModifyAutoScalingConfigRequestSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoScalingConfigRequestSpec() = default ;
    ModifyAutoScalingConfigRequestSpec& operator=(const ModifyAutoScalingConfigRequestSpec &) = default ;
    ModifyAutoScalingConfigRequestSpec& operator=(ModifyAutoScalingConfigRequestSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apply_ == nullptr
        && return this->coolDownTime_ == nullptr && return this->cpuUsageUpperThreshold_ == nullptr && return this->downgrade_ == nullptr && return this->maxReadOnlyNodes_ == nullptr && return this->maxSpec_ == nullptr
        && return this->memUsageUpperThreshold_ == nullptr && return this->observationWindowSize_ == nullptr && return this->upgrade_ == nullptr; };
    // apply Field Functions 
    bool hasApply() const { return this->apply_ != nullptr;};
    void deleteApply() { this->apply_ = nullptr;};
    inline bool apply() const { DARABONBA_PTR_GET_DEFAULT(apply_, false) };
    inline ModifyAutoScalingConfigRequestSpec& setApply(bool apply) { DARABONBA_PTR_SET_VALUE(apply_, apply) };


    // coolDownTime Field Functions 
    bool hasCoolDownTime() const { return this->coolDownTime_ != nullptr;};
    void deleteCoolDownTime() { this->coolDownTime_ = nullptr;};
    inline string coolDownTime() const { DARABONBA_PTR_GET_DEFAULT(coolDownTime_, "") };
    inline ModifyAutoScalingConfigRequestSpec& setCoolDownTime(string coolDownTime) { DARABONBA_PTR_SET_VALUE(coolDownTime_, coolDownTime) };


    // cpuUsageUpperThreshold Field Functions 
    bool hasCpuUsageUpperThreshold() const { return this->cpuUsageUpperThreshold_ != nullptr;};
    void deleteCpuUsageUpperThreshold() { this->cpuUsageUpperThreshold_ = nullptr;};
    inline int32_t cpuUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuUsageUpperThreshold_, 0) };
    inline ModifyAutoScalingConfigRequestSpec& setCpuUsageUpperThreshold(int32_t cpuUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(cpuUsageUpperThreshold_, cpuUsageUpperThreshold) };


    // downgrade Field Functions 
    bool hasDowngrade() const { return this->downgrade_ != nullptr;};
    void deleteDowngrade() { this->downgrade_ = nullptr;};
    inline bool downgrade() const { DARABONBA_PTR_GET_DEFAULT(downgrade_, false) };
    inline ModifyAutoScalingConfigRequestSpec& setDowngrade(bool downgrade) { DARABONBA_PTR_SET_VALUE(downgrade_, downgrade) };


    // maxReadOnlyNodes Field Functions 
    bool hasMaxReadOnlyNodes() const { return this->maxReadOnlyNodes_ != nullptr;};
    void deleteMaxReadOnlyNodes() { this->maxReadOnlyNodes_ = nullptr;};
    inline int32_t maxReadOnlyNodes() const { DARABONBA_PTR_GET_DEFAULT(maxReadOnlyNodes_, 0) };
    inline ModifyAutoScalingConfigRequestSpec& setMaxReadOnlyNodes(int32_t maxReadOnlyNodes) { DARABONBA_PTR_SET_VALUE(maxReadOnlyNodes_, maxReadOnlyNodes) };


    // maxSpec Field Functions 
    bool hasMaxSpec() const { return this->maxSpec_ != nullptr;};
    void deleteMaxSpec() { this->maxSpec_ = nullptr;};
    inline string maxSpec() const { DARABONBA_PTR_GET_DEFAULT(maxSpec_, "") };
    inline ModifyAutoScalingConfigRequestSpec& setMaxSpec(string maxSpec) { DARABONBA_PTR_SET_VALUE(maxSpec_, maxSpec) };


    // memUsageUpperThreshold Field Functions 
    bool hasMemUsageUpperThreshold() const { return this->memUsageUpperThreshold_ != nullptr;};
    void deleteMemUsageUpperThreshold() { this->memUsageUpperThreshold_ = nullptr;};
    inline int32_t memUsageUpperThreshold() const { DARABONBA_PTR_GET_DEFAULT(memUsageUpperThreshold_, 0) };
    inline ModifyAutoScalingConfigRequestSpec& setMemUsageUpperThreshold(int32_t memUsageUpperThreshold) { DARABONBA_PTR_SET_VALUE(memUsageUpperThreshold_, memUsageUpperThreshold) };


    // observationWindowSize Field Functions 
    bool hasObservationWindowSize() const { return this->observationWindowSize_ != nullptr;};
    void deleteObservationWindowSize() { this->observationWindowSize_ = nullptr;};
    inline string observationWindowSize() const { DARABONBA_PTR_GET_DEFAULT(observationWindowSize_, "") };
    inline ModifyAutoScalingConfigRequestSpec& setObservationWindowSize(string observationWindowSize) { DARABONBA_PTR_SET_VALUE(observationWindowSize_, observationWindowSize) };


    // upgrade Field Functions 
    bool hasUpgrade() const { return this->upgrade_ != nullptr;};
    void deleteUpgrade() { this->upgrade_ = nullptr;};
    inline bool upgrade() const { DARABONBA_PTR_GET_DEFAULT(upgrade_, false) };
    inline ModifyAutoScalingConfigRequestSpec& setUpgrade(bool upgrade) { DARABONBA_PTR_SET_VALUE(upgrade_, upgrade) };


  protected:
    // Specifies whether to apply the **Spec** configuration of the specification auto scaling feature. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> apply_ = nullptr;
    // The quiescent period. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute, the **h** time unit suffix specifies the hour, and the **d** time unit suffix specifies the day.
    // 
    // *   Valid values for PolarDB for MySQL Cluster Edition instances: **5m**, **10m**, **30m**, **1h**, **2h**, **3h**, **1d**, and **7d**.
    // *   Valid values for ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or Enterprise SSDs (ESSDs): **5m**, **10m**, **30m**, **1h**, **2h**, **3h**, **1d**, and **7d**.
    std::shared_ptr<string> coolDownTime_ = nullptr;
    // The average CPU utilization threshold that triggers automatic specification scale-up. Unit: %. Valid values:
    // 
    // *   **50**
    // *   **60**
    // *   **70**
    // *   **80**
    // *   **90**
    // 
    // >  This parameter must be specified if the database instance is a PolarDB for MySQL Cluster Edition instance or an ApsaraDB RDS for MySQL High-availability Edition instance that uses standard SSDs or ESSDs.
    std::shared_ptr<int32_t> cpuUsageUpperThreshold_ = nullptr;
    // Specifies whether to enable automatic specification scale-down. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // >  This parameter must be specified if the database instance is a PolarDB for MySQL Cluster Edition instance or an ApsaraDB RDS for MySQL High-availability Edition instance that uses standard SSDs or ESSDs.
    std::shared_ptr<bool> downgrade_ = nullptr;
    // The maximum number of read-only nodes of the instance.
    // 
    // >  This parameter must be specified if the database instance is a PolarDB for MySQL Cluster Edition instance.
    std::shared_ptr<int32_t> maxReadOnlyNodes_ = nullptr;
    // The maximum specifications to which the database instance can be scaled up. The database instance can be upgraded only to a database instance of the same edition with higher specifications. For information about the specifications of different database instances, see the following topics:
    // 
    // *   PolarDB for MySQL Cluster Edition instances: [Specifications of compute nodes](https://help.aliyun.com/document_detail/102542.html)
    // *   ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs: [Specifications](https://help.aliyun.com/document_detail/276974.html)
    std::shared_ptr<string> maxSpec_ = nullptr;
    // The average memory usage threshold that triggers automatic specification scale-up. Unit: %. Valid values:
    // 
    // *   **50**
    // *   **60**
    // *   **70**
    // *   **80**
    // *   **90**
    // 
    // >  This parameter must be specified if the database instance is a Tair (Redis OSS-compatible) Community Edition cloud-native instance on the China site (aliyun.com).
    std::shared_ptr<int32_t> memUsageUpperThreshold_ = nullptr;
    // The observation window. The value of this parameter consists of a numeric value and a time unit suffix. The **m** time unit suffix specifies the minute and the **h** time unit suffix specifies the hour.
    // 
    // *   Valid values for PolarDB for MySQL Cluster Edition instances: **5m**, **10m**, **15m**, and **30m**.
    // *   Valid values for ApsaraDB RDS for MySQL High-availability Edition instances that use standard SSDs or ESSDs: **5m**, **20m**, **30m**, **40m**, and **1h**.
    // *   Valid values for Tair (Redis OSS-compatible) Community Edition cloud-native instances: **5m**, **10m**, **15m**, and **30m**.
    std::shared_ptr<string> observationWindowSize_ = nullptr;
    // Specifies whether to enable automatic specification scale-up. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
