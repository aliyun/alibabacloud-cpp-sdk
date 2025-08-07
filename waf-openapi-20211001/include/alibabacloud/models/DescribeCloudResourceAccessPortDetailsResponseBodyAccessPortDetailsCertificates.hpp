// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODYACCESSPORTDETAILSCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDRESOURCEACCESSPORTDETAILSRESPONSEBODYACCESSPORTDETAILSCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
    };
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates(const DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates(DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates &&) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates() = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates& operator=(const DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates &) = default ;
    DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates& operator=(DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appliedType_ != nullptr
        && this->certificateId_ != nullptr && this->certificateName_ != nullptr; };
    // appliedType Field Functions 
    bool hasAppliedType() const { return this->appliedType_ != nullptr;};
    void deleteAppliedType() { this->appliedType_ = nullptr;};
    inline string appliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string certificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline DescribeCloudResourceAccessPortDetailsResponseBodyAccessPortDetailsCertificates& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


  protected:
    // The type of the HTTPS certificate. Valid values:
    // 
    // *   **default**: default certificate.
    // *   **extension**: additional certificate.
    std::shared_ptr<string> appliedType_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certificateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
