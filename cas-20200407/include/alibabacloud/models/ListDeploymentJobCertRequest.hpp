// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBCERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBCERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListDeploymentJobCertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentJobCertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentJobCertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
    };
    ListDeploymentJobCertRequest() = default ;
    ListDeploymentJobCertRequest(const ListDeploymentJobCertRequest &) = default ;
    ListDeploymentJobCertRequest(ListDeploymentJobCertRequest &&) = default ;
    ListDeploymentJobCertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentJobCertRequest() = default ;
    ListDeploymentJobCertRequest& operator=(const ListDeploymentJobCertRequest &) = default ;
    ListDeploymentJobCertRequest& operator=(ListDeploymentJobCertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline ListDeploymentJobCertRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


  protected:
    // The ID of the deployment task. You can call the [CreateDeploymentJob](https://help.aliyun.com/document_detail/2712234.html) operation to obtain the ID of a deployment task from the **JobId** parameter. You can also call the [ListDeploymentJob](https://help.aliyun.com/document_detail/2712223.html) operation to obtain the ID of a deployment task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
