// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCONSUMERGROUPLAGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCONSUMERGROUPLAGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DataLiteTopicLagMapValue.hpp>
#include <alibabacloud/models/DataTopicLagMapValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class GetConsumerGroupLagResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetConsumerGroupLagResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetConsumerGroupLagResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(dynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetConsumerGroupLagResponseBody() = default ;
    GetConsumerGroupLagResponseBody(const GetConsumerGroupLagResponseBody &) = default ;
    GetConsumerGroupLagResponseBody(GetConsumerGroupLagResponseBody &&) = default ;
    GetConsumerGroupLagResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetConsumerGroupLagResponseBody() = default ;
    GetConsumerGroupLagResponseBody& operator=(const GetConsumerGroupLagResponseBody &) = default ;
    GetConsumerGroupLagResponseBody& operator=(GetConsumerGroupLagResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(liteTopicLagMap, liteTopicLagMap_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(topicLagMap, topicLagMap_);
        DARABONBA_PTR_TO_JSON(topicName, topicName_);
        DARABONBA_PTR_TO_JSON(totalLag, totalLag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(consumerGroupId, consumerGroupId_);
        DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(liteTopicLagMap, liteTopicLagMap_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(topicLagMap, topicLagMap_);
        DARABONBA_PTR_FROM_JSON(topicName, topicName_);
        DARABONBA_PTR_FROM_JSON(totalLag, totalLag_);
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
      class TotalLag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TotalLag& obj) { 
          DARABONBA_PTR_TO_JSON(deliveryDuration, deliveryDuration_);
          DARABONBA_PTR_TO_JSON(inflightCount, inflightCount_);
          DARABONBA_PTR_TO_JSON(lastConsumeTimestamp, lastConsumeTimestamp_);
          DARABONBA_PTR_TO_JSON(readyCount, readyCount_);
        };
        friend void from_json(const Darabonba::Json& j, TotalLag& obj) { 
          DARABONBA_PTR_FROM_JSON(deliveryDuration, deliveryDuration_);
          DARABONBA_PTR_FROM_JSON(inflightCount, inflightCount_);
          DARABONBA_PTR_FROM_JSON(lastConsumeTimestamp, lastConsumeTimestamp_);
          DARABONBA_PTR_FROM_JSON(readyCount, readyCount_);
        };
        TotalLag() = default ;
        TotalLag(const TotalLag &) = default ;
        TotalLag(TotalLag &&) = default ;
        TotalLag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TotalLag() = default ;
        TotalLag& operator=(const TotalLag &) = default ;
        TotalLag& operator=(TotalLag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->deliveryDuration_ == nullptr
        && this->inflightCount_ == nullptr && this->lastConsumeTimestamp_ == nullptr && this->readyCount_ == nullptr; };
        // deliveryDuration Field Functions 
        bool hasDeliveryDuration() const { return this->deliveryDuration_ != nullptr;};
        void deleteDeliveryDuration() { this->deliveryDuration_ = nullptr;};
        inline int64_t getDeliveryDuration() const { DARABONBA_PTR_GET_DEFAULT(deliveryDuration_, 0L) };
        inline TotalLag& setDeliveryDuration(int64_t deliveryDuration) { DARABONBA_PTR_SET_VALUE(deliveryDuration_, deliveryDuration) };


        // inflightCount Field Functions 
        bool hasInflightCount() const { return this->inflightCount_ != nullptr;};
        void deleteInflightCount() { this->inflightCount_ = nullptr;};
        inline int64_t getInflightCount() const { DARABONBA_PTR_GET_DEFAULT(inflightCount_, 0L) };
        inline TotalLag& setInflightCount(int64_t inflightCount) { DARABONBA_PTR_SET_VALUE(inflightCount_, inflightCount) };


        // lastConsumeTimestamp Field Functions 
        bool hasLastConsumeTimestamp() const { return this->lastConsumeTimestamp_ != nullptr;};
        void deleteLastConsumeTimestamp() { this->lastConsumeTimestamp_ = nullptr;};
        inline int64_t getLastConsumeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastConsumeTimestamp_, 0L) };
        inline TotalLag& setLastConsumeTimestamp(int64_t lastConsumeTimestamp) { DARABONBA_PTR_SET_VALUE(lastConsumeTimestamp_, lastConsumeTimestamp) };


        // readyCount Field Functions 
        bool hasReadyCount() const { return this->readyCount_ != nullptr;};
        void deleteReadyCount() { this->readyCount_ = nullptr;};
        inline int64_t getReadyCount() const { DARABONBA_PTR_GET_DEFAULT(readyCount_, 0L) };
        inline TotalLag& setReadyCount(int64_t readyCount) { DARABONBA_PTR_SET_VALUE(readyCount_, readyCount) };


      protected:
        // Delivery delay time, in seconds
        shared_ptr<int64_t> deliveryDuration_ {};
        // The number of messages being consumed.
        shared_ptr<int64_t> inflightCount_ {};
        // Last consumption time
        shared_ptr<int64_t> lastConsumeTimestamp_ {};
        // Ready message count
        shared_ptr<int64_t> readyCount_ {};
      };

      virtual bool empty() const override { return this->consumerGroupId_ == nullptr
        && this->instanceId_ == nullptr && this->liteTopicLagMap_ == nullptr && this->regionId_ == nullptr && this->topicLagMap_ == nullptr && this->topicName_ == nullptr
        && this->totalLag_ == nullptr; };
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


      // liteTopicLagMap Field Functions 
      bool hasLiteTopicLagMap() const { return this->liteTopicLagMap_ != nullptr;};
      void deleteLiteTopicLagMap() { this->liteTopicLagMap_ = nullptr;};
      inline const map<string, DataLiteTopicLagMapValue> & getLiteTopicLagMap() const { DARABONBA_PTR_GET_CONST(liteTopicLagMap_, map<string, DataLiteTopicLagMapValue>) };
      inline map<string, DataLiteTopicLagMapValue> getLiteTopicLagMap() { DARABONBA_PTR_GET(liteTopicLagMap_, map<string, DataLiteTopicLagMapValue>) };
      inline Data& setLiteTopicLagMap(const map<string, DataLiteTopicLagMapValue> & liteTopicLagMap) { DARABONBA_PTR_SET_VALUE(liteTopicLagMap_, liteTopicLagMap) };
      inline Data& setLiteTopicLagMap(map<string, DataLiteTopicLagMapValue> && liteTopicLagMap) { DARABONBA_PTR_SET_RVALUE(liteTopicLagMap_, liteTopicLagMap) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // topicLagMap Field Functions 
      bool hasTopicLagMap() const { return this->topicLagMap_ != nullptr;};
      void deleteTopicLagMap() { this->topicLagMap_ = nullptr;};
      inline const map<string, DataTopicLagMapValue> & getTopicLagMap() const { DARABONBA_PTR_GET_CONST(topicLagMap_, map<string, DataTopicLagMapValue>) };
      inline map<string, DataTopicLagMapValue> getTopicLagMap() { DARABONBA_PTR_GET(topicLagMap_, map<string, DataTopicLagMapValue>) };
      inline Data& setTopicLagMap(const map<string, DataTopicLagMapValue> & topicLagMap) { DARABONBA_PTR_SET_VALUE(topicLagMap_, topicLagMap) };
      inline Data& setTopicLagMap(map<string, DataTopicLagMapValue> && topicLagMap) { DARABONBA_PTR_SET_RVALUE(topicLagMap_, topicLagMap) };


      // topicName Field Functions 
      bool hasTopicName() const { return this->topicName_ != nullptr;};
      void deleteTopicName() { this->topicName_ = nullptr;};
      inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
      inline Data& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


      // totalLag Field Functions 
      bool hasTotalLag() const { return this->totalLag_ != nullptr;};
      void deleteTotalLag() { this->totalLag_ = nullptr;};
      inline const Data::TotalLag & getTotalLag() const { DARABONBA_PTR_GET_CONST(totalLag_, Data::TotalLag) };
      inline Data::TotalLag getTotalLag() { DARABONBA_PTR_GET(totalLag_, Data::TotalLag) };
      inline Data& setTotalLag(const Data::TotalLag & totalLag) { DARABONBA_PTR_SET_VALUE(totalLag_, totalLag) };
      inline Data& setTotalLag(Data::TotalLag && totalLag) { DARABONBA_PTR_SET_RVALUE(totalLag_, totalLag) };


    protected:
      // Consumer Group ID
      shared_ptr<string> consumerGroupId_ {};
      // Instance ID
      shared_ptr<string> instanceId_ {};
      shared_ptr<map<string, DataLiteTopicLagMapValue>> liteTopicLagMap_ {};
      // Region ID
      shared_ptr<string> regionId_ {};
      // Backlog for each topic
      shared_ptr<map<string, DataTopicLagMapValue>> topicLagMap_ {};
      shared_ptr<string> topicName_ {};
      // Total lag count
      shared_ptr<Data::TotalLag> totalLag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetConsumerGroupLagResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetConsumerGroupLagResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetConsumerGroupLagResponseBody::Data) };
    inline GetConsumerGroupLagResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetConsumerGroupLagResponseBody::Data) };
    inline GetConsumerGroupLagResponseBody& setData(const GetConsumerGroupLagResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetConsumerGroupLagResponseBody& setData(GetConsumerGroupLagResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetConsumerGroupLagResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetConsumerGroupLagResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetConsumerGroupLagResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetConsumerGroupLagResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetConsumerGroupLagResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetConsumerGroupLagResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetConsumerGroupLagResponseBody::Data> data_ {};
    // Dynamic error code
    shared_ptr<string> dynamicCode_ {};
    // The dynamic error message.
    shared_ptr<string> dynamicMessage_ {};
    // HTTP status code
    shared_ptr<int32_t> httpStatusCode_ {};
    // Error message
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
