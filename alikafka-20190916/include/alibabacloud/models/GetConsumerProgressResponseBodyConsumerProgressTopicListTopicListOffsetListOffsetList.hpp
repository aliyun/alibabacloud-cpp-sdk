// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSTOPICLISTTOPICLISTOFFSETLISTOFFSETLIST_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODYCONSUMERPROGRESSTOPICLISTTOPICLISTOFFSETLISTOFFSETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& obj) { 
      DARABONBA_PTR_TO_JSON(Accumulate, accumulate_);
      DARABONBA_PTR_TO_JSON(BrokerOffset, brokerOffset_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_TO_JSON(ConsumerOffset, consumerOffset_);
      DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Accumulate, accumulate_);
      DARABONBA_PTR_FROM_JSON(BrokerOffset, brokerOffset_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
      DARABONBA_PTR_FROM_JSON(ConsumerOffset, consumerOffset_);
      DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
    };
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList(const GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList(GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList &&) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList() = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& operator=(const GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList &) = default ;
    GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& operator=(GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accumulate_ != nullptr
        && this->brokerOffset_ != nullptr && this->clientId_ != nullptr && this->clientIp_ != nullptr && this->consumerOffset_ != nullptr && this->lastTimestamp_ != nullptr
        && this->memberId_ != nullptr && this->partition_ != nullptr; };
    // accumulate Field Functions 
    bool hasAccumulate() const { return this->accumulate_ != nullptr;};
    void deleteAccumulate() { this->accumulate_ = nullptr;};
    inline int64_t accumulate() const { DARABONBA_PTR_GET_DEFAULT(accumulate_, 0L) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& setAccumulate(int64_t accumulate) { DARABONBA_PTR_SET_VALUE(accumulate_, accumulate) };


    // brokerOffset Field Functions 
    bool hasBrokerOffset() const { return this->brokerOffset_ != nullptr;};
    void deleteBrokerOffset() { this->brokerOffset_ = nullptr;};
    inline int64_t brokerOffset() const { DARABONBA_PTR_GET_DEFAULT(brokerOffset_, 0L) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& setBrokerOffset(int64_t brokerOffset) { DARABONBA_PTR_SET_VALUE(brokerOffset_, brokerOffset) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientIp Field Functions 
    bool hasClientIp() const { return this->clientIp_ != nullptr;};
    void deleteClientIp() { this->clientIp_ = nullptr;};
    inline string clientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


    // consumerOffset Field Functions 
    bool hasConsumerOffset() const { return this->consumerOffset_ != nullptr;};
    void deleteConsumerOffset() { this->consumerOffset_ = nullptr;};
    inline int64_t consumerOffset() const { DARABONBA_PTR_GET_DEFAULT(consumerOffset_, 0L) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& setConsumerOffset(int64_t consumerOffset) { DARABONBA_PTR_SET_VALUE(consumerOffset_, consumerOffset) };


    // lastTimestamp Field Functions 
    bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
    void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
    inline int64_t lastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, 0L) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& setLastTimestamp(int64_t lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string memberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int32_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
    inline GetConsumerProgressResponseBodyConsumerProgressTopicListTopicListOffsetListOffsetList& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


  protected:
    std::shared_ptr<int64_t> accumulate_ = nullptr;
    // The latest offset in the partition of the topic.
    std::shared_ptr<int64_t> brokerOffset_ = nullptr;
    // Client ID of the application.
    std::shared_ptr<string> clientId_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> clientIp_ = nullptr;
    // The consumer offset in the partition of the topic.
    std::shared_ptr<int64_t> consumerOffset_ = nullptr;
    // The time when the last consumed message in the partition was generated.
    std::shared_ptr<int64_t> lastTimestamp_ = nullptr;
    // Member ID.
    std::shared_ptr<string> memberId_ = nullptr;
    // The partition ID.
    std::shared_ptr<int32_t> partition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
