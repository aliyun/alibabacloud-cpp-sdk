// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWHCLIENTCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWHCLIENTCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateWHClientCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWHClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(ParentX509Certificate, parentX509Certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootX509Certificate, rootX509Certificate_);
      DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWHClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateChain, certificateChain_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(ParentX509Certificate, parentX509Certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootX509Certificate, rootX509Certificate_);
      DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
    };
    CreateWHClientCertificateResponseBody() = default ;
    CreateWHClientCertificateResponseBody(const CreateWHClientCertificateResponseBody &) = default ;
    CreateWHClientCertificateResponseBody(CreateWHClientCertificateResponseBody &&) = default ;
    CreateWHClientCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWHClientCertificateResponseBody() = default ;
    CreateWHClientCertificateResponseBody& operator=(const CreateWHClientCertificateResponseBody &) = default ;
    CreateWHClientCertificateResponseBody& operator=(CreateWHClientCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateChain_ == nullptr
        && this->identifier_ == nullptr && this->parentX509Certificate_ == nullptr && this->requestId_ == nullptr && this->rootX509Certificate_ == nullptr && this->x509Certificate_ == nullptr; };
    // certificateChain Field Functions 
    bool hasCertificateChain() const { return this->certificateChain_ != nullptr;};
    void deleteCertificateChain() { this->certificateChain_ = nullptr;};
    inline string getCertificateChain() const { DARABONBA_PTR_GET_DEFAULT(certificateChain_, "") };
    inline CreateWHClientCertificateResponseBody& setCertificateChain(string certificateChain) { DARABONBA_PTR_SET_VALUE(certificateChain_, certificateChain) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline CreateWHClientCertificateResponseBody& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // parentX509Certificate Field Functions 
    bool hasParentX509Certificate() const { return this->parentX509Certificate_ != nullptr;};
    void deleteParentX509Certificate() { this->parentX509Certificate_ = nullptr;};
    inline string getParentX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(parentX509Certificate_, "") };
    inline CreateWHClientCertificateResponseBody& setParentX509Certificate(string parentX509Certificate) { DARABONBA_PTR_SET_VALUE(parentX509Certificate_, parentX509Certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWHClientCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootX509Certificate Field Functions 
    bool hasRootX509Certificate() const { return this->rootX509Certificate_ != nullptr;};
    void deleteRootX509Certificate() { this->rootX509Certificate_ = nullptr;};
    inline string getRootX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(rootX509Certificate_, "") };
    inline CreateWHClientCertificateResponseBody& setRootX509Certificate(string rootX509Certificate) { DARABONBA_PTR_SET_VALUE(rootX509Certificate_, rootX509Certificate) };


    // x509Certificate Field Functions 
    bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
    void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
    inline string getX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
    inline CreateWHClientCertificateResponseBody& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


  protected:
    shared_ptr<string> certificateChain_ {};
    shared_ptr<string> identifier_ {};
    shared_ptr<string> parentX509Certificate_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rootX509Certificate_ {};
    shared_ptr<string> x509Certificate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
