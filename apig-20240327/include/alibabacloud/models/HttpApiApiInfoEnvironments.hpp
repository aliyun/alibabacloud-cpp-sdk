// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HTTPAPIAPIINFOENVIRONMENTS_HPP_
#define ALIBABACLOUD_MODELS_HTTPAPIAPIINFOENVIRONMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HttpApiDomainInfo.hpp>
#include <alibabacloud/models/HttpApiApiInfoEnvironmentsGatewayInfo.hpp>
#include <alibabacloud/models/HttpApiApiInfoEnvironmentsServiceConfigs.hpp>
#include <alibabacloud/models/HttpApiApiInfoEnvironmentsSubDomains.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class HttpApiApiInfoEnvironments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HttpApiApiInfoEnvironments& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
      DARABONBA_PTR_TO_JSON(backendType, backendType_);
      DARABONBA_PTR_TO_JSON(customDomains, customDomains_);
      DARABONBA_PTR_TO_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_TO_JSON(subDomains, subDomains_);
    };
    friend void from_json(const Darabonba::Json& j, HttpApiApiInfoEnvironments& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
      DARABONBA_PTR_FROM_JSON(backendType, backendType_);
      DARABONBA_PTR_FROM_JSON(customDomains, customDomains_);
      DARABONBA_PTR_FROM_JSON(deployStatus, deployStatus_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
      DARABONBA_PTR_FROM_JSON(subDomains, subDomains_);
    };
    HttpApiApiInfoEnvironments() = default ;
    HttpApiApiInfoEnvironments(const HttpApiApiInfoEnvironments &) = default ;
    HttpApiApiInfoEnvironments(HttpApiApiInfoEnvironments &&) = default ;
    HttpApiApiInfoEnvironments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HttpApiApiInfoEnvironments() = default ;
    HttpApiApiInfoEnvironments& operator=(const HttpApiApiInfoEnvironments &) = default ;
    HttpApiApiInfoEnvironments& operator=(HttpApiApiInfoEnvironments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->backendScene_ == nullptr && return this->backendType_ == nullptr && return this->customDomains_ == nullptr && return this->deployStatus_ == nullptr && return this->environmentId_ == nullptr
        && return this->gatewayInfo_ == nullptr && return this->name_ == nullptr && return this->serviceConfigs_ == nullptr && return this->subDomains_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline HttpApiApiInfoEnvironments& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // backendScene Field Functions 
    bool hasBackendScene() const { return this->backendScene_ != nullptr;};
    void deleteBackendScene() { this->backendScene_ = nullptr;};
    inline string backendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
    inline HttpApiApiInfoEnvironments& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


    // backendType Field Functions 
    bool hasBackendType() const { return this->backendType_ != nullptr;};
    void deleteBackendType() { this->backendType_ = nullptr;};
    inline string backendType() const { DARABONBA_PTR_GET_DEFAULT(backendType_, "") };
    inline HttpApiApiInfoEnvironments& setBackendType(string backendType) { DARABONBA_PTR_SET_VALUE(backendType_, backendType) };


    // customDomains Field Functions 
    bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
    void deleteCustomDomains() { this->customDomains_ = nullptr;};
    inline const vector<Models::HttpApiDomainInfo> & customDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, vector<Models::HttpApiDomainInfo>) };
    inline vector<Models::HttpApiDomainInfo> customDomains() { DARABONBA_PTR_GET(customDomains_, vector<Models::HttpApiDomainInfo>) };
    inline HttpApiApiInfoEnvironments& setCustomDomains(const vector<Models::HttpApiDomainInfo> & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
    inline HttpApiApiInfoEnvironments& setCustomDomains(vector<Models::HttpApiDomainInfo> && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


    // deployStatus Field Functions 
    bool hasDeployStatus() const { return this->deployStatus_ != nullptr;};
    void deleteDeployStatus() { this->deployStatus_ = nullptr;};
    inline string deployStatus() const { DARABONBA_PTR_GET_DEFAULT(deployStatus_, "") };
    inline HttpApiApiInfoEnvironments& setDeployStatus(string deployStatus) { DARABONBA_PTR_SET_VALUE(deployStatus_, deployStatus) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline HttpApiApiInfoEnvironments& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const Models::HttpApiApiInfoEnvironmentsGatewayInfo & gatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, Models::HttpApiApiInfoEnvironmentsGatewayInfo) };
    inline Models::HttpApiApiInfoEnvironmentsGatewayInfo gatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, Models::HttpApiApiInfoEnvironmentsGatewayInfo) };
    inline HttpApiApiInfoEnvironments& setGatewayInfo(const Models::HttpApiApiInfoEnvironmentsGatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline HttpApiApiInfoEnvironments& setGatewayInfo(Models::HttpApiApiInfoEnvironmentsGatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline HttpApiApiInfoEnvironments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<Models::HttpApiApiInfoEnvironmentsServiceConfigs> & serviceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<Models::HttpApiApiInfoEnvironmentsServiceConfigs>) };
    inline vector<Models::HttpApiApiInfoEnvironmentsServiceConfigs> serviceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<Models::HttpApiApiInfoEnvironmentsServiceConfigs>) };
    inline HttpApiApiInfoEnvironments& setServiceConfigs(const vector<Models::HttpApiApiInfoEnvironmentsServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline HttpApiApiInfoEnvironments& setServiceConfigs(vector<Models::HttpApiApiInfoEnvironmentsServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


    // subDomains Field Functions 
    bool hasSubDomains() const { return this->subDomains_ != nullptr;};
    void deleteSubDomains() { this->subDomains_ = nullptr;};
    inline const vector<Models::HttpApiApiInfoEnvironmentsSubDomains> & subDomains() const { DARABONBA_PTR_GET_CONST(subDomains_, vector<Models::HttpApiApiInfoEnvironmentsSubDomains>) };
    inline vector<Models::HttpApiApiInfoEnvironmentsSubDomains> subDomains() { DARABONBA_PTR_GET(subDomains_, vector<Models::HttpApiApiInfoEnvironmentsSubDomains>) };
    inline HttpApiApiInfoEnvironments& setSubDomains(const vector<Models::HttpApiApiInfoEnvironmentsSubDomains> & subDomains) { DARABONBA_PTR_SET_VALUE(subDomains_, subDomains) };
    inline HttpApiApiInfoEnvironments& setSubDomains(vector<Models::HttpApiApiInfoEnvironmentsSubDomains> && subDomains) { DARABONBA_PTR_SET_RVALUE(subDomains_, subDomains) };


  protected:
    std::shared_ptr<string> alias_ = nullptr;
    std::shared_ptr<string> backendScene_ = nullptr;
    std::shared_ptr<string> backendType_ = nullptr;
    std::shared_ptr<vector<Models::HttpApiDomainInfo>> customDomains_ = nullptr;
    std::shared_ptr<string> deployStatus_ = nullptr;
    std::shared_ptr<string> environmentId_ = nullptr;
    std::shared_ptr<Models::HttpApiApiInfoEnvironmentsGatewayInfo> gatewayInfo_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::HttpApiApiInfoEnvironmentsServiceConfigs>> serviceConfigs_ = nullptr;
    std::shared_ptr<vector<Models::HttpApiApiInfoEnvironmentsSubDomains>> subDomains_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
