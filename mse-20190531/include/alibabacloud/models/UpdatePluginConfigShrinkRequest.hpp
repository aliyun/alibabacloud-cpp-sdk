// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPLUGINCONFIGSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPLUGINCONFIGSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdatePluginConfigShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePluginConfigShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ConfigLevel, configLevel_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(PluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(ResourceIdList, resourceIdListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePluginConfigShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ConfigLevel, configLevel_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(PluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(ResourceIdList, resourceIdListShrink_);
    };
    UpdatePluginConfigShrinkRequest() = default ;
    UpdatePluginConfigShrinkRequest(const UpdatePluginConfigShrinkRequest &) = default ;
    UpdatePluginConfigShrinkRequest(UpdatePluginConfigShrinkRequest &&) = default ;
    UpdatePluginConfigShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePluginConfigShrinkRequest() = default ;
    UpdatePluginConfigShrinkRequest& operator=(const UpdatePluginConfigShrinkRequest &) = default ;
    UpdatePluginConfigShrinkRequest& operator=(UpdatePluginConfigShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->config_ == nullptr && return this->configLevel_ == nullptr && return this->enable_ == nullptr && return this->gatewayId_ == nullptr && return this->gatewayUniqueId_ == nullptr
        && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->pluginId_ == nullptr && return this->resourceIdListShrink_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdatePluginConfigShrinkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdatePluginConfigShrinkRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // configLevel Field Functions 
    bool hasConfigLevel() const { return this->configLevel_ != nullptr;};
    void deleteConfigLevel() { this->configLevel_ = nullptr;};
    inline int32_t configLevel() const { DARABONBA_PTR_GET_DEFAULT(configLevel_, 0) };
    inline UpdatePluginConfigShrinkRequest& setConfigLevel(int32_t configLevel) { DARABONBA_PTR_SET_VALUE(configLevel_, configLevel) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdatePluginConfigShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t gatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdatePluginConfigShrinkRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdatePluginConfigShrinkRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline UpdatePluginConfigShrinkRequest& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline UpdatePluginConfigShrinkRequest& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdatePluginConfigShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline int64_t pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, 0L) };
    inline UpdatePluginConfigShrinkRequest& setPluginId(int64_t pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // resourceIdListShrink Field Functions 
    bool hasResourceIdListShrink() const { return this->resourceIdListShrink_ != nullptr;};
    void deleteResourceIdListShrink() { this->resourceIdListShrink_ = nullptr;};
    inline string resourceIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdListShrink_, "") };
    inline UpdatePluginConfigShrinkRequest& setResourceIdListShrink(string resourceIdListShrink) { DARABONBA_PTR_SET_VALUE(resourceIdListShrink_, resourceIdListShrink) };


  protected:
    // The language of the response. Valid values:
    // 
    // zh: Chinese en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    // The application scope of the plug-in.
    // 
    // *   0: global
    // *   1: route
    // *   2: domain name
    std::shared_ptr<int32_t> configLevel_ = nullptr;
    // Specifies whether to enable the plug-in.
    std::shared_ptr<bool> enable_ = nullptr;
    // The ID of the gateway.
    std::shared_ptr<int64_t> gatewayId_ = nullptr;
    // The unique ID of the gateway.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The update time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the plug-in configuration.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The ID of the gateway plug-in.
    std::shared_ptr<int64_t> pluginId_ = nullptr;
    std::shared_ptr<string> resourceIdListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
