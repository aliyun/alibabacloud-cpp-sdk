// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESESSIONCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESESSIONCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateSessionClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSessionClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(applicationConfigs, applicationConfigs_);
      DARABONBA_PTR_TO_JSON(autoStartConfiguration, autoStartConfiguration_);
      DARABONBA_PTR_TO_JSON(autoStopConfiguration, autoStopConfiguration_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(envId, envId_);
      DARABONBA_PTR_TO_JSON(fusion, fusion_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(publicEndpointEnabled, publicEndpointEnabled_);
      DARABONBA_PTR_TO_JSON(queueName, queueName_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSessionClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(applicationConfigs, applicationConfigs_);
      DARABONBA_PTR_FROM_JSON(autoStartConfiguration, autoStartConfiguration_);
      DARABONBA_PTR_FROM_JSON(autoStopConfiguration, autoStopConfiguration_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(envId, envId_);
      DARABONBA_PTR_FROM_JSON(fusion, fusion_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(publicEndpointEnabled, publicEndpointEnabled_);
      DARABONBA_PTR_FROM_JSON(queueName, queueName_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    CreateSessionClusterRequest() = default ;
    CreateSessionClusterRequest(const CreateSessionClusterRequest &) = default ;
    CreateSessionClusterRequest(CreateSessionClusterRequest &&) = default ;
    CreateSessionClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSessionClusterRequest() = default ;
    CreateSessionClusterRequest& operator=(const CreateSessionClusterRequest &) = default ;
    CreateSessionClusterRequest& operator=(CreateSessionClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoStopConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoStopConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
        DARABONBA_PTR_TO_JSON(idleTimeoutMinutes, idleTimeoutMinutes_);
      };
      friend void from_json(const Darabonba::Json& j, AutoStopConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
        DARABONBA_PTR_FROM_JSON(idleTimeoutMinutes, idleTimeoutMinutes_);
      };
      AutoStopConfiguration() = default ;
      AutoStopConfiguration(const AutoStopConfiguration &) = default ;
      AutoStopConfiguration(AutoStopConfiguration &&) = default ;
      AutoStopConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoStopConfiguration() = default ;
      AutoStopConfiguration& operator=(const AutoStopConfiguration &) = default ;
      AutoStopConfiguration& operator=(AutoStopConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr
        && this->idleTimeoutMinutes_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline AutoStopConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // idleTimeoutMinutes Field Functions 
      bool hasIdleTimeoutMinutes() const { return this->idleTimeoutMinutes_ != nullptr;};
      void deleteIdleTimeoutMinutes() { this->idleTimeoutMinutes_ = nullptr;};
      inline int32_t getIdleTimeoutMinutes() const { DARABONBA_PTR_GET_DEFAULT(idleTimeoutMinutes_, 0) };
      inline AutoStopConfiguration& setIdleTimeoutMinutes(int32_t idleTimeoutMinutes) { DARABONBA_PTR_SET_VALUE(idleTimeoutMinutes_, idleTimeoutMinutes) };


    protected:
      // Specifies whether to enable automatic termination.
      // 
      // *   true
      // *   false
      shared_ptr<bool> enable_ {};
      // The idle timeout period. The session is automatically terminated when the idle timeout period is exceeded.
      shared_ptr<int32_t> idleTimeoutMinutes_ {};
    };

    class AutoStartConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoStartConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(enable, enable_);
      };
      friend void from_json(const Darabonba::Json& j, AutoStartConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(enable, enable_);
      };
      AutoStartConfiguration() = default ;
      AutoStartConfiguration(const AutoStartConfiguration &) = default ;
      AutoStartConfiguration(AutoStartConfiguration &&) = default ;
      AutoStartConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoStartConfiguration() = default ;
      AutoStartConfiguration& operator=(const AutoStartConfiguration &) = default ;
      AutoStartConfiguration& operator=(AutoStartConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enable_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline AutoStartConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    protected:
      // Specifies whether to enable automatic startup.
      // 
      // *   true
      // *   false
      shared_ptr<bool> enable_ {};
    };

    class ApplicationConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ApplicationConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(configFileName, configFileName_);
        DARABONBA_PTR_TO_JSON(configItemKey, configItemKey_);
        DARABONBA_PTR_TO_JSON(configItemValue, configItemValue_);
      };
      friend void from_json(const Darabonba::Json& j, ApplicationConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(configFileName, configFileName_);
        DARABONBA_PTR_FROM_JSON(configItemKey, configItemKey_);
        DARABONBA_PTR_FROM_JSON(configItemValue, configItemValue_);
      };
      ApplicationConfigs() = default ;
      ApplicationConfigs(const ApplicationConfigs &) = default ;
      ApplicationConfigs(ApplicationConfigs &&) = default ;
      ApplicationConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ApplicationConfigs() = default ;
      ApplicationConfigs& operator=(const ApplicationConfigs &) = default ;
      ApplicationConfigs& operator=(ApplicationConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configFileName_ == nullptr
        && this->configItemKey_ == nullptr && this->configItemValue_ == nullptr; };
      // configFileName Field Functions 
      bool hasConfigFileName() const { return this->configFileName_ != nullptr;};
      void deleteConfigFileName() { this->configFileName_ = nullptr;};
      inline string getConfigFileName() const { DARABONBA_PTR_GET_DEFAULT(configFileName_, "") };
      inline ApplicationConfigs& setConfigFileName(string configFileName) { DARABONBA_PTR_SET_VALUE(configFileName_, configFileName) };


      // configItemKey Field Functions 
      bool hasConfigItemKey() const { return this->configItemKey_ != nullptr;};
      void deleteConfigItemKey() { this->configItemKey_ = nullptr;};
      inline string getConfigItemKey() const { DARABONBA_PTR_GET_DEFAULT(configItemKey_, "") };
      inline ApplicationConfigs& setConfigItemKey(string configItemKey) { DARABONBA_PTR_SET_VALUE(configItemKey_, configItemKey) };


      // configItemValue Field Functions 
      bool hasConfigItemValue() const { return this->configItemValue_ != nullptr;};
      void deleteConfigItemValue() { this->configItemValue_ = nullptr;};
      inline string getConfigItemValue() const { DARABONBA_PTR_GET_DEFAULT(configItemValue_, "") };
      inline ApplicationConfigs& setConfigItemValue(string configItemValue) { DARABONBA_PTR_SET_VALUE(configItemValue_, configItemValue) };


    protected:
      // The name of the configuration file.
      shared_ptr<string> configFileName_ {};
      // The key of SparkConf.
      shared_ptr<string> configItemKey_ {};
      // The value of SparkConf.
      shared_ptr<string> configItemValue_ {};
    };

    virtual bool empty() const override { return this->applicationConfigs_ == nullptr
        && this->autoStartConfiguration_ == nullptr && this->autoStopConfiguration_ == nullptr && this->clientToken_ == nullptr && this->displayReleaseVersion_ == nullptr && this->envId_ == nullptr
        && this->fusion_ == nullptr && this->kind_ == nullptr && this->name_ == nullptr && this->publicEndpointEnabled_ == nullptr && this->queueName_ == nullptr
        && this->releaseVersion_ == nullptr && this->regionId_ == nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<CreateSessionClusterRequest::ApplicationConfigs> & getApplicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<CreateSessionClusterRequest::ApplicationConfigs>) };
    inline vector<CreateSessionClusterRequest::ApplicationConfigs> getApplicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<CreateSessionClusterRequest::ApplicationConfigs>) };
    inline CreateSessionClusterRequest& setApplicationConfigs(const vector<CreateSessionClusterRequest::ApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline CreateSessionClusterRequest& setApplicationConfigs(vector<CreateSessionClusterRequest::ApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // autoStartConfiguration Field Functions 
    bool hasAutoStartConfiguration() const { return this->autoStartConfiguration_ != nullptr;};
    void deleteAutoStartConfiguration() { this->autoStartConfiguration_ = nullptr;};
    inline const CreateSessionClusterRequest::AutoStartConfiguration & getAutoStartConfiguration() const { DARABONBA_PTR_GET_CONST(autoStartConfiguration_, CreateSessionClusterRequest::AutoStartConfiguration) };
    inline CreateSessionClusterRequest::AutoStartConfiguration getAutoStartConfiguration() { DARABONBA_PTR_GET(autoStartConfiguration_, CreateSessionClusterRequest::AutoStartConfiguration) };
    inline CreateSessionClusterRequest& setAutoStartConfiguration(const CreateSessionClusterRequest::AutoStartConfiguration & autoStartConfiguration) { DARABONBA_PTR_SET_VALUE(autoStartConfiguration_, autoStartConfiguration) };
    inline CreateSessionClusterRequest& setAutoStartConfiguration(CreateSessionClusterRequest::AutoStartConfiguration && autoStartConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStartConfiguration_, autoStartConfiguration) };


    // autoStopConfiguration Field Functions 
    bool hasAutoStopConfiguration() const { return this->autoStopConfiguration_ != nullptr;};
    void deleteAutoStopConfiguration() { this->autoStopConfiguration_ = nullptr;};
    inline const CreateSessionClusterRequest::AutoStopConfiguration & getAutoStopConfiguration() const { DARABONBA_PTR_GET_CONST(autoStopConfiguration_, CreateSessionClusterRequest::AutoStopConfiguration) };
    inline CreateSessionClusterRequest::AutoStopConfiguration getAutoStopConfiguration() { DARABONBA_PTR_GET(autoStopConfiguration_, CreateSessionClusterRequest::AutoStopConfiguration) };
    inline CreateSessionClusterRequest& setAutoStopConfiguration(const CreateSessionClusterRequest::AutoStopConfiguration & autoStopConfiguration) { DARABONBA_PTR_SET_VALUE(autoStopConfiguration_, autoStopConfiguration) };
    inline CreateSessionClusterRequest& setAutoStopConfiguration(CreateSessionClusterRequest::AutoStopConfiguration && autoStopConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStopConfiguration_, autoStopConfiguration) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSessionClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string getDisplayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline CreateSessionClusterRequest& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string getEnvId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline CreateSessionClusterRequest& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool getFusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline CreateSessionClusterRequest& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline CreateSessionClusterRequest& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSessionClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publicEndpointEnabled Field Functions 
    bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
    void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
    inline bool getPublicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
    inline CreateSessionClusterRequest& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateSessionClusterRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string getReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline CreateSessionClusterRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSessionClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Spark configurations.
    shared_ptr<vector<CreateSessionClusterRequest::ApplicationConfigs>> applicationConfigs_ {};
    // Specifies whether to enable automatic startup.
    // 
    // *   true
    // *   false
    shared_ptr<CreateSessionClusterRequest::AutoStartConfiguration> autoStartConfiguration_ {};
    // The automatic termination configuration.
    shared_ptr<CreateSessionClusterRequest::AutoStopConfiguration> autoStopConfiguration_ {};
    shared_ptr<string> clientToken_ {};
    // The version of the Spark engine.
    shared_ptr<string> displayReleaseVersion_ {};
    // The ID of the Python environment. This parameter takes effect only for notebook sessions.
    shared_ptr<string> envId_ {};
    // Specifies whether to enable Fusion engine for acceleration.
    shared_ptr<bool> fusion_ {};
    // The session type.
    // 
    // *   SQL
    // *   NOTEBOOK
    shared_ptr<string> kind_ {};
    // The name of the job.
    shared_ptr<string> name_ {};
    shared_ptr<bool> publicEndpointEnabled_ {};
    // The queue name.
    shared_ptr<string> queueName_ {};
    // The version number of Spark.
    shared_ptr<string> releaseVersion_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
