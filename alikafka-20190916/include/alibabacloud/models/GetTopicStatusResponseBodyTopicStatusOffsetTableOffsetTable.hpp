// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODYTOPICSTATUSOFFSETTABLEOFFSETTABLE_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODYTOPICSTATUSOFFSETTABLEOFFSETTABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable& obj) { 
      DARABONBA_PTR_TO_JSON(LastUpdateTimestamp, lastUpdateTimestamp_);
      DARABONBA_PTR_TO_JSON(MaxOffset, maxOffset_);
      DARABONBA_PTR_TO_JSON(MinOffset, minOffset_);
      DARABONBA_PTR_TO_JSON(Partition, partition_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable& obj) { 
      DARABONBA_PTR_FROM_JSON(LastUpdateTimestamp, lastUpdateTimestamp_);
      DARABONBA_PTR_FROM_JSON(MaxOffset, maxOffset_);
      DARABONBA_PTR_FROM_JSON(MinOffset, minOffset_);
      DARABONBA_PTR_FROM_JSON(Partition, partition_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable() = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable(const GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable &) = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable(GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable &&) = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable() = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable& operator=(const GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable &) = default ;
    GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable& operator=(GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lastUpdateTimestamp_ != nullptr
        && this->maxOffset_ != nullptr && this->minOffset_ != nullptr && this->partition_ != nullptr && this->topic_ != nullptr; };
    // lastUpdateTimestamp Field Functions 
    bool hasLastUpdateTimestamp() const { return this->lastUpdateTimestamp_ != nullptr;};
    void deleteLastUpdateTimestamp() { this->lastUpdateTimestamp_ = nullptr;};
    inline int64_t lastUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTimestamp_, 0L) };
    inline GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable& setLastUpdateTimestamp(int64_t lastUpdateTimestamp) { DARABONBA_PTR_SET_VALUE(lastUpdateTimestamp_, lastUpdateTimestamp) };


    // maxOffset Field Functions 
    bool hasMaxOffset() const { return this->maxOffset_ != nullptr;};
    void deleteMaxOffset() { this->maxOffset_ = nullptr;};
    inline int64_t maxOffset() const { DARABONBA_PTR_GET_DEFAULT(maxOffset_, 0L) };
    inline GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable& setMaxOffset(int64_t maxOffset) { DARABONBA_PTR_SET_VALUE(maxOffset_, maxOffset) };


    // minOffset Field Functions 
    bool hasMinOffset() const { return this->minOffset_ != nullptr;};
    void deleteMinOffset() { this->minOffset_ = nullptr;};
    inline int64_t minOffset() const { DARABONBA_PTR_GET_DEFAULT(minOffset_, 0L) };
    inline GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable& setMinOffset(int64_t minOffset) { DARABONBA_PTR_SET_VALUE(minOffset_, minOffset) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline int32_t partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
    inline GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetTopicStatusResponseBodyTopicStatusOffsetTableOffsetTable& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // The last time when the partition was modified.
    std::shared_ptr<int64_t> lastUpdateTimestamp_ = nullptr;
    // The latest offset in the partition of the topic.
    std::shared_ptr<int64_t> maxOffset_ = nullptr;
    // The earliest offset in the partition of the topic.
    std::shared_ptr<int64_t> minOffset_ = nullptr;
    // The ID of the partition.
    std::shared_ptr<int32_t> partition_ = nullptr;
    // The name of the topic.
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
