// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTROLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTROLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCloudAccountRoleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudAccountRoleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(CloudAccountRoleName, cloudAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CloudAccountRoleType, cloudAccountRoleType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudAccountRoleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(CloudAccountRoleName, cloudAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CloudAccountRoleType, cloudAccountRoleType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateCloudAccountRoleRequest() = default ;
    CreateCloudAccountRoleRequest(const CreateCloudAccountRoleRequest &) = default ;
    CreateCloudAccountRoleRequest(CreateCloudAccountRoleRequest &&) = default ;
    CreateCloudAccountRoleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudAccountRoleRequest() = default ;
    CreateCloudAccountRoleRequest& operator=(const CreateCloudAccountRoleRequest &) = default ;
    CreateCloudAccountRoleRequest& operator=(CreateCloudAccountRoleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->cloudAccountId_ == nullptr && this->cloudAccountRoleName_ == nullptr && this->cloudAccountRoleType_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCloudAccountRoleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline CreateCloudAccountRoleRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudAccountRoleName Field Functions 
    bool hasCloudAccountRoleName() const { return this->cloudAccountRoleName_ != nullptr;};
    void deleteCloudAccountRoleName() { this->cloudAccountRoleName_ = nullptr;};
    inline string getCloudAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleName_, "") };
    inline CreateCloudAccountRoleRequest& setCloudAccountRoleName(string cloudAccountRoleName) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleName_, cloudAccountRoleName) };


    // cloudAccountRoleType Field Functions 
    bool hasCloudAccountRoleType() const { return this->cloudAccountRoleType_ != nullptr;};
    void deleteCloudAccountRoleType() { this->cloudAccountRoleType_ = nullptr;};
    inline string getCloudAccountRoleType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountRoleType_, "") };
    inline CreateCloudAccountRoleRequest& setCloudAccountRoleType(string cloudAccountRoleType) { DARABONBA_PTR_SET_VALUE(cloudAccountRoleType_, cloudAccountRoleType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCloudAccountRoleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCloudAccountRoleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // 云账号唯一标识
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // This parameter is required.
    shared_ptr<string> cloudAccountRoleName_ {};
    // 云账号类型
    shared_ptr<string> cloudAccountRoleType_ {};
    shared_ptr<string> description_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
