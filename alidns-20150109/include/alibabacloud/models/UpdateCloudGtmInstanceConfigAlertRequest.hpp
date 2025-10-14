// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMINSTANCECONFIGALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMINSTANCECONFIGALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCloudGtmInstanceConfigAlertRequestAlertConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmInstanceConfigAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmInstanceConfigAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(AlertMode, alertMode_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmInstanceConfigAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(AlertMode, alertMode_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateCloudGtmInstanceConfigAlertRequest() = default ;
    UpdateCloudGtmInstanceConfigAlertRequest(const UpdateCloudGtmInstanceConfigAlertRequest &) = default ;
    UpdateCloudGtmInstanceConfigAlertRequest(UpdateCloudGtmInstanceConfigAlertRequest &&) = default ;
    UpdateCloudGtmInstanceConfigAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmInstanceConfigAlertRequest() = default ;
    UpdateCloudGtmInstanceConfigAlertRequest& operator=(const UpdateCloudGtmInstanceConfigAlertRequest &) = default ;
    UpdateCloudGtmInstanceConfigAlertRequest& operator=(UpdateCloudGtmInstanceConfigAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->alertConfig_ == nullptr && return this->alertGroup_ == nullptr && return this->alertMode_ == nullptr && return this->clientToken_ == nullptr && return this->configId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<UpdateCloudGtmInstanceConfigAlertRequestAlertConfig> & alertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<UpdateCloudGtmInstanceConfigAlertRequestAlertConfig>) };
    inline vector<UpdateCloudGtmInstanceConfigAlertRequestAlertConfig> alertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<UpdateCloudGtmInstanceConfigAlertRequestAlertConfig>) };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertConfig(const vector<UpdateCloudGtmInstanceConfigAlertRequestAlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertConfig(vector<UpdateCloudGtmInstanceConfigAlertRequestAlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const vector<string> & alertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, vector<string>) };
    inline vector<string> alertGroup() { DARABONBA_PTR_GET(alertGroup_, vector<string>) };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertGroup(const vector<string> & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertGroup(vector<string> && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    // alertMode Field Functions 
    bool hasAlertMode() const { return this->alertMode_ != nullptr;};
    void deleteAlertMode() { this->alertMode_ = nullptr;};
    inline string alertMode() const { DARABONBA_PTR_GET_DEFAULT(alertMode_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertMode(string alertMode) { DARABONBA_PTR_SET_VALUE(alertMode_, alertMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The alert configurations.
    std::shared_ptr<vector<UpdateCloudGtmInstanceConfigAlertRequestAlertConfig>> alertConfig_ = nullptr;
    // The alert contact groups.
    std::shared_ptr<vector<string>> alertGroup_ = nullptr;
    // The alert configuration mode of the instance. Valid values:
    // 
    // *   global: global alert configuration
    // *   instance_config: custom alert configuration
    std::shared_ptr<string> alertMode_ = nullptr;
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The configuration ID of the access domain name. Two configuration IDs exist when an A record and an AAAA record are configured for the access domain name that is bound to the GTM instance. This ID uniquely identifies a configuration.
    std::shared_ptr<string> configId_ = nullptr;
    // The ID of the Global Traffic Manager (GTM) 3.0 instance.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
