// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KUBELETCONFIG_HPP_
#define ALIBABACLOUD_MODELS_KUBELETCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KubeletConfigReservedMemory.hpp>
#include <alibabacloud/models/KubeletConfigTracing.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class KubeletConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KubeletConfig& obj) { 
      DARABONBA_PTR_TO_JSON(allowedUnsafeSysctls, allowedUnsafeSysctls_);
      DARABONBA_PTR_TO_JSON(clusterDNS, clusterDNS_);
      DARABONBA_PTR_TO_JSON(containerLogMaxFiles, containerLogMaxFiles_);
      DARABONBA_PTR_TO_JSON(containerLogMaxSize, containerLogMaxSize_);
      DARABONBA_PTR_TO_JSON(containerLogMaxWorkers, containerLogMaxWorkers_);
      DARABONBA_PTR_TO_JSON(containerLogMonitorInterval, containerLogMonitorInterval_);
      DARABONBA_PTR_TO_JSON(cpuCFSQuota, cpuCFSQuota_);
      DARABONBA_PTR_TO_JSON(cpuCFSQuotaPeriod, cpuCFSQuotaPeriod_);
      DARABONBA_PTR_TO_JSON(cpuManagerPolicy, cpuManagerPolicy_);
      DARABONBA_PTR_TO_JSON(eventBurst, eventBurst_);
      DARABONBA_PTR_TO_JSON(eventRecordQPS, eventRecordQPS_);
      DARABONBA_ANY_TO_JSON(evictionHard, evictionHard_);
      DARABONBA_ANY_TO_JSON(evictionSoft, evictionSoft_);
      DARABONBA_ANY_TO_JSON(evictionSoftGracePeriod, evictionSoftGracePeriod_);
      DARABONBA_ANY_TO_JSON(featureGates, featureGates_);
      DARABONBA_PTR_TO_JSON(imageGCHighThresholdPercent, imageGCHighThresholdPercent_);
      DARABONBA_PTR_TO_JSON(imageGCLowThresholdPercent, imageGCLowThresholdPercent_);
      DARABONBA_PTR_TO_JSON(kubeAPIBurst, kubeAPIBurst_);
      DARABONBA_PTR_TO_JSON(kubeAPIQPS, kubeAPIQPS_);
      DARABONBA_ANY_TO_JSON(kubeReserved, kubeReserved_);
      DARABONBA_PTR_TO_JSON(maxPods, maxPods_);
      DARABONBA_PTR_TO_JSON(memoryManagerPolicy, memoryManagerPolicy_);
      DARABONBA_PTR_TO_JSON(podPidsLimit, podPidsLimit_);
      DARABONBA_PTR_TO_JSON(readOnlyPort, readOnlyPort_);
      DARABONBA_PTR_TO_JSON(registryBurst, registryBurst_);
      DARABONBA_PTR_TO_JSON(registryPullQPS, registryPullQPS_);
      DARABONBA_PTR_TO_JSON(reservedMemory, reservedMemory_);
      DARABONBA_PTR_TO_JSON(serializeImagePulls, serializeImagePulls_);
      DARABONBA_PTR_TO_JSON(serverTLSBootstrap, serverTLSBootstrap_);
      DARABONBA_ANY_TO_JSON(systemReserved, systemReserved_);
      DARABONBA_PTR_TO_JSON(topologyManagerPolicy, topologyManagerPolicy_);
      DARABONBA_PTR_TO_JSON(tracing, tracing_);
    };
    friend void from_json(const Darabonba::Json& j, KubeletConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(allowedUnsafeSysctls, allowedUnsafeSysctls_);
      DARABONBA_PTR_FROM_JSON(clusterDNS, clusterDNS_);
      DARABONBA_PTR_FROM_JSON(containerLogMaxFiles, containerLogMaxFiles_);
      DARABONBA_PTR_FROM_JSON(containerLogMaxSize, containerLogMaxSize_);
      DARABONBA_PTR_FROM_JSON(containerLogMaxWorkers, containerLogMaxWorkers_);
      DARABONBA_PTR_FROM_JSON(containerLogMonitorInterval, containerLogMonitorInterval_);
      DARABONBA_PTR_FROM_JSON(cpuCFSQuota, cpuCFSQuota_);
      DARABONBA_PTR_FROM_JSON(cpuCFSQuotaPeriod, cpuCFSQuotaPeriod_);
      DARABONBA_PTR_FROM_JSON(cpuManagerPolicy, cpuManagerPolicy_);
      DARABONBA_PTR_FROM_JSON(eventBurst, eventBurst_);
      DARABONBA_PTR_FROM_JSON(eventRecordQPS, eventRecordQPS_);
      DARABONBA_ANY_FROM_JSON(evictionHard, evictionHard_);
      DARABONBA_ANY_FROM_JSON(evictionSoft, evictionSoft_);
      DARABONBA_ANY_FROM_JSON(evictionSoftGracePeriod, evictionSoftGracePeriod_);
      DARABONBA_ANY_FROM_JSON(featureGates, featureGates_);
      DARABONBA_PTR_FROM_JSON(imageGCHighThresholdPercent, imageGCHighThresholdPercent_);
      DARABONBA_PTR_FROM_JSON(imageGCLowThresholdPercent, imageGCLowThresholdPercent_);
      DARABONBA_PTR_FROM_JSON(kubeAPIBurst, kubeAPIBurst_);
      DARABONBA_PTR_FROM_JSON(kubeAPIQPS, kubeAPIQPS_);
      DARABONBA_ANY_FROM_JSON(kubeReserved, kubeReserved_);
      DARABONBA_PTR_FROM_JSON(maxPods, maxPods_);
      DARABONBA_PTR_FROM_JSON(memoryManagerPolicy, memoryManagerPolicy_);
      DARABONBA_PTR_FROM_JSON(podPidsLimit, podPidsLimit_);
      DARABONBA_PTR_FROM_JSON(readOnlyPort, readOnlyPort_);
      DARABONBA_PTR_FROM_JSON(registryBurst, registryBurst_);
      DARABONBA_PTR_FROM_JSON(registryPullQPS, registryPullQPS_);
      DARABONBA_PTR_FROM_JSON(reservedMemory, reservedMemory_);
      DARABONBA_PTR_FROM_JSON(serializeImagePulls, serializeImagePulls_);
      DARABONBA_PTR_FROM_JSON(serverTLSBootstrap, serverTLSBootstrap_);
      DARABONBA_ANY_FROM_JSON(systemReserved, systemReserved_);
      DARABONBA_PTR_FROM_JSON(topologyManagerPolicy, topologyManagerPolicy_);
      DARABONBA_PTR_FROM_JSON(tracing, tracing_);
    };
    KubeletConfig() = default ;
    KubeletConfig(const KubeletConfig &) = default ;
    KubeletConfig(KubeletConfig &&) = default ;
    KubeletConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KubeletConfig() = default ;
    KubeletConfig& operator=(const KubeletConfig &) = default ;
    KubeletConfig& operator=(KubeletConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowedUnsafeSysctls_ != nullptr
        && this->clusterDNS_ != nullptr && this->containerLogMaxFiles_ != nullptr && this->containerLogMaxSize_ != nullptr && this->containerLogMaxWorkers_ != nullptr && this->containerLogMonitorInterval_ != nullptr
        && this->cpuCFSQuota_ != nullptr && this->cpuCFSQuotaPeriod_ != nullptr && this->cpuManagerPolicy_ != nullptr && this->eventBurst_ != nullptr && this->eventRecordQPS_ != nullptr
        && this->evictionHard_ != nullptr && this->evictionSoft_ != nullptr && this->evictionSoftGracePeriod_ != nullptr && this->featureGates_ != nullptr && this->imageGCHighThresholdPercent_ != nullptr
        && this->imageGCLowThresholdPercent_ != nullptr && this->kubeAPIBurst_ != nullptr && this->kubeAPIQPS_ != nullptr && this->kubeReserved_ != nullptr && this->maxPods_ != nullptr
        && this->memoryManagerPolicy_ != nullptr && this->podPidsLimit_ != nullptr && this->readOnlyPort_ != nullptr && this->registryBurst_ != nullptr && this->registryPullQPS_ != nullptr
        && this->reservedMemory_ != nullptr && this->serializeImagePulls_ != nullptr && this->serverTLSBootstrap_ != nullptr && this->systemReserved_ != nullptr && this->topologyManagerPolicy_ != nullptr
        && this->tracing_ != nullptr; };
    // allowedUnsafeSysctls Field Functions 
    bool hasAllowedUnsafeSysctls() const { return this->allowedUnsafeSysctls_ != nullptr;};
    void deleteAllowedUnsafeSysctls() { this->allowedUnsafeSysctls_ = nullptr;};
    inline const vector<string> & allowedUnsafeSysctls() const { DARABONBA_PTR_GET_CONST(allowedUnsafeSysctls_, vector<string>) };
    inline vector<string> allowedUnsafeSysctls() { DARABONBA_PTR_GET(allowedUnsafeSysctls_, vector<string>) };
    inline KubeletConfig& setAllowedUnsafeSysctls(const vector<string> & allowedUnsafeSysctls) { DARABONBA_PTR_SET_VALUE(allowedUnsafeSysctls_, allowedUnsafeSysctls) };
    inline KubeletConfig& setAllowedUnsafeSysctls(vector<string> && allowedUnsafeSysctls) { DARABONBA_PTR_SET_RVALUE(allowedUnsafeSysctls_, allowedUnsafeSysctls) };


    // clusterDNS Field Functions 
    bool hasClusterDNS() const { return this->clusterDNS_ != nullptr;};
    void deleteClusterDNS() { this->clusterDNS_ = nullptr;};
    inline const vector<string> & clusterDNS() const { DARABONBA_PTR_GET_CONST(clusterDNS_, vector<string>) };
    inline vector<string> clusterDNS() { DARABONBA_PTR_GET(clusterDNS_, vector<string>) };
    inline KubeletConfig& setClusterDNS(const vector<string> & clusterDNS) { DARABONBA_PTR_SET_VALUE(clusterDNS_, clusterDNS) };
    inline KubeletConfig& setClusterDNS(vector<string> && clusterDNS) { DARABONBA_PTR_SET_RVALUE(clusterDNS_, clusterDNS) };


    // containerLogMaxFiles Field Functions 
    bool hasContainerLogMaxFiles() const { return this->containerLogMaxFiles_ != nullptr;};
    void deleteContainerLogMaxFiles() { this->containerLogMaxFiles_ = nullptr;};
    inline int64_t containerLogMaxFiles() const { DARABONBA_PTR_GET_DEFAULT(containerLogMaxFiles_, 0L) };
    inline KubeletConfig& setContainerLogMaxFiles(int64_t containerLogMaxFiles) { DARABONBA_PTR_SET_VALUE(containerLogMaxFiles_, containerLogMaxFiles) };


    // containerLogMaxSize Field Functions 
    bool hasContainerLogMaxSize() const { return this->containerLogMaxSize_ != nullptr;};
    void deleteContainerLogMaxSize() { this->containerLogMaxSize_ = nullptr;};
    inline string containerLogMaxSize() const { DARABONBA_PTR_GET_DEFAULT(containerLogMaxSize_, "") };
    inline KubeletConfig& setContainerLogMaxSize(string containerLogMaxSize) { DARABONBA_PTR_SET_VALUE(containerLogMaxSize_, containerLogMaxSize) };


    // containerLogMaxWorkers Field Functions 
    bool hasContainerLogMaxWorkers() const { return this->containerLogMaxWorkers_ != nullptr;};
    void deleteContainerLogMaxWorkers() { this->containerLogMaxWorkers_ = nullptr;};
    inline int32_t containerLogMaxWorkers() const { DARABONBA_PTR_GET_DEFAULT(containerLogMaxWorkers_, 0) };
    inline KubeletConfig& setContainerLogMaxWorkers(int32_t containerLogMaxWorkers) { DARABONBA_PTR_SET_VALUE(containerLogMaxWorkers_, containerLogMaxWorkers) };


    // containerLogMonitorInterval Field Functions 
    bool hasContainerLogMonitorInterval() const { return this->containerLogMonitorInterval_ != nullptr;};
    void deleteContainerLogMonitorInterval() { this->containerLogMonitorInterval_ = nullptr;};
    inline string containerLogMonitorInterval() const { DARABONBA_PTR_GET_DEFAULT(containerLogMonitorInterval_, "") };
    inline KubeletConfig& setContainerLogMonitorInterval(string containerLogMonitorInterval) { DARABONBA_PTR_SET_VALUE(containerLogMonitorInterval_, containerLogMonitorInterval) };


    // cpuCFSQuota Field Functions 
    bool hasCpuCFSQuota() const { return this->cpuCFSQuota_ != nullptr;};
    void deleteCpuCFSQuota() { this->cpuCFSQuota_ = nullptr;};
    inline bool cpuCFSQuota() const { DARABONBA_PTR_GET_DEFAULT(cpuCFSQuota_, false) };
    inline KubeletConfig& setCpuCFSQuota(bool cpuCFSQuota) { DARABONBA_PTR_SET_VALUE(cpuCFSQuota_, cpuCFSQuota) };


    // cpuCFSQuotaPeriod Field Functions 
    bool hasCpuCFSQuotaPeriod() const { return this->cpuCFSQuotaPeriod_ != nullptr;};
    void deleteCpuCFSQuotaPeriod() { this->cpuCFSQuotaPeriod_ = nullptr;};
    inline string cpuCFSQuotaPeriod() const { DARABONBA_PTR_GET_DEFAULT(cpuCFSQuotaPeriod_, "") };
    inline KubeletConfig& setCpuCFSQuotaPeriod(string cpuCFSQuotaPeriod) { DARABONBA_PTR_SET_VALUE(cpuCFSQuotaPeriod_, cpuCFSQuotaPeriod) };


    // cpuManagerPolicy Field Functions 
    bool hasCpuManagerPolicy() const { return this->cpuManagerPolicy_ != nullptr;};
    void deleteCpuManagerPolicy() { this->cpuManagerPolicy_ = nullptr;};
    inline string cpuManagerPolicy() const { DARABONBA_PTR_GET_DEFAULT(cpuManagerPolicy_, "") };
    inline KubeletConfig& setCpuManagerPolicy(string cpuManagerPolicy) { DARABONBA_PTR_SET_VALUE(cpuManagerPolicy_, cpuManagerPolicy) };


    // eventBurst Field Functions 
    bool hasEventBurst() const { return this->eventBurst_ != nullptr;};
    void deleteEventBurst() { this->eventBurst_ = nullptr;};
    inline int64_t eventBurst() const { DARABONBA_PTR_GET_DEFAULT(eventBurst_, 0L) };
    inline KubeletConfig& setEventBurst(int64_t eventBurst) { DARABONBA_PTR_SET_VALUE(eventBurst_, eventBurst) };


    // eventRecordQPS Field Functions 
    bool hasEventRecordQPS() const { return this->eventRecordQPS_ != nullptr;};
    void deleteEventRecordQPS() { this->eventRecordQPS_ = nullptr;};
    inline int64_t eventRecordQPS() const { DARABONBA_PTR_GET_DEFAULT(eventRecordQPS_, 0L) };
    inline KubeletConfig& setEventRecordQPS(int64_t eventRecordQPS) { DARABONBA_PTR_SET_VALUE(eventRecordQPS_, eventRecordQPS) };


    // evictionHard Field Functions 
    bool hasEvictionHard() const { return this->evictionHard_ != nullptr;};
    void deleteEvictionHard() { this->evictionHard_ = nullptr;};
    inline     const Darabonba::Json & evictionHard() const { DARABONBA_GET(evictionHard_) };
    Darabonba::Json & evictionHard() { DARABONBA_GET(evictionHard_) };
    inline KubeletConfig& setEvictionHard(const Darabonba::Json & evictionHard) { DARABONBA_SET_VALUE(evictionHard_, evictionHard) };
    inline KubeletConfig& setEvictionHard(Darabonba::Json & evictionHard) { DARABONBA_SET_RVALUE(evictionHard_, evictionHard) };


    // evictionSoft Field Functions 
    bool hasEvictionSoft() const { return this->evictionSoft_ != nullptr;};
    void deleteEvictionSoft() { this->evictionSoft_ = nullptr;};
    inline     const Darabonba::Json & evictionSoft() const { DARABONBA_GET(evictionSoft_) };
    Darabonba::Json & evictionSoft() { DARABONBA_GET(evictionSoft_) };
    inline KubeletConfig& setEvictionSoft(const Darabonba::Json & evictionSoft) { DARABONBA_SET_VALUE(evictionSoft_, evictionSoft) };
    inline KubeletConfig& setEvictionSoft(Darabonba::Json & evictionSoft) { DARABONBA_SET_RVALUE(evictionSoft_, evictionSoft) };


    // evictionSoftGracePeriod Field Functions 
    bool hasEvictionSoftGracePeriod() const { return this->evictionSoftGracePeriod_ != nullptr;};
    void deleteEvictionSoftGracePeriod() { this->evictionSoftGracePeriod_ = nullptr;};
    inline     const Darabonba::Json & evictionSoftGracePeriod() const { DARABONBA_GET(evictionSoftGracePeriod_) };
    Darabonba::Json & evictionSoftGracePeriod() { DARABONBA_GET(evictionSoftGracePeriod_) };
    inline KubeletConfig& setEvictionSoftGracePeriod(const Darabonba::Json & evictionSoftGracePeriod) { DARABONBA_SET_VALUE(evictionSoftGracePeriod_, evictionSoftGracePeriod) };
    inline KubeletConfig& setEvictionSoftGracePeriod(Darabonba::Json & evictionSoftGracePeriod) { DARABONBA_SET_RVALUE(evictionSoftGracePeriod_, evictionSoftGracePeriod) };


    // featureGates Field Functions 
    bool hasFeatureGates() const { return this->featureGates_ != nullptr;};
    void deleteFeatureGates() { this->featureGates_ = nullptr;};
    inline     const Darabonba::Json & featureGates() const { DARABONBA_GET(featureGates_) };
    Darabonba::Json & featureGates() { DARABONBA_GET(featureGates_) };
    inline KubeletConfig& setFeatureGates(const Darabonba::Json & featureGates) { DARABONBA_SET_VALUE(featureGates_, featureGates) };
    inline KubeletConfig& setFeatureGates(Darabonba::Json & featureGates) { DARABONBA_SET_RVALUE(featureGates_, featureGates) };


    // imageGCHighThresholdPercent Field Functions 
    bool hasImageGCHighThresholdPercent() const { return this->imageGCHighThresholdPercent_ != nullptr;};
    void deleteImageGCHighThresholdPercent() { this->imageGCHighThresholdPercent_ = nullptr;};
    inline int32_t imageGCHighThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(imageGCHighThresholdPercent_, 0) };
    inline KubeletConfig& setImageGCHighThresholdPercent(int32_t imageGCHighThresholdPercent) { DARABONBA_PTR_SET_VALUE(imageGCHighThresholdPercent_, imageGCHighThresholdPercent) };


    // imageGCLowThresholdPercent Field Functions 
    bool hasImageGCLowThresholdPercent() const { return this->imageGCLowThresholdPercent_ != nullptr;};
    void deleteImageGCLowThresholdPercent() { this->imageGCLowThresholdPercent_ = nullptr;};
    inline int32_t imageGCLowThresholdPercent() const { DARABONBA_PTR_GET_DEFAULT(imageGCLowThresholdPercent_, 0) };
    inline KubeletConfig& setImageGCLowThresholdPercent(int32_t imageGCLowThresholdPercent) { DARABONBA_PTR_SET_VALUE(imageGCLowThresholdPercent_, imageGCLowThresholdPercent) };


    // kubeAPIBurst Field Functions 
    bool hasKubeAPIBurst() const { return this->kubeAPIBurst_ != nullptr;};
    void deleteKubeAPIBurst() { this->kubeAPIBurst_ = nullptr;};
    inline int64_t kubeAPIBurst() const { DARABONBA_PTR_GET_DEFAULT(kubeAPIBurst_, 0L) };
    inline KubeletConfig& setKubeAPIBurst(int64_t kubeAPIBurst) { DARABONBA_PTR_SET_VALUE(kubeAPIBurst_, kubeAPIBurst) };


    // kubeAPIQPS Field Functions 
    bool hasKubeAPIQPS() const { return this->kubeAPIQPS_ != nullptr;};
    void deleteKubeAPIQPS() { this->kubeAPIQPS_ = nullptr;};
    inline int64_t kubeAPIQPS() const { DARABONBA_PTR_GET_DEFAULT(kubeAPIQPS_, 0L) };
    inline KubeletConfig& setKubeAPIQPS(int64_t kubeAPIQPS) { DARABONBA_PTR_SET_VALUE(kubeAPIQPS_, kubeAPIQPS) };


    // kubeReserved Field Functions 
    bool hasKubeReserved() const { return this->kubeReserved_ != nullptr;};
    void deleteKubeReserved() { this->kubeReserved_ = nullptr;};
    inline     const Darabonba::Json & kubeReserved() const { DARABONBA_GET(kubeReserved_) };
    Darabonba::Json & kubeReserved() { DARABONBA_GET(kubeReserved_) };
    inline KubeletConfig& setKubeReserved(const Darabonba::Json & kubeReserved) { DARABONBA_SET_VALUE(kubeReserved_, kubeReserved) };
    inline KubeletConfig& setKubeReserved(Darabonba::Json & kubeReserved) { DARABONBA_SET_RVALUE(kubeReserved_, kubeReserved) };


    // maxPods Field Functions 
    bool hasMaxPods() const { return this->maxPods_ != nullptr;};
    void deleteMaxPods() { this->maxPods_ = nullptr;};
    inline int64_t maxPods() const { DARABONBA_PTR_GET_DEFAULT(maxPods_, 0L) };
    inline KubeletConfig& setMaxPods(int64_t maxPods) { DARABONBA_PTR_SET_VALUE(maxPods_, maxPods) };


    // memoryManagerPolicy Field Functions 
    bool hasMemoryManagerPolicy() const { return this->memoryManagerPolicy_ != nullptr;};
    void deleteMemoryManagerPolicy() { this->memoryManagerPolicy_ = nullptr;};
    inline string memoryManagerPolicy() const { DARABONBA_PTR_GET_DEFAULT(memoryManagerPolicy_, "") };
    inline KubeletConfig& setMemoryManagerPolicy(string memoryManagerPolicy) { DARABONBA_PTR_SET_VALUE(memoryManagerPolicy_, memoryManagerPolicy) };


    // podPidsLimit Field Functions 
    bool hasPodPidsLimit() const { return this->podPidsLimit_ != nullptr;};
    void deletePodPidsLimit() { this->podPidsLimit_ = nullptr;};
    inline int64_t podPidsLimit() const { DARABONBA_PTR_GET_DEFAULT(podPidsLimit_, 0L) };
    inline KubeletConfig& setPodPidsLimit(int64_t podPidsLimit) { DARABONBA_PTR_SET_VALUE(podPidsLimit_, podPidsLimit) };


    // readOnlyPort Field Functions 
    bool hasReadOnlyPort() const { return this->readOnlyPort_ != nullptr;};
    void deleteReadOnlyPort() { this->readOnlyPort_ = nullptr;};
    inline int64_t readOnlyPort() const { DARABONBA_PTR_GET_DEFAULT(readOnlyPort_, 0L) };
    inline KubeletConfig& setReadOnlyPort(int64_t readOnlyPort) { DARABONBA_PTR_SET_VALUE(readOnlyPort_, readOnlyPort) };


    // registryBurst Field Functions 
    bool hasRegistryBurst() const { return this->registryBurst_ != nullptr;};
    void deleteRegistryBurst() { this->registryBurst_ = nullptr;};
    inline int64_t registryBurst() const { DARABONBA_PTR_GET_DEFAULT(registryBurst_, 0L) };
    inline KubeletConfig& setRegistryBurst(int64_t registryBurst) { DARABONBA_PTR_SET_VALUE(registryBurst_, registryBurst) };


    // registryPullQPS Field Functions 
    bool hasRegistryPullQPS() const { return this->registryPullQPS_ != nullptr;};
    void deleteRegistryPullQPS() { this->registryPullQPS_ = nullptr;};
    inline int64_t registryPullQPS() const { DARABONBA_PTR_GET_DEFAULT(registryPullQPS_, 0L) };
    inline KubeletConfig& setRegistryPullQPS(int64_t registryPullQPS) { DARABONBA_PTR_SET_VALUE(registryPullQPS_, registryPullQPS) };


    // reservedMemory Field Functions 
    bool hasReservedMemory() const { return this->reservedMemory_ != nullptr;};
    void deleteReservedMemory() { this->reservedMemory_ = nullptr;};
    inline const vector<KubeletConfigReservedMemory> & reservedMemory() const { DARABONBA_PTR_GET_CONST(reservedMemory_, vector<KubeletConfigReservedMemory>) };
    inline vector<KubeletConfigReservedMemory> reservedMemory() { DARABONBA_PTR_GET(reservedMemory_, vector<KubeletConfigReservedMemory>) };
    inline KubeletConfig& setReservedMemory(const vector<KubeletConfigReservedMemory> & reservedMemory) { DARABONBA_PTR_SET_VALUE(reservedMemory_, reservedMemory) };
    inline KubeletConfig& setReservedMemory(vector<KubeletConfigReservedMemory> && reservedMemory) { DARABONBA_PTR_SET_RVALUE(reservedMemory_, reservedMemory) };


    // serializeImagePulls Field Functions 
    bool hasSerializeImagePulls() const { return this->serializeImagePulls_ != nullptr;};
    void deleteSerializeImagePulls() { this->serializeImagePulls_ = nullptr;};
    inline bool serializeImagePulls() const { DARABONBA_PTR_GET_DEFAULT(serializeImagePulls_, false) };
    inline KubeletConfig& setSerializeImagePulls(bool serializeImagePulls) { DARABONBA_PTR_SET_VALUE(serializeImagePulls_, serializeImagePulls) };


    // serverTLSBootstrap Field Functions 
    bool hasServerTLSBootstrap() const { return this->serverTLSBootstrap_ != nullptr;};
    void deleteServerTLSBootstrap() { this->serverTLSBootstrap_ = nullptr;};
    inline bool serverTLSBootstrap() const { DARABONBA_PTR_GET_DEFAULT(serverTLSBootstrap_, false) };
    inline KubeletConfig& setServerTLSBootstrap(bool serverTLSBootstrap) { DARABONBA_PTR_SET_VALUE(serverTLSBootstrap_, serverTLSBootstrap) };


    // systemReserved Field Functions 
    bool hasSystemReserved() const { return this->systemReserved_ != nullptr;};
    void deleteSystemReserved() { this->systemReserved_ = nullptr;};
    inline     const Darabonba::Json & systemReserved() const { DARABONBA_GET(systemReserved_) };
    Darabonba::Json & systemReserved() { DARABONBA_GET(systemReserved_) };
    inline KubeletConfig& setSystemReserved(const Darabonba::Json & systemReserved) { DARABONBA_SET_VALUE(systemReserved_, systemReserved) };
    inline KubeletConfig& setSystemReserved(Darabonba::Json & systemReserved) { DARABONBA_SET_RVALUE(systemReserved_, systemReserved) };


    // topologyManagerPolicy Field Functions 
    bool hasTopologyManagerPolicy() const { return this->topologyManagerPolicy_ != nullptr;};
    void deleteTopologyManagerPolicy() { this->topologyManagerPolicy_ = nullptr;};
    inline string topologyManagerPolicy() const { DARABONBA_PTR_GET_DEFAULT(topologyManagerPolicy_, "") };
    inline KubeletConfig& setTopologyManagerPolicy(string topologyManagerPolicy) { DARABONBA_PTR_SET_VALUE(topologyManagerPolicy_, topologyManagerPolicy) };


    // tracing Field Functions 
    bool hasTracing() const { return this->tracing_ != nullptr;};
    void deleteTracing() { this->tracing_ = nullptr;};
    inline const KubeletConfigTracing & tracing() const { DARABONBA_PTR_GET_CONST(tracing_, KubeletConfigTracing) };
    inline KubeletConfigTracing tracing() { DARABONBA_PTR_GET(tracing_, KubeletConfigTracing) };
    inline KubeletConfig& setTracing(const KubeletConfigTracing & tracing) { DARABONBA_PTR_SET_VALUE(tracing_, tracing) };
    inline KubeletConfig& setTracing(KubeletConfigTracing && tracing) { DARABONBA_PTR_SET_RVALUE(tracing_, tracing) };


  protected:
    std::shared_ptr<vector<string>> allowedUnsafeSysctls_ = nullptr;
    std::shared_ptr<vector<string>> clusterDNS_ = nullptr;
    std::shared_ptr<int64_t> containerLogMaxFiles_ = nullptr;
    std::shared_ptr<string> containerLogMaxSize_ = nullptr;
    std::shared_ptr<int32_t> containerLogMaxWorkers_ = nullptr;
    std::shared_ptr<string> containerLogMonitorInterval_ = nullptr;
    std::shared_ptr<bool> cpuCFSQuota_ = nullptr;
    std::shared_ptr<string> cpuCFSQuotaPeriod_ = nullptr;
    std::shared_ptr<string> cpuManagerPolicy_ = nullptr;
    std::shared_ptr<int64_t> eventBurst_ = nullptr;
    std::shared_ptr<int64_t> eventRecordQPS_ = nullptr;
    Darabonba::Json evictionHard_ = nullptr;
    Darabonba::Json evictionSoft_ = nullptr;
    Darabonba::Json evictionSoftGracePeriod_ = nullptr;
    Darabonba::Json featureGates_ = nullptr;
    std::shared_ptr<int32_t> imageGCHighThresholdPercent_ = nullptr;
    std::shared_ptr<int32_t> imageGCLowThresholdPercent_ = nullptr;
    std::shared_ptr<int64_t> kubeAPIBurst_ = nullptr;
    std::shared_ptr<int64_t> kubeAPIQPS_ = nullptr;
    Darabonba::Json kubeReserved_ = nullptr;
    std::shared_ptr<int64_t> maxPods_ = nullptr;
    std::shared_ptr<string> memoryManagerPolicy_ = nullptr;
    std::shared_ptr<int64_t> podPidsLimit_ = nullptr;
    std::shared_ptr<int64_t> readOnlyPort_ = nullptr;
    std::shared_ptr<int64_t> registryBurst_ = nullptr;
    std::shared_ptr<int64_t> registryPullQPS_ = nullptr;
    std::shared_ptr<vector<KubeletConfigReservedMemory>> reservedMemory_ = nullptr;
    std::shared_ptr<bool> serializeImagePulls_ = nullptr;
    std::shared_ptr<bool> serverTLSBootstrap_ = nullptr;
    Darabonba::Json systemReserved_ = nullptr;
    std::shared_ptr<string> topologyManagerPolicy_ = nullptr;
    std::shared_ptr<KubeletConfigTracing> tracing_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
