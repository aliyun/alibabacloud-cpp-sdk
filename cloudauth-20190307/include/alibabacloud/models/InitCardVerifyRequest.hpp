// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITCARDVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITCARDVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class InitCardVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitCardVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackToken, callbackToken_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CardPageNumber, cardPageNumber_);
      DARABONBA_PTR_TO_JSON(CardType, cardType_);
      DARABONBA_PTR_TO_JSON(DocScanMode, docScanMode_);
      DARABONBA_PTR_TO_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(PictureSave, pictureSave_);
      DARABONBA_PTR_TO_JSON(VerifyMeta, verifyMeta_);
    };
    friend void from_json(const Darabonba::Json& j, InitCardVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackToken, callbackToken_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CardPageNumber, cardPageNumber_);
      DARABONBA_PTR_FROM_JSON(CardType, cardType_);
      DARABONBA_PTR_FROM_JSON(DocScanMode, docScanMode_);
      DARABONBA_PTR_FROM_JSON(MerchantBizId, merchantBizId_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(PictureSave, pictureSave_);
      DARABONBA_PTR_FROM_JSON(VerifyMeta, verifyMeta_);
    };
    InitCardVerifyRequest() = default ;
    InitCardVerifyRequest(const InitCardVerifyRequest &) = default ;
    InitCardVerifyRequest(InitCardVerifyRequest &&) = default ;
    InitCardVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitCardVerifyRequest() = default ;
    InitCardVerifyRequest& operator=(const InitCardVerifyRequest &) = default ;
    InitCardVerifyRequest& operator=(InitCardVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callbackToken_ != nullptr
        && this->callbackUrl_ != nullptr && this->cardPageNumber_ != nullptr && this->cardType_ != nullptr && this->docScanMode_ != nullptr && this->merchantBizId_ != nullptr
        && this->metaInfo_ != nullptr && this->model_ != nullptr && this->pictureSave_ != nullptr && this->verifyMeta_ != nullptr; };
    // callbackToken Field Functions 
    bool hasCallbackToken() const { return this->callbackToken_ != nullptr;};
    void deleteCallbackToken() { this->callbackToken_ = nullptr;};
    inline string callbackToken() const { DARABONBA_PTR_GET_DEFAULT(callbackToken_, "") };
    inline InitCardVerifyRequest& setCallbackToken(string callbackToken) { DARABONBA_PTR_SET_VALUE(callbackToken_, callbackToken) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline InitCardVerifyRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // cardPageNumber Field Functions 
    bool hasCardPageNumber() const { return this->cardPageNumber_ != nullptr;};
    void deleteCardPageNumber() { this->cardPageNumber_ = nullptr;};
    inline string cardPageNumber() const { DARABONBA_PTR_GET_DEFAULT(cardPageNumber_, "") };
    inline InitCardVerifyRequest& setCardPageNumber(string cardPageNumber) { DARABONBA_PTR_SET_VALUE(cardPageNumber_, cardPageNumber) };


    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline string cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, "") };
    inline InitCardVerifyRequest& setCardType(string cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // docScanMode Field Functions 
    bool hasDocScanMode() const { return this->docScanMode_ != nullptr;};
    void deleteDocScanMode() { this->docScanMode_ = nullptr;};
    inline string docScanMode() const { DARABONBA_PTR_GET_DEFAULT(docScanMode_, "") };
    inline InitCardVerifyRequest& setDocScanMode(string docScanMode) { DARABONBA_PTR_SET_VALUE(docScanMode_, docScanMode) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string merchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline InitCardVerifyRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string metaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline InitCardVerifyRequest& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string model() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline InitCardVerifyRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // pictureSave Field Functions 
    bool hasPictureSave() const { return this->pictureSave_ != nullptr;};
    void deletePictureSave() { this->pictureSave_ = nullptr;};
    inline string pictureSave() const { DARABONBA_PTR_GET_DEFAULT(pictureSave_, "") };
    inline InitCardVerifyRequest& setPictureSave(string pictureSave) { DARABONBA_PTR_SET_VALUE(pictureSave_, pictureSave) };


    // verifyMeta Field Functions 
    bool hasVerifyMeta() const { return this->verifyMeta_ != nullptr;};
    void deleteVerifyMeta() { this->verifyMeta_ = nullptr;};
    inline string verifyMeta() const { DARABONBA_PTR_GET_DEFAULT(verifyMeta_, "") };
    inline InitCardVerifyRequest& setVerifyMeta(string verifyMeta) { DARABONBA_PTR_SET_VALUE(verifyMeta_, verifyMeta) };


  protected:
    // Security Token, used for anti-replay and anti-tampering checks. If this parameter is passed, the CallbackToken field will be displayed in the callback address.
    std::shared_ptr<string> callbackToken_ = nullptr;
    // - The callback notification address for the authentication result, which must start with https.
    // - The platform will call back this address after completing the authentication and automatically add the certifyId and passed fields, example: https://www.aliyun.com?certifyId=xxxx&passed=T
    // - Warning
    // The callback is triggered only when the authentication is completed. If the authentication is abandoned, interrupted abnormally, or not performed, no notification will be sent. It is recommended that when you receive the callback notification, if necessary, you can obtain detailed authentication information through the query interface.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // Number of card pages collected by the SDK
    // - You can input 1 or 2; input 1 to collect the front side, input 2 to collect both the front and back sides.
    // 
    // - If the verification type is ID period (VerifyMeta value is ID_PERIOD), you must input 2.
    // 
    // This parameter is required.
    std::shared_ptr<string> cardPageNumber_ = nullptr;
    // Type of identification
    // - Resident Second Generation ID Card: IDENTITY_CARD
    // 
    // This parameter is required.
    std::shared_ptr<string> cardType_ = nullptr;
    // Enumeration of photo-taking methods (manual/auto)
    // - Take a photo: shoot
    // - Scan: scan 
    // - Auto switch: auto
    std::shared_ptr<string> docScanMode_ = nullptr;
    // A unique business identifier you define, used for subsequent troubleshooting.
    // Supports a combination of 32 alphanumeric characters, please ensure uniqueness.
    // 
    // This parameter is required.
    std::shared_ptr<string> merchantBizId_ = nullptr;
    // MetaInfo environment parameter, which needs to be obtained through the client SDK.
    // 
    // This parameter is required.
    std::shared_ptr<string> metaInfo_ = nullptr;
    // Verification method, value:
    // - OCR_VERIFY: OCR recognition and verification mode.
    // 
    // This parameter is required.
    std::shared_ptr<string> model_ = nullptr;
    // Whether to temporarily store the images collected by the app.
    // - Y: Yes
    // - N: No
    // - If \\"Yes\\" is selected here, the query interface will support returning the card image information.
    // 
    // This parameter is required.
    std::shared_ptr<string> pictureSave_ = nullptr;
    // Verification type, value:
    // - Identity two elements (name + ID number): ID_2_META
    // 
    // This parameter is required.
    std::shared_ptr<string> verifyMeta_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
