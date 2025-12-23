// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENEWCERTIFICATEORDERFORPACKAGEREQUESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENEWCERTIFICATEORDERFORPACKAGEREQUESTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RenewCertificateOrderForPackageRequestRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class RenewCertificateOrderForPackageRequestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenewCertificateOrderForPackageRequestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Csr, csr_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, RenewCertificateOrderForPackageRequestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Csr, csr_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    RenewCertificateOrderForPackageRequestRequest() = default ;
    RenewCertificateOrderForPackageRequestRequest(const RenewCertificateOrderForPackageRequestRequest &) = default ;
    RenewCertificateOrderForPackageRequestRequest(RenewCertificateOrderForPackageRequestRequest &&) = default ;
    RenewCertificateOrderForPackageRequestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenewCertificateOrderForPackageRequestRequest() = default ;
    RenewCertificateOrderForPackageRequestRequest& operator=(const RenewCertificateOrderForPackageRequestRequest &) = default ;
    RenewCertificateOrderForPackageRequestRequest& operator=(RenewCertificateOrderForPackageRequestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->csr_ == nullptr
        && return this->orderId_ == nullptr && return this->tags_ == nullptr; };
    // csr Field Functions 
    bool hasCsr() const { return this->csr_ != nullptr;};
    void deleteCsr() { this->csr_ = nullptr;};
    inline string csr() const { DARABONBA_PTR_GET_DEFAULT(csr_, "") };
    inline RenewCertificateOrderForPackageRequestRequest& setCsr(string csr) { DARABONBA_PTR_SET_VALUE(csr_, csr) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline RenewCertificateOrderForPackageRequestRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<RenewCertificateOrderForPackageRequestRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<RenewCertificateOrderForPackageRequestRequestTags>) };
    inline vector<RenewCertificateOrderForPackageRequestRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<RenewCertificateOrderForPackageRequestRequestTags>) };
    inline RenewCertificateOrderForPackageRequestRequest& setTags(const vector<RenewCertificateOrderForPackageRequestRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline RenewCertificateOrderForPackageRequestRequest& setTags(vector<RenewCertificateOrderForPackageRequestRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The content of the certificate signing request (CSR) file that is manually generated for the domain name by using OpenSSL or Keytool. The key algorithm in the CSR file must be Rivest-Shamir-Adleman (RSA) or elliptic-curve cryptography (ECC), and the key length of the RSA algorithm must be greater than or equal to 2,048 characters. For more information about how to create a CSR file, see [How do I create a CSR file?](https://help.aliyun.com/document_detail/42218.html)
    // 
    // If you do not specify this parameter, Certificate Management Service automatically generates a CSR file for the domain name in the certificate application order that you want to renew.
    // 
    // A CSR file contains the information about your server and company. When you apply for a certificate, you must submit the CSR file to the CA. The CA signs the CSR file by using the private key of the root certificate and generates a public key file to issue your certificate.
    // 
    // >  The **CN** field in the CSR file specifies the domain name that is bound to the certificate.
    std::shared_ptr<string> csr_ = nullptr;
    // The ID of the certificate application order that you want to renew.
    // 
    // >  After you call the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html), [CreateCertificateRequest](https://help.aliyun.com/document_detail/455292.html), or [CreateCertificateWithCsrRequest](https://help.aliyun.com/document_detail/455801.html) operation to submit a certificate application, you can obtain the ID of the certificate application order from the **OrderId** response parameter. You can also call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/455804.html) operation to obtain the order ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<RenewCertificateOrderForPackageRequestRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
