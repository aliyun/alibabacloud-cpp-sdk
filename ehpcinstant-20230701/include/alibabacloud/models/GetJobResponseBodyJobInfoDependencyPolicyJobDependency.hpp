// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFODEPENDENCYPOLICYJOBDEPENDENCY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFODEPENDENCYPOLICYJOBDEPENDENCY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoDependencyPolicyJobDependency : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoDependencyPolicyJobDependency& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoDependencyPolicyJobDependency& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetJobResponseBodyJobInfoDependencyPolicyJobDependency() = default ;
    GetJobResponseBodyJobInfoDependencyPolicyJobDependency(const GetJobResponseBodyJobInfoDependencyPolicyJobDependency &) = default ;
    GetJobResponseBodyJobInfoDependencyPolicyJobDependency(GetJobResponseBodyJobInfoDependencyPolicyJobDependency &&) = default ;
    GetJobResponseBodyJobInfoDependencyPolicyJobDependency(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoDependencyPolicyJobDependency() = default ;
    GetJobResponseBodyJobInfoDependencyPolicyJobDependency& operator=(const GetJobResponseBodyJobInfoDependencyPolicyJobDependency &) = default ;
    GetJobResponseBodyJobInfoDependencyPolicyJobDependency& operator=(GetJobResponseBodyJobInfoDependencyPolicyJobDependency &&) = default ;
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
    inline GetJobResponseBodyJobInfoDependencyPolicyJobDependency& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetJobResponseBodyJobInfoDependencyPolicyJobDependency& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
