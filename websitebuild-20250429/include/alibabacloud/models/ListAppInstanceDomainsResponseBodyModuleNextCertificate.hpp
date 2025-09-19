// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULENEXTCERTIFICATE_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULENEXTCERTIFICATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstanceDomainsResponseBodyModuleNextCertificate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceDomainsResponseBodyModuleNextCertificate& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_TO_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceDomainsResponseBodyModuleNextCertificate& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateName, certificateName_);
      DARABONBA_PTR_FROM_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
    };
    ListAppInstanceDomainsResponseBodyModuleNextCertificate() = default ;
    ListAppInstanceDomainsResponseBodyModuleNextCertificate(const ListAppInstanceDomainsResponseBodyModuleNextCertificate &) = default ;
    ListAppInstanceDomainsResponseBodyModuleNextCertificate(ListAppInstanceDomainsResponseBodyModuleNextCertificate &&) = default ;
    ListAppInstanceDomainsResponseBodyModuleNextCertificate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceDomainsResponseBodyModuleNextCertificate() = default ;
    ListAppInstanceDomainsResponseBodyModuleNextCertificate& operator=(const ListAppInstanceDomainsResponseBodyModuleNextCertificate &) = default ;
    ListAppInstanceDomainsResponseBodyModuleNextCertificate& operator=(ListAppInstanceDomainsResponseBodyModuleNextCertificate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateName_ != nullptr
        && this->certificateStatus_ != nullptr && this->certificateType_ != nullptr && this->endTime_ != nullptr; };
    // certificateName Field Functions 
    bool hasCertificateName() const { return this->certificateName_ != nullptr;};
    void deleteCertificateName() { this->certificateName_ = nullptr;};
    inline string certificateName() const { DARABONBA_PTR_GET_DEFAULT(certificateName_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNextCertificate& setCertificateName(string certificateName) { DARABONBA_PTR_SET_VALUE(certificateName_, certificateName) };


    // certificateStatus Field Functions 
    bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
    void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
    inline string certificateStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateStatus_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNextCertificate& setCertificateStatus(string certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string certificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNextCertificate& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNextCertificate& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


  protected:
    std::shared_ptr<string> certificateName_ = nullptr;
    std::shared_ptr<string> certificateStatus_ = nullptr;
    std::shared_ptr<string> certificateType_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
