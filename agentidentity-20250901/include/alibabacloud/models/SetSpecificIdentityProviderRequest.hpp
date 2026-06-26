// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSPECIFICIDENTITYPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSPECIFICIDENTITYPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class SetSpecificIdentityProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSpecificIdentityProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IDPMetadata, IDPMetadata_);
      DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_TO_JSON(SSOStatus, SSOStatus_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, SetSpecificIdentityProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IDPMetadata, IDPMetadata_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_FROM_JSON(SSOStatus, SSOStatus_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    SetSpecificIdentityProviderRequest() = default ;
    SetSpecificIdentityProviderRequest(const SetSpecificIdentityProviderRequest &) = default ;
    SetSpecificIdentityProviderRequest(SetSpecificIdentityProviderRequest &&) = default ;
    SetSpecificIdentityProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSpecificIdentityProviderRequest() = default ;
    SetSpecificIdentityProviderRequest& operator=(const SetSpecificIdentityProviderRequest &) = default ;
    SetSpecificIdentityProviderRequest& operator=(SetSpecificIdentityProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->IDPMetadata_ == nullptr
        && this->identityProviderType_ == nullptr && this->SSOStatus_ == nullptr && this->userPoolName_ == nullptr; };
    // IDPMetadata Field Functions 
    bool hasIDPMetadata() const { return this->IDPMetadata_ != nullptr;};
    void deleteIDPMetadata() { this->IDPMetadata_ = nullptr;};
    inline string getIDPMetadata() const { DARABONBA_PTR_GET_DEFAULT(IDPMetadata_, "") };
    inline SetSpecificIdentityProviderRequest& setIDPMetadata(string IDPMetadata) { DARABONBA_PTR_SET_VALUE(IDPMetadata_, IDPMetadata) };


    // identityProviderType Field Functions 
    bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
    void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
    inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
    inline SetSpecificIdentityProviderRequest& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


    // SSOStatus Field Functions 
    bool hasSSOStatus() const { return this->SSOStatus_ != nullptr;};
    void deleteSSOStatus() { this->SSOStatus_ = nullptr;};
    inline string getSSOStatus() const { DARABONBA_PTR_GET_DEFAULT(SSOStatus_, "") };
    inline SetSpecificIdentityProviderRequest& setSSOStatus(string SSOStatus) { DARABONBA_PTR_SET_VALUE(SSOStatus_, SSOStatus) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline SetSpecificIdentityProviderRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> IDPMetadata_ {};
    shared_ptr<string> identityProviderType_ {};
    shared_ptr<string> SSOStatus_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
