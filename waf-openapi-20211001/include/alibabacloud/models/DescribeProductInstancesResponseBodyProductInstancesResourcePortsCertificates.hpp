// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODYPRODUCTINSTANCESRESOURCEPORTSCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTINSTANCESRESPONSEBODYPRODUCTINSTANCESRESOURCEPORTSCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
    };
    DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates() = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates(const DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates &) = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates(DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates &&) = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates() = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates& operator=(const DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates &) = default ;
    DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates& operator=(DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appliedType_ == nullptr
        && return this->certificateId_ == nullptr && return this->certificateName_ == nullptr && return this->domain_ == nullptr; };
    // appliedType Field Functions 
    bool hasAppliedType() const { return this->appliedType_ != nullptr;};
    void deleteAppliedType() { this->appliedType_ = nullptr;};
    inline string appliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
    inline DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string certificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeProductInstancesResponseBodyProductInstancesResourcePortsCertificates& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


  protected:
    std::shared_ptr<string> appliedType_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certificateName_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
