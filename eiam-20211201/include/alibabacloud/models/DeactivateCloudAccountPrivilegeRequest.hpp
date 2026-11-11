// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEACTIVATECLOUDACCOUNTPRIVILEGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEACTIVATECLOUDACCOUNTPRIVILEGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DeactivateCloudAccountPrivilegeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeactivateCloudAccountPrivilegeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeactivateCloudAccountPrivilegeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DeactivateCloudAccountPrivilegeRequest() = default ;
    DeactivateCloudAccountPrivilegeRequest(const DeactivateCloudAccountPrivilegeRequest &) = default ;
    DeactivateCloudAccountPrivilegeRequest(DeactivateCloudAccountPrivilegeRequest &&) = default ;
    DeactivateCloudAccountPrivilegeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeactivateCloudAccountPrivilegeRequest() = default ;
    DeactivateCloudAccountPrivilegeRequest& operator=(const DeactivateCloudAccountPrivilegeRequest &) = default ;
    DeactivateCloudAccountPrivilegeRequest& operator=(DeactivateCloudAccountPrivilegeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->cloudAccountId_ == nullptr && this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeactivateCloudAccountPrivilegeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline DeactivateCloudAccountPrivilegeRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeactivateCloudAccountPrivilegeRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Ensures the idempotence of the request. You can generate a parameter value on your client to ensure that the value is unique across different requests. ClientToken supports only ASCII characters and can be up to 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The ID of the cloud account.
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
