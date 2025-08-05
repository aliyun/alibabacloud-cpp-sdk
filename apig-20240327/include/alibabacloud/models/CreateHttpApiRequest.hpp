// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/APIG20240327.hpp>
#include <alibabacloud/models/CreateHttpApiRequestIngressConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_TO_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_TO_JSON(ingressConfig, ingressConfig_);
      DARABONBA_PTR_TO_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(removeBasePathOnForward, removeBasePathOnForward_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(versionConfig, versionConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_FROM_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_FROM_JSON(ingressConfig, ingressConfig_);
      DARABONBA_PTR_FROM_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(removeBasePathOnForward, removeBasePathOnForward_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(versionConfig, versionConfig_);
    };
    CreateHttpApiRequest() = default ;
    CreateHttpApiRequest(const CreateHttpApiRequest &) = default ;
    CreateHttpApiRequest(CreateHttpApiRequest &&) = default ;
    CreateHttpApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiRequest() = default ;
    CreateHttpApiRequest& operator=(const CreateHttpApiRequest &) = default ;
    CreateHttpApiRequest& operator=(CreateHttpApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentProtocols_ != nullptr
        && this->aiProtocols_ != nullptr && this->authConfig_ != nullptr && this->basePath_ != nullptr && this->deployConfigs_ != nullptr && this->description_ != nullptr
        && this->enableAuth_ != nullptr && this->ingressConfig_ != nullptr && this->modelCategory_ != nullptr && this->name_ != nullptr && this->protocols_ != nullptr
        && this->removeBasePathOnForward_ != nullptr && this->resourceGroupId_ != nullptr && this->type_ != nullptr && this->versionConfig_ != nullptr; };
    // agentProtocols Field Functions 
    bool hasAgentProtocols() const { return this->agentProtocols_ != nullptr;};
    void deleteAgentProtocols() { this->agentProtocols_ = nullptr;};
    inline const vector<string> & agentProtocols() const { DARABONBA_PTR_GET_CONST(agentProtocols_, vector<string>) };
    inline vector<string> agentProtocols() { DARABONBA_PTR_GET(agentProtocols_, vector<string>) };
    inline CreateHttpApiRequest& setAgentProtocols(const vector<string> & agentProtocols) { DARABONBA_PTR_SET_VALUE(agentProtocols_, agentProtocols) };
    inline CreateHttpApiRequest& setAgentProtocols(vector<string> && agentProtocols) { DARABONBA_PTR_SET_RVALUE(agentProtocols_, agentProtocols) };


    // aiProtocols Field Functions 
    bool hasAiProtocols() const { return this->aiProtocols_ != nullptr;};
    void deleteAiProtocols() { this->aiProtocols_ = nullptr;};
    inline const vector<string> & aiProtocols() const { DARABONBA_PTR_GET_CONST(aiProtocols_, vector<string>) };
    inline vector<string> aiProtocols() { DARABONBA_PTR_GET(aiProtocols_, vector<string>) };
    inline CreateHttpApiRequest& setAiProtocols(const vector<string> & aiProtocols) { DARABONBA_PTR_SET_VALUE(aiProtocols_, aiProtocols) };
    inline CreateHttpApiRequest& setAiProtocols(vector<string> && aiProtocols) { DARABONBA_PTR_SET_RVALUE(aiProtocols_, aiProtocols) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const AuthConfig & authConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, AuthConfig) };
    inline AuthConfig authConfig() { DARABONBA_PTR_GET(authConfig_, AuthConfig) };
    inline CreateHttpApiRequest& setAuthConfig(const AuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline CreateHttpApiRequest& setAuthConfig(AuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string basePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline CreateHttpApiRequest& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & deployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> deployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline CreateHttpApiRequest& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline CreateHttpApiRequest& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateHttpApiRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAuth Field Functions 
    bool hasEnableAuth() const { return this->enableAuth_ != nullptr;};
    void deleteEnableAuth() { this->enableAuth_ = nullptr;};
    inline bool enableAuth() const { DARABONBA_PTR_GET_DEFAULT(enableAuth_, false) };
    inline CreateHttpApiRequest& setEnableAuth(bool enableAuth) { DARABONBA_PTR_SET_VALUE(enableAuth_, enableAuth) };


    // ingressConfig Field Functions 
    bool hasIngressConfig() const { return this->ingressConfig_ != nullptr;};
    void deleteIngressConfig() { this->ingressConfig_ = nullptr;};
    inline const CreateHttpApiRequestIngressConfig & ingressConfig() const { DARABONBA_PTR_GET_CONST(ingressConfig_, CreateHttpApiRequestIngressConfig) };
    inline CreateHttpApiRequestIngressConfig ingressConfig() { DARABONBA_PTR_GET(ingressConfig_, CreateHttpApiRequestIngressConfig) };
    inline CreateHttpApiRequest& setIngressConfig(const CreateHttpApiRequestIngressConfig & ingressConfig) { DARABONBA_PTR_SET_VALUE(ingressConfig_, ingressConfig) };
    inline CreateHttpApiRequest& setIngressConfig(CreateHttpApiRequestIngressConfig && ingressConfig) { DARABONBA_PTR_SET_RVALUE(ingressConfig_, ingressConfig) };


    // modelCategory Field Functions 
    bool hasModelCategory() const { return this->modelCategory_ != nullptr;};
    void deleteModelCategory() { this->modelCategory_ = nullptr;};
    inline string modelCategory() const { DARABONBA_PTR_GET_DEFAULT(modelCategory_, "") };
    inline CreateHttpApiRequest& setModelCategory(string modelCategory) { DARABONBA_PTR_SET_VALUE(modelCategory_, modelCategory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHttpApiRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> protocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline CreateHttpApiRequest& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline CreateHttpApiRequest& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // removeBasePathOnForward Field Functions 
    bool hasRemoveBasePathOnForward() const { return this->removeBasePathOnForward_ != nullptr;};
    void deleteRemoveBasePathOnForward() { this->removeBasePathOnForward_ = nullptr;};
    inline bool removeBasePathOnForward() const { DARABONBA_PTR_GET_DEFAULT(removeBasePathOnForward_, false) };
    inline CreateHttpApiRequest& setRemoveBasePathOnForward(bool removeBasePathOnForward) { DARABONBA_PTR_SET_VALUE(removeBasePathOnForward_, removeBasePathOnForward) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateHttpApiRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateHttpApiRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // versionConfig Field Functions 
    bool hasVersionConfig() const { return this->versionConfig_ != nullptr;};
    void deleteVersionConfig() { this->versionConfig_ = nullptr;};
    inline const HttpApiVersionConfig & versionConfig() const { DARABONBA_PTR_GET_CONST(versionConfig_, HttpApiVersionConfig) };
    inline HttpApiVersionConfig versionConfig() { DARABONBA_PTR_GET(versionConfig_, HttpApiVersionConfig) };
    inline CreateHttpApiRequest& setVersionConfig(const HttpApiVersionConfig & versionConfig) { DARABONBA_PTR_SET_VALUE(versionConfig_, versionConfig) };
    inline CreateHttpApiRequest& setVersionConfig(HttpApiVersionConfig && versionConfig) { DARABONBA_PTR_SET_RVALUE(versionConfig_, versionConfig) };


  protected:
    std::shared_ptr<vector<string>> agentProtocols_ = nullptr;
    // The AI API protocols. Valid value:
    // 
    // *   OpenAI/v1
    std::shared_ptr<vector<string>> aiProtocols_ = nullptr;
    // The authentication configurations.
    std::shared_ptr<AuthConfig> authConfig_ = nullptr;
    // The API base path, which must start with a forward slash (/).
    std::shared_ptr<string> basePath_ = nullptr;
    // The API deployment configurations. Currently, only AI APIs support deployment configurations, and only a single deployment configuration can be passed.
    std::shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ = nullptr;
    // The API description.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable authentication.
    std::shared_ptr<bool> enableAuth_ = nullptr;
    // The HTTP Ingress configurations.
    std::shared_ptr<CreateHttpApiRequestIngressConfig> ingressConfig_ = nullptr;
    std::shared_ptr<string> modelCategory_ = nullptr;
    // The API name.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The protocols that are used to call the API.
    std::shared_ptr<vector<string>> protocols_ = nullptr;
    std::shared_ptr<bool> removeBasePathOnForward_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The API type. Valid values:
    // 
    // *   Http
    // *   Rest
    // *   WebSocket
    // *   HttpIngress
    std::shared_ptr<string> type_ = nullptr;
    // The versioning configuration of the API.
    std::shared_ptr<HttpApiVersionConfig> versionConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
