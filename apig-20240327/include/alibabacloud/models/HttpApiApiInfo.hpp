// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIAPIINFO_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIAPIINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AuthConfig.hpp>
#include <map>
#include <alibabacloud/models/HttpApiApiInfoDeployCntMapValue.hpp>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/HttpApiApiInfoEnvironments.hpp>
#include <alibabacloud/models/HttpApiApiInfoIngressInfo.hpp>
#include <alibabacloud/models/HttpApiVersionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiApiInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiApiInfo& obj) { 
      DARABONBA_PTR_TO_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(deployCntMap, deployCntMap_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enabelAuth, enabelAuth_);
      DARABONBA_PTR_TO_JSON(environments, environments_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_TO_JSON(ingressInfo, ingressInfo_);
      DARABONBA_PTR_TO_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(versionInfo, versionInfo_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiApiInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(deployCntMap, deployCntMap_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enabelAuth, enabelAuth_);
      DARABONBA_PTR_FROM_JSON(environments, environments_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(httpApiId, httpApiId_);
      DARABONBA_PTR_FROM_JSON(ingressInfo, ingressInfo_);
      DARABONBA_PTR_FROM_JSON(modelCategory, modelCategory_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(versionInfo, versionInfo_);
    };
    HttpApiApiInfo() = default ;
    HttpApiApiInfo(const HttpApiApiInfo &) = default ;
    HttpApiApiInfo(HttpApiApiInfo &&) = default ;
    HttpApiApiInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiApiInfo() = default ;
    HttpApiApiInfo& operator=(const HttpApiApiInfo &) = default ;
    HttpApiApiInfo& operator=(HttpApiApiInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiProtocols_ == nullptr
        && return this->authConfig_ == nullptr && return this->basePath_ == nullptr && return this->deployCntMap_ == nullptr && return this->deployConfigs_ == nullptr && return this->description_ == nullptr
        && return this->enabelAuth_ == nullptr && return this->environments_ == nullptr && return this->gatewayId_ == nullptr && return this->httpApiId_ == nullptr && return this->ingressInfo_ == nullptr
        && return this->modelCategory_ == nullptr && return this->name_ == nullptr && return this->protocols_ == nullptr && return this->resourceGroupId_ == nullptr && return this->type_ == nullptr
        && return this->versionInfo_ == nullptr; };
    // aiProtocols Field Functions 
    bool hasAiProtocols() const { return this->aiProtocols_ != nullptr;};
    void deleteAiProtocols() { this->aiProtocols_ = nullptr;};
    inline const vector<string> & aiProtocols() const { DARABONBA_PTR_GET_CONST(aiProtocols_, vector<string>) };
    inline vector<string> aiProtocols() { DARABONBA_PTR_GET(aiProtocols_, vector<string>) };
    inline HttpApiApiInfo& setAiProtocols(const vector<string> & aiProtocols) { DARABONBA_PTR_SET_VALUE(aiProtocols_, aiProtocols) };
    inline HttpApiApiInfo& setAiProtocols(vector<string> && aiProtocols) { DARABONBA_PTR_SET_RVALUE(aiProtocols_, aiProtocols) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const AuthConfig & authConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, AuthConfig) };
    inline AuthConfig authConfig() { DARABONBA_PTR_GET(authConfig_, AuthConfig) };
    inline HttpApiApiInfo& setAuthConfig(const AuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline HttpApiApiInfo& setAuthConfig(AuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string basePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline HttpApiApiInfo& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // deployCntMap Field Functions 
    bool hasDeployCntMap() const { return this->deployCntMap_ != nullptr;};
    void deleteDeployCntMap() { this->deployCntMap_ = nullptr;};
    inline const map<string, HttpApiApiInfoDeployCntMapValue> & deployCntMap() const { DARABONBA_PTR_GET_CONST(deployCntMap_, map<string, HttpApiApiInfoDeployCntMapValue>) };
    inline map<string, HttpApiApiInfoDeployCntMapValue> deployCntMap() { DARABONBA_PTR_GET(deployCntMap_, map<string, HttpApiApiInfoDeployCntMapValue>) };
    inline HttpApiApiInfo& setDeployCntMap(const map<string, HttpApiApiInfoDeployCntMapValue> & deployCntMap) { DARABONBA_PTR_SET_VALUE(deployCntMap_, deployCntMap) };
    inline HttpApiApiInfo& setDeployCntMap(map<string, HttpApiApiInfoDeployCntMapValue> && deployCntMap) { DARABONBA_PTR_SET_RVALUE(deployCntMap_, deployCntMap) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & deployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> deployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline HttpApiApiInfo& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline HttpApiApiInfo& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline HttpApiApiInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabelAuth Field Functions 
    bool hasEnabelAuth() const { return this->enabelAuth_ != nullptr;};
    void deleteEnabelAuth() { this->enabelAuth_ = nullptr;};
    inline bool enabelAuth() const { DARABONBA_PTR_GET_DEFAULT(enabelAuth_, false) };
    inline HttpApiApiInfo& setEnabelAuth(bool enabelAuth) { DARABONBA_PTR_SET_VALUE(enabelAuth_, enabelAuth) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<HttpApiApiInfoEnvironments> & environments() const { DARABONBA_PTR_GET_CONST(environments_, vector<HttpApiApiInfoEnvironments>) };
    inline vector<HttpApiApiInfoEnvironments> environments() { DARABONBA_PTR_GET(environments_, vector<HttpApiApiInfoEnvironments>) };
    inline HttpApiApiInfo& setEnvironments(const vector<HttpApiApiInfoEnvironments> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline HttpApiApiInfo& setEnvironments(vector<HttpApiApiInfoEnvironments> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline HttpApiApiInfo& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // httpApiId Field Functions 
    bool hasHttpApiId() const { return this->httpApiId_ != nullptr;};
    void deleteHttpApiId() { this->httpApiId_ = nullptr;};
    inline string httpApiId() const { DARABONBA_PTR_GET_DEFAULT(httpApiId_, "") };
    inline HttpApiApiInfo& setHttpApiId(string httpApiId) { DARABONBA_PTR_SET_VALUE(httpApiId_, httpApiId) };


    // ingressInfo Field Functions 
    bool hasIngressInfo() const { return this->ingressInfo_ != nullptr;};
    void deleteIngressInfo() { this->ingressInfo_ = nullptr;};
    inline const HttpApiApiInfoIngressInfo & ingressInfo() const { DARABONBA_PTR_GET_CONST(ingressInfo_, HttpApiApiInfoIngressInfo) };
    inline HttpApiApiInfoIngressInfo ingressInfo() { DARABONBA_PTR_GET(ingressInfo_, HttpApiApiInfoIngressInfo) };
    inline HttpApiApiInfo& setIngressInfo(const HttpApiApiInfoIngressInfo & ingressInfo) { DARABONBA_PTR_SET_VALUE(ingressInfo_, ingressInfo) };
    inline HttpApiApiInfo& setIngressInfo(HttpApiApiInfoIngressInfo && ingressInfo) { DARABONBA_PTR_SET_RVALUE(ingressInfo_, ingressInfo) };


    // modelCategory Field Functions 
    bool hasModelCategory() const { return this->modelCategory_ != nullptr;};
    void deleteModelCategory() { this->modelCategory_ = nullptr;};
    inline string modelCategory() const { DARABONBA_PTR_GET_DEFAULT(modelCategory_, "") };
    inline HttpApiApiInfo& setModelCategory(string modelCategory) { DARABONBA_PTR_SET_VALUE(modelCategory_, modelCategory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiApiInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & protocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> protocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline HttpApiApiInfo& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline HttpApiApiInfo& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline HttpApiApiInfo& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline HttpApiApiInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // versionInfo Field Functions 
    bool hasVersionInfo() const { return this->versionInfo_ != nullptr;};
    void deleteVersionInfo() { this->versionInfo_ = nullptr;};
    inline const HttpApiVersionInfo & versionInfo() const { DARABONBA_PTR_GET_CONST(versionInfo_, HttpApiVersionInfo) };
    inline HttpApiVersionInfo versionInfo() { DARABONBA_PTR_GET(versionInfo_, HttpApiVersionInfo) };
    inline HttpApiApiInfo& setVersionInfo(const HttpApiVersionInfo & versionInfo) { DARABONBA_PTR_SET_VALUE(versionInfo_, versionInfo) };
    inline HttpApiApiInfo& setVersionInfo(HttpApiVersionInfo && versionInfo) { DARABONBA_PTR_SET_RVALUE(versionInfo_, versionInfo) };


  protected:
    std::shared_ptr<vector<string>> aiProtocols_ = nullptr;
    std::shared_ptr<AuthConfig> authConfig_ = nullptr;
    std::shared_ptr<string> basePath_ = nullptr;
    std::shared_ptr<map<string, HttpApiApiInfoDeployCntMapValue>> deployCntMap_ = nullptr;
    std::shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enabelAuth_ = nullptr;
    std::shared_ptr<vector<HttpApiApiInfoEnvironments>> environments_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<string> httpApiId_ = nullptr;
    std::shared_ptr<HttpApiApiInfoIngressInfo> ingressInfo_ = nullptr;
    std::shared_ptr<string> modelCategory_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<string>> protocols_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<HttpApiVersionInfo> versionInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
