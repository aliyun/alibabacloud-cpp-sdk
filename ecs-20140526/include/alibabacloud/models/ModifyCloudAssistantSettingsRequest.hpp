// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDASSISTANTSETTINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyCloudAssistantSettingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudAssistantSettingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentUpgradeConfig, agentUpgradeConfig_);
      DARABONBA_PTR_TO_JSON(OssDeliveryConfig, ossDeliveryConfig_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceUsageConfig, resourceUsageConfig_);
      DARABONBA_PTR_TO_JSON(SessionManagerConfig, sessionManagerConfig_);
      DARABONBA_PTR_TO_JSON(SettingType, settingType_);
      DARABONBA_PTR_TO_JSON(SlsDeliveryConfig, slsDeliveryConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudAssistantSettingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentUpgradeConfig, agentUpgradeConfig_);
      DARABONBA_PTR_FROM_JSON(OssDeliveryConfig, ossDeliveryConfig_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceUsageConfig, resourceUsageConfig_);
      DARABONBA_PTR_FROM_JSON(SessionManagerConfig, sessionManagerConfig_);
      DARABONBA_PTR_FROM_JSON(SettingType, settingType_);
      DARABONBA_PTR_FROM_JSON(SlsDeliveryConfig, slsDeliveryConfig_);
    };
    ModifyCloudAssistantSettingsRequest() = default ;
    ModifyCloudAssistantSettingsRequest(const ModifyCloudAssistantSettingsRequest &) = default ;
    ModifyCloudAssistantSettingsRequest(ModifyCloudAssistantSettingsRequest &&) = default ;
    ModifyCloudAssistantSettingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudAssistantSettingsRequest() = default ;
    ModifyCloudAssistantSettingsRequest& operator=(const ModifyCloudAssistantSettingsRequest &) = default ;
    ModifyCloudAssistantSettingsRequest& operator=(ModifyCloudAssistantSettingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlsDeliveryConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsDeliveryConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
        DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      };
      friend void from_json(const Darabonba::Json& j, SlsDeliveryConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(LogstoreName, logstoreName_);
        DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      };
      SlsDeliveryConfig() = default ;
      SlsDeliveryConfig(const SlsDeliveryConfig &) = default ;
      SlsDeliveryConfig(SlsDeliveryConfig &&) = default ;
      SlsDeliveryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsDeliveryConfig() = default ;
      SlsDeliveryConfig& operator=(const SlsDeliveryConfig &) = default ;
      SlsDeliveryConfig& operator=(SlsDeliveryConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enabled_ == nullptr
        && this->logstoreName_ == nullptr && this->projectName_ == nullptr; };
      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline SlsDeliveryConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // logstoreName Field Functions 
      bool hasLogstoreName() const { return this->logstoreName_ != nullptr;};
      void deleteLogstoreName() { this->logstoreName_ = nullptr;};
      inline string getLogstoreName() const { DARABONBA_PTR_GET_DEFAULT(logstoreName_, "") };
      inline SlsDeliveryConfig& setLogstoreName(string logstoreName) { DARABONBA_PTR_SET_VALUE(logstoreName_, logstoreName) };


      // projectName Field Functions 
      bool hasProjectName() const { return this->projectName_ != nullptr;};
      void deleteProjectName() { this->projectName_ = nullptr;};
      inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
      inline SlsDeliveryConfig& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    protected:
      // Specifies whether to enable delivery to SLS.
      // Default value: false.
      shared_ptr<bool> enabled_ {};
      // The name of the SLS Logstore.
      shared_ptr<string> logstoreName_ {};
      // The name of the SLS project.
      shared_ptr<string> projectName_ {};
    };

    class SessionManagerConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SessionManagerConfig& obj) { 
        DARABONBA_PTR_TO_JSON(SessionManagerEnabled, sessionManagerEnabled_);
      };
      friend void from_json(const Darabonba::Json& j, SessionManagerConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(SessionManagerEnabled, sessionManagerEnabled_);
      };
      SessionManagerConfig() = default ;
      SessionManagerConfig(const SessionManagerConfig &) = default ;
      SessionManagerConfig(SessionManagerConfig &&) = default ;
      SessionManagerConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SessionManagerConfig() = default ;
      SessionManagerConfig& operator=(const SessionManagerConfig &) = default ;
      SessionManagerConfig& operator=(SessionManagerConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sessionManagerEnabled_ == nullptr; };
      // sessionManagerEnabled Field Functions 
      bool hasSessionManagerEnabled() const { return this->sessionManagerEnabled_ != nullptr;};
      void deleteSessionManagerEnabled() { this->sessionManagerEnabled_ = nullptr;};
      inline bool getSessionManagerEnabled() const { DARABONBA_PTR_GET_DEFAULT(sessionManagerEnabled_, false) };
      inline SessionManagerConfig& setSessionManagerEnabled(bool sessionManagerEnabled) { DARABONBA_PTR_SET_VALUE(sessionManagerEnabled_, sessionManagerEnabled) };


    protected:
      // Specifies whether to enable the Cloud Assistant session feature. Valid values:
      // * true: Enabled.
      // * false: Disabled.
      // 
      // Note:
      // * Enabling or disabling the session feature takes effect across all regions.
      shared_ptr<bool> sessionManagerEnabled_ {};
    };

    class ResourceUsageConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceUsageConfig& obj) { 
        DARABONBA_PTR_TO_JSON(CpuLimit, cpuLimit_);
        DARABONBA_PTR_TO_JSON(KeepScriptFile, keepScriptFile_);
        DARABONBA_PTR_TO_JSON(LogFileCountLimit, logFileCountLimit_);
        DARABONBA_PTR_TO_JSON(LogSizeLimit, logSizeLimit_);
        DARABONBA_PTR_TO_JSON(MemoryLimit, memoryLimit_);
        DARABONBA_PTR_TO_JSON(OverloadLimit, overloadLimit_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceUsageConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(CpuLimit, cpuLimit_);
        DARABONBA_PTR_FROM_JSON(KeepScriptFile, keepScriptFile_);
        DARABONBA_PTR_FROM_JSON(LogFileCountLimit, logFileCountLimit_);
        DARABONBA_PTR_FROM_JSON(LogSizeLimit, logSizeLimit_);
        DARABONBA_PTR_FROM_JSON(MemoryLimit, memoryLimit_);
        DARABONBA_PTR_FROM_JSON(OverloadLimit, overloadLimit_);
      };
      ResourceUsageConfig() = default ;
      ResourceUsageConfig(const ResourceUsageConfig &) = default ;
      ResourceUsageConfig(ResourceUsageConfig &&) = default ;
      ResourceUsageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceUsageConfig() = default ;
      ResourceUsageConfig& operator=(const ResourceUsageConfig &) = default ;
      ResourceUsageConfig& operator=(ResourceUsageConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cpuLimit_ == nullptr
        && this->keepScriptFile_ == nullptr && this->logFileCountLimit_ == nullptr && this->logSizeLimit_ == nullptr && this->memoryLimit_ == nullptr && this->overloadLimit_ == nullptr; };
      // cpuLimit Field Functions 
      bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
      void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
      inline int32_t getCpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, 0) };
      inline ResourceUsageConfig& setCpuLimit(int32_t cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


      // keepScriptFile Field Functions 
      bool hasKeepScriptFile() const { return this->keepScriptFile_ != nullptr;};
      void deleteKeepScriptFile() { this->keepScriptFile_ = nullptr;};
      inline bool getKeepScriptFile() const { DARABONBA_PTR_GET_DEFAULT(keepScriptFile_, false) };
      inline ResourceUsageConfig& setKeepScriptFile(bool keepScriptFile) { DARABONBA_PTR_SET_VALUE(keepScriptFile_, keepScriptFile) };


      // logFileCountLimit Field Functions 
      bool hasLogFileCountLimit() const { return this->logFileCountLimit_ != nullptr;};
      void deleteLogFileCountLimit() { this->logFileCountLimit_ = nullptr;};
      inline int32_t getLogFileCountLimit() const { DARABONBA_PTR_GET_DEFAULT(logFileCountLimit_, 0) };
      inline ResourceUsageConfig& setLogFileCountLimit(int32_t logFileCountLimit) { DARABONBA_PTR_SET_VALUE(logFileCountLimit_, logFileCountLimit) };


      // logSizeLimit Field Functions 
      bool hasLogSizeLimit() const { return this->logSizeLimit_ != nullptr;};
      void deleteLogSizeLimit() { this->logSizeLimit_ = nullptr;};
      inline string getLogSizeLimit() const { DARABONBA_PTR_GET_DEFAULT(logSizeLimit_, "") };
      inline ResourceUsageConfig& setLogSizeLimit(string logSizeLimit) { DARABONBA_PTR_SET_VALUE(logSizeLimit_, logSizeLimit) };


      // memoryLimit Field Functions 
      bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
      void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
      inline string getMemoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, "") };
      inline ResourceUsageConfig& setMemoryLimit(string memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


      // overloadLimit Field Functions 
      bool hasOverloadLimit() const { return this->overloadLimit_ != nullptr;};
      void deleteOverloadLimit() { this->overloadLimit_ = nullptr;};
      inline int32_t getOverloadLimit() const { DARABONBA_PTR_GET_DEFAULT(overloadLimit_, 0) };
      inline ResourceUsageConfig& setOverloadLimit(int32_t overloadLimit) { DARABONBA_PTR_SET_VALUE(overloadLimit_, overloadLimit) };


    protected:
      // The maximum CPU usage allowed for the Cloud Assistant Agent main process.
      // 
      // - Unit: percentage.
      // 
      // - Valid values: 10 to 95.
      // 
      // - Default value: 20.
      shared_ptr<int32_t> cpuLimit_ {};
      // Specifies whether to retain the script file in the Cloud Assistant directory after command execution is complete.
      // Default value: false.
      shared_ptr<bool> keepScriptFile_ {};
      // The maximum number of Cloud Assistant log files to retain.
      // - Default value: 30.
      // - Minimum value: 7.
      // - Maximum value: 365.
      shared_ptr<int32_t> logFileCountLimit_ {};
      // The maximum size of a single Cloud Assistant log file. You must specify the unit (B|KB|MB).
      // - Default value: 100MB.
      // - Minimum value: 10MB.
      // - Maximum value: 1024MB.
      shared_ptr<string> logSizeLimit_ {};
      // The maximum memory usage allowed for the Cloud Assistant Agent main process. You must specify the unit (B|KB|MB).
      // - Default value: 50MB.
      // - Minimum value: 35MB.
      // - Maximum value: 1024MB.
      shared_ptr<string> memoryLimit_ {};
      // The maximum number of consecutive times that CPU or memory resources usage can exceed the limit before the Cloud Assistant Agent automatically stops running.
      // - Default value: 3.
      // - Minimum value: 3.
      shared_ptr<int32_t> overloadLimit_ {};
    };

    class OssDeliveryConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OssDeliveryConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
        DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
        DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
        DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      };
      friend void from_json(const Darabonba::Json& j, OssDeliveryConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
        DARABONBA_PTR_FROM_JSON(EncryptionKeyId, encryptionKeyId_);
        DARABONBA_PTR_FROM_JSON(EncryptionType, encryptionType_);
        DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      };
      OssDeliveryConfig() = default ;
      OssDeliveryConfig(const OssDeliveryConfig &) = default ;
      OssDeliveryConfig(OssDeliveryConfig &&) = default ;
      OssDeliveryConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OssDeliveryConfig() = default ;
      OssDeliveryConfig& operator=(const OssDeliveryConfig &) = default ;
      OssDeliveryConfig& operator=(OssDeliveryConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->enabled_ == nullptr && this->encryptionAlgorithm_ == nullptr && this->encryptionKeyId_ == nullptr && this->encryptionType_ == nullptr && this->prefix_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline OssDeliveryConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline OssDeliveryConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // encryptionAlgorithm Field Functions 
      bool hasEncryptionAlgorithm() const { return this->encryptionAlgorithm_ != nullptr;};
      void deleteEncryptionAlgorithm() { this->encryptionAlgorithm_ = nullptr;};
      inline string getEncryptionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptionAlgorithm_, "") };
      inline OssDeliveryConfig& setEncryptionAlgorithm(string encryptionAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptionAlgorithm_, encryptionAlgorithm) };


      // encryptionKeyId Field Functions 
      bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
      void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
      inline string getEncryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
      inline OssDeliveryConfig& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


      // encryptionType Field Functions 
      bool hasEncryptionType() const { return this->encryptionType_ != nullptr;};
      void deleteEncryptionType() { this->encryptionType_ = nullptr;};
      inline string getEncryptionType() const { DARABONBA_PTR_GET_DEFAULT(encryptionType_, "") };
      inline OssDeliveryConfig& setEncryptionType(string encryptionType) { DARABONBA_PTR_SET_VALUE(encryptionType_, encryptionType) };


      // prefix Field Functions 
      bool hasPrefix() const { return this->prefix_ != nullptr;};
      void deletePrefix() { this->prefix_ = nullptr;};
      inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
      inline OssDeliveryConfig& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    protected:
      // The name of the OSS bucket.
      shared_ptr<string> bucketName_ {};
      // Specifies whether to enable delivery to OSS. Default value: false.
      shared_ptr<bool> enabled_ {};
      // The OSS encryption algorithm. Valid values:
      // - AES256
      // - SM4
      shared_ptr<string> encryptionAlgorithm_ {};
      // The ID of the customer master key (CMK) when the encryption method is set to KMS.
      shared_ptr<string> encryptionKeyId_ {};
      // The OSS encryption method. Valid values:
      // - Inherit: inherits the encryption method of the bucket.
      // - OssManaged: OSS-managed encryption.
      // - KMS: Key Management Service (KMS) encryption.
      shared_ptr<string> encryptionType_ {};
      // The directory prefix of the OSS bucket. The following limits apply:
      // - The prefix cannot exceed 254 characters in length.
      // - The prefix cannot start with a forward slash (/) or a backslash (\\).
      // 
      // > Note: Set this parameter to an empty string ("") if no directory prefix is required. If a prefix was previously configured and is no longer needed, set this parameter to an empty string ("") to clear it.
      shared_ptr<string> prefix_ {};
    };

    class AgentUpgradeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentUpgradeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
        DARABONBA_PTR_TO_JSON(BootstrapUpgrade, bootstrapUpgrade_);
        DARABONBA_PTR_TO_JSON(DisableUpgrade, disableUpgrade_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, AgentUpgradeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
        DARABONBA_PTR_FROM_JSON(BootstrapUpgrade, bootstrapUpgrade_);
        DARABONBA_PTR_FROM_JSON(DisableUpgrade, disableUpgrade_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
      };
      AgentUpgradeConfig() = default ;
      AgentUpgradeConfig(const AgentUpgradeConfig &) = default ;
      AgentUpgradeConfig(AgentUpgradeConfig &&) = default ;
      AgentUpgradeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AgentUpgradeConfig() = default ;
      AgentUpgradeConfig& operator=(const AgentUpgradeConfig &) = default ;
      AgentUpgradeConfig& operator=(AgentUpgradeConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowedUpgradeWindow_ == nullptr
        && this->bootstrapUpgrade_ == nullptr && this->disableUpgrade_ == nullptr && this->enabled_ == nullptr && this->timeZone_ == nullptr; };
      // allowedUpgradeWindow Field Functions 
      bool hasAllowedUpgradeWindow() const { return this->allowedUpgradeWindow_ != nullptr;};
      void deleteAllowedUpgradeWindow() { this->allowedUpgradeWindow_ = nullptr;};
      inline const vector<string> & getAllowedUpgradeWindow() const { DARABONBA_PTR_GET_CONST(allowedUpgradeWindow_, vector<string>) };
      inline vector<string> getAllowedUpgradeWindow() { DARABONBA_PTR_GET(allowedUpgradeWindow_, vector<string>) };
      inline AgentUpgradeConfig& setAllowedUpgradeWindow(const vector<string> & allowedUpgradeWindow) { DARABONBA_PTR_SET_VALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };
      inline AgentUpgradeConfig& setAllowedUpgradeWindow(vector<string> && allowedUpgradeWindow) { DARABONBA_PTR_SET_RVALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };


      // bootstrapUpgrade Field Functions 
      bool hasBootstrapUpgrade() const { return this->bootstrapUpgrade_ != nullptr;};
      void deleteBootstrapUpgrade() { this->bootstrapUpgrade_ = nullptr;};
      inline bool getBootstrapUpgrade() const { DARABONBA_PTR_GET_DEFAULT(bootstrapUpgrade_, false) };
      inline AgentUpgradeConfig& setBootstrapUpgrade(bool bootstrapUpgrade) { DARABONBA_PTR_SET_VALUE(bootstrapUpgrade_, bootstrapUpgrade) };


      // disableUpgrade Field Functions 
      bool hasDisableUpgrade() const { return this->disableUpgrade_ != nullptr;};
      void deleteDisableUpgrade() { this->disableUpgrade_ = nullptr;};
      inline bool getDisableUpgrade() const { DARABONBA_PTR_GET_DEFAULT(disableUpgrade_, false) };
      inline AgentUpgradeConfig& setDisableUpgrade(bool disableUpgrade) { DARABONBA_PTR_SET_VALUE(disableUpgrade_, disableUpgrade) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline AgentUpgradeConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline AgentUpgradeConfig& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      // The list of time windows during which upgrades are allowed. The time can be specified down to the minute. The default time zone is UTC.
      // 
      // The interval between time windows cannot be less than 1 hour.
      // 
      // Format: Start time (HH:mm)-End time (HH:mm).
      // 
      // Example: [
      // "02:00-03:00",
      // "05:00-06:00"
      // ]
      // This indicates that upgrades are allowed daily from 02:00 to 03:00 and from 05:00 to 06:00 in the UTC time zone.
      shared_ptr<vector<string>> allowedUpgradeWindow_ {};
      // Specifies whether the Cloud Assistant Agent checks for updates and performs an upgrade immediately upon startup. Default value: true.
      // 
      // This parameter takes effect only when the Cloud Assistant Agent version meets the following minimum requirements:
      // 
      // - Windows: 2.1.4.1065
      // 
      // - Linux: 2.2.4.1065
      shared_ptr<bool> bootstrapUpgrade_ {};
      // Specifies whether to prevent the Cloud Assistant Agent from checking for and performing updates. Default value: false.
      // 
      // This parameter takes effect only when the Cloud Assistant Agent version meets the following minimum requirements:
      // 
      // - Windows: 2.1.4.1065
      // 
      // - Linux: 2.2.4.1065
      shared_ptr<bool> disableUpgrade_ {};
      // Specifies whether to enable the custom Agent upgrade configuration. If this parameter is set to false, the system attempts to upgrade the Agent every 30 minutes by default.
      // 
      // Default value: false.
      shared_ptr<bool> enabled_ {};
      // The time zone for the allowed upgrade time windows. Default value: UTC.
      // The time zone can be specified in the following formats:
      // - Full time zone name, such as Asia/Shanghai or America/Los_Angeles.
      // - GMT offset from Greenwich Mean Time, such as GMT+8:00 or GMT-7:00. Leading zeros are not supported for the hour value.
      shared_ptr<string> timeZone_ {};
    };

    virtual bool empty() const override { return this->agentUpgradeConfig_ == nullptr
        && this->ossDeliveryConfig_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->resourceUsageConfig_ == nullptr && this->sessionManagerConfig_ == nullptr && this->settingType_ == nullptr && this->slsDeliveryConfig_ == nullptr; };
    // agentUpgradeConfig Field Functions 
    bool hasAgentUpgradeConfig() const { return this->agentUpgradeConfig_ != nullptr;};
    void deleteAgentUpgradeConfig() { this->agentUpgradeConfig_ = nullptr;};
    inline const ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig & getAgentUpgradeConfig() const { DARABONBA_PTR_GET_CONST(agentUpgradeConfig_, ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig) };
    inline ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig getAgentUpgradeConfig() { DARABONBA_PTR_GET(agentUpgradeConfig_, ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig) };
    inline ModifyCloudAssistantSettingsRequest& setAgentUpgradeConfig(const ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig & agentUpgradeConfig) { DARABONBA_PTR_SET_VALUE(agentUpgradeConfig_, agentUpgradeConfig) };
    inline ModifyCloudAssistantSettingsRequest& setAgentUpgradeConfig(ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig && agentUpgradeConfig) { DARABONBA_PTR_SET_RVALUE(agentUpgradeConfig_, agentUpgradeConfig) };


    // ossDeliveryConfig Field Functions 
    bool hasOssDeliveryConfig() const { return this->ossDeliveryConfig_ != nullptr;};
    void deleteOssDeliveryConfig() { this->ossDeliveryConfig_ = nullptr;};
    inline const ModifyCloudAssistantSettingsRequest::OssDeliveryConfig & getOssDeliveryConfig() const { DARABONBA_PTR_GET_CONST(ossDeliveryConfig_, ModifyCloudAssistantSettingsRequest::OssDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest::OssDeliveryConfig getOssDeliveryConfig() { DARABONBA_PTR_GET(ossDeliveryConfig_, ModifyCloudAssistantSettingsRequest::OssDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest& setOssDeliveryConfig(const ModifyCloudAssistantSettingsRequest::OssDeliveryConfig & ossDeliveryConfig) { DARABONBA_PTR_SET_VALUE(ossDeliveryConfig_, ossDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest& setOssDeliveryConfig(ModifyCloudAssistantSettingsRequest::OssDeliveryConfig && ossDeliveryConfig) { DARABONBA_PTR_SET_RVALUE(ossDeliveryConfig_, ossDeliveryConfig) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyCloudAssistantSettingsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyCloudAssistantSettingsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyCloudAssistantSettingsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyCloudAssistantSettingsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyCloudAssistantSettingsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceUsageConfig Field Functions 
    bool hasResourceUsageConfig() const { return this->resourceUsageConfig_ != nullptr;};
    void deleteResourceUsageConfig() { this->resourceUsageConfig_ = nullptr;};
    inline const ModifyCloudAssistantSettingsRequest::ResourceUsageConfig & getResourceUsageConfig() const { DARABONBA_PTR_GET_CONST(resourceUsageConfig_, ModifyCloudAssistantSettingsRequest::ResourceUsageConfig) };
    inline ModifyCloudAssistantSettingsRequest::ResourceUsageConfig getResourceUsageConfig() { DARABONBA_PTR_GET(resourceUsageConfig_, ModifyCloudAssistantSettingsRequest::ResourceUsageConfig) };
    inline ModifyCloudAssistantSettingsRequest& setResourceUsageConfig(const ModifyCloudAssistantSettingsRequest::ResourceUsageConfig & resourceUsageConfig) { DARABONBA_PTR_SET_VALUE(resourceUsageConfig_, resourceUsageConfig) };
    inline ModifyCloudAssistantSettingsRequest& setResourceUsageConfig(ModifyCloudAssistantSettingsRequest::ResourceUsageConfig && resourceUsageConfig) { DARABONBA_PTR_SET_RVALUE(resourceUsageConfig_, resourceUsageConfig) };


    // sessionManagerConfig Field Functions 
    bool hasSessionManagerConfig() const { return this->sessionManagerConfig_ != nullptr;};
    void deleteSessionManagerConfig() { this->sessionManagerConfig_ = nullptr;};
    inline const ModifyCloudAssistantSettingsRequest::SessionManagerConfig & getSessionManagerConfig() const { DARABONBA_PTR_GET_CONST(sessionManagerConfig_, ModifyCloudAssistantSettingsRequest::SessionManagerConfig) };
    inline ModifyCloudAssistantSettingsRequest::SessionManagerConfig getSessionManagerConfig() { DARABONBA_PTR_GET(sessionManagerConfig_, ModifyCloudAssistantSettingsRequest::SessionManagerConfig) };
    inline ModifyCloudAssistantSettingsRequest& setSessionManagerConfig(const ModifyCloudAssistantSettingsRequest::SessionManagerConfig & sessionManagerConfig) { DARABONBA_PTR_SET_VALUE(sessionManagerConfig_, sessionManagerConfig) };
    inline ModifyCloudAssistantSettingsRequest& setSessionManagerConfig(ModifyCloudAssistantSettingsRequest::SessionManagerConfig && sessionManagerConfig) { DARABONBA_PTR_SET_RVALUE(sessionManagerConfig_, sessionManagerConfig) };


    // settingType Field Functions 
    bool hasSettingType() const { return this->settingType_ != nullptr;};
    void deleteSettingType() { this->settingType_ = nullptr;};
    inline string getSettingType() const { DARABONBA_PTR_GET_DEFAULT(settingType_, "") };
    inline ModifyCloudAssistantSettingsRequest& setSettingType(string settingType) { DARABONBA_PTR_SET_VALUE(settingType_, settingType) };


    // slsDeliveryConfig Field Functions 
    bool hasSlsDeliveryConfig() const { return this->slsDeliveryConfig_ != nullptr;};
    void deleteSlsDeliveryConfig() { this->slsDeliveryConfig_ = nullptr;};
    inline const ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig & getSlsDeliveryConfig() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfig_, ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig getSlsDeliveryConfig() { DARABONBA_PTR_GET(slsDeliveryConfig_, ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest& setSlsDeliveryConfig(const ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig & slsDeliveryConfig) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfig_, slsDeliveryConfig) };
    inline ModifyCloudAssistantSettingsRequest& setSlsDeliveryConfig(ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig && slsDeliveryConfig) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfig_, slsDeliveryConfig) };


  protected:
    // The Cloud Assistant Agent upgrade configuration.
    shared_ptr<ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig> agentUpgradeConfig_ {};
    // The OSS delivery configuration.
    shared_ptr<ModifyCloudAssistantSettingsRequest::OssDeliveryConfig> ossDeliveryConfig_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The Cloud Assistant resource usage configuration. This parameter takes effect only when the Cloud Assistant Agent version meets the following minimum requirements:
    // 
    // - Windows: 2.1.4.1065
    // 
    // - Linux: 2.2.4.1065
    shared_ptr<ModifyCloudAssistantSettingsRequest::ResourceUsageConfig> resourceUsageConfig_ {};
    // The Cloud Assistant session feature configuration.
    shared_ptr<ModifyCloudAssistantSettingsRequest::SessionManagerConfig> sessionManagerConfig_ {};
    // The service configuration type. Valid values:
    // - SessionManagerDelivery: session operation log delivery.
    // - InvocationDelivery: task execution log delivery.
    // - AgentUpgradeConfig: Cloud Assistant Agent upgrade configuration.
    // - SessionManagerConfig: Cloud Assistant SessionManager configuration.
    // 
    // This parameter is required.
    shared_ptr<string> settingType_ {};
    // The Simple Log Service (SLS) delivery configuration.
    shared_ptr<ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig> slsDeliveryConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
