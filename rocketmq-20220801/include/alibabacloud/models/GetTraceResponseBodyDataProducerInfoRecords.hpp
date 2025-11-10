// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATAPRODUCERINFORECORDS_HPP_
#define ALIBABACLOUD_MODELS_GETTRACERESPONSEBODYDATAPRODUCERINFORECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetTraceResponseBodyDataProducerInfoRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTraceResponseBodyDataProducerInfoRecords& obj) { 
      DARABONBA_PTR_TO_JSON(arriveTime, arriveTime_);
      DARABONBA_PTR_TO_JSON(clientHost, clientHost_);
      DARABONBA_PTR_TO_JSON(dlqOriginMessageId, dlqOriginMessageId_);
      DARABONBA_PTR_TO_JSON(dlqOriginTopic, dlqOriginTopic_);
      DARABONBA_PTR_TO_JSON(messageSource, messageSource_);
      DARABONBA_PTR_TO_JSON(produceDuration, produceDuration_);
      DARABONBA_PTR_TO_JSON(produceStatus, produceStatus_);
      DARABONBA_PTR_TO_JSON(produceTime, produceTime_);
      DARABONBA_PTR_TO_JSON(recallTime, recallTime_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTraceResponseBodyDataProducerInfoRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(arriveTime, arriveTime_);
      DARABONBA_PTR_FROM_JSON(clientHost, clientHost_);
      DARABONBA_PTR_FROM_JSON(dlqOriginMessageId, dlqOriginMessageId_);
      DARABONBA_PTR_FROM_JSON(dlqOriginTopic, dlqOriginTopic_);
      DARABONBA_PTR_FROM_JSON(messageSource, messageSource_);
      DARABONBA_PTR_FROM_JSON(produceDuration, produceDuration_);
      DARABONBA_PTR_FROM_JSON(produceStatus, produceStatus_);
      DARABONBA_PTR_FROM_JSON(produceTime, produceTime_);
      DARABONBA_PTR_FROM_JSON(recallTime, recallTime_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
    };
    GetTraceResponseBodyDataProducerInfoRecords() = default ;
    GetTraceResponseBodyDataProducerInfoRecords(const GetTraceResponseBodyDataProducerInfoRecords &) = default ;
    GetTraceResponseBodyDataProducerInfoRecords(GetTraceResponseBodyDataProducerInfoRecords &&) = default ;
    GetTraceResponseBodyDataProducerInfoRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTraceResponseBodyDataProducerInfoRecords() = default ;
    GetTraceResponseBodyDataProducerInfoRecords& operator=(const GetTraceResponseBodyDataProducerInfoRecords &) = default ;
    GetTraceResponseBodyDataProducerInfoRecords& operator=(GetTraceResponseBodyDataProducerInfoRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arriveTime_ == nullptr
        && return this->clientHost_ == nullptr && return this->dlqOriginMessageId_ == nullptr && return this->dlqOriginTopic_ == nullptr && return this->messageSource_ == nullptr && return this->produceDuration_ == nullptr
        && return this->produceStatus_ == nullptr && return this->produceTime_ == nullptr && return this->recallTime_ == nullptr && return this->userName_ == nullptr; };
    // arriveTime Field Functions 
    bool hasArriveTime() const { return this->arriveTime_ != nullptr;};
    void deleteArriveTime() { this->arriveTime_ = nullptr;};
    inline string arriveTime() const { DARABONBA_PTR_GET_DEFAULT(arriveTime_, "") };
    inline GetTraceResponseBodyDataProducerInfoRecords& setArriveTime(string arriveTime) { DARABONBA_PTR_SET_VALUE(arriveTime_, arriveTime) };


    // clientHost Field Functions 
    bool hasClientHost() const { return this->clientHost_ != nullptr;};
    void deleteClientHost() { this->clientHost_ = nullptr;};
    inline string clientHost() const { DARABONBA_PTR_GET_DEFAULT(clientHost_, "") };
    inline GetTraceResponseBodyDataProducerInfoRecords& setClientHost(string clientHost) { DARABONBA_PTR_SET_VALUE(clientHost_, clientHost) };


    // dlqOriginMessageId Field Functions 
    bool hasDlqOriginMessageId() const { return this->dlqOriginMessageId_ != nullptr;};
    void deleteDlqOriginMessageId() { this->dlqOriginMessageId_ = nullptr;};
    inline string dlqOriginMessageId() const { DARABONBA_PTR_GET_DEFAULT(dlqOriginMessageId_, "") };
    inline GetTraceResponseBodyDataProducerInfoRecords& setDlqOriginMessageId(string dlqOriginMessageId) { DARABONBA_PTR_SET_VALUE(dlqOriginMessageId_, dlqOriginMessageId) };


    // dlqOriginTopic Field Functions 
    bool hasDlqOriginTopic() const { return this->dlqOriginTopic_ != nullptr;};
    void deleteDlqOriginTopic() { this->dlqOriginTopic_ = nullptr;};
    inline string dlqOriginTopic() const { DARABONBA_PTR_GET_DEFAULT(dlqOriginTopic_, "") };
    inline GetTraceResponseBodyDataProducerInfoRecords& setDlqOriginTopic(string dlqOriginTopic) { DARABONBA_PTR_SET_VALUE(dlqOriginTopic_, dlqOriginTopic) };


    // messageSource Field Functions 
    bool hasMessageSource() const { return this->messageSource_ != nullptr;};
    void deleteMessageSource() { this->messageSource_ = nullptr;};
    inline string messageSource() const { DARABONBA_PTR_GET_DEFAULT(messageSource_, "") };
    inline GetTraceResponseBodyDataProducerInfoRecords& setMessageSource(string messageSource) { DARABONBA_PTR_SET_VALUE(messageSource_, messageSource) };


    // produceDuration Field Functions 
    bool hasProduceDuration() const { return this->produceDuration_ != nullptr;};
    void deleteProduceDuration() { this->produceDuration_ = nullptr;};
    inline int64_t produceDuration() const { DARABONBA_PTR_GET_DEFAULT(produceDuration_, 0L) };
    inline GetTraceResponseBodyDataProducerInfoRecords& setProduceDuration(int64_t produceDuration) { DARABONBA_PTR_SET_VALUE(produceDuration_, produceDuration) };


    // produceStatus Field Functions 
    bool hasProduceStatus() const { return this->produceStatus_ != nullptr;};
    void deleteProduceStatus() { this->produceStatus_ = nullptr;};
    inline string produceStatus() const { DARABONBA_PTR_GET_DEFAULT(produceStatus_, "") };
    inline GetTraceResponseBodyDataProducerInfoRecords& setProduceStatus(string produceStatus) { DARABONBA_PTR_SET_VALUE(produceStatus_, produceStatus) };


    // produceTime Field Functions 
    bool hasProduceTime() const { return this->produceTime_ != nullptr;};
    void deleteProduceTime() { this->produceTime_ = nullptr;};
    inline string produceTime() const { DARABONBA_PTR_GET_DEFAULT(produceTime_, "") };
    inline GetTraceResponseBodyDataProducerInfoRecords& setProduceTime(string produceTime) { DARABONBA_PTR_SET_VALUE(produceTime_, produceTime) };


    // recallTime Field Functions 
    bool hasRecallTime() const { return this->recallTime_ != nullptr;};
    void deleteRecallTime() { this->recallTime_ = nullptr;};
    inline string recallTime() const { DARABONBA_PTR_GET_DEFAULT(recallTime_, "") };
    inline GetTraceResponseBodyDataProducerInfoRecords& setRecallTime(string recallTime) { DARABONBA_PTR_SET_VALUE(recallTime_, recallTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetTraceResponseBodyDataProducerInfoRecords& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Arrive time.
    std::shared_ptr<string> arriveTime_ = nullptr;
    // Client host.
    std::shared_ptr<string> clientHost_ = nullptr;
    // Dead-letter queue message ID.
    std::shared_ptr<string> dlqOriginMessageId_ = nullptr;
    // Dead-letter queue topic.
    std::shared_ptr<string> dlqOriginTopic_ = nullptr;
    // Message source.
    std::shared_ptr<string> messageSource_ = nullptr;
    // Producer duration.
    std::shared_ptr<int64_t> produceDuration_ = nullptr;
    // Producer status.
    std::shared_ptr<string> produceStatus_ = nullptr;
    // Producer time.
    std::shared_ptr<string> produceTime_ = nullptr;
    // The time when the scheduled message withdrawal request was initiated
    std::shared_ptr<string> recallTime_ = nullptr;
    // Producer name.
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
