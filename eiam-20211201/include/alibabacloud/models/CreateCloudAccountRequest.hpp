// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateCloudAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CloudAccountExternalId, cloudAccountExternalId_);
      DARABONBA_PTR_TO_JSON(CloudAccountName, cloudAccountName_);
      DARABONBA_PTR_TO_JSON(CloudAccountProviderName, cloudAccountProviderName_);
      DARABONBA_PTR_TO_JSON(CloudAccountVendorType, cloudAccountVendorType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CloudAccountExternalId, cloudAccountExternalId_);
      DARABONBA_PTR_FROM_JSON(CloudAccountName, cloudAccountName_);
      DARABONBA_PTR_FROM_JSON(CloudAccountProviderName, cloudAccountProviderName_);
      DARABONBA_PTR_FROM_JSON(CloudAccountVendorType, cloudAccountVendorType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateCloudAccountRequest() = default ;
    CreateCloudAccountRequest(const CreateCloudAccountRequest &) = default ;
    CreateCloudAccountRequest(CreateCloudAccountRequest &&) = default ;
    CreateCloudAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudAccountRequest() = default ;
    CreateCloudAccountRequest& operator=(const CreateCloudAccountRequest &) = default ;
    CreateCloudAccountRequest& operator=(CreateCloudAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->cloudAccountExternalId_ == nullptr && this->cloudAccountName_ == nullptr && this->cloudAccountProviderName_ == nullptr && this->cloudAccountVendorType_ == nullptr && this->description_ == nullptr
        && this->instanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateCloudAccountRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cloudAccountExternalId Field Functions 
    bool hasCloudAccountExternalId() const { return this->cloudAccountExternalId_ != nullptr;};
    void deleteCloudAccountExternalId() { this->cloudAccountExternalId_ = nullptr;};
    inline string getCloudAccountExternalId() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountExternalId_, "") };
    inline CreateCloudAccountRequest& setCloudAccountExternalId(string cloudAccountExternalId) { DARABONBA_PTR_SET_VALUE(cloudAccountExternalId_, cloudAccountExternalId) };


    // cloudAccountName Field Functions 
    bool hasCloudAccountName() const { return this->cloudAccountName_ != nullptr;};
    void deleteCloudAccountName() { this->cloudAccountName_ = nullptr;};
    inline string getCloudAccountName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountName_, "") };
    inline CreateCloudAccountRequest& setCloudAccountName(string cloudAccountName) { DARABONBA_PTR_SET_VALUE(cloudAccountName_, cloudAccountName) };


    // cloudAccountProviderName Field Functions 
    bool hasCloudAccountProviderName() const { return this->cloudAccountProviderName_ != nullptr;};
    void deleteCloudAccountProviderName() { this->cloudAccountProviderName_ = nullptr;};
    inline string getCloudAccountProviderName() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountProviderName_, "") };
    inline CreateCloudAccountRequest& setCloudAccountProviderName(string cloudAccountProviderName) { DARABONBA_PTR_SET_VALUE(cloudAccountProviderName_, cloudAccountProviderName) };


    // cloudAccountVendorType Field Functions 
    bool hasCloudAccountVendorType() const { return this->cloudAccountVendorType_ != nullptr;};
    void deleteCloudAccountVendorType() { this->cloudAccountVendorType_ = nullptr;};
    inline string getCloudAccountVendorType() const { DARABONBA_PTR_GET_DEFAULT(cloudAccountVendorType_, "") };
    inline CreateCloudAccountRequest& setCloudAccountVendorType(string cloudAccountVendorType) { DARABONBA_PTR_SET_VALUE(cloudAccountVendorType_, cloudAccountVendorType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCloudAccountRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCloudAccountRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
    // 云账号唯一标识
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountExternalId_ {};
    // 云账号名称
    shared_ptr<string> cloudAccountName_ {};
    // 云账号提供商名称
    shared_ptr<string> cloudAccountProviderName_ {};
    // 云账号类型
    // 
    // This parameter is required.
    shared_ptr<string> cloudAccountVendorType_ {};
    // 云账号描述
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
