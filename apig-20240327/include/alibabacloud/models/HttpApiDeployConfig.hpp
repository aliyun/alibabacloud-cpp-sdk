// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIG_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIDEPLOYCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDeployConfigCustomDomainInfos.hpp>
#include <alibabacloud/models/HttpApiDeployConfigPolicyConfigs.hpp>
#include <alibabacloud/models/HttpApiDeployConfigServiceConfigs.hpp>
#include <alibabacloud/models/HttpApiDeployConfigSubDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiDeployConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiDeployConfig& obj) { 
      DARABONBA_PTR_TO_JSON(autoDeploy, autoDeploy_);
      DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
      DARABONBA_PTR_TO_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_TO_JSON(customDomainInfos, customDomainInfos_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(mock, mock_);
      DARABONBA_PTR_TO_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_TO_JSON(routeBackend, routeBackend_);
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_TO_JSON(subDomains, subDomains_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiDeployConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(autoDeploy, autoDeploy_);
      DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
      DARABONBA_PTR_FROM_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_FROM_JSON(customDomainInfos, customDomainInfos_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(mock, mock_);
      DARABONBA_PTR_FROM_JSON(policyConfigs, policyConfigs_);
      DARABONBA_PTR_FROM_JSON(routeBackend, routeBackend_);
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_FROM_JSON(subDomains, subDomains_);
    };
    HttpApiDeployConfig() = default ;
    HttpApiDeployConfig(const HttpApiDeployConfig &) = default ;
    HttpApiDeployConfig(HttpApiDeployConfig &&) = default ;
    HttpApiDeployConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiDeployConfig() = default ;
    HttpApiDeployConfig& operator=(const HttpApiDeployConfig &) = default ;
    HttpApiDeployConfig& operator=(HttpApiDeployConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoDeploy_ != nullptr
        && this->backendScene_ != nullptr && this->customDomainIds_ != nullptr && this->customDomainInfos_ != nullptr && this->environmentId_ != nullptr && this->gatewayId_ != nullptr
        && this->gatewayInfo_ != nullptr && this->gatewayType_ != nullptr && this->mock_ != nullptr && this->policyConfigs_ != nullptr && this->routeBackend_ != nullptr
        && this->serviceConfigs_ != nullptr && this->subDomains_ != nullptr; };
    // autoDeploy Field Functions 
    bool hasAutoDeploy() const { return this->autoDeploy_ != nullptr;};
    void deleteAutoDeploy() { this->autoDeploy_ = nullptr;};
    inline bool autoDeploy() const { DARABONBA_PTR_GET_DEFAULT(autoDeploy_, false) };
    inline HttpApiDeployConfig& setAutoDeploy(bool autoDeploy) { DARABONBA_PTR_SET_VALUE(autoDeploy_, autoDeploy) };


    // backendScene Field Functions 
    bool hasBackendScene() const { return this->backendScene_ != nullptr;};
    void deleteBackendScene() { this->backendScene_ = nullptr;};
    inline string backendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
    inline HttpApiDeployConfig& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


    // customDomainIds Field Functions 
    bool hasCustomDomainIds() const { return this->customDomainIds_ != nullptr;};
    void deleteCustomDomainIds() { this->customDomainIds_ = nullptr;};
    inline const vector<string> & customDomainIds() const { DARABONBA_PTR_GET_CONST(customDomainIds_, vector<string>) };
    inline vector<string> customDomainIds() { DARABONBA_PTR_GET(customDomainIds_, vector<string>) };
    inline HttpApiDeployConfig& setCustomDomainIds(const vector<string> & customDomainIds) { DARABONBA_PTR_SET_VALUE(customDomainIds_, customDomainIds) };
    inline HttpApiDeployConfig& setCustomDomainIds(vector<string> && customDomainIds) { DARABONBA_PTR_SET_RVALUE(customDomainIds_, customDomainIds) };


    // customDomainInfos Field Functions 
    bool hasCustomDomainInfos() const { return this->customDomainInfos_ != nullptr;};
    void deleteCustomDomainInfos() { this->customDomainInfos_ = nullptr;};
    inline const vector<HttpApiDeployConfigCustomDomainInfos> & customDomainInfos() const { DARABONBA_PTR_GET_CONST(customDomainInfos_, vector<HttpApiDeployConfigCustomDomainInfos>) };
    inline vector<HttpApiDeployConfigCustomDomainInfos> customDomainInfos() { DARABONBA_PTR_GET(customDomainInfos_, vector<HttpApiDeployConfigCustomDomainInfos>) };
    inline HttpApiDeployConfig& setCustomDomainInfos(const vector<HttpApiDeployConfigCustomDomainInfos> & customDomainInfos) { DARABONBA_PTR_SET_VALUE(customDomainInfos_, customDomainInfos) };
    inline HttpApiDeployConfig& setCustomDomainInfos(vector<HttpApiDeployConfigCustomDomainInfos> && customDomainInfos) { DARABONBA_PTR_SET_RVALUE(customDomainInfos_, customDomainInfos) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline HttpApiDeployConfig& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline HttpApiDeployConfig& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const GatewayInfo & gatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, GatewayInfo) };
    inline GatewayInfo gatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, GatewayInfo) };
    inline HttpApiDeployConfig& setGatewayInfo(const GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline HttpApiDeployConfig& setGatewayInfo(GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string gatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline HttpApiDeployConfig& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // mock Field Functions 
    bool hasMock() const { return this->mock_ != nullptr;};
    void deleteMock() { this->mock_ = nullptr;};
    inline const HttpApiMockContract & mock() const { DARABONBA_PTR_GET_CONST(mock_, HttpApiMockContract) };
    inline HttpApiMockContract mock() { DARABONBA_PTR_GET(mock_, HttpApiMockContract) };
    inline HttpApiDeployConfig& setMock(const HttpApiMockContract & mock) { DARABONBA_PTR_SET_VALUE(mock_, mock) };
    inline HttpApiDeployConfig& setMock(HttpApiMockContract && mock) { DARABONBA_PTR_SET_RVALUE(mock_, mock) };


    // policyConfigs Field Functions 
    bool hasPolicyConfigs() const { return this->policyConfigs_ != nullptr;};
    void deletePolicyConfigs() { this->policyConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfigPolicyConfigs> & policyConfigs() const { DARABONBA_PTR_GET_CONST(policyConfigs_, vector<HttpApiDeployConfigPolicyConfigs>) };
    inline vector<HttpApiDeployConfigPolicyConfigs> policyConfigs() { DARABONBA_PTR_GET(policyConfigs_, vector<HttpApiDeployConfigPolicyConfigs>) };
    inline HttpApiDeployConfig& setPolicyConfigs(const vector<HttpApiDeployConfigPolicyConfigs> & policyConfigs) { DARABONBA_PTR_SET_VALUE(policyConfigs_, policyConfigs) };
    inline HttpApiDeployConfig& setPolicyConfigs(vector<HttpApiDeployConfigPolicyConfigs> && policyConfigs) { DARABONBA_PTR_SET_RVALUE(policyConfigs_, policyConfigs) };


    // routeBackend Field Functions 
    bool hasRouteBackend() const { return this->routeBackend_ != nullptr;};
    void deleteRouteBackend() { this->routeBackend_ = nullptr;};
    inline const Backend & routeBackend() const { DARABONBA_PTR_GET_CONST(routeBackend_, Backend) };
    inline Backend routeBackend() { DARABONBA_PTR_GET(routeBackend_, Backend) };
    inline HttpApiDeployConfig& setRouteBackend(const Backend & routeBackend) { DARABONBA_PTR_SET_VALUE(routeBackend_, routeBackend) };
    inline HttpApiDeployConfig& setRouteBackend(Backend && routeBackend) { DARABONBA_PTR_SET_RVALUE(routeBackend_, routeBackend) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<HttpApiDeployConfigServiceConfigs> & serviceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<HttpApiDeployConfigServiceConfigs>) };
    inline vector<HttpApiDeployConfigServiceConfigs> serviceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<HttpApiDeployConfigServiceConfigs>) };
    inline HttpApiDeployConfig& setServiceConfigs(const vector<HttpApiDeployConfigServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline HttpApiDeployConfig& setServiceConfigs(vector<HttpApiDeployConfigServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


    // subDomains Field Functions 
    bool hasSubDomains() const { return this->subDomains_ != nullptr;};
    void deleteSubDomains() { this->subDomains_ = nullptr;};
    inline const vector<HttpApiDeployConfigSubDomains> & subDomains() const { DARABONBA_PTR_GET_CONST(subDomains_, vector<HttpApiDeployConfigSubDomains>) };
    inline vector<HttpApiDeployConfigSubDomains> subDomains() { DARABONBA_PTR_GET(subDomains_, vector<HttpApiDeployConfigSubDomains>) };
    inline HttpApiDeployConfig& setSubDomains(const vector<HttpApiDeployConfigSubDomains> & subDomains) { DARABONBA_PTR_SET_VALUE(subDomains_, subDomains) };
    inline HttpApiDeployConfig& setSubDomains(vector<HttpApiDeployConfigSubDomains> && subDomains) { DARABONBA_PTR_SET_RVALUE(subDomains_, subDomains) };


  protected:
    std::shared_ptr<bool> autoDeploy_ = nullptr;
    std::shared_ptr<string> backendScene_ = nullptr;
    std::shared_ptr<vector<string>> customDomainIds_ = nullptr;
    std::shared_ptr<vector<HttpApiDeployConfigCustomDomainInfos>> customDomainInfos_ = nullptr;
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<GatewayInfo> gatewayInfo_ = nullptr;
    std::shared_ptr<string> gatewayType_ = nullptr;
    std::shared_ptr<HttpApiMockContract> mock_ = nullptr;
    std::shared_ptr<vector<HttpApiDeployConfigPolicyConfigs>> policyConfigs_ = nullptr;
    std::shared_ptr<Backend> routeBackend_ = nullptr;
    std::shared_ptr<vector<HttpApiDeployConfigServiceConfigs>> serviceConfigs_ = nullptr;
    std::shared_ptr<vector<HttpApiDeployConfigSubDomains>> subDomains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
