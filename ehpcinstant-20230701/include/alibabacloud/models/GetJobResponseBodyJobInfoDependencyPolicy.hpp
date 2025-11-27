// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFODEPENDENCYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFODEPENDENCYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyJobInfoDependencyPolicyJobDependency.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoDependencyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoDependencyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(JobDependency, jobDependency_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoDependencyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(JobDependency, jobDependency_);
    };
    GetJobResponseBodyJobInfoDependencyPolicy() = default ;
    GetJobResponseBodyJobInfoDependencyPolicy(const GetJobResponseBodyJobInfoDependencyPolicy &) = default ;
    GetJobResponseBodyJobInfoDependencyPolicy(GetJobResponseBodyJobInfoDependencyPolicy &&) = default ;
    GetJobResponseBodyJobInfoDependencyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoDependencyPolicy() = default ;
    GetJobResponseBodyJobInfoDependencyPolicy& operator=(const GetJobResponseBodyJobInfoDependencyPolicy &) = default ;
    GetJobResponseBodyJobInfoDependencyPolicy& operator=(GetJobResponseBodyJobInfoDependencyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobDependency_ == nullptr; };
    // jobDependency Field Functions 
    bool hasJobDependency() const { return this->jobDependency_ != nullptr;};
    void deleteJobDependency() { this->jobDependency_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyJobInfoDependencyPolicyJobDependency> & jobDependency() const { DARABONBA_PTR_GET_CONST(jobDependency_, vector<Models::GetJobResponseBodyJobInfoDependencyPolicyJobDependency>) };
    inline vector<Models::GetJobResponseBodyJobInfoDependencyPolicyJobDependency> jobDependency() { DARABONBA_PTR_GET(jobDependency_, vector<Models::GetJobResponseBodyJobInfoDependencyPolicyJobDependency>) };
    inline GetJobResponseBodyJobInfoDependencyPolicy& setJobDependency(const vector<Models::GetJobResponseBodyJobInfoDependencyPolicyJobDependency> & jobDependency) { DARABONBA_PTR_SET_VALUE(jobDependency_, jobDependency) };
    inline GetJobResponseBodyJobInfoDependencyPolicy& setJobDependency(vector<Models::GetJobResponseBodyJobInfoDependencyPolicyJobDependency> && jobDependency) { DARABONBA_PTR_SET_RVALUE(jobDependency_, jobDependency) };


  protected:
    std::shared_ptr<vector<Models::GetJobResponseBodyJobInfoDependencyPolicyJobDependency>> jobDependency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
