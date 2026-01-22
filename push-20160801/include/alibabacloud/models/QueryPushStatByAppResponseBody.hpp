// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSTATBYAPPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSTATBYAPPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushStatByAppResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushStatByAppResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppPushStats, appPushStats_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushStatByAppResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppPushStats, appPushStats_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPushStatByAppResponseBody() = default ;
    QueryPushStatByAppResponseBody(const QueryPushStatByAppResponseBody &) = default ;
    QueryPushStatByAppResponseBody(QueryPushStatByAppResponseBody &&) = default ;
    QueryPushStatByAppResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushStatByAppResponseBody() = default ;
    QueryPushStatByAppResponseBody& operator=(const QueryPushStatByAppResponseBody &) = default ;
    QueryPushStatByAppResponseBody& operator=(QueryPushStatByAppResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppPushStats : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppPushStats& obj) { 
        DARABONBA_PTR_TO_JSON(AppPushStat, appPushStat_);
      };
      friend void from_json(const Darabonba::Json& j, AppPushStats& obj) { 
        DARABONBA_PTR_FROM_JSON(AppPushStat, appPushStat_);
      };
      AppPushStats() = default ;
      AppPushStats(const AppPushStats &) = default ;
      AppPushStats(AppPushStats &&) = default ;
      AppPushStats(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppPushStats() = default ;
      AppPushStats& operator=(const AppPushStats &) = default ;
      AppPushStats& operator=(AppPushStats &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AppPushStat : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppPushStat& obj) { 
          DARABONBA_PTR_TO_JSON(AcceptCount, acceptCount_);
          DARABONBA_PTR_TO_JSON(DeletedCount, deletedCount_);
          DARABONBA_PTR_TO_JSON(OpenedCount, openedCount_);
          DARABONBA_PTR_TO_JSON(ReceivedCount, receivedCount_);
          DARABONBA_PTR_TO_JSON(SentCount, sentCount_);
          DARABONBA_PTR_TO_JSON(SmsFailedCount, smsFailedCount_);
          DARABONBA_PTR_TO_JSON(SmsReceiveFailedCount, smsReceiveFailedCount_);
          DARABONBA_PTR_TO_JSON(SmsReceiveSuccessCount, smsReceiveSuccessCount_);
          DARABONBA_PTR_TO_JSON(SmsSentCount, smsSentCount_);
          DARABONBA_PTR_TO_JSON(SmsSkipCount, smsSkipCount_);
          DARABONBA_PTR_TO_JSON(Time, time_);
        };
        friend void from_json(const Darabonba::Json& j, AppPushStat& obj) { 
          DARABONBA_PTR_FROM_JSON(AcceptCount, acceptCount_);
          DARABONBA_PTR_FROM_JSON(DeletedCount, deletedCount_);
          DARABONBA_PTR_FROM_JSON(OpenedCount, openedCount_);
          DARABONBA_PTR_FROM_JSON(ReceivedCount, receivedCount_);
          DARABONBA_PTR_FROM_JSON(SentCount, sentCount_);
          DARABONBA_PTR_FROM_JSON(SmsFailedCount, smsFailedCount_);
          DARABONBA_PTR_FROM_JSON(SmsReceiveFailedCount, smsReceiveFailedCount_);
          DARABONBA_PTR_FROM_JSON(SmsReceiveSuccessCount, smsReceiveSuccessCount_);
          DARABONBA_PTR_FROM_JSON(SmsSentCount, smsSentCount_);
          DARABONBA_PTR_FROM_JSON(SmsSkipCount, smsSkipCount_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
        };
        AppPushStat() = default ;
        AppPushStat(const AppPushStat &) = default ;
        AppPushStat(AppPushStat &&) = default ;
        AppPushStat(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppPushStat() = default ;
        AppPushStat& operator=(const AppPushStat &) = default ;
        AppPushStat& operator=(AppPushStat &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->acceptCount_ == nullptr
        && this->deletedCount_ == nullptr && this->openedCount_ == nullptr && this->receivedCount_ == nullptr && this->sentCount_ == nullptr && this->smsFailedCount_ == nullptr
        && this->smsReceiveFailedCount_ == nullptr && this->smsReceiveSuccessCount_ == nullptr && this->smsSentCount_ == nullptr && this->smsSkipCount_ == nullptr && this->time_ == nullptr; };
        // acceptCount Field Functions 
        bool hasAcceptCount() const { return this->acceptCount_ != nullptr;};
        void deleteAcceptCount() { this->acceptCount_ = nullptr;};
        inline int64_t getAcceptCount() const { DARABONBA_PTR_GET_DEFAULT(acceptCount_, 0L) };
        inline AppPushStat& setAcceptCount(int64_t acceptCount) { DARABONBA_PTR_SET_VALUE(acceptCount_, acceptCount) };


        // deletedCount Field Functions 
        bool hasDeletedCount() const { return this->deletedCount_ != nullptr;};
        void deleteDeletedCount() { this->deletedCount_ = nullptr;};
        inline int64_t getDeletedCount() const { DARABONBA_PTR_GET_DEFAULT(deletedCount_, 0L) };
        inline AppPushStat& setDeletedCount(int64_t deletedCount) { DARABONBA_PTR_SET_VALUE(deletedCount_, deletedCount) };


        // openedCount Field Functions 
        bool hasOpenedCount() const { return this->openedCount_ != nullptr;};
        void deleteOpenedCount() { this->openedCount_ = nullptr;};
        inline int64_t getOpenedCount() const { DARABONBA_PTR_GET_DEFAULT(openedCount_, 0L) };
        inline AppPushStat& setOpenedCount(int64_t openedCount) { DARABONBA_PTR_SET_VALUE(openedCount_, openedCount) };


        // receivedCount Field Functions 
        bool hasReceivedCount() const { return this->receivedCount_ != nullptr;};
        void deleteReceivedCount() { this->receivedCount_ = nullptr;};
        inline int64_t getReceivedCount() const { DARABONBA_PTR_GET_DEFAULT(receivedCount_, 0L) };
        inline AppPushStat& setReceivedCount(int64_t receivedCount) { DARABONBA_PTR_SET_VALUE(receivedCount_, receivedCount) };


        // sentCount Field Functions 
        bool hasSentCount() const { return this->sentCount_ != nullptr;};
        void deleteSentCount() { this->sentCount_ = nullptr;};
        inline int64_t getSentCount() const { DARABONBA_PTR_GET_DEFAULT(sentCount_, 0L) };
        inline AppPushStat& setSentCount(int64_t sentCount) { DARABONBA_PTR_SET_VALUE(sentCount_, sentCount) };


        // smsFailedCount Field Functions 
        bool hasSmsFailedCount() const { return this->smsFailedCount_ != nullptr;};
        void deleteSmsFailedCount() { this->smsFailedCount_ = nullptr;};
        inline int64_t getSmsFailedCount() const { DARABONBA_PTR_GET_DEFAULT(smsFailedCount_, 0L) };
        inline AppPushStat& setSmsFailedCount(int64_t smsFailedCount) { DARABONBA_PTR_SET_VALUE(smsFailedCount_, smsFailedCount) };


        // smsReceiveFailedCount Field Functions 
        bool hasSmsReceiveFailedCount() const { return this->smsReceiveFailedCount_ != nullptr;};
        void deleteSmsReceiveFailedCount() { this->smsReceiveFailedCount_ = nullptr;};
        inline int64_t getSmsReceiveFailedCount() const { DARABONBA_PTR_GET_DEFAULT(smsReceiveFailedCount_, 0L) };
        inline AppPushStat& setSmsReceiveFailedCount(int64_t smsReceiveFailedCount) { DARABONBA_PTR_SET_VALUE(smsReceiveFailedCount_, smsReceiveFailedCount) };


        // smsReceiveSuccessCount Field Functions 
        bool hasSmsReceiveSuccessCount() const { return this->smsReceiveSuccessCount_ != nullptr;};
        void deleteSmsReceiveSuccessCount() { this->smsReceiveSuccessCount_ = nullptr;};
        inline int64_t getSmsReceiveSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(smsReceiveSuccessCount_, 0L) };
        inline AppPushStat& setSmsReceiveSuccessCount(int64_t smsReceiveSuccessCount) { DARABONBA_PTR_SET_VALUE(smsReceiveSuccessCount_, smsReceiveSuccessCount) };


        // smsSentCount Field Functions 
        bool hasSmsSentCount() const { return this->smsSentCount_ != nullptr;};
        void deleteSmsSentCount() { this->smsSentCount_ = nullptr;};
        inline int64_t getSmsSentCount() const { DARABONBA_PTR_GET_DEFAULT(smsSentCount_, 0L) };
        inline AppPushStat& setSmsSentCount(int64_t smsSentCount) { DARABONBA_PTR_SET_VALUE(smsSentCount_, smsSentCount) };


        // smsSkipCount Field Functions 
        bool hasSmsSkipCount() const { return this->smsSkipCount_ != nullptr;};
        void deleteSmsSkipCount() { this->smsSkipCount_ = nullptr;};
        inline int64_t getSmsSkipCount() const { DARABONBA_PTR_GET_DEFAULT(smsSkipCount_, 0L) };
        inline AppPushStat& setSmsSkipCount(int64_t smsSkipCount) { DARABONBA_PTR_SET_VALUE(smsSkipCount_, smsSkipCount) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline AppPushStat& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      protected:
        shared_ptr<int64_t> acceptCount_ {};
        shared_ptr<int64_t> deletedCount_ {};
        shared_ptr<int64_t> openedCount_ {};
        shared_ptr<int64_t> receivedCount_ {};
        shared_ptr<int64_t> sentCount_ {};
        shared_ptr<int64_t> smsFailedCount_ {};
        shared_ptr<int64_t> smsReceiveFailedCount_ {};
        shared_ptr<int64_t> smsReceiveSuccessCount_ {};
        shared_ptr<int64_t> smsSentCount_ {};
        shared_ptr<int64_t> smsSkipCount_ {};
        shared_ptr<string> time_ {};
      };

      virtual bool empty() const override { return this->appPushStat_ == nullptr; };
      // appPushStat Field Functions 
      bool hasAppPushStat() const { return this->appPushStat_ != nullptr;};
      void deleteAppPushStat() { this->appPushStat_ = nullptr;};
      inline const vector<AppPushStats::AppPushStat> & getAppPushStat() const { DARABONBA_PTR_GET_CONST(appPushStat_, vector<AppPushStats::AppPushStat>) };
      inline vector<AppPushStats::AppPushStat> getAppPushStat() { DARABONBA_PTR_GET(appPushStat_, vector<AppPushStats::AppPushStat>) };
      inline AppPushStats& setAppPushStat(const vector<AppPushStats::AppPushStat> & appPushStat) { DARABONBA_PTR_SET_VALUE(appPushStat_, appPushStat) };
      inline AppPushStats& setAppPushStat(vector<AppPushStats::AppPushStat> && appPushStat) { DARABONBA_PTR_SET_RVALUE(appPushStat_, appPushStat) };


    protected:
      shared_ptr<vector<AppPushStats::AppPushStat>> appPushStat_ {};
    };

    virtual bool empty() const override { return this->appPushStats_ == nullptr
        && this->requestId_ == nullptr; };
    // appPushStats Field Functions 
    bool hasAppPushStats() const { return this->appPushStats_ != nullptr;};
    void deleteAppPushStats() { this->appPushStats_ = nullptr;};
    inline const QueryPushStatByAppResponseBody::AppPushStats & getAppPushStats() const { DARABONBA_PTR_GET_CONST(appPushStats_, QueryPushStatByAppResponseBody::AppPushStats) };
    inline QueryPushStatByAppResponseBody::AppPushStats getAppPushStats() { DARABONBA_PTR_GET(appPushStats_, QueryPushStatByAppResponseBody::AppPushStats) };
    inline QueryPushStatByAppResponseBody& setAppPushStats(const QueryPushStatByAppResponseBody::AppPushStats & appPushStats) { DARABONBA_PTR_SET_VALUE(appPushStats_, appPushStats) };
    inline QueryPushStatByAppResponseBody& setAppPushStats(QueryPushStatByAppResponseBody::AppPushStats && appPushStats) { DARABONBA_PTR_SET_RVALUE(appPushStats_, appPushStats) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPushStatByAppResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryPushStatByAppResponseBody::AppPushStats> appPushStats_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
