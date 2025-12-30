// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMINSTANCECONFIGALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMINSTANCECONFIGALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class AlertConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DingtalkNotice, dingtalkNotice_);
        DARABONBA_PTR_TO_JSON(EmailNotice, emailNotice_);
        DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
        DARABONBA_PTR_TO_JSON(SmsNotice, smsNotice_);
      };
      friend void from_json(const Darabonba::Json& j, AlertConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DingtalkNotice, dingtalkNotice_);
        DARABONBA_PTR_FROM_JSON(EmailNotice, emailNotice_);
        DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
        DARABONBA_PTR_FROM_JSON(SmsNotice, smsNotice_);
      };
      AlertConfig() = default ;
      AlertConfig(const AlertConfig &) = default ;
      AlertConfig(AlertConfig &&) = default ;
      AlertConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertConfig() = default ;
      AlertConfig& operator=(const AlertConfig &) = default ;
      AlertConfig& operator=(AlertConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dingtalkNotice_ == nullptr
        && this->emailNotice_ == nullptr && this->noticeType_ == nullptr && this->smsNotice_ == nullptr; };
      // dingtalkNotice Field Functions 
      bool hasDingtalkNotice() const { return this->dingtalkNotice_ != nullptr;};
      void deleteDingtalkNotice() { this->dingtalkNotice_ = nullptr;};
      inline bool getDingtalkNotice() const { DARABONBA_PTR_GET_DEFAULT(dingtalkNotice_, false) };
      inline AlertConfig& setDingtalkNotice(bool dingtalkNotice) { DARABONBA_PTR_SET_VALUE(dingtalkNotice_, dingtalkNotice) };


      // emailNotice Field Functions 
      bool hasEmailNotice() const { return this->emailNotice_ != nullptr;};
      void deleteEmailNotice() { this->emailNotice_ = nullptr;};
      inline bool getEmailNotice() const { DARABONBA_PTR_GET_DEFAULT(emailNotice_, false) };
      inline AlertConfig& setEmailNotice(bool emailNotice) { DARABONBA_PTR_SET_VALUE(emailNotice_, emailNotice) };


      // noticeType Field Functions 
      bool hasNoticeType() const { return this->noticeType_ != nullptr;};
      void deleteNoticeType() { this->noticeType_ = nullptr;};
      inline string getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
      inline AlertConfig& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


      // smsNotice Field Functions 
      bool hasSmsNotice() const { return this->smsNotice_ != nullptr;};
      void deleteSmsNotice() { this->smsNotice_ = nullptr;};
      inline bool getSmsNotice() const { DARABONBA_PTR_GET_DEFAULT(smsNotice_, false) };
      inline AlertConfig& setSmsNotice(bool smsNotice) { DARABONBA_PTR_SET_VALUE(smsNotice_, smsNotice) };


    protected:
      // Specifies whether to configure DingTalk notifications. Valid values:
      // 
      // *   true: configures DingTalk notifications. DingTalk notifications are sent when alerts are triggered.
      // *   false: does not configure DingTalk notifications.
      shared_ptr<bool> dingtalkNotice_ {};
      // Specifies whether to configure email notifications. Valid values:
      // 
      // *   true: configures email notifications. Emails are sent when alerts are triggered.
      // *   false: does not configure email notifications.
      shared_ptr<bool> emailNotice_ {};
      // The type of the alert event. Valid values:
      // 
      // *   addr_alert: The address is unavailable.
      // *   addr_resume: The address becomes available.
      // *   addr_pool_unavailable: The address pool is unavailable.
      // *   addr_pool_available: The address pool becomes available.
      shared_ptr<string> noticeType_ {};
      // Specifies whether to configure text message notifications. Valid values:
      // 
      // *   true: configures text message notifications. Text messages are sent when alerts are triggered.
      // *   false: does not configure text message notifications.
      // 
      // Only the China site (aliyun.com) supports text message notifications.
      shared_ptr<bool> smsNotice_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->alertConfig_ == nullptr && this->alertGroup_ == nullptr && this->alertMode_ == nullptr && this->clientToken_ == nullptr && this->configId_ == nullptr
        && this->instanceId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<UpdateCloudGtmInstanceConfigAlertRequest::AlertConfig> & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<UpdateCloudGtmInstanceConfigAlertRequest::AlertConfig>) };
    inline vector<UpdateCloudGtmInstanceConfigAlertRequest::AlertConfig> getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<UpdateCloudGtmInstanceConfigAlertRequest::AlertConfig>) };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertConfig(const vector<UpdateCloudGtmInstanceConfigAlertRequest::AlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertConfig(vector<UpdateCloudGtmInstanceConfigAlertRequest::AlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const vector<string> & getAlertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, vector<string>) };
    inline vector<string> getAlertGroup() { DARABONBA_PTR_GET(alertGroup_, vector<string>) };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertGroup(const vector<string> & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertGroup(vector<string> && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    // alertMode Field Functions 
    bool hasAlertMode() const { return this->alertMode_ != nullptr;};
    void deleteAlertMode() { this->alertMode_ = nullptr;};
    inline string getAlertMode() const { DARABONBA_PTR_GET_DEFAULT(alertMode_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setAlertMode(string alertMode) { DARABONBA_PTR_SET_VALUE(alertMode_, alertMode) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCloudGtmInstanceConfigAlertRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    shared_ptr<string> acceptLanguage_ {};
    // The alert configurations.
    shared_ptr<vector<UpdateCloudGtmInstanceConfigAlertRequest::AlertConfig>> alertConfig_ {};
    // The alert contact groups.
    shared_ptr<vector<string>> alertGroup_ {};
    // The alert configuration mode of the instance. Valid values:
    // 
    // *   global: global alert configuration
    // *   instance_config: custom alert configuration
    shared_ptr<string> alertMode_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The configuration ID of the access domain name. Two configuration IDs exist when an A record and an AAAA record are configured for the access domain name that is bound to the GTM instance. This ID uniquely identifies a configuration.
    shared_ptr<string> configId_ {};
    // The ID of the Global Traffic Manager (GTM) 3.0 instance.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
