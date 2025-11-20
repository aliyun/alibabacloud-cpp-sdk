// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINATTACHMENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINATTACHMENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnvironmentInfo.hpp>
#include <alibabacloud/models/GatewayInfo.hpp>
#include <alibabacloud/models/ParentResourceInfo.hpp>
#include <alibabacloud/models/PluginClassInfo.hpp>
#include <vector>
#include <alibabacloud/models/ResourceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetPluginAttachmentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginAttachmentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_TO_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_TO_JSON(parentResourceInfo, parentResourceInfo_);
      DARABONBA_PTR_TO_JSON(pluginAttachmentId, pluginAttachmentId_);
      DARABONBA_PTR_TO_JSON(pluginClassInfo, pluginClassInfo_);
      DARABONBA_PTR_TO_JSON(pluginConfig, pluginConfig_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(resourceInfos, resourceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginAttachmentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(environmentInfo, environmentInfo_);
      DARABONBA_PTR_FROM_JSON(gatewayInfo, gatewayInfo_);
      DARABONBA_PTR_FROM_JSON(parentResourceInfo, parentResourceInfo_);
      DARABONBA_PTR_FROM_JSON(pluginAttachmentId, pluginAttachmentId_);
      DARABONBA_PTR_FROM_JSON(pluginClassInfo, pluginClassInfo_);
      DARABONBA_PTR_FROM_JSON(pluginConfig, pluginConfig_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(resourceInfos, resourceInfos_);
    };
    GetPluginAttachmentResponseBodyData() = default ;
    GetPluginAttachmentResponseBodyData(const GetPluginAttachmentResponseBodyData &) = default ;
    GetPluginAttachmentResponseBodyData(GetPluginAttachmentResponseBodyData &&) = default ;
    GetPluginAttachmentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginAttachmentResponseBodyData() = default ;
    GetPluginAttachmentResponseBodyData& operator=(const GetPluginAttachmentResponseBodyData &) = default ;
    GetPluginAttachmentResponseBodyData& operator=(GetPluginAttachmentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && return this->environmentInfo_ == nullptr && return this->gatewayInfo_ == nullptr && return this->parentResourceInfo_ == nullptr && return this->pluginAttachmentId_ == nullptr && return this->pluginClassInfo_ == nullptr
        && return this->pluginConfig_ == nullptr && return this->pluginId_ == nullptr && return this->resourceInfos_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetPluginAttachmentResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // environmentInfo Field Functions 
    bool hasEnvironmentInfo() const { return this->environmentInfo_ != nullptr;};
    void deleteEnvironmentInfo() { this->environmentInfo_ = nullptr;};
    inline const Models::EnvironmentInfo & environmentInfo() const { DARABONBA_PTR_GET_CONST(environmentInfo_, Models::EnvironmentInfo) };
    inline Models::EnvironmentInfo environmentInfo() { DARABONBA_PTR_GET(environmentInfo_, Models::EnvironmentInfo) };
    inline GetPluginAttachmentResponseBodyData& setEnvironmentInfo(const Models::EnvironmentInfo & environmentInfo) { DARABONBA_PTR_SET_VALUE(environmentInfo_, environmentInfo) };
    inline GetPluginAttachmentResponseBodyData& setEnvironmentInfo(Models::EnvironmentInfo && environmentInfo) { DARABONBA_PTR_SET_RVALUE(environmentInfo_, environmentInfo) };


    // gatewayInfo Field Functions 
    bool hasGatewayInfo() const { return this->gatewayInfo_ != nullptr;};
    void deleteGatewayInfo() { this->gatewayInfo_ = nullptr;};
    inline const Models::GatewayInfo & gatewayInfo() const { DARABONBA_PTR_GET_CONST(gatewayInfo_, Models::GatewayInfo) };
    inline Models::GatewayInfo gatewayInfo() { DARABONBA_PTR_GET(gatewayInfo_, Models::GatewayInfo) };
    inline GetPluginAttachmentResponseBodyData& setGatewayInfo(const Models::GatewayInfo & gatewayInfo) { DARABONBA_PTR_SET_VALUE(gatewayInfo_, gatewayInfo) };
    inline GetPluginAttachmentResponseBodyData& setGatewayInfo(Models::GatewayInfo && gatewayInfo) { DARABONBA_PTR_SET_RVALUE(gatewayInfo_, gatewayInfo) };


    // parentResourceInfo Field Functions 
    bool hasParentResourceInfo() const { return this->parentResourceInfo_ != nullptr;};
    void deleteParentResourceInfo() { this->parentResourceInfo_ = nullptr;};
    inline const Models::ParentResourceInfo & parentResourceInfo() const { DARABONBA_PTR_GET_CONST(parentResourceInfo_, Models::ParentResourceInfo) };
    inline Models::ParentResourceInfo parentResourceInfo() { DARABONBA_PTR_GET(parentResourceInfo_, Models::ParentResourceInfo) };
    inline GetPluginAttachmentResponseBodyData& setParentResourceInfo(const Models::ParentResourceInfo & parentResourceInfo) { DARABONBA_PTR_SET_VALUE(parentResourceInfo_, parentResourceInfo) };
    inline GetPluginAttachmentResponseBodyData& setParentResourceInfo(Models::ParentResourceInfo && parentResourceInfo) { DARABONBA_PTR_SET_RVALUE(parentResourceInfo_, parentResourceInfo) };


    // pluginAttachmentId Field Functions 
    bool hasPluginAttachmentId() const { return this->pluginAttachmentId_ != nullptr;};
    void deletePluginAttachmentId() { this->pluginAttachmentId_ = nullptr;};
    inline string pluginAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(pluginAttachmentId_, "") };
    inline GetPluginAttachmentResponseBodyData& setPluginAttachmentId(string pluginAttachmentId) { DARABONBA_PTR_SET_VALUE(pluginAttachmentId_, pluginAttachmentId) };


    // pluginClassInfo Field Functions 
    bool hasPluginClassInfo() const { return this->pluginClassInfo_ != nullptr;};
    void deletePluginClassInfo() { this->pluginClassInfo_ = nullptr;};
    inline const Models::PluginClassInfo & pluginClassInfo() const { DARABONBA_PTR_GET_CONST(pluginClassInfo_, Models::PluginClassInfo) };
    inline Models::PluginClassInfo pluginClassInfo() { DARABONBA_PTR_GET(pluginClassInfo_, Models::PluginClassInfo) };
    inline GetPluginAttachmentResponseBodyData& setPluginClassInfo(const Models::PluginClassInfo & pluginClassInfo) { DARABONBA_PTR_SET_VALUE(pluginClassInfo_, pluginClassInfo) };
    inline GetPluginAttachmentResponseBodyData& setPluginClassInfo(Models::PluginClassInfo && pluginClassInfo) { DARABONBA_PTR_SET_RVALUE(pluginClassInfo_, pluginClassInfo) };


    // pluginConfig Field Functions 
    bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
    void deletePluginConfig() { this->pluginConfig_ = nullptr;};
    inline string pluginConfig() const { DARABONBA_PTR_GET_DEFAULT(pluginConfig_, "") };
    inline GetPluginAttachmentResponseBodyData& setPluginConfig(string pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string pluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline GetPluginAttachmentResponseBodyData& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // resourceInfos Field Functions 
    bool hasResourceInfos() const { return this->resourceInfos_ != nullptr;};
    void deleteResourceInfos() { this->resourceInfos_ = nullptr;};
    inline const vector<Models::ResourceInfo> & resourceInfos() const { DARABONBA_PTR_GET_CONST(resourceInfos_, vector<Models::ResourceInfo>) };
    inline vector<Models::ResourceInfo> resourceInfos() { DARABONBA_PTR_GET(resourceInfos_, vector<Models::ResourceInfo>) };
    inline GetPluginAttachmentResponseBodyData& setResourceInfos(const vector<Models::ResourceInfo> & resourceInfos) { DARABONBA_PTR_SET_VALUE(resourceInfos_, resourceInfos) };
    inline GetPluginAttachmentResponseBodyData& setResourceInfos(vector<Models::ResourceInfo> && resourceInfos) { DARABONBA_PTR_SET_RVALUE(resourceInfos_, resourceInfos) };


  protected:
    // Indicates whether the plug-in is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // The environment information.
    std::shared_ptr<Models::EnvironmentInfo> environmentInfo_ = nullptr;
    // The instance information.
    std::shared_ptr<Models::GatewayInfo> gatewayInfo_ = nullptr;
    // The information about the parent resource to which the plug-in is attached.
    std::shared_ptr<Models::ParentResourceInfo> parentResourceInfo_ = nullptr;
    // The attachment ID.
    std::shared_ptr<string> pluginAttachmentId_ = nullptr;
    // The plug-in type information.
    std::shared_ptr<Models::PluginClassInfo> pluginClassInfo_ = nullptr;
    // The Base64-encoded configurations of the plug-in.
    std::shared_ptr<string> pluginConfig_ = nullptr;
    // The plug-in ID.
    std::shared_ptr<string> pluginId_ = nullptr;
    // The resource details.
    std::shared_ptr<vector<Models::ResourceInfo>> resourceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
