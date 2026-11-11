// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLOUDPERMISSIONTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCLOUDPERMISSIONTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetCloudPermissionTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCloudPermissionTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(CloudPermissionTemplateId, cloudPermissionTemplateId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCloudPermissionTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(CloudPermissionTemplateId, cloudPermissionTemplateId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetCloudPermissionTemplateRequest() = default ;
    GetCloudPermissionTemplateRequest(const GetCloudPermissionTemplateRequest &) = default ;
    GetCloudPermissionTemplateRequest(GetCloudPermissionTemplateRequest &&) = default ;
    GetCloudPermissionTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCloudPermissionTemplateRequest() = default ;
    GetCloudPermissionTemplateRequest& operator=(const GetCloudPermissionTemplateRequest &) = default ;
    GetCloudPermissionTemplateRequest& operator=(GetCloudPermissionTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudPermissionTemplateId_ == nullptr && this->instanceId_ == nullptr; };
    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline GetCloudPermissionTemplateRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudPermissionTemplateId Field Functions 
    bool hasCloudPermissionTemplateId() const { return this->cloudPermissionTemplateId_ != nullptr;};
    void deleteCloudPermissionTemplateId() { this->cloudPermissionTemplateId_ = nullptr;};
    inline string getCloudPermissionTemplateId() const { DARABONBA_PTR_GET_DEFAULT(cloudPermissionTemplateId_, "") };
    inline GetCloudPermissionTemplateRequest& setCloudPermissionTemplateId(string cloudPermissionTemplateId) { DARABONBA_PTR_SET_VALUE(cloudPermissionTemplateId_, cloudPermissionTemplateId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetCloudPermissionTemplateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The ID of the cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // The ID of the permission template.
    // 
    // This parameter is required.
    shared_ptr<string> cloudPermissionTemplateId_ {};
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
