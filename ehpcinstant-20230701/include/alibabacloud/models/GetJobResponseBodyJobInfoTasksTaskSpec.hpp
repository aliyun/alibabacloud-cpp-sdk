// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPEC_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSTASKSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksTaskSpecResource.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksTaskSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksTaskSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(RetryPolicy, retryPolicy_);
      DARABONBA_PTR_TO_JSON(TaskExecutor, taskExecutor_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksTaskSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(RetryPolicy, retryPolicy_);
      DARABONBA_PTR_FROM_JSON(TaskExecutor, taskExecutor_);
    };
    GetJobResponseBodyJobInfoTasksTaskSpec() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpec(const GetJobResponseBodyJobInfoTasksTaskSpec &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpec(GetJobResponseBodyJobInfoTasksTaskSpec &&) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksTaskSpec() = default ;
    GetJobResponseBodyJobInfoTasksTaskSpec& operator=(const GetJobResponseBodyJobInfoTasksTaskSpec &) = default ;
    GetJobResponseBodyJobInfoTasksTaskSpec& operator=(GetJobResponseBodyJobInfoTasksTaskSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resource_ == nullptr
        && return this->retryPolicy_ == nullptr && return this->taskExecutor_ == nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoTasksTaskSpecResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, Models::GetJobResponseBodyJobInfoTasksTaskSpecResource) };
    inline Models::GetJobResponseBodyJobInfoTasksTaskSpecResource resource() { DARABONBA_PTR_GET(resource_, Models::GetJobResponseBodyJobInfoTasksTaskSpecResource) };
    inline GetJobResponseBodyJobInfoTasksTaskSpec& setResource(const Models::GetJobResponseBodyJobInfoTasksTaskSpecResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline GetJobResponseBodyJobInfoTasksTaskSpec& setResource(Models::GetJobResponseBodyJobInfoTasksTaskSpecResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // retryPolicy Field Functions 
    bool hasRetryPolicy() const { return this->retryPolicy_ != nullptr;};
    void deleteRetryPolicy() { this->retryPolicy_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy & retryPolicy() const { DARABONBA_PTR_GET_CONST(retryPolicy_, Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy) };
    inline Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy retryPolicy() { DARABONBA_PTR_GET(retryPolicy_, Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy) };
    inline GetJobResponseBodyJobInfoTasksTaskSpec& setRetryPolicy(const Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy & retryPolicy) { DARABONBA_PTR_SET_VALUE(retryPolicy_, retryPolicy) };
    inline GetJobResponseBodyJobInfoTasksTaskSpec& setRetryPolicy(Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy && retryPolicy) { DARABONBA_PTR_SET_RVALUE(retryPolicy_, retryPolicy) };


    // taskExecutor Field Functions 
    bool hasTaskExecutor() const { return this->taskExecutor_ != nullptr;};
    void deleteTaskExecutor() { this->taskExecutor_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor> & taskExecutor() const { DARABONBA_PTR_GET_CONST(taskExecutor_, vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor>) };
    inline vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor> taskExecutor() { DARABONBA_PTR_GET(taskExecutor_, vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor>) };
    inline GetJobResponseBodyJobInfoTasksTaskSpec& setTaskExecutor(const vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor> & taskExecutor) { DARABONBA_PTR_SET_VALUE(taskExecutor_, taskExecutor) };
    inline GetJobResponseBodyJobInfoTasksTaskSpec& setTaskExecutor(vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor> && taskExecutor) { DARABONBA_PTR_SET_RVALUE(taskExecutor_, taskExecutor) };


  protected:
    // The resource information.
    std::shared_ptr<Models::GetJobResponseBodyJobInfoTasksTaskSpecResource> resource_ = nullptr;
    std::shared_ptr<Models::GetJobResponseBodyJobInfoTasksTaskSpecRetryPolicy> retryPolicy_ = nullptr;
    // The task execution configurations.
    std::shared_ptr<vector<Models::GetJobResponseBodyJobInfoTasksTaskSpecTaskExecutor>> taskExecutor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
