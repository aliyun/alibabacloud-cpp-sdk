// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMGLOBALALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMGLOBALALERTREQUEST_HPP_
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
  class UpdateCloudGtmGlobalAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmGlobalAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmGlobalAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
    };
    UpdateCloudGtmGlobalAlertRequest() = default ;
    UpdateCloudGtmGlobalAlertRequest(const UpdateCloudGtmGlobalAlertRequest &) = default ;
    UpdateCloudGtmGlobalAlertRequest(UpdateCloudGtmGlobalAlertRequest &&) = default ;
    UpdateCloudGtmGlobalAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmGlobalAlertRequest() = default ;
    UpdateCloudGtmGlobalAlertRequest& operator=(const UpdateCloudGtmGlobalAlertRequest &) = default ;
    UpdateCloudGtmGlobalAlertRequest& operator=(UpdateCloudGtmGlobalAlertRequest &&) = default ;
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
        DARABONBA_PTR_TO_JSON(Threshold, threshold_);
      };
      friend void from_json(const Darabonba::Json& j, AlertConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DingtalkNotice, dingtalkNotice_);
        DARABONBA_PTR_FROM_JSON(EmailNotice, emailNotice_);
        DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
        DARABONBA_PTR_FROM_JSON(SmsNotice, smsNotice_);
        DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
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
        && this->emailNotice_ == nullptr && this->noticeType_ == nullptr && this->smsNotice_ == nullptr && this->threshold_ == nullptr; };
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


      // threshold Field Functions 
      bool hasThreshold() const { return this->threshold_ != nullptr;};
      void deleteThreshold() { this->threshold_ = nullptr;};
      inline int32_t getThreshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0) };
      inline AlertConfig& setThreshold(int32_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


    protected:
      // Specifies whether to configure DingTalk notifications. Valid values:
      // 
      // *   true: configures DingTalk notifications. DingTalk notifications are sent when alerts are triggered.
      // *   false: does not configure DingTalk notifications.
      shared_ptr<bool> dingtalkNotice_ {};
      // Specifies whether to configure email notifications. Valid values:
      // 
      // *   true: configures email notifications. Emails are sent when alerts are triggered.
      // *   false｜null: does not configure email notifications.
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
      // *   false｜null: does not configure text message notifications.
      // 
      // Only the China site (aliyun.com) supports text message notifications.
      shared_ptr<bool> smsNotice_ {};
      shared_ptr<int32_t> threshold_ {};
    };

    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->alertConfig_ == nullptr && this->alertGroup_ == nullptr && this->clientToken_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmGlobalAlertRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<UpdateCloudGtmGlobalAlertRequest::AlertConfig> & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<UpdateCloudGtmGlobalAlertRequest::AlertConfig>) };
    inline vector<UpdateCloudGtmGlobalAlertRequest::AlertConfig> getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<UpdateCloudGtmGlobalAlertRequest::AlertConfig>) };
    inline UpdateCloudGtmGlobalAlertRequest& setAlertConfig(const vector<UpdateCloudGtmGlobalAlertRequest::AlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline UpdateCloudGtmGlobalAlertRequest& setAlertConfig(vector<UpdateCloudGtmGlobalAlertRequest::AlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const vector<string> & getAlertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, vector<string>) };
    inline vector<string> getAlertGroup() { DARABONBA_PTR_GET(alertGroup_, vector<string>) };
    inline UpdateCloudGtmGlobalAlertRequest& setAlertGroup(const vector<string> & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline UpdateCloudGtmGlobalAlertRequest& setAlertGroup(vector<string> && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmGlobalAlertRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    shared_ptr<string> acceptLanguage_ {};
    // The alert configurations.
    shared_ptr<vector<UpdateCloudGtmGlobalAlertRequest::AlertConfig>> alertConfig_ {};
    // The alert contact groups.
    shared_ptr<vector<string>> alertGroup_ {};
    // The client token that is used to ensure the idempotence of the request. You can specify a custom value for this parameter, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
