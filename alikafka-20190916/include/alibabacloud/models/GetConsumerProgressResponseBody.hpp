// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERPROGRESSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetConsumerProgressResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerProgressResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(ConsumerProgress, consumerProgress_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerProgressResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(ConsumerProgress, consumerProgress_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetConsumerProgressResponseBody() = default ;
    GetConsumerProgressResponseBody(const GetConsumerProgressResponseBody &) = default ;
    GetConsumerProgressResponseBody(GetConsumerProgressResponseBody &&) = default ;
    GetConsumerProgressResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerProgressResponseBody() = default ;
    GetConsumerProgressResponseBody& operator=(const GetConsumerProgressResponseBody &) = default ;
    GetConsumerProgressResponseBody& operator=(GetConsumerProgressResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConsumerProgress : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConsumerProgress& obj) { 
        DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
        DARABONBA_PTR_TO_JSON(RebalanceInfoList, rebalanceInfoList_);
        DARABONBA_PTR_TO_JSON(TopicList, topicList_);
        DARABONBA_PTR_TO_JSON(TotalDiff, totalDiff_);
        DARABONBA_PTR_TO_JSON(state, state_);
      };
      friend void from_json(const Darabonba::Json& j, ConsumerProgress& obj) { 
        DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
        DARABONBA_PTR_FROM_JSON(RebalanceInfoList, rebalanceInfoList_);
        DARABONBA_PTR_FROM_JSON(TopicList, topicList_);
        DARABONBA_PTR_FROM_JSON(TotalDiff, totalDiff_);
        DARABONBA_PTR_FROM_JSON(state, state_);
      };
      ConsumerProgress() = default ;
      ConsumerProgress(const ConsumerProgress &) = default ;
      ConsumerProgress(ConsumerProgress &&) = default ;
      ConsumerProgress(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConsumerProgress() = default ;
      ConsumerProgress& operator=(const ConsumerProgress &) = default ;
      ConsumerProgress& operator=(ConsumerProgress &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TopicList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TopicList& obj) { 
          DARABONBA_PTR_TO_JSON(TopicList, topicList_);
        };
        friend void from_json(const Darabonba::Json& j, TopicList& obj) { 
          DARABONBA_PTR_FROM_JSON(TopicList, topicList_);
        };
        TopicList() = default ;
        TopicList(const TopicList &) = default ;
        TopicList(TopicList &&) = default ;
        TopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TopicList() = default ;
        TopicList& operator=(const TopicList &) = default ;
        TopicList& operator=(TopicList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TopicListItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TopicListItem& obj) { 
            DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
            DARABONBA_PTR_TO_JSON(OffsetList, offsetList_);
            DARABONBA_PTR_TO_JSON(Topic, topic_);
            DARABONBA_PTR_TO_JSON(TotalDiff, totalDiff_);
          };
          friend void from_json(const Darabonba::Json& j, TopicListItem& obj) { 
            DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
            DARABONBA_PTR_FROM_JSON(OffsetList, offsetList_);
            DARABONBA_PTR_FROM_JSON(Topic, topic_);
            DARABONBA_PTR_FROM_JSON(TotalDiff, totalDiff_);
          };
          TopicListItem() = default ;
          TopicListItem(const TopicListItem &) = default ;
          TopicListItem(TopicListItem &&) = default ;
          TopicListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TopicListItem() = default ;
          TopicListItem& operator=(const TopicListItem &) = default ;
          TopicListItem& operator=(TopicListItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class OffsetList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const OffsetList& obj) { 
              DARABONBA_PTR_TO_JSON(OffsetList, offsetList_);
            };
            friend void from_json(const Darabonba::Json& j, OffsetList& obj) { 
              DARABONBA_PTR_FROM_JSON(OffsetList, offsetList_);
            };
            OffsetList() = default ;
            OffsetList(const OffsetList &) = default ;
            OffsetList(OffsetList &&) = default ;
            OffsetList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~OffsetList() = default ;
            OffsetList& operator=(const OffsetList &) = default ;
            OffsetList& operator=(OffsetList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class OffsetListItem : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const OffsetListItem& obj) { 
                DARABONBA_PTR_TO_JSON(Accumulate, accumulate_);
                DARABONBA_PTR_TO_JSON(BrokerOffset, brokerOffset_);
                DARABONBA_PTR_TO_JSON(ClientId, clientId_);
                DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
                DARABONBA_PTR_TO_JSON(ConsumerOffset, consumerOffset_);
                DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
                DARABONBA_PTR_TO_JSON(MemberId, memberId_);
                DARABONBA_PTR_TO_JSON(Partition, partition_);
              };
              friend void from_json(const Darabonba::Json& j, OffsetListItem& obj) { 
                DARABONBA_PTR_FROM_JSON(Accumulate, accumulate_);
                DARABONBA_PTR_FROM_JSON(BrokerOffset, brokerOffset_);
                DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
                DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
                DARABONBA_PTR_FROM_JSON(ConsumerOffset, consumerOffset_);
                DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
                DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
                DARABONBA_PTR_FROM_JSON(Partition, partition_);
              };
              OffsetListItem() = default ;
              OffsetListItem(const OffsetListItem &) = default ;
              OffsetListItem(OffsetListItem &&) = default ;
              OffsetListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~OffsetListItem() = default ;
              OffsetListItem& operator=(const OffsetListItem &) = default ;
              OffsetListItem& operator=(OffsetListItem &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->accumulate_ == nullptr
        && this->brokerOffset_ == nullptr && this->clientId_ == nullptr && this->clientIp_ == nullptr && this->consumerOffset_ == nullptr && this->lastTimestamp_ == nullptr
        && this->memberId_ == nullptr && this->partition_ == nullptr; };
              // accumulate Field Functions 
              bool hasAccumulate() const { return this->accumulate_ != nullptr;};
              void deleteAccumulate() { this->accumulate_ = nullptr;};
              inline int64_t getAccumulate() const { DARABONBA_PTR_GET_DEFAULT(accumulate_, 0L) };
              inline OffsetListItem& setAccumulate(int64_t accumulate) { DARABONBA_PTR_SET_VALUE(accumulate_, accumulate) };


              // brokerOffset Field Functions 
              bool hasBrokerOffset() const { return this->brokerOffset_ != nullptr;};
              void deleteBrokerOffset() { this->brokerOffset_ = nullptr;};
              inline int64_t getBrokerOffset() const { DARABONBA_PTR_GET_DEFAULT(brokerOffset_, 0L) };
              inline OffsetListItem& setBrokerOffset(int64_t brokerOffset) { DARABONBA_PTR_SET_VALUE(brokerOffset_, brokerOffset) };


              // clientId Field Functions 
              bool hasClientId() const { return this->clientId_ != nullptr;};
              void deleteClientId() { this->clientId_ = nullptr;};
              inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
              inline OffsetListItem& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


              // clientIp Field Functions 
              bool hasClientIp() const { return this->clientIp_ != nullptr;};
              void deleteClientIp() { this->clientIp_ = nullptr;};
              inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
              inline OffsetListItem& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


              // consumerOffset Field Functions 
              bool hasConsumerOffset() const { return this->consumerOffset_ != nullptr;};
              void deleteConsumerOffset() { this->consumerOffset_ = nullptr;};
              inline int64_t getConsumerOffset() const { DARABONBA_PTR_GET_DEFAULT(consumerOffset_, 0L) };
              inline OffsetListItem& setConsumerOffset(int64_t consumerOffset) { DARABONBA_PTR_SET_VALUE(consumerOffset_, consumerOffset) };


              // lastTimestamp Field Functions 
              bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
              void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
              inline int64_t getLastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, 0L) };
              inline OffsetListItem& setLastTimestamp(int64_t lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


              // memberId Field Functions 
              bool hasMemberId() const { return this->memberId_ != nullptr;};
              void deleteMemberId() { this->memberId_ = nullptr;};
              inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
              inline OffsetListItem& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


              // partition Field Functions 
              bool hasPartition() const { return this->partition_ != nullptr;};
              void deletePartition() { this->partition_ = nullptr;};
              inline int32_t getPartition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
              inline OffsetListItem& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


            protected:
              shared_ptr<int64_t> accumulate_ {};
              shared_ptr<int64_t> brokerOffset_ {};
              shared_ptr<string> clientId_ {};
              shared_ptr<string> clientIp_ {};
              shared_ptr<int64_t> consumerOffset_ {};
              shared_ptr<int64_t> lastTimestamp_ {};
              shared_ptr<string> memberId_ {};
              shared_ptr<int32_t> partition_ {};
            };

            virtual bool empty() const override { return this->offsetList_ == nullptr; };
            // offsetList Field Functions 
            bool hasOffsetList() const { return this->offsetList_ != nullptr;};
            void deleteOffsetList() { this->offsetList_ = nullptr;};
            inline const vector<OffsetList::OffsetListItem> & getOffsetList() const { DARABONBA_PTR_GET_CONST(offsetList_, vector<OffsetList::OffsetListItem>) };
            inline vector<OffsetList::OffsetListItem> getOffsetList() { DARABONBA_PTR_GET(offsetList_, vector<OffsetList::OffsetListItem>) };
            inline OffsetList& setOffsetList(const vector<OffsetList::OffsetListItem> & offsetList) { DARABONBA_PTR_SET_VALUE(offsetList_, offsetList) };
            inline OffsetList& setOffsetList(vector<OffsetList::OffsetListItem> && offsetList) { DARABONBA_PTR_SET_RVALUE(offsetList_, offsetList) };


          protected:
            shared_ptr<vector<OffsetList::OffsetListItem>> offsetList_ {};
          };

          virtual bool empty() const override { return this->lastTimestamp_ == nullptr
        && this->offsetList_ == nullptr && this->topic_ == nullptr && this->totalDiff_ == nullptr; };
          // lastTimestamp Field Functions 
          bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
          void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
          inline int64_t getLastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, 0L) };
          inline TopicListItem& setLastTimestamp(int64_t lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


          // offsetList Field Functions 
          bool hasOffsetList() const { return this->offsetList_ != nullptr;};
          void deleteOffsetList() { this->offsetList_ = nullptr;};
          inline const TopicListItem::OffsetList & getOffsetList() const { DARABONBA_PTR_GET_CONST(offsetList_, TopicListItem::OffsetList) };
          inline TopicListItem::OffsetList getOffsetList() { DARABONBA_PTR_GET(offsetList_, TopicListItem::OffsetList) };
          inline TopicListItem& setOffsetList(const TopicListItem::OffsetList & offsetList) { DARABONBA_PTR_SET_VALUE(offsetList_, offsetList) };
          inline TopicListItem& setOffsetList(TopicListItem::OffsetList && offsetList) { DARABONBA_PTR_SET_RVALUE(offsetList_, offsetList) };


          // topic Field Functions 
          bool hasTopic() const { return this->topic_ != nullptr;};
          void deleteTopic() { this->topic_ = nullptr;};
          inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
          inline TopicListItem& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


          // totalDiff Field Functions 
          bool hasTotalDiff() const { return this->totalDiff_ != nullptr;};
          void deleteTotalDiff() { this->totalDiff_ = nullptr;};
          inline int64_t getTotalDiff() const { DARABONBA_PTR_GET_DEFAULT(totalDiff_, 0L) };
          inline TopicListItem& setTotalDiff(int64_t totalDiff) { DARABONBA_PTR_SET_VALUE(totalDiff_, totalDiff) };


        protected:
          shared_ptr<int64_t> lastTimestamp_ {};
          shared_ptr<TopicListItem::OffsetList> offsetList_ {};
          shared_ptr<string> topic_ {};
          shared_ptr<int64_t> totalDiff_ {};
        };

        virtual bool empty() const override { return this->topicList_ == nullptr; };
        // topicList Field Functions 
        bool hasTopicList() const { return this->topicList_ != nullptr;};
        void deleteTopicList() { this->topicList_ = nullptr;};
        inline const vector<TopicList::TopicListItem> & getTopicList() const { DARABONBA_PTR_GET_CONST(topicList_, vector<TopicList::TopicListItem>) };
        inline vector<TopicList::TopicListItem> getTopicList() { DARABONBA_PTR_GET(topicList_, vector<TopicList::TopicListItem>) };
        inline TopicList& setTopicList(const vector<TopicList::TopicListItem> & topicList) { DARABONBA_PTR_SET_VALUE(topicList_, topicList) };
        inline TopicList& setTopicList(vector<TopicList::TopicListItem> && topicList) { DARABONBA_PTR_SET_RVALUE(topicList_, topicList) };


      protected:
        shared_ptr<vector<TopicList::TopicListItem>> topicList_ {};
      };

      class RebalanceInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RebalanceInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(RebalanceInfoList, rebalanceInfoList_);
        };
        friend void from_json(const Darabonba::Json& j, RebalanceInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(RebalanceInfoList, rebalanceInfoList_);
        };
        RebalanceInfoList() = default ;
        RebalanceInfoList(const RebalanceInfoList &) = default ;
        RebalanceInfoList(RebalanceInfoList &&) = default ;
        RebalanceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RebalanceInfoList() = default ;
        RebalanceInfoList& operator=(const RebalanceInfoList &) = default ;
        RebalanceInfoList& operator=(RebalanceInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RebalanceInfoListItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RebalanceInfoListItem& obj) { 
            DARABONBA_PTR_TO_JSON(Generation, generation_);
            DARABONBA_PTR_TO_JSON(GroupId, groupId_);
            DARABONBA_PTR_TO_JSON(LastRebalanceTimestamp, lastRebalanceTimestamp_);
            DARABONBA_PTR_TO_JSON(Reason, reason_);
            DARABONBA_PTR_TO_JSON(RebalanceSuccess, rebalanceSuccess_);
            DARABONBA_PTR_TO_JSON(RebalanceTimeConsuming, rebalanceTimeConsuming_);
          };
          friend void from_json(const Darabonba::Json& j, RebalanceInfoListItem& obj) { 
            DARABONBA_PTR_FROM_JSON(Generation, generation_);
            DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
            DARABONBA_PTR_FROM_JSON(LastRebalanceTimestamp, lastRebalanceTimestamp_);
            DARABONBA_PTR_FROM_JSON(Reason, reason_);
            DARABONBA_PTR_FROM_JSON(RebalanceSuccess, rebalanceSuccess_);
            DARABONBA_PTR_FROM_JSON(RebalanceTimeConsuming, rebalanceTimeConsuming_);
          };
          RebalanceInfoListItem() = default ;
          RebalanceInfoListItem(const RebalanceInfoListItem &) = default ;
          RebalanceInfoListItem(RebalanceInfoListItem &&) = default ;
          RebalanceInfoListItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RebalanceInfoListItem() = default ;
          RebalanceInfoListItem& operator=(const RebalanceInfoListItem &) = default ;
          RebalanceInfoListItem& operator=(RebalanceInfoListItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->generation_ == nullptr
        && this->groupId_ == nullptr && this->lastRebalanceTimestamp_ == nullptr && this->reason_ == nullptr && this->rebalanceSuccess_ == nullptr && this->rebalanceTimeConsuming_ == nullptr; };
          // generation Field Functions 
          bool hasGeneration() const { return this->generation_ != nullptr;};
          void deleteGeneration() { this->generation_ = nullptr;};
          inline int64_t getGeneration() const { DARABONBA_PTR_GET_DEFAULT(generation_, 0L) };
          inline RebalanceInfoListItem& setGeneration(int64_t generation) { DARABONBA_PTR_SET_VALUE(generation_, generation) };


          // groupId Field Functions 
          bool hasGroupId() const { return this->groupId_ != nullptr;};
          void deleteGroupId() { this->groupId_ = nullptr;};
          inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
          inline RebalanceInfoListItem& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


          // lastRebalanceTimestamp Field Functions 
          bool hasLastRebalanceTimestamp() const { return this->lastRebalanceTimestamp_ != nullptr;};
          void deleteLastRebalanceTimestamp() { this->lastRebalanceTimestamp_ = nullptr;};
          inline int64_t getLastRebalanceTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastRebalanceTimestamp_, 0L) };
          inline RebalanceInfoListItem& setLastRebalanceTimestamp(int64_t lastRebalanceTimestamp) { DARABONBA_PTR_SET_VALUE(lastRebalanceTimestamp_, lastRebalanceTimestamp) };


          // reason Field Functions 
          bool hasReason() const { return this->reason_ != nullptr;};
          void deleteReason() { this->reason_ = nullptr;};
          inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
          inline RebalanceInfoListItem& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


          // rebalanceSuccess Field Functions 
          bool hasRebalanceSuccess() const { return this->rebalanceSuccess_ != nullptr;};
          void deleteRebalanceSuccess() { this->rebalanceSuccess_ = nullptr;};
          inline bool getRebalanceSuccess() const { DARABONBA_PTR_GET_DEFAULT(rebalanceSuccess_, false) };
          inline RebalanceInfoListItem& setRebalanceSuccess(bool rebalanceSuccess) { DARABONBA_PTR_SET_VALUE(rebalanceSuccess_, rebalanceSuccess) };


          // rebalanceTimeConsuming Field Functions 
          bool hasRebalanceTimeConsuming() const { return this->rebalanceTimeConsuming_ != nullptr;};
          void deleteRebalanceTimeConsuming() { this->rebalanceTimeConsuming_ = nullptr;};
          inline int64_t getRebalanceTimeConsuming() const { DARABONBA_PTR_GET_DEFAULT(rebalanceTimeConsuming_, 0L) };
          inline RebalanceInfoListItem& setRebalanceTimeConsuming(int64_t rebalanceTimeConsuming) { DARABONBA_PTR_SET_VALUE(rebalanceTimeConsuming_, rebalanceTimeConsuming) };


        protected:
          shared_ptr<int64_t> generation_ {};
          shared_ptr<string> groupId_ {};
          shared_ptr<int64_t> lastRebalanceTimestamp_ {};
          shared_ptr<string> reason_ {};
          shared_ptr<bool> rebalanceSuccess_ {};
          shared_ptr<int64_t> rebalanceTimeConsuming_ {};
        };

        virtual bool empty() const override { return this->rebalanceInfoList_ == nullptr; };
        // rebalanceInfoList Field Functions 
        bool hasRebalanceInfoList() const { return this->rebalanceInfoList_ != nullptr;};
        void deleteRebalanceInfoList() { this->rebalanceInfoList_ = nullptr;};
        inline const vector<RebalanceInfoList::RebalanceInfoListItem> & getRebalanceInfoList() const { DARABONBA_PTR_GET_CONST(rebalanceInfoList_, vector<RebalanceInfoList::RebalanceInfoListItem>) };
        inline vector<RebalanceInfoList::RebalanceInfoListItem> getRebalanceInfoList() { DARABONBA_PTR_GET(rebalanceInfoList_, vector<RebalanceInfoList::RebalanceInfoListItem>) };
        inline RebalanceInfoList& setRebalanceInfoList(const vector<RebalanceInfoList::RebalanceInfoListItem> & rebalanceInfoList) { DARABONBA_PTR_SET_VALUE(rebalanceInfoList_, rebalanceInfoList) };
        inline RebalanceInfoList& setRebalanceInfoList(vector<RebalanceInfoList::RebalanceInfoListItem> && rebalanceInfoList) { DARABONBA_PTR_SET_RVALUE(rebalanceInfoList_, rebalanceInfoList) };


      protected:
        shared_ptr<vector<RebalanceInfoList::RebalanceInfoListItem>> rebalanceInfoList_ {};
      };

      virtual bool empty() const override { return this->lastTimestamp_ == nullptr
        && this->rebalanceInfoList_ == nullptr && this->topicList_ == nullptr && this->totalDiff_ == nullptr && this->state_ == nullptr; };
      // lastTimestamp Field Functions 
      bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
      void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
      inline int64_t getLastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, 0L) };
      inline ConsumerProgress& setLastTimestamp(int64_t lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


      // rebalanceInfoList Field Functions 
      bool hasRebalanceInfoList() const { return this->rebalanceInfoList_ != nullptr;};
      void deleteRebalanceInfoList() { this->rebalanceInfoList_ = nullptr;};
      inline const ConsumerProgress::RebalanceInfoList & getRebalanceInfoList() const { DARABONBA_PTR_GET_CONST(rebalanceInfoList_, ConsumerProgress::RebalanceInfoList) };
      inline ConsumerProgress::RebalanceInfoList getRebalanceInfoList() { DARABONBA_PTR_GET(rebalanceInfoList_, ConsumerProgress::RebalanceInfoList) };
      inline ConsumerProgress& setRebalanceInfoList(const ConsumerProgress::RebalanceInfoList & rebalanceInfoList) { DARABONBA_PTR_SET_VALUE(rebalanceInfoList_, rebalanceInfoList) };
      inline ConsumerProgress& setRebalanceInfoList(ConsumerProgress::RebalanceInfoList && rebalanceInfoList) { DARABONBA_PTR_SET_RVALUE(rebalanceInfoList_, rebalanceInfoList) };


      // topicList Field Functions 
      bool hasTopicList() const { return this->topicList_ != nullptr;};
      void deleteTopicList() { this->topicList_ = nullptr;};
      inline const ConsumerProgress::TopicList & getTopicList() const { DARABONBA_PTR_GET_CONST(topicList_, ConsumerProgress::TopicList) };
      inline ConsumerProgress::TopicList getTopicList() { DARABONBA_PTR_GET(topicList_, ConsumerProgress::TopicList) };
      inline ConsumerProgress& setTopicList(const ConsumerProgress::TopicList & topicList) { DARABONBA_PTR_SET_VALUE(topicList_, topicList) };
      inline ConsumerProgress& setTopicList(ConsumerProgress::TopicList && topicList) { DARABONBA_PTR_SET_RVALUE(topicList_, topicList) };


      // totalDiff Field Functions 
      bool hasTotalDiff() const { return this->totalDiff_ != nullptr;};
      void deleteTotalDiff() { this->totalDiff_ = nullptr;};
      inline int64_t getTotalDiff() const { DARABONBA_PTR_GET_DEFAULT(totalDiff_, 0L) };
      inline ConsumerProgress& setTotalDiff(int64_t totalDiff) { DARABONBA_PTR_SET_VALUE(totalDiff_, totalDiff) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline ConsumerProgress& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    protected:
      // The time when the last message consumed by the consumer group was generated.
      shared_ptr<int64_t> lastTimestamp_ {};
      shared_ptr<ConsumerProgress::RebalanceInfoList> rebalanceInfoList_ {};
      shared_ptr<ConsumerProgress::TopicList> topicList_ {};
      // The total number of unconsumed messages in all topics to which the consumer group subscribes.
      shared_ptr<int64_t> totalDiff_ {};
      shared_ptr<string> state_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->consumerProgress_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetConsumerProgressResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // consumerProgress Field Functions 
    bool hasConsumerProgress() const { return this->consumerProgress_ != nullptr;};
    void deleteConsumerProgress() { this->consumerProgress_ = nullptr;};
    inline const GetConsumerProgressResponseBody::ConsumerProgress & getConsumerProgress() const { DARABONBA_PTR_GET_CONST(consumerProgress_, GetConsumerProgressResponseBody::ConsumerProgress) };
    inline GetConsumerProgressResponseBody::ConsumerProgress getConsumerProgress() { DARABONBA_PTR_GET(consumerProgress_, GetConsumerProgressResponseBody::ConsumerProgress) };
    inline GetConsumerProgressResponseBody& setConsumerProgress(const GetConsumerProgressResponseBody::ConsumerProgress & consumerProgress) { DARABONBA_PTR_SET_VALUE(consumerProgress_, consumerProgress) };
    inline GetConsumerProgressResponseBody& setConsumerProgress(GetConsumerProgressResponseBody::ConsumerProgress && consumerProgress) { DARABONBA_PTR_SET_RVALUE(consumerProgress_, consumerProgress) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumerProgressResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumerProgressResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConsumerProgressResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned HTTP status code. If the request is successful, 200 is returned.
    shared_ptr<int32_t> code_ {};
    // The consumer progress of the consumer group.
    shared_ptr<GetConsumerProgressResponseBody::ConsumerProgress> consumerProgress_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
