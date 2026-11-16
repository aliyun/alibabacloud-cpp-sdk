// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVIDEOREMAKEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETVIDEOREMAKEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetVideoRemakeJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVideoRemakeJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVideoRemakeJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetVideoRemakeJobRequest() = default ;
    GetVideoRemakeJobRequest(const GetVideoRemakeJobRequest &) = default ;
    GetVideoRemakeJobRequest(GetVideoRemakeJobRequest &&) = default ;
    GetVideoRemakeJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVideoRemakeJobRequest() = default ;
    GetVideoRemakeJobRequest& operator=(const GetVideoRemakeJobRequest &) = default ;
    GetVideoRemakeJobRequest& operator=(GetVideoRemakeJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetVideoRemakeJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The task ID returned by SubmitVideoRemakeJob.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
