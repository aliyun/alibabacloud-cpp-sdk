// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECLOUDACCOUNTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECLOUDACCOUNTROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DeleteCloudAccountRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCloudAccountRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(CloudAccountRoleId, cloudAccountRoleId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCloudAccountRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(CloudAccountRoleId, cloudAccountRoleId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeleteCloudAccountRoleRequest() = default ;
    DeleteCloudAccountRoleRequest(const DeleteCloudAccountRoleRequest &) = default ;
    DeleteCloudAccountRoleRequest(DeleteCloudAccountRoleRequest &&) = default ;
    DeleteCloudAccountRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCloudAccountRoleRequest() = default ;
    DeleteCloudAccountRoleRequest& operator=(const DeleteCloudAccountRoleRequest &) = default ;
    DeleteCloudAccountRoleRequest& operator=(DeleteCloudAccountRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cloudAccountId_ == nullptr
        && this->cloudAccountRoleId_ == nullptr && this->instanceId_ == nullptr; };
    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline DeleteCloudAccountRoleRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudAccountRoleId Field Functions 
    bool hasCloudAccountRoleId() const { return this->cloudAccountRoleId_ != nullptr;};
    void deleteCloudAccountRoleId() { this->cloudAccountRoleId_ = nullptr;};
    inline string getCloudAccountRoleId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleId_, "") };
    inline DeleteCloudAccountRoleRequest& setCloudAccountRoleId(string cloudAccountRoleId) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleId_, cloudAccountRoleId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteCloudAccountRoleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // 云账号角色ID
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountRoleId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
