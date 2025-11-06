// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKDETAILRESPONSEBODYRESULTCONTENTDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPUSHANALYSISTASKDETAILRESPONSEBODYRESULTCONTENTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class QueryPushAnalysisTaskDetailResponseBodyResultContentData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPushAnalysisTaskDetailResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(PushArrivalNum, pushArrivalNum_);
      DARABONBA_PTR_TO_JSON(PushNum, pushNum_);
      DARABONBA_PTR_TO_JSON(PushSuccessNum, pushSuccessNum_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPushAnalysisTaskDetailResponseBodyResultContentData& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(PushArrivalNum, pushArrivalNum_);
      DARABONBA_PTR_FROM_JSON(PushNum, pushNum_);
      DARABONBA_PTR_FROM_JSON(PushSuccessNum, pushSuccessNum_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    QueryPushAnalysisTaskDetailResponseBodyResultContentData() = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContentData(const QueryPushAnalysisTaskDetailResponseBodyResultContentData &) = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContentData(QueryPushAnalysisTaskDetailResponseBodyResultContentData &&) = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContentData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPushAnalysisTaskDetailResponseBodyResultContentData() = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContentData& operator=(const QueryPushAnalysisTaskDetailResponseBodyResultContentData &) = default ;
    QueryPushAnalysisTaskDetailResponseBodyResultContentData& operator=(QueryPushAnalysisTaskDetailResponseBodyResultContentData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->endTime_ == nullptr && return this->pushArrivalNum_ == nullptr && return this->pushNum_ == nullptr && return this->pushSuccessNum_ == nullptr && return this->startTime_ == nullptr
        && return this->taskId_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline QueryPushAnalysisTaskDetailResponseBodyResultContentData& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryPushAnalysisTaskDetailResponseBodyResultContentData& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // pushArrivalNum Field Functions 
    bool hasPushArrivalNum() const { return this->pushArrivalNum_ != nullptr;};
    void deletePushArrivalNum() { this->pushArrivalNum_ = nullptr;};
    inline float pushArrivalNum() const { DARABONBA_PTR_GET_DEFAULT(pushArrivalNum_, 0.0) };
    inline QueryPushAnalysisTaskDetailResponseBodyResultContentData& setPushArrivalNum(float pushArrivalNum) { DARABONBA_PTR_SET_VALUE(pushArrivalNum_, pushArrivalNum) };


    // pushNum Field Functions 
    bool hasPushNum() const { return this->pushNum_ != nullptr;};
    void deletePushNum() { this->pushNum_ = nullptr;};
    inline float pushNum() const { DARABONBA_PTR_GET_DEFAULT(pushNum_, 0.0) };
    inline QueryPushAnalysisTaskDetailResponseBodyResultContentData& setPushNum(float pushNum) { DARABONBA_PTR_SET_VALUE(pushNum_, pushNum) };


    // pushSuccessNum Field Functions 
    bool hasPushSuccessNum() const { return this->pushSuccessNum_ != nullptr;};
    void deletePushSuccessNum() { this->pushSuccessNum_ = nullptr;};
    inline float pushSuccessNum() const { DARABONBA_PTR_GET_DEFAULT(pushSuccessNum_, 0.0) };
    inline QueryPushAnalysisTaskDetailResponseBodyResultContentData& setPushSuccessNum(float pushSuccessNum) { DARABONBA_PTR_SET_VALUE(pushSuccessNum_, pushSuccessNum) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline QueryPushAnalysisTaskDetailResponseBodyResultContentData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline QueryPushAnalysisTaskDetailResponseBodyResultContentData& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<float> pushArrivalNum_ = nullptr;
    std::shared_ptr<float> pushNum_ = nullptr;
    std::shared_ptr<float> pushSuccessNum_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
