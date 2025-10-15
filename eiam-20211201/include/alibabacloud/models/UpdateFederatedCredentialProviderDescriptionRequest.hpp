// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERDESCRIPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERDESCRIPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateFederatedCredentialProviderDescriptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFederatedCredentialProviderDescriptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFederatedCredentialProviderDescriptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    UpdateFederatedCredentialProviderDescriptionRequest() = default ;
    UpdateFederatedCredentialProviderDescriptionRequest(const UpdateFederatedCredentialProviderDescriptionRequest &) = default ;
    UpdateFederatedCredentialProviderDescriptionRequest(UpdateFederatedCredentialProviderDescriptionRequest &&) = default ;
    UpdateFederatedCredentialProviderDescriptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFederatedCredentialProviderDescriptionRequest() = default ;
    UpdateFederatedCredentialProviderDescriptionRequest& operator=(const UpdateFederatedCredentialProviderDescriptionRequest &) = default ;
    UpdateFederatedCredentialProviderDescriptionRequest& operator=(UpdateFederatedCredentialProviderDescriptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->federatedCredentialProviderId_ == nullptr && return this->instanceId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateFederatedCredentialProviderDescriptionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string federatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline UpdateFederatedCredentialProviderDescriptionRequest& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateFederatedCredentialProviderDescriptionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 联邦凭证提供方描述
    std::shared_ptr<string> description_ = nullptr;
    // 联邦凭证提供方ID
    // 
    // This parameter is required.
    std::shared_ptr<string> federatedCredentialProviderId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
