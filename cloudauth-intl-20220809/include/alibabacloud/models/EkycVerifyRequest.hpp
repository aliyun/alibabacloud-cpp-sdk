// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EKYCVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EKYCVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class EkycVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EkycVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Authorize, authorize_);
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(DocNo, docNo_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_TO_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_TO_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_TO_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
    };
    friend void from_json(const Darabonba::Json& j, EkycVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorize, authorize_);
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(DocNo, docNo_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(FacePictureBase64, facePictureBase64_);
      DARABONBA_PTR_FROM_JSON(FacePictureUrl, facePictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureBase64, idOcrPictureBase64_);
      DARABONBA_PTR_FROM_JSON(IdOcrPictureUrl, idOcrPictureUrl_);
      DARABONBA_PTR_FROM_JSON(IdThreshold, idThreshold_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
    };
    EkycVerifyRequest() = default ;
    EkycVerifyRequest(const EkycVerifyRequest &) = default ;
    EkycVerifyRequest(EkycVerifyRequest &&) = default ;
    EkycVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EkycVerifyRequest() = default ;
    EkycVerifyRequest& operator=(const EkycVerifyRequest &) = default ;
    EkycVerifyRequest& operator=(EkycVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorize_ != nullptr
        && this->crop_ != nullptr && this->docName_ != nullptr && this->docNo_ != nullptr && this->docType_ != nullptr && this->facePictureBase64_ != nullptr
        && this->facePictureUrl_ != nullptr && this->idOcrPictureBase64_ != nullptr && this->idOcrPictureUrl_ != nullptr && this->idThreshold_ != nullptr && this->merchantBizId_ != nullptr
        && this->merchantUserId_ != nullptr && this->productCode_ != nullptr; };
    // authorize Field Functions 
    bool hasAuthorize() const { return this->authorize_ != nullptr;};
    void deleteAuthorize() { this->authorize_ = nullptr;};
    inline string authorize() const { DARABONBA_PTR_GET_DEFAULT(authorize_, "") };
    inline EkycVerifyRequest& setAuthorize(string authorize) { DARABONBA_PTR_SET_VALUE(authorize_, authorize) };


    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline EkycVerifyRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline EkycVerifyRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docNo Field Functions 
    bool hasDocNo() const { return this->docNo_ != nullptr;};
    void deleteDocNo() { this->docNo_ = nullptr;};
    inline string docNo() const { DARABONBA_PTR_GET_DEFAULT(docNo_, "") };
    inline EkycVerifyRequest& setDocNo(string docNo) { DARABONBA_PTR_SET_VALUE(docNo_, docNo) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline EkycVerifyRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // facePictureBase64 Field Functions 
    bool hasFacePictureBase64() const { return this->facePictureBase64_ != nullptr;};
    void deleteFacePictureBase64() { this->facePictureBase64_ = nullptr;};
    inline string facePictureBase64() const { DARABONBA_PTR_GET_DEFAULT(facePictureBase64_, "") };
    inline EkycVerifyRequest& setFacePictureBase64(string facePictureBase64) { DARABONBA_PTR_SET_VALUE(facePictureBase64_, facePictureBase64) };


    // facePictureUrl Field Functions 
    bool hasFacePictureUrl() const { return this->facePictureUrl_ != nullptr;};
    void deleteFacePictureUrl() { this->facePictureUrl_ = nullptr;};
    inline string facePictureUrl() const { DARABONBA_PTR_GET_DEFAULT(facePictureUrl_, "") };
    inline EkycVerifyRequest& setFacePictureUrl(string facePictureUrl) { DARABONBA_PTR_SET_VALUE(facePictureUrl_, facePictureUrl) };


    // idOcrPictureBase64 Field Functions 
    bool hasIdOcrPictureBase64() const { return this->idOcrPictureBase64_ != nullptr;};
    void deleteIdOcrPictureBase64() { this->idOcrPictureBase64_ = nullptr;};
    inline string idOcrPictureBase64() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureBase64_, "") };
    inline EkycVerifyRequest& setIdOcrPictureBase64(string idOcrPictureBase64) { DARABONBA_PTR_SET_VALUE(idOcrPictureBase64_, idOcrPictureBase64) };


    // idOcrPictureUrl Field Functions 
    bool hasIdOcrPictureUrl() const { return this->idOcrPictureUrl_ != nullptr;};
    void deleteIdOcrPictureUrl() { this->idOcrPictureUrl_ = nullptr;};
    inline string idOcrPictureUrl() const { DARABONBA_PTR_GET_DEFAULT(idOcrPictureUrl_, "") };
    inline EkycVerifyRequest& setIdOcrPictureUrl(string idOcrPictureUrl) { DARABONBA_PTR_SET_VALUE(idOcrPictureUrl_, idOcrPictureUrl) };


    // idThreshold Field Functions 
    bool hasIdThreshold() const { return this->idThreshold_ != nullptr;};
    void deleteIdThreshold() { this->idThreshold_ = nullptr;};
    inline string idThreshold() const { DARABONBA_PTR_GET_DEFAULT(idThreshold_, "") };
    inline EkycVerifyRequest& setIdThreshold(string idThreshold) { DARABONBA_PTR_SET_VALUE(idThreshold_, idThreshold) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline EkycVerifyRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline EkycVerifyRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline EkycVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


  protected:
    // Specifies whether to enable identity verification against the official database:
    // 
    // - **T**: Enable.
    // 
    // - **F**: Disable. (Default)
    // 
    // > This feature is currently available only for second-generation resident ID cards of the Chinese mainland.
    std::shared_ptr<string> authorize_ = nullptr;
    // Specifies whether to crop the face image:
    // 
    // - **T**: Allows cropping.
    // 
    // - **F**: Disallows cropping. (Default)
    std::shared_ptr<string> crop_ = nullptr;
    // The user\\"s real name.
    // 
    // > If Authorize is set to T and the certificate type is Chinese mainland resident ID card, you must enter at least one of the following groups of information:
    // > - DocName and DocNo.
    // > - IdOcrPictureBase64 or IdOcrPictureUrl.
    std::shared_ptr<string> docName_ = nullptr;
    // The user\\"s certificate number.
    // 
    // 
    // > If Authorize is set to **T** and the certificate type is Chinese mainland resident ID card, you must enter at least one of the following groups of information:
    // > - DocName and DocNo.
    // > - IdOcrPictureBase64 or IdOcrPictureUrl.
    std::shared_ptr<string> docNo_ = nullptr;
    // The certificate type, which is uniquely identified by an 8-digit number. For more information, see [Certificate types](https://www.alibabacloud.com/help/en/ekyc/latest/im1u641gyesiqmbg?spm=a2c63.p38356.0.i18#Hu5TG).
    std::shared_ptr<string> docType_ = nullptr;
    std::shared_ptr<string> facePictureBase64_ = nullptr;
    // The URL of the portrait image. The URL must be an HTTP or HTTPS link accessible over the Internet.
    std::shared_ptr<string> facePictureUrl_ = nullptr;
    std::shared_ptr<string> idOcrPictureBase64_ = nullptr;
    // The URL of the certificate image. The URL must be an HTTP or HTTPS link accessible over the Internet.
    std::shared_ptr<string> idOcrPictureUrl_ = nullptr;
    // The custom OCR quality detection threshold mode:
    // 
    // - **0**: Standard mode
    // 
    // - **1**: Strict mode
    // 
    // - **2**: Loose mode
    // 
    // - **3** (default): Disables quality detection
    std::shared_ptr<string> idThreshold_ = nullptr;
    // A unique business identifier that you customize. It is used to locate and troubleshoot issues. The identifier can be up to 32 characters in length and can contain letters and digits. Make sure that the identifier is unique.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // A custom user ID or another identifier that can identify a specific user, such as a mobile number or an email address. Desensitize the value of this field in advance, for example, by hashing the value.
    std::shared_ptr<string> merchantUserId_ = nullptr;
    // The product solution to integrate. Set the value to **eKYC_MIN**.
    std::shared_ptr<string> productCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
