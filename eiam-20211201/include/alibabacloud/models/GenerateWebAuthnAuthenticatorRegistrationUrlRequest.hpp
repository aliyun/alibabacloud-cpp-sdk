// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEWEBAUTHNAUTHENTICATORREGISTRATIONURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEWEBAUTHNAUTHENTICATORREGISTRATIONURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateWebAuthnAuthenticatorRegistrationUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateWebAuthnAuthenticatorRegistrationUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateWebAuthnAuthenticatorRegistrationUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    GenerateWebAuthnAuthenticatorRegistrationUrlRequest() = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlRequest(const GenerateWebAuthnAuthenticatorRegistrationUrlRequest &) = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlRequest(GenerateWebAuthnAuthenticatorRegistrationUrlRequest &&) = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateWebAuthnAuthenticatorRegistrationUrlRequest() = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlRequest& operator=(const GenerateWebAuthnAuthenticatorRegistrationUrlRequest &) = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlRequest& operator=(GenerateWebAuthnAuthenticatorRegistrationUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainId_ == nullptr
        && this->instanceId_ == nullptr && this->userId_ == nullptr; };
    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string getDomainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline GenerateWebAuthnAuthenticatorRegistrationUrlRequest& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateWebAuthnAuthenticatorRegistrationUrlRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GenerateWebAuthnAuthenticatorRegistrationUrlRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    shared_ptr<string> domainId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // UserID
    // 
    // This parameter is required.
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
