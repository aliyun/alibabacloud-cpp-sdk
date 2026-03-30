// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWAREHOUSECERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWAREHOUSECERTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribeWarehouseCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWarehouseCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertStatus, certStatus_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(IssuerIdentifier, issuerIdentifier_);
      DARABONBA_PTR_TO_JSON(PrivateCaInstanceId, privateCaInstanceId_);
      DARABONBA_PTR_TO_JSON(PrivateCaRegionId, privateCaRegionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WarehouseInstanceId, warehouseInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWarehouseCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertStatus, certStatus_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(IssuerIdentifier, issuerIdentifier_);
      DARABONBA_PTR_FROM_JSON(PrivateCaInstanceId, privateCaInstanceId_);
      DARABONBA_PTR_FROM_JSON(PrivateCaRegionId, privateCaRegionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WarehouseInstanceId, warehouseInstanceId_);
    };
    DescribeWarehouseCertResponseBody() = default ;
    DescribeWarehouseCertResponseBody(const DescribeWarehouseCertResponseBody &) = default ;
    DescribeWarehouseCertResponseBody(DescribeWarehouseCertResponseBody &&) = default ;
    DescribeWarehouseCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWarehouseCertResponseBody() = default ;
    DescribeWarehouseCertResponseBody& operator=(const DescribeWarehouseCertResponseBody &) = default ;
    DescribeWarehouseCertResponseBody& operator=(DescribeWarehouseCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && this->certStatus_ == nullptr && this->certType_ == nullptr && this->commonName_ == nullptr && this->content_ == nullptr && this->fingerprint_ == nullptr
        && this->issuer_ == nullptr && this->issuerIdentifier_ == nullptr && this->privateCaInstanceId_ == nullptr && this->privateCaRegionId_ == nullptr && this->requestId_ == nullptr
        && this->warehouseInstanceId_ == nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DescribeWarehouseCertResponseBody& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certStatus Field Functions 
    bool hasCertStatus() const { return this->certStatus_ != nullptr;};
    void deleteCertStatus() { this->certStatus_ = nullptr;};
    inline string getCertStatus() const { DARABONBA_PTR_GET_DEFAULT(certStatus_, "") };
    inline DescribeWarehouseCertResponseBody& setCertStatus(string certStatus) { DARABONBA_PTR_SET_VALUE(certStatus_, certStatus) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeWarehouseCertResponseBody& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeWarehouseCertResponseBody& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeWarehouseCertResponseBody& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // fingerprint Field Functions 
    bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
    void deleteFingerprint() { this->fingerprint_ = nullptr;};
    inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
    inline DescribeWarehouseCertResponseBody& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribeWarehouseCertResponseBody& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // issuerIdentifier Field Functions 
    bool hasIssuerIdentifier() const { return this->issuerIdentifier_ != nullptr;};
    void deleteIssuerIdentifier() { this->issuerIdentifier_ = nullptr;};
    inline string getIssuerIdentifier() const { DARABONBA_PTR_GET_DEFAULT(issuerIdentifier_, "") };
    inline DescribeWarehouseCertResponseBody& setIssuerIdentifier(string issuerIdentifier) { DARABONBA_PTR_SET_VALUE(issuerIdentifier_, issuerIdentifier) };


    // privateCaInstanceId Field Functions 
    bool hasPrivateCaInstanceId() const { return this->privateCaInstanceId_ != nullptr;};
    void deletePrivateCaInstanceId() { this->privateCaInstanceId_ = nullptr;};
    inline string getPrivateCaInstanceId() const { DARABONBA_PTR_GET_DEFAULT(privateCaInstanceId_, "") };
    inline DescribeWarehouseCertResponseBody& setPrivateCaInstanceId(string privateCaInstanceId) { DARABONBA_PTR_SET_VALUE(privateCaInstanceId_, privateCaInstanceId) };


    // privateCaRegionId Field Functions 
    bool hasPrivateCaRegionId() const { return this->privateCaRegionId_ != nullptr;};
    void deletePrivateCaRegionId() { this->privateCaRegionId_ = nullptr;};
    inline string getPrivateCaRegionId() const { DARABONBA_PTR_GET_DEFAULT(privateCaRegionId_, "") };
    inline DescribeWarehouseCertResponseBody& setPrivateCaRegionId(string privateCaRegionId) { DARABONBA_PTR_SET_VALUE(privateCaRegionId_, privateCaRegionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWarehouseCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // warehouseInstanceId Field Functions 
    bool hasWarehouseInstanceId() const { return this->warehouseInstanceId_ != nullptr;};
    void deleteWarehouseInstanceId() { this->warehouseInstanceId_ = nullptr;};
    inline string getWarehouseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(warehouseInstanceId_, "") };
    inline DescribeWarehouseCertResponseBody& setWarehouseInstanceId(string warehouseInstanceId) { DARABONBA_PTR_SET_VALUE(warehouseInstanceId_, warehouseInstanceId) };


  protected:
    shared_ptr<string> certIdentifier_ {};
    shared_ptr<string> certStatus_ {};
    shared_ptr<string> certType_ {};
    shared_ptr<string> commonName_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> fingerprint_ {};
    shared_ptr<string> issuer_ {};
    shared_ptr<string> issuerIdentifier_ {};
    shared_ptr<string> privateCaInstanceId_ {};
    shared_ptr<string> privateCaRegionId_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> warehouseInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
