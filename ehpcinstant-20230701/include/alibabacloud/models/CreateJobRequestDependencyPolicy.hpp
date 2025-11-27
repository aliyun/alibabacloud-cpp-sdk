// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTDEPENDENCYPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTDEPENDENCYPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobRequestDependencyPolicyJobDependency.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestDependencyPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestDependencyPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(JobDependency, jobDependency_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestDependencyPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(JobDependency, jobDependency_);
    };
    CreateJobRequestDependencyPolicy() = default ;
    CreateJobRequestDependencyPolicy(const CreateJobRequestDependencyPolicy &) = default ;
    CreateJobRequestDependencyPolicy(CreateJobRequestDependencyPolicy &&) = default ;
    CreateJobRequestDependencyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestDependencyPolicy() = default ;
    CreateJobRequestDependencyPolicy& operator=(const CreateJobRequestDependencyPolicy &) = default ;
    CreateJobRequestDependencyPolicy& operator=(CreateJobRequestDependencyPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobDependency_ == nullptr; };
    // jobDependency Field Functions 
    bool hasJobDependency() const { return this->jobDependency_ != nullptr;};
    void deleteJobDependency() { this->jobDependency_ = nullptr;};
    inline const vector<Models::CreateJobRequestDependencyPolicyJobDependency> & jobDependency() const { DARABONBA_PTR_GET_CONST(jobDependency_, vector<Models::CreateJobRequestDependencyPolicyJobDependency>) };
    inline vector<Models::CreateJobRequestDependencyPolicyJobDependency> jobDependency() { DARABONBA_PTR_GET(jobDependency_, vector<Models::CreateJobRequestDependencyPolicyJobDependency>) };
    inline CreateJobRequestDependencyPolicy& setJobDependency(const vector<Models::CreateJobRequestDependencyPolicyJobDependency> & jobDependency) { DARABONBA_PTR_SET_VALUE(jobDependency_, jobDependency) };
    inline CreateJobRequestDependencyPolicy& setJobDependency(vector<Models::CreateJobRequestDependencyPolicyJobDependency> && jobDependency) { DARABONBA_PTR_SET_RVALUE(jobDependency_, jobDependency) };


  protected:
    // The job dependency. A maximum of 10 groups.
    std::shared_ptr<vector<Models::CreateJobRequestDependencyPolicyJobDependency>> jobDependency_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
