// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ONSMESSAGETRACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ONSMESSAGETRACERESPONSEBODY_HPP_
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
  class OnsMessageTraceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OnsMessageTraceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, OnsMessageTraceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    OnsMessageTraceResponseBody() = default ;
    OnsMessageTraceResponseBody(const OnsMessageTraceResponseBody &) = default ;
    OnsMessageTraceResponseBody(OnsMessageTraceResponseBody &&) = default ;
    OnsMessageTraceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OnsMessageTraceResponseBody() = default ;
    OnsMessageTraceResponseBody& operator=(const OnsMessageTraceResponseBody &) = default ;
    OnsMessageTraceResponseBody& operator=(OnsMessageTraceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(MessageTrack, messageTrack_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(MessageTrack, messageTrack_);
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
      class MessageTrack : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MessageTrack& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumerGroup, consumerGroup_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(TrackType, trackType_);
        };
        friend void from_json(const Darabonba::Json& j, MessageTrack& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumerGroup, consumerGroup_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(TrackType, trackType_);
        };
        MessageTrack() = default ;
        MessageTrack(const MessageTrack &) = default ;
        MessageTrack(MessageTrack &&) = default ;
        MessageTrack(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MessageTrack() = default ;
        MessageTrack& operator=(const MessageTrack &) = default ;
        MessageTrack& operator=(MessageTrack &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerGroup_ == nullptr
        && this->instanceId_ == nullptr && this->trackType_ == nullptr; };
        // consumerGroup Field Functions 
        bool hasConsumerGroup() const { return this->consumerGroup_ != nullptr;};
        void deleteConsumerGroup() { this->consumerGroup_ = nullptr;};
        inline string getConsumerGroup() const { DARABONBA_PTR_GET_DEFAULT(consumerGroup_, "") };
        inline MessageTrack& setConsumerGroup(string consumerGroup) { DARABONBA_PTR_SET_VALUE(consumerGroup_, consumerGroup) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline MessageTrack& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // trackType Field Functions 
        bool hasTrackType() const { return this->trackType_ != nullptr;};
        void deleteTrackType() { this->trackType_ = nullptr;};
        inline string getTrackType() const { DARABONBA_PTR_GET_DEFAULT(trackType_, "") };
        inline MessageTrack& setTrackType(string trackType) { DARABONBA_PTR_SET_VALUE(trackType_, trackType) };


      protected:
        shared_ptr<string> consumerGroup_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> trackType_ {};
      };

      virtual bool empty() const override { return this->messageTrack_ == nullptr; };
      // messageTrack Field Functions 
      bool hasMessageTrack() const { return this->messageTrack_ != nullptr;};
      void deleteMessageTrack() { this->messageTrack_ = nullptr;};
      inline const vector<Data::MessageTrack> & getMessageTrack() const { DARABONBA_PTR_GET_CONST(messageTrack_, vector<Data::MessageTrack>) };
      inline vector<Data::MessageTrack> getMessageTrack() { DARABONBA_PTR_GET(messageTrack_, vector<Data::MessageTrack>) };
      inline Data& setMessageTrack(const vector<Data::MessageTrack> & messageTrack) { DARABONBA_PTR_SET_VALUE(messageTrack_, messageTrack) };
      inline Data& setMessageTrack(vector<Data::MessageTrack> && messageTrack) { DARABONBA_PTR_SET_RVALUE(messageTrack_, messageTrack) };


    protected:
      shared_ptr<vector<Data::MessageTrack>> messageTrack_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const OnsMessageTraceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, OnsMessageTraceResponseBody::Data) };
    inline OnsMessageTraceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, OnsMessageTraceResponseBody::Data) };
    inline OnsMessageTraceResponseBody& setData(const OnsMessageTraceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline OnsMessageTraceResponseBody& setData(OnsMessageTraceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OnsMessageTraceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<OnsMessageTraceResponseBody::Data> data_ {};
    // The ID of the request. This parameter is a common parameter. Each request has a unique ID. You can use this ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ons20190214
#endif
