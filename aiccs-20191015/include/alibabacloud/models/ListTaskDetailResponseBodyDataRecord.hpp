// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKDETAILRESPONSEBODYDATARECORD_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKDETAILRESPONSEBODYDATARECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class ListTaskDetailResponseBodyDataRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskDetailResponseBodyDataRecord& obj) { 
      DARABONBA_PTR_TO_JSON(Called, called_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RetryCurTimes, retryCurTimes_);
      DARABONBA_PTR_TO_JSON(RetryTimes, retryTimes_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(StatusCodeDesc, statusCodeDesc_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskDetailResponseBodyDataRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(Called, called_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RetryCurTimes, retryCurTimes_);
      DARABONBA_PTR_FROM_JSON(RetryTimes, retryTimes_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(StatusCodeDesc, statusCodeDesc_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListTaskDetailResponseBodyDataRecord() = default ;
    ListTaskDetailResponseBodyDataRecord(const ListTaskDetailResponseBodyDataRecord &) = default ;
    ListTaskDetailResponseBodyDataRecord(ListTaskDetailResponseBodyDataRecord &&) = default ;
    ListTaskDetailResponseBodyDataRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskDetailResponseBodyDataRecord() = default ;
    ListTaskDetailResponseBodyDataRecord& operator=(const ListTaskDetailResponseBodyDataRecord &) = default ;
    ListTaskDetailResponseBodyDataRecord& operator=(ListTaskDetailResponseBodyDataRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->called_ == nullptr
        && return this->caller_ == nullptr && return this->direction_ == nullptr && return this->duration_ == nullptr && return this->endTime_ == nullptr && return this->id_ == nullptr
        && return this->retryCurTimes_ == nullptr && return this->retryTimes_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->statusCode_ == nullptr
        && return this->statusCodeDesc_ == nullptr && return this->tags_ == nullptr; };
    // called Field Functions 
    bool hasCalled() const { return this->called_ != nullptr;};
    void deleteCalled() { this->called_ = nullptr;};
    inline string called() const { DARABONBA_PTR_GET_DEFAULT(called_, "") };
    inline ListTaskDetailResponseBodyDataRecord& setCalled(string called) { DARABONBA_PTR_SET_VALUE(called_, called) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string caller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline ListTaskDetailResponseBodyDataRecord& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline ListTaskDetailResponseBodyDataRecord& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ListTaskDetailResponseBodyDataRecord& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTaskDetailResponseBodyDataRecord& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListTaskDetailResponseBodyDataRecord& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // retryCurTimes Field Functions 
    bool hasRetryCurTimes() const { return this->retryCurTimes_ != nullptr;};
    void deleteRetryCurTimes() { this->retryCurTimes_ = nullptr;};
    inline int32_t retryCurTimes() const { DARABONBA_PTR_GET_DEFAULT(retryCurTimes_, 0) };
    inline ListTaskDetailResponseBodyDataRecord& setRetryCurTimes(int32_t retryCurTimes) { DARABONBA_PTR_SET_VALUE(retryCurTimes_, retryCurTimes) };


    // retryTimes Field Functions 
    bool hasRetryTimes() const { return this->retryTimes_ != nullptr;};
    void deleteRetryTimes() { this->retryTimes_ = nullptr;};
    inline int32_t retryTimes() const { DARABONBA_PTR_GET_DEFAULT(retryTimes_, 0) };
    inline ListTaskDetailResponseBodyDataRecord& setRetryTimes(int32_t retryTimes) { DARABONBA_PTR_SET_VALUE(retryTimes_, retryTimes) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListTaskDetailResponseBodyDataRecord& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTaskDetailResponseBodyDataRecord& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline ListTaskDetailResponseBodyDataRecord& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // statusCodeDesc Field Functions 
    bool hasStatusCodeDesc() const { return this->statusCodeDesc_ != nullptr;};
    void deleteStatusCodeDesc() { this->statusCodeDesc_ = nullptr;};
    inline string statusCodeDesc() const { DARABONBA_PTR_GET_DEFAULT(statusCodeDesc_, "") };
    inline ListTaskDetailResponseBodyDataRecord& setStatusCodeDesc(string statusCodeDesc) { DARABONBA_PTR_SET_VALUE(statusCodeDesc_, statusCodeDesc) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ListTaskDetailResponseBodyDataRecord& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> called_ = nullptr;
    std::shared_ptr<string> caller_ = nullptr;
    std::shared_ptr<string> direction_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> retryCurTimes_ = nullptr;
    std::shared_ptr<int32_t> retryTimes_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> statusCode_ = nullptr;
    std::shared_ptr<string> statusCodeDesc_ = nullptr;
    std::shared_ptr<string> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
