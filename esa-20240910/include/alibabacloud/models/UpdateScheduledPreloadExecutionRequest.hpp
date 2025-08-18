// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESCHEDULEDPRELOADEXECUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESCHEDULEDPRELOADEXECUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateScheduledPreloadExecutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateScheduledPreloadExecutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(SliceLen, sliceLen_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateScheduledPreloadExecutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(SliceLen, sliceLen_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    UpdateScheduledPreloadExecutionRequest() = default ;
    UpdateScheduledPreloadExecutionRequest(const UpdateScheduledPreloadExecutionRequest &) = default ;
    UpdateScheduledPreloadExecutionRequest(UpdateScheduledPreloadExecutionRequest &&) = default ;
    UpdateScheduledPreloadExecutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateScheduledPreloadExecutionRequest() = default ;
    UpdateScheduledPreloadExecutionRequest& operator=(const UpdateScheduledPreloadExecutionRequest &) = default ;
    UpdateScheduledPreloadExecutionRequest& operator=(UpdateScheduledPreloadExecutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->id_ != nullptr && this->interval_ != nullptr && this->sliceLen_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateScheduledPreloadExecutionRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateScheduledPreloadExecutionRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline UpdateScheduledPreloadExecutionRequest& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // sliceLen Field Functions 
    bool hasSliceLen() const { return this->sliceLen_ != nullptr;};
    void deleteSliceLen() { this->sliceLen_ = nullptr;};
    inline int32_t sliceLen() const { DARABONBA_PTR_GET_DEFAULT(sliceLen_, 0) };
    inline UpdateScheduledPreloadExecutionRequest& setSliceLen(int32_t sliceLen) { DARABONBA_PTR_SET_VALUE(sliceLen_, sliceLen) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateScheduledPreloadExecutionRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end time of the prefetch plan.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the prefetch plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> id_ = nullptr;
    // The time interval between each batch execution. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The number of URLs prefetched in each batch.
    std::shared_ptr<int32_t> sliceLen_ = nullptr;
    // The start time of the prefetch plan.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
