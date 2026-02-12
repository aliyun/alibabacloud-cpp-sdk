// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSCONSUMERSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSCONSUMERSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsConsumerStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsConsumerStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsConsumerStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsConsumerStatusResponseBody() = default ;
    OnsConsumerStatusResponseBody(const OnsConsumerStatusResponseBody &) = default ;
    OnsConsumerStatusResponseBody(OnsConsumerStatusResponseBody &&) = default ;
    OnsConsumerStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsConsumerStatusResponseBody() = default ;
    OnsConsumerStatusResponseBody& operator=(const OnsConsumerStatusResponseBody &) = default ;
    OnsConsumerStatusResponseBody& operator=(OnsConsumerStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConnectionSet, connectionSet_);
        DARABONBA_PTR_TO_JSON(ConsumeModel, consumeModel_);
        DARABONBA_PTR_TO_JSON(ConsumeTps, consumeTps_);
        DARABONBA_PTR_TO_JSON(ConsumerConnectionInfoList, consumerConnectionInfoList_);
        DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
        DARABONBA_PTR_TO_JSON(DetailInTopicList, detailInTopicList_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
        DARABONBA_PTR_TO_JSON(Online, online_);
        DARABONBA_PTR_TO_JSON(RebalanceOK, rebalanceOK_);
        DARABONBA_PTR_TO_JSON(SubscriptionSame, subscriptionSame_);
        DARABONBA_PTR_TO_JSON(TotalDiff, totalDiff_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConnectionSet, connectionSet_);
        DARABONBA_PTR_FROM_JSON(ConsumeModel, consumeModel_);
        DARABONBA_PTR_FROM_JSON(ConsumeTps, consumeTps_);
        DARABONBA_PTR_FROM_JSON(ConsumerConnectionInfoList, consumerConnectionInfoList_);
        DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
        DARABONBA_PTR_FROM_JSON(DetailInTopicList, detailInTopicList_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
        DARABONBA_PTR_FROM_JSON(Online, online_);
        DARABONBA_PTR_FROM_JSON(RebalanceOK, rebalanceOK_);
        DARABONBA_PTR_FROM_JSON(SubscriptionSame, subscriptionSame_);
        DARABONBA_PTR_FROM_JSON(TotalDiff, totalDiff_);
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
      class DetailInTopicList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DetailInTopicList& obj) { 
          DARABONBA_PTR_TO_JSON(DetailInTopicDo, detailInTopicDo_);
        };
        friend void from_json(const Darabonba::Json& j, DetailInTopicList& obj) { 
          DARABONBA_PTR_FROM_JSON(DetailInTopicDo, detailInTopicDo_);
        };
        DetailInTopicList() = default ;
        DetailInTopicList(const DetailInTopicList &) = default ;
        DetailInTopicList(DetailInTopicList &&) = default ;
        DetailInTopicList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DetailInTopicList() = default ;
        DetailInTopicList& operator=(const DetailInTopicList &) = default ;
        DetailInTopicList& operator=(DetailInTopicList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DetailInTopicDo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DetailInTopicDo& obj) { 
            DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
            DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
            DARABONBA_PTR_TO_JSON(Topic, topic_);
            DARABONBA_PTR_TO_JSON(TotalDiff, totalDiff_);
          };
          friend void from_json(const Darabonba::Json& j, DetailInTopicDo& obj) { 
            DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
            DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
            DARABONBA_PTR_FROM_JSON(Topic, topic_);
            DARABONBA_PTR_FROM_JSON(TotalDiff, totalDiff_);
          };
          DetailInTopicDo() = default ;
          DetailInTopicDo(const DetailInTopicDo &) = default ;
          DetailInTopicDo(DetailInTopicDo &&) = default ;
          DetailInTopicDo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DetailInTopicDo() = default ;
          DetailInTopicDo& operator=(const DetailInTopicDo &) = default ;
          DetailInTopicDo& operator=(DetailInTopicDo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->delayTime_ == nullptr
        && this->lastTimestamp_ == nullptr && this->topic_ == nullptr && this->totalDiff_ == nullptr; };
          // delayTime Field Functions 
          bool hasDelayTime() const { return this->delayTime_ != nullptr;};
          void deleteDelayTime() { this->delayTime_ = nullptr;};
          inline int64_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0L) };
          inline DetailInTopicDo& setDelayTime(int64_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


          // lastTimestamp Field Functions 
          bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
          void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
          inline int64_t getLastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, 0L) };
          inline DetailInTopicDo& setLastTimestamp(int64_t lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


          // topic Field Functions 
          bool hasTopic() const { return this->topic_ != nullptr;};
          void deleteTopic() { this->topic_ = nullptr;};
          inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
          inline DetailInTopicDo& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


          // totalDiff Field Functions 
          bool hasTotalDiff() const { return this->totalDiff_ != nullptr;};
          void deleteTotalDiff() { this->totalDiff_ = nullptr;};
          inline int64_t getTotalDiff() const { DARABONBA_PTR_GET_DEFAULT(totalDiff_, 0L) };
          inline DetailInTopicDo& setTotalDiff(int64_t totalDiff) { DARABONBA_PTR_SET_VALUE(totalDiff_, totalDiff) };


        protected:
          shared_ptr<int64_t> delayTime_ {};
          shared_ptr<int64_t> lastTimestamp_ {};
          shared_ptr<string> topic_ {};
          shared_ptr<int64_t> totalDiff_ {};
        };

        virtual bool empty() const override { return this->detailInTopicDo_ == nullptr; };
        // detailInTopicDo Field Functions 
        bool hasDetailInTopicDo() const { return this->detailInTopicDo_ != nullptr;};
        void deleteDetailInTopicDo() { this->detailInTopicDo_ = nullptr;};
        inline const vector<DetailInTopicList::DetailInTopicDo> & getDetailInTopicDo() const { DARABONBA_PTR_GET_CONST(detailInTopicDo_, vector<DetailInTopicList::DetailInTopicDo>) };
        inline vector<DetailInTopicList::DetailInTopicDo> getDetailInTopicDo() { DARABONBA_PTR_GET(detailInTopicDo_, vector<DetailInTopicList::DetailInTopicDo>) };
        inline DetailInTopicList& setDetailInTopicDo(const vector<DetailInTopicList::DetailInTopicDo> & detailInTopicDo) { DARABONBA_PTR_SET_VALUE(detailInTopicDo_, detailInTopicDo) };
        inline DetailInTopicList& setDetailInTopicDo(vector<DetailInTopicList::DetailInTopicDo> && detailInTopicDo) { DARABONBA_PTR_SET_RVALUE(detailInTopicDo_, detailInTopicDo) };


      protected:
        shared_ptr<vector<DetailInTopicList::DetailInTopicDo>> detailInTopicDo_ {};
      };

      class ConsumerConnectionInfoList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConsumerConnectionInfoList& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumerConnectionInfoDo, consumerConnectionInfoDo_);
        };
        friend void from_json(const Darabonba::Json& j, ConsumerConnectionInfoList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumerConnectionInfoDo, consumerConnectionInfoDo_);
        };
        ConsumerConnectionInfoList() = default ;
        ConsumerConnectionInfoList(const ConsumerConnectionInfoList &) = default ;
        ConsumerConnectionInfoList(ConsumerConnectionInfoList &&) = default ;
        ConsumerConnectionInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConsumerConnectionInfoList() = default ;
        ConsumerConnectionInfoList& operator=(const ConsumerConnectionInfoList &) = default ;
        ConsumerConnectionInfoList& operator=(ConsumerConnectionInfoList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConsumerConnectionInfoDo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumerConnectionInfoDo& obj) { 
            DARABONBA_PTR_TO_JSON(ClientId, clientId_);
            DARABONBA_PTR_TO_JSON(Connection, connection_);
            DARABONBA_PTR_TO_JSON(ConsumeModel, consumeModel_);
            DARABONBA_PTR_TO_JSON(ConsumeType, consumeType_);
            DARABONBA_PTR_TO_JSON(Jstack, jstack_);
            DARABONBA_PTR_TO_JSON(Language, language_);
            DARABONBA_PTR_TO_JSON(LastTimeStamp, lastTimeStamp_);
            DARABONBA_PTR_TO_JSON(RunningDataList, runningDataList_);
            DARABONBA_PTR_TO_JSON(StartTimeStamp, startTimeStamp_);
            DARABONBA_PTR_TO_JSON(SubscriptionSet, subscriptionSet_);
            DARABONBA_PTR_TO_JSON(ThreadCount, threadCount_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumerConnectionInfoDo& obj) { 
            DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
            DARABONBA_PTR_FROM_JSON(Connection, connection_);
            DARABONBA_PTR_FROM_JSON(ConsumeModel, consumeModel_);
            DARABONBA_PTR_FROM_JSON(ConsumeType, consumeType_);
            DARABONBA_PTR_FROM_JSON(Jstack, jstack_);
            DARABONBA_PTR_FROM_JSON(Language, language_);
            DARABONBA_PTR_FROM_JSON(LastTimeStamp, lastTimeStamp_);
            DARABONBA_PTR_FROM_JSON(RunningDataList, runningDataList_);
            DARABONBA_PTR_FROM_JSON(StartTimeStamp, startTimeStamp_);
            DARABONBA_PTR_FROM_JSON(SubscriptionSet, subscriptionSet_);
            DARABONBA_PTR_FROM_JSON(ThreadCount, threadCount_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          ConsumerConnectionInfoDo() = default ;
          ConsumerConnectionInfoDo(const ConsumerConnectionInfoDo &) = default ;
          ConsumerConnectionInfoDo(ConsumerConnectionInfoDo &&) = default ;
          ConsumerConnectionInfoDo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumerConnectionInfoDo() = default ;
          ConsumerConnectionInfoDo& operator=(const ConsumerConnectionInfoDo &) = default ;
          ConsumerConnectionInfoDo& operator=(ConsumerConnectionInfoDo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SubscriptionSet : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SubscriptionSet& obj) { 
              DARABONBA_PTR_TO_JSON(SubscriptionData, subscriptionData_);
            };
            friend void from_json(const Darabonba::Json& j, SubscriptionSet& obj) { 
              DARABONBA_PTR_FROM_JSON(SubscriptionData, subscriptionData_);
            };
            SubscriptionSet() = default ;
            SubscriptionSet(const SubscriptionSet &) = default ;
            SubscriptionSet(SubscriptionSet &&) = default ;
            SubscriptionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SubscriptionSet() = default ;
            SubscriptionSet& operator=(const SubscriptionSet &) = default ;
            SubscriptionSet& operator=(SubscriptionSet &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class SubscriptionData : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const SubscriptionData& obj) { 
                DARABONBA_PTR_TO_JSON(SubString, subString_);
                DARABONBA_PTR_TO_JSON(SubVersion, subVersion_);
                DARABONBA_PTR_TO_JSON(TagsSet, tagsSet_);
                DARABONBA_PTR_TO_JSON(Topic, topic_);
              };
              friend void from_json(const Darabonba::Json& j, SubscriptionData& obj) { 
                DARABONBA_PTR_FROM_JSON(SubString, subString_);
                DARABONBA_PTR_FROM_JSON(SubVersion, subVersion_);
                DARABONBA_PTR_FROM_JSON(TagsSet, tagsSet_);
                DARABONBA_PTR_FROM_JSON(Topic, topic_);
              };
              SubscriptionData() = default ;
              SubscriptionData(const SubscriptionData &) = default ;
              SubscriptionData(SubscriptionData &&) = default ;
              SubscriptionData(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~SubscriptionData() = default ;
              SubscriptionData& operator=(const SubscriptionData &) = default ;
              SubscriptionData& operator=(SubscriptionData &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class TagsSet : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const TagsSet& obj) { 
                  DARABONBA_PTR_TO_JSON(Tag, tag_);
                };
                friend void from_json(const Darabonba::Json& j, TagsSet& obj) { 
                  DARABONBA_PTR_FROM_JSON(Tag, tag_);
                };
                TagsSet() = default ;
                TagsSet(const TagsSet &) = default ;
                TagsSet(TagsSet &&) = default ;
                TagsSet(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~TagsSet() = default ;
                TagsSet& operator=(const TagsSet &) = default ;
                TagsSet& operator=(TagsSet &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->tag_ == nullptr; };
                // tag Field Functions 
                bool hasTag() const { return this->tag_ != nullptr;};
                void deleteTag() { this->tag_ = nullptr;};
                inline const vector<string> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<string>) };
                inline vector<string> getTag() { DARABONBA_PTR_GET(tag_, vector<string>) };
                inline TagsSet& setTag(const vector<string> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
                inline TagsSet& setTag(vector<string> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


              protected:
                shared_ptr<vector<string>> tag_ {};
              };

              virtual bool empty() const override { return this->subString_ == nullptr
        && this->subVersion_ == nullptr && this->tagsSet_ == nullptr && this->topic_ == nullptr; };
              // subString Field Functions 
              bool hasSubString() const { return this->subString_ != nullptr;};
              void deleteSubString() { this->subString_ = nullptr;};
              inline string getSubString() const { DARABONBA_PTR_GET_DEFAULT(subString_, "") };
              inline SubscriptionData& setSubString(string subString) { DARABONBA_PTR_SET_VALUE(subString_, subString) };


              // subVersion Field Functions 
              bool hasSubVersion() const { return this->subVersion_ != nullptr;};
              void deleteSubVersion() { this->subVersion_ = nullptr;};
              inline int64_t getSubVersion() const { DARABONBA_PTR_GET_DEFAULT(subVersion_, 0L) };
              inline SubscriptionData& setSubVersion(int64_t subVersion) { DARABONBA_PTR_SET_VALUE(subVersion_, subVersion) };


              // tagsSet Field Functions 
              bool hasTagsSet() const { return this->tagsSet_ != nullptr;};
              void deleteTagsSet() { this->tagsSet_ = nullptr;};
              inline const SubscriptionData::TagsSet & getTagsSet() const { DARABONBA_PTR_GET_CONST(tagsSet_, SubscriptionData::TagsSet) };
              inline SubscriptionData::TagsSet getTagsSet() { DARABONBA_PTR_GET(tagsSet_, SubscriptionData::TagsSet) };
              inline SubscriptionData& setTagsSet(const SubscriptionData::TagsSet & tagsSet) { DARABONBA_PTR_SET_VALUE(tagsSet_, tagsSet) };
              inline SubscriptionData& setTagsSet(SubscriptionData::TagsSet && tagsSet) { DARABONBA_PTR_SET_RVALUE(tagsSet_, tagsSet) };


              // topic Field Functions 
              bool hasTopic() const { return this->topic_ != nullptr;};
              void deleteTopic() { this->topic_ = nullptr;};
              inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
              inline SubscriptionData& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


            protected:
              shared_ptr<string> subString_ {};
              shared_ptr<int64_t> subVersion_ {};
              shared_ptr<SubscriptionData::TagsSet> tagsSet_ {};
              shared_ptr<string> topic_ {};
            };

            virtual bool empty() const override { return this->subscriptionData_ == nullptr; };
            // subscriptionData Field Functions 
            bool hasSubscriptionData() const { return this->subscriptionData_ != nullptr;};
            void deleteSubscriptionData() { this->subscriptionData_ = nullptr;};
            inline const vector<SubscriptionSet::SubscriptionData> & getSubscriptionData() const { DARABONBA_PTR_GET_CONST(subscriptionData_, vector<SubscriptionSet::SubscriptionData>) };
            inline vector<SubscriptionSet::SubscriptionData> getSubscriptionData() { DARABONBA_PTR_GET(subscriptionData_, vector<SubscriptionSet::SubscriptionData>) };
            inline SubscriptionSet& setSubscriptionData(const vector<SubscriptionSet::SubscriptionData> & subscriptionData) { DARABONBA_PTR_SET_VALUE(subscriptionData_, subscriptionData) };
            inline SubscriptionSet& setSubscriptionData(vector<SubscriptionSet::SubscriptionData> && subscriptionData) { DARABONBA_PTR_SET_RVALUE(subscriptionData_, subscriptionData) };


          protected:
            shared_ptr<vector<SubscriptionSet::SubscriptionData>> subscriptionData_ {};
          };

          class RunningDataList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RunningDataList& obj) { 
              DARABONBA_PTR_TO_JSON(ConsumerRunningDataDo, consumerRunningDataDo_);
            };
            friend void from_json(const Darabonba::Json& j, RunningDataList& obj) { 
              DARABONBA_PTR_FROM_JSON(ConsumerRunningDataDo, consumerRunningDataDo_);
            };
            RunningDataList() = default ;
            RunningDataList(const RunningDataList &) = default ;
            RunningDataList(RunningDataList &&) = default ;
            RunningDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RunningDataList() = default ;
            RunningDataList& operator=(const RunningDataList &) = default ;
            RunningDataList& operator=(RunningDataList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ConsumerRunningDataDo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ConsumerRunningDataDo& obj) { 
                DARABONBA_PTR_TO_JSON(FailedCountPerHour, failedCountPerHour_);
                DARABONBA_PTR_TO_JSON(FailedTps, failedTps_);
                DARABONBA_PTR_TO_JSON(OkTps, okTps_);
                DARABONBA_PTR_TO_JSON(Rt, rt_);
                DARABONBA_PTR_TO_JSON(Topic, topic_);
              };
              friend void from_json(const Darabonba::Json& j, ConsumerRunningDataDo& obj) { 
                DARABONBA_PTR_FROM_JSON(FailedCountPerHour, failedCountPerHour_);
                DARABONBA_PTR_FROM_JSON(FailedTps, failedTps_);
                DARABONBA_PTR_FROM_JSON(OkTps, okTps_);
                DARABONBA_PTR_FROM_JSON(Rt, rt_);
                DARABONBA_PTR_FROM_JSON(Topic, topic_);
              };
              ConsumerRunningDataDo() = default ;
              ConsumerRunningDataDo(const ConsumerRunningDataDo &) = default ;
              ConsumerRunningDataDo(ConsumerRunningDataDo &&) = default ;
              ConsumerRunningDataDo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ConsumerRunningDataDo() = default ;
              ConsumerRunningDataDo& operator=(const ConsumerRunningDataDo &) = default ;
              ConsumerRunningDataDo& operator=(ConsumerRunningDataDo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->failedCountPerHour_ == nullptr
        && this->failedTps_ == nullptr && this->okTps_ == nullptr && this->rt_ == nullptr && this->topic_ == nullptr; };
              // failedCountPerHour Field Functions 
              bool hasFailedCountPerHour() const { return this->failedCountPerHour_ != nullptr;};
              void deleteFailedCountPerHour() { this->failedCountPerHour_ = nullptr;};
              inline int64_t getFailedCountPerHour() const { DARABONBA_PTR_GET_DEFAULT(failedCountPerHour_, 0L) };
              inline ConsumerRunningDataDo& setFailedCountPerHour(int64_t failedCountPerHour) { DARABONBA_PTR_SET_VALUE(failedCountPerHour_, failedCountPerHour) };


              // failedTps Field Functions 
              bool hasFailedTps() const { return this->failedTps_ != nullptr;};
              void deleteFailedTps() { this->failedTps_ = nullptr;};
              inline float getFailedTps() const { DARABONBA_PTR_GET_DEFAULT(failedTps_, 0.0) };
              inline ConsumerRunningDataDo& setFailedTps(float failedTps) { DARABONBA_PTR_SET_VALUE(failedTps_, failedTps) };


              // okTps Field Functions 
              bool hasOkTps() const { return this->okTps_ != nullptr;};
              void deleteOkTps() { this->okTps_ = nullptr;};
              inline float getOkTps() const { DARABONBA_PTR_GET_DEFAULT(okTps_, 0.0) };
              inline ConsumerRunningDataDo& setOkTps(float okTps) { DARABONBA_PTR_SET_VALUE(okTps_, okTps) };


              // rt Field Functions 
              bool hasRt() const { return this->rt_ != nullptr;};
              void deleteRt() { this->rt_ = nullptr;};
              inline float getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0.0) };
              inline ConsumerRunningDataDo& setRt(float rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


              // topic Field Functions 
              bool hasTopic() const { return this->topic_ != nullptr;};
              void deleteTopic() { this->topic_ = nullptr;};
              inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
              inline ConsumerRunningDataDo& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


            protected:
              shared_ptr<int64_t> failedCountPerHour_ {};
              shared_ptr<float> failedTps_ {};
              shared_ptr<float> okTps_ {};
              shared_ptr<float> rt_ {};
              shared_ptr<string> topic_ {};
            };

            virtual bool empty() const override { return this->consumerRunningDataDo_ == nullptr; };
            // consumerRunningDataDo Field Functions 
            bool hasConsumerRunningDataDo() const { return this->consumerRunningDataDo_ != nullptr;};
            void deleteConsumerRunningDataDo() { this->consumerRunningDataDo_ = nullptr;};
            inline const vector<RunningDataList::ConsumerRunningDataDo> & getConsumerRunningDataDo() const { DARABONBA_PTR_GET_CONST(consumerRunningDataDo_, vector<RunningDataList::ConsumerRunningDataDo>) };
            inline vector<RunningDataList::ConsumerRunningDataDo> getConsumerRunningDataDo() { DARABONBA_PTR_GET(consumerRunningDataDo_, vector<RunningDataList::ConsumerRunningDataDo>) };
            inline RunningDataList& setConsumerRunningDataDo(const vector<RunningDataList::ConsumerRunningDataDo> & consumerRunningDataDo) { DARABONBA_PTR_SET_VALUE(consumerRunningDataDo_, consumerRunningDataDo) };
            inline RunningDataList& setConsumerRunningDataDo(vector<RunningDataList::ConsumerRunningDataDo> && consumerRunningDataDo) { DARABONBA_PTR_SET_RVALUE(consumerRunningDataDo_, consumerRunningDataDo) };


          protected:
            shared_ptr<vector<RunningDataList::ConsumerRunningDataDo>> consumerRunningDataDo_ {};
          };

          class Jstack : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Jstack& obj) { 
              DARABONBA_PTR_TO_JSON(ThreadTrackDo, threadTrackDo_);
            };
            friend void from_json(const Darabonba::Json& j, Jstack& obj) { 
              DARABONBA_PTR_FROM_JSON(ThreadTrackDo, threadTrackDo_);
            };
            Jstack() = default ;
            Jstack(const Jstack &) = default ;
            Jstack(Jstack &&) = default ;
            Jstack(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Jstack() = default ;
            Jstack& operator=(const Jstack &) = default ;
            Jstack& operator=(Jstack &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ThreadTrackDo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ThreadTrackDo& obj) { 
                DARABONBA_PTR_TO_JSON(Thread, thread_);
                DARABONBA_PTR_TO_JSON(TrackList, trackList_);
              };
              friend void from_json(const Darabonba::Json& j, ThreadTrackDo& obj) { 
                DARABONBA_PTR_FROM_JSON(Thread, thread_);
                DARABONBA_PTR_FROM_JSON(TrackList, trackList_);
              };
              ThreadTrackDo() = default ;
              ThreadTrackDo(const ThreadTrackDo &) = default ;
              ThreadTrackDo(ThreadTrackDo &&) = default ;
              ThreadTrackDo(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ThreadTrackDo() = default ;
              ThreadTrackDo& operator=(const ThreadTrackDo &) = default ;
              ThreadTrackDo& operator=(ThreadTrackDo &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              class TrackList : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const TrackList& obj) { 
                  DARABONBA_PTR_TO_JSON(Track, track_);
                };
                friend void from_json(const Darabonba::Json& j, TrackList& obj) { 
                  DARABONBA_PTR_FROM_JSON(Track, track_);
                };
                TrackList() = default ;
                TrackList(const TrackList &) = default ;
                TrackList(TrackList &&) = default ;
                TrackList(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~TrackList() = default ;
                TrackList& operator=(const TrackList &) = default ;
                TrackList& operator=(TrackList &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->track_ == nullptr; };
                // track Field Functions 
                bool hasTrack() const { return this->track_ != nullptr;};
                void deleteTrack() { this->track_ = nullptr;};
                inline const vector<string> & getTrack() const { DARABONBA_PTR_GET_CONST(track_, vector<string>) };
                inline vector<string> getTrack() { DARABONBA_PTR_GET(track_, vector<string>) };
                inline TrackList& setTrack(const vector<string> & track) { DARABONBA_PTR_SET_VALUE(track_, track) };
                inline TrackList& setTrack(vector<string> && track) { DARABONBA_PTR_SET_RVALUE(track_, track) };


              protected:
                shared_ptr<vector<string>> track_ {};
              };

              virtual bool empty() const override { return this->thread_ == nullptr
        && this->trackList_ == nullptr; };
              // thread Field Functions 
              bool hasThread() const { return this->thread_ != nullptr;};
              void deleteThread() { this->thread_ = nullptr;};
              inline string getThread() const { DARABONBA_PTR_GET_DEFAULT(thread_, "") };
              inline ThreadTrackDo& setThread(string thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };


              // trackList Field Functions 
              bool hasTrackList() const { return this->trackList_ != nullptr;};
              void deleteTrackList() { this->trackList_ = nullptr;};
              inline const ThreadTrackDo::TrackList & getTrackList() const { DARABONBA_PTR_GET_CONST(trackList_, ThreadTrackDo::TrackList) };
              inline ThreadTrackDo::TrackList getTrackList() { DARABONBA_PTR_GET(trackList_, ThreadTrackDo::TrackList) };
              inline ThreadTrackDo& setTrackList(const ThreadTrackDo::TrackList & trackList) { DARABONBA_PTR_SET_VALUE(trackList_, trackList) };
              inline ThreadTrackDo& setTrackList(ThreadTrackDo::TrackList && trackList) { DARABONBA_PTR_SET_RVALUE(trackList_, trackList) };


            protected:
              shared_ptr<string> thread_ {};
              shared_ptr<ThreadTrackDo::TrackList> trackList_ {};
            };

            virtual bool empty() const override { return this->threadTrackDo_ == nullptr; };
            // threadTrackDo Field Functions 
            bool hasThreadTrackDo() const { return this->threadTrackDo_ != nullptr;};
            void deleteThreadTrackDo() { this->threadTrackDo_ = nullptr;};
            inline const vector<Jstack::ThreadTrackDo> & getThreadTrackDo() const { DARABONBA_PTR_GET_CONST(threadTrackDo_, vector<Jstack::ThreadTrackDo>) };
            inline vector<Jstack::ThreadTrackDo> getThreadTrackDo() { DARABONBA_PTR_GET(threadTrackDo_, vector<Jstack::ThreadTrackDo>) };
            inline Jstack& setThreadTrackDo(const vector<Jstack::ThreadTrackDo> & threadTrackDo) { DARABONBA_PTR_SET_VALUE(threadTrackDo_, threadTrackDo) };
            inline Jstack& setThreadTrackDo(vector<Jstack::ThreadTrackDo> && threadTrackDo) { DARABONBA_PTR_SET_RVALUE(threadTrackDo_, threadTrackDo) };


          protected:
            shared_ptr<vector<Jstack::ThreadTrackDo>> threadTrackDo_ {};
          };

          virtual bool empty() const override { return this->clientId_ == nullptr
        && this->connection_ == nullptr && this->consumeModel_ == nullptr && this->consumeType_ == nullptr && this->jstack_ == nullptr && this->language_ == nullptr
        && this->lastTimeStamp_ == nullptr && this->runningDataList_ == nullptr && this->startTimeStamp_ == nullptr && this->subscriptionSet_ == nullptr && this->threadCount_ == nullptr
        && this->version_ == nullptr; };
          // clientId Field Functions 
          bool hasClientId() const { return this->clientId_ != nullptr;};
          void deleteClientId() { this->clientId_ = nullptr;};
          inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
          inline ConsumerConnectionInfoDo& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


          // connection Field Functions 
          bool hasConnection() const { return this->connection_ != nullptr;};
          void deleteConnection() { this->connection_ = nullptr;};
          inline string getConnection() const { DARABONBA_PTR_GET_DEFAULT(connection_, "") };
          inline ConsumerConnectionInfoDo& setConnection(string connection) { DARABONBA_PTR_SET_VALUE(connection_, connection) };


          // consumeModel Field Functions 
          bool hasConsumeModel() const { return this->consumeModel_ != nullptr;};
          void deleteConsumeModel() { this->consumeModel_ = nullptr;};
          inline string getConsumeModel() const { DARABONBA_PTR_GET_DEFAULT(consumeModel_, "") };
          inline ConsumerConnectionInfoDo& setConsumeModel(string consumeModel) { DARABONBA_PTR_SET_VALUE(consumeModel_, consumeModel) };


          // consumeType Field Functions 
          bool hasConsumeType() const { return this->consumeType_ != nullptr;};
          void deleteConsumeType() { this->consumeType_ = nullptr;};
          inline string getConsumeType() const { DARABONBA_PTR_GET_DEFAULT(consumeType_, "") };
          inline ConsumerConnectionInfoDo& setConsumeType(string consumeType) { DARABONBA_PTR_SET_VALUE(consumeType_, consumeType) };


          // jstack Field Functions 
          bool hasJstack() const { return this->jstack_ != nullptr;};
          void deleteJstack() { this->jstack_ = nullptr;};
          inline const ConsumerConnectionInfoDo::Jstack & getJstack() const { DARABONBA_PTR_GET_CONST(jstack_, ConsumerConnectionInfoDo::Jstack) };
          inline ConsumerConnectionInfoDo::Jstack getJstack() { DARABONBA_PTR_GET(jstack_, ConsumerConnectionInfoDo::Jstack) };
          inline ConsumerConnectionInfoDo& setJstack(const ConsumerConnectionInfoDo::Jstack & jstack) { DARABONBA_PTR_SET_VALUE(jstack_, jstack) };
          inline ConsumerConnectionInfoDo& setJstack(ConsumerConnectionInfoDo::Jstack && jstack) { DARABONBA_PTR_SET_RVALUE(jstack_, jstack) };


          // language Field Functions 
          bool hasLanguage() const { return this->language_ != nullptr;};
          void deleteLanguage() { this->language_ = nullptr;};
          inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
          inline ConsumerConnectionInfoDo& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


          // lastTimeStamp Field Functions 
          bool hasLastTimeStamp() const { return this->lastTimeStamp_ != nullptr;};
          void deleteLastTimeStamp() { this->lastTimeStamp_ = nullptr;};
          inline int64_t getLastTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimeStamp_, 0L) };
          inline ConsumerConnectionInfoDo& setLastTimeStamp(int64_t lastTimeStamp) { DARABONBA_PTR_SET_VALUE(lastTimeStamp_, lastTimeStamp) };


          // runningDataList Field Functions 
          bool hasRunningDataList() const { return this->runningDataList_ != nullptr;};
          void deleteRunningDataList() { this->runningDataList_ = nullptr;};
          inline const ConsumerConnectionInfoDo::RunningDataList & getRunningDataList() const { DARABONBA_PTR_GET_CONST(runningDataList_, ConsumerConnectionInfoDo::RunningDataList) };
          inline ConsumerConnectionInfoDo::RunningDataList getRunningDataList() { DARABONBA_PTR_GET(runningDataList_, ConsumerConnectionInfoDo::RunningDataList) };
          inline ConsumerConnectionInfoDo& setRunningDataList(const ConsumerConnectionInfoDo::RunningDataList & runningDataList) { DARABONBA_PTR_SET_VALUE(runningDataList_, runningDataList) };
          inline ConsumerConnectionInfoDo& setRunningDataList(ConsumerConnectionInfoDo::RunningDataList && runningDataList) { DARABONBA_PTR_SET_RVALUE(runningDataList_, runningDataList) };


          // startTimeStamp Field Functions 
          bool hasStartTimeStamp() const { return this->startTimeStamp_ != nullptr;};
          void deleteStartTimeStamp() { this->startTimeStamp_ = nullptr;};
          inline int64_t getStartTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(startTimeStamp_, 0L) };
          inline ConsumerConnectionInfoDo& setStartTimeStamp(int64_t startTimeStamp) { DARABONBA_PTR_SET_VALUE(startTimeStamp_, startTimeStamp) };


          // subscriptionSet Field Functions 
          bool hasSubscriptionSet() const { return this->subscriptionSet_ != nullptr;};
          void deleteSubscriptionSet() { this->subscriptionSet_ = nullptr;};
          inline const ConsumerConnectionInfoDo::SubscriptionSet & getSubscriptionSet() const { DARABONBA_PTR_GET_CONST(subscriptionSet_, ConsumerConnectionInfoDo::SubscriptionSet) };
          inline ConsumerConnectionInfoDo::SubscriptionSet getSubscriptionSet() { DARABONBA_PTR_GET(subscriptionSet_, ConsumerConnectionInfoDo::SubscriptionSet) };
          inline ConsumerConnectionInfoDo& setSubscriptionSet(const ConsumerConnectionInfoDo::SubscriptionSet & subscriptionSet) { DARABONBA_PTR_SET_VALUE(subscriptionSet_, subscriptionSet) };
          inline ConsumerConnectionInfoDo& setSubscriptionSet(ConsumerConnectionInfoDo::SubscriptionSet && subscriptionSet) { DARABONBA_PTR_SET_RVALUE(subscriptionSet_, subscriptionSet) };


          // threadCount Field Functions 
          bool hasThreadCount() const { return this->threadCount_ != nullptr;};
          void deleteThreadCount() { this->threadCount_ = nullptr;};
          inline int32_t getThreadCount() const { DARABONBA_PTR_GET_DEFAULT(threadCount_, 0) };
          inline ConsumerConnectionInfoDo& setThreadCount(int32_t threadCount) { DARABONBA_PTR_SET_VALUE(threadCount_, threadCount) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline ConsumerConnectionInfoDo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<string> clientId_ {};
          shared_ptr<string> connection_ {};
          shared_ptr<string> consumeModel_ {};
          shared_ptr<string> consumeType_ {};
          shared_ptr<ConsumerConnectionInfoDo::Jstack> jstack_ {};
          shared_ptr<string> language_ {};
          shared_ptr<int64_t> lastTimeStamp_ {};
          shared_ptr<ConsumerConnectionInfoDo::RunningDataList> runningDataList_ {};
          shared_ptr<int64_t> startTimeStamp_ {};
          shared_ptr<ConsumerConnectionInfoDo::SubscriptionSet> subscriptionSet_ {};
          shared_ptr<int32_t> threadCount_ {};
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->consumerConnectionInfoDo_ == nullptr; };
        // consumerConnectionInfoDo Field Functions 
        bool hasConsumerConnectionInfoDo() const { return this->consumerConnectionInfoDo_ != nullptr;};
        void deleteConsumerConnectionInfoDo() { this->consumerConnectionInfoDo_ = nullptr;};
        inline const vector<ConsumerConnectionInfoList::ConsumerConnectionInfoDo> & getConsumerConnectionInfoDo() const { DARABONBA_PTR_GET_CONST(consumerConnectionInfoDo_, vector<ConsumerConnectionInfoList::ConsumerConnectionInfoDo>) };
        inline vector<ConsumerConnectionInfoList::ConsumerConnectionInfoDo> getConsumerConnectionInfoDo() { DARABONBA_PTR_GET(consumerConnectionInfoDo_, vector<ConsumerConnectionInfoList::ConsumerConnectionInfoDo>) };
        inline ConsumerConnectionInfoList& setConsumerConnectionInfoDo(const vector<ConsumerConnectionInfoList::ConsumerConnectionInfoDo> & consumerConnectionInfoDo) { DARABONBA_PTR_SET_VALUE(consumerConnectionInfoDo_, consumerConnectionInfoDo) };
        inline ConsumerConnectionInfoList& setConsumerConnectionInfoDo(vector<ConsumerConnectionInfoList::ConsumerConnectionInfoDo> && consumerConnectionInfoDo) { DARABONBA_PTR_SET_RVALUE(consumerConnectionInfoDo_, consumerConnectionInfoDo) };


      protected:
        shared_ptr<vector<ConsumerConnectionInfoList::ConsumerConnectionInfoDo>> consumerConnectionInfoDo_ {};
      };

      class ConnectionSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ConnectionSet& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectionDo, connectionDo_);
        };
        friend void from_json(const Darabonba::Json& j, ConnectionSet& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectionDo, connectionDo_);
        };
        ConnectionSet() = default ;
        ConnectionSet(const ConnectionSet &) = default ;
        ConnectionSet(ConnectionSet &&) = default ;
        ConnectionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ConnectionSet() = default ;
        ConnectionSet& operator=(const ConnectionSet &) = default ;
        ConnectionSet& operator=(ConnectionSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConnectionDo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConnectionDo& obj) { 
            DARABONBA_PTR_TO_JSON(ClientAddr, clientAddr_);
            DARABONBA_PTR_TO_JSON(ClientId, clientId_);
            DARABONBA_PTR_TO_JSON(Diff, diff_);
            DARABONBA_PTR_TO_JSON(Language, language_);
            DARABONBA_PTR_TO_JSON(RemoteIP, remoteIP_);
            DARABONBA_PTR_TO_JSON(Version, version_);
          };
          friend void from_json(const Darabonba::Json& j, ConnectionDo& obj) { 
            DARABONBA_PTR_FROM_JSON(ClientAddr, clientAddr_);
            DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
            DARABONBA_PTR_FROM_JSON(Diff, diff_);
            DARABONBA_PTR_FROM_JSON(Language, language_);
            DARABONBA_PTR_FROM_JSON(RemoteIP, remoteIP_);
            DARABONBA_PTR_FROM_JSON(Version, version_);
          };
          ConnectionDo() = default ;
          ConnectionDo(const ConnectionDo &) = default ;
          ConnectionDo(ConnectionDo &&) = default ;
          ConnectionDo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConnectionDo() = default ;
          ConnectionDo& operator=(const ConnectionDo &) = default ;
          ConnectionDo& operator=(ConnectionDo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clientAddr_ == nullptr
        && this->clientId_ == nullptr && this->diff_ == nullptr && this->language_ == nullptr && this->remoteIP_ == nullptr && this->version_ == nullptr; };
          // clientAddr Field Functions 
          bool hasClientAddr() const { return this->clientAddr_ != nullptr;};
          void deleteClientAddr() { this->clientAddr_ = nullptr;};
          inline string getClientAddr() const { DARABONBA_PTR_GET_DEFAULT(clientAddr_, "") };
          inline ConnectionDo& setClientAddr(string clientAddr) { DARABONBA_PTR_SET_VALUE(clientAddr_, clientAddr) };


          // clientId Field Functions 
          bool hasClientId() const { return this->clientId_ != nullptr;};
          void deleteClientId() { this->clientId_ = nullptr;};
          inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
          inline ConnectionDo& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


          // diff Field Functions 
          bool hasDiff() const { return this->diff_ != nullptr;};
          void deleteDiff() { this->diff_ = nullptr;};
          inline int64_t getDiff() const { DARABONBA_PTR_GET_DEFAULT(diff_, 0L) };
          inline ConnectionDo& setDiff(int64_t diff) { DARABONBA_PTR_SET_VALUE(diff_, diff) };


          // language Field Functions 
          bool hasLanguage() const { return this->language_ != nullptr;};
          void deleteLanguage() { this->language_ = nullptr;};
          inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
          inline ConnectionDo& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


          // remoteIP Field Functions 
          bool hasRemoteIP() const { return this->remoteIP_ != nullptr;};
          void deleteRemoteIP() { this->remoteIP_ = nullptr;};
          inline string getRemoteIP() const { DARABONBA_PTR_GET_DEFAULT(remoteIP_, "") };
          inline ConnectionDo& setRemoteIP(string remoteIP) { DARABONBA_PTR_SET_VALUE(remoteIP_, remoteIP) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline ConnectionDo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          shared_ptr<string> clientAddr_ {};
          shared_ptr<string> clientId_ {};
          shared_ptr<int64_t> diff_ {};
          shared_ptr<string> language_ {};
          shared_ptr<string> remoteIP_ {};
          shared_ptr<string> version_ {};
        };

        virtual bool empty() const override { return this->connectionDo_ == nullptr; };
        // connectionDo Field Functions 
        bool hasConnectionDo() const { return this->connectionDo_ != nullptr;};
        void deleteConnectionDo() { this->connectionDo_ = nullptr;};
        inline const vector<ConnectionSet::ConnectionDo> & getConnectionDo() const { DARABONBA_PTR_GET_CONST(connectionDo_, vector<ConnectionSet::ConnectionDo>) };
        inline vector<ConnectionSet::ConnectionDo> getConnectionDo() { DARABONBA_PTR_GET(connectionDo_, vector<ConnectionSet::ConnectionDo>) };
        inline ConnectionSet& setConnectionDo(const vector<ConnectionSet::ConnectionDo> & connectionDo) { DARABONBA_PTR_SET_VALUE(connectionDo_, connectionDo) };
        inline ConnectionSet& setConnectionDo(vector<ConnectionSet::ConnectionDo> && connectionDo) { DARABONBA_PTR_SET_RVALUE(connectionDo_, connectionDo) };


      protected:
        shared_ptr<vector<ConnectionSet::ConnectionDo>> connectionDo_ {};
      };

      virtual bool empty() const override { return this->connectionSet_ == nullptr
        && this->consumeModel_ == nullptr && this->consumeTps_ == nullptr && this->consumerConnectionInfoList_ == nullptr && this->delayTime_ == nullptr && this->detailInTopicList_ == nullptr
        && this->instanceId_ == nullptr && this->lastTimestamp_ == nullptr && this->online_ == nullptr && this->rebalanceOK_ == nullptr && this->subscriptionSame_ == nullptr
        && this->totalDiff_ == nullptr; };
      // connectionSet Field Functions 
      bool hasConnectionSet() const { return this->connectionSet_ != nullptr;};
      void deleteConnectionSet() { this->connectionSet_ = nullptr;};
      inline const Data::ConnectionSet & getConnectionSet() const { DARABONBA_PTR_GET_CONST(connectionSet_, Data::ConnectionSet) };
      inline Data::ConnectionSet getConnectionSet() { DARABONBA_PTR_GET(connectionSet_, Data::ConnectionSet) };
      inline Data& setConnectionSet(const Data::ConnectionSet & connectionSet) { DARABONBA_PTR_SET_VALUE(connectionSet_, connectionSet) };
      inline Data& setConnectionSet(Data::ConnectionSet && connectionSet) { DARABONBA_PTR_SET_RVALUE(connectionSet_, connectionSet) };


      // consumeModel Field Functions 
      bool hasConsumeModel() const { return this->consumeModel_ != nullptr;};
      void deleteConsumeModel() { this->consumeModel_ = nullptr;};
      inline string getConsumeModel() const { DARABONBA_PTR_GET_DEFAULT(consumeModel_, "") };
      inline Data& setConsumeModel(string consumeModel) { DARABONBA_PTR_SET_VALUE(consumeModel_, consumeModel) };


      // consumeTps Field Functions 
      bool hasConsumeTps() const { return this->consumeTps_ != nullptr;};
      void deleteConsumeTps() { this->consumeTps_ = nullptr;};
      inline float getConsumeTps() const { DARABONBA_PTR_GET_DEFAULT(consumeTps_, 0.0) };
      inline Data& setConsumeTps(float consumeTps) { DARABONBA_PTR_SET_VALUE(consumeTps_, consumeTps) };


      // consumerConnectionInfoList Field Functions 
      bool hasConsumerConnectionInfoList() const { return this->consumerConnectionInfoList_ != nullptr;};
      void deleteConsumerConnectionInfoList() { this->consumerConnectionInfoList_ = nullptr;};
      inline const Data::ConsumerConnectionInfoList & getConsumerConnectionInfoList() const { DARABONBA_PTR_GET_CONST(consumerConnectionInfoList_, Data::ConsumerConnectionInfoList) };
      inline Data::ConsumerConnectionInfoList getConsumerConnectionInfoList() { DARABONBA_PTR_GET(consumerConnectionInfoList_, Data::ConsumerConnectionInfoList) };
      inline Data& setConsumerConnectionInfoList(const Data::ConsumerConnectionInfoList & consumerConnectionInfoList) { DARABONBA_PTR_SET_VALUE(consumerConnectionInfoList_, consumerConnectionInfoList) };
      inline Data& setConsumerConnectionInfoList(Data::ConsumerConnectionInfoList && consumerConnectionInfoList) { DARABONBA_PTR_SET_RVALUE(consumerConnectionInfoList_, consumerConnectionInfoList) };


      // delayTime Field Functions 
      bool hasDelayTime() const { return this->delayTime_ != nullptr;};
      void deleteDelayTime() { this->delayTime_ = nullptr;};
      inline int64_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0L) };
      inline Data& setDelayTime(int64_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


      // detailInTopicList Field Functions 
      bool hasDetailInTopicList() const { return this->detailInTopicList_ != nullptr;};
      void deleteDetailInTopicList() { this->detailInTopicList_ = nullptr;};
      inline const Data::DetailInTopicList & getDetailInTopicList() const { DARABONBA_PTR_GET_CONST(detailInTopicList_, Data::DetailInTopicList) };
      inline Data::DetailInTopicList getDetailInTopicList() { DARABONBA_PTR_GET(detailInTopicList_, Data::DetailInTopicList) };
      inline Data& setDetailInTopicList(const Data::DetailInTopicList & detailInTopicList) { DARABONBA_PTR_SET_VALUE(detailInTopicList_, detailInTopicList) };
      inline Data& setDetailInTopicList(Data::DetailInTopicList && detailInTopicList) { DARABONBA_PTR_SET_RVALUE(detailInTopicList_, detailInTopicList) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // lastTimestamp Field Functions 
      bool hasLastTimestamp() const { return this->lastTimestamp_ != nullptr;};
      void deleteLastTimestamp() { this->lastTimestamp_ = nullptr;};
      inline int64_t getLastTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimestamp_, 0L) };
      inline Data& setLastTimestamp(int64_t lastTimestamp) { DARABONBA_PTR_SET_VALUE(lastTimestamp_, lastTimestamp) };


      // online Field Functions 
      bool hasOnline() const { return this->online_ != nullptr;};
      void deleteOnline() { this->online_ = nullptr;};
      inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
      inline Data& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


      // rebalanceOK Field Functions 
      bool hasRebalanceOK() const { return this->rebalanceOK_ != nullptr;};
      void deleteRebalanceOK() { this->rebalanceOK_ = nullptr;};
      inline bool getRebalanceOK() const { DARABONBA_PTR_GET_DEFAULT(rebalanceOK_, false) };
      inline Data& setRebalanceOK(bool rebalanceOK) { DARABONBA_PTR_SET_VALUE(rebalanceOK_, rebalanceOK) };


      // subscriptionSame Field Functions 
      bool hasSubscriptionSame() const { return this->subscriptionSame_ != nullptr;};
      void deleteSubscriptionSame() { this->subscriptionSame_ = nullptr;};
      inline bool getSubscriptionSame() const { DARABONBA_PTR_GET_DEFAULT(subscriptionSame_, false) };
      inline Data& setSubscriptionSame(bool subscriptionSame) { DARABONBA_PTR_SET_VALUE(subscriptionSame_, subscriptionSame) };


      // totalDiff Field Functions 
      bool hasTotalDiff() const { return this->totalDiff_ != nullptr;};
      void deleteTotalDiff() { this->totalDiff_ = nullptr;};
      inline int64_t getTotalDiff() const { DARABONBA_PTR_GET_DEFAULT(totalDiff_, 0L) };
      inline Data& setTotalDiff(int64_t totalDiff) { DARABONBA_PTR_SET_VALUE(totalDiff_, totalDiff) };


    protected:
      shared_ptr<Data::ConnectionSet> connectionSet_ {};
      // The consumption mode. Valid values:
      // 
      // *   **CLUSTERING**: the clustering consumption mode
      // *   **BROADCASTING**: the broadcasting consumption mode
      // 
      // For more information about consumption modes, see [Clustering consumption and broadcasting consumption](https://help.aliyun.com/document_detail/43163.html).
      shared_ptr<string> consumeModel_ {};
      // The TPS for message consumption.
      shared_ptr<float> consumeTps_ {};
      shared_ptr<Data::ConsumerConnectionInfoList> consumerConnectionInfoList_ {};
      // The maximum latency of message consumption in all topics to which the consumer group subscribes. Unit: milliseconds.
      shared_ptr<int64_t> delayTime_ {};
      shared_ptr<Data::DetailInTopicList> detailInTopicList_ {};
      // The ID of the instance
      shared_ptr<string> instanceId_ {};
      // The most recent point in time when a message was consumed.
      // 
      // The value of this parameter is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> lastTimestamp_ {};
      // Indicates whether the consumer group is online.
      shared_ptr<bool> online_ {};
      // Indicates whether load balancing is performed as expected. Valid values:
      // 
      // *   **true**: Load balancing is performed as expected.
      // *   **false**: Load balancing is not performed as expected.
      shared_ptr<bool> rebalanceOK_ {};
      // Indicates whether all consumers in the consumer group subscribe to the same topics and tags.
      shared_ptr<bool> subscriptionSame_ {};
      // The total number of accumulated messages.
      shared_ptr<int64_t> totalDiff_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsConsumerStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsConsumerStatusResponseBody::Data) };
    inline OnsConsumerStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsConsumerStatusResponseBody::Data) };
    inline OnsConsumerStatusResponseBody& setData(const OnsConsumerStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsConsumerStatusResponseBody& setData(OnsConsumerStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsConsumerStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<OnsConsumerStatusResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
