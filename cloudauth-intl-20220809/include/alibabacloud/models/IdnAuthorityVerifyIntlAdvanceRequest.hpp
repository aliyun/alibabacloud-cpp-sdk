// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IDNAUTHORITYVERIFYINTLADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IDNAUTHORITYVERIFYINTLADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class IdnAuthorityVerifyIntlAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IdnAuthorityVerifyIntlAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BirthDate, birthDate_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(FullName, fullName_);
      DARABONBA_PTR_TO_JSON(IdNumber, idNumber_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(SourceFacePicture, sourceFacePicture_);
      // sourceFacePictureFileObject_ is stream
      DARABONBA_PTR_TO_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
    };
    friend void from_json(const Darabonba::Json& j, IdnAuthorityVerifyIntlAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BirthDate, birthDate_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(FullName, fullName_);
      DARABONBA_PTR_FROM_JSON(IdNumber, idNumber_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(SourceFacePicture, sourceFacePicture_);
      // sourceFacePictureFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(SourceFacePictureUrl, sourceFacePictureUrl_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
    };
    IdnAuthorityVerifyIntlAdvanceRequest() = default ;
    IdnAuthorityVerifyIntlAdvanceRequest(const IdnAuthorityVerifyIntlAdvanceRequest &) = default ;
    IdnAuthorityVerifyIntlAdvanceRequest(IdnAuthorityVerifyIntlAdvanceRequest &&) = default ;
    IdnAuthorityVerifyIntlAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IdnAuthorityVerifyIntlAdvanceRequest() = default ;
    IdnAuthorityVerifyIntlAdvanceRequest& operator=(const IdnAuthorityVerifyIntlAdvanceRequest &) = default ;
    IdnAuthorityVerifyIntlAdvanceRequest& operator=(IdnAuthorityVerifyIntlAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->birthDate_ == nullptr
        && this->email_ == nullptr && this->fullName_ == nullptr && this->idNumber_ == nullptr && this->merchantBizId_ == nullptr && this->merchantUserId_ == nullptr
        && this->mobile_ == nullptr && this->productCode_ == nullptr && this->sceneCode_ == nullptr && this->sourceFacePicture_ == nullptr && this->sourceFacePictureFileObject_ == nullptr
        && this->sourceFacePictureUrl_ == nullptr && this->timestamp_ == nullptr; };
    // birthDate Field Functions 
    bool hasBirthDate() const { return this->birthDate_ != nullptr;};
    void deleteBirthDate() { this->birthDate_ = nullptr;};
    inline string getBirthDate() const { DARABONBA_PTR_GET_DEFAULT(birthDate_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setBirthDate(string birthDate) { DARABONBA_PTR_SET_VALUE(birthDate_, birthDate) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // idNumber Field Functions 
    bool hasIdNumber() const { return this->idNumber_ != nullptr;};
    void deleteIdNumber() { this->idNumber_ = nullptr;};
    inline string getIdNumber() const { DARABONBA_PTR_GET_DEFAULT(idNumber_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setIdNumber(string idNumber) { DARABONBA_PTR_SET_VALUE(idNumber_, idNumber) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string getMerchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // sourceFacePicture Field Functions 
    bool hasSourceFacePicture() const { return this->sourceFacePicture_ != nullptr;};
    void deleteSourceFacePicture() { this->sourceFacePicture_ = nullptr;};
    inline string getSourceFacePicture() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePicture_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setSourceFacePicture(string sourceFacePicture) { DARABONBA_PTR_SET_VALUE(sourceFacePicture_, sourceFacePicture) };


    // sourceFacePictureFileObject Field Functions 
    bool hasSourceFacePictureFileObject() const { return this->sourceFacePictureFileObject_ != nullptr;};
    void deleteSourceFacePictureFileObject() { this->sourceFacePictureFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getSourceFacePictureFileObject() const { DARABONBA_GET(sourceFacePictureFileObject_) };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setSourceFacePictureFileObject(shared_ptr<Darabonba::IStream> sourceFacePictureFileObject) { DARABONBA_SET_VALUE(sourceFacePictureFileObject_, sourceFacePictureFileObject) };


    // sourceFacePictureUrl Field Functions 
    bool hasSourceFacePictureUrl() const { return this->sourceFacePictureUrl_ != nullptr;};
    void deleteSourceFacePictureUrl() { this->sourceFacePictureUrl_ = nullptr;};
    inline string getSourceFacePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(sourceFacePictureUrl_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setSourceFacePictureUrl(string sourceFacePictureUrl) { DARABONBA_PTR_SET_VALUE(sourceFacePictureUrl_, sourceFacePictureUrl) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline string getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, "") };
    inline IdnAuthorityVerifyIntlAdvanceRequest& setTimestamp(string timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


  protected:
    // The date of birth.
    // 
    // This parameter is required.
    shared_ptr<string> birthDate_ {};
    // The email address of the user.
    // 
    // This parameter is required.
    shared_ptr<string> email_ {};
    // The full name.
    // 
    // This parameter is required.
    shared_ptr<string> fullName_ {};
    // The ID card number.
    // 
    // This parameter is required.
    shared_ptr<string> idNumber_ {};
    // The merchant-side custom business unique identifier, which is used for subsequent troubleshooting. The value can be a combination of letters and digits with a maximum length of 32 characters. Ensure that the value is unique.
    // 
    // This parameter is required.
    shared_ptr<string> merchantBizId_ {};
    // The custom user ID, or another identifier that can identify a specific user, such as a phone number or email address. We strongly recommend that you desensitize the value of this field in advance, for example, by hashing the value.
    // 
    // This parameter is required.
    shared_ptr<string> merchantUserId_ {};
    // The Indonesian mobile phone number. The number must start with +62, followed by 9 to 11 digits.
    // 
    // This parameter is required.
    shared_ptr<string> mobile_ {};
    // The product solution to use. Set the value to IDN_META.
    // 
    // This parameter is required.
    shared_ptr<string> productCode_ {};
    // The custom authentication scenario ID. You can use this scenario ID to query related records in the console. The value can be a combination of letters, digits, or underscores with a maximum length of 10 characters.
    shared_ptr<string> sceneCode_ {};
    // The Base64-encoded facial photo.
    // 
    // > **Note**
    // 
    // - If you use this method to pass the ID photo, check the photo size and do not pass an excessively large photo.
    // - Specify one of the following parameters: SourceFacePicture, SourceFacePictureUrl, or SourceFacePictureFile.
    shared_ptr<string> sourceFacePicture_ {};
    // The file stream of the facial photo.
    shared_ptr<Darabonba::IStream> sourceFacePictureFileObject_ {};
    // The URL of the facial photo. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> sourceFacePictureUrl_ {};
    // This parameter is required.
    shared_ptr<string> timestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
