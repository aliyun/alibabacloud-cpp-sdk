// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDIAGNOSEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDIAGNOSEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDiagnoseReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeCdnDiagnoseReportRequest() = default ;
    DescribeCdnDiagnoseReportRequest(const DescribeCdnDiagnoseReportRequest &) = default ;
    DescribeCdnDiagnoseReportRequest(DescribeCdnDiagnoseReportRequest &&) = default ;
    DescribeCdnDiagnoseReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDiagnoseReportRequest() = default ;
    DescribeCdnDiagnoseReportRequest& operator=(const DescribeCdnDiagnoseReportRequest &) = default ;
    DescribeCdnDiagnoseReportRequest& operator=(DescribeCdnDiagnoseReportRequest &&) = default ;
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
    inline DescribeCdnDiagnoseReportRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeCdnDiagnoseReportRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    shared_ptr<string> taskId_ {};
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
