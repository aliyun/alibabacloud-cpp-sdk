// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateModelServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AiNodes, aiNodes_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnablePublicConnection, enablePublicConnection_);
      DARABONBA_PTR_TO_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_ANY_TO_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AiNodes, aiNodes_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnablePublicConnection, enablePublicConnection_);
      DARABONBA_PTR_FROM_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_ANY_FROM_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
    };
    CreateModelServiceRequest() = default ;
    CreateModelServiceRequest(const CreateModelServiceRequest &) = default ;
    CreateModelServiceRequest(CreateModelServiceRequest &&) = default ;
    CreateModelServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelServiceRequest() = default ;
    CreateModelServiceRequest& operator=(const CreateModelServiceRequest &) = default ;
    CreateModelServiceRequest& operator=(CreateModelServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aiNodes_ != nullptr
        && this->clientToken_ != nullptr && this->DBInstanceId_ != nullptr && this->description_ != nullptr && this->enablePublicConnection_ != nullptr && this->inferenceEngine_ != nullptr
        && this->modelName_ != nullptr && this->modelParams_ != nullptr && this->replicas_ != nullptr && this->resourceGroupId_ != nullptr && this->securityIPList_ != nullptr; };
    // aiNodes Field Functions 
    bool hasAiNodes() const { return this->aiNodes_ != nullptr;};
    void deleteAiNodes() { this->aiNodes_ = nullptr;};
    inline const vector<string> & aiNodes() const { DARABONBA_PTR_GET_CONST(aiNodes_, vector<string>) };
    inline vector<string> aiNodes() { DARABONBA_PTR_GET(aiNodes_, vector<string>) };
    inline CreateModelServiceRequest& setAiNodes(const vector<string> & aiNodes) { DARABONBA_PTR_SET_VALUE(aiNodes_, aiNodes) };
    inline CreateModelServiceRequest& setAiNodes(vector<string> && aiNodes) { DARABONBA_PTR_SET_RVALUE(aiNodes_, aiNodes) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateModelServiceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateModelServiceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelServiceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enablePublicConnection Field Functions 
    bool hasEnablePublicConnection() const { return this->enablePublicConnection_ != nullptr;};
    void deleteEnablePublicConnection() { this->enablePublicConnection_ = nullptr;};
    inline bool enablePublicConnection() const { DARABONBA_PTR_GET_DEFAULT(enablePublicConnection_, false) };
    inline CreateModelServiceRequest& setEnablePublicConnection(bool enablePublicConnection) { DARABONBA_PTR_SET_VALUE(enablePublicConnection_, enablePublicConnection) };


    // inferenceEngine Field Functions 
    bool hasInferenceEngine() const { return this->inferenceEngine_ != nullptr;};
    void deleteInferenceEngine() { this->inferenceEngine_ = nullptr;};
    inline string inferenceEngine() const { DARABONBA_PTR_GET_DEFAULT(inferenceEngine_, "") };
    inline CreateModelServiceRequest& setInferenceEngine(string inferenceEngine) { DARABONBA_PTR_SET_VALUE(inferenceEngine_, inferenceEngine) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateModelServiceRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelParams Field Functions 
    bool hasModelParams() const { return this->modelParams_ != nullptr;};
    void deleteModelParams() { this->modelParams_ = nullptr;};
    inline     const Darabonba::Json & modelParams() const { DARABONBA_GET(modelParams_) };
    Darabonba::Json & modelParams() { DARABONBA_GET(modelParams_) };
    inline CreateModelServiceRequest& setModelParams(const Darabonba::Json & modelParams) { DARABONBA_SET_VALUE(modelParams_, modelParams) };
    inline CreateModelServiceRequest& setModelParams(Darabonba::Json & modelParams) { DARABONBA_SET_RVALUE(modelParams_, modelParams) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t replicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateModelServiceRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateModelServiceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateModelServiceRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> aiNodes_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enablePublicConnection_ = nullptr;
    std::shared_ptr<string> inferenceEngine_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> modelName_ = nullptr;
    Darabonba::Json modelParams_ = nullptr;
    std::shared_ptr<int32_t> replicas_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> securityIPList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
