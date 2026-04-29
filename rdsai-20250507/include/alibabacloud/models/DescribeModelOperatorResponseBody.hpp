// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODELOPERATORRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DescribeModelOperatorResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModelOperatorResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModelOperatorResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeModelOperatorResponseBody() = default ;
    DescribeModelOperatorResponseBody(const DescribeModelOperatorResponseBody &) = default ;
    DescribeModelOperatorResponseBody(DescribeModelOperatorResponseBody &&) = default ;
    DescribeModelOperatorResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModelOperatorResponseBody() = default ;
    DescribeModelOperatorResponseBody& operator=(const DescribeModelOperatorResponseBody &) = default ;
    DescribeModelOperatorResponseBody& operator=(DescribeModelOperatorResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_TO_JSON(DailyUsage, dailyUsage_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InstanceClass, instanceClass_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(KeyUsageList, keyUsageList_);
        DARABONBA_PTR_TO_JSON(PrefixCacheEnabled, prefixCacheEnabled_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(BaseUrl, baseUrl_);
        DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
        DARABONBA_PTR_FROM_JSON(DailyUsage, dailyUsage_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InstanceClass, instanceClass_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(KeyUsageList, keyUsageList_);
        DARABONBA_PTR_FROM_JSON(PrefixCacheEnabled, prefixCacheEnabled_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TotalQuota, totalQuota_);
        DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
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
      class KeyUsageList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const KeyUsageList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(DailyUsage, dailyUsage_);
          DARABONBA_PTR_TO_JSON(Deleted, deleted_);
          DARABONBA_PTR_TO_JSON(KeyName, keyName_);
          DARABONBA_PTR_TO_JSON(KeyType, keyType_);
          DARABONBA_PTR_TO_JSON(KeyUsed, keyUsed_);
          DARABONBA_PTR_TO_JSON(UsedQuota, usedQuota_);
        };
        friend void from_json(const Darabonba::Json& j, KeyUsageList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(DailyUsage, dailyUsage_);
          DARABONBA_PTR_FROM_JSON(Deleted, deleted_);
          DARABONBA_PTR_FROM_JSON(KeyName, keyName_);
          DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
          DARABONBA_PTR_FROM_JSON(KeyUsed, keyUsed_);
          DARABONBA_PTR_FROM_JSON(UsedQuota, usedQuota_);
        };
        KeyUsageList() = default ;
        KeyUsageList(const KeyUsageList &) = default ;
        KeyUsageList(KeyUsageList &&) = default ;
        KeyUsageList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~KeyUsageList() = default ;
        KeyUsageList& operator=(const KeyUsageList &) = default ;
        KeyUsageList& operator=(KeyUsageList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DailyUsage : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DailyUsage& obj) { 
            DARABONBA_PTR_TO_JSON(Date, date_);
            DARABONBA_PTR_TO_JSON(Usage, usage_);
          };
          friend void from_json(const Darabonba::Json& j, DailyUsage& obj) { 
            DARABONBA_PTR_FROM_JSON(Date, date_);
            DARABONBA_PTR_FROM_JSON(Usage, usage_);
          };
          DailyUsage() = default ;
          DailyUsage(const DailyUsage &) = default ;
          DailyUsage(DailyUsage &&) = default ;
          DailyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DailyUsage() = default ;
          DailyUsage& operator=(const DailyUsage &) = default ;
          DailyUsage& operator=(DailyUsage &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->date_ == nullptr
        && this->usage_ == nullptr; };
          // date Field Functions 
          bool hasDate() const { return this->date_ != nullptr;};
          void deleteDate() { this->date_ = nullptr;};
          inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
          inline DailyUsage& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


          // usage Field Functions 
          bool hasUsage() const { return this->usage_ != nullptr;};
          void deleteUsage() { this->usage_ = nullptr;};
          inline string getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, "") };
          inline DailyUsage& setUsage(string usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


        protected:
          shared_ptr<string> date_ {};
          shared_ptr<string> usage_ {};
        };

        virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->dailyUsage_ == nullptr && this->deleted_ == nullptr && this->keyName_ == nullptr && this->keyType_ == nullptr && this->keyUsed_ == nullptr
        && this->usedQuota_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline KeyUsageList& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // dailyUsage Field Functions 
        bool hasDailyUsage() const { return this->dailyUsage_ != nullptr;};
        void deleteDailyUsage() { this->dailyUsage_ = nullptr;};
        inline const vector<KeyUsageList::DailyUsage> & getDailyUsage() const { DARABONBA_PTR_GET_CONST(dailyUsage_, vector<KeyUsageList::DailyUsage>) };
        inline vector<KeyUsageList::DailyUsage> getDailyUsage() { DARABONBA_PTR_GET(dailyUsage_, vector<KeyUsageList::DailyUsage>) };
        inline KeyUsageList& setDailyUsage(const vector<KeyUsageList::DailyUsage> & dailyUsage) { DARABONBA_PTR_SET_VALUE(dailyUsage_, dailyUsage) };
        inline KeyUsageList& setDailyUsage(vector<KeyUsageList::DailyUsage> && dailyUsage) { DARABONBA_PTR_SET_RVALUE(dailyUsage_, dailyUsage) };


        // deleted Field Functions 
        bool hasDeleted() const { return this->deleted_ != nullptr;};
        void deleteDeleted() { this->deleted_ = nullptr;};
        inline bool getDeleted() const { DARABONBA_PTR_GET_DEFAULT(deleted_, false) };
        inline KeyUsageList& setDeleted(bool deleted) { DARABONBA_PTR_SET_VALUE(deleted_, deleted) };


        // keyName Field Functions 
        bool hasKeyName() const { return this->keyName_ != nullptr;};
        void deleteKeyName() { this->keyName_ = nullptr;};
        inline string getKeyName() const { DARABONBA_PTR_GET_DEFAULT(keyName_, "") };
        inline KeyUsageList& setKeyName(string keyName) { DARABONBA_PTR_SET_VALUE(keyName_, keyName) };


        // keyType Field Functions 
        bool hasKeyType() const { return this->keyType_ != nullptr;};
        void deleteKeyType() { this->keyType_ = nullptr;};
        inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
        inline KeyUsageList& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


        // keyUsed Field Functions 
        bool hasKeyUsed() const { return this->keyUsed_ != nullptr;};
        void deleteKeyUsed() { this->keyUsed_ = nullptr;};
        inline string getKeyUsed() const { DARABONBA_PTR_GET_DEFAULT(keyUsed_, "") };
        inline KeyUsageList& setKeyUsed(string keyUsed) { DARABONBA_PTR_SET_VALUE(keyUsed_, keyUsed) };


        // usedQuota Field Functions 
        bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
        void deleteUsedQuota() { this->usedQuota_ = nullptr;};
        inline string getUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, "") };
        inline KeyUsageList& setUsedQuota(string usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


      protected:
        // API Key
        shared_ptr<string> apiKey_ {};
        shared_ptr<vector<KeyUsageList::DailyUsage>> dailyUsage_ {};
        shared_ptr<bool> deleted_ {};
        shared_ptr<string> keyName_ {};
        shared_ptr<string> keyType_ {};
        shared_ptr<string> keyUsed_ {};
        shared_ptr<string> usedQuota_ {};
      };

      class DailyUsage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DailyUsage& obj) { 
          DARABONBA_PTR_TO_JSON(Date, date_);
          DARABONBA_PTR_TO_JSON(Usage, usage_);
        };
        friend void from_json(const Darabonba::Json& j, DailyUsage& obj) { 
          DARABONBA_PTR_FROM_JSON(Date, date_);
          DARABONBA_PTR_FROM_JSON(Usage, usage_);
        };
        DailyUsage() = default ;
        DailyUsage(const DailyUsage &) = default ;
        DailyUsage(DailyUsage &&) = default ;
        DailyUsage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DailyUsage() = default ;
        DailyUsage& operator=(const DailyUsage &) = default ;
        DailyUsage& operator=(DailyUsage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->date_ == nullptr
        && this->usage_ == nullptr; };
        // date Field Functions 
        bool hasDate() const { return this->date_ != nullptr;};
        void deleteDate() { this->date_ = nullptr;};
        inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
        inline DailyUsage& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


        // usage Field Functions 
        bool hasUsage() const { return this->usage_ != nullptr;};
        void deleteUsage() { this->usage_ = nullptr;};
        inline int64_t getUsage() const { DARABONBA_PTR_GET_DEFAULT(usage_, 0L) };
        inline DailyUsage& setUsage(int64_t usage) { DARABONBA_PTR_SET_VALUE(usage_, usage) };


      protected:
        shared_ptr<string> date_ {};
        shared_ptr<int64_t> usage_ {};
      };

      virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->autoRenew_ == nullptr && this->baseUrl_ == nullptr && this->chargeType_ == nullptr && this->dailyUsage_ == nullptr && this->endTime_ == nullptr
        && this->instanceClass_ == nullptr && this->instanceId_ == nullptr && this->keyUsageList_ == nullptr && this->prefixCacheEnabled_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->totalQuota_ == nullptr && this->usedQuota_ == nullptr; };
      // apiKey Field Functions 
      bool hasApiKey() const { return this->apiKey_ != nullptr;};
      void deleteApiKey() { this->apiKey_ = nullptr;};
      inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
      inline Data& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline Data& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // baseUrl Field Functions 
      bool hasBaseUrl() const { return this->baseUrl_ != nullptr;};
      void deleteBaseUrl() { this->baseUrl_ = nullptr;};
      inline string getBaseUrl() const { DARABONBA_PTR_GET_DEFAULT(baseUrl_, "") };
      inline Data& setBaseUrl(string baseUrl) { DARABONBA_PTR_SET_VALUE(baseUrl_, baseUrl) };


      // chargeType Field Functions 
      bool hasChargeType() const { return this->chargeType_ != nullptr;};
      void deleteChargeType() { this->chargeType_ = nullptr;};
      inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
      inline Data& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


      // dailyUsage Field Functions 
      bool hasDailyUsage() const { return this->dailyUsage_ != nullptr;};
      void deleteDailyUsage() { this->dailyUsage_ = nullptr;};
      inline const vector<Data::DailyUsage> & getDailyUsage() const { DARABONBA_PTR_GET_CONST(dailyUsage_, vector<Data::DailyUsage>) };
      inline vector<Data::DailyUsage> getDailyUsage() { DARABONBA_PTR_GET(dailyUsage_, vector<Data::DailyUsage>) };
      inline Data& setDailyUsage(const vector<Data::DailyUsage> & dailyUsage) { DARABONBA_PTR_SET_VALUE(dailyUsage_, dailyUsage) };
      inline Data& setDailyUsage(vector<Data::DailyUsage> && dailyUsage) { DARABONBA_PTR_SET_RVALUE(dailyUsage_, dailyUsage) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // instanceClass Field Functions 
      bool hasInstanceClass() const { return this->instanceClass_ != nullptr;};
      void deleteInstanceClass() { this->instanceClass_ = nullptr;};
      inline string getInstanceClass() const { DARABONBA_PTR_GET_DEFAULT(instanceClass_, "") };
      inline Data& setInstanceClass(string instanceClass) { DARABONBA_PTR_SET_VALUE(instanceClass_, instanceClass) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // keyUsageList Field Functions 
      bool hasKeyUsageList() const { return this->keyUsageList_ != nullptr;};
      void deleteKeyUsageList() { this->keyUsageList_ = nullptr;};
      inline const vector<Data::KeyUsageList> & getKeyUsageList() const { DARABONBA_PTR_GET_CONST(keyUsageList_, vector<Data::KeyUsageList>) };
      inline vector<Data::KeyUsageList> getKeyUsageList() { DARABONBA_PTR_GET(keyUsageList_, vector<Data::KeyUsageList>) };
      inline Data& setKeyUsageList(const vector<Data::KeyUsageList> & keyUsageList) { DARABONBA_PTR_SET_VALUE(keyUsageList_, keyUsageList) };
      inline Data& setKeyUsageList(vector<Data::KeyUsageList> && keyUsageList) { DARABONBA_PTR_SET_RVALUE(keyUsageList_, keyUsageList) };


      // prefixCacheEnabled Field Functions 
      bool hasPrefixCacheEnabled() const { return this->prefixCacheEnabled_ != nullptr;};
      void deletePrefixCacheEnabled() { this->prefixCacheEnabled_ = nullptr;};
      inline bool getPrefixCacheEnabled() const { DARABONBA_PTR_GET_DEFAULT(prefixCacheEnabled_, false) };
      inline Data& setPrefixCacheEnabled(bool prefixCacheEnabled) { DARABONBA_PTR_SET_VALUE(prefixCacheEnabled_, prefixCacheEnabled) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // totalQuota Field Functions 
      bool hasTotalQuota() const { return this->totalQuota_ != nullptr;};
      void deleteTotalQuota() { this->totalQuota_ = nullptr;};
      inline int64_t getTotalQuota() const { DARABONBA_PTR_GET_DEFAULT(totalQuota_, 0L) };
      inline Data& setTotalQuota(int64_t totalQuota) { DARABONBA_PTR_SET_VALUE(totalQuota_, totalQuota) };


      // usedQuota Field Functions 
      bool hasUsedQuota() const { return this->usedQuota_ != nullptr;};
      void deleteUsedQuota() { this->usedQuota_ = nullptr;};
      inline int64_t getUsedQuota() const { DARABONBA_PTR_GET_DEFAULT(usedQuota_, 0L) };
      inline Data& setUsedQuota(int64_t usedQuota) { DARABONBA_PTR_SET_VALUE(usedQuota_, usedQuota) };


    protected:
      shared_ptr<string> apiKey_ {};
      shared_ptr<bool> autoRenew_ {};
      shared_ptr<string> baseUrl_ {};
      shared_ptr<string> chargeType_ {};
      shared_ptr<vector<Data::DailyUsage>> dailyUsage_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<string> instanceClass_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<vector<Data::KeyUsageList>> keyUsageList_ {};
      shared_ptr<bool> prefixCacheEnabled_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> totalQuota_ {};
      shared_ptr<int64_t> usedQuota_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeModelOperatorResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeModelOperatorResponseBody::Data) };
    inline DescribeModelOperatorResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeModelOperatorResponseBody::Data) };
    inline DescribeModelOperatorResponseBody& setData(const DescribeModelOperatorResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeModelOperatorResponseBody& setData(DescribeModelOperatorResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeModelOperatorResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeModelOperatorResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeModelOperatorResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeModelOperatorResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
