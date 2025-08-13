// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPLUGINCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPLUGINCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeletePluginConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePluginConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(PluginConfigId, pluginConfigId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePluginConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(PluginConfigId, pluginConfigId_);
    };
    DeletePluginConfigRequest() = default ;
    DeletePluginConfigRequest(const DeletePluginConfigRequest &) = default ;
    DeletePluginConfigRequest(DeletePluginConfigRequest &&) = default ;
    DeletePluginConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePluginConfigRequest() = default ;
    DeletePluginConfigRequest& operator=(const DeletePluginConfigRequest &) = default ;
    DeletePluginConfigRequest& operator=(DeletePluginConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptLanguage_ != nullptr
        && this->gatewayUniqueId_ != nullptr && this->pluginConfigId_ != nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DeletePluginConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline DeletePluginConfigRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // pluginConfigId Field Functions 
    bool hasPluginConfigId() const { return this->pluginConfigId_ != nullptr;};
    void deletePluginConfigId() { this->pluginConfigId_ = nullptr;};
    inline int64_t pluginConfigId() const { DARABONBA_PTR_GET_DEFAULT(pluginConfigId_, 0L) };
    inline DeletePluginConfigRequest& setPluginConfigId(int64_t pluginConfigId) { DARABONBA_PTR_SET_VALUE(pluginConfigId_, pluginConfigId) };


  protected:
    // The language in which you want to display the results. Valid values: zh and en. zh indicates Chinese, which is the default value. en indicates English.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The plug-in configuration ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> pluginConfigId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
