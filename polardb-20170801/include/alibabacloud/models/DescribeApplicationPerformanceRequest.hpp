// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPERFORMANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONPERFORMANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeApplicationPerformanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationPerformanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Consumer, consumer_);
      DARABONBA_PTR_TO_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(ModelService, modelService_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationPerformanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Consumer, consumer_);
      DARABONBA_PTR_FROM_JSON(ConsumerGroup, consumerGroup_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(ModelService, modelService_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeApplicationPerformanceRequest() = default ;
    DescribeApplicationPerformanceRequest(const DescribeApplicationPerformanceRequest &) = default ;
    DescribeApplicationPerformanceRequest(DescribeApplicationPerformanceRequest &&) = default ;
    DescribeApplicationPerformanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationPerformanceRequest() = default ;
    DescribeApplicationPerformanceRequest& operator=(const DescribeApplicationPerformanceRequest &) = default ;
    DescribeApplicationPerformanceRequest& operator=(DescribeApplicationPerformanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->consumer_ == nullptr && this->consumerGroup_ == nullptr && this->endTime_ == nullptr && this->interval_ == nullptr && this->key_ == nullptr
        && this->modelService_ == nullptr && this->startTime_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline DescribeApplicationPerformanceRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // consumer Field Functions 
    bool hasConsumer() const { return this->consumer_ != nullptr;};
    void deleteConsumer() { this->consumer_ = nullptr;};
    inline string getConsumer() const { DARABONBA_PTR_GET_DEFAULT(consumer_, "") };
    inline DescribeApplicationPerformanceRequest& setConsumer(string consumer) { DARABONBA_PTR_SET_VALUE(consumer_, consumer) };


    // consumerGroup Field Functions 
    bool hasConsumerGroup() const { return this->consumerGroup_ != nullptr;};
    void deleteConsumerGroup() { this->consumerGroup_ = nullptr;};
    inline string getConsumerGroup() const { DARABONBA_PTR_GET_DEFAULT(consumerGroup_, "") };
    inline DescribeApplicationPerformanceRequest& setConsumerGroup(string consumerGroup) { DARABONBA_PTR_SET_VALUE(consumerGroup_, consumerGroup) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeApplicationPerformanceRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline DescribeApplicationPerformanceRequest& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeApplicationPerformanceRequest& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // modelService Field Functions 
    bool hasModelService() const { return this->modelService_ != nullptr;};
    void deleteModelService() { this->modelService_ = nullptr;};
    inline string getModelService() const { DARABONBA_PTR_GET_DEFAULT(modelService_, "") };
    inline DescribeApplicationPerformanceRequest& setModelService(string modelService) { DARABONBA_PTR_SET_VALUE(modelService_, modelService) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeApplicationPerformanceRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the application cluster.
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // The ID of the consumer.
    shared_ptr<string> consumer_ {};
    // The ID of the consumer group.
    shared_ptr<string> consumerGroup_ {};
    // The end time for the query. Specify the time in UTC in the `yyyy-MM-ddTHH:mmZ` format.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The granularity of the performance data, in seconds. Valid values:
    // 
    // - 5
    // 
    // - 30
    // 
    // - 60
    // 
    // - 600
    // 
    // - 1800
    // 
    // - 3600
    // 
    // - 86400
    shared_ptr<string> interval_ {};
    // The performance metrics to query. Separate multiple metrics with commas (,).<br>You can specify up to five performance metrics.<br>
    // 
    // This parameter is required.
    shared_ptr<string> key_ {};
    // The ID of the model service.
    shared_ptr<string> modelService_ {};
    // The start time for the query. Specify the time in UTC in the `yyyy-MM-ddTHH:mmZ` format.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
