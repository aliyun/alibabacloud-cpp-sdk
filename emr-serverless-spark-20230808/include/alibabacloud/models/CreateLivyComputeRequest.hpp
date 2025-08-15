// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVYCOMPUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVYCOMPUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLivyComputeRequestAutoStartConfiguration.hpp>
#include <alibabacloud/models/CreateLivyComputeRequestAutoStopConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class CreateLivyComputeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLivyComputeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authType, authType_);
      DARABONBA_PTR_TO_JSON(autoStartConfiguration, autoStartConfiguration_);
      DARABONBA_PTR_TO_JSON(autoStopConfiguration, autoStopConfiguration_);
      DARABONBA_PTR_TO_JSON(cpuLimit, cpuLimit_);
      DARABONBA_PTR_TO_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_TO_JSON(enablePublic, enablePublic_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(fusion, fusion_);
      DARABONBA_PTR_TO_JSON(livyServerConf, livyServerConf_);
      DARABONBA_PTR_TO_JSON(livyVersion, livyVersion_);
      DARABONBA_PTR_TO_JSON(memoryLimit, memoryLimit_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(networkName, networkName_);
      DARABONBA_PTR_TO_JSON(queueName, queueName_);
      DARABONBA_PTR_TO_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLivyComputeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authType, authType_);
      DARABONBA_PTR_FROM_JSON(autoStartConfiguration, autoStartConfiguration_);
      DARABONBA_PTR_FROM_JSON(autoStopConfiguration, autoStopConfiguration_);
      DARABONBA_PTR_FROM_JSON(cpuLimit, cpuLimit_);
      DARABONBA_PTR_FROM_JSON(displayReleaseVersion, displayReleaseVersion_);
      DARABONBA_PTR_FROM_JSON(enablePublic, enablePublic_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(fusion, fusion_);
      DARABONBA_PTR_FROM_JSON(livyServerConf, livyServerConf_);
      DARABONBA_PTR_FROM_JSON(livyVersion, livyVersion_);
      DARABONBA_PTR_FROM_JSON(memoryLimit, memoryLimit_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(networkName, networkName_);
      DARABONBA_PTR_FROM_JSON(queueName, queueName_);
      DARABONBA_PTR_FROM_JSON(releaseVersion, releaseVersion_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
    };
    CreateLivyComputeRequest() = default ;
    CreateLivyComputeRequest(const CreateLivyComputeRequest &) = default ;
    CreateLivyComputeRequest(CreateLivyComputeRequest &&) = default ;
    CreateLivyComputeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLivyComputeRequest() = default ;
    CreateLivyComputeRequest& operator=(const CreateLivyComputeRequest &) = default ;
    CreateLivyComputeRequest& operator=(CreateLivyComputeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authType_ != nullptr
        && this->autoStartConfiguration_ != nullptr && this->autoStopConfiguration_ != nullptr && this->cpuLimit_ != nullptr && this->displayReleaseVersion_ != nullptr && this->enablePublic_ != nullptr
        && this->environmentId_ != nullptr && this->fusion_ != nullptr && this->livyServerConf_ != nullptr && this->livyVersion_ != nullptr && this->memoryLimit_ != nullptr
        && this->name_ != nullptr && this->networkName_ != nullptr && this->queueName_ != nullptr && this->releaseVersion_ != nullptr && this->regionId_ != nullptr; };
    // authType Field Functions 
    bool hasAuthType() const { return this->authType_ != nullptr;};
    void deleteAuthType() { this->authType_ = nullptr;};
    inline string authType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
    inline CreateLivyComputeRequest& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


    // autoStartConfiguration Field Functions 
    bool hasAutoStartConfiguration() const { return this->autoStartConfiguration_ != nullptr;};
    void deleteAutoStartConfiguration() { this->autoStartConfiguration_ = nullptr;};
    inline const CreateLivyComputeRequestAutoStartConfiguration & autoStartConfiguration() const { DARABONBA_PTR_GET_CONST(autoStartConfiguration_, CreateLivyComputeRequestAutoStartConfiguration) };
    inline CreateLivyComputeRequestAutoStartConfiguration autoStartConfiguration() { DARABONBA_PTR_GET(autoStartConfiguration_, CreateLivyComputeRequestAutoStartConfiguration) };
    inline CreateLivyComputeRequest& setAutoStartConfiguration(const CreateLivyComputeRequestAutoStartConfiguration & autoStartConfiguration) { DARABONBA_PTR_SET_VALUE(autoStartConfiguration_, autoStartConfiguration) };
    inline CreateLivyComputeRequest& setAutoStartConfiguration(CreateLivyComputeRequestAutoStartConfiguration && autoStartConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStartConfiguration_, autoStartConfiguration) };


    // autoStopConfiguration Field Functions 
    bool hasAutoStopConfiguration() const { return this->autoStopConfiguration_ != nullptr;};
    void deleteAutoStopConfiguration() { this->autoStopConfiguration_ = nullptr;};
    inline const CreateLivyComputeRequestAutoStopConfiguration & autoStopConfiguration() const { DARABONBA_PTR_GET_CONST(autoStopConfiguration_, CreateLivyComputeRequestAutoStopConfiguration) };
    inline CreateLivyComputeRequestAutoStopConfiguration autoStopConfiguration() { DARABONBA_PTR_GET(autoStopConfiguration_, CreateLivyComputeRequestAutoStopConfiguration) };
    inline CreateLivyComputeRequest& setAutoStopConfiguration(const CreateLivyComputeRequestAutoStopConfiguration & autoStopConfiguration) { DARABONBA_PTR_SET_VALUE(autoStopConfiguration_, autoStopConfiguration) };
    inline CreateLivyComputeRequest& setAutoStopConfiguration(CreateLivyComputeRequestAutoStopConfiguration && autoStopConfiguration) { DARABONBA_PTR_SET_RVALUE(autoStopConfiguration_, autoStopConfiguration) };


    // cpuLimit Field Functions 
    bool hasCpuLimit() const { return this->cpuLimit_ != nullptr;};
    void deleteCpuLimit() { this->cpuLimit_ = nullptr;};
    inline string cpuLimit() const { DARABONBA_PTR_GET_DEFAULT(cpuLimit_, "") };
    inline CreateLivyComputeRequest& setCpuLimit(string cpuLimit) { DARABONBA_PTR_SET_VALUE(cpuLimit_, cpuLimit) };


    // displayReleaseVersion Field Functions 
    bool hasDisplayReleaseVersion() const { return this->displayReleaseVersion_ != nullptr;};
    void deleteDisplayReleaseVersion() { this->displayReleaseVersion_ = nullptr;};
    inline string displayReleaseVersion() const { DARABONBA_PTR_GET_DEFAULT(displayReleaseVersion_, "") };
    inline CreateLivyComputeRequest& setDisplayReleaseVersion(string displayReleaseVersion) { DARABONBA_PTR_SET_VALUE(displayReleaseVersion_, displayReleaseVersion) };


    // enablePublic Field Functions 
    bool hasEnablePublic() const { return this->enablePublic_ != nullptr;};
    void deleteEnablePublic() { this->enablePublic_ = nullptr;};
    inline bool enablePublic() const { DARABONBA_PTR_GET_DEFAULT(enablePublic_, false) };
    inline CreateLivyComputeRequest& setEnablePublic(bool enablePublic) { DARABONBA_PTR_SET_VALUE(enablePublic_, enablePublic) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreateLivyComputeRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // fusion Field Functions 
    bool hasFusion() const { return this->fusion_ != nullptr;};
    void deleteFusion() { this->fusion_ = nullptr;};
    inline bool fusion() const { DARABONBA_PTR_GET_DEFAULT(fusion_, false) };
    inline CreateLivyComputeRequest& setFusion(bool fusion) { DARABONBA_PTR_SET_VALUE(fusion_, fusion) };


    // livyServerConf Field Functions 
    bool hasLivyServerConf() const { return this->livyServerConf_ != nullptr;};
    void deleteLivyServerConf() { this->livyServerConf_ = nullptr;};
    inline string livyServerConf() const { DARABONBA_PTR_GET_DEFAULT(livyServerConf_, "") };
    inline CreateLivyComputeRequest& setLivyServerConf(string livyServerConf) { DARABONBA_PTR_SET_VALUE(livyServerConf_, livyServerConf) };


    // livyVersion Field Functions 
    bool hasLivyVersion() const { return this->livyVersion_ != nullptr;};
    void deleteLivyVersion() { this->livyVersion_ = nullptr;};
    inline string livyVersion() const { DARABONBA_PTR_GET_DEFAULT(livyVersion_, "") };
    inline CreateLivyComputeRequest& setLivyVersion(string livyVersion) { DARABONBA_PTR_SET_VALUE(livyVersion_, livyVersion) };


    // memoryLimit Field Functions 
    bool hasMemoryLimit() const { return this->memoryLimit_ != nullptr;};
    void deleteMemoryLimit() { this->memoryLimit_ = nullptr;};
    inline string memoryLimit() const { DARABONBA_PTR_GET_DEFAULT(memoryLimit_, "") };
    inline CreateLivyComputeRequest& setMemoryLimit(string memoryLimit) { DARABONBA_PTR_SET_VALUE(memoryLimit_, memoryLimit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateLivyComputeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkName Field Functions 
    bool hasNetworkName() const { return this->networkName_ != nullptr;};
    void deleteNetworkName() { this->networkName_ = nullptr;};
    inline string networkName() const { DARABONBA_PTR_GET_DEFAULT(networkName_, "") };
    inline CreateLivyComputeRequest& setNetworkName(string networkName) { DARABONBA_PTR_SET_VALUE(networkName_, networkName) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline CreateLivyComputeRequest& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // releaseVersion Field Functions 
    bool hasReleaseVersion() const { return this->releaseVersion_ != nullptr;};
    void deleteReleaseVersion() { this->releaseVersion_ = nullptr;};
    inline string releaseVersion() const { DARABONBA_PTR_GET_DEFAULT(releaseVersion_, "") };
    inline CreateLivyComputeRequest& setReleaseVersion(string releaseVersion) { DARABONBA_PTR_SET_VALUE(releaseVersion_, releaseVersion) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLivyComputeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> authType_ = nullptr;
    std::shared_ptr<CreateLivyComputeRequestAutoStartConfiguration> autoStartConfiguration_ = nullptr;
    std::shared_ptr<CreateLivyComputeRequestAutoStopConfiguration> autoStopConfiguration_ = nullptr;
    std::shared_ptr<string> cpuLimit_ = nullptr;
    std::shared_ptr<string> displayReleaseVersion_ = nullptr;
    std::shared_ptr<bool> enablePublic_ = nullptr;
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<bool> fusion_ = nullptr;
    std::shared_ptr<string> livyServerConf_ = nullptr;
    std::shared_ptr<string> livyVersion_ = nullptr;
    std::shared_ptr<string> memoryLimit_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> networkName_ = nullptr;
    std::shared_ptr<string> queueName_ = nullptr;
    std::shared_ptr<string> releaseVersion_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
