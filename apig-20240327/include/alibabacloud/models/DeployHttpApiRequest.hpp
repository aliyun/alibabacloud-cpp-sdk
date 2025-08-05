// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeployHttpApiRequestHttpApiConfig.hpp>
#include <alibabacloud/models/DeployHttpApiRequestRestApiConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeployHttpApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployHttpApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(httpApiConfig, httpApiConfig_);
      DARABONBA_PTR_TO_JSON(restApiConfig, restApiConfig_);
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, DeployHttpApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(httpApiConfig, httpApiConfig_);
      DARABONBA_PTR_FROM_JSON(restApiConfig, restApiConfig_);
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
    };
    DeployHttpApiRequest() = default ;
    DeployHttpApiRequest(const DeployHttpApiRequest &) = default ;
    DeployHttpApiRequest(DeployHttpApiRequest &&) = default ;
    DeployHttpApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployHttpApiRequest() = default ;
    DeployHttpApiRequest& operator=(const DeployHttpApiRequest &) = default ;
    DeployHttpApiRequest& operator=(DeployHttpApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->httpApiConfig_ != nullptr
        && this->restApiConfig_ != nullptr && this->routeId_ != nullptr; };
    // httpApiConfig Field Functions 
    bool hasHttpApiConfig() const { return this->httpApiConfig_ != nullptr;};
    void deleteHttpApiConfig() { this->httpApiConfig_ = nullptr;};
    inline const DeployHttpApiRequestHttpApiConfig & httpApiConfig() const { DARABONBA_PTR_GET_CONST(httpApiConfig_, DeployHttpApiRequestHttpApiConfig) };
    inline DeployHttpApiRequestHttpApiConfig httpApiConfig() { DARABONBA_PTR_GET(httpApiConfig_, DeployHttpApiRequestHttpApiConfig) };
    inline DeployHttpApiRequest& setHttpApiConfig(const DeployHttpApiRequestHttpApiConfig & httpApiConfig) { DARABONBA_PTR_SET_VALUE(httpApiConfig_, httpApiConfig) };
    inline DeployHttpApiRequest& setHttpApiConfig(DeployHttpApiRequestHttpApiConfig && httpApiConfig) { DARABONBA_PTR_SET_RVALUE(httpApiConfig_, httpApiConfig) };


    // restApiConfig Field Functions 
    bool hasRestApiConfig() const { return this->restApiConfig_ != nullptr;};
    void deleteRestApiConfig() { this->restApiConfig_ = nullptr;};
    inline const DeployHttpApiRequestRestApiConfig & restApiConfig() const { DARABONBA_PTR_GET_CONST(restApiConfig_, DeployHttpApiRequestRestApiConfig) };
    inline DeployHttpApiRequestRestApiConfig restApiConfig() { DARABONBA_PTR_GET(restApiConfig_, DeployHttpApiRequestRestApiConfig) };
    inline DeployHttpApiRequest& setRestApiConfig(const DeployHttpApiRequestRestApiConfig & restApiConfig) { DARABONBA_PTR_SET_VALUE(restApiConfig_, restApiConfig) };
    inline DeployHttpApiRequest& setRestApiConfig(DeployHttpApiRequestRestApiConfig && restApiConfig) { DARABONBA_PTR_SET_RVALUE(restApiConfig_, restApiConfig) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string routeId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline DeployHttpApiRequest& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    std::shared_ptr<DeployHttpApiRequestHttpApiConfig> httpApiConfig_ = nullptr;
    // Rest API deployment configuration. Required when deploying an HTTP API as a Rest API.
    std::shared_ptr<DeployHttpApiRequestRestApiConfig> restApiConfig_ = nullptr;
    // Route ID. This must be provided when publishing the route of an HTTP API.
    std::shared_ptr<string> routeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
