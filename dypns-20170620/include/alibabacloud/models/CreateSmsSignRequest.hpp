// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSSIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSSIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class CreateSmsSignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsSignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppUrl, appUrl_);
      DARABONBA_PTR_TO_JSON(BusinessLicenseCert, businessLicenseCert_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(ExtendMessage, extendMessage_);
      DARABONBA_PTR_TO_JSON(OldSmsSignName, oldSmsSignName_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrganizationCodeCert, organizationCodeCert_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SmsSignName, smsSignName_);
      DARABONBA_PTR_TO_JSON(SmsSignRemark, smsSignRemark_);
      DARABONBA_PTR_TO_JSON(SmsSignSource, smsSignSource_);
      DARABONBA_PTR_TO_JSON(TaxRegistrationCert, taxRegistrationCert_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsSignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppUrl, appUrl_);
      DARABONBA_PTR_FROM_JSON(BusinessLicenseCert, businessLicenseCert_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(ExtendMessage, extendMessage_);
      DARABONBA_PTR_FROM_JSON(OldSmsSignName, oldSmsSignName_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrganizationCodeCert, organizationCodeCert_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SmsSignName, smsSignName_);
      DARABONBA_PTR_FROM_JSON(SmsSignRemark, smsSignRemark_);
      DARABONBA_PTR_FROM_JSON(SmsSignSource, smsSignSource_);
      DARABONBA_PTR_FROM_JSON(TaxRegistrationCert, taxRegistrationCert_);
    };
    CreateSmsSignRequest() = default ;
    CreateSmsSignRequest(const CreateSmsSignRequest &) = default ;
    CreateSmsSignRequest(CreateSmsSignRequest &&) = default ;
    CreateSmsSignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsSignRequest() = default ;
    CreateSmsSignRequest& operator=(const CreateSmsSignRequest &) = default ;
    CreateSmsSignRequest& operator=(CreateSmsSignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appUrl_ == nullptr
        && this->businessLicenseCert_ == nullptr && this->certType_ == nullptr && this->extendMessage_ == nullptr && this->oldSmsSignName_ == nullptr && this->orderId_ == nullptr
        && this->organizationCodeCert_ == nullptr && this->ownerId_ == nullptr && this->prodCode_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->smsSignName_ == nullptr && this->smsSignRemark_ == nullptr && this->smsSignSource_ == nullptr && this->taxRegistrationCert_ == nullptr; };
    // appUrl Field Functions 
    bool hasAppUrl() const { return this->appUrl_ != nullptr;};
    void deleteAppUrl() { this->appUrl_ = nullptr;};
    inline string getAppUrl() const { DARABONBA_PTR_GET_DEFAULT(appUrl_, "") };
    inline CreateSmsSignRequest& setAppUrl(string appUrl) { DARABONBA_PTR_SET_VALUE(appUrl_, appUrl) };


    // businessLicenseCert Field Functions 
    bool hasBusinessLicenseCert() const { return this->businessLicenseCert_ != nullptr;};
    void deleteBusinessLicenseCert() { this->businessLicenseCert_ = nullptr;};
    inline string getBusinessLicenseCert() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseCert_, "") };
    inline CreateSmsSignRequest& setBusinessLicenseCert(string businessLicenseCert) { DARABONBA_PTR_SET_VALUE(businessLicenseCert_, businessLicenseCert) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline CreateSmsSignRequest& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // extendMessage Field Functions 
    bool hasExtendMessage() const { return this->extendMessage_ != nullptr;};
    void deleteExtendMessage() { this->extendMessage_ = nullptr;};
    inline string getExtendMessage() const { DARABONBA_PTR_GET_DEFAULT(extendMessage_, "") };
    inline CreateSmsSignRequest& setExtendMessage(string extendMessage) { DARABONBA_PTR_SET_VALUE(extendMessage_, extendMessage) };


    // oldSmsSignName Field Functions 
    bool hasOldSmsSignName() const { return this->oldSmsSignName_ != nullptr;};
    void deleteOldSmsSignName() { this->oldSmsSignName_ = nullptr;};
    inline string getOldSmsSignName() const { DARABONBA_PTR_GET_DEFAULT(oldSmsSignName_, "") };
    inline CreateSmsSignRequest& setOldSmsSignName(string oldSmsSignName) { DARABONBA_PTR_SET_VALUE(oldSmsSignName_, oldSmsSignName) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline CreateSmsSignRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // organizationCodeCert Field Functions 
    bool hasOrganizationCodeCert() const { return this->organizationCodeCert_ != nullptr;};
    void deleteOrganizationCodeCert() { this->organizationCodeCert_ = nullptr;};
    inline string getOrganizationCodeCert() const { DARABONBA_PTR_GET_DEFAULT(organizationCodeCert_, "") };
    inline CreateSmsSignRequest& setOrganizationCodeCert(string organizationCodeCert) { DARABONBA_PTR_SET_VALUE(organizationCodeCert_, organizationCodeCert) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsSignRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline CreateSmsSignRequest& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsSignRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsSignRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // smsSignName Field Functions 
    bool hasSmsSignName() const { return this->smsSignName_ != nullptr;};
    void deleteSmsSignName() { this->smsSignName_ = nullptr;};
    inline string getSmsSignName() const { DARABONBA_PTR_GET_DEFAULT(smsSignName_, "") };
    inline CreateSmsSignRequest& setSmsSignName(string smsSignName) { DARABONBA_PTR_SET_VALUE(smsSignName_, smsSignName) };


    // smsSignRemark Field Functions 
    bool hasSmsSignRemark() const { return this->smsSignRemark_ != nullptr;};
    void deleteSmsSignRemark() { this->smsSignRemark_ = nullptr;};
    inline string getSmsSignRemark() const { DARABONBA_PTR_GET_DEFAULT(smsSignRemark_, "") };
    inline CreateSmsSignRequest& setSmsSignRemark(string smsSignRemark) { DARABONBA_PTR_SET_VALUE(smsSignRemark_, smsSignRemark) };


    // smsSignSource Field Functions 
    bool hasSmsSignSource() const { return this->smsSignSource_ != nullptr;};
    void deleteSmsSignSource() { this->smsSignSource_ = nullptr;};
    inline string getSmsSignSource() const { DARABONBA_PTR_GET_DEFAULT(smsSignSource_, "") };
    inline CreateSmsSignRequest& setSmsSignSource(string smsSignSource) { DARABONBA_PTR_SET_VALUE(smsSignSource_, smsSignSource) };


    // taxRegistrationCert Field Functions 
    bool hasTaxRegistrationCert() const { return this->taxRegistrationCert_ != nullptr;};
    void deleteTaxRegistrationCert() { this->taxRegistrationCert_ = nullptr;};
    inline string getTaxRegistrationCert() const { DARABONBA_PTR_GET_DEFAULT(taxRegistrationCert_, "") };
    inline CreateSmsSignRequest& setTaxRegistrationCert(string taxRegistrationCert) { DARABONBA_PTR_SET_VALUE(taxRegistrationCert_, taxRegistrationCert) };


  protected:
    // This parameter is required.
    shared_ptr<string> appUrl_ {};
    // This parameter is required.
    shared_ptr<string> businessLicenseCert_ {};
    // This parameter is required.
    shared_ptr<string> certType_ {};
    shared_ptr<string> extendMessage_ {};
    shared_ptr<string> oldSmsSignName_ {};
    shared_ptr<string> orderId_ {};
    shared_ptr<string> organizationCodeCert_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> prodCode_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // This parameter is required.
    shared_ptr<string> smsSignName_ {};
    // This parameter is required.
    shared_ptr<string> smsSignRemark_ {};
    // This parameter is required.
    shared_ptr<string> smsSignSource_ {};
    shared_ptr<string> taxRegistrationCert_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
