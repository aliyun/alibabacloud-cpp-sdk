// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateGatewayConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ConfigName, configName_);
      DARABONBA_PTR_TO_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ConfigName, configName_);
      DARABONBA_PTR_FROM_JSON(ConfigValue, configValue_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
    };
    UpdateGatewayConfigRequest() = default ;
    UpdateGatewayConfigRequest(const UpdateGatewayConfigRequest &) = default ;
    UpdateGatewayConfigRequest(UpdateGatewayConfigRequest &&) = default ;
    UpdateGatewayConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayConfigRequest() = default ;
    UpdateGatewayConfigRequest& operator=(const UpdateGatewayConfigRequest &) = default ;
    UpdateGatewayConfigRequest& operator=(UpdateGatewayConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->configName_ == nullptr && return this->configValue_ == nullptr && return this->gatewayUniqueId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateGatewayConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // configName Field Functions 
    bool hasConfigName() const { return this->configName_ != nullptr;};
    void deleteConfigName() { this->configName_ = nullptr;};
    inline string configName() const { DARABONBA_PTR_GET_DEFAULT(configName_, "") };
    inline UpdateGatewayConfigRequest& setConfigName(string configName) { DARABONBA_PTR_SET_VALUE(configName_, configName) };


    // configValue Field Functions 
    bool hasConfigValue() const { return this->configValue_ != nullptr;};
    void deleteConfigValue() { this->configValue_ = nullptr;};
    inline string configValue() const { DARABONBA_PTR_GET_DEFAULT(configValue_, "") };
    inline UpdateGatewayConfigRequest& setConfigValue(string configValue) { DARABONBA_PTR_SET_VALUE(configValue_, configValue) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdateGatewayConfigRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


  protected:
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> configName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> configValue_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
