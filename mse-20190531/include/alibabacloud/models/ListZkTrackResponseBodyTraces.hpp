// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTZKTRACKRESPONSEBODYTRACES_HPP_
#define ALIBABACLOUD_MODELS_LISTZKTRACKRESPONSEBODYTRACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListZkTrackResponseBodyTraces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListZkTrackResponseBodyTraces& obj) { 
      DARABONBA_PTR_TO_JSON(Acl, acl_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Finished, finished_);
      DARABONBA_PTR_TO_JSON(LogDate, logDate_);
      DARABONBA_PTR_TO_JSON(MultiSize, multiSize_);
      DARABONBA_PTR_TO_JSON(OpType, opType_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TraceType, traceType_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Watch, watch_);
    };
    friend void from_json(const Darabonba::Json& j, ListZkTrackResponseBodyTraces& obj) { 
      DARABONBA_PTR_FROM_JSON(Acl, acl_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Finished, finished_);
      DARABONBA_PTR_FROM_JSON(LogDate, logDate_);
      DARABONBA_PTR_FROM_JSON(MultiSize, multiSize_);
      DARABONBA_PTR_FROM_JSON(OpType, opType_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TraceType, traceType_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Watch, watch_);
    };
    ListZkTrackResponseBodyTraces() = default ;
    ListZkTrackResponseBodyTraces(const ListZkTrackResponseBodyTraces &) = default ;
    ListZkTrackResponseBodyTraces(ListZkTrackResponseBodyTraces &&) = default ;
    ListZkTrackResponseBodyTraces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListZkTrackResponseBodyTraces() = default ;
    ListZkTrackResponseBodyTraces& operator=(const ListZkTrackResponseBodyTraces &) = default ;
    ListZkTrackResponseBodyTraces& operator=(ListZkTrackResponseBodyTraces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr
        && return this->dataType_ == nullptr && return this->eventType_ == nullptr && return this->finished_ == nullptr && return this->logDate_ == nullptr && return this->multiSize_ == nullptr
        && return this->opType_ == nullptr && return this->path_ == nullptr && return this->result_ == nullptr && return this->sessionId_ == nullptr && return this->timestamp_ == nullptr
        && return this->traceType_ == nullptr && return this->ttl_ == nullptr && return this->watch_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string acl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline ListZkTrackResponseBodyTraces& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string dataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline ListZkTrackResponseBodyTraces& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ListZkTrackResponseBodyTraces& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline ListZkTrackResponseBodyTraces& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // logDate Field Functions 
    bool hasLogDate() const { return this->logDate_ != nullptr;};
    void deleteLogDate() { this->logDate_ = nullptr;};
    inline string logDate() const { DARABONBA_PTR_GET_DEFAULT(logDate_, "") };
    inline ListZkTrackResponseBodyTraces& setLogDate(string logDate) { DARABONBA_PTR_SET_VALUE(logDate_, logDate) };


    // multiSize Field Functions 
    bool hasMultiSize() const { return this->multiSize_ != nullptr;};
    void deleteMultiSize() { this->multiSize_ = nullptr;};
    inline int64_t multiSize() const { DARABONBA_PTR_GET_DEFAULT(multiSize_, 0L) };
    inline ListZkTrackResponseBodyTraces& setMultiSize(int64_t multiSize) { DARABONBA_PTR_SET_VALUE(multiSize_, multiSize) };


    // opType Field Functions 
    bool hasOpType() const { return this->opType_ != nullptr;};
    void deleteOpType() { this->opType_ = nullptr;};
    inline string opType() const { DARABONBA_PTR_GET_DEFAULT(opType_, "") };
    inline ListZkTrackResponseBodyTraces& setOpType(string opType) { DARABONBA_PTR_SET_VALUE(opType_, opType) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListZkTrackResponseBodyTraces& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline ListZkTrackResponseBodyTraces& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListZkTrackResponseBodyTraces& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline ListZkTrackResponseBodyTraces& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // traceType Field Functions 
    bool hasTraceType() const { return this->traceType_ != nullptr;};
    void deleteTraceType() { this->traceType_ = nullptr;};
    inline string traceType() const { DARABONBA_PTR_GET_DEFAULT(traceType_, "") };
    inline ListZkTrackResponseBodyTraces& setTraceType(string traceType) { DARABONBA_PTR_SET_VALUE(traceType_, traceType) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int64_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0L) };
    inline ListZkTrackResponseBodyTraces& setTtl(int64_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // watch Field Functions 
    bool hasWatch() const { return this->watch_ != nullptr;};
    void deleteWatch() { this->watch_ = nullptr;};
    inline bool watch() const { DARABONBA_PTR_GET_DEFAULT(watch_, false) };
    inline ListZkTrackResponseBodyTraces& setWatch(bool watch) { DARABONBA_PTR_SET_VALUE(watch_, watch) };


  protected:
    // The access control list (ACL).
    std::shared_ptr<string> acl_ = nullptr;
    // The data type. Valid values:
    // 
    // *   persist
    // *   ephemeral
    std::shared_ptr<string> dataType_ = nullptr;
    // The type of the event. For trajectory of the Notify type:
    // 
    // *   NodeCreated
    // *   NodeDeleted
    // *   NodeDataChanged
    // *   NodeChildrenChanged
    std::shared_ptr<string> eventType_ = nullptr;
    // Indicates whether the transaction ended.
    std::shared_ptr<bool> finished_ = nullptr;
    // The logging time.
    std::shared_ptr<string> logDate_ = nullptr;
    // The transaction size.
    std::shared_ptr<int64_t> multiSize_ = nullptr;
    // The type of the operation. For trajectory of the Push type:
    // 
    // *   Create
    // *   Update
    // *   Delete
    // *   SetAcl
    // *   Multi
    // 
    // For trajectory of the Pull type:
    // 
    // *   GetData
    // *   GetChild
    // *   GetStat
    std::shared_ptr<string> opType_ = nullptr;
    // The path.
    std::shared_ptr<string> path_ = nullptr;
    // The returned result.
    std::shared_ptr<string> result_ = nullptr;
    // The session ID.
    std::shared_ptr<string> sessionId_ = nullptr;
    // The timestamp. It is not available.
    std::shared_ptr<string> timestamp_ = nullptr;
    // The type of the trajectory. Valid values:
    // 
    // *   Push
    // *   Pull
    // *   Notify
    std::shared_ptr<string> traceType_ = nullptr;
    // The time to live (TTL).
    std::shared_ptr<int64_t> ttl_ = nullptr;
    // Indicates whether the monitoring feature is enabled.
    std::shared_ptr<bool> watch_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
