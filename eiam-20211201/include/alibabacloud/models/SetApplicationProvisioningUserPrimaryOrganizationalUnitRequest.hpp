// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGUSERPRIMARYORGANIZATIONALUNITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETAPPLICATIONPROVISIONINGUSERPRIMARYORGANIZATIONALUNITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserPrimaryOrganizationalUnitId, userPrimaryOrganizationalUnitId_);
    };
    friend void from_json(const Darabonba::Json& j, SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserPrimaryOrganizationalUnitId, userPrimaryOrganizationalUnitId_);
    };
    SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest() = default ;
    SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest(const SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &) = default ;
    SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest(SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &&) = default ;
    SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest() = default ;
    SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest& operator=(const SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &) = default ;
    SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest& operator=(SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->instanceId_ == nullptr && this->userPrimaryOrganizationalUnitId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userPrimaryOrganizationalUnitId Field Functions 
    bool hasUserPrimaryOrganizationalUnitId() const { return this->userPrimaryOrganizationalUnitId_ != nullptr;};
    void deleteUserPrimaryOrganizationalUnitId() { this->userPrimaryOrganizationalUnitId_ = nullptr;};
    inline string getUserPrimaryOrganizationalUnitId() const { DARABONBA_PTR_GET_DEFAULT(userPrimaryOrganizationalUnitId_, "") };
    inline SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest& setUserPrimaryOrganizationalUnitId(string userPrimaryOrganizationalUnitId) { DARABONBA_PTR_SET_VALUE(userPrimaryOrganizationalUnitId_, userPrimaryOrganizationalUnitId) };


  protected:
    // IDaaS的应用资源ID。
    // 
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // 组织ID。
    // 
    // This parameter is required.
    shared_ptr<string> userPrimaryOrganizationalUnitId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
