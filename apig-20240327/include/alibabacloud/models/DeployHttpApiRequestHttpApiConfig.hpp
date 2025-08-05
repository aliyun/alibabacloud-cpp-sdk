// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUESTHTTPAPICONFIG_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYHTTPAPIREQUESTHTTPAPICONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class DeployHttpApiRequestHttpApiConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeployHttpApiRequestHttpApiConfig& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(routeIds, routeIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeployHttpApiRequestHttpApiConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(routeIds, routeIds_);
    };
    DeployHttpApiRequestHttpApiConfig() = default ;
    DeployHttpApiRequestHttpApiConfig(const DeployHttpApiRequestHttpApiConfig &) = default ;
    DeployHttpApiRequestHttpApiConfig(DeployHttpApiRequestHttpApiConfig &&) = default ;
    DeployHttpApiRequestHttpApiConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeployHttpApiRequestHttpApiConfig() = default ;
    DeployHttpApiRequestHttpApiConfig& operator=(const DeployHttpApiRequestHttpApiConfig &) = default ;
    DeployHttpApiRequestHttpApiConfig& operator=(DeployHttpApiRequestHttpApiConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gatewayId_ != nullptr
        && this->routeIds_ != nullptr; };
    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline DeployHttpApiRequestHttpApiConfig& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // routeIds Field Functions 
    bool hasRouteIds() const { return this->routeIds_ != nullptr;};
    void deleteRouteIds() { this->routeIds_ = nullptr;};
    inline const vector<string> & routeIds() const { DARABONBA_PTR_GET_CONST(routeIds_, vector<string>) };
    inline vector<string> routeIds() { DARABONBA_PTR_GET(routeIds_, vector<string>) };
    inline DeployHttpApiRequestHttpApiConfig& setRouteIds(const vector<string> & routeIds) { DARABONBA_PTR_SET_VALUE(routeIds_, routeIds) };
    inline DeployHttpApiRequestHttpApiConfig& setRouteIds(vector<string> && routeIds) { DARABONBA_PTR_SET_RVALUE(routeIds_, routeIds) };


  protected:
    std::shared_ptr<string> gatewayId_ = nullptr;
    std::shared_ptr<vector<string>> routeIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
