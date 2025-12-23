// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKERRESOURCESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKERRESOURCESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UpdateWorkerResourceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkerResourceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WorkerId, workerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkerResourceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WorkerId, workerId_);
    };
    UpdateWorkerResourceStatusRequest() = default ;
    UpdateWorkerResourceStatusRequest(const UpdateWorkerResourceStatusRequest &) = default ;
    UpdateWorkerResourceStatusRequest(UpdateWorkerResourceStatusRequest &&) = default ;
    UpdateWorkerResourceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkerResourceStatusRequest() = default ;
    UpdateWorkerResourceStatusRequest& operator=(const UpdateWorkerResourceStatusRequest &) = default ;
    UpdateWorkerResourceStatusRequest& operator=(UpdateWorkerResourceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && return this->status_ == nullptr && return this->workerId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline UpdateWorkerResourceStatusRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateWorkerResourceStatusRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // workerId Field Functions 
    bool hasWorkerId() const { return this->workerId_ != nullptr;};
    void deleteWorkerId() { this->workerId_ = nullptr;};
    inline int64_t workerId() const { DARABONBA_PTR_GET_DEFAULT(workerId_, 0L) };
    inline UpdateWorkerResourceStatusRequest& setWorkerId(int64_t workerId) { DARABONBA_PTR_SET_VALUE(workerId_, workerId) };


  protected:
    // The ID of the deployment task. You can call the [CreateDeploymentJob](https://help.aliyun.com/document_detail/2712234.html) operation to obtain the ID of a deployment task from the **JobId** parameter. You can also call the [ListDeploymentJob](https://help.aliyun.com/document_detail/2712223.html) operation to obtain the ID of a deployment task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The desired status.
    // 
    // Valid values:
    // 
    // *   rollback
    // 
    // This parameter is required.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the worker task. You can call the [ListWorkerResource](https://help.aliyun.com/document_detail/2712224.html) operation to obtain the ID of a worker task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> workerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
