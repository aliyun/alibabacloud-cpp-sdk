// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASYNCJOBRESULTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETASYNCJOBRESULTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class GetAsyncJobResultRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAsyncJobResultRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAsyncJobResultRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetAsyncJobResultRequest() = default ;
    GetAsyncJobResultRequest(const GetAsyncJobResultRequest &) = default ;
    GetAsyncJobResultRequest(GetAsyncJobResultRequest &&) = default ;
    GetAsyncJobResultRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAsyncJobResultRequest() = default ;
    GetAsyncJobResultRequest& operator=(const GetAsyncJobResultRequest &) = default ;
    GetAsyncJobResultRequest& operator=(GetAsyncJobResultRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetAsyncJobResultRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
