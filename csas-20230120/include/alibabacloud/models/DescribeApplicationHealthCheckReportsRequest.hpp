// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONHEALTHCHECKREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONHEALTHCHECKREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DescribeApplicationHealthCheckReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationHealthCheckReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationHealthCheckReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationIds, applicationIds_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeApplicationHealthCheckReportsRequest() = default ;
    DescribeApplicationHealthCheckReportsRequest(const DescribeApplicationHealthCheckReportsRequest &) = default ;
    DescribeApplicationHealthCheckReportsRequest(DescribeApplicationHealthCheckReportsRequest &&) = default ;
    DescribeApplicationHealthCheckReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationHealthCheckReportsRequest() = default ;
    DescribeApplicationHealthCheckReportsRequest& operator=(const DescribeApplicationHealthCheckReportsRequest &) = default ;
    DescribeApplicationHealthCheckReportsRequest& operator=(DescribeApplicationHealthCheckReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationIds_ == nullptr
        && this->endTime_ == nullptr && this->startTime_ == nullptr; };
    // applicationIds Field Functions 
    bool hasApplicationIds() const { return this->applicationIds_ != nullptr;};
    void deleteApplicationIds() { this->applicationIds_ = nullptr;};
    inline const vector<string> & getApplicationIds() const { DARABONBA_PTR_GET_CONST(applicationIds_, vector<string>) };
    inline vector<string> getApplicationIds() { DARABONBA_PTR_GET(applicationIds_, vector<string>) };
    inline DescribeApplicationHealthCheckReportsRequest& setApplicationIds(const vector<string> & applicationIds) { DARABONBA_PTR_SET_VALUE(applicationIds_, applicationIds) };
    inline DescribeApplicationHealthCheckReportsRequest& setApplicationIds(vector<string> && applicationIds) { DARABONBA_PTR_SET_RVALUE(applicationIds_, applicationIds) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeApplicationHealthCheckReportsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeApplicationHealthCheckReportsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The IDs of the internal-facing applications. You can specify up to 100 application IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> applicationIds_ {};
    // The end time of the query. The value is a UNIX timestamp in seconds. If this parameter is not specified, the default value is the current time. If only the start time is specified, the end time is set to 5 minutes after the start time. The end time must be later than the start time, and the maximum query time range is 7 days.
    shared_ptr<int64_t> endTime_ {};
    // The start time of the query. The value is a UNIX timestamp in seconds. If this parameter is not specified, the default value is 5 minutes before the end time. If only the end time is specified, the start time is set to 5 minutes before the end time.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
