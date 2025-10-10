// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLISTENERCERTIFICATESRESPONSEBODYCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_LISTLISTENERCERTIFICATESRESPONSEBODYCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class ListListenerCertificatesResponseBodyCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListListenerCertificatesResponseBodyCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_TO_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListListenerCertificatesResponseBodyCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
      DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
      DARABONBA_PTR_FROM_JSON(IsDefault, isDefault_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListListenerCertificatesResponseBodyCertificates() = default ;
    ListListenerCertificatesResponseBodyCertificates(const ListListenerCertificatesResponseBodyCertificates &) = default ;
    ListListenerCertificatesResponseBodyCertificates(ListListenerCertificatesResponseBodyCertificates &&) = default ;
    ListListenerCertificatesResponseBodyCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListListenerCertificatesResponseBodyCertificates() = default ;
    ListListenerCertificatesResponseBodyCertificates& operator=(const ListListenerCertificatesResponseBodyCertificates &) = default ;
    ListListenerCertificatesResponseBodyCertificates& operator=(ListListenerCertificatesResponseBodyCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateId_ != nullptr
        && this->certificateType_ != nullptr && this->isDefault_ != nullptr && this->status_ != nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline ListListenerCertificatesResponseBodyCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


    // certificateType Field Functions 
    bool hasCertificateType() const { return this->certificateType_ != nullptr;};
    void deleteCertificateType() { this->certificateType_ = nullptr;};
    inline string certificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
    inline ListListenerCertificatesResponseBodyCertificates& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


    // isDefault Field Functions 
    bool hasIsDefault() const { return this->isDefault_ != nullptr;};
    void deleteIsDefault() { this->isDefault_ = nullptr;};
    inline bool isDefault() const { DARABONBA_PTR_GET_DEFAULT(isDefault_, false) };
    inline ListListenerCertificatesResponseBodyCertificates& setIsDefault(bool isDefault) { DARABONBA_PTR_SET_VALUE(isDefault_, isDefault) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListListenerCertificatesResponseBodyCertificates& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The certificate ID. Only server certificates are supported.
    std::shared_ptr<string> certificateId_ = nullptr;
    // The type of the certificate.
    std::shared_ptr<string> certificateType_ = nullptr;
    // Indicates whether the certificate is the default certificate of the listener. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isDefault_ = nullptr;
    // Indicates whether the certificate is associated with the listener. Valid values:
    // 
    // *   **Associating**
    // *   **Associated**
    // *   **Diassociating**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
