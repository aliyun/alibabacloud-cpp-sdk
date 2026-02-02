// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENTELEMENTVERIFYPROREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENTELEMENTVERIFYPROREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20221125
{
namespace Models
{
  class EntElementVerifyPRORequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EntElementVerifyPRORequest& obj) { 
      DARABONBA_PTR_TO_JSON(EntName, entName_);
      DARABONBA_PTR_TO_JSON(InfoVerifyType, infoVerifyType_);
      DARABONBA_PTR_TO_JSON(LegalPersonCertNo, legalPersonCertNo_);
      DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_TO_JSON(LicenseNo, licenseNo_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(UserAuthorization, userAuthorization_);
    };
    friend void from_json(const Darabonba::Json& j, EntElementVerifyPRORequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EntName, entName_);
      DARABONBA_PTR_FROM_JSON(InfoVerifyType, infoVerifyType_);
      DARABONBA_PTR_FROM_JSON(LegalPersonCertNo, legalPersonCertNo_);
      DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
      DARABONBA_PTR_FROM_JSON(LicenseNo, licenseNo_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(UserAuthorization, userAuthorization_);
    };
    EntElementVerifyPRORequest() = default ;
    EntElementVerifyPRORequest(const EntElementVerifyPRORequest &) = default ;
    EntElementVerifyPRORequest(EntElementVerifyPRORequest &&) = default ;
    EntElementVerifyPRORequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EntElementVerifyPRORequest() = default ;
    EntElementVerifyPRORequest& operator=(const EntElementVerifyPRORequest &) = default ;
    EntElementVerifyPRORequest& operator=(EntElementVerifyPRORequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->entName_ == nullptr
        && this->infoVerifyType_ == nullptr && this->legalPersonCertNo_ == nullptr && this->legalPersonName_ == nullptr && this->licenseNo_ == nullptr && this->merchantBizId_ == nullptr
        && this->merchantUserId_ == nullptr && this->sceneCode_ == nullptr && this->userAuthorization_ == nullptr; };
    // entName Field Functions 
    bool hasEntName() const { return this->entName_ != nullptr;};
    void deleteEntName() { this->entName_ = nullptr;};
    inline string getEntName() const { DARABONBA_PTR_GET_DEFAULT(entName_, "") };
    inline EntElementVerifyPRORequest& setEntName(string entName) { DARABONBA_PTR_SET_VALUE(entName_, entName) };


    // infoVerifyType Field Functions 
    bool hasInfoVerifyType() const { return this->infoVerifyType_ != nullptr;};
    void deleteInfoVerifyType() { this->infoVerifyType_ = nullptr;};
    inline string getInfoVerifyType() const { DARABONBA_PTR_GET_DEFAULT(infoVerifyType_, "") };
    inline EntElementVerifyPRORequest& setInfoVerifyType(string infoVerifyType) { DARABONBA_PTR_SET_VALUE(infoVerifyType_, infoVerifyType) };


    // legalPersonCertNo Field Functions 
    bool hasLegalPersonCertNo() const { return this->legalPersonCertNo_ != nullptr;};
    void deleteLegalPersonCertNo() { this->legalPersonCertNo_ = nullptr;};
    inline string getLegalPersonCertNo() const { DARABONBA_PTR_GET_DEFAULT(legalPersonCertNo_, "") };
    inline EntElementVerifyPRORequest& setLegalPersonCertNo(string legalPersonCertNo) { DARABONBA_PTR_SET_VALUE(legalPersonCertNo_, legalPersonCertNo) };


    // legalPersonName Field Functions 
    bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
    void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
    inline string getLegalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
    inline EntElementVerifyPRORequest& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


    // licenseNo Field Functions 
    bool hasLicenseNo() const { return this->licenseNo_ != nullptr;};
    void deleteLicenseNo() { this->licenseNo_ = nullptr;};
    inline string getLicenseNo() const { DARABONBA_PTR_GET_DEFAULT(licenseNo_, "") };
    inline EntElementVerifyPRORequest& setLicenseNo(string licenseNo) { DARABONBA_PTR_SET_VALUE(licenseNo_, licenseNo) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline EntElementVerifyPRORequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline EntElementVerifyPRORequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline EntElementVerifyPRORequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // userAuthorization Field Functions 
    bool hasUserAuthorization() const { return this->userAuthorization_ != nullptr;};
    void deleteUserAuthorization() { this->userAuthorization_ = nullptr;};
    inline string getUserAuthorization() const { DARABONBA_PTR_GET_DEFAULT(userAuthorization_, "") };
    inline EntElementVerifyPRORequest& setUserAuthorization(string userAuthorization) { DARABONBA_PTR_SET_VALUE(userAuthorization_, userAuthorization) };


  protected:
    shared_ptr<string> entName_ {};
    shared_ptr<string> infoVerifyType_ {};
    shared_ptr<string> legalPersonCertNo_ {};
    shared_ptr<string> legalPersonName_ {};
    shared_ptr<string> licenseNo_ {};
    shared_ptr<string> merchantBizId_ {};
    shared_ptr<string> merchantUserId_ {};
    shared_ptr<string> sceneCode_ {};
    shared_ptr<string> userAuthorization_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20221125
#endif
