// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHTTPAPIROUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHTTPAPIROUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateHttpApiRouteRequestBackendConfig.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDeployConfig.hpp>
#include <alibabacloud/models/HttpRouteMatch.hpp>
#include <alibabacloud/models/UpdateHttpApiRouteRequestMcpRouteConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UpdateHttpApiRouteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHttpApiRouteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_TO_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(domainIds, domainIds_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(match, match_);
      DARABONBA_PTR_TO_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHttpApiRouteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(backendConfig, backendConfig_);
      DARABONBA_PTR_FROM_JSON(deployConfigs, deployConfigs_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(domainIds, domainIds_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(match, match_);
      DARABONBA_PTR_FROM_JSON(mcpRouteConfig, mcpRouteConfig_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    UpdateHttpApiRouteRequest() = default ;
    UpdateHttpApiRouteRequest(const UpdateHttpApiRouteRequest &) = default ;
    UpdateHttpApiRouteRequest(UpdateHttpApiRouteRequest &&) = default ;
    UpdateHttpApiRouteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHttpApiRouteRequest() = default ;
    UpdateHttpApiRouteRequest& operator=(const UpdateHttpApiRouteRequest &) = default ;
    UpdateHttpApiRouteRequest& operator=(UpdateHttpApiRouteRequest &&) = default ;
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
    inline const UpdateHttpApiRouteRequestBackendConfig & backendConfig() const { DARABONBA_PTR_GET_CONST(backendConfig_, UpdateHttpApiRouteRequestBackendConfig) };
    inline UpdateHttpApiRouteRequestBackendConfig backendConfig() { DARABONBA_PTR_GET(backendConfig_, UpdateHttpApiRouteRequestBackendConfig) };
    inline UpdateHttpApiRouteRequest& setBackendConfig(const UpdateHttpApiRouteRequestBackendConfig & backendConfig) { DARABONBA_PTR_SET_VALUE(backendConfig_, backendConfig) };
    inline UpdateHttpApiRouteRequest& setBackendConfig(UpdateHttpApiRouteRequestBackendConfig && backendConfig) { DARABONBA_PTR_SET_RVALUE(backendConfig_, backendConfig) };


    // deployConfigs Field Functions 
    bool hasDeployConfigs() const { return this->deployConfigs_ != nullptr;};
    void deleteDeployConfigs() { this->deployConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfig> & deployConfigs() const { DARABONBA_PTR_GET_CONST(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline vector<HttpApiDeployConfig> deployConfigs() { DARABONBA_PTR_GET(deployConfigs_, vector<HttpApiDeployConfig>) };
    inline UpdateHttpApiRouteRequest& setDeployConfigs(const vector<HttpApiDeployConfig> & deployConfigs) { DARABONBA_PTR_SET_VALUE(deployConfigs_, deployConfigs) };
    inline UpdateHttpApiRouteRequest& setDeployConfigs(vector<HttpApiDeployConfig> && deployConfigs) { DARABONBA_PTR_SET_RVALUE(deployConfigs_, deployConfigs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateHttpApiRouteRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainIds Field Functions 
    bool hasDomainIds() const { return this->domainIds_ != nullptr;};
    void deleteDomainIds() { this->domainIds_ = nullptr;};
    inline const vector<string> & domainIds() const { DARABONBA_PTR_GET_CONST(domainIds_, vector<string>) };
    inline vector<string> domainIds() { DARABONBA_PTR_GET(domainIds_, vector<string>) };
    inline UpdateHttpApiRouteRequest& setDomainIds(const vector<string> & domainIds) { DARABONBA_PTR_SET_VALUE(domainIds_, domainIds) };
    inline UpdateHttpApiRouteRequest& setDomainIds(vector<string> && domainIds) { DARABONBA_PTR_SET_RVALUE(domainIds_, domainIds) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline UpdateHttpApiRouteRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // match Field Functions 
    bool hasMatch() const { return this->match_ != nullptr;};
    void deleteMatch() { this->match_ = nullptr;};
    inline const HttpRouteMatch & match() const { DARABONBA_PTR_GET_CONST(match_, HttpRouteMatch) };
    inline HttpRouteMatch match() { DARABONBA_PTR_GET(match_, HttpRouteMatch) };
    inline UpdateHttpApiRouteRequest& setMatch(const HttpRouteMatch & match) { DARABONBA_PTR_SET_VALUE(match_, match) };
    inline UpdateHttpApiRouteRequest& setMatch(HttpRouteMatch && match) { DARABONBA_PTR_SET_RVALUE(match_, match) };


    // mcpRouteConfig Field Functions 
    bool hasMcpRouteConfig() const { return this->mcpRouteConfig_ != nullptr;};
    void deleteMcpRouteConfig() { this->mcpRouteConfig_ = nullptr;};
    inline const UpdateHttpApiRouteRequestMcpRouteConfig & mcpRouteConfig() const { DARABONBA_PTR_GET_CONST(mcpRouteConfig_, UpdateHttpApiRouteRequestMcpRouteConfig) };
    inline UpdateHttpApiRouteRequestMcpRouteConfig mcpRouteConfig() { DARABONBA_PTR_GET(mcpRouteConfig_, UpdateHttpApiRouteRequestMcpRouteConfig) };
    inline UpdateHttpApiRouteRequest& setMcpRouteConfig(const UpdateHttpApiRouteRequestMcpRouteConfig & mcpRouteConfig) { DARABONBA_PTR_SET_VALUE(mcpRouteConfig_, mcpRouteConfig) };
    inline UpdateHttpApiRouteRequest& setMcpRouteConfig(UpdateHttpApiRouteRequestMcpRouteConfig && mcpRouteConfig) { DARABONBA_PTR_SET_RVALUE(mcpRouteConfig_, mcpRouteConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateHttpApiRouteRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The backend service configurations of the route.
    std::shared_ptr<UpdateHttpApiRouteRequestBackendConfig> backendConfig_ = nullptr;
    std::shared_ptr<vector<HttpApiDeployConfig>> deployConfigs_ = nullptr;
    // The route description.
    std::shared_ptr<string> description_ = nullptr;
    // The domain IDs.
    std::shared_ptr<vector<string>> domainIds_ = nullptr;
    // The environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The rules for matching the route.
    std::shared_ptr<HttpRouteMatch> match_ = nullptr;
    std::shared_ptr<UpdateHttpApiRouteRequestMcpRouteConfig> mcpRouteConfig_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
