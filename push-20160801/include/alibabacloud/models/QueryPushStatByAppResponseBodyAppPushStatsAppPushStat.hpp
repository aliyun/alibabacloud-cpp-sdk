// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHSTATBYAPPRESPONSEBODYAPPPUSHSTATSAPPPUSHSTAT_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHSTATBYAPPRESPONSEBODYAPPPUSHSTATSAPPPUSHSTAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Push20160801
{
namespace Models
{
  class QueryPushStatByAppResponseBodyAppPushStatsAppPushStat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& obj) { 
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
    QueryPushStatByAppResponseBodyAppPushStatsAppPushStat() = default ;
    QueryPushStatByAppResponseBodyAppPushStatsAppPushStat(const QueryPushStatByAppResponseBodyAppPushStatsAppPushStat &) = default ;
    QueryPushStatByAppResponseBodyAppPushStatsAppPushStat(QueryPushStatByAppResponseBodyAppPushStatsAppPushStat &&) = default ;
    QueryPushStatByAppResponseBodyAppPushStatsAppPushStat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushStatByAppResponseBodyAppPushStatsAppPushStat() = default ;
    QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& operator=(const QueryPushStatByAppResponseBodyAppPushStatsAppPushStat &) = default ;
    QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& operator=(QueryPushStatByAppResponseBodyAppPushStatsAppPushStat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptCount_ == nullptr
        && return this->deletedCount_ == nullptr && return this->openedCount_ == nullptr && return this->receivedCount_ == nullptr && return this->sentCount_ == nullptr && return this->smsFailedCount_ == nullptr
        && return this->smsReceiveFailedCount_ == nullptr && return this->smsReceiveSuccessCount_ == nullptr && return this->smsSentCount_ == nullptr && return this->smsSkipCount_ == nullptr && return this->time_ == nullptr; };
    // acceptCount Field Functions 
    bool hasAcceptCount() const { return this->acceptCount_ != nullptr;};
    void deleteAcceptCount() { this->acceptCount_ = nullptr;};
    inline int64_t acceptCount() const { DARABONBA_PTR_GET_DEFAULT(acceptCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setAcceptCount(int64_t acceptCount) { DARABONBA_PTR_SET_VALUE(acceptCount_, acceptCount) };


    // deletedCount Field Functions 
    bool hasDeletedCount() const { return this->deletedCount_ != nullptr;};
    void deleteDeletedCount() { this->deletedCount_ = nullptr;};
    inline int64_t deletedCount() const { DARABONBA_PTR_GET_DEFAULT(deletedCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setDeletedCount(int64_t deletedCount) { DARABONBA_PTR_SET_VALUE(deletedCount_, deletedCount) };


    // openedCount Field Functions 
    bool hasOpenedCount() const { return this->openedCount_ != nullptr;};
    void deleteOpenedCount() { this->openedCount_ = nullptr;};
    inline int64_t openedCount() const { DARABONBA_PTR_GET_DEFAULT(openedCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setOpenedCount(int64_t openedCount) { DARABONBA_PTR_SET_VALUE(openedCount_, openedCount) };


    // receivedCount Field Functions 
    bool hasReceivedCount() const { return this->receivedCount_ != nullptr;};
    void deleteReceivedCount() { this->receivedCount_ = nullptr;};
    inline int64_t receivedCount() const { DARABONBA_PTR_GET_DEFAULT(receivedCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setReceivedCount(int64_t receivedCount) { DARABONBA_PTR_SET_VALUE(receivedCount_, receivedCount) };


    // sentCount Field Functions 
    bool hasSentCount() const { return this->sentCount_ != nullptr;};
    void deleteSentCount() { this->sentCount_ = nullptr;};
    inline int64_t sentCount() const { DARABONBA_PTR_GET_DEFAULT(sentCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setSentCount(int64_t sentCount) { DARABONBA_PTR_SET_VALUE(sentCount_, sentCount) };


    // smsFailedCount Field Functions 
    bool hasSmsFailedCount() const { return this->smsFailedCount_ != nullptr;};
    void deleteSmsFailedCount() { this->smsFailedCount_ = nullptr;};
    inline int64_t smsFailedCount() const { DARABONBA_PTR_GET_DEFAULT(smsFailedCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setSmsFailedCount(int64_t smsFailedCount) { DARABONBA_PTR_SET_VALUE(smsFailedCount_, smsFailedCount) };


    // smsReceiveFailedCount Field Functions 
    bool hasSmsReceiveFailedCount() const { return this->smsReceiveFailedCount_ != nullptr;};
    void deleteSmsReceiveFailedCount() { this->smsReceiveFailedCount_ = nullptr;};
    inline int64_t smsReceiveFailedCount() const { DARABONBA_PTR_GET_DEFAULT(smsReceiveFailedCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setSmsReceiveFailedCount(int64_t smsReceiveFailedCount) { DARABONBA_PTR_SET_VALUE(smsReceiveFailedCount_, smsReceiveFailedCount) };


    // smsReceiveSuccessCount Field Functions 
    bool hasSmsReceiveSuccessCount() const { return this->smsReceiveSuccessCount_ != nullptr;};
    void deleteSmsReceiveSuccessCount() { this->smsReceiveSuccessCount_ = nullptr;};
    inline int64_t smsReceiveSuccessCount() const { DARABONBA_PTR_GET_DEFAULT(smsReceiveSuccessCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setSmsReceiveSuccessCount(int64_t smsReceiveSuccessCount) { DARABONBA_PTR_SET_VALUE(smsReceiveSuccessCount_, smsReceiveSuccessCount) };


    // smsSentCount Field Functions 
    bool hasSmsSentCount() const { return this->smsSentCount_ != nullptr;};
    void deleteSmsSentCount() { this->smsSentCount_ = nullptr;};
    inline int64_t smsSentCount() const { DARABONBA_PTR_GET_DEFAULT(smsSentCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setSmsSentCount(int64_t smsSentCount) { DARABONBA_PTR_SET_VALUE(smsSentCount_, smsSentCount) };


    // smsSkipCount Field Functions 
    bool hasSmsSkipCount() const { return this->smsSkipCount_ != nullptr;};
    void deleteSmsSkipCount() { this->smsSkipCount_ = nullptr;};
    inline int64_t smsSkipCount() const { DARABONBA_PTR_GET_DEFAULT(smsSkipCount_, 0L) };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setSmsSkipCount(int64_t smsSkipCount) { DARABONBA_PTR_SET_VALUE(smsSkipCount_, smsSkipCount) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QueryPushStatByAppResponseBodyAppPushStatsAppPushStat& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    std::shared_ptr<int64_t> acceptCount_ = nullptr;
    std::shared_ptr<int64_t> deletedCount_ = nullptr;
    std::shared_ptr<int64_t> openedCount_ = nullptr;
    std::shared_ptr<int64_t> receivedCount_ = nullptr;
    std::shared_ptr<int64_t> sentCount_ = nullptr;
    std::shared_ptr<int64_t> smsFailedCount_ = nullptr;
    std::shared_ptr<int64_t> smsReceiveFailedCount_ = nullptr;
    std::shared_ptr<int64_t> smsReceiveSuccessCount_ = nullptr;
    std::shared_ptr<int64_t> smsSentCount_ = nullptr;
    std::shared_ptr<int64_t> smsSkipCount_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Push20160801
#endif
