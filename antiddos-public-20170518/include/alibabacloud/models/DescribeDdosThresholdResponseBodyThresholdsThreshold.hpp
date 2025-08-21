// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDRESPONSEBODYTHRESHOLDSTHRESHOLD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSTHRESHOLDRESPONSEBODYTHRESHOLDSTHRESHOLD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosThresholdResponseBodyThresholdsThreshold : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosThresholdResponseBodyThresholdsThreshold& obj) { 
      DARABONBA_PTR_TO_JSON(Bps, bps_);
      DARABONBA_PTR_TO_JSON(DdosType, ddosType_);
      DARABONBA_PTR_TO_JSON(ElasticBps, elasticBps_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IsAuto, isAuto_);
      DARABONBA_PTR_TO_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_TO_JSON(MaxPps, maxPps_);
      DARABONBA_PTR_TO_JSON(Pps, pps_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosThresholdResponseBodyThresholdsThreshold& obj) { 
      DARABONBA_PTR_FROM_JSON(Bps, bps_);
      DARABONBA_PTR_FROM_JSON(DdosType, ddosType_);
      DARABONBA_PTR_FROM_JSON(ElasticBps, elasticBps_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IsAuto, isAuto_);
      DARABONBA_PTR_FROM_JSON(MaxBps, maxBps_);
      DARABONBA_PTR_FROM_JSON(MaxPps, maxPps_);
      DARABONBA_PTR_FROM_JSON(Pps, pps_);
    };
    DescribeDdosThresholdResponseBodyThresholdsThreshold() = default ;
    DescribeDdosThresholdResponseBodyThresholdsThreshold(const DescribeDdosThresholdResponseBodyThresholdsThreshold &) = default ;
    DescribeDdosThresholdResponseBodyThresholdsThreshold(DescribeDdosThresholdResponseBodyThresholdsThreshold &&) = default ;
    DescribeDdosThresholdResponseBodyThresholdsThreshold(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosThresholdResponseBodyThresholdsThreshold() = default ;
    DescribeDdosThresholdResponseBodyThresholdsThreshold& operator=(const DescribeDdosThresholdResponseBodyThresholdsThreshold &) = default ;
    DescribeDdosThresholdResponseBodyThresholdsThreshold& operator=(DescribeDdosThresholdResponseBodyThresholdsThreshold &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bps_ != nullptr
        && this->ddosType_ != nullptr && this->elasticBps_ != nullptr && this->instanceId_ != nullptr && this->internetIp_ != nullptr && this->isAuto_ != nullptr
        && this->maxBps_ != nullptr && this->maxPps_ != nullptr && this->pps_ != nullptr; };
    // bps Field Functions 
    bool hasBps() const { return this->bps_ != nullptr;};
    void deleteBps() { this->bps_ = nullptr;};
    inline int32_t bps() const { DARABONBA_PTR_GET_DEFAULT(bps_, 0) };
    inline DescribeDdosThresholdResponseBodyThresholdsThreshold& setBps(int32_t bps) { DARABONBA_PTR_SET_VALUE(bps_, bps) };


    // ddosType Field Functions 
    bool hasDdosType() const { return this->ddosType_ != nullptr;};
    void deleteDdosType() { this->ddosType_ = nullptr;};
    inline string ddosType() const { DARABONBA_PTR_GET_DEFAULT(ddosType_, "") };
    inline DescribeDdosThresholdResponseBodyThresholdsThreshold& setDdosType(string ddosType) { DARABONBA_PTR_SET_VALUE(ddosType_, ddosType) };


    // elasticBps Field Functions 
    bool hasElasticBps() const { return this->elasticBps_ != nullptr;};
    void deleteElasticBps() { this->elasticBps_ = nullptr;};
    inline int32_t elasticBps() const { DARABONBA_PTR_GET_DEFAULT(elasticBps_, 0) };
    inline DescribeDdosThresholdResponseBodyThresholdsThreshold& setElasticBps(int32_t elasticBps) { DARABONBA_PTR_SET_VALUE(elasticBps_, elasticBps) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDdosThresholdResponseBodyThresholdsThreshold& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeDdosThresholdResponseBodyThresholdsThreshold& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // isAuto Field Functions 
    bool hasIsAuto() const { return this->isAuto_ != nullptr;};
    void deleteIsAuto() { this->isAuto_ = nullptr;};
    inline bool isAuto() const { DARABONBA_PTR_GET_DEFAULT(isAuto_, false) };
    inline DescribeDdosThresholdResponseBodyThresholdsThreshold& setIsAuto(bool isAuto) { DARABONBA_PTR_SET_VALUE(isAuto_, isAuto) };


    // maxBps Field Functions 
    bool hasMaxBps() const { return this->maxBps_ != nullptr;};
    void deleteMaxBps() { this->maxBps_ = nullptr;};
    inline int32_t maxBps() const { DARABONBA_PTR_GET_DEFAULT(maxBps_, 0) };
    inline DescribeDdosThresholdResponseBodyThresholdsThreshold& setMaxBps(int32_t maxBps) { DARABONBA_PTR_SET_VALUE(maxBps_, maxBps) };


    // maxPps Field Functions 
    bool hasMaxPps() const { return this->maxPps_ != nullptr;};
    void deleteMaxPps() { this->maxPps_ = nullptr;};
    inline int32_t maxPps() const { DARABONBA_PTR_GET_DEFAULT(maxPps_, 0) };
    inline DescribeDdosThresholdResponseBodyThresholdsThreshold& setMaxPps(int32_t maxPps) { DARABONBA_PTR_SET_VALUE(maxPps_, maxPps) };


    // pps Field Functions 
    bool hasPps() const { return this->pps_ != nullptr;};
    void deletePps() { this->pps_ = nullptr;};
    inline int32_t pps() const { DARABONBA_PTR_GET_DEFAULT(pps_, 0) };
    inline DescribeDdosThresholdResponseBodyThresholdsThreshold& setPps(int32_t pps) { DARABONBA_PTR_SET_VALUE(pps_, pps) };


  protected:
    // If the value of the **DdosType** parameter is **defense**, the Bps parameter indicates the current traffic scrubbing threshold. Unit: Mbit/s.
    // 
    // If the value of the **DdosType** parameter is **blackhole**, the Bps parameter indicates the basic protection threshold. Unit: Mbit/s.
    std::shared_ptr<int32_t> bps_ = nullptr;
    // The type of the threshold. Valid values:
    // 
    // *   **defense**: traffic scrubbing threshold
    // *   **blackhole**: DDoS mitigation threshold
    std::shared_ptr<string> ddosType_ = nullptr;
    // The burstable protection threshold (the maximum DDoS mitigation threshold). Unit: Mbit/s.
    // 
    // > This parameter is returned only when the value of the **DdosType** parameter is **blackhole**.
    std::shared_ptr<int32_t> elasticBps_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the asset.
    std::shared_ptr<string> internetIp_ = nullptr;
    // Indicates whether the threshold is automatically adjusted. Valid values:
    // 
    // *   **true**: The scrubbing thresholds are automatically adjusted based on the traffic load on the asset.
    // *   **false**: The scrubbing thresholds are not automatically adjusted. You must manually specify the scrubbing thresholds.
    std::shared_ptr<bool> isAuto_ = nullptr;
    // The maximum traffic scrubbing threshold. Unit: Mbit/s.
    std::shared_ptr<int32_t> maxBps_ = nullptr;
    // The maximum packet scrubbing threshold. Unit: pps.
    std::shared_ptr<int32_t> maxPps_ = nullptr;
    // The packet scrubbing threshold. Unit: pps.
    // 
    // > This parameter is returned only when the value of the **DdosType** parameter is **defense**.
    std::shared_ptr<int32_t> pps_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
