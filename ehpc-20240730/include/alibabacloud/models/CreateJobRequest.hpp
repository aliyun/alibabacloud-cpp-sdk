// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestJobSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EHPC20240730
{
namespace Models
{
  class CreateJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(JobSpec, jobSpec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(JobSpec, jobSpec_);
    };
    CreateJobRequest() = default ;
    CreateJobRequest(const CreateJobRequest &) = default ;
    CreateJobRequest(CreateJobRequest &&) = default ;
    CreateJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequest() = default ;
    CreateJobRequest& operator=(const CreateJobRequest &) = default ;
    CreateJobRequest& operator=(CreateJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->jobName_ == nullptr && return this->jobSpec_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateJobRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CreateJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // jobSpec Field Functions 
    bool hasJobSpec() const { return this->jobSpec_ != nullptr;};
    void deleteJobSpec() { this->jobSpec_ = nullptr;};
    inline const CreateJobRequestJobSpec & jobSpec() const { DARABONBA_PTR_GET_CONST(jobSpec_, CreateJobRequestJobSpec) };
    inline CreateJobRequestJobSpec jobSpec() { DARABONBA_PTR_GET(jobSpec_, CreateJobRequestJobSpec) };
    inline CreateJobRequest& setJobSpec(const CreateJobRequestJobSpec & jobSpec) { DARABONBA_PTR_SET_VALUE(jobSpec_, jobSpec) };
    inline CreateJobRequest& setJobSpec(CreateJobRequestJobSpec && jobSpec) { DARABONBA_PTR_SET_RVALUE(jobSpec_, jobSpec) };


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
    std::shared_ptr<CreateJobRequestJobSpec> jobSpec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EHPC20240730
#endif
