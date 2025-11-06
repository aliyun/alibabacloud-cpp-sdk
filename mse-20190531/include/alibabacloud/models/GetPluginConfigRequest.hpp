// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetPluginConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
    };
    GetPluginConfigRequest() = default ;
    GetPluginConfigRequest(const GetPluginConfigRequest &) = default ;
    GetPluginConfigRequest(GetPluginConfigRequest &&) = default ;
    GetPluginConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginConfigRequest() = default ;
    GetPluginConfigRequest& operator=(const GetPluginConfigRequest &) = default ;
    GetPluginConfigRequest& operator=(GetPluginConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->pluginId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetPluginConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetPluginConfigRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline int64_t pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, 0L) };
    inline GetPluginConfigRequest& setPluginId(int64_t pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


  protected:
    // The language of the response. Valid values:
    // 
    // zh: Chinese en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The ID of the gateway plug-in.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pluginId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
