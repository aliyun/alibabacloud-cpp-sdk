// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDEPLOYMENTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDEPLOYMENTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DeleteDeploymentJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDeploymentJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDeploymentJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    DeleteDeploymentJobRequest() = default ;
    DeleteDeploymentJobRequest(const DeleteDeploymentJobRequest &) = default ;
    DeleteDeploymentJobRequest(DeleteDeploymentJobRequest &&) = default ;
    DeleteDeploymentJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDeploymentJobRequest() = default ;
    DeleteDeploymentJobRequest& operator=(const DeleteDeploymentJobRequest &) = default ;
    DeleteDeploymentJobRequest& operator=(DeleteDeploymentJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline DeleteDeploymentJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the deployment task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
