// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPEC_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSTASKSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpecResource.hpp>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpecRetryPolicy.hpp>
#include <vector>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpecTaskExecutor.hpp>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpecVolumeMount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksTaskSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksTaskSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(RetryPolicy, retryPolicy_);
      DARABONBA_PTR_TO_JSON(TaskExecutor, taskExecutor_);
      DARABONBA_PTR_TO_JSON(VolumeMount, volumeMount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksTaskSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(RetryPolicy, retryPolicy_);
      DARABONBA_PTR_FROM_JSON(TaskExecutor, taskExecutor_);
      DARABONBA_PTR_FROM_JSON(VolumeMount, volumeMount_);
    };
    CreateJobRequestTasksTaskSpec() = default ;
    CreateJobRequestTasksTaskSpec(const CreateJobRequestTasksTaskSpec &) = default ;
    CreateJobRequestTasksTaskSpec(CreateJobRequestTasksTaskSpec &&) = default ;
    CreateJobRequestTasksTaskSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksTaskSpec() = default ;
    CreateJobRequestTasksTaskSpec& operator=(const CreateJobRequestTasksTaskSpec &) = default ;
    CreateJobRequestTasksTaskSpec& operator=(CreateJobRequestTasksTaskSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resource_ == nullptr
        && return this->retryPolicy_ == nullptr && return this->taskExecutor_ == nullptr && return this->volumeMount_ == nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const Models::CreateJobRequestTasksTaskSpecResource & resource() const { DARABONBA_PTR_GET_CONST(resource_, Models::CreateJobRequestTasksTaskSpecResource) };
    inline Models::CreateJobRequestTasksTaskSpecResource resource() { DARABONBA_PTR_GET(resource_, Models::CreateJobRequestTasksTaskSpecResource) };
    inline CreateJobRequestTasksTaskSpec& setResource(const Models::CreateJobRequestTasksTaskSpecResource & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline CreateJobRequestTasksTaskSpec& setResource(Models::CreateJobRequestTasksTaskSpecResource && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // retryPolicy Field Functions 
    bool hasRetryPolicy() const { return this->retryPolicy_ != nullptr;};
    void deleteRetryPolicy() { this->retryPolicy_ = nullptr;};
    inline const Models::CreateJobRequestTasksTaskSpecRetryPolicy & retryPolicy() const { DARABONBA_PTR_GET_CONST(retryPolicy_, Models::CreateJobRequestTasksTaskSpecRetryPolicy) };
    inline Models::CreateJobRequestTasksTaskSpecRetryPolicy retryPolicy() { DARABONBA_PTR_GET(retryPolicy_, Models::CreateJobRequestTasksTaskSpecRetryPolicy) };
    inline CreateJobRequestTasksTaskSpec& setRetryPolicy(const Models::CreateJobRequestTasksTaskSpecRetryPolicy & retryPolicy) { DARABONBA_PTR_SET_VALUE(retryPolicy_, retryPolicy) };
    inline CreateJobRequestTasksTaskSpec& setRetryPolicy(Models::CreateJobRequestTasksTaskSpecRetryPolicy && retryPolicy) { DARABONBA_PTR_SET_RVALUE(retryPolicy_, retryPolicy) };


    // taskExecutor Field Functions 
    bool hasTaskExecutor() const { return this->taskExecutor_ != nullptr;};
    void deleteTaskExecutor() { this->taskExecutor_ = nullptr;};
    inline const vector<Models::CreateJobRequestTasksTaskSpecTaskExecutor> & taskExecutor() const { DARABONBA_PTR_GET_CONST(taskExecutor_, vector<Models::CreateJobRequestTasksTaskSpecTaskExecutor>) };
    inline vector<Models::CreateJobRequestTasksTaskSpecTaskExecutor> taskExecutor() { DARABONBA_PTR_GET(taskExecutor_, vector<Models::CreateJobRequestTasksTaskSpecTaskExecutor>) };
    inline CreateJobRequestTasksTaskSpec& setTaskExecutor(const vector<Models::CreateJobRequestTasksTaskSpecTaskExecutor> & taskExecutor) { DARABONBA_PTR_SET_VALUE(taskExecutor_, taskExecutor) };
    inline CreateJobRequestTasksTaskSpec& setTaskExecutor(vector<Models::CreateJobRequestTasksTaskSpecTaskExecutor> && taskExecutor) { DARABONBA_PTR_SET_RVALUE(taskExecutor_, taskExecutor) };


    // volumeMount Field Functions 
    bool hasVolumeMount() const { return this->volumeMount_ != nullptr;};
    void deleteVolumeMount() { this->volumeMount_ = nullptr;};
    inline const vector<Models::CreateJobRequestTasksTaskSpecVolumeMount> & volumeMount() const { DARABONBA_PTR_GET_CONST(volumeMount_, vector<Models::CreateJobRequestTasksTaskSpecVolumeMount>) };
    inline vector<Models::CreateJobRequestTasksTaskSpecVolumeMount> volumeMount() { DARABONBA_PTR_GET(volumeMount_, vector<Models::CreateJobRequestTasksTaskSpecVolumeMount>) };
    inline CreateJobRequestTasksTaskSpec& setVolumeMount(const vector<Models::CreateJobRequestTasksTaskSpecVolumeMount> & volumeMount) { DARABONBA_PTR_SET_VALUE(volumeMount_, volumeMount) };
    inline CreateJobRequestTasksTaskSpec& setVolumeMount(vector<Models::CreateJobRequestTasksTaskSpecVolumeMount> && volumeMount) { DARABONBA_PTR_SET_RVALUE(volumeMount_, volumeMount) };


  protected:
    // The resource information of the running environment.
    std::shared_ptr<Models::CreateJobRequestTasksTaskSpecResource> resource_ = nullptr;
    // Task retry policy.
    std::shared_ptr<Models::CreateJobRequestTasksTaskSpecRetryPolicy> retryPolicy_ = nullptr;
    // The task execution configurations.
    // 
    // This parameter is required.
    std::shared_ptr<vector<Models::CreateJobRequestTasksTaskSpecTaskExecutor>> taskExecutor_ = nullptr;
    // The list of data volumes mounted to the task. A maximum of 10 groups.
    std::shared_ptr<vector<Models::CreateJobRequestTasksTaskSpecVolumeMount>> volumeMount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
