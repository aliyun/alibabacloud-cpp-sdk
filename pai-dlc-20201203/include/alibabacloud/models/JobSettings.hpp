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
    virtual bool empty() const override { this->advancedSettings_ != nullptr
        && this->allocateAllRDMADevices_ != nullptr && this->businessUserId_ != nullptr && this->caller_ != nullptr && this->dataJuicerConfig_ != nullptr && this->disableEcsStockCheck_ != nullptr
        && this->driver_ != nullptr && this->enableCPUAffinity_ != nullptr && this->enableDSWDev_ != nullptr && this->enableErrorMonitoringInAIMaster_ != nullptr && this->enableOssAppend_ != nullptr
        && this->enableRDMA_ != nullptr && this->enableSanityCheck_ != nullptr && this->enableTideResource_ != nullptr && this->errorMonitoringArgs_ != nullptr && this->jobReservedMinutes_ != nullptr
        && this->jobReservedPolicy_ != nullptr && this->modelConfig_ != nullptr && this->oversoldType_ != nullptr && this->pipelineId_ != nullptr && this->sanityCheckArgs_ != nullptr
        && this->tags_ != nullptr; };
    // advancedSettings Field Functions 
    bool hasAdvancedSettings() const { return this->advancedSettings_ != nullptr;};
    void deleteAdvancedSettings() { this->advancedSettings_ = nullptr;};
    inline     const Darabonba::Json & advancedSettings() const { DARABONBA_GET(advancedSettings_) };
    Darabonba::Json & advancedSettings() { DARABONBA_GET(advancedSettings_) };
    inline JobSettings& setAdvancedSettings(const Darabonba::Json & advancedSettings) { DARABONBA_SET_VALUE(advancedSettings_, advancedSettings) };
    inline JobSettings& setAdvancedSettings(Darabonba::Json & advancedSettings) { DARABONBA_SET_RVALUE(advancedSettings_, advancedSettings) };


    // allocateAllRDMADevices Field Functions 
    bool hasAllocateAllRDMADevices() const { return this->allocateAllRDMADevices_ != nullptr;};
    void deleteAllocateAllRDMADevices() { this->allocateAllRDMADevices_ = nullptr;};
    inline bool allocateAllRDMADevices() const { DARABONBA_PTR_GET_DEFAULT(allocateAllRDMADevices_, false) };
    inline JobSettings& setAllocateAllRDMADevices(bool allocateAllRDMADevices) { DARABONBA_PTR_SET_VALUE(allocateAllRDMADevices_, allocateAllRDMADevices) };


    // businessUserId Field Functions 
    bool hasBusinessUserId() const { return this->businessUserId_ != nullptr;};
    void deleteBusinessUserId() { this->businessUserId_ = nullptr;};
    inline string businessUserId() const { DARABONBA_PTR_GET_DEFAULT(businessUserId_, "") };
    inline JobSettings& setBusinessUserId(string businessUserId) { DARABONBA_PTR_SET_VALUE(businessUserId_, businessUserId) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline JobSettings& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // dataJuicerConfig Field Functions 
    bool hasDataJuicerConfig() const { return this->dataJuicerConfig_ != nullptr;};
    void deleteDataJuicerConfig() { this->dataJuicerConfig_ = nullptr;};
    inline const DataJuicerConfig & dataJuicerConfig() const { DARABONBA_PTR_GET_CONST(dataJuicerConfig_, DataJuicerConfig) };
    inline DataJuicerConfig dataJuicerConfig() { DARABONBA_PTR_GET(dataJuicerConfig_, DataJuicerConfig) };
    inline JobSettings& setDataJuicerConfig(const DataJuicerConfig & dataJuicerConfig) { DARABONBA_PTR_SET_VALUE(dataJuicerConfig_, dataJuicerConfig) };
    inline JobSettings& setDataJuicerConfig(DataJuicerConfig && dataJuicerConfig) { DARABONBA_PTR_SET_RVALUE(dataJuicerConfig_, dataJuicerConfig) };


    // disableEcsStockCheck Field Functions 
    bool hasDisableEcsStockCheck() const { return this->disableEcsStockCheck_ != nullptr;};
    void deleteDisableEcsStockCheck() { this->disableEcsStockCheck_ = nullptr;};
    inline bool disableEcsStockCheck() const { DARABONBA_PTR_GET_DEFAULT(disableEcsStockCheck_, false) };
    inline JobSettings& setDisableEcsStockCheck(bool disableEcsStockCheck) { DARABONBA_PTR_SET_VALUE(disableEcsStockCheck_, disableEcsStockCheck) };


    // driver Field Functions 
    bool hasDriver() const { return this->driver_ != nullptr;};
    void deleteDriver() { this->driver_ = nullptr;};
    inline string driver() const { DARABONBA_PTR_GET_DEFAULT(driver_, "") };
    inline JobSettings& setDriver(string driver) { DARABONBA_PTR_SET_VALUE(driver_, driver) };


    // enableCPUAffinity Field Functions 
    bool hasEnableCPUAffinity() const { return this->enableCPUAffinity_ != nullptr;};
    void deleteEnableCPUAffinity() { this->enableCPUAffinity_ = nullptr;};
    inline bool enableCPUAffinity() const { DARABONBA_PTR_GET_DEFAULT(enableCPUAffinity_, false) };
    inline JobSettings& setEnableCPUAffinity(bool enableCPUAffinity) { DARABONBA_PTR_SET_VALUE(enableCPUAffinity_, enableCPUAffinity) };


    // enableDSWDev Field Functions 
    bool hasEnableDSWDev() const { return this->enableDSWDev_ != nullptr;};
    void deleteEnableDSWDev() { this->enableDSWDev_ = nullptr;};
    inline bool enableDSWDev() const { DARABONBA_PTR_GET_DEFAULT(enableDSWDev_, false) };
    inline JobSettings& setEnableDSWDev(bool enableDSWDev) { DARABONBA_PTR_SET_VALUE(enableDSWDev_, enableDSWDev) };


    // enableErrorMonitoringInAIMaster Field Functions 
    bool hasEnableErrorMonitoringInAIMaster() const { return this->enableErrorMonitoringInAIMaster_ != nullptr;};
    void deleteEnableErrorMonitoringInAIMaster() { this->enableErrorMonitoringInAIMaster_ = nullptr;};
    inline bool enableErrorMonitoringInAIMaster() const { DARABONBA_PTR_GET_DEFAULT(enableErrorMonitoringInAIMaster_, false) };
    inline JobSettings& setEnableErrorMonitoringInAIMaster(bool enableErrorMonitoringInAIMaster) { DARABONBA_PTR_SET_VALUE(enableErrorMonitoringInAIMaster_, enableErrorMonitoringInAIMaster) };


    // enableOssAppend Field Functions 
    bool hasEnableOssAppend() const { return this->enableOssAppend_ != nullptr;};
    void deleteEnableOssAppend() { this->enableOssAppend_ = nullptr;};
    inline bool enableOssAppend() const { DARABONBA_PTR_GET_DEFAULT(enableOssAppend_, false) };
    inline JobSettings& setEnableOssAppend(bool enableOssAppend) { DARABONBA_PTR_SET_VALUE(enableOssAppend_, enableOssAppend) };


    // enableRDMA Field Functions 
    bool hasEnableRDMA() const { return this->enableRDMA_ != nullptr;};
    void deleteEnableRDMA() { this->enableRDMA_ = nullptr;};
    inline bool enableRDMA() const { DARABONBA_PTR_GET_DEFAULT(enableRDMA_, false) };
    inline JobSettings& setEnableRDMA(bool enableRDMA) { DARABONBA_PTR_SET_VALUE(enableRDMA_, enableRDMA) };


    // enableSanityCheck Field Functions 
    bool hasEnableSanityCheck() const { return this->enableSanityCheck_ != nullptr;};
    void deleteEnableSanityCheck() { this->enableSanityCheck_ = nullptr;};
    inline bool enableSanityCheck() const { DARABONBA_PTR_GET_DEFAULT(enableSanityCheck_, false) };
    inline JobSettings& setEnableSanityCheck(bool enableSanityCheck) { DARABONBA_PTR_SET_VALUE(enableSanityCheck_, enableSanityCheck) };


    // enableTideResource Field Functions 
    bool hasEnableTideResource() const { return this->enableTideResource_ != nullptr;};
    void deleteEnableTideResource() { this->enableTideResource_ = nullptr;};
    inline bool enableTideResource() const { DARABONBA_PTR_GET_DEFAULT(enableTideResource_, false) };
    inline JobSettings& setEnableTideResource(bool enableTideResource) { DARABONBA_PTR_SET_VALUE(enableTideResource_, enableTideResource) };


    // errorMonitoringArgs Field Functions 
    bool hasErrorMonitoringArgs() const { return this->errorMonitoringArgs_ != nullptr;};
    void deleteErrorMonitoringArgs() { this->errorMonitoringArgs_ = nullptr;};
    inline string errorMonitoringArgs() const { DARABONBA_PTR_GET_DEFAULT(errorMonitoringArgs_, "") };
    inline JobSettings& setErrorMonitoringArgs(string errorMonitoringArgs) { DARABONBA_PTR_SET_VALUE(errorMonitoringArgs_, errorMonitoringArgs) };


    // jobReservedMinutes Field Functions 
    bool hasJobReservedMinutes() const { return this->jobReservedMinutes_ != nullptr;};
    void deleteJobReservedMinutes() { this->jobReservedMinutes_ = nullptr;};
    inline int32_t jobReservedMinutes() const { DARABONBA_PTR_GET_DEFAULT(jobReservedMinutes_, 0) };
    inline JobSettings& setJobReservedMinutes(int32_t jobReservedMinutes) { DARABONBA_PTR_SET_VALUE(jobReservedMinutes_, jobReservedMinutes) };


    // jobReservedPolicy Field Functions 
    bool hasJobReservedPolicy() const { return this->jobReservedPolicy_ != nullptr;};
    void deleteJobReservedPolicy() { this->jobReservedPolicy_ = nullptr;};
    inline string jobReservedPolicy() const { DARABONBA_PTR_GET_DEFAULT(jobReservedPolicy_, "") };
    inline JobSettings& setJobReservedPolicy(string jobReservedPolicy) { DARABONBA_PTR_SET_VALUE(jobReservedPolicy_, jobReservedPolicy) };


    // modelConfig Field Functions 
    bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
    void deleteModelConfig() { this->modelConfig_ = nullptr;};
    inline const ModelConfig & modelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, ModelConfig) };
    inline ModelConfig modelConfig() { DARABONBA_PTR_GET(modelConfig_, ModelConfig) };
    inline JobSettings& setModelConfig(const ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
    inline JobSettings& setModelConfig(ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


    // oversoldType Field Functions 
    bool hasOversoldType() const { return this->oversoldType_ != nullptr;};
    void deleteOversoldType() { this->oversoldType_ = nullptr;};
    inline string oversoldType() const { DARABONBA_PTR_GET_DEFAULT(oversoldType_, "") };
    inline JobSettings& setOversoldType(string oversoldType) { DARABONBA_PTR_SET_VALUE(oversoldType_, oversoldType) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string pipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline JobSettings& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // sanityCheckArgs Field Functions 
    bool hasSanityCheckArgs() const { return this->sanityCheckArgs_ != nullptr;};
    void deleteSanityCheckArgs() { this->sanityCheckArgs_ = nullptr;};
    inline string sanityCheckArgs() const { DARABONBA_PTR_GET_DEFAULT(sanityCheckArgs_, "") };
    inline JobSettings& setSanityCheckArgs(string sanityCheckArgs) { DARABONBA_PTR_SET_VALUE(sanityCheckArgs_, sanityCheckArgs) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> tags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline JobSettings& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline JobSettings& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    Darabonba::Json advancedSettings_ = nullptr;
    std::shared_ptr<bool> allocateAllRDMADevices_ = nullptr;
    std::shared_ptr<string> businessUserId_ = nullptr;
    std::shared_ptr<string> caller_ = nullptr;
    std::shared_ptr<DataJuicerConfig> dataJuicerConfig_ = nullptr;
    std::shared_ptr<bool> disableEcsStockCheck_ = nullptr;
    std::shared_ptr<string> driver_ = nullptr;
    std::shared_ptr<bool> enableCPUAffinity_ = nullptr;
    std::shared_ptr<bool> enableDSWDev_ = nullptr;
    std::shared_ptr<bool> enableErrorMonitoringInAIMaster_ = nullptr;
    std::shared_ptr<bool> enableOssAppend_ = nullptr;
    std::shared_ptr<bool> enableRDMA_ = nullptr;
    std::shared_ptr<bool> enableSanityCheck_ = nullptr;
    std::shared_ptr<bool> enableTideResource_ = nullptr;
    std::shared_ptr<string> errorMonitoringArgs_ = nullptr;
    std::shared_ptr<int32_t> jobReservedMinutes_ = nullptr;
    std::shared_ptr<string> jobReservedPolicy_ = nullptr;
    std::shared_ptr<ModelConfig> modelConfig_ = nullptr;
    std::shared_ptr<string> oversoldType_ = nullptr;
    std::shared_ptr<string> pipelineId_ = nullptr;
    std::shared_ptr<string> sanityCheckArgs_ = nullptr;
    std::shared_ptr<map<string, string>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
