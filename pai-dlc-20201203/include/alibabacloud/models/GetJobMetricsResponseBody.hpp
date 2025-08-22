// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBMETRICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBMETRICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PodMetric.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class GetJobMetricsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobMetricsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(PodMetrics, podMetrics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobMetricsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(PodMetrics, podMetrics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetJobMetricsResponseBody() = default ;
    GetJobMetricsResponseBody(const GetJobMetricsResponseBody &) = default ;
    GetJobMetricsResponseBody(GetJobMetricsResponseBody &&) = default ;
    GetJobMetricsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobMetricsResponseBody() = default ;
    GetJobMetricsResponseBody& operator=(const GetJobMetricsResponseBody &) = default ;
    GetJobMetricsResponseBody& operator=(GetJobMetricsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->podMetrics_ != nullptr && this->requestId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobMetricsResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // podMetrics Field Functions 
    bool hasPodMetrics() const { return this->podMetrics_ != nullptr;};
    void deletePodMetrics() { this->podMetrics_ = nullptr;};
    inline const vector<PodMetric> & podMetrics() const { DARABONBA_PTR_GET_CONST(podMetrics_, vector<PodMetric>) };
    inline vector<PodMetric> podMetrics() { DARABONBA_PTR_GET(podMetrics_, vector<PodMetric>) };
    inline GetJobMetricsResponseBody& setPodMetrics(const vector<PodMetric> & podMetrics) { DARABONBA_PTR_SET_VALUE(podMetrics_, podMetrics) };
    inline GetJobMetricsResponseBody& setPodMetrics(vector<PodMetric> && podMetrics) { DARABONBA_PTR_SET_RVALUE(podMetrics_, podMetrics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobMetricsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The job ID.
    std::shared_ptr<string> jobId_ = nullptr;
    // The monitoring metrics of the job.
    std::shared_ptr<vector<PodMetric>> podMetrics_ = nullptr;
    // The request ID. You can troubleshoot issues based on the request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
