// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUESTRESTAPICONFIGENVIRONMENT_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUESTRESTAPICONFIGENVIRONMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeployHttpApiRequestRestApiConfigEnvironment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployHttpApiRequestRestApiConfigEnvironment& obj) { 
      DARABONBA_PTR_TO_JSON(backendScene, backendScene_);
      DARABONBA_PTR_TO_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(serviceConfigs, serviceConfigs_);
    };
    friend void from_json(const Darabonba::Json& j, DeployHttpApiRequestRestApiConfigEnvironment& obj) { 
      DARABONBA_PTR_FROM_JSON(backendScene, backendScene_);
      DARABONBA_PTR_FROM_JSON(customDomainIds, customDomainIds_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(serviceConfigs, serviceConfigs_);
    };
    DeployHttpApiRequestRestApiConfigEnvironment() = default ;
    DeployHttpApiRequestRestApiConfigEnvironment(const DeployHttpApiRequestRestApiConfigEnvironment &) = default ;
    DeployHttpApiRequestRestApiConfigEnvironment(DeployHttpApiRequestRestApiConfigEnvironment &&) = default ;
    DeployHttpApiRequestRestApiConfigEnvironment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployHttpApiRequestRestApiConfigEnvironment() = default ;
    DeployHttpApiRequestRestApiConfigEnvironment& operator=(const DeployHttpApiRequestRestApiConfigEnvironment &) = default ;
    DeployHttpApiRequestRestApiConfigEnvironment& operator=(DeployHttpApiRequestRestApiConfigEnvironment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backendScene_ != nullptr
        && this->customDomainIds_ != nullptr && this->environmentId_ != nullptr && this->serviceConfigs_ != nullptr; };
    // backendScene Field Functions 
    bool hasBackendScene() const { return this->backendScene_ != nullptr;};
    void deleteBackendScene() { this->backendScene_ = nullptr;};
    inline string backendScene() const { DARABONBA_PTR_GET_DEFAULT(backendScene_, "") };
    inline DeployHttpApiRequestRestApiConfigEnvironment& setBackendScene(string backendScene) { DARABONBA_PTR_SET_VALUE(backendScene_, backendScene) };


    // customDomainIds Field Functions 
    bool hasCustomDomainIds() const { return this->customDomainIds_ != nullptr;};
    void deleteCustomDomainIds() { this->customDomainIds_ = nullptr;};
    inline const vector<string> & customDomainIds() const { DARABONBA_PTR_GET_CONST(customDomainIds_, vector<string>) };
    inline vector<string> customDomainIds() { DARABONBA_PTR_GET(customDomainIds_, vector<string>) };
    inline DeployHttpApiRequestRestApiConfigEnvironment& setCustomDomainIds(const vector<string> & customDomainIds) { DARABONBA_PTR_SET_VALUE(customDomainIds_, customDomainIds) };
    inline DeployHttpApiRequestRestApiConfigEnvironment& setCustomDomainIds(vector<string> && customDomainIds) { DARABONBA_PTR_SET_RVALUE(customDomainIds_, customDomainIds) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline DeployHttpApiRequestRestApiConfigEnvironment& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // serviceConfigs Field Functions 
    bool hasServiceConfigs() const { return this->serviceConfigs_ != nullptr;};
    void deleteServiceConfigs() { this->serviceConfigs_ = nullptr;};
    inline const vector<Models::DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs> & serviceConfigs() const { DARABONBA_PTR_GET_CONST(serviceConfigs_, vector<Models::DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs>) };
    inline vector<Models::DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs> serviceConfigs() { DARABONBA_PTR_GET(serviceConfigs_, vector<Models::DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs>) };
    inline DeployHttpApiRequestRestApiConfigEnvironment& setServiceConfigs(const vector<Models::DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs> & serviceConfigs) { DARABONBA_PTR_SET_VALUE(serviceConfigs_, serviceConfigs) };
    inline DeployHttpApiRequestRestApiConfigEnvironment& setServiceConfigs(vector<Models::DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs> && serviceConfigs) { DARABONBA_PTR_SET_RVALUE(serviceConfigs_, serviceConfigs) };


  protected:
    // API publication scenario.
    std::shared_ptr<string> backendScene_ = nullptr;
    // List of user domains.
    std::shared_ptr<vector<string>> customDomainIds_ = nullptr;
    // Environment ID.
    std::shared_ptr<string> environmentId_ = nullptr;
    // Existing service configurations. Only one entry is allowed in a single-service scenario, while multiple entries are allowed in scenarios such as by ratio or by content.
    std::shared_ptr<vector<Models::DeployHttpApiRequestRestApiConfigEnvironmentServiceConfigs>> serviceConfigs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
