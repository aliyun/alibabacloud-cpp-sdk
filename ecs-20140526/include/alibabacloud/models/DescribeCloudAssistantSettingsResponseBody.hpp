// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDASSISTANTSETTINGSRESPONSEBODY_HPP_
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
  class DescribeCloudAssistantSettingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudAssistantSettingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AgentUpgradeConfig, agentUpgradeConfig_);
      DARABONBA_PTR_TO_JSON(OssDeliveryConfigs, ossDeliveryConfigs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SessionManagerConfig, sessionManagerConfig_);
      DARABONBA_PTR_TO_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudAssistantSettingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentUpgradeConfig, agentUpgradeConfig_);
      DARABONBA_PTR_FROM_JSON(OssDeliveryConfigs, ossDeliveryConfigs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SessionManagerConfig, sessionManagerConfig_);
      DARABONBA_PTR_FROM_JSON(SlsDeliveryConfigs, slsDeliveryConfigs_);
    };
    DescribeCloudAssistantSettingsResponseBody() = default ;
    DescribeCloudAssistantSettingsResponseBody(const DescribeCloudAssistantSettingsResponseBody &) = default ;
    DescribeCloudAssistantSettingsResponseBody(DescribeCloudAssistantSettingsResponseBody &&) = default ;
    DescribeCloudAssistantSettingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudAssistantSettingsResponseBody() = default ;
    DescribeCloudAssistantSettingsResponseBody& operator=(const DescribeCloudAssistantSettingsResponseBody &) = default ;
    DescribeCloudAssistantSettingsResponseBody& operator=(DescribeCloudAssistantSettingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SlsDeliveryConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SlsDeliveryConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(SlsDeliveryConfig, slsDeliveryConfig_);
      };
      friend void from_json(const Darabonba::Json& j, SlsDeliveryConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(SlsDeliveryConfig, slsDeliveryConfig_);
      };
      SlsDeliveryConfigs() = default ;
      SlsDeliveryConfigs(const SlsDeliveryConfigs &) = default ;
      SlsDeliveryConfigs(SlsDeliveryConfigs &&) = default ;
      SlsDeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SlsDeliveryConfigs() = default ;
      SlsDeliveryConfigs& operator=(const SlsDeliveryConfigs &) = default ;
      SlsDeliveryConfigs& operator=(SlsDeliveryConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SlsDeliveryConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlsDeliveryConfig& obj) { 
          DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(LogstoreName, logstoreName_);
          DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
        };
        friend void from_json(const Darabonba::Json& j, SlsDeliveryConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
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
        virtual bool empty() const override { return this->deliveryType_ == nullptr
        && this->enabled_ == nullptr && this->logstoreName_ == nullptr && this->projectName_ == nullptr; };
        // deliveryType Field Functions 
        bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
        void deleteDeliveryType() { this->deliveryType_ = nullptr;};
        inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
        inline SlsDeliveryConfig& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


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
        // The type of items to be delivered. Valid values:
        // 
        // *   SessionManager: session records.
        // *   Invocation: task execution records.
        shared_ptr<string> deliveryType_ {};
        // Indicates whether to deliver the specified items to Simple Log Service.
        shared_ptr<bool> enabled_ {};
        // The name of the Logstore.
        shared_ptr<string> logstoreName_ {};
        // The name of the Simple Log Service project.
        shared_ptr<string> projectName_ {};
      };

      virtual bool empty() const override { return this->slsDeliveryConfig_ == nullptr; };
      // slsDeliveryConfig Field Functions 
      bool hasSlsDeliveryConfig() const { return this->slsDeliveryConfig_ != nullptr;};
      void deleteSlsDeliveryConfig() { this->slsDeliveryConfig_ = nullptr;};
      inline const vector<SlsDeliveryConfigs::SlsDeliveryConfig> & getSlsDeliveryConfig() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfig_, vector<SlsDeliveryConfigs::SlsDeliveryConfig>) };
      inline vector<SlsDeliveryConfigs::SlsDeliveryConfig> getSlsDeliveryConfig() { DARABONBA_PTR_GET(slsDeliveryConfig_, vector<SlsDeliveryConfigs::SlsDeliveryConfig>) };
      inline SlsDeliveryConfigs& setSlsDeliveryConfig(const vector<SlsDeliveryConfigs::SlsDeliveryConfig> & slsDeliveryConfig) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfig_, slsDeliveryConfig) };
      inline SlsDeliveryConfigs& setSlsDeliveryConfig(vector<SlsDeliveryConfigs::SlsDeliveryConfig> && slsDeliveryConfig) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfig_, slsDeliveryConfig) };


    protected:
      shared_ptr<vector<SlsDeliveryConfigs::SlsDeliveryConfig>> slsDeliveryConfig_ {};
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
      // Note:
      // 
      // *   The feature applies to all regions.
      shared_ptr<bool> sessionManagerEnabled_ {};
    };

    class OssDeliveryConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OssDeliveryConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(OssDeliveryConfig, ossDeliveryConfig_);
      };
      friend void from_json(const Darabonba::Json& j, OssDeliveryConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(OssDeliveryConfig, ossDeliveryConfig_);
      };
      OssDeliveryConfigs() = default ;
      OssDeliveryConfigs(const OssDeliveryConfigs &) = default ;
      OssDeliveryConfigs(OssDeliveryConfigs &&) = default ;
      OssDeliveryConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OssDeliveryConfigs() = default ;
      OssDeliveryConfigs& operator=(const OssDeliveryConfigs &) = default ;
      OssDeliveryConfigs& operator=(OssDeliveryConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OssDeliveryConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OssDeliveryConfig& obj) { 
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(DeliveryType, deliveryType_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
          DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
          DARABONBA_PTR_TO_JSON(EncryptionType, encryptionType_);
          DARABONBA_PTR_TO_JSON(Prefix, prefix_);
        };
        friend void from_json(const Darabonba::Json& j, OssDeliveryConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(DeliveryType, deliveryType_);
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
        && this->deliveryType_ == nullptr && this->enabled_ == nullptr && this->encryptionAlgorithm_ == nullptr && this->encryptionKeyId_ == nullptr && this->encryptionType_ == nullptr
        && this->prefix_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline OssDeliveryConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // deliveryType Field Functions 
        bool hasDeliveryType() const { return this->deliveryType_ != nullptr;};
        void deleteDeliveryType() { this->deliveryType_ = nullptr;};
        inline string getDeliveryType() const { DARABONBA_PTR_GET_DEFAULT(deliveryType_, "") };
        inline OssDeliveryConfig& setDeliveryType(string deliveryType) { DARABONBA_PTR_SET_VALUE(deliveryType_, deliveryType) };


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
        // The type of items to be delivered. Valid values:
        // 
        // *   SessionManager: session records.
        // *   Invocation: task execution records.
        shared_ptr<string> deliveryType_ {};
        // Indicates whether to deliver the specified items to OSS.
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
        // *   KMS: server-side encryption with Key Management Service (SSE-KMS).
        shared_ptr<string> encryptionType_ {};
        // The prefix of the OSS bucket directory.
        shared_ptr<string> prefix_ {};
      };

      virtual bool empty() const override { return this->ossDeliveryConfig_ == nullptr; };
      // ossDeliveryConfig Field Functions 
      bool hasOssDeliveryConfig() const { return this->ossDeliveryConfig_ != nullptr;};
      void deleteOssDeliveryConfig() { this->ossDeliveryConfig_ = nullptr;};
      inline const vector<OssDeliveryConfigs::OssDeliveryConfig> & getOssDeliveryConfig() const { DARABONBA_PTR_GET_CONST(ossDeliveryConfig_, vector<OssDeliveryConfigs::OssDeliveryConfig>) };
      inline vector<OssDeliveryConfigs::OssDeliveryConfig> getOssDeliveryConfig() { DARABONBA_PTR_GET(ossDeliveryConfig_, vector<OssDeliveryConfigs::OssDeliveryConfig>) };
      inline OssDeliveryConfigs& setOssDeliveryConfig(const vector<OssDeliveryConfigs::OssDeliveryConfig> & ossDeliveryConfig) { DARABONBA_PTR_SET_VALUE(ossDeliveryConfig_, ossDeliveryConfig) };
      inline OssDeliveryConfigs& setOssDeliveryConfig(vector<OssDeliveryConfigs::OssDeliveryConfig> && ossDeliveryConfig) { DARABONBA_PTR_SET_RVALUE(ossDeliveryConfig_, ossDeliveryConfig) };


    protected:
      shared_ptr<vector<OssDeliveryConfigs::OssDeliveryConfig>> ossDeliveryConfig_ {};
    };

    class AgentUpgradeConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AgentUpgradeConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedUpgradeWindows, allowedUpgradeWindows_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, AgentUpgradeConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedUpgradeWindows, allowedUpgradeWindows_);
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
      class AllowedUpgradeWindows : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllowedUpgradeWindows& obj) { 
          DARABONBA_PTR_TO_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
        };
        friend void from_json(const Darabonba::Json& j, AllowedUpgradeWindows& obj) { 
          DARABONBA_PTR_FROM_JSON(AllowedUpgradeWindow, allowedUpgradeWindow_);
        };
        AllowedUpgradeWindows() = default ;
        AllowedUpgradeWindows(const AllowedUpgradeWindows &) = default ;
        AllowedUpgradeWindows(AllowedUpgradeWindows &&) = default ;
        AllowedUpgradeWindows(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllowedUpgradeWindows() = default ;
        AllowedUpgradeWindows& operator=(const AllowedUpgradeWindows &) = default ;
        AllowedUpgradeWindows& operator=(AllowedUpgradeWindows &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->allowedUpgradeWindow_ == nullptr; };
        // allowedUpgradeWindow Field Functions 
        bool hasAllowedUpgradeWindow() const { return this->allowedUpgradeWindow_ != nullptr;};
        void deleteAllowedUpgradeWindow() { this->allowedUpgradeWindow_ = nullptr;};
        inline const vector<string> & getAllowedUpgradeWindow() const { DARABONBA_PTR_GET_CONST(allowedUpgradeWindow_, vector<string>) };
        inline vector<string> getAllowedUpgradeWindow() { DARABONBA_PTR_GET(allowedUpgradeWindow_, vector<string>) };
        inline AllowedUpgradeWindows& setAllowedUpgradeWindow(const vector<string> & allowedUpgradeWindow) { DARABONBA_PTR_SET_VALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };
        inline AllowedUpgradeWindows& setAllowedUpgradeWindow(vector<string> && allowedUpgradeWindow) { DARABONBA_PTR_SET_RVALUE(allowedUpgradeWindow_, allowedUpgradeWindow) };


      protected:
        shared_ptr<vector<string>> allowedUpgradeWindow_ {};
      };

      virtual bool empty() const override { return this->allowedUpgradeWindows_ == nullptr
        && this->enabled_ == nullptr && this->timeZone_ == nullptr; };
      // allowedUpgradeWindows Field Functions 
      bool hasAllowedUpgradeWindows() const { return this->allowedUpgradeWindows_ != nullptr;};
      void deleteAllowedUpgradeWindows() { this->allowedUpgradeWindows_ = nullptr;};
      inline const AgentUpgradeConfig::AllowedUpgradeWindows & getAllowedUpgradeWindows() const { DARABONBA_PTR_GET_CONST(allowedUpgradeWindows_, AgentUpgradeConfig::AllowedUpgradeWindows) };
      inline AgentUpgradeConfig::AllowedUpgradeWindows getAllowedUpgradeWindows() { DARABONBA_PTR_GET(allowedUpgradeWindows_, AgentUpgradeConfig::AllowedUpgradeWindows) };
      inline AgentUpgradeConfig& setAllowedUpgradeWindows(const AgentUpgradeConfig::AllowedUpgradeWindows & allowedUpgradeWindows) { DARABONBA_PTR_SET_VALUE(allowedUpgradeWindows_, allowedUpgradeWindows) };
      inline AgentUpgradeConfig& setAllowedUpgradeWindows(AgentUpgradeConfig::AllowedUpgradeWindows && allowedUpgradeWindows) { DARABONBA_PTR_SET_RVALUE(allowedUpgradeWindows_, allowedUpgradeWindows) };


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
      // The time windows during which Cloud Assistant Agent can be upgraded.
      shared_ptr<AgentUpgradeConfig::AllowedUpgradeWindows> allowedUpgradeWindows_ {};
      // Indicates whether custom upgrade is enabled for Cloud Assistant Agent. If the value is false or empty, an upgrade attempt is performed for Cloud Assistant Agent every 30 minutes.
      shared_ptr<bool> enabled_ {};
      // The time zone of the time windows.
      shared_ptr<string> timeZone_ {};
    };

    virtual bool empty() const override { return this->agentUpgradeConfig_ == nullptr
        && this->ossDeliveryConfigs_ == nullptr && this->requestId_ == nullptr && this->sessionManagerConfig_ == nullptr && this->slsDeliveryConfigs_ == nullptr; };
    // agentUpgradeConfig Field Functions 
    bool hasAgentUpgradeConfig() const { return this->agentUpgradeConfig_ != nullptr;};
    void deleteAgentUpgradeConfig() { this->agentUpgradeConfig_ = nullptr;};
    inline const DescribeCloudAssistantSettingsResponseBody::AgentUpgradeConfig & getAgentUpgradeConfig() const { DARABONBA_PTR_GET_CONST(agentUpgradeConfig_, DescribeCloudAssistantSettingsResponseBody::AgentUpgradeConfig) };
    inline DescribeCloudAssistantSettingsResponseBody::AgentUpgradeConfig getAgentUpgradeConfig() { DARABONBA_PTR_GET(agentUpgradeConfig_, DescribeCloudAssistantSettingsResponseBody::AgentUpgradeConfig) };
    inline DescribeCloudAssistantSettingsResponseBody& setAgentUpgradeConfig(const DescribeCloudAssistantSettingsResponseBody::AgentUpgradeConfig & agentUpgradeConfig) { DARABONBA_PTR_SET_VALUE(agentUpgradeConfig_, agentUpgradeConfig) };
    inline DescribeCloudAssistantSettingsResponseBody& setAgentUpgradeConfig(DescribeCloudAssistantSettingsResponseBody::AgentUpgradeConfig && agentUpgradeConfig) { DARABONBA_PTR_SET_RVALUE(agentUpgradeConfig_, agentUpgradeConfig) };


    // ossDeliveryConfigs Field Functions 
    bool hasOssDeliveryConfigs() const { return this->ossDeliveryConfigs_ != nullptr;};
    void deleteOssDeliveryConfigs() { this->ossDeliveryConfigs_ = nullptr;};
    inline const DescribeCloudAssistantSettingsResponseBody::OssDeliveryConfigs & getOssDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(ossDeliveryConfigs_, DescribeCloudAssistantSettingsResponseBody::OssDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody::OssDeliveryConfigs getOssDeliveryConfigs() { DARABONBA_PTR_GET(ossDeliveryConfigs_, DescribeCloudAssistantSettingsResponseBody::OssDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody& setOssDeliveryConfigs(const DescribeCloudAssistantSettingsResponseBody::OssDeliveryConfigs & ossDeliveryConfigs) { DARABONBA_PTR_SET_VALUE(ossDeliveryConfigs_, ossDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody& setOssDeliveryConfigs(DescribeCloudAssistantSettingsResponseBody::OssDeliveryConfigs && ossDeliveryConfigs) { DARABONBA_PTR_SET_RVALUE(ossDeliveryConfigs_, ossDeliveryConfigs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudAssistantSettingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessionManagerConfig Field Functions 
    bool hasSessionManagerConfig() const { return this->sessionManagerConfig_ != nullptr;};
    void deleteSessionManagerConfig() { this->sessionManagerConfig_ = nullptr;};
    inline const DescribeCloudAssistantSettingsResponseBody::SessionManagerConfig & getSessionManagerConfig() const { DARABONBA_PTR_GET_CONST(sessionManagerConfig_, DescribeCloudAssistantSettingsResponseBody::SessionManagerConfig) };
    inline DescribeCloudAssistantSettingsResponseBody::SessionManagerConfig getSessionManagerConfig() { DARABONBA_PTR_GET(sessionManagerConfig_, DescribeCloudAssistantSettingsResponseBody::SessionManagerConfig) };
    inline DescribeCloudAssistantSettingsResponseBody& setSessionManagerConfig(const DescribeCloudAssistantSettingsResponseBody::SessionManagerConfig & sessionManagerConfig) { DARABONBA_PTR_SET_VALUE(sessionManagerConfig_, sessionManagerConfig) };
    inline DescribeCloudAssistantSettingsResponseBody& setSessionManagerConfig(DescribeCloudAssistantSettingsResponseBody::SessionManagerConfig && sessionManagerConfig) { DARABONBA_PTR_SET_RVALUE(sessionManagerConfig_, sessionManagerConfig) };


    // slsDeliveryConfigs Field Functions 
    bool hasSlsDeliveryConfigs() const { return this->slsDeliveryConfigs_ != nullptr;};
    void deleteSlsDeliveryConfigs() { this->slsDeliveryConfigs_ = nullptr;};
    inline const DescribeCloudAssistantSettingsResponseBody::SlsDeliveryConfigs & getSlsDeliveryConfigs() const { DARABONBA_PTR_GET_CONST(slsDeliveryConfigs_, DescribeCloudAssistantSettingsResponseBody::SlsDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody::SlsDeliveryConfigs getSlsDeliveryConfigs() { DARABONBA_PTR_GET(slsDeliveryConfigs_, DescribeCloudAssistantSettingsResponseBody::SlsDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody& setSlsDeliveryConfigs(const DescribeCloudAssistantSettingsResponseBody::SlsDeliveryConfigs & slsDeliveryConfigs) { DARABONBA_PTR_SET_VALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };
    inline DescribeCloudAssistantSettingsResponseBody& setSlsDeliveryConfigs(DescribeCloudAssistantSettingsResponseBody::SlsDeliveryConfigs && slsDeliveryConfigs) { DARABONBA_PTR_SET_RVALUE(slsDeliveryConfigs_, slsDeliveryConfigs) };


  protected:
    // The configurations for upgrading Cloud Assistant Agent.
    shared_ptr<DescribeCloudAssistantSettingsResponseBody::AgentUpgradeConfig> agentUpgradeConfig_ {};
    // The configurations for delivering items to Object Storage Service (OSS).
    shared_ptr<DescribeCloudAssistantSettingsResponseBody::OssDeliveryConfigs> ossDeliveryConfigs_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Cloud Assistant Session Manager configuration.
    shared_ptr<DescribeCloudAssistantSettingsResponseBody::SessionManagerConfig> sessionManagerConfig_ {};
    // The configurations for delivering items to Simple Log Service.
    shared_ptr<DescribeCloudAssistantSettingsResponseBody::SlsDeliveryConfigs> slsDeliveryConfigs_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
