// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDEPLOYMENTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class UpdateDeploymentJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDeploymentJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertIds, certIds_);
      DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDeploymentJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIds, certIds_);
      DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
    };
    UpdateDeploymentJobRequest() = default ;
    UpdateDeploymentJobRequest(const UpdateDeploymentJobRequest &) = default ;
    UpdateDeploymentJobRequest(UpdateDeploymentJobRequest &&) = default ;
    UpdateDeploymentJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDeploymentJobRequest() = default ;
    UpdateDeploymentJobRequest& operator=(const UpdateDeploymentJobRequest &) = default ;
    UpdateDeploymentJobRequest& operator=(UpdateDeploymentJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certIds_ != nullptr
        && this->contactIds_ != nullptr && this->jobId_ != nullptr && this->name_ != nullptr && this->resourceIds_ != nullptr && this->scheduleTime_ != nullptr; };
    // certIds Field Functions 
    bool hasCertIds() const { return this->certIds_ != nullptr;};
    void deleteCertIds() { this->certIds_ = nullptr;};
    inline string certIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
    inline UpdateDeploymentJobRequest& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline string contactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
    inline UpdateDeploymentJobRequest& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline UpdateDeploymentJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDeploymentJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string resourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline UpdateDeploymentJobRequest& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline int64_t scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, 0L) };
    inline UpdateDeploymentJobRequest& setScheduleTime(int64_t scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


  protected:
    // The ID of the certificate. Separate multiple certificate IDs with commas (,). You can call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/455804.html) operation to obtain the ID of a certificate from the **CertificateId** parameter.
    std::shared_ptr<string> certIds_ = nullptr;
    // The ID of the contact. Separate multiple contact IDs with commas (,). You can call the [ListContact](https://help.aliyun.com/document_detail/2712221.html) operation to obtain the ID of a contact from the **ContactId** parameter.
    std::shared_ptr<string> contactIds_ = nullptr;
    // The ID of the deployment task. You can call the [CreateDeploymentJob](https://help.aliyun.com/document_detail/2712234.html) operation to obtain the ID of a deployment task from the JobId parameter. You can also call the [ListDeploymentJob](https://help.aliyun.com/document_detail/2712223.html) operation to obtain the ID of a deployment task.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The name of the deployment task.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the cloud resource. Separate multiple resource IDs with commas (,). You can call the [ListCloudResources](https://help.aliyun.com/document_detail/2712230.html) operation to obtain the ID of a cloud resource from the **Id** parameter.
    std::shared_ptr<string> resourceIds_ = nullptr;
    // The time when the task starts. The value is a UNIX timestamp. If you do not specify this parameter, the system immediately starts the task after it is created.
    std::shared_ptr<int64_t> scheduleTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
