// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDCDNCERTIFICATESIGNINGREQUESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDCDNCERTIFICATESIGNINGREQUESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class CreateDcdnCertificateSigningRequestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDcdnCertificateSigningRequestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(PubMd5, pubMd5_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDcdnCertificateSigningRequestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(PubMd5, pubMd5_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateDcdnCertificateSigningRequestResponseBody() = default ;
    CreateDcdnCertificateSigningRequestResponseBody(const CreateDcdnCertificateSigningRequestResponseBody &) = default ;
    CreateDcdnCertificateSigningRequestResponseBody(CreateDcdnCertificateSigningRequestResponseBody &&) = default ;
    CreateDcdnCertificateSigningRequestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDcdnCertificateSigningRequestResponseBody() = default ;
    CreateDcdnCertificateSigningRequestResponseBody& operator=(const CreateDcdnCertificateSigningRequestResponseBody &) = default ;
    CreateDcdnCertificateSigningRequestResponseBody& operator=(CreateDcdnCertificateSigningRequestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commonName_ == nullptr
        && this->csr_ == nullptr && this->pubMd5_ == nullptr && this->requestId_ == nullptr; };
    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateDcdnCertificateSigningRequestResponseBody& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string getCsr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateDcdnCertificateSigningRequestResponseBody& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // pubMd5 Field Functions 
    bool hasPubMd5() const { return this->pubMd5_ != nullptr;};
    void deletePubMd5() { this->pubMd5_ = nullptr;};
    inline string getPubMd5() const { DARABONBA_PTR_GET_DEFAULT(pubMd5_, "") };
    inline CreateDcdnCertificateSigningRequestResponseBody& setPubMd5(string pubMd5) { DARABONBA_PTR_SET_VALUE(pubMd5_, pubMd5) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDcdnCertificateSigningRequestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Common Name of the certificate.
    shared_ptr<string> commonName_ {};
    // The content of the CSR file.
    shared_ptr<string> csr_ {};
    // The MD5 hash value of the certificate public key.
    shared_ptr<string> pubMd5_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
