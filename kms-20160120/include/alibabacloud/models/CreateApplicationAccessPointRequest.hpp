// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONACCESSPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONACCESSPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class CreateApplicationAccessPointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationAccessPointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationMethod, authenticationMethod_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Policies, policies_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationAccessPointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationMethod, authenticationMethod_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
    };
    CreateApplicationAccessPointRequest() = default ;
    CreateApplicationAccessPointRequest(const CreateApplicationAccessPointRequest &) = default ;
    CreateApplicationAccessPointRequest(CreateApplicationAccessPointRequest &&) = default ;
    CreateApplicationAccessPointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationAccessPointRequest() = default ;
    CreateApplicationAccessPointRequest& operator=(const CreateApplicationAccessPointRequest &) = default ;
    CreateApplicationAccessPointRequest& operator=(CreateApplicationAccessPointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationMethod_ == nullptr
        && return this->description_ == nullptr && return this->name_ == nullptr && return this->policies_ == nullptr; };
    // authenticationMethod Field Functions 
    bool hasAuthenticationMethod() const { return this->authenticationMethod_ != nullptr;};
    void deleteAuthenticationMethod() { this->authenticationMethod_ = nullptr;};
    inline string authenticationMethod() const { DARABONBA_PTR_GET_DEFAULT(authenticationMethod_, "") };
    inline CreateApplicationAccessPointRequest& setAuthenticationMethod(string authenticationMethod) { DARABONBA_PTR_SET_VALUE(authenticationMethod_, authenticationMethod) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateApplicationAccessPointRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateApplicationAccessPointRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline string policies() const { DARABONBA_PTR_GET_DEFAULT(policies_, "") };
    inline CreateApplicationAccessPointRequest& setPolicies(string policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };


  protected:
    // The authentication method. Currently, only ClientKey is supported.
    std::shared_ptr<string> authenticationMethod_ = nullptr;
    // The description of the AAP.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the AAP.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The permission policy.
    // 
    // > You can bind up to three permission policies to each AAP.
    // 
    // This parameter is required.
    std::shared_ptr<string> policies_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
