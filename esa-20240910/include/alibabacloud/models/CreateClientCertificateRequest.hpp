// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLIENTCERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class CreateClientCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClientCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CSR, CSR_);
      DARABONBA_PTR_TO_JSON(PkeyType, pkeyType_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(ValidityDays, validityDays_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClientCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CSR, CSR_);
      DARABONBA_PTR_FROM_JSON(PkeyType, pkeyType_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(ValidityDays, validityDays_);
    };
    CreateClientCertificateRequest() = default ;
    CreateClientCertificateRequest(const CreateClientCertificateRequest &) = default ;
    CreateClientCertificateRequest(CreateClientCertificateRequest &&) = default ;
    CreateClientCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClientCertificateRequest() = default ;
    CreateClientCertificateRequest& operator=(const CreateClientCertificateRequest &) = default ;
    CreateClientCertificateRequest& operator=(CreateClientCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->CSR_ == nullptr
        && return this->pkeyType_ == nullptr && return this->siteId_ == nullptr && return this->validityDays_ == nullptr; };
    // CSR Field Functions 
    bool hasCSR() const { return this->CSR_ != nullptr;};
    void deleteCSR() { this->CSR_ = nullptr;};
    inline string CSR() const { DARABONBA_PTR_GET_DEFAULT(CSR_, "") };
    inline CreateClientCertificateRequest& setCSR(string CSR) { DARABONBA_PTR_SET_VALUE(CSR_, CSR) };


    // pkeyType Field Functions 
    bool hasPkeyType() const { return this->pkeyType_ != nullptr;};
    void deletePkeyType() { this->pkeyType_ = nullptr;};
    inline string pkeyType() const { DARABONBA_PTR_GET_DEFAULT(pkeyType_, "") };
    inline CreateClientCertificateRequest& setPkeyType(string pkeyType) { DARABONBA_PTR_SET_VALUE(pkeyType_, pkeyType) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateClientCertificateRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // validityDays Field Functions 
    bool hasValidityDays() const { return this->validityDays_ != nullptr;};
    void deleteValidityDays() { this->validityDays_ = nullptr;};
    inline int64_t validityDays() const { DARABONBA_PTR_GET_DEFAULT(validityDays_, 0L) };
    inline CreateClientCertificateRequest& setValidityDays(int64_t validityDays) { DARABONBA_PTR_SET_VALUE(validityDays_, validityDays) };


  protected:
    // The certificate signing request (CSR).
    std::shared_ptr<string> CSR_ = nullptr;
    // The type of the private key algorithm.
    std::shared_ptr<string> pkeyType_ = nullptr;
    // The website ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The validity period of the certificate. Unit: day.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> validityDays_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
