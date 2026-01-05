// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLUGINATTACHMENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLUGINATTACHMENTREQUEST_HPP_
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
  class CreatePluginAttachmentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePluginAttachmentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_TO_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(environmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_TO_JSON(pluginConfig, pluginConfig_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePluginAttachmentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(attachResourceIds, attachResourceIds_);
      DARABONBA_PTR_FROM_JSON(attachResourceType, attachResourceType_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(environmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(gatewayId, gatewayId_);
      DARABONBA_PTR_FROM_JSON(pluginConfig, pluginConfig_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
    };
    CreatePluginAttachmentRequest() = default ;
    CreatePluginAttachmentRequest(const CreatePluginAttachmentRequest &) = default ;
    CreatePluginAttachmentRequest(CreatePluginAttachmentRequest &&) = default ;
    CreatePluginAttachmentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePluginAttachmentRequest() = default ;
    CreatePluginAttachmentRequest& operator=(const CreatePluginAttachmentRequest &) = default ;
    CreatePluginAttachmentRequest& operator=(CreatePluginAttachmentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachResourceIds_ == nullptr
        && this->attachResourceType_ == nullptr && this->enable_ == nullptr && this->environmentId_ == nullptr && this->gatewayId_ == nullptr && this->pluginConfig_ == nullptr
        && this->pluginId_ == nullptr; };
    // attachResourceIds Field Functions 
    bool hasAttachResourceIds() const { return this->attachResourceIds_ != nullptr;};
    void deleteAttachResourceIds() { this->attachResourceIds_ = nullptr;};
    inline const vector<string> & getAttachResourceIds() const { DARABONBA_PTR_GET_CONST(attachResourceIds_, vector<string>) };
    inline vector<string> getAttachResourceIds() { DARABONBA_PTR_GET(attachResourceIds_, vector<string>) };
    inline CreatePluginAttachmentRequest& setAttachResourceIds(const vector<string> & attachResourceIds) { DARABONBA_PTR_SET_VALUE(attachResourceIds_, attachResourceIds) };
    inline CreatePluginAttachmentRequest& setAttachResourceIds(vector<string> && attachResourceIds) { DARABONBA_PTR_SET_RVALUE(attachResourceIds_, attachResourceIds) };


    // attachResourceType Field Functions 
    bool hasAttachResourceType() const { return this->attachResourceType_ != nullptr;};
    void deleteAttachResourceType() { this->attachResourceType_ = nullptr;};
    inline string getAttachResourceType() const { DARABONBA_PTR_GET_DEFAULT(attachResourceType_, "") };
    inline CreatePluginAttachmentRequest& setAttachResourceType(string attachResourceType) { DARABONBA_PTR_SET_VALUE(attachResourceType_, attachResourceType) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreatePluginAttachmentRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string getEnvironmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline CreatePluginAttachmentRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // gatewayId Field Functions 
    bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
    void deleteGatewayId() { this->gatewayId_ = nullptr;};
    inline string getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, "") };
    inline CreatePluginAttachmentRequest& setGatewayId(string gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


    // pluginConfig Field Functions 
    bool hasPluginConfig() const { return this->pluginConfig_ != nullptr;};
    void deletePluginConfig() { this->pluginConfig_ = nullptr;};
    inline string getPluginConfig() const { DARABONBA_PTR_GET_DEFAULT(pluginConfig_, "") };
    inline CreatePluginAttachmentRequest& setPluginConfig(string pluginConfig) { DARABONBA_PTR_SET_VALUE(pluginConfig_, pluginConfig) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline CreatePluginAttachmentRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


  protected:
    // The attachment IDs.
    shared_ptr<vector<string>> attachResourceIds_ {};
    // The type of the resource to which the plug-in is attached. Valid values: GatewayRoute, Gateway, GatewayDomain, HttpApi, and Operation.
    shared_ptr<string> attachResourceType_ {};
    // Specifies whether to enable the plug-in. Default value: false.
    shared_ptr<bool> enable_ {};
    // The environment ID.
    shared_ptr<string> environmentId_ {};
    // The instance ID.
    shared_ptr<string> gatewayId_ {};
    // The Base64-encoded configurations of the plug-in.
    shared_ptr<string> pluginConfig_ {};
    // The plug-in ID.
    shared_ptr<string> pluginId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
