// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSTATBYMSGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSTATBYMSGRESPONSEBODY_HPP_
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
  class QueryPushStatByMsgResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushStatByMsgResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PushStats, pushStats_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushStatByMsgResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PushStats, pushStats_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPushStatByMsgResponseBody() = default ;
    QueryPushStatByMsgResponseBody(const QueryPushStatByMsgResponseBody &) = default ;
    QueryPushStatByMsgResponseBody(QueryPushStatByMsgResponseBody &&) = default ;
    QueryPushStatByMsgResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushStatByMsgResponseBody() = default ;
    QueryPushStatByMsgResponseBody& operator=(const QueryPushStatByMsgResponseBody &) = default ;
    QueryPushStatByMsgResponseBody& operator=(QueryPushStatByMsgResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PushStats : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PushStats& obj) { 
        DARABONBA_PTR_TO_JSON(PushStat, pushStat_);
      };
      friend void from_json(const Darabonba::Json& j, PushStats& obj) { 
        DARABONBA_PTR_FROM_JSON(PushStat, pushStat_);
      };
      PushStats() = default ;
      PushStats(const PushStats &) = default ;
      PushStats(PushStats &&) = default ;
      PushStats(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PushStats() = default ;
      PushStats& operator=(const PushStats &) = default ;
      PushStats& operator=(PushStats &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PushStat : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PushStat& obj) { 
          DARABONBA_PTR_TO_JSON(AcceptCount, acceptCount_);
          DARABONBA_PTR_TO_JSON(DeletedCount, deletedCount_);
          DARABONBA_PTR_TO_JSON(MessageId, messageId_);
          DARABONBA_PTR_TO_JSON(OpenedCount, openedCount_);
          DARABONBA_PTR_TO_JSON(ReceivedCount, receivedCount_);
          DARABONBA_PTR_TO_JSON(SentCount, sentCount_);
          DARABONBA_PTR_TO_JSON(SmsFailedCount, smsFailedCount_);
          DARABONBA_PTR_TO_JSON(SmsReceiveFailedCount, smsReceiveFailedCount_);
          DARABONBA_PTR_TO_JSON(SmsReceiveSuccessCount, smsReceiveSuccessCount_);
          DARABONBA_PTR_TO_JSON(SmsSentCount, smsSentCount_);
          DARABONBA_PTR_TO_JSON(SmsSkipCount, smsSkipCount_);
        };
        friend void from_json(const Darabonba::Json& j, PushStat& obj) { 
          DARABONBA_PTR_FROM_JSON(AcceptCount, acceptCount_);
          DARABONBA_PTR_FROM_JSON(DeletedCount, deletedCount_);
          DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
          DARABONBA_PTR_FROM_JSON(OpenedCount, openedCount_);
          DARABONBA_PTR_FROM_JSON(ReceivedCount, receivedCount_);
          DARABONBA_PTR_FROM_JSON(SentCount, sentCount_);
          DARABONBA_PTR_FROM_JSON(SmsFailedCount, smsFailedCount_);
          DARABONBA_PTR_FROM_JSON(SmsReceiveFailedCount, smsReceiveFailedCount_);
          DARABONBA_PTR_FROM_JSON(SmsReceiveSuccessCount, smsReceiveSuccessCount_);
          DARABONBA_PTR_FROM_JSON(SmsSentCount, smsSentCount_);
          DARABONBA_PTR_FROM_JSON(SmsSkipCount, smsSkipCount_);
        };
        PushStat() = default ;
        PushStat(const PushStat &) = default ;
        PushStat(PushStat &&) = default ;
        PushStat(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PushStat() = default ;
        PushStat& operator=(const PushStat &) = default ;
        PushStat& operator=(PushStat &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->acceptCount_ == nullptr
        && this->deletedCount_ == nullptr && this->messageId_ == nullptr && this->openedCount_ == nullptr && this->receivedCount_ == nullptr && this->sentCount_ == nullptr
        && this->smsFailedCount_ == nullptr && this->smsReceiveFailedCount_ == nullptr && this->smsReceiveSuccessCount_ == nullptr && this->smsSentCount_ == nullptr && this->smsSkipCount_ == nullptr; };
        // acceptCount Field Functions 
        bool hasAcceptCount() const { return this->acceptCount_ != nullptr;};
        void deleteAcceptCount() { this->acceptCount_ = nullptr;};
        inline int64_t getAcceptCount() const { DARABONBA_PTR_GET_DEFAULT(acceptCount_, 0L) };
        inline PushStat& setAcceptCount(int64_t acceptCount) { DARABONBA_PTR_SET_VALUE(acceptCount_, acceptCount) };


        // deletedCount Field Functions 
        bool hasDeletedCount() const { return this->deletedCount_ != nullptr;};
        void deleteDeletedCount() { this->deletedCount_ = nullptr;};
        inline int64_t getDeletedCount() const { DARABONBA_PTR_GET_DEFAULT(deletedCount_, 0L) };
        inline PushStat& setDeletedCount(int64_t deletedCount) { DARABONBA_PTR_SET_VALUE(deletedCount_, deletedCount) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline PushStat& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


        // openedCount Field Functions 
        bool hasOpenedCount() const { return this->openedCount_ != nullptr;};
        void deleteOpenedCount() { this->openedCount_ = nullptr;};
        inline int64_t getOpenedCount() const { DARABONBA_PTR_GET_DEFAULT(openedCount_, 0L) };
        inline PushStat& setOpenedCount(int64_t openedCount) { DARABONBA_PTR_SET_VALUE(openedCount_, openedCount) };


        // receivedCount Field Functions 
        bool hasReceivedCount() const { return this->receivedCount_ != nullptr;};
        void deleteReceivedCount() { this->receivedCount_ = nullptr;};
        inline int64_t getReceivedCount() const { DARABONBA_PTR_GET_DEFAULT(receivedCount_, 0L) };
        inline PushStat& setReceivedCount(int64_t receivedCount) { DARABONBA_PTR_SET_VALUE(receivedCount_, receivedCount) };


        // sentCount Field Functions 
        bool hasSentCount() const { return this->sentCount_ != nullptr;};
        void deleteSentCount() { this->sentCount_ = nullptr;};
        inline int64_t getSentCount() const { DARABONBA_PTR_GET_DEFAULT(sentCount_, 0L) };
        inline PushStat& setSentCount(int64_t sentCount) { DARABONBA_PTR_SET_VALUE(sentCount_, sentCount) };


        // smsFailedCount Field Functions 
        bool hasSmsFailedCount() const { return this->smsFailedCount_ != nullptr;};
        void deleteSmsFailedCount() { this->smsFailedCount_ = nullptr;};
        inline int64_t getSmsFailedCount() const { DARABONBA_PTR_GET_DEFAULT(smsFailedCount_, 0L) };
        inline PushStat& setSmsFailedCount(int64_t smsFailedCount) { DARABONBA_PTR_SET_VALUE(smsFailedCount_, smsFailedCount) };


        // smsReceiveFailedCount Field Functions 
        bool hasSmsReceiveFailedCount() const { return this->smsReceiveFailedCount_ != nullptr;};
        void deleteSmsReceiveFailedCount() { this->smsReceiveFailedCount_ = nullptr;};
        inline int64_t getSmsReceiveFailedCount() const { DARABONBA_PTR_GET_DEFAULT(smsReceiveFailedCount_, 0L) };
        inline PushStat& setSmsReceiveFailedCount(int64_t smsReceiveFailedCount) { DARABONBA_PTR_SET_VALUE(smsReceiveFailedCount_, smsReceiveFailedCount) };


        // smsReceiveSuccessCount Field Functions 
        bool hasSmsReceiveSuccessCount() const { return this->smsReceiveSuccessCount_ != nullptr;};
        void deleteSmsReceiveSuccessCount() { this->smsReceiveSuccessCount_ = nullptr;};
        inline int64_t getSmsReceiveSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(smsReceiveSuccessCount_, 0L) };
        inline PushStat& setSmsReceiveSuccessCount(int64_t smsReceiveSuccessCount) { DARABONBA_PTR_SET_VALUE(smsReceiveSuccessCount_, smsReceiveSuccessCount) };


        // smsSentCount Field Functions 
        bool hasSmsSentCount() const { return this->smsSentCount_ != nullptr;};
        void deleteSmsSentCount() { this->smsSentCount_ = nullptr;};
        inline int64_t getSmsSentCount() const { DARABONBA_PTR_GET_DEFAULT(smsSentCount_, 0L) };
        inline PushStat& setSmsSentCount(int64_t smsSentCount) { DARABONBA_PTR_SET_VALUE(smsSentCount_, smsSentCount) };


        // smsSkipCount Field Functions 
        bool hasSmsSkipCount() const { return this->smsSkipCount_ != nullptr;};
        void deleteSmsSkipCount() { this->smsSkipCount_ = nullptr;};
        inline int64_t getSmsSkipCount() const { DARABONBA_PTR_GET_DEFAULT(smsSkipCount_, 0L) };
        inline PushStat& setSmsSkipCount(int64_t smsSkipCount) { DARABONBA_PTR_SET_VALUE(smsSkipCount_, smsSkipCount) };


      protected:
        shared_ptr<int64_t> acceptCount_ {};
        shared_ptr<int64_t> deletedCount_ {};
        shared_ptr<string> messageId_ {};
        shared_ptr<int64_t> openedCount_ {};
        shared_ptr<int64_t> receivedCount_ {};
        shared_ptr<int64_t> sentCount_ {};
        shared_ptr<int64_t> smsFailedCount_ {};
        shared_ptr<int64_t> smsReceiveFailedCount_ {};
        shared_ptr<int64_t> smsReceiveSuccessCount_ {};
        shared_ptr<int64_t> smsSentCount_ {};
        shared_ptr<int64_t> smsSkipCount_ {};
      };

      virtual bool empty() const override { return this->pushStat_ == nullptr; };
      // pushStat Field Functions 
      bool hasPushStat() const { return this->pushStat_ != nullptr;};
      void deletePushStat() { this->pushStat_ = nullptr;};
      inline const vector<PushStats::PushStat> & getPushStat() const { DARABONBA_PTR_GET_CONST(pushStat_, vector<PushStats::PushStat>) };
      inline vector<PushStats::PushStat> getPushStat() { DARABONBA_PTR_GET(pushStat_, vector<PushStats::PushStat>) };
      inline PushStats& setPushStat(const vector<PushStats::PushStat> & pushStat) { DARABONBA_PTR_SET_VALUE(pushStat_, pushStat) };
      inline PushStats& setPushStat(vector<PushStats::PushStat> && pushStat) { DARABONBA_PTR_SET_RVALUE(pushStat_, pushStat) };


    protected:
      shared_ptr<vector<PushStats::PushStat>> pushStat_ {};
    };

    virtual bool empty() const override { return this->pushStats_ == nullptr
        && this->requestId_ == nullptr; };
    // pushStats Field Functions 
    bool hasPushStats() const { return this->pushStats_ != nullptr;};
    void deletePushStats() { this->pushStats_ = nullptr;};
    inline const QueryPushStatByMsgResponseBody::PushStats & getPushStats() const { DARABONBA_PTR_GET_CONST(pushStats_, QueryPushStatByMsgResponseBody::PushStats) };
    inline QueryPushStatByMsgResponseBody::PushStats getPushStats() { DARABONBA_PTR_GET(pushStats_, QueryPushStatByMsgResponseBody::PushStats) };
    inline QueryPushStatByMsgResponseBody& setPushStats(const QueryPushStatByMsgResponseBody::PushStats & pushStats) { DARABONBA_PTR_SET_VALUE(pushStats_, pushStats) };
    inline QueryPushStatByMsgResponseBody& setPushStats(QueryPushStatByMsgResponseBody::PushStats && pushStats) { DARABONBA_PTR_SET_RVALUE(pushStats_, pushStats) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPushStatByMsgResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryPushStatByMsgResponseBody::PushStats> pushStats_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
