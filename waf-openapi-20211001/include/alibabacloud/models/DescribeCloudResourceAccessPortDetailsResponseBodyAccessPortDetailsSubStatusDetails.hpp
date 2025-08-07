// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODYACCESSPORTDETAILSSUBSTATUSDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODYACCESSPORTDETAILSSUBSTATUSDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ProductCertId, productCertId_);
      DARABONBA_PTR_TO_JSON(ProductCertName, productCertName_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ProductCertId, productCertId_);
      DARABONBA_PTR_FROM_JSON(ProductCertName, productCertName_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
    };
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails(const DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails(DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails &&) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& operator=(const DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& operator=(DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appliedType_ != nullptr
        && this->certId_ != nullptr && this->certName_ != nullptr && this->commonName_ != nullptr && this->domain_ != nullptr && this->expireTime_ != nullptr
        && this->productCertId_ != nullptr && this->productCertName_ != nullptr && this->reasonCode_ != nullptr; };
    // appliedType Field Functions 
    bool hasAppliedType() const { return this->appliedType_ != nullptr;};
    void deleteAppliedType() { this->appliedType_ = nullptr;};
    inline string appliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // productCertId Field Functions 
    bool hasProductCertId() const { return this->productCertId_ != nullptr;};
    void deleteProductCertId() { this->productCertId_ = nullptr;};
    inline string productCertId() const { DARABONBA_PTR_GET_DEFAULT(productCertId_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& setProductCertId(string productCertId) { DARABONBA_PTR_SET_VALUE(productCertId_, productCertId) };


    // productCertName Field Functions 
    bool hasProductCertName() const { return this->productCertName_ != nullptr;};
    void deleteProductCertName() { this->productCertName_ = nullptr;};
    inline string productCertName() const { DARABONBA_PTR_GET_DEFAULT(productCertName_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& setProductCertName(string productCertName) { DARABONBA_PTR_SET_VALUE(productCertName_, productCertName) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsSubStatusDetails& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


  protected:
    std::shared_ptr<string> appliedType_ = nullptr;
    std::shared_ptr<string> certId_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> commonName_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<string> productCertId_ = nullptr;
    std::shared_ptr<string> productCertName_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
