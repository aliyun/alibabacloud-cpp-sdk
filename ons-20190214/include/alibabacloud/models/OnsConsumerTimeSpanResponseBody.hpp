// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSCONSUMERTIMESPANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSCONSUMERTIMESPANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ons20190214
{
namespace Models
{
  class OnsConsumerTimeSpanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsConsumerTimeSpanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsConsumerTimeSpanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsConsumerTimeSpanResponseBody() = default ;
    OnsConsumerTimeSpanResponseBody(const OnsConsumerTimeSpanResponseBody &) = default ;
    OnsConsumerTimeSpanResponseBody(OnsConsumerTimeSpanResponseBody &&) = default ;
    OnsConsumerTimeSpanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsConsumerTimeSpanResponseBody() = default ;
    OnsConsumerTimeSpanResponseBody& operator=(const OnsConsumerTimeSpanResponseBody &) = default ;
    OnsConsumerTimeSpanResponseBody& operator=(OnsConsumerTimeSpanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumeTimeStamp, consumeTimeStamp_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(MaxTimeStamp, maxTimeStamp_);
        DARABONBA_PTR_TO_JSON(MinTimeStamp, minTimeStamp_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumeTimeStamp, consumeTimeStamp_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(MaxTimeStamp, maxTimeStamp_);
        DARABONBA_PTR_FROM_JSON(MinTimeStamp, minTimeStamp_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
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
      virtual bool empty() const override { return this->consumeTimeStamp_ == nullptr
        && this->instanceId_ == nullptr && this->maxTimeStamp_ == nullptr && this->minTimeStamp_ == nullptr && this->topic_ == nullptr; };
      // consumeTimeStamp Field Functions 
      bool hasConsumeTimeStamp() const { return this->consumeTimeStamp_ != nullptr;};
      void deleteConsumeTimeStamp() { this->consumeTimeStamp_ = nullptr;};
      inline int64_t getConsumeTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(consumeTimeStamp_, 0L) };
      inline Data& setConsumeTimeStamp(int64_t consumeTimeStamp) { DARABONBA_PTR_SET_VALUE(consumeTimeStamp_, consumeTimeStamp) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // maxTimeStamp Field Functions 
      bool hasMaxTimeStamp() const { return this->maxTimeStamp_ != nullptr;};
      void deleteMaxTimeStamp() { this->maxTimeStamp_ = nullptr;};
      inline int64_t getMaxTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(maxTimeStamp_, 0L) };
      inline Data& setMaxTimeStamp(int64_t maxTimeStamp) { DARABONBA_PTR_SET_VALUE(maxTimeStamp_, maxTimeStamp) };


      // minTimeStamp Field Functions 
      bool hasMinTimeStamp() const { return this->minTimeStamp_ != nullptr;};
      void deleteMinTimeStamp() { this->minTimeStamp_ = nullptr;};
      inline int64_t getMinTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(minTimeStamp_, 0L) };
      inline Data& setMinTimeStamp(int64_t minTimeStamp) { DARABONBA_PTR_SET_VALUE(minTimeStamp_, minTimeStamp) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline Data& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    protected:
      // The most recent point in time when a message in the topic was consumed by the customer group.
      shared_ptr<int64_t> consumeTimeStamp_ {};
      // The ID of the instance to which the consumer group belongs.
      shared_ptr<string> instanceId_ {};
      // The point in time when the most recently stored message was published to the topic.
      shared_ptr<int64_t> maxTimeStamp_ {};
      // The point in time when the earliest stored message was published to the topic.
      shared_ptr<int64_t> minTimeStamp_ {};
      // The name of the topic that you want to query.
      shared_ptr<string> topic_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsConsumerTimeSpanResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsConsumerTimeSpanResponseBody::Data) };
    inline OnsConsumerTimeSpanResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsConsumerTimeSpanResponseBody::Data) };
    inline OnsConsumerTimeSpanResponseBody& setData(const OnsConsumerTimeSpanResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsConsumerTimeSpanResponseBody& setData(OnsConsumerTimeSpanResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsConsumerTimeSpanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<OnsConsumerTimeSpanResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
