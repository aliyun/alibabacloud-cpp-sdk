// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSAMLIDENTITYPROVIDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETSAMLIDENTITYPROVIDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class SetSAMLIdentityProviderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetSAMLIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SSOIdentityProviderConfiguration, SSOIdentityProviderConfiguration_);
    };
    friend void from_json(const Darabonba::Json& j, SetSAMLIdentityProviderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SSOIdentityProviderConfiguration, SSOIdentityProviderConfiguration_);
    };
    SetSAMLIdentityProviderResponseBody() = default ;
    SetSAMLIdentityProviderResponseBody(const SetSAMLIdentityProviderResponseBody &) = default ;
    SetSAMLIdentityProviderResponseBody(SetSAMLIdentityProviderResponseBody &&) = default ;
    SetSAMLIdentityProviderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetSAMLIdentityProviderResponseBody() = default ;
    SetSAMLIdentityProviderResponseBody& operator=(const SetSAMLIdentityProviderResponseBody &) = default ;
    SetSAMLIdentityProviderResponseBody& operator=(SetSAMLIdentityProviderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SSOIdentityProviderConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SSOIdentityProviderConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(JITProvisionStatus, JITProvisionStatus_);
        DARABONBA_PTR_TO_JSON(JITUpdateStatus, JITUpdateStatus_);
        DARABONBA_PTR_TO_JSON(LoginURL, loginURL_);
        DARABONBA_PTR_TO_JSON(SAMLBindingType, SAMLBindingType_);
        DARABONBA_PTR_TO_JSON(SSOStatus, SSOStatus_);
        DARABONBA_PTR_TO_JSON(X509Certificates, x509Certificates_);
      };
      friend void from_json(const Darabonba::Json& j, SSOIdentityProviderConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(JITProvisionStatus, JITProvisionStatus_);
        DARABONBA_PTR_FROM_JSON(JITUpdateStatus, JITUpdateStatus_);
        DARABONBA_PTR_FROM_JSON(LoginURL, loginURL_);
        DARABONBA_PTR_FROM_JSON(SAMLBindingType, SAMLBindingType_);
        DARABONBA_PTR_FROM_JSON(SSOStatus, SSOStatus_);
        DARABONBA_PTR_FROM_JSON(X509Certificates, x509Certificates_);
      };
      SSOIdentityProviderConfiguration() = default ;
      SSOIdentityProviderConfiguration(const SSOIdentityProviderConfiguration &) = default ;
      SSOIdentityProviderConfiguration(SSOIdentityProviderConfiguration &&) = default ;
      SSOIdentityProviderConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SSOIdentityProviderConfiguration() = default ;
      SSOIdentityProviderConfiguration& operator=(const SSOIdentityProviderConfiguration &) = default ;
      SSOIdentityProviderConfiguration& operator=(SSOIdentityProviderConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class X509Certificates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const X509Certificates& obj) { 
          DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
          DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
        };
        friend void from_json(const Darabonba::Json& j, X509Certificates& obj) { 
          DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
          DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
        };
        X509Certificates() = default ;
        X509Certificates(const X509Certificates &) = default ;
        X509Certificates(X509Certificates &&) = default ;
        X509Certificates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~X509Certificates() = default ;
        X509Certificates& operator=(const X509Certificates &) = default ;
        X509Certificates& operator=(X509Certificates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certificateId_ == nullptr
        && this->x509Certificate_ == nullptr; };
        // certificateId Field Functions 
        bool hasCertificateId() const { return this->certificateId_ != nullptr;};
        void deleteCertificateId() { this->certificateId_ = nullptr;};
        inline string getCertificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
        inline X509Certificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


        // x509Certificate Field Functions 
        bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
        void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
        inline string getX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
        inline X509Certificates& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


      protected:
        shared_ptr<string> certificateId_ {};
        shared_ptr<string> x509Certificate_ {};
      };

      virtual bool empty() const override { return this->entityId_ == nullptr
        && this->JITProvisionStatus_ == nullptr && this->JITUpdateStatus_ == nullptr && this->loginURL_ == nullptr && this->SAMLBindingType_ == nullptr && this->SSOStatus_ == nullptr
        && this->x509Certificates_ == nullptr; };
      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline SSOIdentityProviderConfiguration& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // JITProvisionStatus Field Functions 
      bool hasJITProvisionStatus() const { return this->JITProvisionStatus_ != nullptr;};
      void deleteJITProvisionStatus() { this->JITProvisionStatus_ = nullptr;};
      inline string getJITProvisionStatus() const { DARABONBA_PTR_GET_DEFAULT(JITProvisionStatus_, "") };
      inline SSOIdentityProviderConfiguration& setJITProvisionStatus(string JITProvisionStatus) { DARABONBA_PTR_SET_VALUE(JITProvisionStatus_, JITProvisionStatus) };


      // JITUpdateStatus Field Functions 
      bool hasJITUpdateStatus() const { return this->JITUpdateStatus_ != nullptr;};
      void deleteJITUpdateStatus() { this->JITUpdateStatus_ = nullptr;};
      inline string getJITUpdateStatus() const { DARABONBA_PTR_GET_DEFAULT(JITUpdateStatus_, "") };
      inline SSOIdentityProviderConfiguration& setJITUpdateStatus(string JITUpdateStatus) { DARABONBA_PTR_SET_VALUE(JITUpdateStatus_, JITUpdateStatus) };


      // loginURL Field Functions 
      bool hasLoginURL() const { return this->loginURL_ != nullptr;};
      void deleteLoginURL() { this->loginURL_ = nullptr;};
      inline string getLoginURL() const { DARABONBA_PTR_GET_DEFAULT(loginURL_, "") };
      inline SSOIdentityProviderConfiguration& setLoginURL(string loginURL) { DARABONBA_PTR_SET_VALUE(loginURL_, loginURL) };


      // SAMLBindingType Field Functions 
      bool hasSAMLBindingType() const { return this->SAMLBindingType_ != nullptr;};
      void deleteSAMLBindingType() { this->SAMLBindingType_ = nullptr;};
      inline string getSAMLBindingType() const { DARABONBA_PTR_GET_DEFAULT(SAMLBindingType_, "") };
      inline SSOIdentityProviderConfiguration& setSAMLBindingType(string SAMLBindingType) { DARABONBA_PTR_SET_VALUE(SAMLBindingType_, SAMLBindingType) };


      // SSOStatus Field Functions 
      bool hasSSOStatus() const { return this->SSOStatus_ != nullptr;};
      void deleteSSOStatus() { this->SSOStatus_ = nullptr;};
      inline string getSSOStatus() const { DARABONBA_PTR_GET_DEFAULT(SSOStatus_, "") };
      inline SSOIdentityProviderConfiguration& setSSOStatus(string SSOStatus) { DARABONBA_PTR_SET_VALUE(SSOStatus_, SSOStatus) };


      // x509Certificates Field Functions 
      bool hasX509Certificates() const { return this->x509Certificates_ != nullptr;};
      void deleteX509Certificates() { this->x509Certificates_ = nullptr;};
      inline const vector<SSOIdentityProviderConfiguration::X509Certificates> & getX509Certificates() const { DARABONBA_PTR_GET_CONST(x509Certificates_, vector<SSOIdentityProviderConfiguration::X509Certificates>) };
      inline vector<SSOIdentityProviderConfiguration::X509Certificates> getX509Certificates() { DARABONBA_PTR_GET(x509Certificates_, vector<SSOIdentityProviderConfiguration::X509Certificates>) };
      inline SSOIdentityProviderConfiguration& setX509Certificates(const vector<SSOIdentityProviderConfiguration::X509Certificates> & x509Certificates) { DARABONBA_PTR_SET_VALUE(x509Certificates_, x509Certificates) };
      inline SSOIdentityProviderConfiguration& setX509Certificates(vector<SSOIdentityProviderConfiguration::X509Certificates> && x509Certificates) { DARABONBA_PTR_SET_RVALUE(x509Certificates_, x509Certificates) };


    protected:
      shared_ptr<string> entityId_ {};
      shared_ptr<string> JITProvisionStatus_ {};
      shared_ptr<string> JITUpdateStatus_ {};
      shared_ptr<string> loginURL_ {};
      shared_ptr<string> SAMLBindingType_ {};
      shared_ptr<string> SSOStatus_ {};
      shared_ptr<vector<SSOIdentityProviderConfiguration::X509Certificates>> x509Certificates_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SSOIdentityProviderConfiguration_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetSAMLIdentityProviderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SSOIdentityProviderConfiguration Field Functions 
    bool hasSSOIdentityProviderConfiguration() const { return this->SSOIdentityProviderConfiguration_ != nullptr;};
    void deleteSSOIdentityProviderConfiguration() { this->SSOIdentityProviderConfiguration_ = nullptr;};
    inline const SetSAMLIdentityProviderResponseBody::SSOIdentityProviderConfiguration & getSSOIdentityProviderConfiguration() const { DARABONBA_PTR_GET_CONST(SSOIdentityProviderConfiguration_, SetSAMLIdentityProviderResponseBody::SSOIdentityProviderConfiguration) };
    inline SetSAMLIdentityProviderResponseBody::SSOIdentityProviderConfiguration getSSOIdentityProviderConfiguration() { DARABONBA_PTR_GET(SSOIdentityProviderConfiguration_, SetSAMLIdentityProviderResponseBody::SSOIdentityProviderConfiguration) };
    inline SetSAMLIdentityProviderResponseBody& setSSOIdentityProviderConfiguration(const SetSAMLIdentityProviderResponseBody::SSOIdentityProviderConfiguration & sSOIdentityProviderConfiguration) { DARABONBA_PTR_SET_VALUE(SSOIdentityProviderConfiguration_, sSOIdentityProviderConfiguration) };
    inline SetSAMLIdentityProviderResponseBody& setSSOIdentityProviderConfiguration(SetSAMLIdentityProviderResponseBody::SSOIdentityProviderConfiguration && sSOIdentityProviderConfiguration) { DARABONBA_PTR_SET_RVALUE(SSOIdentityProviderConfiguration_, sSOIdentityProviderConfiguration) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<SetSAMLIdentityProviderResponseBody::SSOIdentityProviderConfiguration> SSOIdentityProviderConfiguration_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
