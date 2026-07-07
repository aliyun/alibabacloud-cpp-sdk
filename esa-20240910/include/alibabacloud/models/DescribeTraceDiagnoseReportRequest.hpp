// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEDIAGNOSEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEDIAGNOSEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeTraceDiagnoseReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeTraceDiagnoseReportRequest() = default ;
    DescribeTraceDiagnoseReportRequest(const DescribeTraceDiagnoseReportRequest &) = default ;
    DescribeTraceDiagnoseReportRequest(DescribeTraceDiagnoseReportRequest &&) = default ;
    DescribeTraceDiagnoseReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceDiagnoseReportRequest() = default ;
    DescribeTraceDiagnoseReportRequest& operator=(const DescribeTraceDiagnoseReportRequest &) = default ;
    DescribeTraceDiagnoseReportRequest& operator=(DescribeTraceDiagnoseReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskId_ == nullptr
        && this->traceId_ == nullptr; };
    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeTraceDiagnoseReportRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeTraceDiagnoseReportRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The diagnostic task ID. You must specify at least one of TraceId and TaskId. If neither is specified, the API returns an error.
    shared_ptr<string> taskId_ {};
    // The diagnostic trace ID. You must specify at least one of TraceId and TaskId. If neither is specified, the API returns an error.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
