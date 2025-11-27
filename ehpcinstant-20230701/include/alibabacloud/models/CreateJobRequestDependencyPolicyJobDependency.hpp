// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTDEPENDENCYPOLICYJOBDEPENDENCY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTDEPENDENCYPOLICYJOBDEPENDENCY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestDependencyPolicyJobDependency : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestDependencyPolicyJobDependency& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestDependencyPolicyJobDependency& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateJobRequestDependencyPolicyJobDependency() = default ;
    CreateJobRequestDependencyPolicyJobDependency(const CreateJobRequestDependencyPolicyJobDependency &) = default ;
    CreateJobRequestDependencyPolicyJobDependency(CreateJobRequestDependencyPolicyJobDependency &&) = default ;
    CreateJobRequestDependencyPolicyJobDependency(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestDependencyPolicyJobDependency() = default ;
    CreateJobRequestDependencyPolicyJobDependency& operator=(const CreateJobRequestDependencyPolicyJobDependency &) = default ;
    CreateJobRequestDependencyPolicyJobDependency& operator=(CreateJobRequestDependencyPolicyJobDependency &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->type_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CreateJobRequestDependencyPolicyJobDependency& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateJobRequestDependencyPolicyJobDependency& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the job.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // The type of the dependency. Valid values:
    // 
    // *   AfterSucceeded: **All subtasks** of the dependent job or array job succeed. The exit code is 0.
    // *   AfterFailed: **All subtasks** of the dependent job or array job fail. The exit code is not 0.
    // *   AfterAny: The dependent job completes (succeeds or fails).
    // *   AfterCorresponding: The subtask corresponding to the dependent array job succeeds. The exit code is 0.
    // 
    // Default value: AfterSucceeded.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
