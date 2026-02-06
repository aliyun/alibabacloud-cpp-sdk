// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetJobDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
    };
    GetJobDetailRequest() = default ;
    GetJobDetailRequest(const GetJobDetailRequest &) = default ;
    GetJobDetailRequest(GetJobDetailRequest &&) = default ;
    GetJobDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDetailRequest() = default ;
    GetJobDetailRequest& operator=(const GetJobDetailRequest &) = default ;
    GetJobDetailRequest& operator=(GetJobDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->jobType_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetJobDetailRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetJobDetailRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


  protected:
    // The ID of the task.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // The task type. Valid values:
    // 
    // *   transcode
    // *   snapshot
    // *   ai
    // 
    // This parameter is required.
    shared_ptr<string> jobType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
