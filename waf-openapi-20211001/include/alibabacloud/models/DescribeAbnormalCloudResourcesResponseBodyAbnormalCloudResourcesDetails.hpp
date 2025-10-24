// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABNORMALCLOUDRESOURCESRESPONSEBODYABNORMALCLOUDRESOURCESDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABNORMALCLOUDRESOURCESRESPONSEBODYABNORMALCLOUDRESOURCESDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ProductCertId, productCertId_);
      DARABONBA_PTR_TO_JSON(ProductCertName, productCertName_);
      DARABONBA_PTR_TO_JSON(ProductDomainExtension, productDomainExtension_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ProductCertId, productCertId_);
      DARABONBA_PTR_FROM_JSON(ProductCertName, productCertName_);
      DARABONBA_PTR_FROM_JSON(ProductDomainExtension, productDomainExtension_);
    };
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails() = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails(const DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails &) = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails(DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails &&) = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails() = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& operator=(const DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails &) = default ;
    DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& operator=(DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appliedType_ == nullptr
        && return this->certName_ == nullptr && return this->code_ == nullptr && return this->commonName_ == nullptr && return this->expireTime_ == nullptr && return this->productCertId_ == nullptr
        && return this->productCertName_ == nullptr && return this->productDomainExtension_ == nullptr; };
    // appliedType Field Functions 
    bool hasAppliedType() const { return this->appliedType_ != nullptr;};
    void deleteAppliedType() { this->appliedType_ = nullptr;};
    inline string appliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // productCertId Field Functions 
    bool hasProductCertId() const { return this->productCertId_ != nullptr;};
    void deleteProductCertId() { this->productCertId_ = nullptr;};
    inline string productCertId() const { DARABONBA_PTR_GET_DEFAULT(productCertId_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& setProductCertId(string productCertId) { DARABONBA_PTR_SET_VALUE(productCertId_, productCertId) };


    // productCertName Field Functions 
    bool hasProductCertName() const { return this->productCertName_ != nullptr;};
    void deleteProductCertName() { this->productCertName_ = nullptr;};
    inline string productCertName() const { DARABONBA_PTR_GET_DEFAULT(productCertName_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& setProductCertName(string productCertName) { DARABONBA_PTR_SET_VALUE(productCertName_, productCertName) };


    // productDomainExtension Field Functions 
    bool hasProductDomainExtension() const { return this->productDomainExtension_ != nullptr;};
    void deleteProductDomainExtension() { this->productDomainExtension_ = nullptr;};
    inline string productDomainExtension() const { DARABONBA_PTR_GET_DEFAULT(productDomainExtension_, "") };
    inline DescribeAbnormalCloudResourcesResponseBodyAbnormalCloudResourcesDetails& setProductDomainExtension(string productDomainExtension) { DARABONBA_PTR_SET_VALUE(productDomainExtension_, productDomainExtension) };


  protected:
    std::shared_ptr<string> appliedType_ = nullptr;
    std::shared_ptr<string> certName_ = nullptr;
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> commonName_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<string> productCertId_ = nullptr;
    std::shared_ptr<string> productCertName_ = nullptr;
    std::shared_ptr<string> productDomainExtension_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
