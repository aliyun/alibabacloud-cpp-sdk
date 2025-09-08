// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICEESTIMATEFEATURE_HPP_
#define ALIBABACLOUD_MODELS_PRICEESTIMATEFEATURE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class PriceEstimateFeature : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PriceEstimateFeature& obj) { 
      DARABONBA_PTR_TO_JSON(AppCount, appCount_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CpuCore, cpuCore_);
      DARABONBA_PTR_TO_JSON(CpuStrategy, cpuStrategy_);
      DARABONBA_PTR_TO_JSON(CpuUtilLevel, cpuUtilLevel_);
      DARABONBA_PTR_TO_JSON(CpuUtilMetrics, cpuUtilMetrics_);
      DARABONBA_PTR_TO_JSON(EnableCpuIdle, enableCpuIdle_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(EphemeralStorageGiB, ephemeralStorageGiB_);
      DARABONBA_PTR_TO_JSON(HighLoadInstanceCount, highLoadInstanceCount_);
      DARABONBA_PTR_TO_JSON(HighLoadQps, highLoadQps_);
      DARABONBA_PTR_TO_JSON(HighLoadSeconds, highLoadSeconds_);
      DARABONBA_PTR_TO_JSON(InstanceQps, instanceQps_);
      DARABONBA_PTR_TO_JSON(InternetOutboundGiB, internetOutboundGiB_);
      DARABONBA_PTR_TO_JSON(LowLoadInstanceCount, lowLoadInstanceCount_);
      DARABONBA_PTR_TO_JSON(LowLoadQps, lowLoadQps_);
      DARABONBA_PTR_TO_JSON(LowLoadSeconds, lowLoadSeconds_);
      DARABONBA_PTR_TO_JSON(MaxInstanceCount, maxInstanceCount_);
      DARABONBA_PTR_TO_JSON(MemoryGiB, memoryGiB_);
      DARABONBA_PTR_TO_JSON(MinInstanceCount, minInstanceCount_);
      DARABONBA_PTR_TO_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_TO_JSON(NoneLoadInstanceCount, noneLoadInstanceCount_);
      DARABONBA_PTR_TO_JSON(NoneLoadSeconds, noneLoadSeconds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, PriceEstimateFeature& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCount, appCount_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CpuCore, cpuCore_);
      DARABONBA_PTR_FROM_JSON(CpuStrategy, cpuStrategy_);
      DARABONBA_PTR_FROM_JSON(CpuUtilLevel, cpuUtilLevel_);
      DARABONBA_PTR_FROM_JSON(CpuUtilMetrics, cpuUtilMetrics_);
      DARABONBA_PTR_FROM_JSON(EnableCpuIdle, enableCpuIdle_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(EphemeralStorageGiB, ephemeralStorageGiB_);
      DARABONBA_PTR_FROM_JSON(HighLoadInstanceCount, highLoadInstanceCount_);
      DARABONBA_PTR_FROM_JSON(HighLoadQps, highLoadQps_);
      DARABONBA_PTR_FROM_JSON(HighLoadSeconds, highLoadSeconds_);
      DARABONBA_PTR_FROM_JSON(InstanceQps, instanceQps_);
      DARABONBA_PTR_FROM_JSON(InternetOutboundGiB, internetOutboundGiB_);
      DARABONBA_PTR_FROM_JSON(LowLoadInstanceCount, lowLoadInstanceCount_);
      DARABONBA_PTR_FROM_JSON(LowLoadQps, lowLoadQps_);
      DARABONBA_PTR_FROM_JSON(LowLoadSeconds, lowLoadSeconds_);
      DARABONBA_PTR_FROM_JSON(MaxInstanceCount, maxInstanceCount_);
      DARABONBA_PTR_FROM_JSON(MemoryGiB, memoryGiB_);
      DARABONBA_PTR_FROM_JSON(MinInstanceCount, minInstanceCount_);
      DARABONBA_PTR_FROM_JSON(NewSaeVersion, newSaeVersion_);
      DARABONBA_PTR_FROM_JSON(NoneLoadInstanceCount, noneLoadInstanceCount_);
      DARABONBA_PTR_FROM_JSON(NoneLoadSeconds, noneLoadSeconds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    PriceEstimateFeature() = default ;
    PriceEstimateFeature(const PriceEstimateFeature &) = default ;
    PriceEstimateFeature(PriceEstimateFeature &&) = default ;
    PriceEstimateFeature(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PriceEstimateFeature() = default ;
    PriceEstimateFeature& operator=(const PriceEstimateFeature &) = default ;
    PriceEstimateFeature& operator=(PriceEstimateFeature &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appCount_ != nullptr
        && this->appType_ != nullptr && this->cpuCore_ != nullptr && this->cpuStrategy_ != nullptr && this->cpuUtilLevel_ != nullptr && this->cpuUtilMetrics_ != nullptr
        && this->enableCpuIdle_ != nullptr && this->envType_ != nullptr && this->ephemeralStorageGiB_ != nullptr && this->highLoadInstanceCount_ != nullptr && this->highLoadQps_ != nullptr
        && this->highLoadSeconds_ != nullptr && this->instanceQps_ != nullptr && this->internetOutboundGiB_ != nullptr && this->lowLoadInstanceCount_ != nullptr && this->lowLoadQps_ != nullptr
        && this->lowLoadSeconds_ != nullptr && this->maxInstanceCount_ != nullptr && this->memoryGiB_ != nullptr && this->minInstanceCount_ != nullptr && this->newSaeVersion_ != nullptr
        && this->noneLoadInstanceCount_ != nullptr && this->noneLoadSeconds_ != nullptr && this->regionId_ != nullptr && this->resourceType_ != nullptr; };
    // appCount Field Functions 
    bool hasAppCount() const { return this->appCount_ != nullptr;};
    void deleteAppCount() { this->appCount_ = nullptr;};
    inline int64_t appCount() const { DARABONBA_PTR_GET_DEFAULT(appCount_, 0L) };
    inline PriceEstimateFeature& setAppCount(int64_t appCount) { DARABONBA_PTR_SET_VALUE(appCount_, appCount) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline PriceEstimateFeature& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // cpuCore Field Functions 
    bool hasCpuCore() const { return this->cpuCore_ != nullptr;};
    void deleteCpuCore() { this->cpuCore_ = nullptr;};
    inline float cpuCore() const { DARABONBA_PTR_GET_DEFAULT(cpuCore_, 0.0) };
    inline PriceEstimateFeature& setCpuCore(float cpuCore) { DARABONBA_PTR_SET_VALUE(cpuCore_, cpuCore) };


    // cpuStrategy Field Functions 
    bool hasCpuStrategy() const { return this->cpuStrategy_ != nullptr;};
    void deleteCpuStrategy() { this->cpuStrategy_ = nullptr;};
    inline string cpuStrategy() const { DARABONBA_PTR_GET_DEFAULT(cpuStrategy_, "") };
    inline PriceEstimateFeature& setCpuStrategy(string cpuStrategy) { DARABONBA_PTR_SET_VALUE(cpuStrategy_, cpuStrategy) };


    // cpuUtilLevel Field Functions 
    bool hasCpuUtilLevel() const { return this->cpuUtilLevel_ != nullptr;};
    void deleteCpuUtilLevel() { this->cpuUtilLevel_ = nullptr;};
    inline string cpuUtilLevel() const { DARABONBA_PTR_GET_DEFAULT(cpuUtilLevel_, "") };
    inline PriceEstimateFeature& setCpuUtilLevel(string cpuUtilLevel) { DARABONBA_PTR_SET_VALUE(cpuUtilLevel_, cpuUtilLevel) };


    // cpuUtilMetrics Field Functions 
    bool hasCpuUtilMetrics() const { return this->cpuUtilMetrics_ != nullptr;};
    void deleteCpuUtilMetrics() { this->cpuUtilMetrics_ = nullptr;};
    inline const vector<float> & cpuUtilMetrics() const { DARABONBA_PTR_GET_CONST(cpuUtilMetrics_, vector<float>) };
    inline vector<float> cpuUtilMetrics() { DARABONBA_PTR_GET(cpuUtilMetrics_, vector<float>) };
    inline PriceEstimateFeature& setCpuUtilMetrics(const vector<float> & cpuUtilMetrics) { DARABONBA_PTR_SET_VALUE(cpuUtilMetrics_, cpuUtilMetrics) };
    inline PriceEstimateFeature& setCpuUtilMetrics(vector<float> && cpuUtilMetrics) { DARABONBA_PTR_SET_RVALUE(cpuUtilMetrics_, cpuUtilMetrics) };


    // enableCpuIdle Field Functions 
    bool hasEnableCpuIdle() const { return this->enableCpuIdle_ != nullptr;};
    void deleteEnableCpuIdle() { this->enableCpuIdle_ = nullptr;};
    inline bool enableCpuIdle() const { DARABONBA_PTR_GET_DEFAULT(enableCpuIdle_, false) };
    inline PriceEstimateFeature& setEnableCpuIdle(bool enableCpuIdle) { DARABONBA_PTR_SET_VALUE(enableCpuIdle_, enableCpuIdle) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline PriceEstimateFeature& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // ephemeralStorageGiB Field Functions 
    bool hasEphemeralStorageGiB() const { return this->ephemeralStorageGiB_ != nullptr;};
    void deleteEphemeralStorageGiB() { this->ephemeralStorageGiB_ = nullptr;};
    inline int64_t ephemeralStorageGiB() const { DARABONBA_PTR_GET_DEFAULT(ephemeralStorageGiB_, 0L) };
    inline PriceEstimateFeature& setEphemeralStorageGiB(int64_t ephemeralStorageGiB) { DARABONBA_PTR_SET_VALUE(ephemeralStorageGiB_, ephemeralStorageGiB) };


    // highLoadInstanceCount Field Functions 
    bool hasHighLoadInstanceCount() const { return this->highLoadInstanceCount_ != nullptr;};
    void deleteHighLoadInstanceCount() { this->highLoadInstanceCount_ = nullptr;};
    inline int64_t highLoadInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(highLoadInstanceCount_, 0L) };
    inline PriceEstimateFeature& setHighLoadInstanceCount(int64_t highLoadInstanceCount) { DARABONBA_PTR_SET_VALUE(highLoadInstanceCount_, highLoadInstanceCount) };


    // highLoadQps Field Functions 
    bool hasHighLoadQps() const { return this->highLoadQps_ != nullptr;};
    void deleteHighLoadQps() { this->highLoadQps_ = nullptr;};
    inline float highLoadQps() const { DARABONBA_PTR_GET_DEFAULT(highLoadQps_, 0.0) };
    inline PriceEstimateFeature& setHighLoadQps(float highLoadQps) { DARABONBA_PTR_SET_VALUE(highLoadQps_, highLoadQps) };


    // highLoadSeconds Field Functions 
    bool hasHighLoadSeconds() const { return this->highLoadSeconds_ != nullptr;};
    void deleteHighLoadSeconds() { this->highLoadSeconds_ = nullptr;};
    inline int64_t highLoadSeconds() const { DARABONBA_PTR_GET_DEFAULT(highLoadSeconds_, 0L) };
    inline PriceEstimateFeature& setHighLoadSeconds(int64_t highLoadSeconds) { DARABONBA_PTR_SET_VALUE(highLoadSeconds_, highLoadSeconds) };


    // instanceQps Field Functions 
    bool hasInstanceQps() const { return this->instanceQps_ != nullptr;};
    void deleteInstanceQps() { this->instanceQps_ = nullptr;};
    inline float instanceQps() const { DARABONBA_PTR_GET_DEFAULT(instanceQps_, 0.0) };
    inline PriceEstimateFeature& setInstanceQps(float instanceQps) { DARABONBA_PTR_SET_VALUE(instanceQps_, instanceQps) };


    // internetOutboundGiB Field Functions 
    bool hasInternetOutboundGiB() const { return this->internetOutboundGiB_ != nullptr;};
    void deleteInternetOutboundGiB() { this->internetOutboundGiB_ = nullptr;};
    inline float internetOutboundGiB() const { DARABONBA_PTR_GET_DEFAULT(internetOutboundGiB_, 0.0) };
    inline PriceEstimateFeature& setInternetOutboundGiB(float internetOutboundGiB) { DARABONBA_PTR_SET_VALUE(internetOutboundGiB_, internetOutboundGiB) };


    // lowLoadInstanceCount Field Functions 
    bool hasLowLoadInstanceCount() const { return this->lowLoadInstanceCount_ != nullptr;};
    void deleteLowLoadInstanceCount() { this->lowLoadInstanceCount_ = nullptr;};
    inline int64_t lowLoadInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(lowLoadInstanceCount_, 0L) };
    inline PriceEstimateFeature& setLowLoadInstanceCount(int64_t lowLoadInstanceCount) { DARABONBA_PTR_SET_VALUE(lowLoadInstanceCount_, lowLoadInstanceCount) };


    // lowLoadQps Field Functions 
    bool hasLowLoadQps() const { return this->lowLoadQps_ != nullptr;};
    void deleteLowLoadQps() { this->lowLoadQps_ = nullptr;};
    inline float lowLoadQps() const { DARABONBA_PTR_GET_DEFAULT(lowLoadQps_, 0.0) };
    inline PriceEstimateFeature& setLowLoadQps(float lowLoadQps) { DARABONBA_PTR_SET_VALUE(lowLoadQps_, lowLoadQps) };


    // lowLoadSeconds Field Functions 
    bool hasLowLoadSeconds() const { return this->lowLoadSeconds_ != nullptr;};
    void deleteLowLoadSeconds() { this->lowLoadSeconds_ = nullptr;};
    inline int64_t lowLoadSeconds() const { DARABONBA_PTR_GET_DEFAULT(lowLoadSeconds_, 0L) };
    inline PriceEstimateFeature& setLowLoadSeconds(int64_t lowLoadSeconds) { DARABONBA_PTR_SET_VALUE(lowLoadSeconds_, lowLoadSeconds) };


    // maxInstanceCount Field Functions 
    bool hasMaxInstanceCount() const { return this->maxInstanceCount_ != nullptr;};
    void deleteMaxInstanceCount() { this->maxInstanceCount_ = nullptr;};
    inline int64_t maxInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(maxInstanceCount_, 0L) };
    inline PriceEstimateFeature& setMaxInstanceCount(int64_t maxInstanceCount) { DARABONBA_PTR_SET_VALUE(maxInstanceCount_, maxInstanceCount) };


    // memoryGiB Field Functions 
    bool hasMemoryGiB() const { return this->memoryGiB_ != nullptr;};
    void deleteMemoryGiB() { this->memoryGiB_ = nullptr;};
    inline float memoryGiB() const { DARABONBA_PTR_GET_DEFAULT(memoryGiB_, 0.0) };
    inline PriceEstimateFeature& setMemoryGiB(float memoryGiB) { DARABONBA_PTR_SET_VALUE(memoryGiB_, memoryGiB) };


    // minInstanceCount Field Functions 
    bool hasMinInstanceCount() const { return this->minInstanceCount_ != nullptr;};
    void deleteMinInstanceCount() { this->minInstanceCount_ = nullptr;};
    inline int64_t minInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(minInstanceCount_, 0L) };
    inline PriceEstimateFeature& setMinInstanceCount(int64_t minInstanceCount) { DARABONBA_PTR_SET_VALUE(minInstanceCount_, minInstanceCount) };


    // newSaeVersion Field Functions 
    bool hasNewSaeVersion() const { return this->newSaeVersion_ != nullptr;};
    void deleteNewSaeVersion() { this->newSaeVersion_ = nullptr;};
    inline string newSaeVersion() const { DARABONBA_PTR_GET_DEFAULT(newSaeVersion_, "") };
    inline PriceEstimateFeature& setNewSaeVersion(string newSaeVersion) { DARABONBA_PTR_SET_VALUE(newSaeVersion_, newSaeVersion) };


    // noneLoadInstanceCount Field Functions 
    bool hasNoneLoadInstanceCount() const { return this->noneLoadInstanceCount_ != nullptr;};
    void deleteNoneLoadInstanceCount() { this->noneLoadInstanceCount_ = nullptr;};
    inline int64_t noneLoadInstanceCount() const { DARABONBA_PTR_GET_DEFAULT(noneLoadInstanceCount_, 0L) };
    inline PriceEstimateFeature& setNoneLoadInstanceCount(int64_t noneLoadInstanceCount) { DARABONBA_PTR_SET_VALUE(noneLoadInstanceCount_, noneLoadInstanceCount) };


    // noneLoadSeconds Field Functions 
    bool hasNoneLoadSeconds() const { return this->noneLoadSeconds_ != nullptr;};
    void deleteNoneLoadSeconds() { this->noneLoadSeconds_ = nullptr;};
    inline int64_t noneLoadSeconds() const { DARABONBA_PTR_GET_DEFAULT(noneLoadSeconds_, 0L) };
    inline PriceEstimateFeature& setNoneLoadSeconds(int64_t noneLoadSeconds) { DARABONBA_PTR_SET_VALUE(noneLoadSeconds_, noneLoadSeconds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PriceEstimateFeature& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline PriceEstimateFeature& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<int64_t> appCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> cpuCore_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cpuStrategy_ = nullptr;
    std::shared_ptr<string> cpuUtilLevel_ = nullptr;
    std::shared_ptr<vector<float>> cpuUtilMetrics_ = nullptr;
    std::shared_ptr<bool> enableCpuIdle_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> envType_ = nullptr;
    std::shared_ptr<int64_t> ephemeralStorageGiB_ = nullptr;
    std::shared_ptr<int64_t> highLoadInstanceCount_ = nullptr;
    std::shared_ptr<float> highLoadQps_ = nullptr;
    std::shared_ptr<int64_t> highLoadSeconds_ = nullptr;
    std::shared_ptr<float> instanceQps_ = nullptr;
    std::shared_ptr<float> internetOutboundGiB_ = nullptr;
    std::shared_ptr<int64_t> lowLoadInstanceCount_ = nullptr;
    std::shared_ptr<float> lowLoadQps_ = nullptr;
    std::shared_ptr<int64_t> lowLoadSeconds_ = nullptr;
    std::shared_ptr<int64_t> maxInstanceCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> memoryGiB_ = nullptr;
    std::shared_ptr<int64_t> minInstanceCount_ = nullptr;
    std::shared_ptr<string> newSaeVersion_ = nullptr;
    std::shared_ptr<int64_t> noneLoadInstanceCount_ = nullptr;
    std::shared_ptr<int64_t> noneLoadSeconds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
