// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSTATUSRESPONSEBODY_HPP_
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
  class GetTopicStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TopicStatus, topicStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TopicStatus, topicStatus_);
    };
    GetTopicStatusResponseBody() = default ;
    GetTopicStatusResponseBody(const GetTopicStatusResponseBody &) = default ;
    GetTopicStatusResponseBody(GetTopicStatusResponseBody &&) = default ;
    GetTopicStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicStatusResponseBody() = default ;
    GetTopicStatusResponseBody& operator=(const GetTopicStatusResponseBody &) = default ;
    GetTopicStatusResponseBody& operator=(GetTopicStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopicStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopicStatus& obj) { 
        DARABONBA_PTR_TO_JSON(LastTimeStamp, lastTimeStamp_);
        DARABONBA_PTR_TO_JSON(OffsetTable, offsetTable_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, TopicStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(LastTimeStamp, lastTimeStamp_);
        DARABONBA_PTR_FROM_JSON(OffsetTable, offsetTable_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      TopicStatus() = default ;
      TopicStatus(const TopicStatus &) = default ;
      TopicStatus(TopicStatus &&) = default ;
      TopicStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopicStatus() = default ;
      TopicStatus& operator=(const TopicStatus &) = default ;
      TopicStatus& operator=(TopicStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OffsetTable : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OffsetTable& obj) { 
          DARABONBA_PTR_TO_JSON(OffsetTable, offsetTable_);
        };
        friend void from_json(const Darabonba::Json& j, OffsetTable& obj) { 
          DARABONBA_PTR_FROM_JSON(OffsetTable, offsetTable_);
        };
        OffsetTable() = default ;
        OffsetTable(const OffsetTable &) = default ;
        OffsetTable(OffsetTable &&) = default ;
        OffsetTable(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OffsetTable() = default ;
        OffsetTable& operator=(const OffsetTable &) = default ;
        OffsetTable& operator=(OffsetTable &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class OffsetTableItem : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OffsetTableItem& obj) { 
            DARABONBA_PTR_TO_JSON(LastUpdateTimestamp, lastUpdateTimestamp_);
            DARABONBA_PTR_TO_JSON(MaxOffset, maxOffset_);
            DARABONBA_PTR_TO_JSON(MinOffset, minOffset_);
            DARABONBA_PTR_TO_JSON(Partition, partition_);
            DARABONBA_PTR_TO_JSON(Topic, topic_);
          };
          friend void from_json(const Darabonba::Json& j, OffsetTableItem& obj) { 
            DARABONBA_PTR_FROM_JSON(LastUpdateTimestamp, lastUpdateTimestamp_);
            DARABONBA_PTR_FROM_JSON(MaxOffset, maxOffset_);
            DARABONBA_PTR_FROM_JSON(MinOffset, minOffset_);
            DARABONBA_PTR_FROM_JSON(Partition, partition_);
            DARABONBA_PTR_FROM_JSON(Topic, topic_);
          };
          OffsetTableItem() = default ;
          OffsetTableItem(const OffsetTableItem &) = default ;
          OffsetTableItem(OffsetTableItem &&) = default ;
          OffsetTableItem(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OffsetTableItem() = default ;
          OffsetTableItem& operator=(const OffsetTableItem &) = default ;
          OffsetTableItem& operator=(OffsetTableItem &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->lastUpdateTimestamp_ == nullptr
        && this->maxOffset_ == nullptr && this->minOffset_ == nullptr && this->partition_ == nullptr && this->topic_ == nullptr; };
          // lastUpdateTimestamp Field Functions 
          bool hasLastUpdateTimestamp() const { return this->lastUpdateTimestamp_ != nullptr;};
          void deleteLastUpdateTimestamp() { this->lastUpdateTimestamp_ = nullptr;};
          inline int64_t getLastUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastUpdateTimestamp_, 0L) };
          inline OffsetTableItem& setLastUpdateTimestamp(int64_t lastUpdateTimestamp) { DARABONBA_PTR_SET_VALUE(lastUpdateTimestamp_, lastUpdateTimestamp) };


          // maxOffset Field Functions 
          bool hasMaxOffset() const { return this->maxOffset_ != nullptr;};
          void deleteMaxOffset() { this->maxOffset_ = nullptr;};
          inline int64_t getMaxOffset() const { DARABONBA_PTR_GET_DEFAULT(maxOffset_, 0L) };
          inline OffsetTableItem& setMaxOffset(int64_t maxOffset) { DARABONBA_PTR_SET_VALUE(maxOffset_, maxOffset) };


          // minOffset Field Functions 
          bool hasMinOffset() const { return this->minOffset_ != nullptr;};
          void deleteMinOffset() { this->minOffset_ = nullptr;};
          inline int64_t getMinOffset() const { DARABONBA_PTR_GET_DEFAULT(minOffset_, 0L) };
          inline OffsetTableItem& setMinOffset(int64_t minOffset) { DARABONBA_PTR_SET_VALUE(minOffset_, minOffset) };


          // partition Field Functions 
          bool hasPartition() const { return this->partition_ != nullptr;};
          void deletePartition() { this->partition_ = nullptr;};
          inline int32_t getPartition() const { DARABONBA_PTR_GET_DEFAULT(partition_, 0) };
          inline OffsetTableItem& setPartition(int32_t partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


          // topic Field Functions 
          bool hasTopic() const { return this->topic_ != nullptr;};
          void deleteTopic() { this->topic_ = nullptr;};
          inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
          inline OffsetTableItem& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        protected:
          shared_ptr<int64_t> lastUpdateTimestamp_ {};
          shared_ptr<int64_t> maxOffset_ {};
          shared_ptr<int64_t> minOffset_ {};
          shared_ptr<int32_t> partition_ {};
          shared_ptr<string> topic_ {};
        };

        virtual bool empty() const override { return this->offsetTable_ == nullptr; };
        // offsetTable Field Functions 
        bool hasOffsetTable() const { return this->offsetTable_ != nullptr;};
        void deleteOffsetTable() { this->offsetTable_ = nullptr;};
        inline const vector<OffsetTable::OffsetTableItem> & getOffsetTable() const { DARABONBA_PTR_GET_CONST(offsetTable_, vector<OffsetTable::OffsetTableItem>) };
        inline vector<OffsetTable::OffsetTableItem> getOffsetTable() { DARABONBA_PTR_GET(offsetTable_, vector<OffsetTable::OffsetTableItem>) };
        inline OffsetTable& setOffsetTable(const vector<OffsetTable::OffsetTableItem> & offsetTable) { DARABONBA_PTR_SET_VALUE(offsetTable_, offsetTable) };
        inline OffsetTable& setOffsetTable(vector<OffsetTable::OffsetTableItem> && offsetTable) { DARABONBA_PTR_SET_RVALUE(offsetTable_, offsetTable) };


      protected:
        shared_ptr<vector<OffsetTable::OffsetTableItem>> offsetTable_ {};
      };

      virtual bool empty() const override { return this->lastTimeStamp_ == nullptr
        && this->offsetTable_ == nullptr && this->totalCount_ == nullptr; };
      // lastTimeStamp Field Functions 
      bool hasLastTimeStamp() const { return this->lastTimeStamp_ != nullptr;};
      void deleteLastTimeStamp() { this->lastTimeStamp_ = nullptr;};
      inline int64_t getLastTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(lastTimeStamp_, 0L) };
      inline TopicStatus& setLastTimeStamp(int64_t lastTimeStamp) { DARABONBA_PTR_SET_VALUE(lastTimeStamp_, lastTimeStamp) };


      // offsetTable Field Functions 
      bool hasOffsetTable() const { return this->offsetTable_ != nullptr;};
      void deleteOffsetTable() { this->offsetTable_ = nullptr;};
      inline const TopicStatus::OffsetTable & getOffsetTable() const { DARABONBA_PTR_GET_CONST(offsetTable_, TopicStatus::OffsetTable) };
      inline TopicStatus::OffsetTable getOffsetTable() { DARABONBA_PTR_GET(offsetTable_, TopicStatus::OffsetTable) };
      inline TopicStatus& setOffsetTable(const TopicStatus::OffsetTable & offsetTable) { DARABONBA_PTR_SET_VALUE(offsetTable_, offsetTable) };
      inline TopicStatus& setOffsetTable(TopicStatus::OffsetTable && offsetTable) { DARABONBA_PTR_SET_RVALUE(offsetTable_, offsetTable) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline TopicStatus& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The time when the last consumed message was generated.
      shared_ptr<int64_t> lastTimeStamp_ {};
      shared_ptr<TopicStatus::OffsetTable> offsetTable_ {};
      // The number of messages in the topic.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->topicStatus_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetTopicStatusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTopicStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTopicStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTopicStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // topicStatus Field Functions 
    bool hasTopicStatus() const { return this->topicStatus_ != nullptr;};
    void deleteTopicStatus() { this->topicStatus_ = nullptr;};
    inline const GetTopicStatusResponseBody::TopicStatus & getTopicStatus() const { DARABONBA_PTR_GET_CONST(topicStatus_, GetTopicStatusResponseBody::TopicStatus) };
    inline GetTopicStatusResponseBody::TopicStatus getTopicStatus() { DARABONBA_PTR_GET(topicStatus_, GetTopicStatusResponseBody::TopicStatus) };
    inline GetTopicStatusResponseBody& setTopicStatus(const GetTopicStatusResponseBody::TopicStatus & topicStatus) { DARABONBA_PTR_SET_VALUE(topicStatus_, topicStatus) };
    inline GetTopicStatusResponseBody& setTopicStatus(GetTopicStatusResponseBody::TopicStatus && topicStatus) { DARABONBA_PTR_SET_RVALUE(topicStatus_, topicStatus) };


  protected:
    // The HTTP status code returned. The HTTP status code 200 indicates that the request is successful.
    shared_ptr<int32_t> code_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
    // The status information about messages in the topic.
    shared_ptr<GetTopicStatusResponseBody::TopicStatus> topicStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
