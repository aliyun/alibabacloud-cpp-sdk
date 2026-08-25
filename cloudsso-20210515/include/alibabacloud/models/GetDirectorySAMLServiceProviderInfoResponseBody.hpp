// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIRECTORYSAMLSERVICEPROVIDERINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDIRECTORYSAMLSERVICEPROVIDERINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetDirectorySAMLServiceProviderInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDirectorySAMLServiceProviderInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SAMLServiceProvider, SAMLServiceProvider_);
    };
    friend void from_json(const Darabonba::Json& j, GetDirectorySAMLServiceProviderInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SAMLServiceProvider, SAMLServiceProvider_);
    };
    GetDirectorySAMLServiceProviderInfoResponseBody() = default ;
    GetDirectorySAMLServiceProviderInfoResponseBody(const GetDirectorySAMLServiceProviderInfoResponseBody &) = default ;
    GetDirectorySAMLServiceProviderInfoResponseBody(GetDirectorySAMLServiceProviderInfoResponseBody &&) = default ;
    GetDirectorySAMLServiceProviderInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDirectorySAMLServiceProviderInfoResponseBody() = default ;
    GetDirectorySAMLServiceProviderInfoResponseBody& operator=(const GetDirectorySAMLServiceProviderInfoResponseBody &) = default ;
    GetDirectorySAMLServiceProviderInfoResponseBody& operator=(GetDirectorySAMLServiceProviderInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SAMLServiceProvider : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SAMLServiceProvider& obj) { 
        DARABONBA_PTR_TO_JSON(AcsUrl, acsUrl_);
        DARABONBA_PTR_TO_JSON(AuthnSignAlgo, authnSignAlgo_);
        DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_TO_JSON(EncodedMetadataDocument, encodedMetadataDocument_);
        DARABONBA_PTR_TO_JSON(EntityId, entityId_);
        DARABONBA_PTR_TO_JSON(SupportEncryptedAssertion, supportEncryptedAssertion_);
      };
      friend void from_json(const Darabonba::Json& j, SAMLServiceProvider& obj) { 
        DARABONBA_PTR_FROM_JSON(AcsUrl, acsUrl_);
        DARABONBA_PTR_FROM_JSON(AuthnSignAlgo, authnSignAlgo_);
        DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
        DARABONBA_PTR_FROM_JSON(EncodedMetadataDocument, encodedMetadataDocument_);
        DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
        DARABONBA_PTR_FROM_JSON(SupportEncryptedAssertion, supportEncryptedAssertion_);
      };
      SAMLServiceProvider() = default ;
      SAMLServiceProvider(const SAMLServiceProvider &) = default ;
      SAMLServiceProvider(SAMLServiceProvider &&) = default ;
      SAMLServiceProvider(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SAMLServiceProvider() = default ;
      SAMLServiceProvider& operator=(const SAMLServiceProvider &) = default ;
      SAMLServiceProvider& operator=(SAMLServiceProvider &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acsUrl_ == nullptr
        && this->authnSignAlgo_ == nullptr && this->certificateType_ == nullptr && this->directoryId_ == nullptr && this->encodedMetadataDocument_ == nullptr && this->entityId_ == nullptr
        && this->supportEncryptedAssertion_ == nullptr; };
      // acsUrl Field Functions 
      bool hasAcsUrl() const { return this->acsUrl_ != nullptr;};
      void deleteAcsUrl() { this->acsUrl_ = nullptr;};
      inline string getAcsUrl() const { DARABONBA_PTR_GET_DEFAULT(acsUrl_, "") };
      inline SAMLServiceProvider& setAcsUrl(string acsUrl) { DARABONBA_PTR_SET_VALUE(acsUrl_, acsUrl) };


      // authnSignAlgo Field Functions 
      bool hasAuthnSignAlgo() const { return this->authnSignAlgo_ != nullptr;};
      void deleteAuthnSignAlgo() { this->authnSignAlgo_ = nullptr;};
      inline string getAuthnSignAlgo() const { DARABONBA_PTR_GET_DEFAULT(authnSignAlgo_, "") };
      inline SAMLServiceProvider& setAuthnSignAlgo(string authnSignAlgo) { DARABONBA_PTR_SET_VALUE(authnSignAlgo_, authnSignAlgo) };


      // certificateType Field Functions 
      bool hasCertificateType() const { return this->certificateType_ != nullptr;};
      void deleteCertificateType() { this->certificateType_ = nullptr;};
      inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
      inline SAMLServiceProvider& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


      // directoryId Field Functions 
      bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
      void deleteDirectoryId() { this->directoryId_ = nullptr;};
      inline string getDirectoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
      inline SAMLServiceProvider& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


      // encodedMetadataDocument Field Functions 
      bool hasEncodedMetadataDocument() const { return this->encodedMetadataDocument_ != nullptr;};
      void deleteEncodedMetadataDocument() { this->encodedMetadataDocument_ = nullptr;};
      inline string getEncodedMetadataDocument() const { DARABONBA_PTR_GET_DEFAULT(encodedMetadataDocument_, "") };
      inline SAMLServiceProvider& setEncodedMetadataDocument(string encodedMetadataDocument) { DARABONBA_PTR_SET_VALUE(encodedMetadataDocument_, encodedMetadataDocument) };


      // entityId Field Functions 
      bool hasEntityId() const { return this->entityId_ != nullptr;};
      void deleteEntityId() { this->entityId_ = nullptr;};
      inline string getEntityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
      inline SAMLServiceProvider& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


      // supportEncryptedAssertion Field Functions 
      bool hasSupportEncryptedAssertion() const { return this->supportEncryptedAssertion_ != nullptr;};
      void deleteSupportEncryptedAssertion() { this->supportEncryptedAssertion_ = nullptr;};
      inline bool getSupportEncryptedAssertion() const { DARABONBA_PTR_GET_DEFAULT(supportEncryptedAssertion_, false) };
      inline SAMLServiceProvider& setSupportEncryptedAssertion(bool supportEncryptedAssertion) { DARABONBA_PTR_SET_VALUE(supportEncryptedAssertion_, supportEncryptedAssertion) };


    protected:
      // The Assertion Consumer Service (ACS) URL of the SP.
      shared_ptr<string> acsUrl_ {};
      // The signature algorithm supported by the AuthNRequest initiated by Alibaba Cloud. Value:
      // 
      // - rsa-sha256
      // 
      // - rsa-sha1
      shared_ptr<string> authnSignAlgo_ {};
      // The certificate type used by Alibaba Cloud for signing during the SSO process. Value:
      // 
      // - self-signed: Use a self-signed certificate.
      // 
      // - public: Use a certificate issued by CA.
      shared_ptr<string> certificateType_ {};
      // The ID of the directory.
      shared_ptr<string> directoryId_ {};
      // The metadata file of the SP. The value of this parameter is Base64-encoded.
      shared_ptr<string> encodedMetadataDocument_ {};
      // The entity ID of the SP.
      shared_ptr<string> entityId_ {};
      // Whether to support Assertion encryption on the IdP side.
      shared_ptr<bool> supportEncryptedAssertion_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->SAMLServiceProvider_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDirectorySAMLServiceProviderInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // SAMLServiceProvider Field Functions 
    bool hasSAMLServiceProvider() const { return this->SAMLServiceProvider_ != nullptr;};
    void deleteSAMLServiceProvider() { this->SAMLServiceProvider_ = nullptr;};
    inline const GetDirectorySAMLServiceProviderInfoResponseBody::SAMLServiceProvider & getSAMLServiceProvider() const { DARABONBA_PTR_GET_CONST(SAMLServiceProvider_, GetDirectorySAMLServiceProviderInfoResponseBody::SAMLServiceProvider) };
    inline GetDirectorySAMLServiceProviderInfoResponseBody::SAMLServiceProvider getSAMLServiceProvider() { DARABONBA_PTR_GET(SAMLServiceProvider_, GetDirectorySAMLServiceProviderInfoResponseBody::SAMLServiceProvider) };
    inline GetDirectorySAMLServiceProviderInfoResponseBody& setSAMLServiceProvider(const GetDirectorySAMLServiceProviderInfoResponseBody::SAMLServiceProvider & sAMLServiceProvider) { DARABONBA_PTR_SET_VALUE(SAMLServiceProvider_, sAMLServiceProvider) };
    inline GetDirectorySAMLServiceProviderInfoResponseBody& setSAMLServiceProvider(GetDirectorySAMLServiceProviderInfoResponseBody::SAMLServiceProvider && sAMLServiceProvider) { DARABONBA_PTR_SET_RVALUE(SAMLServiceProvider_, sAMLServiceProvider) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the SP.
    shared_ptr<GetDirectorySAMLServiceProviderInfoResponseBody::SAMLServiceProvider> SAMLServiceProvider_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
