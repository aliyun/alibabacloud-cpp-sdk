// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OBTAINCREDENTIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OBTAINCREDENTIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ObtainCredentialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ObtainCredentialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ObtainCredentialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialId, credentialId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    ObtainCredentialRequest() = default ;
    ObtainCredentialRequest(const ObtainCredentialRequest &) = default ;
    ObtainCredentialRequest(ObtainCredentialRequest &&) = default ;
    ObtainCredentialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ObtainCredentialRequest() = default ;
    ObtainCredentialRequest& operator=(const ObtainCredentialRequest &) = default ;
    ObtainCredentialRequest& operator=(ObtainCredentialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialId_ == nullptr
        && this->instanceId_ == nullptr; };
    // credentialId Field Functions 
    bool hasCredentialId() const { return this->credentialId_ != nullptr;};
    void deleteCredentialId() { this->credentialId_ = nullptr;};
    inline string getCredentialId() const { DARABONBA_PTR_GET_DEFAULT(credentialId_, "") };
    inline ObtainCredentialRequest& setCredentialId(string credentialId) { DARABONBA_PTR_SET_VALUE(credentialId_, credentialId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ObtainCredentialRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 凭据ID。
    // 
    // This parameter is required.
    shared_ptr<string> credentialId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
