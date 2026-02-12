// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSCONSUMERACCUMULATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSCONSUMERACCUMULATERESPONSEBODY_HPP_
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
  class OnsConsumerAccumulateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsConsumerAccumulateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsConsumerAccumulateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsConsumerAccumulateResponseBody() = default ;
    OnsConsumerAccumulateResponseBody(const OnsConsumerAccumulateResponseBody &) = default ;
    OnsConsumerAccumulateResponseBody(OnsConsumerAccumulateResponseBody &&) = default ;
    OnsConsumerAccumulateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsConsumerAccumulateResponseBody() = default ;
    OnsConsumerAccumulateResponseBody& operator=(const OnsConsumerAccumulateResponseBody &) = default ;
    OnsConsumerAccumulateResponseBody& operator=(OnsConsumerAccumulateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumeTps, consumeTps_);
        DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
        DARABONBA_PTR_TO_JSON(DetailInTopicList, detailInTopicList_);
        DARABONBA_PTR_TO_JSON(LastTimestamp, lastTimestamp_);
        DARABONBA_PTR_TO_JSON(Online, online_);
        DARABONBA_PTR_TO_JSON(TotalDiff, totalDiff_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumeTps, consumeTps_);
        DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
        DARABONBA_PTR_FROM_JSON(DetailInTopicList, detailInTopicList_);
        DARABONBA_PTR_FROM_JSON(LastTimestamp, lastTimestamp_);
        DARABONBA_PTR_FROM_JSON(Online, online_);
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

      virtual bool empty() const override { return this->consumeTps_ == nullptr
        && this->delayTime_ == nullptr && this->detailInTopicList_ == nullptr && this->lastTimestamp_ == nullptr && this->online_ == nullptr && this->totalDiff_ == nullptr; };
      // consumeTps Field Functions 
      bool hasConsumeTps() const { return this->consumeTps_ != nullptr;};
      void deleteConsumeTps() { this->consumeTps_ = nullptr;};
      inline float getConsumeTps() const { DARABONBA_PTR_GET_DEFAULT(consumeTps_, 0.0) };
      inline Data& setConsumeTps(float consumeTps) { DARABONBA_PTR_SET_VALUE(consumeTps_, consumeTps) };


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


      // totalDiff Field Functions 
      bool hasTotalDiff() const { return this->totalDiff_ != nullptr;};
      void deleteTotalDiff() { this->totalDiff_ = nullptr;};
      inline int64_t getTotalDiff() const { DARABONBA_PTR_GET_DEFAULT(totalDiff_, 0L) };
      inline Data& setTotalDiff(int64_t totalDiff) { DARABONBA_PTR_SET_VALUE(totalDiff_, totalDiff) };


    protected:
      // The transactions per second (TPS) for message consumption performed by consumers in the group.
      shared_ptr<float> consumeTps_ {};
      // The consumption latency.
      shared_ptr<int64_t> delayTime_ {};
      shared_ptr<Data::DetailInTopicList> detailInTopicList_ {};
      // The point in time when the latest message consumed by a consumer in the consumer group was produced.
      shared_ptr<int64_t> lastTimestamp_ {};
      // Indicates whether the consumer group is online. The consumer group is online if one of the consumers in the group is online. Valid values:
      // 
      // *   **true**: The consumer group is online.
      // *   **false**: The consumer group is offline.
      shared_ptr<bool> online_ {};
      // The total number of accumulated messages in all topics to which the consumer group subscribes.
      shared_ptr<int64_t> totalDiff_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsConsumerAccumulateResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsConsumerAccumulateResponseBody::Data) };
    inline OnsConsumerAccumulateResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsConsumerAccumulateResponseBody::Data) };
    inline OnsConsumerAccumulateResponseBody& setData(const OnsConsumerAccumulateResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsConsumerAccumulateResponseBody& setData(OnsConsumerAccumulateResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsConsumerAccumulateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The message accumulation information about topics to which the specified consumer subscribes.
    shared_ptr<OnsConsumerAccumulateResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
