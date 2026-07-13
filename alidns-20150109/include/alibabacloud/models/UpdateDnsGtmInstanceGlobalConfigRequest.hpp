// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDNSGTMINSTANCEGLOBALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDNSGTMINSTANCEGLOBALCONFIGREQUEST_HPP_
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
  class UpdateDnsGtmInstanceGlobalConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDnsGtmInstanceGlobalConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(CnameType, cnameType_);
      DARABONBA_PTR_TO_JSON(ForceUpdate, forceUpdate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PublicCnameMode, publicCnameMode_);
      DARABONBA_PTR_TO_JSON(PublicRr, publicRr_);
      DARABONBA_PTR_TO_JSON(PublicUserDomainName, publicUserDomainName_);
      DARABONBA_PTR_TO_JSON(PublicZoneName, publicZoneName_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDnsGtmInstanceGlobalConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(CnameType, cnameType_);
      DARABONBA_PTR_FROM_JSON(ForceUpdate, forceUpdate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PublicCnameMode, publicCnameMode_);
      DARABONBA_PTR_FROM_JSON(PublicRr, publicRr_);
      DARABONBA_PTR_FROM_JSON(PublicUserDomainName, publicUserDomainName_);
      DARABONBA_PTR_FROM_JSON(PublicZoneName, publicZoneName_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    UpdateDnsGtmInstanceGlobalConfigRequest() = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest(const UpdateDnsGtmInstanceGlobalConfigRequest &) = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest(UpdateDnsGtmInstanceGlobalConfigRequest &&) = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDnsGtmInstanceGlobalConfigRequest() = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest& operator=(const UpdateDnsGtmInstanceGlobalConfigRequest &) = default ;
    UpdateDnsGtmInstanceGlobalConfigRequest& operator=(UpdateDnsGtmInstanceGlobalConfigRequest &&) = default ;
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
      // Specifies whether to send alerts through DingTalk. Valid values:
      // 
      // - true: yes
      // 
      // - false: no
      shared_ptr<bool> dingtalkNotice_ {};
      // Specifies whether to send alerts by email. Valid values:
      // 
      // - true: yes
      // 
      // - false or null: no
      shared_ptr<bool> emailNotice_ {};
      // The type of the alert event. Valid values:
      // 
      // - ADDR_ALERT: An address becomes unavailable.
      // 
      // - ADDR_RESUME: An address becomes available.
      // 
      // - ADDR_POOL_GROUP_UNAVAILABLE: An address pool group becomes unavailable.
      // 
      // - ADDR_POOL_GROUP_AVAILABLE: An address pool group becomes available.
      // 
      // - ACCESS_STRATEGY_POOL_GROUP_SWITCH: A switchover occurs between the primary and secondary address pools.
      // 
      // - MONITOR_NODE_IP_CHANGE: The IP address of a monitoring node changes.
      shared_ptr<string> noticeType_ {};
      // Specifies whether to send alerts through text messages. Valid values:
      // 
      // - true: yes
      // 
      // - false or null: no
      shared_ptr<bool> smsNotice_ {};
    };

    virtual bool empty() const override { return this->alertConfig_ == nullptr
        && this->alertGroup_ == nullptr && this->cnameType_ == nullptr && this->forceUpdate_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->lang_ == nullptr && this->publicCnameMode_ == nullptr && this->publicRr_ == nullptr && this->publicUserDomainName_ == nullptr && this->publicZoneName_ == nullptr
        && this->ttl_ == nullptr; };
    // alertConfig Field Functions 
    bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
    void deleteAlertConfig() { this->alertConfig_ = nullptr;};
    inline const vector<UpdateDnsGtmInstanceGlobalConfigRequest::AlertConfig> & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<UpdateDnsGtmInstanceGlobalConfigRequest::AlertConfig>) };
    inline vector<UpdateDnsGtmInstanceGlobalConfigRequest::AlertConfig> getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<UpdateDnsGtmInstanceGlobalConfigRequest::AlertConfig>) };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setAlertConfig(const vector<UpdateDnsGtmInstanceGlobalConfigRequest::AlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setAlertConfig(vector<UpdateDnsGtmInstanceGlobalConfigRequest::AlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline string getAlertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // cnameType Field Functions 
    bool hasCnameType() const { return this->cnameType_ != nullptr;};
    void deleteCnameType() { this->cnameType_ = nullptr;};
    inline string getCnameType() const { DARABONBA_PTR_GET_DEFAULT(cnameType_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setCnameType(string cnameType) { DARABONBA_PTR_SET_VALUE(cnameType_, cnameType) };


    // forceUpdate Field Functions 
    bool hasForceUpdate() const { return this->forceUpdate_ != nullptr;};
    void deleteForceUpdate() { this->forceUpdate_ = nullptr;};
    inline bool getForceUpdate() const { DARABONBA_PTR_GET_DEFAULT(forceUpdate_, false) };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setForceUpdate(bool forceUpdate) { DARABONBA_PTR_SET_VALUE(forceUpdate_, forceUpdate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // publicCnameMode Field Functions 
    bool hasPublicCnameMode() const { return this->publicCnameMode_ != nullptr;};
    void deletePublicCnameMode() { this->publicCnameMode_ = nullptr;};
    inline string getPublicCnameMode() const { DARABONBA_PTR_GET_DEFAULT(publicCnameMode_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setPublicCnameMode(string publicCnameMode) { DARABONBA_PTR_SET_VALUE(publicCnameMode_, publicCnameMode) };


    // publicRr Field Functions 
    bool hasPublicRr() const { return this->publicRr_ != nullptr;};
    void deletePublicRr() { this->publicRr_ = nullptr;};
    inline string getPublicRr() const { DARABONBA_PTR_GET_DEFAULT(publicRr_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setPublicRr(string publicRr) { DARABONBA_PTR_SET_VALUE(publicRr_, publicRr) };


    // publicUserDomainName Field Functions 
    bool hasPublicUserDomainName() const { return this->publicUserDomainName_ != nullptr;};
    void deletePublicUserDomainName() { this->publicUserDomainName_ = nullptr;};
    inline string getPublicUserDomainName() const { DARABONBA_PTR_GET_DEFAULT(publicUserDomainName_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setPublicUserDomainName(string publicUserDomainName) { DARABONBA_PTR_SET_VALUE(publicUserDomainName_, publicUserDomainName) };


    // publicZoneName Field Functions 
    bool hasPublicZoneName() const { return this->publicZoneName_ != nullptr;};
    void deletePublicZoneName() { this->publicZoneName_ = nullptr;};
    inline string getPublicZoneName() const { DARABONBA_PTR_GET_DEFAULT(publicZoneName_, "") };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setPublicZoneName(string publicZoneName) { DARABONBA_PTR_SET_VALUE(publicZoneName_, publicZoneName) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline UpdateDnsGtmInstanceGlobalConfigRequest& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The alert configurations.
    shared_ptr<vector<UpdateDnsGtmInstanceGlobalConfigRequest::AlertConfig>> alertConfig_ {};
    // The alert contact group. The value is a JSON-formatted \\`List\\<string>\\`.
    shared_ptr<string> alertGroup_ {};
    // The type of the CNAME record. Valid value:
    // 
    // - PUBLIC: The CNAME record is used for Internet access.
    shared_ptr<string> cnameType_ {};
    // Specifies whether to forcefully update the instance. Valid values:
    // 
    // - true: Forcefully updates the instance without checking for conflicts.
    // 
    // - false or null: Does not forcefully update the instance. The system checks for conflicts before the update.
    shared_ptr<bool> forceUpdate_ {};
    // The ID of the GTM instance. To obtain the instance ID, call the [DescribeDnsGtmInstances](https://www.alibabacloud.com/help/en/dns/api-alidns-2015-01-09-describednsgtminstances?spm=a2c63.p38356.help-menu-search-29697.d_0) operation.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The name of the instance. This parameter is required when you update the instance for the first time. It is optional for subsequent updates.
    shared_ptr<string> instanceName_ {};
    // The language of the response. Valid values: en, zh, and ja. The default value is en.
    shared_ptr<string> lang_ {};
    // The method used to access the instance over the Internet. Valid values:
    // 
    // - SYSTEM_ASSIGN: The system assigns a canonical name (CNAME) record. This option is disabled.
    // 
    // - CUSTOM: You specify a CNAME record.
    shared_ptr<string> publicCnameMode_ {};
    // The hostname of the CNAME record that is used for Internet access.
    shared_ptr<string> publicRr_ {};
    // The service domain name that is accessed over the Internet.
    shared_ptr<string> publicUserDomainName_ {};
    // The primary domain name that is used to access the instance over the Internet using a CNAME record. This parameter is required if you set PublicCnameMode to CUSTOM.
    // 
    // > Enter the primary domain name. Do not include the hostname specified by the PublicRr parameter.
    shared_ptr<string> publicZoneName_ {};
    // The global time to live (TTL).
    shared_ptr<int32_t> ttl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
