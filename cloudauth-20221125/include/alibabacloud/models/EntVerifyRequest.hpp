// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20221125
{
namespace Models
{
  class EntVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(EntName, entName_);
      DARABONBA_PTR_TO_JSON(InfoVerifyType, infoVerifyType_);
      DARABONBA_PTR_TO_JSON(LegalPersonCertNo, legalPersonCertNo_);
      DARABONBA_PTR_TO_JSON(LegalPersonMobile, legalPersonMobile_);
      DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_TO_JSON(LicenseNo, licenseNo_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(RiskModelVersion, riskModelVersion_);
      DARABONBA_PTR_TO_JSON(RiskVerifyType, riskVerifyType_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(UserAuthorization, userAuthorization_);
    };
    friend void from_json(const Darabonba::Json& j, EntVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(EntName, entName_);
      DARABONBA_PTR_FROM_JSON(InfoVerifyType, infoVerifyType_);
      DARABONBA_PTR_FROM_JSON(LegalPersonCertNo, legalPersonCertNo_);
      DARABONBA_PTR_FROM_JSON(LegalPersonMobile, legalPersonMobile_);
      DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_FROM_JSON(LicenseNo, licenseNo_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(RiskModelVersion, riskModelVersion_);
      DARABONBA_PTR_FROM_JSON(RiskVerifyType, riskVerifyType_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(UserAuthorization, userAuthorization_);
    };
    EntVerifyRequest() = default ;
    EntVerifyRequest(const EntVerifyRequest &) = default ;
    EntVerifyRequest(EntVerifyRequest &&) = default ;
    EntVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntVerifyRequest() = default ;
    EntVerifyRequest& operator=(const EntVerifyRequest &) = default ;
    EntVerifyRequest& operator=(EntVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->entName_ == nullptr && this->infoVerifyType_ == nullptr && this->legalPersonCertNo_ == nullptr && this->legalPersonMobile_ == nullptr && this->legalPersonName_ == nullptr
        && this->licenseNo_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr && this->riskModelVersion_ == nullptr && this->riskVerifyType_ == nullptr
        && this->sceneCode_ == nullptr && this->userAuthorization_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline string getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, "") };
    inline EntVerifyRequest& setAccountNo(string accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // entName Field Functions 
    bool hasEntName() const { return this->entName_ != nullptr;};
    void deleteEntName() { this->entName_ = nullptr;};
    inline string getEntName() const { DARABONBA_PTR_GET_DEFAULT(entName_, "") };
    inline EntVerifyRequest& setEntName(string entName) { DARABONBA_PTR_SET_VALUE(entName_, entName) };


    // infoVerifyType Field Functions 
    bool hasInfoVerifyType() const { return this->infoVerifyType_ != nullptr;};
    void deleteInfoVerifyType() { this->infoVerifyType_ = nullptr;};
    inline string getInfoVerifyType() const { DARABONBA_PTR_GET_DEFAULT(infoVerifyType_, "") };
    inline EntVerifyRequest& setInfoVerifyType(string infoVerifyType) { DARABONBA_PTR_SET_VALUE(infoVerifyType_, infoVerifyType) };


    // legalPersonCertNo Field Functions 
    bool hasLegalPersonCertNo() const { return this->legalPersonCertNo_ != nullptr;};
    void deleteLegalPersonCertNo() { this->legalPersonCertNo_ = nullptr;};
    inline string getLegalPersonCertNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonCertNo_, "") };
    inline EntVerifyRequest& setLegalPersonCertNo(string legalPersonCertNo) { DARABONBA_PTR_SET_VALUE(legalPersonCertNo_, legalPersonCertNo) };


    // legalPersonMobile Field Functions 
    bool hasLegalPersonMobile() const { return this->legalPersonMobile_ != nullptr;};
    void deleteLegalPersonMobile() { this->legalPersonMobile_ = nullptr;};
    inline string getLegalPersonMobile() const { DARABONBA_PTR_GET_DEFAULT(legalPersonMobile_, "") };
    inline EntVerifyRequest& setLegalPersonMobile(string legalPersonMobile) { DARABONBA_PTR_SET_VALUE(legalPersonMobile_, legalPersonMobile) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string getLegalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline EntVerifyRequest& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // licenseNo Field Functions 
    bool hasLicenseNo() const { return this->licenseNo_ != nullptr;};
    void deleteLicenseNo() { this->licenseNo_ = nullptr;};
    inline string getLicenseNo() const { DARABONBA_PTR_GET_DEFAULT(licenseNo_, "") };
    inline EntVerifyRequest& setLicenseNo(string licenseNo) { DARABONBA_PTR_SET_VALUE(licenseNo_, licenseNo) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline EntVerifyRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline EntVerifyRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // riskModelVersion Field Functions 
    bool hasRiskModelVersion() const { return this->riskModelVersion_ != nullptr;};
    void deleteRiskModelVersion() { this->riskModelVersion_ = nullptr;};
    inline string getRiskModelVersion() const { DARABONBA_PTR_GET_DEFAULT(riskModelVersion_, "") };
    inline EntVerifyRequest& setRiskModelVersion(string riskModelVersion) { DARABONBA_PTR_SET_VALUE(riskModelVersion_, riskModelVersion) };


    // riskVerifyType Field Functions 
    bool hasRiskVerifyType() const { return this->riskVerifyType_ != nullptr;};
    void deleteRiskVerifyType() { this->riskVerifyType_ = nullptr;};
    inline string getRiskVerifyType() const { DARABONBA_PTR_GET_DEFAULT(riskVerifyType_, "") };
    inline EntVerifyRequest& setRiskVerifyType(string riskVerifyType) { DARABONBA_PTR_SET_VALUE(riskVerifyType_, riskVerifyType) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline EntVerifyRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // userAuthorization Field Functions 
    bool hasUserAuthorization() const { return this->userAuthorization_ != nullptr;};
    void deleteUserAuthorization() { this->userAuthorization_ = nullptr;};
    inline string getUserAuthorization() const { DARABONBA_PTR_GET_DEFAULT(userAuthorization_, "") };
    inline EntVerifyRequest& setUserAuthorization(string userAuthorization) { DARABONBA_PTR_SET_VALUE(userAuthorization_, userAuthorization) };


  protected:
    // Receiving account, to assist in improving the risk assessment effect.
    shared_ptr<string> accountNo_ {};
    // Enterprise name.
    shared_ptr<string> entName_ {};
    // Enterprise element verification type, currently not supported.
    shared_ptr<string> infoVerifyType_ {};
    // Legal person\\"s ID number.
    shared_ptr<string> legalPersonCertNo_ {};
    // Legal person\\"s mobile phone number.
    shared_ptr<string> legalPersonMobile_ {};
    // Legal person\\"s name.
    shared_ptr<string> legalPersonName_ {};
    // Business license number.
    shared_ptr<string> licenseNo_ {};
    // A unique business identifier defined by the merchant, used for subsequent problem localization and troubleshooting. It supports a combination of letters and numbers, with a maximum length of 32 characters. Please ensure its uniqueness.
    shared_ptr<string> merchantBizId_ {};
    // Merchant-side user ID. It supports a combination of letters and numbers, with a maximum length of 32 characters.
    shared_ptr<string> merchantUserId_ {};
    // Enterprise risk verification model version, required when RiskVerifyType is not empty. Currently supported:
    // 
    // - BASIC: Basic version
    shared_ptr<string> riskModelVersion_ {};
    // Enterprise risk verification type, at least one of InfoVerifyType or this must be selected. Currently supported:
    // 
    // - BUSINESS_ANTIFRAUD
    shared_ptr<string> riskVerifyType_ {};
    // Scene code.
    shared_ptr<string> sceneCode_ {};
    // Whether the user authorization is obtained.
    // 
    // - 1: Authorized
    // 
    // - 0: Not authorized
    shared_ptr<string> userAuthorization_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20221125
#endif
