// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPERFORMANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPERFORMANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationPerformanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationPerformanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Consumer, consumer_);
      DARABONBA_PTR_TO_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_TO_JSON(Downsample, downsample_);
      DARABONBA_PTR_TO_JSON(EndStep, endStep_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(MaxPoints, maxPoints_);
      DARABONBA_PTR_TO_JSON(ModelService, modelService_);
      DARABONBA_PTR_TO_JSON(StartStep, startStep_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(filter, filterShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationPerformanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Consumer, consumer_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_FROM_JSON(Downsample, downsample_);
      DARABONBA_PTR_FROM_JSON(EndStep, endStep_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(MaxPoints, maxPoints_);
      DARABONBA_PTR_FROM_JSON(ModelService, modelService_);
      DARABONBA_PTR_FROM_JSON(StartStep, startStep_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(filter, filterShrink_);
    };
    DescribeApplicationPerformanceShrinkRequest() = default ;
    DescribeApplicationPerformanceShrinkRequest(const DescribeApplicationPerformanceShrinkRequest &) = default ;
    DescribeApplicationPerformanceShrinkRequest(DescribeApplicationPerformanceShrinkRequest &&) = default ;
    DescribeApplicationPerformanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationPerformanceShrinkRequest() = default ;
    DescribeApplicationPerformanceShrinkRequest& operator=(const DescribeApplicationPerformanceShrinkRequest &) = default ;
    DescribeApplicationPerformanceShrinkRequest& operator=(DescribeApplicationPerformanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->consumer_ == nullptr && this->consumerGroup_ == nullptr && this->downsample_ == nullptr && this->endStep_ == nullptr && this->endTime_ == nullptr
        && this->interval_ == nullptr && this->key_ == nullptr && this->maxPoints_ == nullptr && this->modelService_ == nullptr && this->startStep_ == nullptr
        && this->startTime_ == nullptr && this->filterShrink_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // consumer Field Functions 
    bool hasConsumer() const { return this->consumer_ != nullptr;};
    void deleteConsumer() { this->consumer_ = nullptr;};
    inline string getConsumer() const { DARABONBA_PTR_GET_DEFAULT(consumer_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setConsumer(string consumer) { DARABONBA_PTR_SET_VALUE(consumer_, consumer) };


    // consumerGroup Field Functions 
    bool hasConsumerGroup() const { return this->consumerGroup_ != nullptr;};
    void deleteConsumerGroup() { this->consumerGroup_ = nullptr;};
    inline string getConsumerGroup() const { DARABONBA_PTR_GET_DEFAULT(consumerGroup_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setConsumerGroup(string consumerGroup) { DARABONBA_PTR_SET_VALUE(consumerGroup_, consumerGroup) };


    // downsample Field Functions 
    bool hasDownsample() const { return this->downsample_ != nullptr;};
    void deleteDownsample() { this->downsample_ = nullptr;};
    inline string getDownsample() const { DARABONBA_PTR_GET_DEFAULT(downsample_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setDownsample(string downsample) { DARABONBA_PTR_SET_VALUE(downsample_, downsample) };


    // endStep Field Functions 
    bool hasEndStep() const { return this->endStep_ != nullptr;};
    void deleteEndStep() { this->endStep_ = nullptr;};
    inline int64_t getEndStep() const { DARABONBA_PTR_GET_DEFAULT(endStep_, 0L) };
    inline DescribeApplicationPerformanceShrinkRequest& setEndStep(int64_t endStep) { DARABONBA_PTR_SET_VALUE(endStep_, endStep) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // maxPoints Field Functions 
    bool hasMaxPoints() const { return this->maxPoints_ != nullptr;};
    void deleteMaxPoints() { this->maxPoints_ = nullptr;};
    inline int32_t getMaxPoints() const { DARABONBA_PTR_GET_DEFAULT(maxPoints_, 0) };
    inline DescribeApplicationPerformanceShrinkRequest& setMaxPoints(int32_t maxPoints) { DARABONBA_PTR_SET_VALUE(maxPoints_, maxPoints) };


    // modelService Field Functions 
    bool hasModelService() const { return this->modelService_ != nullptr;};
    void deleteModelService() { this->modelService_ = nullptr;};
    inline string getModelService() const { DARABONBA_PTR_GET_DEFAULT(modelService_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setModelService(string modelService) { DARABONBA_PTR_SET_VALUE(modelService_, modelService) };


    // startStep Field Functions 
    bool hasStartStep() const { return this->startStep_ != nullptr;};
    void deleteStartStep() { this->startStep_ = nullptr;};
    inline int64_t getStartStep() const { DARABONBA_PTR_GET_DEFAULT(startStep_, 0L) };
    inline DescribeApplicationPerformanceShrinkRequest& setStartStep(int64_t startStep) { DARABONBA_PTR_SET_VALUE(startStep_, startStep) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // filterShrink Field Functions 
    bool hasFilterShrink() const { return this->filterShrink_ != nullptr;};
    void deleteFilterShrink() { this->filterShrink_ = nullptr;};
    inline string getFilterShrink() const { DARABONBA_PTR_GET_DEFAULT(filterShrink_, "") };
    inline DescribeApplicationPerformanceShrinkRequest& setFilterShrink(string filterShrink) { DARABONBA_PTR_SET_VALUE(filterShrink_, filterShrink) };


  protected:
    // The application cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The user.
    shared_ptr<string> consumer_ {};
    // The user group.
    shared_ptr<string> consumerGroup_ {};
    // The downsampling policy.
    shared_ptr<string> downsample_ {};
    // The end step number.
    shared_ptr<int64_t> endStep_ {};
    // The end of the time range to query. Specify the time in the yyyy-MM-ddTHH:mmZ format (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The data granularity of performance data. Valid values:
    // - 5
    // - 30
    // - 60
    // - 600
    // - 1800
    // - 3600
    // - 86400
    shared_ptr<string> interval_ {};
    // The performance metrics to query. Separate multiple values with commas (,).
    // 
    // > **Note** You can specify up to 5 performance metrics.
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The maximum number of data points to return.
    shared_ptr<int32_t> maxPoints_ {};
    // The model service.
    shared_ptr<string> modelService_ {};
    // The start step number.
    shared_ptr<int64_t> startStep_ {};
    // The beginning of the time range to query. Specify the time in the yyyy-MM-ddTHH:mmZ format (UTC).
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    shared_ptr<string> filterShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
