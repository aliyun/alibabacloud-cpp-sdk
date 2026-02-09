// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNDEPLOYHTTPAPIREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNDEPLOYHTTPAPIREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class UndeployHttpApiRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UndeployHttpApiRequest& obj) { 
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(operationId, operationId_);
      DARABONBA_PTR_TO_JSON(routeId, routeId_);
    };
    friend void from_json(const Darabonba::Json& j, UndeployHttpApiRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(operationId, operationId_);
      DARABONBA_PTR_FROM_JSON(routeId, routeId_);
    };
    UndeployHttpApiRequest() = default ;
    UndeployHttpApiRequest(const UndeployHttpApiRequest &) = default ;
    UndeployHttpApiRequest(UndeployHttpApiRequest &&) = default ;
    UndeployHttpApiRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UndeployHttpApiRequest() = default ;
    UndeployHttpApiRequest& operator=(const UndeployHttpApiRequest &) = default ;
    UndeployHttpApiRequest& operator=(UndeployHttpApiRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->environmentId_ == nullptr
        && this->gatewayId_ == nullptr && this->operationId_ == nullptr && this->routeId_ == nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline UndeployHttpApiRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline UndeployHttpApiRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline UndeployHttpApiRequest& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // routeId Field Functions 
    bool hasRouteId() const { return this->routeId_ != nullptr;};
    void deleteRouteId() { this->routeId_ = nullptr;};
    inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
    inline UndeployHttpApiRequest& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


  protected:
    // The environment ID.
    shared_ptr<string> environmentId_ {};
    // Gateway ID.
    shared_ptr<string> gatewayId_ {};
    // The operation ID.
    shared_ptr<string> operationId_ {};
    // The route ID. You must specify this parameter when you unpublish the route of an HTTP API.
    shared_ptr<string> routeId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
