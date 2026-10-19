// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERAIDBCLUSTERCUSTOMMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERAIDBCLUSTERCUSTOMMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RegisterAIDBClusterCustomModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterAIDBClusterCustomModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerEnv, containerEnv_);
      DARABONBA_PTR_TO_JSON(CustomOssBucketName, customOssBucketName_);
      DARABONBA_PTR_TO_JSON(CustomOssBucketPath, customOssBucketPath_);
      DARABONBA_PTR_TO_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_TO_JSON(DirectCommand, directCommand_);
      DARABONBA_PTR_TO_JSON(DisplayModelName, displayModelName_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RegistryPassword, registryPassword_);
      DARABONBA_PTR_TO_JSON(RegistryUsername, registryUsername_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterAIDBClusterCustomModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerEnv, containerEnv_);
      DARABONBA_PTR_FROM_JSON(CustomOssBucketName, customOssBucketName_);
      DARABONBA_PTR_FROM_JSON(CustomOssBucketPath, customOssBucketPath_);
      DARABONBA_PTR_FROM_JSON(DBInstanceClass, DBInstanceClass_);
      DARABONBA_PTR_FROM_JSON(DirectCommand, directCommand_);
      DARABONBA_PTR_FROM_JSON(DisplayModelName, displayModelName_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RegistryPassword, registryPassword_);
      DARABONBA_PTR_FROM_JSON(RegistryUsername, registryUsername_);
    };
    RegisterAIDBClusterCustomModelRequest() = default ;
    RegisterAIDBClusterCustomModelRequest(const RegisterAIDBClusterCustomModelRequest &) = default ;
    RegisterAIDBClusterCustomModelRequest(RegisterAIDBClusterCustomModelRequest &&) = default ;
    RegisterAIDBClusterCustomModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterAIDBClusterCustomModelRequest() = default ;
    RegisterAIDBClusterCustomModelRequest& operator=(const RegisterAIDBClusterCustomModelRequest &) = default ;
    RegisterAIDBClusterCustomModelRequest& operator=(RegisterAIDBClusterCustomModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerEnv_ == nullptr
        && this->customOssBucketName_ == nullptr && this->customOssBucketPath_ == nullptr && this->DBInstanceClass_ == nullptr && this->directCommand_ == nullptr && this->displayModelName_ == nullptr
        && this->imageName_ == nullptr && this->inferenceEngine_ == nullptr && this->modelName_ == nullptr && this->modelParams_ == nullptr && this->regionId_ == nullptr
        && this->registryPassword_ == nullptr && this->registryUsername_ == nullptr; };
    // containerEnv Field Functions 
    bool hasContainerEnv() const { return this->containerEnv_ != nullptr;};
    void deleteContainerEnv() { this->containerEnv_ = nullptr;};
    inline const map<string, string> & getContainerEnv() const { DARABONBA_PTR_GET_CONST(containerEnv_, map<string, string>) };
    inline map<string, string> getContainerEnv() { DARABONBA_PTR_GET(containerEnv_, map<string, string>) };
    inline RegisterAIDBClusterCustomModelRequest& setContainerEnv(const map<string, string> & containerEnv) { DARABONBA_PTR_SET_VALUE(containerEnv_, containerEnv) };
    inline RegisterAIDBClusterCustomModelRequest& setContainerEnv(map<string, string> && containerEnv) { DARABONBA_PTR_SET_RVALUE(containerEnv_, containerEnv) };


    // customOssBucketName Field Functions 
    bool hasCustomOssBucketName() const { return this->customOssBucketName_ != nullptr;};
    void deleteCustomOssBucketName() { this->customOssBucketName_ = nullptr;};
    inline string getCustomOssBucketName() const { DARABONBA_PTR_GET_DEFAULT(customOssBucketName_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setCustomOssBucketName(string customOssBucketName) { DARABONBA_PTR_SET_VALUE(customOssBucketName_, customOssBucketName) };


    // customOssBucketPath Field Functions 
    bool hasCustomOssBucketPath() const { return this->customOssBucketPath_ != nullptr;};
    void deleteCustomOssBucketPath() { this->customOssBucketPath_ = nullptr;};
    inline string getCustomOssBucketPath() const { DARABONBA_PTR_GET_DEFAULT(customOssBucketPath_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setCustomOssBucketPath(string customOssBucketPath) { DARABONBA_PTR_SET_VALUE(customOssBucketPath_, customOssBucketPath) };


    // DBInstanceClass Field Functions 
    bool hasDBInstanceClass() const { return this->DBInstanceClass_ != nullptr;};
    void deleteDBInstanceClass() { this->DBInstanceClass_ = nullptr;};
    inline string getDBInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceClass_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setDBInstanceClass(string DBInstanceClass) { DARABONBA_PTR_SET_VALUE(DBInstanceClass_, DBInstanceClass) };


    // directCommand Field Functions 
    bool hasDirectCommand() const { return this->directCommand_ != nullptr;};
    void deleteDirectCommand() { this->directCommand_ = nullptr;};
    inline string getDirectCommand() const { DARABONBA_PTR_GET_DEFAULT(directCommand_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setDirectCommand(string directCommand) { DARABONBA_PTR_SET_VALUE(directCommand_, directCommand) };


    // displayModelName Field Functions 
    bool hasDisplayModelName() const { return this->displayModelName_ != nullptr;};
    void deleteDisplayModelName() { this->displayModelName_ = nullptr;};
    inline string getDisplayModelName() const { DARABONBA_PTR_GET_DEFAULT(displayModelName_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setDisplayModelName(string displayModelName) { DARABONBA_PTR_SET_VALUE(displayModelName_, displayModelName) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // inferenceEngine Field Functions 
    bool hasInferenceEngine() const { return this->inferenceEngine_ != nullptr;};
    void deleteInferenceEngine() { this->inferenceEngine_ = nullptr;};
    inline string getInferenceEngine() const { DARABONBA_PTR_GET_DEFAULT(inferenceEngine_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setInferenceEngine(string inferenceEngine) { DARABONBA_PTR_SET_VALUE(inferenceEngine_, inferenceEngine) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelParams Field Functions 
    bool hasModelParams() const { return this->modelParams_ != nullptr;};
    void deleteModelParams() { this->modelParams_ = nullptr;};
    inline const map<string, string> & getModelParams() const { DARABONBA_PTR_GET_CONST(modelParams_, map<string, string>) };
    inline map<string, string> getModelParams() { DARABONBA_PTR_GET(modelParams_, map<string, string>) };
    inline RegisterAIDBClusterCustomModelRequest& setModelParams(const map<string, string> & modelParams) { DARABONBA_PTR_SET_VALUE(modelParams_, modelParams) };
    inline RegisterAIDBClusterCustomModelRequest& setModelParams(map<string, string> && modelParams) { DARABONBA_PTR_SET_RVALUE(modelParams_, modelParams) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // registryPassword Field Functions 
    bool hasRegistryPassword() const { return this->registryPassword_ != nullptr;};
    void deleteRegistryPassword() { this->registryPassword_ = nullptr;};
    inline string getRegistryPassword() const { DARABONBA_PTR_GET_DEFAULT(registryPassword_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setRegistryPassword(string registryPassword) { DARABONBA_PTR_SET_VALUE(registryPassword_, registryPassword) };


    // registryUsername Field Functions 
    bool hasRegistryUsername() const { return this->registryUsername_ != nullptr;};
    void deleteRegistryUsername() { this->registryUsername_ = nullptr;};
    inline string getRegistryUsername() const { DARABONBA_PTR_GET_DEFAULT(registryUsername_, "") };
    inline RegisterAIDBClusterCustomModelRequest& setRegistryUsername(string registryUsername) { DARABONBA_PTR_SET_VALUE(registryUsername_, registryUsername) };


  protected:
    // The container startup environment variables. Variable names cannot be empty or contain whitespace. Variable values can be empty strings.
    shared_ptr<map<string, string>> containerEnv_ {};
    // The name of the OSS bucket.
    // 
    // This parameter is required.
    shared_ptr<string> customOssBucketName_ {};
    // The model path in the OSS bucket.
    // 
    // This parameter is required.
    shared_ptr<string> customOssBucketPath_ {};
    // The GPU instance type used for model deployment. Required when configuring deployment parameters.
    shared_ptr<string> DBInstanceClass_ {};
    // The direct startup command for the model container.
    shared_ptr<string> directCommand_ {};
    // The display name in the candidate list and the initial invocation name for clients.
    shared_ptr<string> displayModelName_ {};
    // The full reference of the customer-owned inference image, in the format of registry/repository:tag.
    shared_ptr<string> imageName_ {};
    // The inference engine. Required when configuring deployment parameters. Valid values: vllm and sglang.
    shared_ptr<string> inferenceEngine_ {};
    // The custom model registration key and model directory name.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // The model startup parameters. Parameter keys must start with --.
    shared_ptr<map<string, string>> modelParams_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The password or temporary token for the customer image repository. Required when ImageName is specified.
    shared_ptr<string> registryPassword_ {};
    // The username for the customer image repository. Required when ImageName is specified.
    shared_ptr<string> registryUsername_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
