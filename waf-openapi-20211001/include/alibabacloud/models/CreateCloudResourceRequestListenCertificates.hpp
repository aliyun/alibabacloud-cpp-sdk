// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDRESOURCEREQUESTLISTENCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDRESOURCEREQUESTLISTENCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class CreateCloudResourceRequestListenCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudResourceRequestListenCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudResourceRequestListenCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(AppliedType, appliedType_);
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    CreateCloudResourceRequestListenCertificates() = default ;
    CreateCloudResourceRequestListenCertificates(const CreateCloudResourceRequestListenCertificates &) = default ;
    CreateCloudResourceRequestListenCertificates(CreateCloudResourceRequestListenCertificates &&) = default ;
    CreateCloudResourceRequestListenCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudResourceRequestListenCertificates() = default ;
    CreateCloudResourceRequestListenCertificates& operator=(const CreateCloudResourceRequestListenCertificates &) = default ;
    CreateCloudResourceRequestListenCertificates& operator=(CreateCloudResourceRequestListenCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appliedType_ == nullptr
        && return this->certificateId_ == nullptr; };
    // appliedType Field Functions 
    bool hasAppliedType() const { return this->appliedType_ != nullptr;};
    void deleteAppliedType() { this->appliedType_ = nullptr;};
    inline string appliedType() const { DARABONBA_PTR_GET_DEFAULT(appliedType_, "") };
    inline CreateCloudResourceRequestListenCertificates& setAppliedType(string appliedType) { DARABONBA_PTR_SET_VALUE(appliedType_, appliedType) };


    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline CreateCloudResourceRequestListenCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The type of the certificate. Valid values:
    // 
    // *   **default**: default certificate.
    // *   **extension**: additional certificate.
    std::shared_ptr<string> appliedType_ = nullptr;
    // The ID of the certificate that you want to add.
    // 
    // >  You can call the [DescribeCertificates](https://help.aliyun.com/document_detail/160783.html) operation to query the IDs of all SSL certificates that are associated with a domain name.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
