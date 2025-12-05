// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONACCESSPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONACCESSPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateApplicationAccessPointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationAccessPointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AuthenticationMethod, authenticationMethod_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationAccessPointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AuthenticationMethod, authenticationMethod_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateApplicationAccessPointResponseBody() = default ;
    CreateApplicationAccessPointResponseBody(const CreateApplicationAccessPointResponseBody &) = default ;
    CreateApplicationAccessPointResponseBody(CreateApplicationAccessPointResponseBody &&) = default ;
    CreateApplicationAccessPointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationAccessPointResponseBody() = default ;
    CreateApplicationAccessPointResponseBody& operator=(const CreateApplicationAccessPointResponseBody &) = default ;
    CreateApplicationAccessPointResponseBody& operator=(CreateApplicationAccessPointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->authenticationMethod_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->policies_ == nullptr && return this->requestId_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline CreateApplicationAccessPointResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // authenticationMethod Field Functions 
    bool hasAuthenticationMethod() const { return this->authenticationMethod_ != nullptr;};
    void deleteAuthenticationMethod() { this->authenticationMethod_ = nullptr;};
    inline string authenticationMethod() const { DARABONBA_PTR_GET_DEFAULT(authenticationMethod_, "") };
    inline CreateApplicationAccessPointResponseBody& setAuthenticationMethod(string authenticationMethod) { DARABONBA_PTR_SET_VALUE(authenticationMethod_, authenticationMethod) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationAccessPointResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationAccessPointResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline string policies() const { DARABONBA_PTR_GET_DEFAULT(policies_, "") };
    inline CreateApplicationAccessPointResponseBody& setPolicies(string policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateApplicationAccessPointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the AAP.
    std::shared_ptr<string> arn_ = nullptr;
    // The authentication method.
    std::shared_ptr<string> authenticationMethod_ = nullptr;
    // The description of the AAP.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the AAP.
    std::shared_ptr<string> name_ = nullptr;
    // The permission policy.
    std::shared_ptr<string> policies_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
