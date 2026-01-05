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
      // Specifies whether to deliver records to Simple Log Service. Default value: false.
      shared_ptr<bool> enabled_ {};
      // The name of the Logstore.
      shared_ptr<string> logstoreName_ {};
      // The name of the Simple Log Service project.
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
      // Specify whether to enable Cloud Assistant Session Manager. Valid values:
      // 
      // *   true: Enables the feature.
      // *   false: Disables the feature.
      // 
      // Notes:
      // 
      // *   The feature applies to all regions.
      shared_ptr<bool> sessionManagerEnabled_ {};
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
      // Specifies whether to deliver records to OSS. Default value: false.
      shared_ptr<bool> enabled_ {};
      // The OSS encryption algorithm. Valid values:
      // 
      // *   AES256
      // *   SM4
      shared_ptr<string> encryptionAlgorithm_ {};
      // The ID of the customer master key (CMK) when EncryptionType is set to KMS.
      shared_ptr<string> encryptionKeyId_ {};
      // The OSS encryption method. Valid values:
      // 
      // *   Inherit: the encryption method used by the specified bucket.
      // *   OssManaged: server-side encryption by using OSS-managed keys (SSE-OSS).
      // *   KMS: server-side encryption by using Key Management Service managed keys (SSE-KMS).
      shared_ptr<string> encryptionType_ {};
      // The prefix of the OSS bucket directory. The prefix must meet the following requirements:
      // 
      // *   The prefix can be up to 254 characters in length.
      // *   The prefix cannot start with a forward slash (/) or a backslash (\\\\).
      // 
      // Note: If you do not need a directory prefix, specify a pair of double quotation marks ("") for this parameter to clear the directory prefix that you specified.
      shared_ptr<string> prefix_ {};
    };

    class AgentUpgradeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentUpgradeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, AgentUpgradeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
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
        && this->enabled_ == nullptr && this->timeZone_ == nullptr; };
      // allowedUpgradeWindow Field Functions 
      bool hasAllowedUpgradeWindow() const { return this->allowedUpgradeWindow_ != nullptr;};
      void deleteAllowedUpgradeWindow() { this->allowedUpgradeWindow_ = nullptr;};
      inline const vector<string> & getAllowedUpgradeWindow() const { DARABONBA_PTR_GET_CONST(allowedUpgradeWindow_, vector<string>) };
      inline vector<string> getAllowedUpgradeWindow() { DARABONBA_PTR_GET(allowedUpgradeWindow_, vector<string>) };
      inline AgentUpgradeConfig& setAllowedUpgradeWindow(const vector<string> & allowedUpgradeWindow) { DARABONBA_PTR_SET_VALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };
      inline AgentUpgradeConfig& setAllowedUpgradeWindow(vector<string> && allowedUpgradeWindow) { DARABONBA_PTR_SET_RVALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };


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
      // The time windows during which Cloud Assistant Agent can be upgraded. The time windows can be accurate to minutes. The Coordinated Universal Time (UTC) time zone is used by default.
      // 
      // Make sure that the upgrade windows specified by this parameter are not shorter than 1 hour.
      // 
      // Specify each upgrade window in the following format: \\<Start time in the HH:mm format>-\\<End time in the HH:mm format>.
      // 
      // For example, [ "02:00-03:00", "05:00-06:00" ] specifies that Cloud Assistant Agent can be upgraded from 2:00:00 to 3:00:00 and from 5:00:00 to 6:00:00 every day in the UTC time zone.
      shared_ptr<vector<string>> allowedUpgradeWindow_ {};
      // Specifies whether to enable custom upgrade for Cloud Assistant Agent. If you set this parameter to false, an upgrade attempt is performed for Cloud Assistant Agent every 30 minutes.
      // 
      // Default value: false.
      shared_ptr<bool> enabled_ {};
      // The time zone of the time windows. Default value: UTC. You can specify a time zone in the following forms:
      // 
      // *   The time zone name. Examples: Asia/Shanghai and America/Los_Angeles.
      // *   The time offset from GMT. Examples: GMT+8:00 (UTC+8) and GMT-7:00 (UTC-7). You cannot add leading zeros to the hour value.
      shared_ptr<string> timeZone_ {};
    };

    virtual bool empty() const override { return this->agentUpgradeConfig_ == nullptr
        && this->ossDeliveryConfig_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->sessionManagerConfig_ == nullptr && this->settingType_ == nullptr && this->slsDeliveryConfig_ == nullptr; };
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
    // The configurations for upgrading Cloud Assistant Agent.
    shared_ptr<ModifyCloudAssistantSettingsRequest::AgentUpgradeConfig> agentUpgradeConfig_ {};
    // The configurations for delivering records to Object Storage Service (OSS).
    shared_ptr<ModifyCloudAssistantSettingsRequest::OssDeliveryConfig> ossDeliveryConfig_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Cloud Assistant Session Manager configuration.
    shared_ptr<ModifyCloudAssistantSettingsRequest::SessionManagerConfig> sessionManagerConfig_ {};
    // The Cloud Assistant feature. Set SettingType to one of the following valid values:
    // 
    // *   SessionManagerDelivery: the Session Record Delivery configurations.
    // *   InvocationDelivery: the Operation Content and Result Delivery configurations.
    // *   AgentUpgradeConfig: the Cloud Assistant Agent Upgrade configurations.
    // *   SessionManagerConfig: Cloud Assistant the SessionManager configuration.
    // 
    // This parameter is required.
    shared_ptr<string> settingType_ {};
    // The configurations for delivering records to Simple Log Service.
    shared_ptr<ModifyCloudAssistantSettingsRequest::SlsDeliveryConfig> slsDeliveryConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
