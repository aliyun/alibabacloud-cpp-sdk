// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateCloudAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_TO_JSON(CloudAccountName, cloudAccountName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudAccountId, cloudAccountId_);
      DARABONBA_PTR_FROM_JSON(CloudAccountName, cloudAccountName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateCloudAccountRequest() = default ;
    UpdateCloudAccountRequest(const UpdateCloudAccountRequest &) = default ;
    UpdateCloudAccountRequest(UpdateCloudAccountRequest &&) = default ;
    UpdateCloudAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudAccountRequest() = default ;
    UpdateCloudAccountRequest& operator=(const UpdateCloudAccountRequest &) = default ;
    UpdateCloudAccountRequest& operator=(UpdateCloudAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->cloudAccountId_ == nullptr && this->cloudAccountName_ == nullptr && this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudAccountRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudAccountId Field Functions 
    bool hasCloudAccountId() const { return this->cloudAccountId_ != nullptr;};
    void deleteCloudAccountId() { this->cloudAccountId_ = nullptr;};
    inline string getCloudAccountId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountId_, "") };
    inline UpdateCloudAccountRequest& setCloudAccountId(string cloudAccountId) { DARABONBA_PTR_SET_VALUE(cloudAccountId_, cloudAccountId) };


    // cloudAccountName Field Functions 
    bool hasCloudAccountName() const { return this->cloudAccountName_ != nullptr;};
    void deleteCloudAccountName() { this->cloudAccountName_ = nullptr;};
    inline string getCloudAccountName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountName_, "") };
    inline UpdateCloudAccountRequest& setCloudAccountName(string cloudAccountName) { DARABONBA_PTR_SET_VALUE(cloudAccountName_, cloudAccountName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateCloudAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // 云账号ID。
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountId_ {};
    // This parameter is required.
    shared_ptr<string> cloudAccountName_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
