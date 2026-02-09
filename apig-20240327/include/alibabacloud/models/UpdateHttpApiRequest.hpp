// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AuthConfig.hpp>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/HttpApiVersionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateHttpApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHttpApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_TO_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_TO_JSON(authConfig, authConfig_);
      DARABONBA_PTR_TO_JSON(basePath, basePath_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_TO_JSON(firstByteTimeout, firstByteTimeout_);
      DARABONBA_PTR_TO_JSON(ingressConfig, ingressConfig_);
      DARABONBA_PTR_TO_JSON(onlyChangeConfig, onlyChangeConfig_);
      DARABONBA_PTR_TO_JSON(protocols, protocols_);
      DARABONBA_PTR_TO_JSON(removeBasePathOnForward, removeBasePathOnForward_);
      DARABONBA_PTR_TO_JSON(versionConfig, versionConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHttpApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentProtocols, agentProtocols_);
      DARABONBA_PTR_FROM_JSON(aiProtocols, aiProtocols_);
      DARABONBA_PTR_FROM_JSON(authConfig, authConfig_);
      DARABONBA_PTR_FROM_JSON(basePath, basePath_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enableAuth, enableAuth_);
      DARABONBA_PTR_FROM_JSON(firstByteTimeout, firstByteTimeout_);
      DARABONBA_PTR_FROM_JSON(ingressConfig, ingressConfig_);
      DARABONBA_PTR_FROM_JSON(onlyChangeConfig, onlyChangeConfig_);
      DARABONBA_PTR_FROM_JSON(protocols, protocols_);
      DARABONBA_PTR_FROM_JSON(removeBasePathOnForward, removeBasePathOnForward_);
      DARABONBA_PTR_FROM_JSON(versionConfig, versionConfig_);
    };
    UpdateHttpApiRequest() = default ;
    UpdateHttpApiRequest(const UpdateHttpApiRequest &) = default ;
    UpdateHttpApiRequest(UpdateHttpApiRequest &&) = default ;
    UpdateHttpApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHttpApiRequest() = default ;
    UpdateHttpApiRequest& operator=(const UpdateHttpApiRequest &) = default ;
    UpdateHttpApiRequest& operator=(UpdateHttpApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class IngressConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const IngressConfig& obj) { 
        DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
        DARABONBA_PTR_TO_JSON(ingressClass, ingressClass_);
        DARABONBA_PTR_TO_JSON(overrideIngressIp, overrideIngressIp_);
        DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
        DARABONBA_PTR_TO_JSON(watchNamespace, watchNamespace_);
      };
      friend void from_json(const Darabonba::Json& j, IngressConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
        DARABONBA_PTR_FROM_JSON(ingressClass, ingressClass_);
        DARABONBA_PTR_FROM_JSON(overrideIngressIp, overrideIngressIp_);
        DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
        DARABONBA_PTR_FROM_JSON(watchNamespace, watchNamespace_);
      };
      IngressConfig() = default ;
      IngressConfig(const IngressConfig &) = default ;
      IngressConfig(IngressConfig &&) = default ;
      IngressConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~IngressConfig() = default ;
      IngressConfig& operator=(const IngressConfig &) = default ;
      IngressConfig& operator=(IngressConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->environmentId_ == nullptr
        && this->ingressClass_ == nullptr && this->overrideIngressIp_ == nullptr && this->sourceId_ == nullptr && this->watchNamespace_ == nullptr; };
      // environmentId Field Functions 
      bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
      void deleteEnvironmentId() { this->environmentId_ = nullptr;};
      inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
      inline IngressConfig& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


      // ingressClass Field Functions 
      bool hasIngressClass() const { return this->ingressClass_ != nullptr;};
      void deleteIngressClass() { this->ingressClass_ = nullptr;};
      inline string getIngressClass() const { DARABONBA_PTR_GET_DEFAULT(ingressClass_, "") };
      inline IngressConfig& setIngressClass(string ingressClass) { DARABONBA_PTR_SET_VALUE(ingressClass_, ingressClass) };


      // overrideIngressIp Field Functions 
      bool hasOverrideIngressIp() const { return this->overrideIngressIp_ != nullptr;};
      void deleteOverrideIngressIp() { this->overrideIngressIp_ = nullptr;};
      inline bool getOverrideIngressIp() const { DARABONBA_PTR_GET_DEFAULT(overrideIngressIp_, false) };
      inline IngressConfig& setOverrideIngressIp(bool overrideIngressIp) { DARABONBA_PTR_SET_VALUE(overrideIngressIp_, overrideIngressIp) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
      inline IngressConfig& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // watchNamespace Field Functions 
      bool hasWatchNamespace() const { return this->watchNamespace_ != nullptr;};
      void deleteWatchNamespace() { this->watchNamespace_ = nullptr;};
      inline string getWatchNamespace() const { DARABONBA_PTR_GET_DEFAULT(watchNamespace_, "") };
      inline IngressConfig& setWatchNamespace(string watchNamespace) { DARABONBA_PTR_SET_VALUE(watchNamespace_, watchNamespace) };


    protected:
      // The authentication configuration.
      shared_ptr<string> environmentId_ {};
      // The response parameters.
      shared_ptr<string> ingressClass_ {};
      // The returned message.
      shared_ptr<bool> overrideIngressIp_ {};
      // json
      shared_ptr<string> sourceId_ {};
      // The request ID.
      shared_ptr<string> watchNamespace_ {};
    };

    virtual bool empty() const override { return this->agentProtocols_ == nullptr
        && this->aiProtocols_ == nullptr && this->authConfig_ == nullptr && this->basePath_ == nullptr && this->deployConfigs_ == nullptr && this->description_ == nullptr
        && this->enableAuth_ == nullptr && this->firstByteTimeout_ == nullptr && this->ingressConfig_ == nullptr && this->onlyChangeConfig_ == nullptr && this->protocols_ == nullptr
        && this->removeBasePathOnForward_ == nullptr && this->versionConfig_ == nullptr; };
    // agentProtocols Field Functions 
    bool hasAgentProtocols() const { return this->agentProtocols_ != nullptr;};
    void deleteAgentProtocols() { this->agentProtocols_ = nullptr;};
    inline const vector<string> & getAgentProtocols() const { DARABONBA_PTR_GET_CONST(agentProtocols_, vector<string>) };
    inline vector<string> getAgentProtocols() { DARABONBA_PTR_GET(agentProtocols_, vector<string>) };
    inline UpdateHttpApiRequest& setAgentProtocols(const vector<string> & agentProtocols) { DARABONBA_PTR_SET_VALUE(agentProtocols_, agentProtocols) };
    inline UpdateHttpApiRequest& setAgentProtocols(vector<string> && agentProtocols) { DARABONBA_PTR_SET_RVALUE(agentProtocols_, agentProtocols) };


    // aiProtocols Field Functions 
    bool hasAiProtocols() const { return this->aiProtocols_ != nullptr;};
    void deleteAiProtocols() { this->aiProtocols_ = nullptr;};
    inline const vector<string> & getAiProtocols() const { DARABONBA_PTR_GET_CONST(aiProtocols_, vector<string>) };
    inline vector<string> getAiProtocols() { DARABONBA_PTR_GET(aiProtocols_, vector<string>) };
    inline UpdateHttpApiRequest& setAiProtocols(const vector<string> & aiProtocols) { DARABONBA_PTR_SET_VALUE(aiProtocols_, aiProtocols) };
    inline UpdateHttpApiRequest& setAiProtocols(vector<string> && aiProtocols) { DARABONBA_PTR_SET_RVALUE(aiProtocols_, aiProtocols) };


    // authConfig Field Functions 
    bool hasAuthConfig() const { return this->authConfig_ != nullptr;};
    void deleteAuthConfig() { this->authConfig_ = nullptr;};
    inline const AuthConfig & getAuthConfig() const { DARABONBA_PTR_GET_CONST(authConfig_, AuthConfig) };
    inline AuthConfig getAuthConfig() { DARABONBA_PTR_GET(authConfig_, AuthConfig) };
    inline UpdateHttpApiRequest& setAuthConfig(const AuthConfig & authConfig) { DARABONBA_PTR_SET_VALUE(authConfig_, authConfig) };
    inline UpdateHttpApiRequest& setAuthConfig(AuthConfig && authConfig) { DARABONBA_PTR_SET_RVALUE(authConfig_, authConfig) };


    // basePath Field Functions 
    bool hasBasePath() const { return this->basePath_ != nullptr;};
    void deleteBasePath() { this->basePath_ = nullptr;};
    inline string getBasePath() const { DARABONBA_PTR_GET_DEFAULT(basePath_, "") };
    inline UpdateHttpApiRequest& setBasePath(string basePath) { DARABONBA_PTR_SET_VALUE(basePath_, basePath) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & getDeployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> getDeployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline UpdateHttpApiRequest& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline UpdateHttpApiRequest& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateHttpApiRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableAuth Field Functions 
    bool hasEnableAuth() const { return this->enableAuth_ != nullptr;};
    void deleteEnableAuth() { this->enableAuth_ = nullptr;};
    inline bool getEnableAuth() const { DARABONBA_PTR_GET_DEFAULT(enableAuth_, false) };
    inline UpdateHttpApiRequest& setEnableAuth(bool enableAuth) { DARABONBA_PTR_SET_VALUE(enableAuth_, enableAuth) };


    // firstByteTimeout Field Functions 
    bool hasFirstByteTimeout() const { return this->firstByteTimeout_ != nullptr;};
    void deleteFirstByteTimeout() { this->firstByteTimeout_ = nullptr;};
    inline int32_t getFirstByteTimeout() const { DARABONBA_PTR_GET_DEFAULT(firstByteTimeout_, 0) };
    inline UpdateHttpApiRequest& setFirstByteTimeout(int32_t firstByteTimeout) { DARABONBA_PTR_SET_VALUE(firstByteTimeout_, firstByteTimeout) };


    // ingressConfig Field Functions 
    bool hasIngressConfig() const { return this->ingressConfig_ != nullptr;};
    void deleteIngressConfig() { this->ingressConfig_ = nullptr;};
    inline const UpdateHttpApiRequest::IngressConfig & getIngressConfig() const { DARABONBA_PTR_GET_CONST(ingressConfig_, UpdateHttpApiRequest::IngressConfig) };
    inline UpdateHttpApiRequest::IngressConfig getIngressConfig() { DARABONBA_PTR_GET(ingressConfig_, UpdateHttpApiRequest::IngressConfig) };
    inline UpdateHttpApiRequest& setIngressConfig(const UpdateHttpApiRequest::IngressConfig & ingressConfig) { DARABONBA_PTR_SET_VALUE(ingressConfig_, ingressConfig) };
    inline UpdateHttpApiRequest& setIngressConfig(UpdateHttpApiRequest::IngressConfig && ingressConfig) { DARABONBA_PTR_SET_RVALUE(ingressConfig_, ingressConfig) };


    // onlyChangeConfig Field Functions 
    bool hasOnlyChangeConfig() const { return this->onlyChangeConfig_ != nullptr;};
    void deleteOnlyChangeConfig() { this->onlyChangeConfig_ = nullptr;};
    inline bool getOnlyChangeConfig() const { DARABONBA_PTR_GET_DEFAULT(onlyChangeConfig_, false) };
    inline UpdateHttpApiRequest& setOnlyChangeConfig(bool onlyChangeConfig) { DARABONBA_PTR_SET_VALUE(onlyChangeConfig_, onlyChangeConfig) };


    // protocols Field Functions 
    bool hasProtocols() const { return this->protocols_ != nullptr;};
    void deleteProtocols() { this->protocols_ = nullptr;};
    inline const vector<string> & getProtocols() const { DARABONBA_PTR_GET_CONST(protocols_, vector<string>) };
    inline vector<string> getProtocols() { DARABONBA_PTR_GET(protocols_, vector<string>) };
    inline UpdateHttpApiRequest& setProtocols(const vector<string> & protocols) { DARABONBA_PTR_SET_VALUE(protocols_, protocols) };
    inline UpdateHttpApiRequest& setProtocols(vector<string> && protocols) { DARABONBA_PTR_SET_RVALUE(protocols_, protocols) };


    // removeBasePathOnForward Field Functions 
    bool hasRemoveBasePathOnForward() const { return this->removeBasePathOnForward_ != nullptr;};
    void deleteRemoveBasePathOnForward() { this->removeBasePathOnForward_ = nullptr;};
    inline bool getRemoveBasePathOnForward() const { DARABONBA_PTR_GET_DEFAULT(removeBasePathOnForward_, false) };
    inline UpdateHttpApiRequest& setRemoveBasePathOnForward(bool removeBasePathOnForward) { DARABONBA_PTR_SET_VALUE(removeBasePathOnForward_, removeBasePathOnForward) };


    // versionConfig Field Functions 
    bool hasVersionConfig() const { return this->versionConfig_ != nullptr;};
    void deleteVersionConfig() { this->versionConfig_ = nullptr;};
    inline const HttpApiVersionConfig & getVersionConfig() const { DARABONBA_PTR_GET_CONST(versionConfig_, HttpApiVersionConfig) };
    inline HttpApiVersionConfig getVersionConfig() { DARABONBA_PTR_GET(versionConfig_, HttpApiVersionConfig) };
    inline UpdateHttpApiRequest& setVersionConfig(const HttpApiVersionConfig & versionConfig) { DARABONBA_PTR_SET_VALUE(versionConfig_, versionConfig) };
    inline UpdateHttpApiRequest& setVersionConfig(HttpApiVersionConfig && versionConfig) { DARABONBA_PTR_SET_RVALUE(versionConfig_, versionConfig) };


  protected:
    // The list of agent protocols
    shared_ptr<vector<string>> agentProtocols_ {};
    // The status code.
    shared_ptr<vector<string>> aiProtocols_ {};
    // The authentication configuration
    shared_ptr<AuthConfig> authConfig_ {};
    // The list of API deployment configurations.
    // 
    // This parameter is required.
    shared_ptr<string> basePath_ {};
    // The deployment configurations
    shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ {};
    // The environment ID.
    shared_ptr<string> description_ {};
    // Whether authentication is enabled
    shared_ptr<bool> enableAuth_ {};
    // The first byte timeout in nanoseconds
    shared_ptr<int32_t> firstByteTimeout_ {};
    // Specifies whether to enable authentication.
    shared_ptr<UpdateHttpApiRequest::IngressConfig> ingressConfig_ {};
    // Whether to only change configuration without redeployment
    shared_ptr<bool> onlyChangeConfig_ {};
    // The listened namespace.
    shared_ptr<vector<string>> protocols_ {};
    // Whether to remove base path when forwarding
    shared_ptr<bool> removeBasePathOnForward_ {};
    // A deployment configuration.
    shared_ptr<HttpApiVersionConfig> versionConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
