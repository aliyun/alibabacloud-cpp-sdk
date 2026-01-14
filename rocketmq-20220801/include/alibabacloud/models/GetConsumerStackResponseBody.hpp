// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERSTACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERSTACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerStackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerStackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerStackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetConsumerStackResponseBody() = default ;
    GetConsumerStackResponseBody(const GetConsumerStackResponseBody &) = default ;
    GetConsumerStackResponseBody(GetConsumerStackResponseBody &&) = default ;
    GetConsumerStackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerStackResponseBody() = default ;
    GetConsumerStackResponseBody& operator=(const GetConsumerStackResponseBody &) = default ;
    GetConsumerStackResponseBody& operator=(GetConsumerStackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(stacks, stacks_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(stacks, stacks_);
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
      class Stacks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Stacks& obj) { 
          DARABONBA_PTR_TO_JSON(thread, thread_);
          DARABONBA_PTR_TO_JSON(tracks, tracks_);
        };
        friend void from_json(const Darabonba::Json& j, Stacks& obj) { 
          DARABONBA_PTR_FROM_JSON(thread, thread_);
          DARABONBA_PTR_FROM_JSON(tracks, tracks_);
        };
        Stacks() = default ;
        Stacks(const Stacks &) = default ;
        Stacks(Stacks &&) = default ;
        Stacks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Stacks() = default ;
        Stacks& operator=(const Stacks &) = default ;
        Stacks& operator=(Stacks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->thread_ == nullptr
        && this->tracks_ == nullptr; };
        // thread Field Functions 
        bool hasThread() const { return this->thread_ != nullptr;};
        void deleteThread() { this->thread_ = nullptr;};
        inline string getThread() const { DARABONBA_PTR_GET_DEFAULT(thread_, "") };
        inline Stacks& setThread(string thread) { DARABONBA_PTR_SET_VALUE(thread_, thread) };


        // tracks Field Functions 
        bool hasTracks() const { return this->tracks_ != nullptr;};
        void deleteTracks() { this->tracks_ = nullptr;};
        inline const vector<string> & getTracks() const { DARABONBA_PTR_GET_CONST(tracks_, vector<string>) };
        inline vector<string> getTracks() { DARABONBA_PTR_GET(tracks_, vector<string>) };
        inline Stacks& setTracks(const vector<string> & tracks) { DARABONBA_PTR_SET_VALUE(tracks_, tracks) };
        inline Stacks& setTracks(vector<string> && tracks) { DARABONBA_PTR_SET_RVALUE(tracks_, tracks) };


      protected:
        // Thread id.
        shared_ptr<string> thread_ {};
        // Stack Information.
        shared_ptr<vector<string>> tracks_ {};
      };

      virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->stacks_ == nullptr; };
      // consumerGroupId Field Functions 
      bool hasConsumerGroupId() const { return this->consumerGroupId_ != nullptr;};
      void deleteConsumerGroupId() { this->consumerGroupId_ = nullptr;};
      inline string getConsumerGroupId() const { DARABONBA_PTR_GET_DEFAULT(consumerGroupId_, "") };
      inline Data& setConsumerGroupId(string consumerGroupId) { DARABONBA_PTR_SET_VALUE(consumerGroupId_, consumerGroupId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // stacks Field Functions 
      bool hasStacks() const { return this->stacks_ != nullptr;};
      void deleteStacks() { this->stacks_ = nullptr;};
      inline const vector<Data::Stacks> & getStacks() const { DARABONBA_PTR_GET_CONST(stacks_, vector<Data::Stacks>) };
      inline vector<Data::Stacks> getStacks() { DARABONBA_PTR_GET(stacks_, vector<Data::Stacks>) };
      inline Data& setStacks(const vector<Data::Stacks> & stacks) { DARABONBA_PTR_SET_VALUE(stacks_, stacks) };
      inline Data& setStacks(vector<Data::Stacks> && stacks) { DARABONBA_PTR_SET_RVALUE(stacks_, stacks) };


    protected:
      // The ID of the consumer group.
      shared_ptr<string> consumerGroupId_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // Stack Information.
      shared_ptr<vector<Data::Stacks>> stacks_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConsumerStackResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConsumerStackResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConsumerStackResponseBody::Data) };
    inline GetConsumerStackResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConsumerStackResponseBody::Data) };
    inline GetConsumerStackResponseBody& setData(const GetConsumerStackResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConsumerStackResponseBody& setData(GetConsumerStackResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetConsumerStackResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetConsumerStackResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetConsumerStackResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumerStackResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumerStackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConsumerStackResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetConsumerStackResponseBody::Data> data_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
