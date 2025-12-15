// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobSpec, jobSpecShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobSpec, jobSpecShrink_);
    };
    CreateJobShrinkRequest() = default ;
    CreateJobShrinkRequest(const CreateJobShrinkRequest &) = default ;
    CreateJobShrinkRequest(CreateJobShrinkRequest &&) = default ;
    CreateJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobShrinkRequest() = default ;
    CreateJobShrinkRequest& operator=(const CreateJobShrinkRequest &) = default ;
    CreateJobShrinkRequest& operator=(CreateJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->jobName_ == nullptr && return this->jobSpecShrink_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateJobShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateJobShrinkRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobSpecShrink Field Functions 
    bool hasJobSpecShrink() const { return this->jobSpecShrink_ != nullptr;};
    void deleteJobSpecShrink() { this->jobSpecShrink_ = nullptr;};
    inline string jobSpecShrink() const { DARABONBA_PTR_GET_DEFAULT(jobSpecShrink_, "") };
    inline CreateJobShrinkRequest& setJobSpecShrink(string jobSpecShrink) { DARABONBA_PTR_SET_VALUE(jobSpecShrink_, jobSpecShrink) };


  protected:
    // The cluster ID.
    // 
    // You can call the [ListClusters](https://help.aliyun.com/document_detail/87116.html) operation to query the cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The job name.
    std::shared_ptr<string> jobName_ = nullptr;
    // The job configurations.
    std::shared_ptr<string> jobSpecShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
