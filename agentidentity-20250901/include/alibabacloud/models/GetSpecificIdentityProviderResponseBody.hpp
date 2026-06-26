// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSPECIFICIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSPECIFICIDENTITYPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetSpecificIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSpecificIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SpecificIdentityProviderConfiguration, specificIdentityProviderConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, GetSpecificIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SpecificIdentityProviderConfiguration, specificIdentityProviderConfiguration_);
    };
    GetSpecificIdentityProviderResponseBody() = default ;
    GetSpecificIdentityProviderResponseBody(const GetSpecificIdentityProviderResponseBody &) = default ;
    GetSpecificIdentityProviderResponseBody(GetSpecificIdentityProviderResponseBody &&) = default ;
    GetSpecificIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSpecificIdentityProviderResponseBody() = default ;
    GetSpecificIdentityProviderResponseBody& operator=(const GetSpecificIdentityProviderResponseBody &) = default ;
    GetSpecificIdentityProviderResponseBody& operator=(GetSpecificIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SpecificIdentityProviderConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SpecificIdentityProviderConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(IDPMetadata, IDPMetadata_);
        DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
        DARABONBA_PTR_TO_JSON(SSOStatus, SSOStatus_);
      };
      friend void from_json(const Darabonba::Json& j, SpecificIdentityProviderConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(IDPMetadata, IDPMetadata_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
        DARABONBA_PTR_FROM_JSON(SSOStatus, SSOStatus_);
      };
      SpecificIdentityProviderConfiguration() = default ;
      SpecificIdentityProviderConfiguration(const SpecificIdentityProviderConfiguration &) = default ;
      SpecificIdentityProviderConfiguration(SpecificIdentityProviderConfiguration &&) = default ;
      SpecificIdentityProviderConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SpecificIdentityProviderConfiguration() = default ;
      SpecificIdentityProviderConfiguration& operator=(const SpecificIdentityProviderConfiguration &) = default ;
      SpecificIdentityProviderConfiguration& operator=(SpecificIdentityProviderConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->IDPMetadata_ == nullptr
        && this->identityProviderType_ == nullptr && this->SSOStatus_ == nullptr; };
      // IDPMetadata Field Functions 
      bool hasIDPMetadata() const { return this->IDPMetadata_ != nullptr;};
      void deleteIDPMetadata() { this->IDPMetadata_ = nullptr;};
      inline string getIDPMetadata() const { DARABONBA_PTR_GET_DEFAULT(IDPMetadata_, "") };
      inline SpecificIdentityProviderConfiguration& setIDPMetadata(string IDPMetadata) { DARABONBA_PTR_SET_VALUE(IDPMetadata_, IDPMetadata) };


      // identityProviderType Field Functions 
      bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
      void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
      inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
      inline SpecificIdentityProviderConfiguration& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


      // SSOStatus Field Functions 
      bool hasSSOStatus() const { return this->SSOStatus_ != nullptr;};
      void deleteSSOStatus() { this->SSOStatus_ = nullptr;};
      inline string getSSOStatus() const { DARABONBA_PTR_GET_DEFAULT(SSOStatus_, "") };
      inline SpecificIdentityProviderConfiguration& setSSOStatus(string SSOStatus) { DARABONBA_PTR_SET_VALUE(SSOStatus_, SSOStatus) };


    protected:
      shared_ptr<string> IDPMetadata_ {};
      shared_ptr<string> identityProviderType_ {};
      shared_ptr<string> SSOStatus_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->specificIdentityProviderConfiguration_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSpecificIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // specificIdentityProviderConfiguration Field Functions 
    bool hasSpecificIdentityProviderConfiguration() const { return this->specificIdentityProviderConfiguration_ != nullptr;};
    void deleteSpecificIdentityProviderConfiguration() { this->specificIdentityProviderConfiguration_ = nullptr;};
    inline const GetSpecificIdentityProviderResponseBody::SpecificIdentityProviderConfiguration & getSpecificIdentityProviderConfiguration() const { DARABONBA_PTR_GET_CONST(specificIdentityProviderConfiguration_, GetSpecificIdentityProviderResponseBody::SpecificIdentityProviderConfiguration) };
    inline GetSpecificIdentityProviderResponseBody::SpecificIdentityProviderConfiguration getSpecificIdentityProviderConfiguration() { DARABONBA_PTR_GET(specificIdentityProviderConfiguration_, GetSpecificIdentityProviderResponseBody::SpecificIdentityProviderConfiguration) };
    inline GetSpecificIdentityProviderResponseBody& setSpecificIdentityProviderConfiguration(const GetSpecificIdentityProviderResponseBody::SpecificIdentityProviderConfiguration & specificIdentityProviderConfiguration) { DARABONBA_PTR_SET_VALUE(specificIdentityProviderConfiguration_, specificIdentityProviderConfiguration) };
    inline GetSpecificIdentityProviderResponseBody& setSpecificIdentityProviderConfiguration(GetSpecificIdentityProviderResponseBody::SpecificIdentityProviderConfiguration && specificIdentityProviderConfiguration) { DARABONBA_PTR_SET_RVALUE(specificIdentityProviderConfiguration_, specificIdentityProviderConfiguration) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GetSpecificIdentityProviderResponseBody::SpecificIdentityProviderConfiguration> specificIdentityProviderConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
