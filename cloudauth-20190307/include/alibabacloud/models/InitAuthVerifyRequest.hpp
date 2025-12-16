// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INITAUTHVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INITAUTHVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class InitAuthVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InitAuthVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackToken, callbackToken_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(CardPageNumber, cardPageNumber_);
      DARABONBA_PTR_TO_JSON(CardType, cardType_);
      DARABONBA_PTR_TO_JSON(DocScanMode, docScanMode_);
      DARABONBA_PTR_TO_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_TO_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_TO_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, InitAuthVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackToken, callbackToken_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(CardPageNumber, cardPageNumber_);
      DARABONBA_PTR_FROM_JSON(CardType, cardType_);
      DARABONBA_PTR_FROM_JSON(DocScanMode, docScanMode_);
      DARABONBA_PTR_FROM_JSON(IdSpoof, idSpoof_);
      DARABONBA_PTR_FROM_JSON(MetaInfo, metaInfo_);
      DARABONBA_PTR_FROM_JSON(OuterOrderNo, outerOrderNo_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    InitAuthVerifyRequest() = default ;
    InitAuthVerifyRequest(const InitAuthVerifyRequest &) = default ;
    InitAuthVerifyRequest(InitAuthVerifyRequest &&) = default ;
    InitAuthVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InitAuthVerifyRequest() = default ;
    InitAuthVerifyRequest& operator=(const InitAuthVerifyRequest &) = default ;
    InitAuthVerifyRequest& operator=(InitAuthVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callbackToken_ == nullptr
        && return this->callbackUrl_ == nullptr && return this->cardPageNumber_ == nullptr && return this->cardType_ == nullptr && return this->docScanMode_ == nullptr && return this->idSpoof_ == nullptr
        && return this->metaInfo_ == nullptr && return this->outerOrderNo_ == nullptr && return this->productCode_ == nullptr && return this->sceneId_ == nullptr; };
    // callbackToken Field Functions 
    bool hasCallbackToken() const { return this->callbackToken_ != nullptr;};
    void deleteCallbackToken() { this->callbackToken_ = nullptr;};
    inline string callbackToken() const { DARABONBA_PTR_GET_DEFAULT(callbackToken_, "") };
    inline InitAuthVerifyRequest& setCallbackToken(string callbackToken) { DARABONBA_PTR_SET_VALUE(callbackToken_, callbackToken) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline InitAuthVerifyRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // cardPageNumber Field Functions 
    bool hasCardPageNumber() const { return this->cardPageNumber_ != nullptr;};
    void deleteCardPageNumber() { this->cardPageNumber_ = nullptr;};
    inline string cardPageNumber() const { DARABONBA_PTR_GET_DEFAULT(cardPageNumber_, "") };
    inline InitAuthVerifyRequest& setCardPageNumber(string cardPageNumber) { DARABONBA_PTR_SET_VALUE(cardPageNumber_, cardPageNumber) };


    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline string cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, "") };
    inline InitAuthVerifyRequest& setCardType(string cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // docScanMode Field Functions 
    bool hasDocScanMode() const { return this->docScanMode_ != nullptr;};
    void deleteDocScanMode() { this->docScanMode_ = nullptr;};
    inline string docScanMode() const { DARABONBA_PTR_GET_DEFAULT(docScanMode_, "") };
    inline InitAuthVerifyRequest& setDocScanMode(string docScanMode) { DARABONBA_PTR_SET_VALUE(docScanMode_, docScanMode) };


    // idSpoof Field Functions 
    bool hasIdSpoof() const { return this->idSpoof_ != nullptr;};
    void deleteIdSpoof() { this->idSpoof_ = nullptr;};
    inline string idSpoof() const { DARABONBA_PTR_GET_DEFAULT(idSpoof_, "") };
    inline InitAuthVerifyRequest& setIdSpoof(string idSpoof) { DARABONBA_PTR_SET_VALUE(idSpoof_, idSpoof) };


    // metaInfo Field Functions 
    bool hasMetaInfo() const { return this->metaInfo_ != nullptr;};
    void deleteMetaInfo() { this->metaInfo_ = nullptr;};
    inline string metaInfo() const { DARABONBA_PTR_GET_DEFAULT(metaInfo_, "") };
    inline InitAuthVerifyRequest& setMetaInfo(string metaInfo) { DARABONBA_PTR_SET_VALUE(metaInfo_, metaInfo) };


    // outerOrderNo Field Functions 
    bool hasOuterOrderNo() const { return this->outerOrderNo_ != nullptr;};
    void deleteOuterOrderNo() { this->outerOrderNo_ = nullptr;};
    inline string outerOrderNo() const { DARABONBA_PTR_GET_DEFAULT(outerOrderNo_, "") };
    inline InitAuthVerifyRequest& setOuterOrderNo(string outerOrderNo) { DARABONBA_PTR_SET_VALUE(outerOrderNo_, outerOrderNo) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline InitAuthVerifyRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline int64_t sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, 0L) };
    inline InitAuthVerifyRequest& setSceneId(int64_t sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    std::shared_ptr<string> callbackToken_ = nullptr;
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cardPageNumber_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> cardType_ = nullptr;
    std::shared_ptr<string> docScanMode_ = nullptr;
    std::shared_ptr<string> idSpoof_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> metaInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outerOrderNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
