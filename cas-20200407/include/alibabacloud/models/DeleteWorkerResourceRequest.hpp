// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKERRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKERRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DeleteWorkerResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkerResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(WorkerId, workerId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkerResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(WorkerId, workerId_);
    };
    DeleteWorkerResourceRequest() = default ;
    DeleteWorkerResourceRequest(const DeleteWorkerResourceRequest &) = default ;
    DeleteWorkerResourceRequest(DeleteWorkerResourceRequest &&) = default ;
    DeleteWorkerResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkerResourceRequest() = default ;
    DeleteWorkerResourceRequest& operator=(const DeleteWorkerResourceRequest &) = default ;
    DeleteWorkerResourceRequest& operator=(DeleteWorkerResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->workerId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline DeleteWorkerResourceRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // workerId Field Functions 
    bool hasWorkerId() const { return this->workerId_ != nullptr;};
    void deleteWorkerId() { this->workerId_ = nullptr;};
    inline int64_t workerId() const { DARABONBA_PTR_GET_DEFAULT(workerId_, 0L) };
    inline DeleteWorkerResourceRequest& setWorkerId(int64_t workerId) { DARABONBA_PTR_SET_VALUE(workerId_, workerId) };


  protected:
    // The ID of the deployment task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The ID of the worker for the deployment task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> workerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
