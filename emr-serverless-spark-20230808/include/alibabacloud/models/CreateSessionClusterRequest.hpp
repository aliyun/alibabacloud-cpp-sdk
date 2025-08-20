// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESESSIONCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESESSIONCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSessionClusterRequestApplicationConfigs.hpp>
#include <alibabacloud/models/CreateSessionClusterRequestAutoStartConfiguration.hpp>
#include <alibabacloud/models/CreateSessionClusterRequestAutoStopConfiguration.hpp>
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
    virtual bool empty() const override { this->applicationConfigs_ != nullptr
        && this->autoStartConfiguration_ != nullptr && this->autoStopConfiguration_ != nullptr && this->clientToken_ != nullptr && this->displayReleaseVersion_ != nullptr && this->envId_ != nullptr
        && this->fusion_ != nullptr && this->kind_ != nullptr && this->name_ != nullptr && this->publicEndpointEnabled_ != nullptr && this->queueName_ != nullptr
        && this->releaseVersion_ != nullptr && this->regionId_ != nullptr; };
    // applicationConfigs Field Functions 
    bool hasApplicationConfigs() const { return this->applicationConfigs_ != nullptr;};
    void deleteApplicationConfigs() { this->applicationConfigs_ = nullptr;};
    inline const vector<CreateSessionClusterRequestApplicationConfigs> & applicationConfigs() const { DARABONBA_PTR_GET_CONST(applicationConfigs_, vector<CreateSessionClusterRequestApplicationConfigs>) };
    inline vector<CreateSessionClusterRequestApplicationConfigs> applicationConfigs() { DARABONBA_PTR_GET(applicationConfigs_, vector<CreateSessionClusterRequestApplicationConfigs>) };
    inline CreateSessionClusterRequest& setApplicationConfigs(const vector<CreateSessionClusterRequestApplicationConfigs> & applicationConfigs) { DARABONBA_PTR_SET_VALUE(applicationConfigs_, applicationConfigs) };
    inline CreateSessionClusterRequest& setApplicationConfigs(vector<CreateSessionClusterRequestApplicationConfigs> && applicationConfigs) { DARABONBA_PTR_SET_RVALUE(applicationConfigs_, applicationConfigs) };


    // autoStartConfiguration Field Functions 
    bool hasAutoStartConfiguration() const { return this->autoStartConfiguration_ != nullptr;};
    void deleteAutoStartConfiguration() { this->autoStartConfiguration_ = nullptr;};
    inline const CreateSessionClusterRequestAutoStartConfiguration & autoStartConfiguration() const { DARABONBA_PTR_GET_CONST(autoStartConfiguration_, CreateSessionClusterRequestAutoStartConfiguration) };
    inline CreateSessionClusterRequestAutoStartConfiguration autoStartConfiguration() { DARABONBA_PTR_GET(autoStartConfiguration_, CreateSessionClusterRequestAutoStartConfiguration) };
    inline CreateSessionClusterRequest& setAutoStartConfiguration(const CreateSessionClusterRequestAutoStartConfiguration & autoStartConfiguration) { DARABONBA_PTR_SET_VALUE(autoStartConfiguration_, autoStartConfiguration) };
    inline CreateSessionClusterRequest& setAutoStartConfiguration(CreateSessionClusterRequestAutoStartConfiguration && autoStartConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStartConfiguration_, autoStartConfiguration) };


    // autoStopConfiguration Field Functions 
    bool hasAutoStopConfiguration() const { return this->autoStopConfiguration_ != nullptr;};
    void deleteAutoStopConfiguration() { this->autoStopConfiguration_ = nullptr;};
    inline const CreateSessionClusterRequestAutoStopConfiguration & autoStopConfiguration() const { DARABONBA_PTR_GET_CONST(autoStopConfiguration_, CreateSessionClusterRequestAutoStopConfiguration) };
    inline CreateSessionClusterRequestAutoStopConfiguration autoStopConfiguration() { DARABONBA_PTR_GET(autoStopConfiguration_, CreateSessionClusterRequestAutoStopConfiguration) };
    inline CreateSessionClusterRequest& setAutoStopConfiguration(const CreateSessionClusterRequestAutoStopConfiguration & autoStopConfiguration) { DARABONBA_PTR_SET_VALUE(autoStopConfiguration_, autoStopConfiguration) };
    inline CreateSessionClusterRequest& setAutoStopConfiguration(CreateSessionClusterRequestAutoStopConfiguration && autoStopConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStopConfiguration_, autoStopConfiguration) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateSessionClusterRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string displayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline CreateSessionClusterRequest& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // envId Field Functions 
    bool hasEnvId() const { return this->envId_ != nullptr;};
    void deleteEnvId() { this->envId_ = nullptr;};
    inline string envId() const { DARABONBA_PTR_GET_DEFAULT(envId_, "") };
    inline CreateSessionClusterRequest& setEnvId(string envId) { DARABONBA_PTR_SET_VALUE(envId_, envId) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool fusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline CreateSessionClusterRequest& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline CreateSessionClusterRequest& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSessionClusterRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // publicEndpointEnabled Field Functions 
    bool hasPublicEndpointEnabled() const { return this->publicEndpointEnabled_ != nullptr;};
    void deletePublicEndpointEnabled() { this->publicEndpointEnabled_ = nullptr;};
    inline bool publicEndpointEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicEndpointEnabled_, false) };
    inline CreateSessionClusterRequest& setPublicEndpointEnabled(bool publicEndpointEnabled) { DARABONBA_PTR_SET_VALUE(publicEndpointEnabled_, publicEndpointEnabled) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateSessionClusterRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline CreateSessionClusterRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSessionClusterRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The Spark configurations.
    std::shared_ptr<vector<CreateSessionClusterRequestApplicationConfigs>> applicationConfigs_ = nullptr;
    // Specifies whether to enable automatic startup.
    // 
    // *   true
    // *   false
    std::shared_ptr<CreateSessionClusterRequestAutoStartConfiguration> autoStartConfiguration_ = nullptr;
    // The automatic termination configuration.
    std::shared_ptr<CreateSessionClusterRequestAutoStopConfiguration> autoStopConfiguration_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // The version of the Spark engine.
    std::shared_ptr<string> displayReleaseVersion_ = nullptr;
    // The ID of the Python environment. This parameter takes effect only for notebook sessions.
    std::shared_ptr<string> envId_ = nullptr;
    // Specifies whether to enable Fusion engine for acceleration.
    std::shared_ptr<bool> fusion_ = nullptr;
    // The session type.
    // 
    // *   SQL
    // *   NOTEBOOK
    std::shared_ptr<string> kind_ = nullptr;
    // The name of the job.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<bool> publicEndpointEnabled_ = nullptr;
    // The queue name.
    std::shared_ptr<string> queueName_ = nullptr;
    // The version number of Spark.
    std::shared_ptr<string> releaseVersion_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
