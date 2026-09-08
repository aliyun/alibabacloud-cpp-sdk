// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GetAgentJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    GetAgentJobRequest() = default ;
    GetAgentJobRequest(const GetAgentJobRequest &) = default ;
    GetAgentJobRequest(GetAgentJobRequest &&) = default ;
    GetAgentJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentJobRequest() = default ;
    GetAgentJobRequest& operator=(const GetAgentJobRequest &) = default ;
    GetAgentJobRequest& operator=(GetAgentJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetAgentJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The task ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
