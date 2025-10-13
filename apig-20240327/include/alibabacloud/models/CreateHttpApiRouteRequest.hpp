// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPAPIROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateHttpApiRouteRequestBackendConfig.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
#include <alibabacloud/models/CreateHttpApiRouteRequestMcpRouteConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreateHttpApiRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpApiRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpApiRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    CreateHttpApiRouteRequest() = default ;
    CreateHttpApiRouteRequest(const CreateHttpApiRouteRequest &) = default ;
    CreateHttpApiRouteRequest(CreateHttpApiRouteRequest &&) = default ;
    CreateHttpApiRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpApiRouteRequest() = default ;
    CreateHttpApiRouteRequest& operator=(const CreateHttpApiRouteRequest &) = default ;
    CreateHttpApiRouteRequest& operator=(CreateHttpApiRouteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendConfig_ != nullptr
        && this->deployConfigs_ != nullptr && this->description_ != nullptr && this->domainIds_ != nullptr && this->environmentId_ != nullptr && this->match_ != nullptr
        && this->mcpRouteConfig_ != nullptr && this->name_ != nullptr; };
    // backendConfig Field Functions 
    bool hasBackendConfig() const { return this->backendConfig_ != nullptr;};
    void deleteBackendConfig() { this->backendConfig_ = nullptr;};
    inline const CreateHttpApiRouteRequestBackendConfig & backendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, CreateHttpApiRouteRequestBackendConfig) };
    inline CreateHttpApiRouteRequestBackendConfig backendConfig() { DARABONBA_PTR_GET(backendConfig_, CreateHttpApiRouteRequestBackendConfig) };
    inline CreateHttpApiRouteRequest& setBackendConfig(const CreateHttpApiRouteRequestBackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline CreateHttpApiRouteRequest& setBackendConfig(CreateHttpApiRouteRequestBackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & deployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> deployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline CreateHttpApiRouteRequest& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline CreateHttpApiRouteRequest& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateHttpApiRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & domainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> domainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline CreateHttpApiRouteRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline CreateHttpApiRouteRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreateHttpApiRouteRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HttpRouteMatch & match() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
    inline HttpRouteMatch match() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
    inline CreateHttpApiRouteRequest& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline CreateHttpApiRouteRequest& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpRouteConfig Field Functions 
    bool hasMcpRouteConfig() const { return this->mcpRouteConfig_ != nullptr;};
    void deleteMcpRouteConfig() { this->mcpRouteConfig_ = nullptr;};
    inline const CreateHttpApiRouteRequestMcpRouteConfig & mcpRouteConfig() const { DARABONBA_PTR_GET_CONST(mcpRouteConfig_, CreateHttpApiRouteRequestMcpRouteConfig) };
    inline CreateHttpApiRouteRequestMcpRouteConfig mcpRouteConfig() { DARABONBA_PTR_GET(mcpRouteConfig_, CreateHttpApiRouteRequestMcpRouteConfig) };
    inline CreateHttpApiRouteRequest& setMcpRouteConfig(const CreateHttpApiRouteRequestMcpRouteConfig & mcpRouteConfig) { DARABONBA_PTR_SET_VALUE(mcpRouteConfig_, mcpRouteConfig) };
    inline CreateHttpApiRouteRequest& setMcpRouteConfig(CreateHttpApiRouteRequestMcpRouteConfig && mcpRouteConfig) { DARABONBA_PTR_SET_RVALUE(mcpRouteConfig_, mcpRouteConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateHttpApiRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The backend service configurations of the route.
    std::shared_ptr<CreateHttpApiRouteRequestBackendConfig> backendConfig_ = nullptr;
    std::shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ = nullptr;
    // The route description.
    std::shared_ptr<string> description_ = nullptr;
    // The domain name IDs.
    std::shared_ptr<vector<string>> domainIds_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The rule for matching the route.
    std::shared_ptr<HttpRouteMatch> match_ = nullptr;
    std::shared_ptr<CreateHttpApiRouteRequestMcpRouteConfig> mcpRouteConfig_ = nullptr;
    // The route name.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
