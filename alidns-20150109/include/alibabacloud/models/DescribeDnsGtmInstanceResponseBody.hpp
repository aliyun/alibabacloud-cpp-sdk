// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCERESPONSEBODY_HPP_
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
  class DescribeDnsGtmInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstanceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SmsQuota, smsQuota_);
      DARABONBA_PTR_TO_JSON(TaskQuota, taskQuota_);
      DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstanceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SmsQuota, smsQuota_);
      DARABONBA_PTR_FROM_JSON(TaskQuota, taskQuota_);
      DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    DescribeDnsGtmInstanceResponseBody() = default ;
    DescribeDnsGtmInstanceResponseBody(const DescribeDnsGtmInstanceResponseBody &) = default ;
    DescribeDnsGtmInstanceResponseBody(DescribeDnsGtmInstanceResponseBody &&) = default ;
    DescribeDnsGtmInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstanceResponseBody() = default ;
    DescribeDnsGtmInstanceResponseBody& operator=(const DescribeDnsGtmInstanceResponseBody &) = default ;
    DescribeDnsGtmInstanceResponseBody& operator=(DescribeDnsGtmInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UsedQuota : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UsedQuota& obj) { 
        DARABONBA_PTR_TO_JSON(DingtalkUsedCount, dingtalkUsedCount_);
        DARABONBA_PTR_TO_JSON(EmailUsedCount, emailUsedCount_);
        DARABONBA_PTR_TO_JSON(SmsUsedCount, smsUsedCount_);
        DARABONBA_PTR_TO_JSON(TaskUsedCount, taskUsedCount_);
      };
      friend void from_json(const Darabonba::Json& j, UsedQuota& obj) { 
        DARABONBA_PTR_FROM_JSON(DingtalkUsedCount, dingtalkUsedCount_);
        DARABONBA_PTR_FROM_JSON(EmailUsedCount, emailUsedCount_);
        DARABONBA_PTR_FROM_JSON(SmsUsedCount, smsUsedCount_);
        DARABONBA_PTR_FROM_JSON(TaskUsedCount, taskUsedCount_);
      };
      UsedQuota() = default ;
      UsedQuota(const UsedQuota &) = default ;
      UsedQuota(UsedQuota &&) = default ;
      UsedQuota(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UsedQuota() = default ;
      UsedQuota& operator=(const UsedQuota &) = default ;
      UsedQuota& operator=(UsedQuota &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dingtalkUsedCount_ == nullptr
        && this->emailUsedCount_ == nullptr && this->smsUsedCount_ == nullptr && this->taskUsedCount_ == nullptr; };
      // dingtalkUsedCount Field Functions 
      bool hasDingtalkUsedCount() const { return this->dingtalkUsedCount_ != nullptr;};
      void deleteDingtalkUsedCount() { this->dingtalkUsedCount_ = nullptr;};
      inline int32_t getDingtalkUsedCount() const { DARABONBA_PTR_GET_DEFAULT(dingtalkUsedCount_, 0) };
      inline UsedQuota& setDingtalkUsedCount(int32_t dingtalkUsedCount) { DARABONBA_PTR_SET_VALUE(dingtalkUsedCount_, dingtalkUsedCount) };


      // emailUsedCount Field Functions 
      bool hasEmailUsedCount() const { return this->emailUsedCount_ != nullptr;};
      void deleteEmailUsedCount() { this->emailUsedCount_ = nullptr;};
      inline int32_t getEmailUsedCount() const { DARABONBA_PTR_GET_DEFAULT(emailUsedCount_, 0) };
      inline UsedQuota& setEmailUsedCount(int32_t emailUsedCount) { DARABONBA_PTR_SET_VALUE(emailUsedCount_, emailUsedCount) };


      // smsUsedCount Field Functions 
      bool hasSmsUsedCount() const { return this->smsUsedCount_ != nullptr;};
      void deleteSmsUsedCount() { this->smsUsedCount_ = nullptr;};
      inline int32_t getSmsUsedCount() const { DARABONBA_PTR_GET_DEFAULT(smsUsedCount_, 0) };
      inline UsedQuota& setSmsUsedCount(int32_t smsUsedCount) { DARABONBA_PTR_SET_VALUE(smsUsedCount_, smsUsedCount) };


      // taskUsedCount Field Functions 
      bool hasTaskUsedCount() const { return this->taskUsedCount_ != nullptr;};
      void deleteTaskUsedCount() { this->taskUsedCount_ = nullptr;};
      inline int32_t getTaskUsedCount() const { DARABONBA_PTR_GET_DEFAULT(taskUsedCount_, 0) };
      inline UsedQuota& setTaskUsedCount(int32_t taskUsedCount) { DARABONBA_PTR_SET_VALUE(taskUsedCount_, taskUsedCount) };


    protected:
      shared_ptr<int32_t> dingtalkUsedCount_ {};
      // The total number of emails that were sent.
      shared_ptr<int32_t> emailUsedCount_ {};
      // The total number of short messages that were sent.
      shared_ptr<int32_t> smsUsedCount_ {};
      // The number of detection tasks that were created.
      shared_ptr<int32_t> taskUsedCount_ {};
    };

    class Config : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Config& obj) { 
        DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
        DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
        DARABONBA_PTR_TO_JSON(CnameType, cnameType_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(PubicZoneName, pubicZoneName_);
        DARABONBA_PTR_TO_JSON(PublicCnameMode, publicCnameMode_);
        DARABONBA_PTR_TO_JSON(PublicRr, publicRr_);
        DARABONBA_PTR_TO_JSON(PublicUserDomainName, publicUserDomainName_);
        DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      };
      friend void from_json(const Darabonba::Json& j, Config& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
        DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
        DARABONBA_PTR_FROM_JSON(CnameType, cnameType_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(PubicZoneName, pubicZoneName_);
        DARABONBA_PTR_FROM_JSON(PublicCnameMode, publicCnameMode_);
        DARABONBA_PTR_FROM_JSON(PublicRr, publicRr_);
        DARABONBA_PTR_FROM_JSON(PublicUserDomainName, publicUserDomainName_);
        DARABONBA_PTR_FROM_JSON(StrategyMode, strategyMode_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      };
      Config() = default ;
      Config(const Config &) = default ;
      Config(Config &&) = default ;
      Config(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Config() = default ;
      Config& operator=(const Config &) = default ;
      Config& operator=(Config &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          shared_ptr<bool> dingtalkNotice_ {};
          // Indicates whether email notification is configured. Valid values:
          // 
          // *   true: Email notification is configured.
          // *   false: Email notification is not configured. null: Email notification is not configured.
          shared_ptr<bool> emailNotice_ {};
          // The type of the alert event. Valid values:
          // 
          // *   ADDR_ALERT: The address is unavailable.
          // *   ADDR_RESUME: The address is restored and becomes available.
          // *   ADDR_POOL_GROUP_UNAVAILABLE: The address pool group is unavailable.
          // *   ADDR_POOL_GROUP_AVAILABLE: The address pool group is restored and becomes available.
          // *   ACCESS_STRATEGY_POOL_GROUP_SWITCH: Switchover is triggered between the primary and secondary address pools.
          // *   MONITOR_NODE_IP_CHANGE: The IP address of the monitoring node has changed.
          shared_ptr<string> noticeType_ {};
          // Indicates whether SMS notification is configured. Valid values:
          // 
          // *   true: SMS notification is configured.
          // *   false: SMS notification is not configured. null: SMS notification is not configured.
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
        && this->alertGroup_ == nullptr && this->cnameType_ == nullptr && this->instanceName_ == nullptr && this->pubicZoneName_ == nullptr && this->publicCnameMode_ == nullptr
        && this->publicRr_ == nullptr && this->publicUserDomainName_ == nullptr && this->strategyMode_ == nullptr && this->ttl_ == nullptr; };
      // alertConfig Field Functions 
      bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
      void deleteAlertConfig() { this->alertConfig_ = nullptr;};
      inline const Config::AlertConfig & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, Config::AlertConfig) };
      inline Config::AlertConfig getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, Config::AlertConfig) };
      inline Config& setAlertConfig(const Config::AlertConfig & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
      inline Config& setAlertConfig(Config::AlertConfig && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


      // alertGroup Field Functions 
      bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
      void deleteAlertGroup() { this->alertGroup_ = nullptr;};
      inline string getAlertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, "") };
      inline Config& setAlertGroup(string alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


      // cnameType Field Functions 
      bool hasCnameType() const { return this->cnameType_ != nullptr;};
      void deleteCnameType() { this->cnameType_ = nullptr;};
      inline string getCnameType() const { DARABONBA_PTR_GET_DEFAULT(cnameType_, "") };
      inline Config& setCnameType(string cnameType) { DARABONBA_PTR_SET_VALUE(cnameType_, cnameType) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Config& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // pubicZoneName Field Functions 
      bool hasPubicZoneName() const { return this->pubicZoneName_ != nullptr;};
      void deletePubicZoneName() { this->pubicZoneName_ = nullptr;};
      inline string getPubicZoneName() const { DARABONBA_PTR_GET_DEFAULT(pubicZoneName_, "") };
      inline Config& setPubicZoneName(string pubicZoneName) { DARABONBA_PTR_SET_VALUE(pubicZoneName_, pubicZoneName) };


      // publicCnameMode Field Functions 
      bool hasPublicCnameMode() const { return this->publicCnameMode_ != nullptr;};
      void deletePublicCnameMode() { this->publicCnameMode_ = nullptr;};
      inline string getPublicCnameMode() const { DARABONBA_PTR_GET_DEFAULT(publicCnameMode_, "") };
      inline Config& setPublicCnameMode(string publicCnameMode) { DARABONBA_PTR_SET_VALUE(publicCnameMode_, publicCnameMode) };


      // publicRr Field Functions 
      bool hasPublicRr() const { return this->publicRr_ != nullptr;};
      void deletePublicRr() { this->publicRr_ = nullptr;};
      inline string getPublicRr() const { DARABONBA_PTR_GET_DEFAULT(publicRr_, "") };
      inline Config& setPublicRr(string publicRr) { DARABONBA_PTR_SET_VALUE(publicRr_, publicRr) };


      // publicUserDomainName Field Functions 
      bool hasPublicUserDomainName() const { return this->publicUserDomainName_ != nullptr;};
      void deletePublicUserDomainName() { this->publicUserDomainName_ = nullptr;};
      inline string getPublicUserDomainName() const { DARABONBA_PTR_GET_DEFAULT(publicUserDomainName_, "") };
      inline Config& setPublicUserDomainName(string publicUserDomainName) { DARABONBA_PTR_SET_VALUE(publicUserDomainName_, publicUserDomainName) };


      // strategyMode Field Functions 
      bool hasStrategyMode() const { return this->strategyMode_ != nullptr;};
      void deleteStrategyMode() { this->strategyMode_ = nullptr;};
      inline string getStrategyMode() const { DARABONBA_PTR_GET_DEFAULT(strategyMode_, "") };
      inline Config& setStrategyMode(string strategyMode) { DARABONBA_PTR_SET_VALUE(strategyMode_, strategyMode) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline Config& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    protected:
      // The alert notification method.
      shared_ptr<Config::AlertConfig> alertConfig_ {};
      // The name of the alert group.
      shared_ptr<string> alertGroup_ {};
      // The type of the CNAME domain name that is used to access the instance. Valid value:
      // 
      // *   PUBLIC: The CNAME domain name is used to access the instance over the Internet.
      shared_ptr<string> cnameType_ {};
      // The name of the instance.
      shared_ptr<string> instanceName_ {};
      // The domain name that is used to access the instance over the Internet.
      shared_ptr<string> pubicZoneName_ {};
      // Indicates whether a custom CNAME domain name or a CNAME domain name assigned by the system is used to access the instance over the Internet. Valid values:
      // 
      // *   CUSTOM: A custom CNAME domain name is used.
      // *   SYSTEM_ASSIGN: A CNAME domain name assigned by the system is used.
      shared_ptr<string> publicCnameMode_ {};
      // The hostname corresponding to the CNAME domain name that is used to access the instance over the Internet.
      shared_ptr<string> publicRr_ {};
      // The service domain name that is used over the Internet.
      shared_ptr<string> publicUserDomainName_ {};
      // The type of the access policy. Valid values:
      // 
      // *   LATENCY: Latency-based
      // *   GEO: Geographical location-based
      shared_ptr<string> strategyMode_ {};
      // The global time to live (TTL).
      shared_ptr<int32_t> ttl_ {};
    };

    virtual bool empty() const override { return this->config_ == nullptr
        && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->expireTime_ == nullptr && this->expireTimestamp_ == nullptr && this->instanceId_ == nullptr
        && this->paymentType_ == nullptr && this->requestId_ == nullptr && this->resourceGroupId_ == nullptr && this->smsQuota_ == nullptr && this->taskQuota_ == nullptr
        && this->usedQuota_ == nullptr && this->versionCode_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const DescribeDnsGtmInstanceResponseBody::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, DescribeDnsGtmInstanceResponseBody::Config) };
    inline DescribeDnsGtmInstanceResponseBody::Config getConfig() { DARABONBA_PTR_GET(config_, DescribeDnsGtmInstanceResponseBody::Config) };
    inline DescribeDnsGtmInstanceResponseBody& setConfig(const DescribeDnsGtmInstanceResponseBody::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline DescribeDnsGtmInstanceResponseBody& setConfig(DescribeDnsGtmInstanceResponseBody::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimestamp Field Functions 
    bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
    void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
    inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
    inline DescribeDnsGtmInstanceResponseBody& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // smsQuota Field Functions 
    bool hasSmsQuota() const { return this->smsQuota_ != nullptr;};
    void deleteSmsQuota() { this->smsQuota_ = nullptr;};
    inline int32_t getSmsQuota() const { DARABONBA_PTR_GET_DEFAULT(smsQuota_, 0) };
    inline DescribeDnsGtmInstanceResponseBody& setSmsQuota(int32_t smsQuota) { DARABONBA_PTR_SET_VALUE(smsQuota_, smsQuota) };


    // taskQuota Field Functions 
    bool hasTaskQuota() const { return this->taskQuota_ != nullptr;};
    void deleteTaskQuota() { this->taskQuota_ = nullptr;};
    inline int32_t getTaskQuota() const { DARABONBA_PTR_GET_DEFAULT(taskQuota_, 0) };
    inline DescribeDnsGtmInstanceResponseBody& setTaskQuota(int32_t taskQuota) { DARABONBA_PTR_SET_VALUE(taskQuota_, taskQuota) };


    // usedQuota Field Functions 
    bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
    void deleteUsedQuota() { this->usedQuota_ = nullptr;};
    inline const DescribeDnsGtmInstanceResponseBody::UsedQuota & getUsedQuota() const { DARABONBA_PTR_GET_CONST(usedQuota_, DescribeDnsGtmInstanceResponseBody::UsedQuota) };
    inline DescribeDnsGtmInstanceResponseBody::UsedQuota getUsedQuota() { DARABONBA_PTR_GET(usedQuota_, DescribeDnsGtmInstanceResponseBody::UsedQuota) };
    inline DescribeDnsGtmInstanceResponseBody& setUsedQuota(const DescribeDnsGtmInstanceResponseBody::UsedQuota & usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };
    inline DescribeDnsGtmInstanceResponseBody& setUsedQuota(DescribeDnsGtmInstanceResponseBody::UsedQuota && usedQuota) { DARABONBA_PTR_SET_RVALUE(usedQuota_, usedQuota) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline DescribeDnsGtmInstanceResponseBody& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The configurations of the instance.
    shared_ptr<DescribeDnsGtmInstanceResponseBody::Config> config_ {};
    // The time when the instance was created.
    shared_ptr<string> createTime_ {};
    // The UNIX timestamp that indicates when the instance was created.
    shared_ptr<int64_t> createTimestamp_ {};
    // The time when the instance expires.
    shared_ptr<string> expireTime_ {};
    // The UNIX timestamp that indicates when the instance expires.
    shared_ptr<int64_t> expireTimestamp_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The billing method. Valid value:
    // 
    // *   Subscription: You can pay in advance for the use of resources.
    shared_ptr<string> paymentType_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The ID of the resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    // The total number of SMS notifications.
    shared_ptr<int32_t> smsQuota_ {};
    // The total number of detection tasks.
    shared_ptr<int32_t> taskQuota_ {};
    // The used quota.
    shared_ptr<DescribeDnsGtmInstanceResponseBody::UsedQuota> usedQuota_ {};
    // The version of the instance.
    shared_ptr<string> versionCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
