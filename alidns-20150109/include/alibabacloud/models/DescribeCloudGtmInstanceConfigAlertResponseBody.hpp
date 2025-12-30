// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGALERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMINSTANCECONFIGALERTRESPONSEBODY_HPP_
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
  class DescribeCloudGtmInstanceConfigAlertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmInstanceConfigAlertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(AlertMode, alertMode_);
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmInstanceConfigAlertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(AlertMode, alertMode_);
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCloudGtmInstanceConfigAlertResponseBody() = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody(const DescribeCloudGtmInstanceConfigAlertResponseBody &) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody(DescribeCloudGtmInstanceConfigAlertResponseBody &&) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmInstanceConfigAlertResponseBody() = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody& operator=(const DescribeCloudGtmInstanceConfigAlertResponseBody &) = default ;
    DescribeCloudGtmInstanceConfigAlertResponseBody& operator=(DescribeCloudGtmInstanceConfigAlertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AlertGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertGroup& obj) { 
        DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      };
      friend void from_json(const Darabonba::Json& j, AlertGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      };
      AlertGroup() = default ;
      AlertGroup(const AlertGroup &) = default ;
      AlertGroup(AlertGroup &&) = default ;
      AlertGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AlertGroup() = default ;
      AlertGroup& operator=(const AlertGroup &) = default ;
      AlertGroup& operator=(AlertGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->alertGroup_ == nullptr; };
      // alertGroup Field Functions 
      bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
      void deleteAlertGroup() { this->alertGroup_ = nullptr;};
      inline const vector<string> & getAlertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, vector<string>) };
      inline vector<string> getAlertGroup() { DARABONBA_PTR_GET(alertGroup_, vector<string>) };
      inline AlertGroup& setAlertGroup(const vector<string> & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
      inline AlertGroup& setAlertGroup(vector<string> && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    protected:
      shared_ptr<vector<string>> alertGroup_ {};
    };

    class AlertConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AlertConfig& obj) { 
        DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      };
      friend void from_json(const Darabonba::Json& j, AlertConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
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
      class AlertConfigItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlertConfigItem& obj) { 
          DARABONBA_PTR_TO_JSON(DingtalkNotice, dingtalkNotice_);
          DARABONBA_PTR_TO_JSON(EmailNotice, emailNotice_);
          DARABONBA_PTR_TO_JSON(NoticeType, noticeType_);
          DARABONBA_PTR_TO_JSON(SmsNotice, smsNotice_);
        };
        friend void from_json(const Darabonba::Json& j, AlertConfigItem& obj) { 
          DARABONBA_PTR_FROM_JSON(DingtalkNotice, dingtalkNotice_);
          DARABONBA_PTR_FROM_JSON(EmailNotice, emailNotice_);
          DARABONBA_PTR_FROM_JSON(NoticeType, noticeType_);
          DARABONBA_PTR_FROM_JSON(SmsNotice, smsNotice_);
        };
        AlertConfigItem() = default ;
        AlertConfigItem(const AlertConfigItem &) = default ;
        AlertConfigItem(AlertConfigItem &&) = default ;
        AlertConfigItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlertConfigItem() = default ;
        AlertConfigItem& operator=(const AlertConfigItem &) = default ;
        AlertConfigItem& operator=(AlertConfigItem &&) = default ;
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
        inline AlertConfigItem& setDingtalkNotice(bool dingtalkNotice) { DARABONBA_PTR_SET_VALUE(dingtalkNotice_, dingtalkNotice) };


        // emailNotice Field Functions 
        bool hasEmailNotice() const { return this->emailNotice_ != nullptr;};
        void deleteEmailNotice() { this->emailNotice_ = nullptr;};
        inline bool getEmailNotice() const { DARABONBA_PTR_GET_DEFAULT(emailNotice_, false) };
        inline AlertConfigItem& setEmailNotice(bool emailNotice) { DARABONBA_PTR_SET_VALUE(emailNotice_, emailNotice) };


        // noticeType Field Functions 
        bool hasNoticeType() const { return this->noticeType_ != nullptr;};
        void deleteNoticeType() { this->noticeType_ = nullptr;};
        inline string getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
        inline AlertConfigItem& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


        // smsNotice Field Functions 
        bool hasSmsNotice() const { return this->smsNotice_ != nullptr;};
        void deleteSmsNotice() { this->smsNotice_ = nullptr;};
        inline bool getSmsNotice() const { DARABONBA_PTR_GET_DEFAULT(smsNotice_, false) };
        inline AlertConfigItem& setSmsNotice(bool smsNotice) { DARABONBA_PTR_SET_VALUE(smsNotice_, smsNotice) };


      protected:
        // Indicates whether DingTalk notifications are configured. Valid values:
        // 
        // *   true: DingTalk notifications are configured. DingTalk notifications are sent after alerts are triggered.
        // *   false: DingTalk notifications are not configured.
        shared_ptr<bool> dingtalkNotice_ {};
        // Indicates whether email notifications are configured. Valid values:
        // 
        // *   true: Email notifications are configured. Emails are sent after alerts are triggered.
        // *   false: Email notifications are not configured.
        shared_ptr<bool> emailNotice_ {};
        // The type of the alert event. Valid values:
        // 
        // *   addr_alert: The address is unavailable.
        // *   addr_resume: The address becomes available.
        // *   addr_pool_unavailable: The address pool is unavailable.
        // *   addr_pool_available: The address pool becomes available.
        shared_ptr<string> noticeType_ {};
        // Indicates whether text message notifications are configured. Valid values:
        // 
        // *   true: Text message notifications are configured. Text messages are sent after alerts are triggered.
        // *   false: Text message notifications are not configured.
        // 
        // Only the China site (aliyun.com) supports text message notifications.
        shared_ptr<bool> smsNotice_ {};
      };

      virtual bool empty() const override { return this->alertConfig_ == nullptr; };
      // alertConfig Field Functions 
      bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
      void deleteAlertConfig() { this->alertConfig_ = nullptr;};
      inline const vector<AlertConfig::AlertConfigItem> & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<AlertConfig::AlertConfigItem>) };
      inline vector<AlertConfig::AlertConfigItem> getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<AlertConfig::AlertConfigItem>) };
      inline AlertConfig& setAlertConfig(const vector<AlertConfig::AlertConfigItem> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
      inline AlertConfig& setAlertConfig(vector<AlertConfig::AlertConfigItem> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    protected:
      shared_ptr<vector<AlertConfig::AlertConfigItem>> alertConfig_ {};
    };

    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && this->alertGroup_ == nullptr && this->alertMode_ == nullptr && this->configId_ == nullptr && this->instanceId_ == nullptr && this->requestId_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const DescribeCloudGtmInstanceConfigAlertResponseBody::AlertConfig & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, DescribeCloudGtmInstanceConfigAlertResponseBody::AlertConfig) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody::AlertConfig getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, DescribeCloudGtmInstanceConfigAlertResponseBody::AlertConfig) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertConfig(const DescribeCloudGtmInstanceConfigAlertResponseBody::AlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertConfig(DescribeCloudGtmInstanceConfigAlertResponseBody::AlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline const DescribeCloudGtmInstanceConfigAlertResponseBody::AlertGroup & getAlertGroup() const { DARABONBA_PTR_GET_CONST(alertGroup_, DescribeCloudGtmInstanceConfigAlertResponseBody::AlertGroup) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody::AlertGroup getAlertGroup() { DARABONBA_PTR_GET(alertGroup_, DescribeCloudGtmInstanceConfigAlertResponseBody::AlertGroup) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertGroup(const DescribeCloudGtmInstanceConfigAlertResponseBody::AlertGroup & alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertGroup(DescribeCloudGtmInstanceConfigAlertResponseBody::AlertGroup && alertGroup) { DARABONBA_PTR_SET_RVALUE(alertGroup_, alertGroup) };


    // alertMode Field Functions 
    bool hasAlertMode() const { return this->alertMode_ != nullptr;};
    void deleteAlertMode() { this->alertMode_ = nullptr;};
    inline string getAlertMode() const { DARABONBA_PTR_GET_DEFAULT(alertMode_, "") };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setAlertMode(string alertMode) { DARABONBA_PTR_SET_VALUE(alertMode_, alertMode) };


    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline string getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, "") };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setConfigId(string configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmInstanceConfigAlertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert configurations.
    shared_ptr<DescribeCloudGtmInstanceConfigAlertResponseBody::AlertConfig> alertConfig_ {};
    // The alert contact groups.
    shared_ptr<DescribeCloudGtmInstanceConfigAlertResponseBody::AlertGroup> alertGroup_ {};
    // The alert configuration mode of the instance. Valid values:
    // 
    // *   global: global alert configuration
    // *   instance_config: custom alert configuration
    shared_ptr<string> alertMode_ {};
    // The configuration ID of the access domain name. Two configuration IDs exist when the access domain name is bound to the same GTM instance but an A record and an AAAA record are configured for the access domain name. The configuration ID uniquely identifies a configuration.
    shared_ptr<string> configId_ {};
    // The ID of the GTM 3.0 instance.
    shared_ptr<string> instanceId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
