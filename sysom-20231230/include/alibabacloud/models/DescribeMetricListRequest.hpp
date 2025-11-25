// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETRICLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class DescribeMetricListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetricListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(metricName, metricName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetricListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(metricName, metricName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    DescribeMetricListRequest() = default ;
    DescribeMetricListRequest(const DescribeMetricListRequest &) = default ;
    DescribeMetricListRequest(DescribeMetricListRequest &&) = default ;
    DescribeMetricListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetricListRequest() = default ;
    DescribeMetricListRequest& operator=(const DescribeMetricListRequest &) = default ;
    DescribeMetricListRequest& operator=(DescribeMetricListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->instance_ == nullptr && return this->metricName_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeMetricListRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline DescribeMetricListRequest& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeMetricListRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeMetricListRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
