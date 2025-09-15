// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGESTATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGESTATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribePackageStateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackageStateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IssuedCount, issuedCount_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UsedCount, usedCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackageStateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IssuedCount, issuedCount_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UsedCount, usedCount_);
    };
    DescribePackageStateResponseBody() = default ;
    DescribePackageStateResponseBody(const DescribePackageStateResponseBody &) = default ;
    DescribePackageStateResponseBody(DescribePackageStateResponseBody &&) = default ;
    DescribePackageStateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackageStateResponseBody() = default ;
    DescribePackageStateResponseBody& operator=(const DescribePackageStateResponseBody &) = default ;
    DescribePackageStateResponseBody& operator=(DescribePackageStateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->issuedCount_ != nullptr
        && this->productCode_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->usedCount_ != nullptr; };
    // issuedCount Field Functions 
    bool hasIssuedCount() const { return this->issuedCount_ != nullptr;};
    void deleteIssuedCount() { this->issuedCount_ = nullptr;};
    inline int64_t issuedCount() const { DARABONBA_PTR_GET_DEFAULT(issuedCount_, 0L) };
    inline DescribePackageStateResponseBody& setIssuedCount(int64_t issuedCount) { DARABONBA_PTR_SET_VALUE(issuedCount_, issuedCount) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribePackageStateResponseBody& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePackageStateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePackageStateResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // usedCount Field Functions 
    bool hasUsedCount() const { return this->usedCount_ != nullptr;};
    void deleteUsedCount() { this->usedCount_ = nullptr;};
    inline int64_t usedCount() const { DARABONBA_PTR_GET_DEFAULT(usedCount_, 0L) };
    inline DescribePackageStateResponseBody& setUsedCount(int64_t usedCount) { DARABONBA_PTR_SET_VALUE(usedCount_, usedCount) };


  protected:
    // The number of issued certificates of the specified specifications.
    std::shared_ptr<int64_t> issuedCount_ = nullptr;
    // The specifications of the certificate resource plan. Valid values:
    // 
    // *   **digicert-free-1-free**: DigiCert single-domain DV certificate in a three-month free trial, available only on the China site (aliyun.com).
    // *   **symantec-free-1-free**: DigiCert single-domain DV certificate in a one-year free trial, available only on the China site (aliyun.com).
    // *   **symantec-dv-1-starter**: DigiCert wildcard DV certificate.
    // *   **symantec-ov-1-personal**: DigiCert single-domain OV certificate.
    // *   **symantec-ov-w-personal**: DigiCert wildcard OV certificate.
    // *   **geotrust-dv-1-starter**: GeoTrust single-domain DV certificate.
    // *   **geotrust-dv-w-starter**: GeoTrust wildcard DV certificate.
    // *   **geotrust-ov-1-personal**: GeoTrust single-domain OV certificate.
    // *   **geotrust-ov-w-personal**: GeoTrust wildcard OV certificate.
    // *   **globalsign-dv-1-personal**: GlobalSign single-domain DV certificate.
    // *   **globalsign-dv-w-advanced**: GlobalSign wildcard DV certificate.
    // *   **globalsign-ov-1-personal**: GlobalSign single-domain OV certificate.
    // *   **globalsign-ov-w-advanced**: GlobalSign wildcard OV certificate.
    // *   **cfca-ov-1-personal**: CFCA single-domain OV certificate, available only on the China site (aliyun.com).
    // *   **cfca-ev-w-advanced**: CFCA wildcard OV certificate, available only on the China site (aliyun.com).
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of purchased certificate resource plans of the specified specifications.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The number of certificate applications that you submitted for certificates of the specified specifications.
    // 
    // > : A successful call of the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/204087.html), [CreateCertificateRequest](https://help.aliyun.com/document_detail/164105.html), or [CreateCertificateWithCsrRequest](https://help.aliyun.com/document_detail/178732.html) operation is counted as one a certificate application, regardless of whether the certificate is issued.
    std::shared_ptr<int64_t> usedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
