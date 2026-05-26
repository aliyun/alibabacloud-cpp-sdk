// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSAMLIDENTITYPROVIDERCERTIFICATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSAMLIDENTITYPROVIDERCERTIFICATESRESPONSEBODY_HPP_
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
  class ListSAMLIdentityProviderCertificatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSAMLIdentityProviderCertificatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(X509Certificates, x509Certificates_);
    };
    friend void from_json(const Darabonba::Json& j, ListSAMLIdentityProviderCertificatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(X509Certificates, x509Certificates_);
    };
    ListSAMLIdentityProviderCertificatesResponseBody() = default ;
    ListSAMLIdentityProviderCertificatesResponseBody(const ListSAMLIdentityProviderCertificatesResponseBody &) = default ;
    ListSAMLIdentityProviderCertificatesResponseBody(ListSAMLIdentityProviderCertificatesResponseBody &&) = default ;
    ListSAMLIdentityProviderCertificatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSAMLIdentityProviderCertificatesResponseBody() = default ;
    ListSAMLIdentityProviderCertificatesResponseBody& operator=(const ListSAMLIdentityProviderCertificatesResponseBody &) = default ;
    ListSAMLIdentityProviderCertificatesResponseBody& operator=(ListSAMLIdentityProviderCertificatesResponseBody &&) = default ;
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

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->x509Certificates_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSAMLIdentityProviderCertificatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // x509Certificates Field Functions 
    bool hasX509Certificates() const { return this->x509Certificates_ != nullptr;};
    void deleteX509Certificates() { this->x509Certificates_ = nullptr;};
    inline const vector<ListSAMLIdentityProviderCertificatesResponseBody::X509Certificates> & getX509Certificates() const { DARABONBA_PTR_GET_CONST(x509Certificates_, vector<ListSAMLIdentityProviderCertificatesResponseBody::X509Certificates>) };
    inline vector<ListSAMLIdentityProviderCertificatesResponseBody::X509Certificates> getX509Certificates() { DARABONBA_PTR_GET(x509Certificates_, vector<ListSAMLIdentityProviderCertificatesResponseBody::X509Certificates>) };
    inline ListSAMLIdentityProviderCertificatesResponseBody& setX509Certificates(const vector<ListSAMLIdentityProviderCertificatesResponseBody::X509Certificates> & x509Certificates) { DARABONBA_PTR_SET_VALUE(x509Certificates_, x509Certificates) };
    inline ListSAMLIdentityProviderCertificatesResponseBody& setX509Certificates(vector<ListSAMLIdentityProviderCertificatesResponseBody::X509Certificates> && x509Certificates) { DARABONBA_PTR_SET_RVALUE(x509Certificates_, x509Certificates) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListSAMLIdentityProviderCertificatesResponseBody::X509Certificates>> x509Certificates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
