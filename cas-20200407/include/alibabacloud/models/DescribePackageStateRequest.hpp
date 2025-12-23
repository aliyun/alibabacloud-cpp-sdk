// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPACKAGESTATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPACKAGESTATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class DescribePackageStateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePackageStateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePackageStateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    DescribePackageStateRequest() = default ;
    DescribePackageStateRequest(const DescribePackageStateRequest &) = default ;
    DescribePackageStateRequest(DescribePackageStateRequest &&) = default ;
    DescribePackageStateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePackageStateRequest() = default ;
    DescribePackageStateRequest& operator=(const DescribePackageStateRequest &) = default ;
    DescribePackageStateRequest& operator=(DescribePackageStateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->productCode_ == nullptr; };
    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribePackageStateRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // The specifications of the certificate resource plan. Valid values:
    // 
    // *   **digicert-free-1-free** (default): DigiCert single-domain domain validated (DV) certificate in a three-month free trial, available only on the China site (aliyun.com).
    // *   **symantec-free-1-free**: DigiCert single-domain DV certificate in a one-year free trial, available only on the China site (aliyun.com).
    // *   **symantec-dv-1-starter**: DigiCert wildcard DV certificate.
    // *   **symantec-ov-1-personal**: DigiCert single-domain organization validated (OV) certificate.
    // *   **symantec-ov-w-personal**: DigiCert wildcard OV certificate.
    // *   **geotrust-dv-1-starter**: GeoTrust single-domain DV certificate.
    // *   **geotrust-dv-w-starter**: GeoTrust wildcard DV certificate.
    // *   **geotrust-ov-1-personal**: GeoTrust single-domain OV certificate.
    // *   **geotrust-ov-w-personal**: GeoTrust wildcard OV certificate.
    // *   **globalsign-dv-1-personal**: GlobalSign single-domain DV certificate.
    // *   **globalsign-dv-w-advanced**: GlobalSign wildcard DV certificate.
    // *   **globalsign-ov-1-personal**: GlobalSign single-domain OV certificate.
    // *   **globalsign-ov-w-advanced**: GlobalSign wildcard OV certificate.
    // *   **cfca-ov-1-personal**: China Financial Certification Authority (CFCA) single-domain OV certificate, available only on the China site (aliyun.com).
    // *   **cfca-ev-w-advanced**: CFCA wildcard OV certificate, available only on the China site (aliyun.com).
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
