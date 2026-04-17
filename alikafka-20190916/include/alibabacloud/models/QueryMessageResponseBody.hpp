// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGERESPONSEBODY_HPP_
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
  class QueryMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MessageList, messageList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MessageList, messageList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryMessageResponseBody() = default ;
    QueryMessageResponseBody(const QueryMessageResponseBody &) = default ;
    QueryMessageResponseBody(QueryMessageResponseBody &&) = default ;
    QueryMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageResponseBody() = default ;
    QueryMessageResponseBody& operator=(const QueryMessageResponseBody &) = default ;
    QueryMessageResponseBody& operator=(QueryMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MessageList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MessageList& obj) { 
        DARABONBA_PTR_TO_JSON(Checksum, checksum_);
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(KeyTruncated, keyTruncated_);
        DARABONBA_PTR_TO_JSON(Offset, offset_);
        DARABONBA_PTR_TO_JSON(Partition, partition_);
        DARABONBA_PTR_TO_JSON(SerializedKeySize, serializedKeySize_);
        DARABONBA_PTR_TO_JSON(SerializedValueSize, serializedValueSize_);
        DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_TO_JSON(TimestampType, timestampType_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
        DARABONBA_PTR_TO_JSON(TruncatedKeySize, truncatedKeySize_);
        DARABONBA_PTR_TO_JSON(TruncatedValueSize, truncatedValueSize_);
        DARABONBA_PTR_TO_JSON(Value, value_);
        DARABONBA_PTR_TO_JSON(ValueTruncated, valueTruncated_);
      };
      friend void from_json(const Darabonba::Json& j, MessageList& obj) { 
        DARABONBA_PTR_FROM_JSON(Checksum, checksum_);
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(KeyTruncated, keyTruncated_);
        DARABONBA_PTR_FROM_JSON(Offset, offset_);
        DARABONBA_PTR_FROM_JSON(Partition, partition_);
        DARABONBA_PTR_FROM_JSON(SerializedKeySize, serializedKeySize_);
        DARABONBA_PTR_FROM_JSON(SerializedValueSize, serializedValueSize_);
        DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
        DARABONBA_PTR_FROM_JSON(TimestampType, timestampType_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
        DARABONBA_PTR_FROM_JSON(TruncatedKeySize, truncatedKeySize_);
        DARABONBA_PTR_FROM_JSON(TruncatedValueSize, truncatedValueSize_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
        DARABONBA_PTR_FROM_JSON(ValueTruncated, valueTruncated_);
      };
      MessageList() = default ;
      MessageList(const MessageList &) = default ;
      MessageList(MessageList &&) = default ;
      MessageList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MessageList() = default ;
      MessageList& operator=(const MessageList &) = default ;
      MessageList& operator=(MessageList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checksum_ == nullptr
        && this->key_ == nullptr && this->keyTruncated_ == nullptr && this->offset_ == nullptr && this->partition_ == nullptr && this->serializedKeySize_ == nullptr
        && this->serializedValueSize_ == nullptr && this->timestamp_ == nullptr && this->timestampType_ == nullptr && this->topic_ == nullptr && this->truncatedKeySize_ == nullptr
        && this->truncatedValueSize_ == nullptr && this->value_ == nullptr && this->valueTruncated_ == nullptr; };
      // checksum Field Functions 
      bool hasChecksum() const { return this->checksum_ != nullptr;};
      void deleteChecksum() { this->checksum_ = nullptr;};
      inline int64_t getChecksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, 0L) };
      inline MessageList& setChecksum(int64_t checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline MessageList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // keyTruncated Field Functions 
      bool hasKeyTruncated() const { return this->keyTruncated_ != nullptr;};
      void deleteKeyTruncated() { this->keyTruncated_ = nullptr;};
      inline bool getKeyTruncated() const { DARABONBA_PTR_GET_DEFAULT(keyTruncated_, false) };
      inline MessageList& setKeyTruncated(bool keyTruncated) { DARABONBA_PTR_SET_VALUE(keyTruncated_, keyTruncated) };


      // offset Field Functions 
      bool hasOffset() const { return this->offset_ != nullptr;};
      void deleteOffset() { this->offset_ = nullptr;};
      inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
      inline MessageList& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


      // partition Field Functions 
      bool hasPartition() const { return this->partition_ != nullptr;};
      void deletePartition() { this->partition_ = nullptr;};
      inline int64_t getPartition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0L) };
      inline MessageList& setPartition(int64_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


      // serializedKeySize Field Functions 
      bool hasSerializedKeySize() const { return this->serializedKeySize_ != nullptr;};
      void deleteSerializedKeySize() { this->serializedKeySize_ = nullptr;};
      inline int32_t getSerializedKeySize() const { DARABONBA_PTR_GET_DEFAULT(serializedKeySize_, 0) };
      inline MessageList& setSerializedKeySize(int32_t serializedKeySize) { DARABONBA_PTR_SET_VALUE(serializedKeySize_, serializedKeySize) };


      // serializedValueSize Field Functions 
      bool hasSerializedValueSize() const { return this->serializedValueSize_ != nullptr;};
      void deleteSerializedValueSize() { this->serializedValueSize_ = nullptr;};
      inline int32_t getSerializedValueSize() const { DARABONBA_PTR_GET_DEFAULT(serializedValueSize_, 0) };
      inline MessageList& setSerializedValueSize(int32_t serializedValueSize) { DARABONBA_PTR_SET_VALUE(serializedValueSize_, serializedValueSize) };


      // timestamp Field Functions 
      bool hasTimestamp() const { return this->timestamp_ != nullptr;};
      void deleteTimestamp() { this->timestamp_ = nullptr;};
      inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
      inline MessageList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


      // timestampType Field Functions 
      bool hasTimestampType() const { return this->timestampType_ != nullptr;};
      void deleteTimestampType() { this->timestampType_ = nullptr;};
      inline string getTimestampType() const { DARABONBA_PTR_GET_DEFAULT(timestampType_, "") };
      inline MessageList& setTimestampType(string timestampType) { DARABONBA_PTR_SET_VALUE(timestampType_, timestampType) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline MessageList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      // truncatedKeySize Field Functions 
      bool hasTruncatedKeySize() const { return this->truncatedKeySize_ != nullptr;};
      void deleteTruncatedKeySize() { this->truncatedKeySize_ = nullptr;};
      inline int32_t getTruncatedKeySize() const { DARABONBA_PTR_GET_DEFAULT(truncatedKeySize_, 0) };
      inline MessageList& setTruncatedKeySize(int32_t truncatedKeySize) { DARABONBA_PTR_SET_VALUE(truncatedKeySize_, truncatedKeySize) };


      // truncatedValueSize Field Functions 
      bool hasTruncatedValueSize() const { return this->truncatedValueSize_ != nullptr;};
      void deleteTruncatedValueSize() { this->truncatedValueSize_ = nullptr;};
      inline int32_t getTruncatedValueSize() const { DARABONBA_PTR_GET_DEFAULT(truncatedValueSize_, 0) };
      inline MessageList& setTruncatedValueSize(int32_t truncatedValueSize) { DARABONBA_PTR_SET_VALUE(truncatedValueSize_, truncatedValueSize) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline MessageList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      // valueTruncated Field Functions 
      bool hasValueTruncated() const { return this->valueTruncated_ != nullptr;};
      void deleteValueTruncated() { this->valueTruncated_ = nullptr;};
      inline bool getValueTruncated() const { DARABONBA_PTR_GET_DEFAULT(valueTruncated_, false) };
      inline MessageList& setValueTruncated(bool valueTruncated) { DARABONBA_PTR_SET_VALUE(valueTruncated_, valueTruncated) };


    protected:
      // The check value of the chaincode.
      shared_ptr<int64_t> checksum_ {};
      // The message key.
      shared_ptr<string> key_ {};
      // Indicates whether the key is truncated.
      shared_ptr<bool> keyTruncated_ {};
      // The consumer offset of the partition.
      shared_ptr<int64_t> offset_ {};
      // The partition ID.
      shared_ptr<int64_t> partition_ {};
      // The size of the key after serialization. Unit: bytes.
      shared_ptr<int32_t> serializedKeySize_ {};
      // The size of the value after serialization. Unit: bytes.
      shared_ptr<int32_t> serializedValueSize_ {};
      // The time when the message was created. The value of this parameter is a UNIX timestamp in milliseconds.
      shared_ptr<int64_t> timestamp_ {};
      // The time type.
      shared_ptr<string> timestampType_ {};
      // The topic name.
      shared_ptr<string> topic_ {};
      // The truncated size of the message key. Unit: bytes.
      // 
      // >  A maximum of 1 KB of content can be displayed for each message. Content that exceeds 1 KB is automatically truncated. For more information, see [Query messages](https://help.aliyun.com/document_detail/113172.html).
      shared_ptr<int32_t> truncatedKeySize_ {};
      // The truncated size of the message value. Unit: bytes.
      // 
      // >  A maximum of 1 KB of content can be displayed for each message. Content that exceeds 1 KB is automatically truncated. For more information, see [Query messages](https://help.aliyun.com/document_detail/113172.html).
      shared_ptr<int32_t> truncatedValueSize_ {};
      // The message value.
      shared_ptr<string> value_ {};
      // Indicates whether the value is truncated.
      shared_ptr<bool> valueTruncated_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->messageList_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryMessageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMessageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // messageList Field Functions 
    bool hasMessageList() const { return this->messageList_ != nullptr;};
    void deleteMessageList() { this->messageList_ = nullptr;};
    inline const vector<QueryMessageResponseBody::MessageList> & getMessageList() const { DARABONBA_PTR_GET_CONST(messageList_, vector<QueryMessageResponseBody::MessageList>) };
    inline vector<QueryMessageResponseBody::MessageList> getMessageList() { DARABONBA_PTR_GET(messageList_, vector<QueryMessageResponseBody::MessageList>) };
    inline QueryMessageResponseBody& setMessageList(const vector<QueryMessageResponseBody::MessageList> & messageList) { DARABONBA_PTR_SET_VALUE(messageList_, messageList) };
    inline QueryMessageResponseBody& setMessageList(vector<QueryMessageResponseBody::MessageList> && messageList) { DARABONBA_PTR_SET_RVALUE(messageList_, messageList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryMessageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The returned HTTP status code. If the request is successful, 200 is returned.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The messages.
    shared_ptr<vector<QueryMessageResponseBody::MessageList>> messageList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
