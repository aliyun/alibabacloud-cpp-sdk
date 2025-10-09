// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobStatusResponseBodyJobStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetJobStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetJobStatusResponseBody() = default ;
    GetJobStatusResponseBody(const GetJobStatusResponseBody &) = default ;
    GetJobStatusResponseBody(GetJobStatusResponseBody &&) = default ;
    GetJobStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobStatusResponseBody() = default ;
    GetJobStatusResponseBody& operator=(const GetJobStatusResponseBody &) = default ;
    GetJobStatusResponseBody& operator=(GetJobStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline const GetJobStatusResponseBodyJobStatus & jobStatus() const { DARABONBA_PTR_GET_CONST(jobStatus_, GetJobStatusResponseBodyJobStatus) };
    inline GetJobStatusResponseBodyJobStatus jobStatus() { DARABONBA_PTR_GET(jobStatus_, GetJobStatusResponseBodyJobStatus) };
    inline GetJobStatusResponseBody& setJobStatus(const GetJobStatusResponseBodyJobStatus & jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };
    inline GetJobStatusResponseBody& setJobStatus(GetJobStatusResponseBodyJobStatus && jobStatus) { DARABONBA_PTR_SET_RVALUE(jobStatus_, jobStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetJobStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The real-time status information of the asynchronous task.
    std::shared_ptr<GetJobStatusResponseBodyJobStatus> jobStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
