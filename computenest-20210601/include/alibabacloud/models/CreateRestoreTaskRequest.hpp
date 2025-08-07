// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESTORETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESTORETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class CreateRestoreTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRestoreTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRestoreTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
    };
    CreateRestoreTaskRequest() = default ;
    CreateRestoreTaskRequest(const CreateRestoreTaskRequest &) = default ;
    CreateRestoreTaskRequest(CreateRestoreTaskRequest &&) = default ;
    CreateRestoreTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRestoreTaskRequest() = default ;
    CreateRestoreTaskRequest& operator=(const CreateRestoreTaskRequest &) = default ;
    CreateRestoreTaskRequest& operator=(CreateRestoreTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->backupId_ != nullptr
        && this->serviceInstanceId_ != nullptr; };
    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string backupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline CreateRestoreTaskRequest& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string serviceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline CreateRestoreTaskRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


  protected:
    // The backup ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> backupId_ = nullptr;
    // The ID of the service instance.
    // 
    // You can call [ListServiceInstances](https://help.aliyun.com/document_detail/396200.html) to obtain the ID of the service instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
