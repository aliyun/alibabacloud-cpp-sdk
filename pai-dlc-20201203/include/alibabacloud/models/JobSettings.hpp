// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_JOBSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_JOBSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DataJuicerConfig.hpp>
#include <alibabacloud/models/ModelConfig.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class JobSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const JobSettings& obj) { 
      DARABONBA_ANY_TO_JSON(AdvancedSettings, advancedSettings_);
      DARABONBA_PTR_TO_JSON(AllocateAllRDMADevices, allocateAllRDMADevices_);
      DARABONBA_PTR_TO_JSON(AllowUnschedulableNodes, allowUnschedulableNodes_);
      DARABONBA_PTR_TO_JSON(BusinessUserId, businessUserId_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DataJuicerConfig, dataJuicerConfig_);
      DARABONBA_PTR_TO_JSON(DisableEcsStockCheck, disableEcsStockCheck_);
      DARABONBA_PTR_TO_JSON(Driver, driver_);
      DARABONBA_PTR_TO_JSON(EnableCPUAffinity, enableCPUAffinity_);
      DARABONBA_PTR_TO_JSON(EnableDSWDev, enableDSWDev_);
      DARABONBA_PTR_TO_JSON(EnableErrorMonitoringInAIMaster, enableErrorMonitoringInAIMaster_);
      DARABONBA_PTR_TO_JSON(EnableOssAppend, enableOssAppend_);
      DARABONBA_PTR_TO_JSON(EnableRDMA, enableRDMA_);
      DARABONBA_PTR_TO_JSON(EnableSanityCheck, enableSanityCheck_);
      DARABONBA_PTR_TO_JSON(EnableTideResource, enableTideResource_);
      DARABONBA_PTR_TO_JSON(ErrorMonitoringArgs, errorMonitoringArgs_);
      DARABONBA_PTR_TO_JSON(JobReservedMinutes, jobReservedMinutes_);
      DARABONBA_PTR_TO_JSON(JobReservedPolicy, jobReservedPolicy_);
      DARABONBA_PTR_TO_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_TO_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(SanityCheckArgs, sanityCheckArgs_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, JobSettings& obj) { 
      DARABONBA_ANY_FROM_JSON(AdvancedSettings, advancedSettings_);
      DARABONBA_PTR_FROM_JSON(AllocateAllRDMADevices, allocateAllRDMADevices_);
      DARABONBA_PTR_FROM_JSON(AllowUnschedulableNodes, allowUnschedulableNodes_);
      DARABONBA_PTR_FROM_JSON(BusinessUserId, businessUserId_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DataJuicerConfig, dataJuicerConfig_);
      DARABONBA_PTR_FROM_JSON(DisableEcsStockCheck, disableEcsStockCheck_);
      DARABONBA_PTR_FROM_JSON(Driver, driver_);
      DARABONBA_PTR_FROM_JSON(EnableCPUAffinity, enableCPUAffinity_);
      DARABONBA_PTR_FROM_JSON(EnableDSWDev, enableDSWDev_);
      DARABONBA_PTR_FROM_JSON(EnableErrorMonitoringInAIMaster, enableErrorMonitoringInAIMaster_);
      DARABONBA_PTR_FROM_JSON(EnableOssAppend, enableOssAppend_);
      DARABONBA_PTR_FROM_JSON(EnableRDMA, enableRDMA_);
      DARABONBA_PTR_FROM_JSON(EnableSanityCheck, enableSanityCheck_);
      DARABONBA_PTR_FROM_JSON(EnableTideResource, enableTideResource_);
      DARABONBA_PTR_FROM_JSON(ErrorMonitoringArgs, errorMonitoringArgs_);
      DARABONBA_PTR_FROM_JSON(JobReservedMinutes, jobReservedMinutes_);
      DARABONBA_PTR_FROM_JSON(JobReservedPolicy, jobReservedPolicy_);
      DARABONBA_PTR_FROM_JSON(ModelConfig, modelConfig_);
      DARABONBA_PTR_FROM_JSON(OversoldType, oversoldType_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(SanityCheckArgs, sanityCheckArgs_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    JobSettings() = default ;
    JobSettings(const JobSettings &) = default ;
    JobSettings(JobSettings &&) = default ;
    JobSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~JobSettings() = default ;
    JobSettings& operator=(const JobSettings &) = default ;
    JobSettings& operator=(JobSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedSettings_ == nullptr
        && this->allocateAllRDMADevices_ == nullptr && this->allowUnschedulableNodes_ == nullptr && this->businessUserId_ == nullptr && this->caller_ == nullptr && this->dataJuicerConfig_ == nullptr
        && this->disableEcsStockCheck_ == nullptr && this->driver_ == nullptr && this->enableCPUAffinity_ == nullptr && this->enableDSWDev_ == nullptr && this->enableErrorMonitoringInAIMaster_ == nullptr
        && this->enableOssAppend_ == nullptr && this->enableRDMA_ == nullptr && this->enableSanityCheck_ == nullptr && this->enableTideResource_ == nullptr && this->errorMonitoringArgs_ == nullptr
        && this->jobReservedMinutes_ == nullptr && this->jobReservedPolicy_ == nullptr && this->modelConfig_ == nullptr && this->oversoldType_ == nullptr && this->pipelineId_ == nullptr
        && this->sanityCheckArgs_ == nullptr && this->tags_ == nullptr; };
    // advancedSettings Field Functions 
    bool hasAdvancedSettings() const { return this->advancedSettings_ != nullptr;};
    void deleteAdvancedSettings() { this->advancedSettings_ = nullptr;};
    inline     const Darabonba::Json & getAdvancedSettings() const { DARABONBA_GET(advancedSettings_) };
    Darabonba::Json & getAdvancedSettings() { DARABONBA_GET(advancedSettings_) };
    inline JobSettings& setAdvancedSettings(const Darabonba::Json & advancedSettings) { DARABONBA_SET_VALUE(advancedSettings_, advancedSettings) };
    inline JobSettings& setAdvancedSettings(Darabonba::Json && advancedSettings) { DARABONBA_SET_RVALUE(advancedSettings_, advancedSettings) };


    // allocateAllRDMADevices Field Functions 
    bool hasAllocateAllRDMADevices() const { return this->allocateAllRDMADevices_ != nullptr;};
    void deleteAllocateAllRDMADevices() { this->allocateAllRDMADevices_ = nullptr;};
    inline bool getAllocateAllRDMADevices() const { DARABONBA_PTR_GET_DEFAULT(allocateAllRDMADevices_, false) };
    inline JobSettings& setAllocateAllRDMADevices(bool allocateAllRDMADevices) { DARABONBA_PTR_SET_VALUE(allocateAllRDMADevices_, allocateAllRDMADevices) };


    // allowUnschedulableNodes Field Functions 
    bool hasAllowUnschedulableNodes() const { return this->allowUnschedulableNodes_ != nullptr;};
    void deleteAllowUnschedulableNodes() { this->allowUnschedulableNodes_ = nullptr;};
    inline bool getAllowUnschedulableNodes() const { DARABONBA_PTR_GET_DEFAULT(allowUnschedulableNodes_, false) };
    inline JobSettings& setAllowUnschedulableNodes(bool allowUnschedulableNodes) { DARABONBA_PTR_SET_VALUE(allowUnschedulableNodes_, allowUnschedulableNodes) };


    // businessUserId Field Functions 
    bool hasBusinessUserId() const { return this->businessUserId_ != nullptr;};
    void deleteBusinessUserId() { this->businessUserId_ = nullptr;};
    inline string getBusinessUserId() const { DARABONBA_PTR_GET_DEFAULT(businessUserId_, "") };
    inline JobSettings& setBusinessUserId(string businessUserId) { DARABONBA_PTR_SET_VALUE(businessUserId_, businessUserId) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline JobSettings& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // dataJuicerConfig Field Functions 
    bool hasDataJuicerConfig() const { return this->dataJuicerConfig_ != nullptr;};
    void deleteDataJuicerConfig() { this->dataJuicerConfig_ = nullptr;};
    inline const DataJuicerConfig & getDataJuicerConfig() const { DARABONBA_PTR_GET_CONST(dataJuicerConfig_, DataJuicerConfig) };
    inline DataJuicerConfig getDataJuicerConfig() { DARABONBA_PTR_GET(dataJuicerConfig_, DataJuicerConfig) };
    inline JobSettings& setDataJuicerConfig(const DataJuicerConfig & dataJuicerConfig) { DARABONBA_PTR_SET_VALUE(dataJuicerConfig_, dataJuicerConfig) };
    inline JobSettings& setDataJuicerConfig(DataJuicerConfig && dataJuicerConfig) { DARABONBA_PTR_SET_RVALUE(dataJuicerConfig_, dataJuicerConfig) };


    // disableEcsStockCheck Field Functions 
    bool hasDisableEcsStockCheck() const { return this->disableEcsStockCheck_ != nullptr;};
    void deleteDisableEcsStockCheck() { this->disableEcsStockCheck_ = nullptr;};
    inline bool getDisableEcsStockCheck() const { DARABONBA_PTR_GET_DEFAULT(disableEcsStockCheck_, false) };
    inline JobSettings& setDisableEcsStockCheck(bool disableEcsStockCheck) { DARABONBA_PTR_SET_VALUE(disableEcsStockCheck_, disableEcsStockCheck) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string getDriver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline JobSettings& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // enableCPUAffinity Field Functions 
    bool hasEnableCPUAffinity() const { return this->enableCPUAffinity_ != nullptr;};
    void deleteEnableCPUAffinity() { this->enableCPUAffinity_ = nullptr;};
    inline bool getEnableCPUAffinity() const { DARABONBA_PTR_GET_DEFAULT(enableCPUAffinity_, false) };
    inline JobSettings& setEnableCPUAffinity(bool enableCPUAffinity) { DARABONBA_PTR_SET_VALUE(enableCPUAffinity_, enableCPUAffinity) };


    // enableDSWDev Field Functions 
    bool hasEnableDSWDev() const { return this->enableDSWDev_ != nullptr;};
    void deleteEnableDSWDev() { this->enableDSWDev_ = nullptr;};
    inline bool getEnableDSWDev() const { DARABONBA_PTR_GET_DEFAULT(enableDSWDev_, false) };
    inline JobSettings& setEnableDSWDev(bool enableDSWDev) { DARABONBA_PTR_SET_VALUE(enableDSWDev_, enableDSWDev) };


    // enableErrorMonitoringInAIMaster Field Functions 
    bool hasEnableErrorMonitoringInAIMaster() const { return this->enableErrorMonitoringInAIMaster_ != nullptr;};
    void deleteEnableErrorMonitoringInAIMaster() { this->enableErrorMonitoringInAIMaster_ = nullptr;};
    inline bool getEnableErrorMonitoringInAIMaster() const { DARABONBA_PTR_GET_DEFAULT(enableErrorMonitoringInAIMaster_, false) };
    inline JobSettings& setEnableErrorMonitoringInAIMaster(bool enableErrorMonitoringInAIMaster) { DARABONBA_PTR_SET_VALUE(enableErrorMonitoringInAIMaster_, enableErrorMonitoringInAIMaster) };


    // enableOssAppend Field Functions 
    bool hasEnableOssAppend() const { return this->enableOssAppend_ != nullptr;};
    void deleteEnableOssAppend() { this->enableOssAppend_ = nullptr;};
    inline bool getEnableOssAppend() const { DARABONBA_PTR_GET_DEFAULT(enableOssAppend_, false) };
    inline JobSettings& setEnableOssAppend(bool enableOssAppend) { DARABONBA_PTR_SET_VALUE(enableOssAppend_, enableOssAppend) };


    // enableRDMA Field Functions 
    bool hasEnableRDMA() const { return this->enableRDMA_ != nullptr;};
    void deleteEnableRDMA() { this->enableRDMA_ = nullptr;};
    inline bool getEnableRDMA() const { DARABONBA_PTR_GET_DEFAULT(enableRDMA_, false) };
    inline JobSettings& setEnableRDMA(bool enableRDMA) { DARABONBA_PTR_SET_VALUE(enableRDMA_, enableRDMA) };


    // enableSanityCheck Field Functions 
    bool hasEnableSanityCheck() const { return this->enableSanityCheck_ != nullptr;};
    void deleteEnableSanityCheck() { this->enableSanityCheck_ = nullptr;};
    inline bool getEnableSanityCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSanityCheck_, false) };
    inline JobSettings& setEnableSanityCheck(bool enableSanityCheck) { DARABONBA_PTR_SET_VALUE(enableSanityCheck_, enableSanityCheck) };


    // enableTideResource Field Functions 
    bool hasEnableTideResource() const { return this->enableTideResource_ != nullptr;};
    void deleteEnableTideResource() { this->enableTideResource_ = nullptr;};
    inline bool getEnableTideResource() const { DARABONBA_PTR_GET_DEFAULT(enableTideResource_, false) };
    inline JobSettings& setEnableTideResource(bool enableTideResource) { DARABONBA_PTR_SET_VALUE(enableTideResource_, enableTideResource) };


    // errorMonitoringArgs Field Functions 
    bool hasErrorMonitoringArgs() const { return this->errorMonitoringArgs_ != nullptr;};
    void deleteErrorMonitoringArgs() { this->errorMonitoringArgs_ = nullptr;};
    inline string getErrorMonitoringArgs() const { DARABONBA_PTR_GET_DEFAULT(errorMonitoringArgs_, "") };
    inline JobSettings& setErrorMonitoringArgs(string errorMonitoringArgs) { DARABONBA_PTR_SET_VALUE(errorMonitoringArgs_, errorMonitoringArgs) };


    // jobReservedMinutes Field Functions 
    bool hasJobReservedMinutes() const { return this->jobReservedMinutes_ != nullptr;};
    void deleteJobReservedMinutes() { this->jobReservedMinutes_ = nullptr;};
    inline int32_t getJobReservedMinutes() const { DARABONBA_PTR_GET_DEFAULT(jobReservedMinutes_, 0) };
    inline JobSettings& setJobReservedMinutes(int32_t jobReservedMinutes) { DARABONBA_PTR_SET_VALUE(jobReservedMinutes_, jobReservedMinutes) };


    // jobReservedPolicy Field Functions 
    bool hasJobReservedPolicy() const { return this->jobReservedPolicy_ != nullptr;};
    void deleteJobReservedPolicy() { this->jobReservedPolicy_ = nullptr;};
    inline string getJobReservedPolicy() const { DARABONBA_PTR_GET_DEFAULT(jobReservedPolicy_, "") };
    inline JobSettings& setJobReservedPolicy(string jobReservedPolicy) { DARABONBA_PTR_SET_VALUE(jobReservedPolicy_, jobReservedPolicy) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const ModelConfig & getModelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, ModelConfig) };
    inline ModelConfig getModelConfig() { DARABONBA_PTR_GET(modelConfig_, ModelConfig) };
    inline JobSettings& setModelConfig(const ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline JobSettings& setModelConfig(ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // oversoldType Field Functions 
    bool hasOversoldType() const { return this->oversoldType_ != nullptr;};
    void deleteOversoldType() { this->oversoldType_ = nullptr;};
    inline string getOversoldType() const { DARABONBA_PTR_GET_DEFAULT(oversoldType_, "") };
    inline JobSettings& setOversoldType(string oversoldType) { DARABONBA_PTR_SET_VALUE(oversoldType_, oversoldType) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline JobSettings& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // sanityCheckArgs Field Functions 
    bool hasSanityCheckArgs() const { return this->sanityCheckArgs_ != nullptr;};
    void deleteSanityCheckArgs() { this->sanityCheckArgs_ = nullptr;};
    inline string getSanityCheckArgs() const { DARABONBA_PTR_GET_DEFAULT(sanityCheckArgs_, "") };
    inline JobSettings& setSanityCheckArgs(string sanityCheckArgs) { DARABONBA_PTR_SET_VALUE(sanityCheckArgs_, sanityCheckArgs) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> getTags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline JobSettings& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline JobSettings& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The additional advanced parameter configurations.
    Darabonba::Json advancedSettings_ {};
    // Whether to mount all RDMA network interface controllers
    shared_ptr<bool> allocateAllRDMADevices_ {};
    shared_ptr<bool> allowUnschedulableNodes_ {};
    // The ID of the user associated with the job.
    shared_ptr<string> businessUserId_ {};
    // The caller.
    shared_ptr<string> caller_ {};
    shared_ptr<DataJuicerConfig> dataJuicerConfig_ {};
    // Whether inventory check is skipped. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> disableEcsStockCheck_ {};
    // The NVIDIA driver configurations.
    shared_ptr<string> driver_ {};
    // Whether the CPU affinity is enabled. This parameter takes effect only when you use subscription general computing resources.
    shared_ptr<bool> enableCPUAffinity_ {};
    shared_ptr<bool> enableDSWDev_ {};
    // Whether fault tolerance monitoring is enabled for the job. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableErrorMonitoringInAIMaster_ {};
    // Whether data is written to Object Storage Service (OSS) in append mode. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableOssAppend_ {};
    // Whether RDMA is enabled for the job. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableRDMA_ {};
    // Whether sanity check is enabled for the job. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableSanityCheck_ {};
    // Whether tidal resources are allowed for the job. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> enableTideResource_ {};
    // The configuration parameters after you enable fault tolerance monitoring. For example, you can specify whether to enable log hang-based detection.
    shared_ptr<string> errorMonitoringArgs_ {};
    // The retention period after the job ends. Unit: minutes.
    shared_ptr<int32_t> jobReservedMinutes_ {};
    // The retention policy after the job ends.
    shared_ptr<string> jobReservedPolicy_ {};
    shared_ptr<ModelConfig> modelConfig_ {};
    // Whether the job accepts oversold resources. Valid values: ForbiddenQuotaOverSold, AcceptQuotaOverSold, and ForceQuotaOverSold.
    shared_ptr<string> oversoldType_ {};
    // The pipeline ID.
    shared_ptr<string> pipelineId_ {};
    // The configuration parameters for sanity check.
    shared_ptr<string> sanityCheckArgs_ {};
    // The custom tag.
    shared_ptr<map<string, string>> tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
