// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECDNCERTIFICATESIGNINGREQUESTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATECDNCERTIFICATESIGNINGREQUESTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class CreateCdnCertificateSigningRequestResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCdnCertificateSigningRequestResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(PubMd5, pubMd5_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCdnCertificateSigningRequestResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(PubMd5, pubMd5_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateCdnCertificateSigningRequestResponseBody() = default ;
    CreateCdnCertificateSigningRequestResponseBody(const CreateCdnCertificateSigningRequestResponseBody &) = default ;
    CreateCdnCertificateSigningRequestResponseBody(CreateCdnCertificateSigningRequestResponseBody &&) = default ;
    CreateCdnCertificateSigningRequestResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCdnCertificateSigningRequestResponseBody() = default ;
    CreateCdnCertificateSigningRequestResponseBody& operator=(const CreateCdnCertificateSigningRequestResponseBody &) = default ;
    CreateCdnCertificateSigningRequestResponseBody& operator=(CreateCdnCertificateSigningRequestResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commonName_ != nullptr
        && this->csr_ != nullptr && this->pubMd5_ != nullptr && this->requestId_ != nullptr; };
    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateCdnCertificateSigningRequestResponseBody& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline CreateCdnCertificateSigningRequestResponseBody& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // pubMd5 Field Functions 
    bool hasPubMd5() const { return this->pubMd5_ != nullptr;};
    void deletePubMd5() { this->pubMd5_ = nullptr;};
    inline string pubMd5() const { DARABONBA_PTR_GET_DEFAULT(pubMd5_, "") };
    inline CreateCdnCertificateSigningRequestResponseBody& setPubMd5(string pubMd5) { DARABONBA_PTR_SET_VALUE(pubMd5_, pubMd5) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateCdnCertificateSigningRequestResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The Common Name of the certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // The content of the CSR file.
    std::shared_ptr<string> csr_ = nullptr;
    // The MD5 hash value of the certificate public key.
    std::shared_ptr<string> pubMd5_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
