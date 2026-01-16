// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECACERTIFICATELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeCACertificateListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCACertificateListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaStatus, caStatus_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(IssuerType, issuerType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(ValidStatus, validStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCACertificateListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaStatus, caStatus_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(IssuerType, issuerType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(ValidStatus, validStatus_);
    };
    DescribeCACertificateListRequest() = default ;
    DescribeCACertificateListRequest(const DescribeCACertificateListRequest &) = default ;
    DescribeCACertificateListRequest(DescribeCACertificateListRequest &&) = default ;
    DescribeCACertificateListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCACertificateListRequest() = default ;
    DescribeCACertificateListRequest& operator=(const DescribeCACertificateListRequest &) = default ;
    DescribeCACertificateListRequest& operator=(DescribeCACertificateListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caStatus_ == nullptr
        && this->certType_ == nullptr && this->currentPage_ == nullptr && this->identifier_ == nullptr && this->issuerType_ == nullptr && this->resourceGroupId_ == nullptr
        && this->showSize_ == nullptr && this->validStatus_ == nullptr; };
    // caStatus Field Functions 
    bool hasCaStatus() const { return this->caStatus_ != nullptr;};
    void deleteCaStatus() { this->caStatus_ = nullptr;};
    inline string getCaStatus() const { DARABONBA_PTR_GET_DEFAULT(caStatus_, "") };
    inline DescribeCACertificateListRequest& setCaStatus(string caStatus) { DARABONBA_PTR_SET_VALUE(caStatus_, caStatus) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline DescribeCACertificateListRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCACertificateListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeCACertificateListRequest& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // issuerType Field Functions 
    bool hasIssuerType() const { return this->issuerType_ != nullptr;};
    void deleteIssuerType() { this->issuerType_ = nullptr;};
    inline string getIssuerType() const { DARABONBA_PTR_GET_DEFAULT(issuerType_, "") };
    inline DescribeCACertificateListRequest& setIssuerType(string issuerType) { DARABONBA_PTR_SET_VALUE(issuerType_, issuerType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCACertificateListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int32_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0) };
    inline DescribeCACertificateListRequest& setShowSize(int32_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // validStatus Field Functions 
    bool hasValidStatus() const { return this->validStatus_ != nullptr;};
    void deleteValidStatus() { this->validStatus_ = nullptr;};
    inline string getValidStatus() const { DARABONBA_PTR_GET_DEFAULT(validStatus_, "") };
    inline DescribeCACertificateListRequest& setValidStatus(string validStatus) { DARABONBA_PTR_SET_VALUE(validStatus_, validStatus) };


  protected:
    // Ca status.
    // 
    // - issue: inUse.
    // - forbidden: forbidden.
    // - revoke: revoked.
    shared_ptr<string> caStatus_ {};
    // The type of the certificate. Valid values:
    // 
    // - root: rootCA.
    // - subRoot: subCA.
    // - externalCa: import.
    shared_ptr<string> certType_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The unique identifier of the CA certificate.
    // 
    // >  You can call the [DescribeCACertificateList](https://help.aliyun.com/document_detail/328095.html) operation to query the unique identifiers of all CA certificates.
    shared_ptr<string> identifier_ {};
    // The CA Issuer Type.
    // 
    // - local: Private certificate.
    // - iTrusChina: Compliance CA.
    // - external: External Import.
    shared_ptr<string> issuerType_ {};
    shared_ptr<string> resourceGroupId_ {};
    // The number of CA certificates per page. Default value: **20**.
    shared_ptr<int32_t> showSize_ {};
    // valid time.
    // 
    // - valid: means in the valid period.
    // - notValid: means expired.
    shared_ptr<string> validStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
