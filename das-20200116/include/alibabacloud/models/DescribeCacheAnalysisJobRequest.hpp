// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACHEANALYSISJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeCacheAnalysisJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCacheAnalysisJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCacheAnalysisJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    DescribeCacheAnalysisJobRequest() = default ;
    DescribeCacheAnalysisJobRequest(const DescribeCacheAnalysisJobRequest &) = default ;
    DescribeCacheAnalysisJobRequest(DescribeCacheAnalysisJobRequest &&) = default ;
    DescribeCacheAnalysisJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCacheAnalysisJobRequest() = default ;
    DescribeCacheAnalysisJobRequest& operator=(const DescribeCacheAnalysisJobRequest &) = default ;
    DescribeCacheAnalysisJobRequest& operator=(DescribeCacheAnalysisJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->jobId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeCacheAnalysisJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeCacheAnalysisJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the cache analysis task. You can obtain the task ID from the response parameters of the [CreateCacheAnalysisJob](https://help.aliyun.com/document_detail/180982.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
