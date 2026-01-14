// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPLUGINCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPLUGINCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdatePluginConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePluginConfigRequest& obj) { 
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
      DARABONBA_PTR_TO_JSON(ResourceIdList, resourceIdList_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePluginConfigRequest& obj) { 
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
      DARABONBA_PTR_FROM_JSON(ResourceIdList, resourceIdList_);
    };
    UpdatePluginConfigRequest() = default ;
    UpdatePluginConfigRequest(const UpdatePluginConfigRequest &) = default ;
    UpdatePluginConfigRequest(UpdatePluginConfigRequest &&) = default ;
    UpdatePluginConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePluginConfigRequest() = default ;
    UpdatePluginConfigRequest& operator=(const UpdatePluginConfigRequest &) = default ;
    UpdatePluginConfigRequest& operator=(UpdatePluginConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->config_ == nullptr && this->configLevel_ == nullptr && this->enable_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->pluginId_ == nullptr && this->resourceIdList_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdatePluginConfigRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdatePluginConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // configLevel Field Functions 
    bool hasConfigLevel() const { return this->configLevel_ != nullptr;};
    void deleteConfigLevel() { this->configLevel_ = nullptr;};
    inline int32_t getConfigLevel() const { DARABONBA_PTR_GET_DEFAULT(configLevel_, 0) };
    inline UpdatePluginConfigRequest& setConfigLevel(int32_t configLevel) { DARABONBA_PTR_SET_VALUE(configLevel_, configLevel) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline UpdatePluginConfigRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
    inline UpdatePluginConfigRequest& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline UpdatePluginConfigRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline UpdatePluginConfigRequest& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline UpdatePluginConfigRequest& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdatePluginConfigRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline int64_t getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, 0L) };
    inline UpdatePluginConfigRequest& setPluginId(int64_t pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // resourceIdList Field Functions 
    bool hasResourceIdList() const { return this->resourceIdList_ != nullptr;};
    void deleteResourceIdList() { this->resourceIdList_ = nullptr;};
    inline const vector<int64_t> & getResourceIdList() const { DARABONBA_PTR_GET_CONST(resourceIdList_, vector<int64_t>) };
    inline vector<int64_t> getResourceIdList() { DARABONBA_PTR_GET(resourceIdList_, vector<int64_t>) };
    inline UpdatePluginConfigRequest& setResourceIdList(const vector<int64_t> & resourceIdList) { DARABONBA_PTR_SET_VALUE(resourceIdList_, resourceIdList) };
    inline UpdatePluginConfigRequest& setResourceIdList(vector<int64_t> && resourceIdList) { DARABONBA_PTR_SET_RVALUE(resourceIdList_, resourceIdList) };


  protected:
    // The language of the response. Valid values:
    // 
    // zh: Chinese en: English
    shared_ptr<string> acceptLanguage_ {};
    shared_ptr<string> config_ {};
    // The application scope of the plug-in.
    // 
    // *   0: global
    // *   1: route
    // *   2: domain name
    shared_ptr<int32_t> configLevel_ {};
    // Specifies whether to enable the plug-in.
    shared_ptr<bool> enable_ {};
    // The ID of the gateway.
    shared_ptr<int64_t> gatewayId_ {};
    // The unique ID of the gateway.
    shared_ptr<string> gatewayUniqueId_ {};
    // The creation time.
    shared_ptr<string> gmtCreate_ {};
    // The update time.
    shared_ptr<string> gmtModified_ {};
    // The ID of the plug-in configuration.
    shared_ptr<int64_t> id_ {};
    // The ID of the gateway plug-in.
    shared_ptr<int64_t> pluginId_ {};
    shared_ptr<vector<int64_t>> resourceIdList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
