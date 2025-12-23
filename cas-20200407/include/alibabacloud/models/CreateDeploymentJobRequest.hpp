// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEPLOYMENTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEPLOYMENTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateDeploymentJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDeploymentJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertIds, certIds_);
      DARABONBA_PTR_TO_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ScheduleTime, scheduleTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDeploymentJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIds, certIds_);
      DARABONBA_PTR_FROM_JSON(ContactIds, contactIds_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ScheduleTime, scheduleTime_);
    };
    CreateDeploymentJobRequest() = default ;
    CreateDeploymentJobRequest(const CreateDeploymentJobRequest &) = default ;
    CreateDeploymentJobRequest(CreateDeploymentJobRequest &&) = default ;
    CreateDeploymentJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDeploymentJobRequest() = default ;
    CreateDeploymentJobRequest& operator=(const CreateDeploymentJobRequest &) = default ;
    CreateDeploymentJobRequest& operator=(CreateDeploymentJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIds_ == nullptr
        && return this->contactIds_ == nullptr && return this->jobType_ == nullptr && return this->name_ == nullptr && return this->resourceIds_ == nullptr && return this->scheduleTime_ == nullptr; };
    // certIds Field Functions 
    bool hasCertIds() const { return this->certIds_ != nullptr;};
    void deleteCertIds() { this->certIds_ = nullptr;};
    inline string certIds() const { DARABONBA_PTR_GET_DEFAULT(certIds_, "") };
    inline CreateDeploymentJobRequest& setCertIds(string certIds) { DARABONBA_PTR_SET_VALUE(certIds_, certIds) };


    // contactIds Field Functions 
    bool hasContactIds() const { return this->contactIds_ != nullptr;};
    void deleteContactIds() { this->contactIds_ = nullptr;};
    inline string contactIds() const { DARABONBA_PTR_GET_DEFAULT(contactIds_, "") };
    inline CreateDeploymentJobRequest& setContactIds(string contactIds) { DARABONBA_PTR_SET_VALUE(contactIds_, contactIds) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string jobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline CreateDeploymentJobRequest& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDeploymentJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline string resourceIds() const { DARABONBA_PTR_GET_DEFAULT(resourceIds_, "") };
    inline CreateDeploymentJobRequest& setResourceIds(string resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };


    // scheduleTime Field Functions 
    bool hasScheduleTime() const { return this->scheduleTime_ != nullptr;};
    void deleteScheduleTime() { this->scheduleTime_ = nullptr;};
    inline int64_t scheduleTime() const { DARABONBA_PTR_GET_DEFAULT(scheduleTime_, 0L) };
    inline CreateDeploymentJobRequest& setScheduleTime(int64_t scheduleTime) { DARABONBA_PTR_SET_VALUE(scheduleTime_, scheduleTime) };


  protected:
    // The ID of the certificate. Separate multiple certificate IDs with commas (,). You can call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/455804.html) operation to obtain the IDs of certificates from the **CertificateId** parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> certIds_ = nullptr;
    // The ID of the contact. Separate multiple contact IDs with commas (,). You can call the [ListContact](https://help.aliyun.com/document_detail/2712221.html) operation to obtain the IDs of contacts from the **ContactId** parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactIds_ = nullptr;
    // The type of the deployment task.
    // 
    // Valid values:
    // 
    // *   cloud: multi-cloud deployment task.
    // *   user: cloud service deployment task. This type of task does not support cloud servers.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobType_ = nullptr;
    // The name of the deployment task.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the cloud resource. Separate multiple resource IDs with commas (,). You can call the [ListCloudResources](https://help.aliyun.com/document_detail/2712230.html) operation to obtain the IDs of cloud resources from the **Id** parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceIds_ = nullptr;
    // The time when the task starts. The value is a UNIX timestamp. If you do not specify this parameter, the system immediately starts the task after the task is in the pending state.
    std::shared_ptr<int64_t> scheduleTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
