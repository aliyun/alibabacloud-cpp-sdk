// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMINSTANCESRESPONSEBODY_HPP_
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
  class DescribeDnsGtmInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GtmInstances, gtmInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GtmInstances, gtmInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    DescribeDnsGtmInstancesResponseBody() = default ;
    DescribeDnsGtmInstancesResponseBody(const DescribeDnsGtmInstancesResponseBody &) = default ;
    DescribeDnsGtmInstancesResponseBody(DescribeDnsGtmInstancesResponseBody &&) = default ;
    DescribeDnsGtmInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmInstancesResponseBody() = default ;
    DescribeDnsGtmInstancesResponseBody& operator=(const DescribeDnsGtmInstancesResponseBody &) = default ;
    DescribeDnsGtmInstancesResponseBody& operator=(DescribeDnsGtmInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GtmInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GtmInstances& obj) { 
        DARABONBA_PTR_TO_JSON(Config, config_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(ExpireTimestamp, expireTimestamp_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SmsQuota, smsQuota_);
        DARABONBA_PTR_TO_JSON(TaskQuota, taskQuota_);
        DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
        DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
      };
      friend void from_json(const Darabonba::Json& j, GtmInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(Config, config_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(ExpireTimestamp, expireTimestamp_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SmsQuota, smsQuota_);
        DARABONBA_PTR_FROM_JSON(TaskQuota, taskQuota_);
        DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
        DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
      };
      GtmInstances() = default ;
      GtmInstances(const GtmInstances &) = default ;
      GtmInstances(GtmInstances &&) = default ;
      GtmInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GtmInstances() = default ;
      GtmInstances& operator=(const GtmInstances &) = default ;
      GtmInstances& operator=(GtmInstances &&) = default ;
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
        // The total number of sent DingTalk notifications.
        shared_ptr<int32_t> dingtalkUsedCount_ {};
        // The total number of sent email notifications.
        shared_ptr<int32_t> emailUsedCount_ {};
        // The total number of sent SMS notifications.
        shared_ptr<int32_t> smsUsedCount_ {};
        // The number of created detection tasks.
        shared_ptr<int32_t> taskUsedCount_ {};
      };

      class Config : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Config& obj) { 
          DARABONBA_PTR_TO_JSON(AlertConfig, alertConfig_);
          DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
          DARABONBA_PTR_TO_JSON(CnameType, cnameType_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(PublicCnameMode, publicCnameMode_);
          DARABONBA_PTR_TO_JSON(PublicRr, publicRr_);
          DARABONBA_PTR_TO_JSON(PublicUserDomainName, publicUserDomainName_);
          DARABONBA_PTR_TO_JSON(PublicZoneName, publicZoneName_);
          DARABONBA_PTR_TO_JSON(StrategyMode, strategyMode_);
          DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        };
        friend void from_json(const Darabonba::Json& j, Config& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertConfig, alertConfig_);
          DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
          DARABONBA_PTR_FROM_JSON(CnameType, cnameType_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(PublicCnameMode, publicCnameMode_);
          DARABONBA_PTR_FROM_JSON(PublicRr, publicRr_);
          DARABONBA_PTR_FROM_JSON(PublicUserDomainName, publicUserDomainName_);
          DARABONBA_PTR_FROM_JSON(PublicZoneName, publicZoneName_);
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
          inline string getDingtalkNotice() const { DARABONBA_PTR_GET_DEFAULT(dingtalkNotice_, "") };
          inline AlertConfig& setDingtalkNotice(string dingtalkNotice) { DARABONBA_PTR_SET_VALUE(dingtalkNotice_, dingtalkNotice) };


          // emailNotice Field Functions 
          bool hasEmailNotice() const { return this->emailNotice_ != nullptr;};
          void deleteEmailNotice() { this->emailNotice_ = nullptr;};
          inline string getEmailNotice() const { DARABONBA_PTR_GET_DEFAULT(emailNotice_, "") };
          inline AlertConfig& setEmailNotice(string emailNotice) { DARABONBA_PTR_SET_VALUE(emailNotice_, emailNotice) };


          // noticeType Field Functions 
          bool hasNoticeType() const { return this->noticeType_ != nullptr;};
          void deleteNoticeType() { this->noticeType_ = nullptr;};
          inline string getNoticeType() const { DARABONBA_PTR_GET_DEFAULT(noticeType_, "") };
          inline AlertConfig& setNoticeType(string noticeType) { DARABONBA_PTR_SET_VALUE(noticeType_, noticeType) };


          // smsNotice Field Functions 
          bool hasSmsNotice() const { return this->smsNotice_ != nullptr;};
          void deleteSmsNotice() { this->smsNotice_ = nullptr;};
          inline string getSmsNotice() const { DARABONBA_PTR_GET_DEFAULT(smsNotice_, "") };
          inline AlertConfig& setSmsNotice(string smsNotice) { DARABONBA_PTR_SET_VALUE(smsNotice_, smsNotice) };


        protected:
          // Indicates whether DingTalk alert notifications are configured. Valid values:
          // 
          // *   true
          // *   false | null
          shared_ptr<string> dingtalkNotice_ {};
          // Indicates whether email notifications are configured. Valid values:
          // 
          // *   true
          // *   false | null
          shared_ptr<string> emailNotice_ {};
          // The type of the alert event. Valid values:
          // 
          // *   ADDR_ALERT: The address is unavailable.
          // *   ADDR_RESUME: The address becomes available.
          // *   ADDR_POOL_GROUP_UNAVAILABLE: The address pool set is unavailable.
          // *   ADDR_POOL_GROUP_AVAILABLE: The address pool set becomes available.
          // *   ACCESS_STRATEGY_POOL_GROUP_SWITCH: Switchover is triggered between the primary and secondary address pools.
          shared_ptr<string> noticeType_ {};
          // Indicates whether SMS notifications are configured. Valid values:
          // 
          // *   true
          // *   false | null
          shared_ptr<string> smsNotice_ {};
        };

        virtual bool empty() const override { return this->alertConfig_ == nullptr
        && this->alertGroup_ == nullptr && this->cnameType_ == nullptr && this->instanceName_ == nullptr && this->publicCnameMode_ == nullptr && this->publicRr_ == nullptr
        && this->publicUserDomainName_ == nullptr && this->publicZoneName_ == nullptr && this->strategyMode_ == nullptr && this->ttl_ == nullptr; };
        // alertConfig Field Functions 
        bool hasAlertConfig() const { return this->alertConfig_ != nullptr;};
        void deleteAlertConfig() { this->alertConfig_ = nullptr;};
        inline const vector<Config::AlertConfig> & getAlertConfig() const { DARABONBA_PTR_GET_CONST(alertConfig_, vector<Config::AlertConfig>) };
        inline vector<Config::AlertConfig> getAlertConfig() { DARABONBA_PTR_GET(alertConfig_, vector<Config::AlertConfig>) };
        inline Config& setAlertConfig(const vector<Config::AlertConfig> & alertConfig) { DARABONBA_PTR_SET_VALUE(alertConfig_, alertConfig) };
        inline Config& setAlertConfig(vector<Config::AlertConfig> && alertConfig) { DARABONBA_PTR_SET_RVALUE(alertConfig_, alertConfig) };


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


        // publicZoneName Field Functions 
        bool hasPublicZoneName() const { return this->publicZoneName_ != nullptr;};
        void deletePublicZoneName() { this->publicZoneName_ = nullptr;};
        inline string getPublicZoneName() const { DARABONBA_PTR_GET_DEFAULT(publicZoneName_, "") };
        inline Config& setPublicZoneName(string publicZoneName) { DARABONBA_PTR_SET_VALUE(publicZoneName_, publicZoneName) };


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
        shared_ptr<vector<Config::AlertConfig>> alertConfig_ {};
        // The alert contact groups. The value is in the JSON format.
        shared_ptr<string> alertGroup_ {};
        // The type of the CNAME. Valid value:
        // 
        // *   PUBLIC
        shared_ptr<string> cnameType_ {};
        // The name of the instance.
        shared_ptr<string> instanceName_ {};
        // Specifies whether to use a custom CNAME or a system-assigned CNAME to access GTM over the Internet. Valid values:
        // 
        // *   CUSTOM: a custom CNAME
        // *   SYSTEM_ASSIGN: a system-assigned CNAME. You cannot set PublicCnameMode to this value.
        shared_ptr<string> publicCnameMode_ {};
        // The hostname of the domain name that is used to access GTM over the Internet.
        shared_ptr<string> publicRr_ {};
        // The domain name that is used to access GTM over the Internet.
        shared_ptr<string> publicUserDomainName_ {};
        // The canonical name (CNAME) that is used to access GTM over the Internet.
        shared_ptr<string> publicZoneName_ {};
        // The type of the access policy. Valid values:
        // 
        // *   LATENCY: latency-based access policy
        // *   GEO: geographical location-based access policy
        shared_ptr<string> strategyMode_ {};
        // The global time to live (TTL).
        shared_ptr<int32_t> ttl_ {};
      };

      virtual bool empty() const override { return this->config_ == nullptr
        && this->createTime_ == nullptr && this->createTimestamp_ == nullptr && this->expireTime_ == nullptr && this->expireTimestamp_ == nullptr && this->instanceId_ == nullptr
        && this->paymentType_ == nullptr && this->resourceGroupId_ == nullptr && this->smsQuota_ == nullptr && this->taskQuota_ == nullptr && this->usedQuota_ == nullptr
        && this->versionCode_ == nullptr; };
      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline const GtmInstances::Config & getConfig() const { DARABONBA_PTR_GET_CONST(config_, GtmInstances::Config) };
      inline GtmInstances::Config getConfig() { DARABONBA_PTR_GET(config_, GtmInstances::Config) };
      inline GtmInstances& setConfig(const GtmInstances::Config & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
      inline GtmInstances& setConfig(GtmInstances::Config && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline GtmInstances& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline GtmInstances& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
      inline GtmInstances& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // expireTimestamp Field Functions 
      bool hasExpireTimestamp() const { return this->expireTimestamp_ != nullptr;};
      void deleteExpireTimestamp() { this->expireTimestamp_ = nullptr;};
      inline int64_t getExpireTimestamp() const { DARABONBA_PTR_GET_DEFAULT(expireTimestamp_, 0L) };
      inline GtmInstances& setExpireTimestamp(int64_t expireTimestamp) { DARABONBA_PTR_SET_VALUE(expireTimestamp_, expireTimestamp) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline GtmInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline GtmInstances& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline GtmInstances& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // smsQuota Field Functions 
      bool hasSmsQuota() const { return this->smsQuota_ != nullptr;};
      void deleteSmsQuota() { this->smsQuota_ = nullptr;};
      inline int32_t getSmsQuota() const { DARABONBA_PTR_GET_DEFAULT(smsQuota_, 0) };
      inline GtmInstances& setSmsQuota(int32_t smsQuota) { DARABONBA_PTR_SET_VALUE(smsQuota_, smsQuota) };


      // taskQuota Field Functions 
      bool hasTaskQuota() const { return this->taskQuota_ != nullptr;};
      void deleteTaskQuota() { this->taskQuota_ = nullptr;};
      inline int32_t getTaskQuota() const { DARABONBA_PTR_GET_DEFAULT(taskQuota_, 0) };
      inline GtmInstances& setTaskQuota(int32_t taskQuota) { DARABONBA_PTR_SET_VALUE(taskQuota_, taskQuota) };


      // usedQuota Field Functions 
      bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
      void deleteUsedQuota() { this->usedQuota_ = nullptr;};
      inline const GtmInstances::UsedQuota & getUsedQuota() const { DARABONBA_PTR_GET_CONST(usedQuota_, GtmInstances::UsedQuota) };
      inline GtmInstances::UsedQuota getUsedQuota() { DARABONBA_PTR_GET(usedQuota_, GtmInstances::UsedQuota) };
      inline GtmInstances& setUsedQuota(const GtmInstances::UsedQuota & usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };
      inline GtmInstances& setUsedQuota(GtmInstances::UsedQuota && usedQuota) { DARABONBA_PTR_SET_RVALUE(usedQuota_, usedQuota) };


      // versionCode Field Functions 
      bool hasVersionCode() const { return this->versionCode_ != nullptr;};
      void deleteVersionCode() { this->versionCode_ = nullptr;};
      inline string getVersionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
      inline GtmInstances& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


    protected:
      // The configurations of the instance.
      shared_ptr<GtmInstances::Config> config_ {};
      // The time when the instance was created. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The time when the instance was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> createTimestamp_ {};
      // The time when the instance expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
      shared_ptr<string> expireTime_ {};
      // The time when the instance expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
      shared_ptr<int64_t> expireTimestamp_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The billing method of the GTM instance. Valid value:
      // 
      // *   Subscription.
      shared_ptr<string> paymentType_ {};
      // The ID of the resource group.
      shared_ptr<string> resourceGroupId_ {};
      // The total number of Short Message Service (SMS) notifications.
      shared_ptr<int32_t> smsQuota_ {};
      // The total number of detection tasks.
      shared_ptr<int32_t> taskQuota_ {};
      // The used quota.
      shared_ptr<GtmInstances::UsedQuota> usedQuota_ {};
      // The version of the instance.
      shared_ptr<string> versionCode_ {};
    };

    virtual bool empty() const override { return this->gtmInstances_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr; };
    // gtmInstances Field Functions 
    bool hasGtmInstances() const { return this->gtmInstances_ != nullptr;};
    void deleteGtmInstances() { this->gtmInstances_ = nullptr;};
    inline const vector<DescribeDnsGtmInstancesResponseBody::GtmInstances> & getGtmInstances() const { DARABONBA_PTR_GET_CONST(gtmInstances_, vector<DescribeDnsGtmInstancesResponseBody::GtmInstances>) };
    inline vector<DescribeDnsGtmInstancesResponseBody::GtmInstances> getGtmInstances() { DARABONBA_PTR_GET(gtmInstances_, vector<DescribeDnsGtmInstancesResponseBody::GtmInstances>) };
    inline DescribeDnsGtmInstancesResponseBody& setGtmInstances(const vector<DescribeDnsGtmInstancesResponseBody::GtmInstances> & gtmInstances) { DARABONBA_PTR_SET_VALUE(gtmInstances_, gtmInstances) };
    inline DescribeDnsGtmInstancesResponseBody& setGtmInstances(vector<DescribeDnsGtmInstancesResponseBody::GtmInstances> && gtmInstances) { DARABONBA_PTR_SET_RVALUE(gtmInstances_, gtmInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDnsGtmInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDnsGtmInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDnsGtmInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeDnsGtmInstancesResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeDnsGtmInstancesResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    // The Global Traffic Manager (GTM) instances.
    shared_ptr<vector<DescribeDnsGtmInstancesResponseBody::GtmInstances>> gtmInstances_ {};
    // The page number. Pages start from page **1**. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Maximum value: 100. Default value: 20.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
