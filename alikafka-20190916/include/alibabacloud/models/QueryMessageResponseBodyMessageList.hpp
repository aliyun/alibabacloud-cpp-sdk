// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMESSAGERESPONSEBODYMESSAGELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYMESSAGERESPONSEBODYMESSAGELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class QueryMessageResponseBodyMessageList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMessageResponseBodyMessageList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, QueryMessageResponseBodyMessageList& obj) { 
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
    QueryMessageResponseBodyMessageList() = default ;
    QueryMessageResponseBodyMessageList(const QueryMessageResponseBodyMessageList &) = default ;
    QueryMessageResponseBodyMessageList(QueryMessageResponseBodyMessageList &&) = default ;
    QueryMessageResponseBodyMessageList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMessageResponseBodyMessageList() = default ;
    QueryMessageResponseBodyMessageList& operator=(const QueryMessageResponseBodyMessageList &) = default ;
    QueryMessageResponseBodyMessageList& operator=(QueryMessageResponseBodyMessageList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checksum_ == nullptr
        && return this->key_ == nullptr && return this->keyTruncated_ == nullptr && return this->offset_ == nullptr && return this->partition_ == nullptr && return this->serializedKeySize_ == nullptr
        && return this->serializedValueSize_ == nullptr && return this->timestamp_ == nullptr && return this->timestampType_ == nullptr && return this->topic_ == nullptr && return this->truncatedKeySize_ == nullptr
        && return this->truncatedValueSize_ == nullptr && return this->value_ == nullptr && return this->valueTruncated_ == nullptr; };
    // checksum Field Functions 
    bool hasChecksum() const { return this->checksum_ != nullptr;};
    void deleteChecksum() { this->checksum_ = nullptr;};
    inline int64_t checksum() const { DARABONBA_PTR_GET_DEFAULT(checksum_, 0L) };
    inline QueryMessageResponseBodyMessageList& setChecksum(int64_t checksum) { DARABONBA_PTR_SET_VALUE(checksum_, checksum) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline QueryMessageResponseBodyMessageList& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // keyTruncated Field Functions 
    bool hasKeyTruncated() const { return this->keyTruncated_ != nullptr;};
    void deleteKeyTruncated() { this->keyTruncated_ = nullptr;};
    inline bool keyTruncated() const { DARABONBA_PTR_GET_DEFAULT(keyTruncated_, false) };
    inline QueryMessageResponseBodyMessageList& setKeyTruncated(bool keyTruncated) { DARABONBA_PTR_SET_VALUE(keyTruncated_, keyTruncated) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline QueryMessageResponseBodyMessageList& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int64_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0L) };
    inline QueryMessageResponseBodyMessageList& setPartition(int64_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // serializedKeySize Field Functions 
    bool hasSerializedKeySize() const { return this->serializedKeySize_ != nullptr;};
    void deleteSerializedKeySize() { this->serializedKeySize_ = nullptr;};
    inline int32_t serializedKeySize() const { DARABONBA_PTR_GET_DEFAULT(serializedKeySize_, 0) };
    inline QueryMessageResponseBodyMessageList& setSerializedKeySize(int32_t serializedKeySize) { DARABONBA_PTR_SET_VALUE(serializedKeySize_, serializedKeySize) };


    // serializedValueSize Field Functions 
    bool hasSerializedValueSize() const { return this->serializedValueSize_ != nullptr;};
    void deleteSerializedValueSize() { this->serializedValueSize_ = nullptr;};
    inline int32_t serializedValueSize() const { DARABONBA_PTR_GET_DEFAULT(serializedValueSize_, 0) };
    inline QueryMessageResponseBodyMessageList& setSerializedValueSize(int32_t serializedValueSize) { DARABONBA_PTR_SET_VALUE(serializedValueSize_, serializedValueSize) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline QueryMessageResponseBodyMessageList& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // timestampType Field Functions 
    bool hasTimestampType() const { return this->timestampType_ != nullptr;};
    void deleteTimestampType() { this->timestampType_ = nullptr;};
    inline string timestampType() const { DARABONBA_PTR_GET_DEFAULT(timestampType_, "") };
    inline QueryMessageResponseBodyMessageList& setTimestampType(string timestampType) { DARABONBA_PTR_SET_VALUE(timestampType_, timestampType) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline QueryMessageResponseBodyMessageList& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // truncatedKeySize Field Functions 
    bool hasTruncatedKeySize() const { return this->truncatedKeySize_ != nullptr;};
    void deleteTruncatedKeySize() { this->truncatedKeySize_ = nullptr;};
    inline int32_t truncatedKeySize() const { DARABONBA_PTR_GET_DEFAULT(truncatedKeySize_, 0) };
    inline QueryMessageResponseBodyMessageList& setTruncatedKeySize(int32_t truncatedKeySize) { DARABONBA_PTR_SET_VALUE(truncatedKeySize_, truncatedKeySize) };


    // truncatedValueSize Field Functions 
    bool hasTruncatedValueSize() const { return this->truncatedValueSize_ != nullptr;};
    void deleteTruncatedValueSize() { this->truncatedValueSize_ = nullptr;};
    inline int32_t truncatedValueSize() const { DARABONBA_PTR_GET_DEFAULT(truncatedValueSize_, 0) };
    inline QueryMessageResponseBodyMessageList& setTruncatedValueSize(int32_t truncatedValueSize) { DARABONBA_PTR_SET_VALUE(truncatedValueSize_, truncatedValueSize) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline QueryMessageResponseBodyMessageList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // valueTruncated Field Functions 
    bool hasValueTruncated() const { return this->valueTruncated_ != nullptr;};
    void deleteValueTruncated() { this->valueTruncated_ = nullptr;};
    inline bool valueTruncated() const { DARABONBA_PTR_GET_DEFAULT(valueTruncated_, false) };
    inline QueryMessageResponseBodyMessageList& setValueTruncated(bool valueTruncated) { DARABONBA_PTR_SET_VALUE(valueTruncated_, valueTruncated) };


  protected:
    // The check value of the chaincode.
    std::shared_ptr<int64_t> checksum_ = nullptr;
    // The message key.
    std::shared_ptr<string> key_ = nullptr;
    // Indicates whether the key is truncated.
    std::shared_ptr<bool> keyTruncated_ = nullptr;
    // The consumer offset of the partition.
    std::shared_ptr<int64_t> offset_ = nullptr;
    // The partition ID.
    std::shared_ptr<int64_t> partition_ = nullptr;
    // The size of the key after serialization. Unit: bytes.
    std::shared_ptr<int32_t> serializedKeySize_ = nullptr;
    // The size of the value after serialization. Unit: bytes.
    std::shared_ptr<int32_t> serializedValueSize_ = nullptr;
    // The time when the message was created. The value of this parameter is a UNIX timestamp in milliseconds.
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    // The time type.
    std::shared_ptr<string> timestampType_ = nullptr;
    // The topic name.
    std::shared_ptr<string> topic_ = nullptr;
    // The truncated size of the message key. Unit: bytes.
    // 
    // >  A maximum of 1 KB of content can be displayed for each message. Content that exceeds 1 KB is automatically truncated. For more information, see [Query messages](https://help.aliyun.com/document_detail/113172.html).
    std::shared_ptr<int32_t> truncatedKeySize_ = nullptr;
    // The truncated size of the message value. Unit: bytes.
    // 
    // >  A maximum of 1 KB of content can be displayed for each message. Content that exceeds 1 KB is automatically truncated. For more information, see [Query messages](https://help.aliyun.com/document_detail/113172.html).
    std::shared_ptr<int32_t> truncatedValueSize_ = nullptr;
    // The message value.
    std::shared_ptr<string> value_ = nullptr;
    // Indicates whether the value is truncated.
    std::shared_ptr<bool> valueTruncated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
