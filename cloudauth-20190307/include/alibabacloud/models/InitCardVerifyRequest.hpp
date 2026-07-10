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
    virtual bool empty() const override { return this->callbackToken_ == nullptr
        && this->callbackUrl_ == nullptr && this->cardPageNumber_ == nullptr && this->cardType_ == nullptr && this->docScanMode_ == nullptr && this->merchantBizId_ == nullptr
        && this->metaInfo_ == nullptr && this->model_ == nullptr && this->pictureSave_ == nullptr && this->verifyMeta_ == nullptr; };
    // callbackToken Field Functions 
    bool hasCallbackToken() const { return this->callbackToken_ != nullptr;};
    void deleteCallbackToken() { this->callbackToken_ = nullptr;};
    inline string getCallbackToken() const { DARABONBA_PTR_GET_DEFAULT(callbackToken_, "") };
    inline InitCardVerifyRequest& setCallbackToken(string callbackToken) { DARABONBA_PTR_SET_VALUE(callbackToken_, callbackToken) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline InitCardVerifyRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // cardPageNumber Field Functions 
    bool hasCardPageNumber() const { return this->cardPageNumber_ != nullptr;};
    void deleteCardPageNumber() { this->cardPageNumber_ = nullptr;};
    inline string getCardPageNumber() const { DARABONBA_PTR_GET_DEFAULT(cardPageNumber_, "") };
    inline InitCardVerifyRequest& setCardPageNumber(string cardPageNumber) { DARABONBA_PTR_SET_VALUE(cardPageNumber_, cardPageNumber) };


    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline string getCardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, "") };
    inline InitCardVerifyRequest& setCardType(string cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // docScanMode Field Functions 
    bool hasDocScanMode() const { return this->docScanMode_ != nullptr;};
    void deleteDocScanMode() { this->docScanMode_ = nullptr;};
    inline string getDocScanMode() const { DARABONBA_PTR_GET_DEFAULT(docScanMode_, "") };
    inline InitCardVerifyRequest& setDocScanMode(string docScanMode) { DARABONBA_PTR_SET_VALUE(docScanMode_, docScanMode) };


    // merchantBizId Field Functions 
    bool hasMerchantBizId() const { return this->merchantBizId_ != nullptr;};
    void deleteMerchantBizId() { this->merchantBizId_ = nullptr;};
    inline string getMerchantBizId() const { DARABONBA_PTR_GET_DEFAULT(merchantBizId_, "") };
    inline InitCardVerifyRequest& setMerchantBizId(string merchantBizId) { DARABONBA_PTR_SET_VALUE(merchantBizId_, merchantBizId) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string getMetaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline InitCardVerifyRequest& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
    inline InitCardVerifyRequest& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


    // pictureSave Field Functions 
    bool hasPictureSave() const { return this->pictureSave_ != nullptr;};
    void deletePictureSave() { this->pictureSave_ = nullptr;};
    inline string getPictureSave() const { DARABONBA_PTR_GET_DEFAULT(pictureSave_, "") };
    inline InitCardVerifyRequest& setPictureSave(string pictureSave) { DARABONBA_PTR_SET_VALUE(pictureSave_, pictureSave) };


    // verifyMeta Field Functions 
    bool hasVerifyMeta() const { return this->verifyMeta_ != nullptr;};
    void deleteVerifyMeta() { this->verifyMeta_ = nullptr;};
    inline string getVerifyMeta() const { DARABONBA_PTR_GET_DEFAULT(verifyMeta_, "") };
    inline InitCardVerifyRequest& setVerifyMeta(string verifyMeta) { DARABONBA_PTR_SET_VALUE(verifyMeta_, verifyMeta) };


  protected:
    // The security token used for anti-replay and anti-tampering verification. If you specify this parameter, the CallbackToken field is included in the callback URL.
    shared_ptr<string> callbackToken_ {};
    // The callback URL for authentication results. The URL must start with https. After the authentication is complete, the system sends a callback to this URL with the certifyId and passed fields automatically appended. Example: https://www.aliyun.com?certifyId=xxxx&passed=T
    // 
    // > **Warning** The callback is triggered only when the authentication is complete. No notification is sent if the authentication is abandoned, interrupted, or not performed. After you receive the callback notification, call the query operation to obtain the authentication details if needed.
    shared_ptr<string> callbackUrl_ {};
    // The number of card pages to be collected by the SDK. Valid values:
    // - 1: collects the front side only.
    // - 2: collects both the front and back sides.
    // 
    // - If the verification type is ID card validity period (VerifyMeta is set to ID_PERIOD), set this parameter to 2.
    // 
    // This parameter is required.
    shared_ptr<string> cardPageNumber_ {};
    // The document type. Valid values:
    // - IDENTITY_CARD: resident identity card.
    // 
    // This parameter is required.
    shared_ptr<string> cardType_ {};
    // The photo capture mode (manual or automatic). Valid values:
    // - shoot: manual capture
    // - scan: scan mode 
    // - auto: automatic switchover.
    shared_ptr<string> docScanMode_ {};
    // A custom business unique identifier that you define for subsequent troubleshooting. The value is a combination of letters and digits up to 32 characters in length. Make sure the value is unique.
    // 
    // This parameter is required.
    shared_ptr<string> merchantBizId_ {};
    // The MetaInfo environment parameter. Obtain this value by using the client SDK.
    // 
    // This parameter is required.
    shared_ptr<string> metaInfo_ {};
    // The verification mode. Valid values:
    // - OCR_VERIFY: OCR recognition and authentication mode.
    // 
    // This parameter is required.
    shared_ptr<string> model_ {};
    // Specifies whether to temporarily store images collected by the app. Valid values:
    // - Y: Yes.
    // - N: No.
    // - If you set this parameter to Y, the query operation returns card image information.
    // 
    // This parameter is required.
    shared_ptr<string> pictureSave_ {};
    // The verification type. Valid values:
    // - ID_2_META: two-factor identity verification (name + ID card number).
    // 
    // This parameter is required.
    shared_ptr<string> verifyMeta_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
