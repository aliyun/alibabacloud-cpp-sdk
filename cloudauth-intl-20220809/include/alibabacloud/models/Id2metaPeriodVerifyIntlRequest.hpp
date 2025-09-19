// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID2METAPERIODVERIFYINTLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID2METAPERIODVERIFYINTLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudauthIntl20220809
{
namespace Models
{
  class Id2MetaPeriodVerifyIntlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id2MetaPeriodVerifyIntlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DocName, docName_);
      DARABONBA_PTR_TO_JSON(DocNo, docNo_);
      DARABONBA_PTR_TO_JSON(DocType, docType_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_TO_JSON(ValidityEndDate, validityEndDate_);
      DARABONBA_PTR_TO_JSON(ValidityStartDate, validityStartDate_);
    };
    friend void from_json(const Darabonba::Json& j, Id2MetaPeriodVerifyIntlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DocName, docName_);
      DARABONBA_PTR_FROM_JSON(DocNo, docNo_);
      DARABONBA_PTR_FROM_JSON(DocType, docType_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MerchantUserId, merchantUserId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
      DARABONBA_PTR_FROM_JSON(ValidityEndDate, validityEndDate_);
      DARABONBA_PTR_FROM_JSON(ValidityStartDate, validityStartDate_);
    };
    Id2MetaPeriodVerifyIntlRequest() = default ;
    Id2MetaPeriodVerifyIntlRequest(const Id2MetaPeriodVerifyIntlRequest &) = default ;
    Id2MetaPeriodVerifyIntlRequest(Id2MetaPeriodVerifyIntlRequest &&) = default ;
    Id2MetaPeriodVerifyIntlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id2MetaPeriodVerifyIntlRequest() = default ;
    Id2MetaPeriodVerifyIntlRequest& operator=(const Id2MetaPeriodVerifyIntlRequest &) = default ;
    Id2MetaPeriodVerifyIntlRequest& operator=(Id2MetaPeriodVerifyIntlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->docName_ != nullptr
        && this->docNo_ != nullptr && this->docType_ != nullptr && this->merchantBizId_ != nullptr && this->merchantUserId_ != nullptr && this->productCode_ != nullptr
        && this->sceneCode_ != nullptr && this->validityEndDate_ != nullptr && this->validityStartDate_ != nullptr; };
    // docName Field Functions 
    bool hasDocName() const { return this->docName_ != nullptr;};
    void deleteDocName() { this->docName_ = nullptr;};
    inline string docName() const { DARABONBA_PTR_GET_DEFAULT(docName_, "") };
    inline Id2MetaPeriodVerifyIntlRequest& setDocName(string docName) { DARABONBA_PTR_SET_VALUE(docName_, docName) };


    // docNo Field Functions 
    bool hasDocNo() const { return this->docNo_ != nullptr;};
    void deleteDocNo() { this->docNo_ = nullptr;};
    inline string docNo() const { DARABONBA_PTR_GET_DEFAULT(docNo_, "") };
    inline Id2MetaPeriodVerifyIntlRequest& setDocNo(string docNo) { DARABONBA_PTR_SET_VALUE(docNo_, docNo) };


    // docType Field Functions 
    bool hasDocType() const { return this->docType_ != nullptr;};
    void deleteDocType() { this->docType_ = nullptr;};
    inline string docType() const { DARABONBA_PTR_GET_DEFAULT(docType_, "") };
    inline Id2MetaPeriodVerifyIntlRequest& setDocType(string docType) { DARABONBA_PTR_SET_VALUE(docType_, docType) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline Id2MetaPeriodVerifyIntlRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // merchantUserId Field Functions 
    bool hasMerchantUserId() const { return this->merchantUserId_ != nullptr;};
    void deleteMerchantUserId() { this->merchantUserId_ = nullptr;};
    inline string merchantUserId() const { DARABONBA_PTR_GET_DEFAULT(merchantUserId_, "") };
    inline Id2MetaPeriodVerifyIntlRequest& setMerchantUserId(string merchantUserId) { DARABONBA_PTR_SET_VALUE(merchantUserId_, merchantUserId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline Id2MetaPeriodVerifyIntlRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneCode Field Functions 
    bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
    void deleteSceneCode() { this->sceneCode_ = nullptr;};
    inline string sceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
    inline Id2MetaPeriodVerifyIntlRequest& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


    // validityEndDate Field Functions 
    bool hasValidityEndDate() const { return this->validityEndDate_ != nullptr;};
    void deleteValidityEndDate() { this->validityEndDate_ = nullptr;};
    inline string validityEndDate() const { DARABONBA_PTR_GET_DEFAULT(validityEndDate_, "") };
    inline Id2MetaPeriodVerifyIntlRequest& setValidityEndDate(string validityEndDate) { DARABONBA_PTR_SET_VALUE(validityEndDate_, validityEndDate) };


    // validityStartDate Field Functions 
    bool hasValidityStartDate() const { return this->validityStartDate_ != nullptr;};
    void deleteValidityStartDate() { this->validityStartDate_ = nullptr;};
    inline string validityStartDate() const { DARABONBA_PTR_GET_DEFAULT(validityStartDate_, "") };
    inline Id2MetaPeriodVerifyIntlRequest& setValidityStartDate(string validityStartDate) { DARABONBA_PTR_SET_VALUE(validityStartDate_, validityStartDate) };


  protected:
    // The user\\"s name.
    // 
    // This parameter is required.
    std::shared_ptr<string> docName_ = nullptr;
    // The user\\"s certificate number.
    // 
    // This parameter is required.
    std::shared_ptr<string> docNo_ = nullptr;
    // The certificate type, which is uniquely identified by an 8-digit number.
    // 
    // Currently, only second-generation resident ID cards from the Chinese mainland are supported. Set the value to the static field: **00000001**.
    // 
    // For more information, see [Certificate types](https://www.alibabacloud.com/help/en/ekyc/latest/im1u641gyesiqmbg?spm=a2c63.p38356.0.i13#Hu5TG).
    // 
    // This parameter is required.
    std::shared_ptr<string> docType_ = nullptr;
    // A unique business identifier that you can customize. Use this identifier to locate and troubleshoot issues. The identifier can be up to 32 characters in length and can contain letters and digits. Make sure that the identifier is unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // A custom user ID or another identifier for a specific user, such as a mobile number or email address. Desensitize the value of this field in advance, for example, by hashing the value.
    std::shared_ptr<string> merchantUserId_ = nullptr;
    // The product solution to integrate. Set the value to **eKYC_Date_MIN**.
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // A custom authentication scenario ID. You can use this ID to query related records in the console. The ID can be up to 10 characters in length and can contain letters, digits, and underscores (_).
    std::shared_ptr<string> sceneCode_ = nullptr;
    // The expiration date of the ID card\\"s validity period. The format is YYYYMMDD.
    // 
    // > If the ID card is valid for a long term, enter **long-term** for this parameter.
    // 
    // This parameter is required.
    std::shared_ptr<string> validityEndDate_ = nullptr;
    // The start date of the validity period. The format is YYYYMMDD.
    // 
    // This parameter is required.
    std::shared_ptr<string> validityStartDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudauthIntl20220809
#endif
