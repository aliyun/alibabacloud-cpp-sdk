// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELSERVICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELSERVICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateModelServiceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelServiceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AiNodes, aiNodesShrink_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnablePublicConnection, enablePublicConnection_);
      DARABONBA_PTR_TO_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelParams, modelParamsShrink_);
      DARABONBA_PTR_TO_JSON(Replicas, replicas_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelServiceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AiNodes, aiNodesShrink_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnablePublicConnection, enablePublicConnection_);
      DARABONBA_PTR_FROM_JSON(InferenceEngine, inferenceEngine_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelParams, modelParamsShrink_);
      DARABONBA_PTR_FROM_JSON(Replicas, replicas_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
    };
    CreateModelServiceShrinkRequest() = default ;
    CreateModelServiceShrinkRequest(const CreateModelServiceShrinkRequest &) = default ;
    CreateModelServiceShrinkRequest(CreateModelServiceShrinkRequest &&) = default ;
    CreateModelServiceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelServiceShrinkRequest() = default ;
    CreateModelServiceShrinkRequest& operator=(const CreateModelServiceShrinkRequest &) = default ;
    CreateModelServiceShrinkRequest& operator=(CreateModelServiceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiNodesShrink_ == nullptr
        && this->clientToken_ == nullptr && this->DBInstanceId_ == nullptr && this->description_ == nullptr && this->enablePublicConnection_ == nullptr && this->inferenceEngine_ == nullptr
        && this->modelName_ == nullptr && this->modelParamsShrink_ == nullptr && this->replicas_ == nullptr && this->resourceGroupId_ == nullptr && this->securityIPList_ == nullptr; };
    // aiNodesShrink Field Functions 
    bool hasAiNodesShrink() const { return this->aiNodesShrink_ != nullptr;};
    void deleteAiNodesShrink() { this->aiNodesShrink_ = nullptr;};
    inline string getAiNodesShrink() const { DARABONBA_PTR_GET_DEFAULT(aiNodesShrink_, "") };
    inline CreateModelServiceShrinkRequest& setAiNodesShrink(string aiNodesShrink) { DARABONBA_PTR_SET_VALUE(aiNodesShrink_, aiNodesShrink) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateModelServiceShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline CreateModelServiceShrinkRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelServiceShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enablePublicConnection Field Functions 
    bool hasEnablePublicConnection() const { return this->enablePublicConnection_ != nullptr;};
    void deleteEnablePublicConnection() { this->enablePublicConnection_ = nullptr;};
    inline bool getEnablePublicConnection() const { DARABONBA_PTR_GET_DEFAULT(enablePublicConnection_, false) };
    inline CreateModelServiceShrinkRequest& setEnablePublicConnection(bool enablePublicConnection) { DARABONBA_PTR_SET_VALUE(enablePublicConnection_, enablePublicConnection) };


    // inferenceEngine Field Functions 
    bool hasInferenceEngine() const { return this->inferenceEngine_ != nullptr;};
    void deleteInferenceEngine() { this->inferenceEngine_ = nullptr;};
    inline string getInferenceEngine() const { DARABONBA_PTR_GET_DEFAULT(inferenceEngine_, "") };
    inline CreateModelServiceShrinkRequest& setInferenceEngine(string inferenceEngine) { DARABONBA_PTR_SET_VALUE(inferenceEngine_, inferenceEngine) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateModelServiceShrinkRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelParamsShrink Field Functions 
    bool hasModelParamsShrink() const { return this->modelParamsShrink_ != nullptr;};
    void deleteModelParamsShrink() { this->modelParamsShrink_ = nullptr;};
    inline string getModelParamsShrink() const { DARABONBA_PTR_GET_DEFAULT(modelParamsShrink_, "") };
    inline CreateModelServiceShrinkRequest& setModelParamsShrink(string modelParamsShrink) { DARABONBA_PTR_SET_VALUE(modelParamsShrink_, modelParamsShrink) };


    // replicas Field Functions 
    bool hasReplicas() const { return this->replicas_ != nullptr;};
    void deleteReplicas() { this->replicas_ = nullptr;};
    inline int32_t getReplicas() const { DARABONBA_PTR_GET_DEFAULT(replicas_, 0) };
    inline CreateModelServiceShrinkRequest& setReplicas(int32_t replicas) { DARABONBA_PTR_SET_VALUE(replicas_, replicas) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateModelServiceShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string getSecurityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline CreateModelServiceShrinkRequest& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


  protected:
    // A list of AI nodes for model deployment.
    // 
    // This parameter is required.
    shared_ptr<string> aiNodesShrink_ {};
    // The client token that is used to ensure the idempotence of the request. For more information, see [How do I ensure the idempotence?](https://help.aliyun.com/document_detail/327176.html)
    shared_ptr<string> clientToken_ {};
    // The cluster ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the IDs of all AnalyticDB for PostgreSQL instances in the specified region.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The description.
    shared_ptr<string> description_ {};
    shared_ptr<bool> enablePublicConnection_ {};
    // The inference engine. Only vllm is supported.
    shared_ptr<string> inferenceEngine_ {};
    // The name of the model.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // Model parameters (to be supported).
    shared_ptr<string> modelParamsShrink_ {};
    // The number of model service replicas.
    shared_ptr<int32_t> replicas_ {};
    // The ID of the resource group to which the instance belongs. For more information about how to get the ID of a resource group, see [View the basic information of a resource group](https://help.aliyun.com/document_detail/151181.html).
    shared_ptr<string> resourceGroupId_ {};
    // The IP address whitelist.
    // 
    // 127.0.0.1 indicates that access from any external IP address is prohibited. You can call the [ModifySecurityIps](https://help.aliyun.com/document_detail/86928.html) operation to modify the IP address whitelist after the instance is created.
    shared_ptr<string> securityIPList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
