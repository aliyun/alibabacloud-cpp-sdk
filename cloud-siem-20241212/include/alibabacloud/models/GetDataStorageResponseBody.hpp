// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASTORAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetDataStorageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataStorageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataStorageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetDataStorageResponseBody() = default ;
    GetDataStorageResponseBody(const GetDataStorageResponseBody &) = default ;
    GetDataStorageResponseBody(GetDataStorageResponseBody &&) = default ;
    GetDataStorageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataStorageResponseBody() = default ;
    GetDataStorageResponseBody& operator=(const GetDataStorageResponseBody &) = default ;
    GetDataStorageResponseBody& operator=(GetDataStorageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ColdStorageUsedCapacity, coldStorageUsedCapacity_);
        DARABONBA_PTR_TO_JSON(DataStorageRegionId, dataStorageRegionId_);
        DARABONBA_PTR_TO_JSON(DataStorageRegionPermission, dataStorageRegionPermission_);
        DARABONBA_PTR_TO_JSON(DataStorageTotalCapacity, dataStorageTotalCapacity_);
        DARABONBA_PTR_TO_JSON(DataStorageUsedCapacity, dataStorageUsedCapacity_);
        DARABONBA_PTR_TO_JSON(DataStorageUsedCapacityDetail, dataStorageUsedCapacityDetail_);
        DARABONBA_PTR_TO_JSON(DeliverySettings, deliverySettings_);
        DARABONBA_PTR_TO_JSON(DeliverySettingsError, deliverySettingsError_);
        DARABONBA_PTR_TO_JSON(LogProject, logProject_);
        DARABONBA_PTR_TO_JSON(LogProjectState, logProjectState_);
        DARABONBA_PTR_TO_JSON(LogProjectStateChangeAllowed, logProjectStateChangeAllowed_);
        DARABONBA_PTR_TO_JSON(LogServiceDisabled, logServiceDisabled_);
        DARABONBA_PTR_TO_JSON(NormalizationLogStores, normalizationLogStores_);
        DARABONBA_PTR_TO_JSON(NormalizationLogViews, normalizationLogViews_);
        DARABONBA_PTR_TO_JSON(RecordLogStores, recordLogStores_);
        DARABONBA_PTR_TO_JSON(SasLogStores, sasLogStores_);
        DARABONBA_PTR_TO_JSON(UnusedLogStores, unusedLogStores_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ColdStorageUsedCapacity, coldStorageUsedCapacity_);
        DARABONBA_PTR_FROM_JSON(DataStorageRegionId, dataStorageRegionId_);
        DARABONBA_PTR_FROM_JSON(DataStorageRegionPermission, dataStorageRegionPermission_);
        DARABONBA_PTR_FROM_JSON(DataStorageTotalCapacity, dataStorageTotalCapacity_);
        DARABONBA_PTR_FROM_JSON(DataStorageUsedCapacity, dataStorageUsedCapacity_);
        DARABONBA_PTR_FROM_JSON(DataStorageUsedCapacityDetail, dataStorageUsedCapacityDetail_);
        DARABONBA_PTR_FROM_JSON(DeliverySettings, deliverySettings_);
        DARABONBA_PTR_FROM_JSON(DeliverySettingsError, deliverySettingsError_);
        DARABONBA_PTR_FROM_JSON(LogProject, logProject_);
        DARABONBA_PTR_FROM_JSON(LogProjectState, logProjectState_);
        DARABONBA_PTR_FROM_JSON(LogProjectStateChangeAllowed, logProjectStateChangeAllowed_);
        DARABONBA_PTR_FROM_JSON(LogServiceDisabled, logServiceDisabled_);
        DARABONBA_PTR_FROM_JSON(NormalizationLogStores, normalizationLogStores_);
        DARABONBA_PTR_FROM_JSON(NormalizationLogViews, normalizationLogViews_);
        DARABONBA_PTR_FROM_JSON(RecordLogStores, recordLogStores_);
        DARABONBA_PTR_FROM_JSON(SasLogStores, sasLogStores_);
        DARABONBA_PTR_FROM_JSON(UnusedLogStores, unusedLogStores_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UnusedLogStores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UnusedLogStores& obj) { 
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(LogStoreTtl, logStoreTtl_);
          DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, UnusedLogStores& obj) { 
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(LogStoreTtl, logStoreTtl_);
          DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
        };
        UnusedLogStores() = default ;
        UnusedLogStores(const UnusedLogStores &) = default ;
        UnusedLogStores(UnusedLogStores &&) = default ;
        UnusedLogStores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UnusedLogStores() = default ;
        UnusedLogStores& operator=(const UnusedLogStores &) = default ;
        UnusedLogStores& operator=(UnusedLogStores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logStoreName_ == nullptr
        && this->logStoreTtl_ == nullptr && this->usedCapacity_ == nullptr; };
        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline UnusedLogStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // logStoreTtl Field Functions 
        bool hasLogStoreTtl() const { return this->logStoreTtl_ != nullptr;};
        void deleteLogStoreTtl() { this->logStoreTtl_ = nullptr;};
        inline int32_t getLogStoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreTtl_, 0) };
        inline UnusedLogStores& setLogStoreTtl(int32_t logStoreTtl) { DARABONBA_PTR_SET_VALUE(logStoreTtl_, logStoreTtl) };


        // usedCapacity Field Functions 
        bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
        void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
        inline double getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0.0) };
        inline UnusedLogStores& setUsedCapacity(double usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


      protected:
        // The name of the Logstore.
        shared_ptr<string> logStoreName_ {};
        // The data retention period.
        shared_ptr<int32_t> logStoreTtl_ {};
        // The amount of hot storage used.
        shared_ptr<double> usedCapacity_ {};
      };

      class SasLogStores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SasLogStores& obj) { 
          DARABONBA_PTR_TO_JSON(AccountDeliveries, accountDeliveries_);
          DARABONBA_PTR_TO_JSON(LogCode, logCode_);
          DARABONBA_PTR_TO_JSON(LogDeliveryGroup, logDeliveryGroup_);
          DARABONBA_PTR_TO_JSON(LogDeliveryPermission, logDeliveryPermission_);
          DARABONBA_PTR_TO_JSON(LogDeliveryStatus, logDeliveryStatus_);
          DARABONBA_PTR_TO_JSON(LogDeliveryUpdateTime, logDeliveryUpdateTime_);
          DARABONBA_PTR_TO_JSON(LogName, logName_);
          DARABONBA_PTR_TO_JSON(LogSearchConditions, logSearchConditions_);
          DARABONBA_PTR_TO_JSON(LogStoreExisted, logStoreExisted_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(LogStoreTtl, logStoreTtl_);
          DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, SasLogStores& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountDeliveries, accountDeliveries_);
          DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
          DARABONBA_PTR_FROM_JSON(LogDeliveryGroup, logDeliveryGroup_);
          DARABONBA_PTR_FROM_JSON(LogDeliveryPermission, logDeliveryPermission_);
          DARABONBA_PTR_FROM_JSON(LogDeliveryStatus, logDeliveryStatus_);
          DARABONBA_PTR_FROM_JSON(LogDeliveryUpdateTime, logDeliveryUpdateTime_);
          DARABONBA_PTR_FROM_JSON(LogName, logName_);
          DARABONBA_PTR_FROM_JSON(LogSearchConditions, logSearchConditions_);
          DARABONBA_PTR_FROM_JSON(LogStoreExisted, logStoreExisted_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(LogStoreTtl, logStoreTtl_);
          DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
        };
        SasLogStores() = default ;
        SasLogStores(const SasLogStores &) = default ;
        SasLogStores(SasLogStores &&) = default ;
        SasLogStores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SasLogStores() = default ;
        SasLogStores& operator=(const SasLogStores &) = default ;
        SasLogStores& operator=(SasLogStores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class AccountDeliveries : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AccountDeliveries& obj) { 
            DARABONBA_PTR_TO_JSON(AccountId, accountId_);
            DARABONBA_PTR_TO_JSON(AccountName, accountName_);
            DARABONBA_PTR_TO_JSON(IsDaAccount, isDaAccount_);
            DARABONBA_PTR_TO_JSON(LogDeliveryStatus, logDeliveryStatus_);
            DARABONBA_PTR_TO_JSON(LogDeliveryUpdateTime, logDeliveryUpdateTime_);
          };
          friend void from_json(const Darabonba::Json& j, AccountDeliveries& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
            DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
            DARABONBA_PTR_FROM_JSON(IsDaAccount, isDaAccount_);
            DARABONBA_PTR_FROM_JSON(LogDeliveryStatus, logDeliveryStatus_);
            DARABONBA_PTR_FROM_JSON(LogDeliveryUpdateTime, logDeliveryUpdateTime_);
          };
          AccountDeliveries() = default ;
          AccountDeliveries(const AccountDeliveries &) = default ;
          AccountDeliveries(AccountDeliveries &&) = default ;
          AccountDeliveries(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AccountDeliveries() = default ;
          AccountDeliveries& operator=(const AccountDeliveries &) = default ;
          AccountDeliveries& operator=(AccountDeliveries &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->isDaAccount_ == nullptr && this->logDeliveryStatus_ == nullptr && this->logDeliveryUpdateTime_ == nullptr; };
          // accountId Field Functions 
          bool hasAccountId() const { return this->accountId_ != nullptr;};
          void deleteAccountId() { this->accountId_ = nullptr;};
          inline int64_t getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
          inline AccountDeliveries& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


          // accountName Field Functions 
          bool hasAccountName() const { return this->accountName_ != nullptr;};
          void deleteAccountName() { this->accountName_ = nullptr;};
          inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
          inline AccountDeliveries& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


          // isDaAccount Field Functions 
          bool hasIsDaAccount() const { return this->isDaAccount_ != nullptr;};
          void deleteIsDaAccount() { this->isDaAccount_ = nullptr;};
          inline bool getIsDaAccount() const { DARABONBA_PTR_GET_DEFAULT(isDaAccount_, false) };
          inline AccountDeliveries& setIsDaAccount(bool isDaAccount) { DARABONBA_PTR_SET_VALUE(isDaAccount_, isDaAccount) };


          // logDeliveryStatus Field Functions 
          bool hasLogDeliveryStatus() const { return this->logDeliveryStatus_ != nullptr;};
          void deleteLogDeliveryStatus() { this->logDeliveryStatus_ = nullptr;};
          inline string getLogDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStatus_, "") };
          inline AccountDeliveries& setLogDeliveryStatus(string logDeliveryStatus) { DARABONBA_PTR_SET_VALUE(logDeliveryStatus_, logDeliveryStatus) };


          // logDeliveryUpdateTime Field Functions 
          bool hasLogDeliveryUpdateTime() const { return this->logDeliveryUpdateTime_ != nullptr;};
          void deleteLogDeliveryUpdateTime() { this->logDeliveryUpdateTime_ = nullptr;};
          inline string getLogDeliveryUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryUpdateTime_, "") };
          inline AccountDeliveries& setLogDeliveryUpdateTime(string logDeliveryUpdateTime) { DARABONBA_PTR_SET_VALUE(logDeliveryUpdateTime_, logDeliveryUpdateTime) };


        protected:
          // The UID of the source cloud account. This field is an int64 number.
          shared_ptr<int64_t> accountId_ {};
          // The display name of the source account. If the name is not obtained, the account UID string is used.
          shared_ptr<string> accountName_ {};
          // Indicates whether the account is the current management or target account (the current account). A value of true indicates the current account. A value of false indicates a member source account.
          shared_ptr<bool> isDaAccount_ {};
          // The recorded delivery status of the source account. Valid values:
          // - enable: Enabled.
          // - disable: Disabled.
          shared_ptr<string> logDeliveryStatus_ {};
          // The last update time of the delivery status for the source account. If no record is generated, this field is empty or not returned.
          // 
          // Use the UTC time format: yyyy-MM-ddTHH:mmZ
          shared_ptr<string> logDeliveryUpdateTime_ {};
        };

        virtual bool empty() const override { return this->accountDeliveries_ == nullptr
        && this->logCode_ == nullptr && this->logDeliveryGroup_ == nullptr && this->logDeliveryPermission_ == nullptr && this->logDeliveryStatus_ == nullptr && this->logDeliveryUpdateTime_ == nullptr
        && this->logName_ == nullptr && this->logSearchConditions_ == nullptr && this->logStoreExisted_ == nullptr && this->logStoreName_ == nullptr && this->logStoreTtl_ == nullptr
        && this->usedCapacity_ == nullptr; };
        // accountDeliveries Field Functions 
        bool hasAccountDeliveries() const { return this->accountDeliveries_ != nullptr;};
        void deleteAccountDeliveries() { this->accountDeliveries_ = nullptr;};
        inline const vector<SasLogStores::AccountDeliveries> & getAccountDeliveries() const { DARABONBA_PTR_GET_CONST(accountDeliveries_, vector<SasLogStores::AccountDeliveries>) };
        inline vector<SasLogStores::AccountDeliveries> getAccountDeliveries() { DARABONBA_PTR_GET(accountDeliveries_, vector<SasLogStores::AccountDeliveries>) };
        inline SasLogStores& setAccountDeliveries(const vector<SasLogStores::AccountDeliveries> & accountDeliveries) { DARABONBA_PTR_SET_VALUE(accountDeliveries_, accountDeliveries) };
        inline SasLogStores& setAccountDeliveries(vector<SasLogStores::AccountDeliveries> && accountDeliveries) { DARABONBA_PTR_SET_RVALUE(accountDeliveries_, accountDeliveries) };


        // logCode Field Functions 
        bool hasLogCode() const { return this->logCode_ != nullptr;};
        void deleteLogCode() { this->logCode_ = nullptr;};
        inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
        inline SasLogStores& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


        // logDeliveryGroup Field Functions 
        bool hasLogDeliveryGroup() const { return this->logDeliveryGroup_ != nullptr;};
        void deleteLogDeliveryGroup() { this->logDeliveryGroup_ = nullptr;};
        inline string getLogDeliveryGroup() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryGroup_, "") };
        inline SasLogStores& setLogDeliveryGroup(string logDeliveryGroup) { DARABONBA_PTR_SET_VALUE(logDeliveryGroup_, logDeliveryGroup) };


        // logDeliveryPermission Field Functions 
        bool hasLogDeliveryPermission() const { return this->logDeliveryPermission_ != nullptr;};
        void deleteLogDeliveryPermission() { this->logDeliveryPermission_ = nullptr;};
        inline string getLogDeliveryPermission() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryPermission_, "") };
        inline SasLogStores& setLogDeliveryPermission(string logDeliveryPermission) { DARABONBA_PTR_SET_VALUE(logDeliveryPermission_, logDeliveryPermission) };


        // logDeliveryStatus Field Functions 
        bool hasLogDeliveryStatus() const { return this->logDeliveryStatus_ != nullptr;};
        void deleteLogDeliveryStatus() { this->logDeliveryStatus_ = nullptr;};
        inline string getLogDeliveryStatus() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryStatus_, "") };
        inline SasLogStores& setLogDeliveryStatus(string logDeliveryStatus) { DARABONBA_PTR_SET_VALUE(logDeliveryStatus_, logDeliveryStatus) };


        // logDeliveryUpdateTime Field Functions 
        bool hasLogDeliveryUpdateTime() const { return this->logDeliveryUpdateTime_ != nullptr;};
        void deleteLogDeliveryUpdateTime() { this->logDeliveryUpdateTime_ = nullptr;};
        inline string getLogDeliveryUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(logDeliveryUpdateTime_, "") };
        inline SasLogStores& setLogDeliveryUpdateTime(string logDeliveryUpdateTime) { DARABONBA_PTR_SET_VALUE(logDeliveryUpdateTime_, logDeliveryUpdateTime) };


        // logName Field Functions 
        bool hasLogName() const { return this->logName_ != nullptr;};
        void deleteLogName() { this->logName_ = nullptr;};
        inline string getLogName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
        inline SasLogStores& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


        // logSearchConditions Field Functions 
        bool hasLogSearchConditions() const { return this->logSearchConditions_ != nullptr;};
        void deleteLogSearchConditions() { this->logSearchConditions_ = nullptr;};
        inline string getLogSearchConditions() const { DARABONBA_PTR_GET_DEFAULT(logSearchConditions_, "") };
        inline SasLogStores& setLogSearchConditions(string logSearchConditions) { DARABONBA_PTR_SET_VALUE(logSearchConditions_, logSearchConditions) };


        // logStoreExisted Field Functions 
        bool hasLogStoreExisted() const { return this->logStoreExisted_ != nullptr;};
        void deleteLogStoreExisted() { this->logStoreExisted_ = nullptr;};
        inline bool getLogStoreExisted() const { DARABONBA_PTR_GET_DEFAULT(logStoreExisted_, false) };
        inline SasLogStores& setLogStoreExisted(bool logStoreExisted) { DARABONBA_PTR_SET_VALUE(logStoreExisted_, logStoreExisted) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline SasLogStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // logStoreTtl Field Functions 
        bool hasLogStoreTtl() const { return this->logStoreTtl_ != nullptr;};
        void deleteLogStoreTtl() { this->logStoreTtl_ = nullptr;};
        inline int32_t getLogStoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreTtl_, 0) };
        inline SasLogStores& setLogStoreTtl(int32_t logStoreTtl) { DARABONBA_PTR_SET_VALUE(logStoreTtl_, logStoreTtl) };


        // usedCapacity Field Functions 
        bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
        void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
        inline double getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0.0) };
        inline SasLogStores& setUsedCapacity(double usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


      protected:
        // The delivery records of this log type expanded by source account, including the current account and member accounts with existing records.
        shared_ptr<vector<SasLogStores::AccountDeliveries>> accountDeliveries_ {};
        // The log code.
        shared_ptr<string> logCode_ {};
        // The group to which the log belongs. Valid values:
        // - host: Host logs.
        // - security: Security logs.
        shared_ptr<string> logDeliveryGroup_ {};
        // Specifies whether the log delivery switch can be operated. Log delivery is unavailable if the service is not purchased. Valid values:
        // - allow: Allowed.
        // - deny: Not allowed.
        shared_ptr<string> logDeliveryPermission_ {};
        // The log delivery status. Valid values:
        // - enable: Log delivery is enabled.
        // - disable: Log delivery is disabled.
        shared_ptr<string> logDeliveryStatus_ {};
        // The time of the last log delivery operation. The format is YYYY-MM-DDTHH:mm:ss.
        shared_ptr<string> logDeliveryUpdateTime_ {};
        // The log name.
        shared_ptr<string> logName_ {};
        // The default query conditions for the log. When multiple logs are stored in a single Logstore, you must use query conditions to perform a log query for a specific log.
        shared_ptr<string> logSearchConditions_ {};
        // Indicates whether the Logstore where the log is stored exists. Valid values:
        // - true: Exists.
        // - false: Does not exist.
        shared_ptr<bool> logStoreExisted_ {};
        // The name of the Logstore where the log is stored.
        shared_ptr<string> logStoreName_ {};
        // The storage duration of the Logstore where the log is stored. The minimum storage duration is 30 days.
        shared_ptr<int32_t> logStoreTtl_ {};
        // The amount of hot storage used.
        shared_ptr<double> usedCapacity_ {};
      };

      class RecordLogStores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecordLogStores& obj) { 
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(LogStoreTtl, logStoreTtl_);
          DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, RecordLogStores& obj) { 
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(LogStoreTtl, logStoreTtl_);
          DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
        };
        RecordLogStores() = default ;
        RecordLogStores(const RecordLogStores &) = default ;
        RecordLogStores(RecordLogStores &&) = default ;
        RecordLogStores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecordLogStores() = default ;
        RecordLogStores& operator=(const RecordLogStores &) = default ;
        RecordLogStores& operator=(RecordLogStores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logStoreName_ == nullptr
        && this->logStoreTtl_ == nullptr && this->usedCapacity_ == nullptr; };
        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline RecordLogStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // logStoreTtl Field Functions 
        bool hasLogStoreTtl() const { return this->logStoreTtl_ != nullptr;};
        void deleteLogStoreTtl() { this->logStoreTtl_ = nullptr;};
        inline int32_t getLogStoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreTtl_, 0) };
        inline RecordLogStores& setLogStoreTtl(int32_t logStoreTtl) { DARABONBA_PTR_SET_VALUE(logStoreTtl_, logStoreTtl) };


        // usedCapacity Field Functions 
        bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
        void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
        inline double getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0.0) };
        inline RecordLogStores& setUsedCapacity(double usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


      protected:
        // The name of the Logstore.
        shared_ptr<string> logStoreName_ {};
        // The TTL of the Logstore.
        shared_ptr<int32_t> logStoreTtl_ {};
        // The used capacity of the Logstore.
        shared_ptr<double> usedCapacity_ {};
      };

      class NormalizationLogViews : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalizationLogViews& obj) { 
          DARABONBA_PTR_TO_JSON(ActivityName, activityName_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(DetectionRuleReferenceCount, detectionRuleReferenceCount_);
          DARABONBA_PTR_TO_JSON(DetectionRuleReferenceProductIds, detectionRuleReferenceProductIds_);
          DARABONBA_PTR_TO_JSON(LogSearchConditions, logSearchConditions_);
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(LogViewExisted, logViewExisted_);
          DARABONBA_PTR_TO_JSON(LogViewName, logViewName_);
        };
        friend void from_json(const Darabonba::Json& j, NormalizationLogViews& obj) { 
          DARABONBA_PTR_FROM_JSON(ActivityName, activityName_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(DetectionRuleReferenceCount, detectionRuleReferenceCount_);
          DARABONBA_PTR_FROM_JSON(DetectionRuleReferenceProductIds, detectionRuleReferenceProductIds_);
          DARABONBA_PTR_FROM_JSON(LogSearchConditions, logSearchConditions_);
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(LogViewExisted, logViewExisted_);
          DARABONBA_PTR_FROM_JSON(LogViewName, logViewName_);
        };
        NormalizationLogViews() = default ;
        NormalizationLogViews(const NormalizationLogViews &) = default ;
        NormalizationLogViews(NormalizationLogViews &&) = default ;
        NormalizationLogViews(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NormalizationLogViews() = default ;
        NormalizationLogViews& operator=(const NormalizationLogViews &) = default ;
        NormalizationLogViews& operator=(NormalizationLogViews &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activityName_ == nullptr
        && this->categoryName_ == nullptr && this->detectionRuleReferenceCount_ == nullptr && this->detectionRuleReferenceProductIds_ == nullptr && this->logSearchConditions_ == nullptr && this->logStoreName_ == nullptr
        && this->logViewExisted_ == nullptr && this->logViewName_ == nullptr; };
        // activityName Field Functions 
        bool hasActivityName() const { return this->activityName_ != nullptr;};
        void deleteActivityName() { this->activityName_ = nullptr;};
        inline string getActivityName() const { DARABONBA_PTR_GET_DEFAULT(activityName_, "") };
        inline NormalizationLogViews& setActivityName(string activityName) { DARABONBA_PTR_SET_VALUE(activityName_, activityName) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline NormalizationLogViews& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // detectionRuleReferenceCount Field Functions 
        bool hasDetectionRuleReferenceCount() const { return this->detectionRuleReferenceCount_ != nullptr;};
        void deleteDetectionRuleReferenceCount() { this->detectionRuleReferenceCount_ = nullptr;};
        inline int32_t getDetectionRuleReferenceCount() const { DARABONBA_PTR_GET_DEFAULT(detectionRuleReferenceCount_, 0) };
        inline NormalizationLogViews& setDetectionRuleReferenceCount(int32_t detectionRuleReferenceCount) { DARABONBA_PTR_SET_VALUE(detectionRuleReferenceCount_, detectionRuleReferenceCount) };


        // detectionRuleReferenceProductIds Field Functions 
        bool hasDetectionRuleReferenceProductIds() const { return this->detectionRuleReferenceProductIds_ != nullptr;};
        void deleteDetectionRuleReferenceProductIds() { this->detectionRuleReferenceProductIds_ = nullptr;};
        inline const vector<string> & getDetectionRuleReferenceProductIds() const { DARABONBA_PTR_GET_CONST(detectionRuleReferenceProductIds_, vector<string>) };
        inline vector<string> getDetectionRuleReferenceProductIds() { DARABONBA_PTR_GET(detectionRuleReferenceProductIds_, vector<string>) };
        inline NormalizationLogViews& setDetectionRuleReferenceProductIds(const vector<string> & detectionRuleReferenceProductIds) { DARABONBA_PTR_SET_VALUE(detectionRuleReferenceProductIds_, detectionRuleReferenceProductIds) };
        inline NormalizationLogViews& setDetectionRuleReferenceProductIds(vector<string> && detectionRuleReferenceProductIds) { DARABONBA_PTR_SET_RVALUE(detectionRuleReferenceProductIds_, detectionRuleReferenceProductIds) };


        // logSearchConditions Field Functions 
        bool hasLogSearchConditions() const { return this->logSearchConditions_ != nullptr;};
        void deleteLogSearchConditions() { this->logSearchConditions_ = nullptr;};
        inline string getLogSearchConditions() const { DARABONBA_PTR_GET_DEFAULT(logSearchConditions_, "") };
        inline NormalizationLogViews& setLogSearchConditions(string logSearchConditions) { DARABONBA_PTR_SET_VALUE(logSearchConditions_, logSearchConditions) };


        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline NormalizationLogViews& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // logViewExisted Field Functions 
        bool hasLogViewExisted() const { return this->logViewExisted_ != nullptr;};
        void deleteLogViewExisted() { this->logViewExisted_ = nullptr;};
        inline bool getLogViewExisted() const { DARABONBA_PTR_GET_DEFAULT(logViewExisted_, false) };
        inline NormalizationLogViews& setLogViewExisted(bool logViewExisted) { DARABONBA_PTR_SET_VALUE(logViewExisted_, logViewExisted) };


        // logViewName Field Functions 
        bool hasLogViewName() const { return this->logViewName_ != nullptr;};
        void deleteLogViewName() { this->logViewName_ = nullptr;};
        inline string getLogViewName() const { DARABONBA_PTR_GET_DEFAULT(logViewName_, "") };
        inline NormalizationLogViews& setLogViewName(string logViewName) { DARABONBA_PTR_SET_VALUE(logViewName_, logViewName) };


      protected:
        // The log type of the normalized logs.
        shared_ptr<string> activityName_ {};
        // The category of the normalized logs.
        shared_ptr<string> categoryName_ {};
        // The number of times this normalized dataset is referenced in Threat Analysis and Response.
        shared_ptr<int32_t> detectionRuleReferenceCount_ {};
        // The list of products that reference this normalized dataset in Threat Analysis and Response.
        shared_ptr<vector<string>> detectionRuleReferenceProductIds_ {};
        // The query statement used to query log types in the normalized dataset.
        shared_ptr<string> logSearchConditions_ {};
        // The Logstore where Threat Analysis and Response stores normalized logs.
        shared_ptr<string> logStoreName_ {};
        // Specifies whether the normalized dataset exists. Valid values:
        // - true: The dataset exists.
        // - false: The dataset does not exist.
        shared_ptr<bool> logViewExisted_ {};
        // The name of the normalized dataset.
        shared_ptr<string> logViewName_ {};
      };

      class NormalizationLogStores : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalizationLogStores& obj) { 
          DARABONBA_PTR_TO_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_TO_JSON(LogStoreTtl, logStoreTtl_);
          DARABONBA_PTR_TO_JSON(UsedCapacity, usedCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, NormalizationLogStores& obj) { 
          DARABONBA_PTR_FROM_JSON(LogStoreName, logStoreName_);
          DARABONBA_PTR_FROM_JSON(LogStoreTtl, logStoreTtl_);
          DARABONBA_PTR_FROM_JSON(UsedCapacity, usedCapacity_);
        };
        NormalizationLogStores() = default ;
        NormalizationLogStores(const NormalizationLogStores &) = default ;
        NormalizationLogStores(NormalizationLogStores &&) = default ;
        NormalizationLogStores(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NormalizationLogStores() = default ;
        NormalizationLogStores& operator=(const NormalizationLogStores &) = default ;
        NormalizationLogStores& operator=(NormalizationLogStores &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->logStoreName_ == nullptr
        && this->logStoreTtl_ == nullptr && this->usedCapacity_ == nullptr; };
        // logStoreName Field Functions 
        bool hasLogStoreName() const { return this->logStoreName_ != nullptr;};
        void deleteLogStoreName() { this->logStoreName_ = nullptr;};
        inline string getLogStoreName() const { DARABONBA_PTR_GET_DEFAULT(logStoreName_, "") };
        inline NormalizationLogStores& setLogStoreName(string logStoreName) { DARABONBA_PTR_SET_VALUE(logStoreName_, logStoreName) };


        // logStoreTtl Field Functions 
        bool hasLogStoreTtl() const { return this->logStoreTtl_ != nullptr;};
        void deleteLogStoreTtl() { this->logStoreTtl_ = nullptr;};
        inline int32_t getLogStoreTtl() const { DARABONBA_PTR_GET_DEFAULT(logStoreTtl_, 0) };
        inline NormalizationLogStores& setLogStoreTtl(int32_t logStoreTtl) { DARABONBA_PTR_SET_VALUE(logStoreTtl_, logStoreTtl) };


        // usedCapacity Field Functions 
        bool hasUsedCapacity() const { return this->usedCapacity_ != nullptr;};
        void deleteUsedCapacity() { this->usedCapacity_ = nullptr;};
        inline double getUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(usedCapacity_, 0.0) };
        inline NormalizationLogStores& setUsedCapacity(double usedCapacity) { DARABONBA_PTR_SET_VALUE(usedCapacity_, usedCapacity) };


      protected:
        // The name of the Logstore that stores normalized data.
        shared_ptr<string> logStoreName_ {};
        // The storage duration of the normalized data.
        shared_ptr<int32_t> logStoreTtl_ {};
        // The amount of hot storage used.
        shared_ptr<double> usedCapacity_ {};
      };

      class DeliverySettings : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeliverySettings& obj) { 
          DARABONBA_PTR_TO_JSON(Accounts, accounts_);
          DARABONBA_PTR_TO_JSON(CanConfigure, canConfigure_);
          DARABONBA_PTR_TO_JSON(ConfigurationVersion, configurationVersion_);
          DARABONBA_PTR_TO_JSON(DaAccountId, daAccountId_);
          DARABONBA_PTR_TO_JSON(Enabled, enabled_);
          DARABONBA_PTR_TO_JSON(Initialized, initialized_);
          DARABONBA_PTR_TO_JSON(PrerequisiteEnabled, prerequisiteEnabled_);
          DARABONBA_PTR_TO_JSON(TargetProject, targetProject_);
          DARABONBA_PTR_TO_JSON(TargetRegion, targetRegion_);
          DARABONBA_PTR_TO_JSON(Types, types_);
          DARABONBA_PTR_TO_JSON(UnavailableReason, unavailableReason_);
        };
        friend void from_json(const Darabonba::Json& j, DeliverySettings& obj) { 
          DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
          DARABONBA_PTR_FROM_JSON(CanConfigure, canConfigure_);
          DARABONBA_PTR_FROM_JSON(ConfigurationVersion, configurationVersion_);
          DARABONBA_PTR_FROM_JSON(DaAccountId, daAccountId_);
          DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
          DARABONBA_PTR_FROM_JSON(Initialized, initialized_);
          DARABONBA_PTR_FROM_JSON(PrerequisiteEnabled, prerequisiteEnabled_);
          DARABONBA_PTR_FROM_JSON(TargetProject, targetProject_);
          DARABONBA_PTR_FROM_JSON(TargetRegion, targetRegion_);
          DARABONBA_PTR_FROM_JSON(Types, types_);
          DARABONBA_PTR_FROM_JSON(UnavailableReason, unavailableReason_);
        };
        DeliverySettings() = default ;
        DeliverySettings(const DeliverySettings &) = default ;
        DeliverySettings(DeliverySettings &&) = default ;
        DeliverySettings(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeliverySettings() = default ;
        DeliverySettings& operator=(const DeliverySettings &) = default ;
        DeliverySettings& operator=(DeliverySettings &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Types : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Types& obj) { 
            DARABONBA_PTR_TO_JSON(AutoIncludeNewAccounts, autoIncludeNewAccounts_);
            DARABONBA_PTR_TO_JSON(Executions, executions_);
            DARABONBA_PTR_TO_JSON(LogCode, logCode_);
            DARABONBA_PTR_TO_JSON(SelectedAccountIds, selectedAccountIds_);
          };
          friend void from_json(const Darabonba::Json& j, Types& obj) { 
            DARABONBA_PTR_FROM_JSON(AutoIncludeNewAccounts, autoIncludeNewAccounts_);
            DARABONBA_PTR_FROM_JSON(Executions, executions_);
            DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
            DARABONBA_PTR_FROM_JSON(SelectedAccountIds, selectedAccountIds_);
          };
          Types() = default ;
          Types(const Types &) = default ;
          Types(Types &&) = default ;
          Types(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Types() = default ;
          Types& operator=(const Types &) = default ;
          Types& operator=(Types &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Executions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Executions& obj) { 
              DARABONBA_PTR_TO_JSON(AccountId, accountId_);
              DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
            };
            friend void from_json(const Darabonba::Json& j, Executions& obj) { 
              DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
              DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
            };
            Executions() = default ;
            Executions(const Executions &) = default ;
            Executions(Executions &&) = default ;
            Executions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Executions() = default ;
            Executions& operator=(const Executions &) = default ;
            Executions& operator=(Executions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->accountId_ == nullptr
        && this->errorCode_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
            // accountId Field Functions 
            bool hasAccountId() const { return this->accountId_ != nullptr;};
            void deleteAccountId() { this->accountId_ = nullptr;};
            inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
            inline Executions& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


            // errorCode Field Functions 
            bool hasErrorCode() const { return this->errorCode_ != nullptr;};
            void deleteErrorCode() { this->errorCode_ = nullptr;};
            inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
            inline Executions& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
            inline Executions& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


            // updateTime Field Functions 
            bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
            void deleteUpdateTime() { this->updateTime_ = nullptr;};
            inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
            inline Executions& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


          protected:
            // The UID of the source account for this delivery record, which is a decimal string.
            shared_ptr<string> accountId_ {};
            // A reserved compatibility field. The current implementation does not populate historical execution error codes, so this field is usually empty or not returned. If execution fails, read the error code returned by the corresponding write operation.
            shared_ptr<string> errorCode_ {};
            // The recorded delivery status. RUNNING indicates that the status is recorded as enabled after the last successful operation. STOPPED indicates that the status is recorded as disabled. This field does not indicate real-time log arrival.
            shared_ptr<string> status_ {};
            // The last update time of the delivery status, which is a UNIX timestamp in milliseconds. This field is empty or not returned if the record has no update time.
            shared_ptr<int64_t> updateTime_ {};
          };

          virtual bool empty() const override { return this->autoIncludeNewAccounts_ == nullptr
        && this->executions_ == nullptr && this->logCode_ == nullptr && this->selectedAccountIds_ == nullptr; };
          // autoIncludeNewAccounts Field Functions 
          bool hasAutoIncludeNewAccounts() const { return this->autoIncludeNewAccounts_ != nullptr;};
          void deleteAutoIncludeNewAccounts() { this->autoIncludeNewAccounts_ = nullptr;};
          inline bool getAutoIncludeNewAccounts() const { DARABONBA_PTR_GET_DEFAULT(autoIncludeNewAccounts_, false) };
          inline Types& setAutoIncludeNewAccounts(bool autoIncludeNewAccounts) { DARABONBA_PTR_SET_VALUE(autoIncludeNewAccounts_, autoIncludeNewAccounts) };


          // executions Field Functions 
          bool hasExecutions() const { return this->executions_ != nullptr;};
          void deleteExecutions() { this->executions_ = nullptr;};
          inline const vector<Types::Executions> & getExecutions() const { DARABONBA_PTR_GET_CONST(executions_, vector<Types::Executions>) };
          inline vector<Types::Executions> getExecutions() { DARABONBA_PTR_GET(executions_, vector<Types::Executions>) };
          inline Types& setExecutions(const vector<Types::Executions> & executions) { DARABONBA_PTR_SET_VALUE(executions_, executions) };
          inline Types& setExecutions(vector<Types::Executions> && executions) { DARABONBA_PTR_SET_RVALUE(executions_, executions) };


          // logCode Field Functions 
          bool hasLogCode() const { return this->logCode_ != nullptr;};
          void deleteLogCode() { this->logCode_ = nullptr;};
          inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
          inline Types& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


          // selectedAccountIds Field Functions 
          bool hasSelectedAccountIds() const { return this->selectedAccountIds_ != nullptr;};
          void deleteSelectedAccountIds() { this->selectedAccountIds_ = nullptr;};
          inline const vector<string> & getSelectedAccountIds() const { DARABONBA_PTR_GET_CONST(selectedAccountIds_, vector<string>) };
          inline vector<string> getSelectedAccountIds() { DARABONBA_PTR_GET(selectedAccountIds_, vector<string>) };
          inline Types& setSelectedAccountIds(const vector<string> & selectedAccountIds) { DARABONBA_PTR_SET_VALUE(selectedAccountIds_, selectedAccountIds) };
          inline Types& setSelectedAccountIds(vector<string> && selectedAccountIds) { DARABONBA_PTR_SET_RVALUE(selectedAccountIds_, selectedAccountIds) };


        protected:
          // Specifies whether to automatically add subsequent new and available managed members to the selection scope of this log type.
          shared_ptr<bool> autoIncludeNewAccounts_ {};
          // The status list of existing source delivery records for this log type.
          shared_ptr<vector<Types::Executions>> executions_ {};
          // The unique identifier of the log type, which corresponds to UpdateDataStorageDelivery.LogCode.
          shared_ptr<string> logCode_ {};
          // The array of UIDs of the selected source accounts for this log type, including the current account. The response is a JSON string array. When you write an array(simple) request, you must serialize it into comma-separated values.
          shared_ptr<vector<string>> selectedAccountIds_ {};
        };

        class Accounts : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
            DARABONBA_PTR_TO_JSON(AccountId, accountId_);
            DARABONBA_PTR_TO_JSON(AccountName, accountName_);
            DARABONBA_PTR_TO_JSON(Authorized, authorized_);
            DARABONBA_PTR_TO_JSON(DaAccount, daAccount_);
          };
          friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
            DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
            DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
            DARABONBA_PTR_FROM_JSON(Authorized, authorized_);
            DARABONBA_PTR_FROM_JSON(DaAccount, daAccount_);
          };
          Accounts() = default ;
          Accounts(const Accounts &) = default ;
          Accounts(Accounts &&) = default ;
          Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Accounts() = default ;
          Accounts& operator=(const Accounts &) = default ;
          Accounts& operator=(Accounts &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->accountId_ == nullptr
        && this->accountName_ == nullptr && this->authorized_ == nullptr && this->daAccount_ == nullptr; };
          // accountId Field Functions 
          bool hasAccountId() const { return this->accountId_ != nullptr;};
          void deleteAccountId() { this->accountId_ = nullptr;};
          inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
          inline Accounts& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


          // accountName Field Functions 
          bool hasAccountName() const { return this->accountName_ != nullptr;};
          void deleteAccountName() { this->accountName_ = nullptr;};
          inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
          inline Accounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


          // authorized Field Functions 
          bool hasAuthorized() const { return this->authorized_ != nullptr;};
          void deleteAuthorized() { this->authorized_ = nullptr;};
          inline bool getAuthorized() const { DARABONBA_PTR_GET_DEFAULT(authorized_, false) };
          inline Accounts& setAuthorized(bool authorized) { DARABONBA_PTR_SET_VALUE(authorized_, authorized) };


          // daAccount Field Functions 
          bool hasDaAccount() const { return this->daAccount_ != nullptr;};
          void deleteDaAccount() { this->daAccount_ = nullptr;};
          inline bool getDaAccount() const { DARABONBA_PTR_GET_DEFAULT(daAccount_, false) };
          inline Accounts& setDaAccount(bool daAccount) { DARABONBA_PTR_SET_VALUE(daAccount_, daAccount) };


        protected:
          // The UID of the source Alibaba Cloud account, which is a decimal string.
          shared_ptr<string> accountId_ {};
          // The display name of the account. If the name is missing, the UID string is returned.
          shared_ptr<string> accountName_ {};
          // Specifies whether the account has the authorization required for log delivery. This parameter must be set to true when you add a selected member.
          shared_ptr<bool> authorized_ {};
          // Specifies whether the account is the current management and delivery target account, which is the current account.
          shared_ptr<bool> daAccount_ {};
        };

        virtual bool empty() const override { return this->accounts_ == nullptr
        && this->canConfigure_ == nullptr && this->configurationVersion_ == nullptr && this->daAccountId_ == nullptr && this->enabled_ == nullptr && this->initialized_ == nullptr
        && this->prerequisiteEnabled_ == nullptr && this->targetProject_ == nullptr && this->targetRegion_ == nullptr && this->types_ == nullptr && this->unavailableReason_ == nullptr; };
        // accounts Field Functions 
        bool hasAccounts() const { return this->accounts_ != nullptr;};
        void deleteAccounts() { this->accounts_ = nullptr;};
        inline const vector<DeliverySettings::Accounts> & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, vector<DeliverySettings::Accounts>) };
        inline vector<DeliverySettings::Accounts> getAccounts() { DARABONBA_PTR_GET(accounts_, vector<DeliverySettings::Accounts>) };
        inline DeliverySettings& setAccounts(const vector<DeliverySettings::Accounts> & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
        inline DeliverySettings& setAccounts(vector<DeliverySettings::Accounts> && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


        // canConfigure Field Functions 
        bool hasCanConfigure() const { return this->canConfigure_ != nullptr;};
        void deleteCanConfigure() { this->canConfigure_ = nullptr;};
        inline bool getCanConfigure() const { DARABONBA_PTR_GET_DEFAULT(canConfigure_, false) };
        inline DeliverySettings& setCanConfigure(bool canConfigure) { DARABONBA_PTR_SET_VALUE(canConfigure_, canConfigure) };


        // configurationVersion Field Functions 
        bool hasConfigurationVersion() const { return this->configurationVersion_ != nullptr;};
        void deleteConfigurationVersion() { this->configurationVersion_ = nullptr;};
        inline int64_t getConfigurationVersion() const { DARABONBA_PTR_GET_DEFAULT(configurationVersion_, 0L) };
        inline DeliverySettings& setConfigurationVersion(int64_t configurationVersion) { DARABONBA_PTR_SET_VALUE(configurationVersion_, configurationVersion) };


        // daAccountId Field Functions 
        bool hasDaAccountId() const { return this->daAccountId_ != nullptr;};
        void deleteDaAccountId() { this->daAccountId_ = nullptr;};
        inline string getDaAccountId() const { DARABONBA_PTR_GET_DEFAULT(daAccountId_, "") };
        inline DeliverySettings& setDaAccountId(string daAccountId) { DARABONBA_PTR_SET_VALUE(daAccountId_, daAccountId) };


        // enabled Field Functions 
        bool hasEnabled() const { return this->enabled_ != nullptr;};
        void deleteEnabled() { this->enabled_ = nullptr;};
        inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
        inline DeliverySettings& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


        // initialized Field Functions 
        bool hasInitialized() const { return this->initialized_ != nullptr;};
        void deleteInitialized() { this->initialized_ = nullptr;};
        inline bool getInitialized() const { DARABONBA_PTR_GET_DEFAULT(initialized_, false) };
        inline DeliverySettings& setInitialized(bool initialized) { DARABONBA_PTR_SET_VALUE(initialized_, initialized) };


        // prerequisiteEnabled Field Functions 
        bool hasPrerequisiteEnabled() const { return this->prerequisiteEnabled_ != nullptr;};
        void deletePrerequisiteEnabled() { this->prerequisiteEnabled_ = nullptr;};
        inline bool getPrerequisiteEnabled() const { DARABONBA_PTR_GET_DEFAULT(prerequisiteEnabled_, false) };
        inline DeliverySettings& setPrerequisiteEnabled(bool prerequisiteEnabled) { DARABONBA_PTR_SET_VALUE(prerequisiteEnabled_, prerequisiteEnabled) };


        // targetProject Field Functions 
        bool hasTargetProject() const { return this->targetProject_ != nullptr;};
        void deleteTargetProject() { this->targetProject_ = nullptr;};
        inline string getTargetProject() const { DARABONBA_PTR_GET_DEFAULT(targetProject_, "") };
        inline DeliverySettings& setTargetProject(string targetProject) { DARABONBA_PTR_SET_VALUE(targetProject_, targetProject) };


        // targetRegion Field Functions 
        bool hasTargetRegion() const { return this->targetRegion_ != nullptr;};
        void deleteTargetRegion() { this->targetRegion_ = nullptr;};
        inline string getTargetRegion() const { DARABONBA_PTR_GET_DEFAULT(targetRegion_, "") };
        inline DeliverySettings& setTargetRegion(string targetRegion) { DARABONBA_PTR_SET_VALUE(targetRegion_, targetRegion) };


        // types Field Functions 
        bool hasTypes() const { return this->types_ != nullptr;};
        void deleteTypes() { this->types_ = nullptr;};
        inline const vector<DeliverySettings::Types> & getTypes() const { DARABONBA_PTR_GET_CONST(types_, vector<DeliverySettings::Types>) };
        inline vector<DeliverySettings::Types> getTypes() { DARABONBA_PTR_GET(types_, vector<DeliverySettings::Types>) };
        inline DeliverySettings& setTypes(const vector<DeliverySettings::Types> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
        inline DeliverySettings& setTypes(vector<DeliverySettings::Types> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


        // unavailableReason Field Functions 
        bool hasUnavailableReason() const { return this->unavailableReason_ != nullptr;};
        void deleteUnavailableReason() { this->unavailableReason_ = nullptr;};
        inline string getUnavailableReason() const { DARABONBA_PTR_GET_DEFAULT(unavailableReason_, "") };
        inline DeliverySettings& setUnavailableReason(string unavailableReason) { DARABONBA_PTR_SET_VALUE(unavailableReason_, unavailableReason) };


      protected:
        // The account directory of the current account and managed member accounts.
        shared_ptr<vector<DeliverySettings::Accounts>> accounts_ {};
        // Specifies whether the current account meets the conditions for delivery setting operations. This is determined based on authorization, target project availability, capacity orders, and the current account identity. The PrerequisiteEnabled parameter must also be met.
        shared_ptr<bool> canConfigure_ {};
        // The current version of the delivery settings. When you modify multi-account configurations or specify member delivery, pass this value back as ConfigurationVersion. You must query this value again after each modification and cannot use a fixed example value.
        shared_ptr<int64_t> configurationVersion_ {};
        // The UID of the current management and delivery target account, which is a decimal string. This is also the current account that is permanently retained in the account selection list.
        shared_ptr<string> daAccountId_ {};
        // The master switch for the saved multi-account centralized delivery. A value of true indicates that the switch is turned on. A value of false indicates that the switch is turned off.
        shared_ptr<bool> enabled_ {};
        // Specifies whether the initialization of the account scope and automatic inclusion settings is completed when the feature is enabled for the first time.
        shared_ptr<bool> initialized_ {};
        // Specifies whether the prerequisite of enabling multi-account security management in Security Center is met.
        shared_ptr<bool> prerequisiteEnabled_ {};
        // The name of the current Simple Log Service project for centralized delivery. When you modify multi-account settings or specify member delivery, pass this value back as the TargetProject request parameter.
        shared_ptr<string> targetProject_ {};
        // The region ID of the current Simple Log Service project for centralized delivery.
        shared_ptr<string> targetRegion_ {};
        // The account selection, automatic inclusion settings, and existing delivery status categorized by log type.
        shared_ptr<vector<DeliverySettings::Types>> types_ {};
        // The reason code for being unconfigurable. Valid values: DA_UNAUTHORIZED (the management account is not authorized), TARGET_PROJECT_UNAVAILABLE (the target project is unavailable), LOG_CAPACITY_UNAVAILABLE (no valid capacity order exists), and NOT_CURRENT_ACCOUNT (the operation is not performed by the current account). This field is empty or not returned if the conditions are met.
        shared_ptr<string> unavailableReason_ {};
      };

      virtual bool empty() const override { return this->coldStorageUsedCapacity_ == nullptr
        && this->dataStorageRegionId_ == nullptr && this->dataStorageRegionPermission_ == nullptr && this->dataStorageTotalCapacity_ == nullptr && this->dataStorageUsedCapacity_ == nullptr && this->dataStorageUsedCapacityDetail_ == nullptr
        && this->deliverySettings_ == nullptr && this->deliverySettingsError_ == nullptr && this->logProject_ == nullptr && this->logProjectState_ == nullptr && this->logProjectStateChangeAllowed_ == nullptr
        && this->logServiceDisabled_ == nullptr && this->normalizationLogStores_ == nullptr && this->normalizationLogViews_ == nullptr && this->recordLogStores_ == nullptr && this->sasLogStores_ == nullptr
        && this->unusedLogStores_ == nullptr; };
      // coldStorageUsedCapacity Field Functions 
      bool hasColdStorageUsedCapacity() const { return this->coldStorageUsedCapacity_ != nullptr;};
      void deleteColdStorageUsedCapacity() { this->coldStorageUsedCapacity_ = nullptr;};
      inline double getColdStorageUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(coldStorageUsedCapacity_, 0.0) };
      inline Data& setColdStorageUsedCapacity(double coldStorageUsedCapacity) { DARABONBA_PTR_SET_VALUE(coldStorageUsedCapacity_, coldStorageUsedCapacity) };


      // dataStorageRegionId Field Functions 
      bool hasDataStorageRegionId() const { return this->dataStorageRegionId_ != nullptr;};
      void deleteDataStorageRegionId() { this->dataStorageRegionId_ = nullptr;};
      inline string getDataStorageRegionId() const { DARABONBA_PTR_GET_DEFAULT(dataStorageRegionId_, "") };
      inline Data& setDataStorageRegionId(string dataStorageRegionId) { DARABONBA_PTR_SET_VALUE(dataStorageRegionId_, dataStorageRegionId) };


      // dataStorageRegionPermission Field Functions 
      bool hasDataStorageRegionPermission() const { return this->dataStorageRegionPermission_ != nullptr;};
      void deleteDataStorageRegionPermission() { this->dataStorageRegionPermission_ = nullptr;};
      inline string getDataStorageRegionPermission() const { DARABONBA_PTR_GET_DEFAULT(dataStorageRegionPermission_, "") };
      inline Data& setDataStorageRegionPermission(string dataStorageRegionPermission) { DARABONBA_PTR_SET_VALUE(dataStorageRegionPermission_, dataStorageRegionPermission) };


      // dataStorageTotalCapacity Field Functions 
      bool hasDataStorageTotalCapacity() const { return this->dataStorageTotalCapacity_ != nullptr;};
      void deleteDataStorageTotalCapacity() { this->dataStorageTotalCapacity_ = nullptr;};
      inline int64_t getDataStorageTotalCapacity() const { DARABONBA_PTR_GET_DEFAULT(dataStorageTotalCapacity_, 0L) };
      inline Data& setDataStorageTotalCapacity(int64_t dataStorageTotalCapacity) { DARABONBA_PTR_SET_VALUE(dataStorageTotalCapacity_, dataStorageTotalCapacity) };


      // dataStorageUsedCapacity Field Functions 
      bool hasDataStorageUsedCapacity() const { return this->dataStorageUsedCapacity_ != nullptr;};
      void deleteDataStorageUsedCapacity() { this->dataStorageUsedCapacity_ = nullptr;};
      inline double getDataStorageUsedCapacity() const { DARABONBA_PTR_GET_DEFAULT(dataStorageUsedCapacity_, 0.0) };
      inline Data& setDataStorageUsedCapacity(double dataStorageUsedCapacity) { DARABONBA_PTR_SET_VALUE(dataStorageUsedCapacity_, dataStorageUsedCapacity) };


      // dataStorageUsedCapacityDetail Field Functions 
      bool hasDataStorageUsedCapacityDetail() const { return this->dataStorageUsedCapacityDetail_ != nullptr;};
      void deleteDataStorageUsedCapacityDetail() { this->dataStorageUsedCapacityDetail_ = nullptr;};
      inline string getDataStorageUsedCapacityDetail() const { DARABONBA_PTR_GET_DEFAULT(dataStorageUsedCapacityDetail_, "") };
      inline Data& setDataStorageUsedCapacityDetail(string dataStorageUsedCapacityDetail) { DARABONBA_PTR_SET_VALUE(dataStorageUsedCapacityDetail_, dataStorageUsedCapacityDetail) };


      // deliverySettings Field Functions 
      bool hasDeliverySettings() const { return this->deliverySettings_ != nullptr;};
      void deleteDeliverySettings() { this->deliverySettings_ = nullptr;};
      inline const Data::DeliverySettings & getDeliverySettings() const { DARABONBA_PTR_GET_CONST(deliverySettings_, Data::DeliverySettings) };
      inline Data::DeliverySettings getDeliverySettings() { DARABONBA_PTR_GET(deliverySettings_, Data::DeliverySettings) };
      inline Data& setDeliverySettings(const Data::DeliverySettings & deliverySettings) { DARABONBA_PTR_SET_VALUE(deliverySettings_, deliverySettings) };
      inline Data& setDeliverySettings(Data::DeliverySettings && deliverySettings) { DARABONBA_PTR_SET_RVALUE(deliverySettings_, deliverySettings) };


      // deliverySettingsError Field Functions 
      bool hasDeliverySettingsError() const { return this->deliverySettingsError_ != nullptr;};
      void deleteDeliverySettingsError() { this->deliverySettingsError_ = nullptr;};
      inline string getDeliverySettingsError() const { DARABONBA_PTR_GET_DEFAULT(deliverySettingsError_, "") };
      inline Data& setDeliverySettingsError(string deliverySettingsError) { DARABONBA_PTR_SET_VALUE(deliverySettingsError_, deliverySettingsError) };


      // logProject Field Functions 
      bool hasLogProject() const { return this->logProject_ != nullptr;};
      void deleteLogProject() { this->logProject_ = nullptr;};
      inline string getLogProject() const { DARABONBA_PTR_GET_DEFAULT(logProject_, "") };
      inline Data& setLogProject(string logProject) { DARABONBA_PTR_SET_VALUE(logProject_, logProject) };


      // logProjectState Field Functions 
      bool hasLogProjectState() const { return this->logProjectState_ != nullptr;};
      void deleteLogProjectState() { this->logProjectState_ = nullptr;};
      inline string getLogProjectState() const { DARABONBA_PTR_GET_DEFAULT(logProjectState_, "") };
      inline Data& setLogProjectState(string logProjectState) { DARABONBA_PTR_SET_VALUE(logProjectState_, logProjectState) };


      // logProjectStateChangeAllowed Field Functions 
      bool hasLogProjectStateChangeAllowed() const { return this->logProjectStateChangeAllowed_ != nullptr;};
      void deleteLogProjectStateChangeAllowed() { this->logProjectStateChangeAllowed_ = nullptr;};
      inline bool getLogProjectStateChangeAllowed() const { DARABONBA_PTR_GET_DEFAULT(logProjectStateChangeAllowed_, false) };
      inline Data& setLogProjectStateChangeAllowed(bool logProjectStateChangeAllowed) { DARABONBA_PTR_SET_VALUE(logProjectStateChangeAllowed_, logProjectStateChangeAllowed) };


      // logServiceDisabled Field Functions 
      bool hasLogServiceDisabled() const { return this->logServiceDisabled_ != nullptr;};
      void deleteLogServiceDisabled() { this->logServiceDisabled_ = nullptr;};
      inline bool getLogServiceDisabled() const { DARABONBA_PTR_GET_DEFAULT(logServiceDisabled_, false) };
      inline Data& setLogServiceDisabled(bool logServiceDisabled) { DARABONBA_PTR_SET_VALUE(logServiceDisabled_, logServiceDisabled) };


      // normalizationLogStores Field Functions 
      bool hasNormalizationLogStores() const { return this->normalizationLogStores_ != nullptr;};
      void deleteNormalizationLogStores() { this->normalizationLogStores_ = nullptr;};
      inline const vector<Data::NormalizationLogStores> & getNormalizationLogStores() const { DARABONBA_PTR_GET_CONST(normalizationLogStores_, vector<Data::NormalizationLogStores>) };
      inline vector<Data::NormalizationLogStores> getNormalizationLogStores() { DARABONBA_PTR_GET(normalizationLogStores_, vector<Data::NormalizationLogStores>) };
      inline Data& setNormalizationLogStores(const vector<Data::NormalizationLogStores> & normalizationLogStores) { DARABONBA_PTR_SET_VALUE(normalizationLogStores_, normalizationLogStores) };
      inline Data& setNormalizationLogStores(vector<Data::NormalizationLogStores> && normalizationLogStores) { DARABONBA_PTR_SET_RVALUE(normalizationLogStores_, normalizationLogStores) };


      // normalizationLogViews Field Functions 
      bool hasNormalizationLogViews() const { return this->normalizationLogViews_ != nullptr;};
      void deleteNormalizationLogViews() { this->normalizationLogViews_ = nullptr;};
      inline const vector<Data::NormalizationLogViews> & getNormalizationLogViews() const { DARABONBA_PTR_GET_CONST(normalizationLogViews_, vector<Data::NormalizationLogViews>) };
      inline vector<Data::NormalizationLogViews> getNormalizationLogViews() { DARABONBA_PTR_GET(normalizationLogViews_, vector<Data::NormalizationLogViews>) };
      inline Data& setNormalizationLogViews(const vector<Data::NormalizationLogViews> & normalizationLogViews) { DARABONBA_PTR_SET_VALUE(normalizationLogViews_, normalizationLogViews) };
      inline Data& setNormalizationLogViews(vector<Data::NormalizationLogViews> && normalizationLogViews) { DARABONBA_PTR_SET_RVALUE(normalizationLogViews_, normalizationLogViews) };


      // recordLogStores Field Functions 
      bool hasRecordLogStores() const { return this->recordLogStores_ != nullptr;};
      void deleteRecordLogStores() { this->recordLogStores_ = nullptr;};
      inline const vector<Data::RecordLogStores> & getRecordLogStores() const { DARABONBA_PTR_GET_CONST(recordLogStores_, vector<Data::RecordLogStores>) };
      inline vector<Data::RecordLogStores> getRecordLogStores() { DARABONBA_PTR_GET(recordLogStores_, vector<Data::RecordLogStores>) };
      inline Data& setRecordLogStores(const vector<Data::RecordLogStores> & recordLogStores) { DARABONBA_PTR_SET_VALUE(recordLogStores_, recordLogStores) };
      inline Data& setRecordLogStores(vector<Data::RecordLogStores> && recordLogStores) { DARABONBA_PTR_SET_RVALUE(recordLogStores_, recordLogStores) };


      // sasLogStores Field Functions 
      bool hasSasLogStores() const { return this->sasLogStores_ != nullptr;};
      void deleteSasLogStores() { this->sasLogStores_ = nullptr;};
      inline const vector<Data::SasLogStores> & getSasLogStores() const { DARABONBA_PTR_GET_CONST(sasLogStores_, vector<Data::SasLogStores>) };
      inline vector<Data::SasLogStores> getSasLogStores() { DARABONBA_PTR_GET(sasLogStores_, vector<Data::SasLogStores>) };
      inline Data& setSasLogStores(const vector<Data::SasLogStores> & sasLogStores) { DARABONBA_PTR_SET_VALUE(sasLogStores_, sasLogStores) };
      inline Data& setSasLogStores(vector<Data::SasLogStores> && sasLogStores) { DARABONBA_PTR_SET_RVALUE(sasLogStores_, sasLogStores) };


      // unusedLogStores Field Functions 
      bool hasUnusedLogStores() const { return this->unusedLogStores_ != nullptr;};
      void deleteUnusedLogStores() { this->unusedLogStores_ = nullptr;};
      inline const vector<Data::UnusedLogStores> & getUnusedLogStores() const { DARABONBA_PTR_GET_CONST(unusedLogStores_, vector<Data::UnusedLogStores>) };
      inline vector<Data::UnusedLogStores> getUnusedLogStores() { DARABONBA_PTR_GET(unusedLogStores_, vector<Data::UnusedLogStores>) };
      inline Data& setUnusedLogStores(const vector<Data::UnusedLogStores> & unusedLogStores) { DARABONBA_PTR_SET_VALUE(unusedLogStores_, unusedLogStores) };
      inline Data& setUnusedLogStores(vector<Data::UnusedLogStores> && unusedLogStores) { DARABONBA_PTR_SET_RVALUE(unusedLogStores_, unusedLogStores) };


    protected:
      // The amount of cold storage used for user logs.
      shared_ptr<double> coldStorageUsedCapacity_ {};
      // The storage region of user logs.
      shared_ptr<string> dataStorageRegionId_ {};
      // Specifies whether the storage region can be modified. By default, the region cannot be modified. You can contact the product manager to reset the region, and the region can be reset only once. Valid values:
      // - allow: The region can be modified.
      // - deny: The region cannot be modified.
      shared_ptr<string> dataStorageRegionPermission_ {};
      // The storage capacity purchased for subscription.
      shared_ptr<int64_t> dataStorageTotalCapacity_ {};
      // The amount of storage used in user log management.
      shared_ptr<double> dataStorageUsedCapacity_ {};
      // The storage usage details of the log management user.
      shared_ptr<string> dataStorageUsedCapacityDetail_ {};
      // The multi-account delivery settings for the current storage resources. Returned when the query is successful. If the read operation fails, see DeliverySettingsError.
      shared_ptr<Data::DeliverySettings> deliverySettings_ {};
      // The read error code for the optional multi-account delivery settings. If the read operation fails, DELIVERY_SETTINGS_UNAVAILABLE is returned. If the read operation is successful, this field is empty or not returned, and does not affect other storage fields.
      shared_ptr<string> deliverySettingsError_ {};
      // The name of the Simple Log Service project where user logs are stored.
      shared_ptr<string> logProject_ {};
      // The status of the log project.
      shared_ptr<string> logProjectState_ {};
      // Specifies whether the status of the log project can be changed.
      shared_ptr<bool> logProjectStateChangeAllowed_ {};
      // Specifies whether Simple Log Service is disabled.
      shared_ptr<bool> logServiceDisabled_ {};
      // The details of the Logstores for normalized data.
      shared_ptr<vector<Data::NormalizationLogStores>> normalizationLogStores_ {};
      // The details of the normalized datasets.
      shared_ptr<vector<Data::NormalizationLogViews>> normalizationLogViews_ {};
      // The list of Record Logstores.
      shared_ptr<vector<Data::RecordLogStores>> recordLogStores_ {};
      // The storage details of raw logs in Security Center.
      shared_ptr<vector<Data::SasLogStores>> sasLogStores_ {};
      // The list of legacy Logstores in SIEM V1.
      shared_ptr<vector<Data::UnusedLogStores>> unusedLogStores_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataStorageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataStorageResponseBody::Data) };
    inline GetDataStorageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataStorageResponseBody::Data) };
    inline GetDataStorageResponseBody& setData(const GetDataStorageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataStorageResponseBody& setData(GetDataStorageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataStorageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The detailed information returned.
    shared_ptr<GetDataStorageResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
