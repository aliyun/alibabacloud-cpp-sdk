// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBMETRICSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBMETRICSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobMetricsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobMetricsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricName, metricNameShrink_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobMetricsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricNameShrink_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListDIJobMetricsShrinkRequest() = default ;
    ListDIJobMetricsShrinkRequest(const ListDIJobMetricsShrinkRequest &) = default ;
    ListDIJobMetricsShrinkRequest(ListDIJobMetricsShrinkRequest &&) = default ;
    ListDIJobMetricsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobMetricsShrinkRequest() = default ;
    ListDIJobMetricsShrinkRequest& operator=(const ListDIJobMetricsShrinkRequest &) = default ;
    ListDIJobMetricsShrinkRequest& operator=(ListDIJobMetricsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DIJobId_ == nullptr
        && return this->endTime_ == nullptr && return this->metricNameShrink_ == nullptr && return this->startTime_ == nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline ListDIJobMetricsShrinkRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDIJobMetricsShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricNameShrink Field Functions 
    bool hasMetricNameShrink() const { return this->metricNameShrink_ != nullptr;};
    void deleteMetricNameShrink() { this->metricNameShrink_ = nullptr;};
    inline string metricNameShrink() const { DARABONBA_PTR_GET_DEFAULT(metricNameShrink_, "") };
    inline ListDIJobMetricsShrinkRequest& setMetricNameShrink(string metricNameShrink) { DARABONBA_PTR_SET_VALUE(metricNameShrink_, metricNameShrink) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDIJobMetricsShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The end of the time range to query.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The metrics that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<string> metricNameShrink_ = nullptr;
    // The beginning of the time range to query.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
