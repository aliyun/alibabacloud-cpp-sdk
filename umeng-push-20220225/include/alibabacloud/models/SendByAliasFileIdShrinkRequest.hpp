// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDBYALIASFILEIDSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDBYALIASFILEIDSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class SendByAliasFileIdShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendByAliasFileIdShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliasType, aliasType_);
      DARABONBA_PTR_TO_JSON(AndroidPayload, androidPayloadShrink_);
      DARABONBA_PTR_TO_JSON(AndroidShortPayload, androidShortPayloadShrink_);
      DARABONBA_PTR_TO_JSON(ChannelProperties, channelPropertiesShrink_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(HarmonyPayload, harmonyPayloadShrink_);
      DARABONBA_PTR_TO_JSON(IosPayload, iosPayloadShrink_);
      DARABONBA_PTR_TO_JSON(Policy, policyShrink_);
      DARABONBA_PTR_TO_JSON(ProductionMode, productionMode_);
      DARABONBA_PTR_TO_JSON(ReceiptType, receiptType_);
      DARABONBA_PTR_TO_JSON(ReceiptUrl, receiptUrl_);
      DARABONBA_PTR_TO_JSON(ThirdPartyId, thirdPartyId_);
      DARABONBA_PTR_TO_JSON(callbackParams, callbackParams_);
    };
    friend void from_json(const Darabonba::Json& j, SendByAliasFileIdShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasType, aliasType_);
      DARABONBA_PTR_FROM_JSON(AndroidPayload, androidPayloadShrink_);
      DARABONBA_PTR_FROM_JSON(AndroidShortPayload, androidShortPayloadShrink_);
      DARABONBA_PTR_FROM_JSON(ChannelProperties, channelPropertiesShrink_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(HarmonyPayload, harmonyPayloadShrink_);
      DARABONBA_PTR_FROM_JSON(IosPayload, iosPayloadShrink_);
      DARABONBA_PTR_FROM_JSON(Policy, policyShrink_);
      DARABONBA_PTR_FROM_JSON(ProductionMode, productionMode_);
      DARABONBA_PTR_FROM_JSON(ReceiptType, receiptType_);
      DARABONBA_PTR_FROM_JSON(ReceiptUrl, receiptUrl_);
      DARABONBA_PTR_FROM_JSON(ThirdPartyId, thirdPartyId_);
      DARABONBA_PTR_FROM_JSON(callbackParams, callbackParams_);
    };
    SendByAliasFileIdShrinkRequest() = default ;
    SendByAliasFileIdShrinkRequest(const SendByAliasFileIdShrinkRequest &) = default ;
    SendByAliasFileIdShrinkRequest(SendByAliasFileIdShrinkRequest &&) = default ;
    SendByAliasFileIdShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendByAliasFileIdShrinkRequest() = default ;
    SendByAliasFileIdShrinkRequest& operator=(const SendByAliasFileIdShrinkRequest &) = default ;
    SendByAliasFileIdShrinkRequest& operator=(SendByAliasFileIdShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasType_ == nullptr
        && this->androidPayloadShrink_ == nullptr && this->androidShortPayloadShrink_ == nullptr && this->channelPropertiesShrink_ == nullptr && this->description_ == nullptr && this->fileId_ == nullptr
        && this->harmonyPayloadShrink_ == nullptr && this->iosPayloadShrink_ == nullptr && this->policyShrink_ == nullptr && this->productionMode_ == nullptr && this->receiptType_ == nullptr
        && this->receiptUrl_ == nullptr && this->thirdPartyId_ == nullptr && this->callbackParams_ == nullptr; };
    // aliasType Field Functions 
    bool hasAliasType() const { return this->aliasType_ != nullptr;};
    void deleteAliasType() { this->aliasType_ = nullptr;};
    inline string getAliasType() const { DARABONBA_PTR_GET_DEFAULT(aliasType_, "") };
    inline SendByAliasFileIdShrinkRequest& setAliasType(string aliasType) { DARABONBA_PTR_SET_VALUE(aliasType_, aliasType) };


    // androidPayloadShrink Field Functions 
    bool hasAndroidPayloadShrink() const { return this->androidPayloadShrink_ != nullptr;};
    void deleteAndroidPayloadShrink() { this->androidPayloadShrink_ = nullptr;};
    inline string getAndroidPayloadShrink() const { DARABONBA_PTR_GET_DEFAULT(androidPayloadShrink_, "") };
    inline SendByAliasFileIdShrinkRequest& setAndroidPayloadShrink(string androidPayloadShrink) { DARABONBA_PTR_SET_VALUE(androidPayloadShrink_, androidPayloadShrink) };


    // androidShortPayloadShrink Field Functions 
    bool hasAndroidShortPayloadShrink() const { return this->androidShortPayloadShrink_ != nullptr;};
    void deleteAndroidShortPayloadShrink() { this->androidShortPayloadShrink_ = nullptr;};
    inline string getAndroidShortPayloadShrink() const { DARABONBA_PTR_GET_DEFAULT(androidShortPayloadShrink_, "") };
    inline SendByAliasFileIdShrinkRequest& setAndroidShortPayloadShrink(string androidShortPayloadShrink) { DARABONBA_PTR_SET_VALUE(androidShortPayloadShrink_, androidShortPayloadShrink) };


    // channelPropertiesShrink Field Functions 
    bool hasChannelPropertiesShrink() const { return this->channelPropertiesShrink_ != nullptr;};
    void deleteChannelPropertiesShrink() { this->channelPropertiesShrink_ = nullptr;};
    inline string getChannelPropertiesShrink() const { DARABONBA_PTR_GET_DEFAULT(channelPropertiesShrink_, "") };
    inline SendByAliasFileIdShrinkRequest& setChannelPropertiesShrink(string channelPropertiesShrink) { DARABONBA_PTR_SET_VALUE(channelPropertiesShrink_, channelPropertiesShrink) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SendByAliasFileIdShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string getFileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline SendByAliasFileIdShrinkRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // harmonyPayloadShrink Field Functions 
    bool hasHarmonyPayloadShrink() const { return this->harmonyPayloadShrink_ != nullptr;};
    void deleteHarmonyPayloadShrink() { this->harmonyPayloadShrink_ = nullptr;};
    inline string getHarmonyPayloadShrink() const { DARABONBA_PTR_GET_DEFAULT(harmonyPayloadShrink_, "") };
    inline SendByAliasFileIdShrinkRequest& setHarmonyPayloadShrink(string harmonyPayloadShrink) { DARABONBA_PTR_SET_VALUE(harmonyPayloadShrink_, harmonyPayloadShrink) };


    // iosPayloadShrink Field Functions 
    bool hasIosPayloadShrink() const { return this->iosPayloadShrink_ != nullptr;};
    void deleteIosPayloadShrink() { this->iosPayloadShrink_ = nullptr;};
    inline string getIosPayloadShrink() const { DARABONBA_PTR_GET_DEFAULT(iosPayloadShrink_, "") };
    inline SendByAliasFileIdShrinkRequest& setIosPayloadShrink(string iosPayloadShrink) { DARABONBA_PTR_SET_VALUE(iosPayloadShrink_, iosPayloadShrink) };


    // policyShrink Field Functions 
    bool hasPolicyShrink() const { return this->policyShrink_ != nullptr;};
    void deletePolicyShrink() { this->policyShrink_ = nullptr;};
    inline string getPolicyShrink() const { DARABONBA_PTR_GET_DEFAULT(policyShrink_, "") };
    inline SendByAliasFileIdShrinkRequest& setPolicyShrink(string policyShrink) { DARABONBA_PTR_SET_VALUE(policyShrink_, policyShrink) };


    // productionMode Field Functions 
    bool hasProductionMode() const { return this->productionMode_ != nullptr;};
    void deleteProductionMode() { this->productionMode_ = nullptr;};
    inline bool getProductionMode() const { DARABONBA_PTR_GET_DEFAULT(productionMode_, false) };
    inline SendByAliasFileIdShrinkRequest& setProductionMode(bool productionMode) { DARABONBA_PTR_SET_VALUE(productionMode_, productionMode) };


    // receiptType Field Functions 
    bool hasReceiptType() const { return this->receiptType_ != nullptr;};
    void deleteReceiptType() { this->receiptType_ = nullptr;};
    inline int32_t getReceiptType() const { DARABONBA_PTR_GET_DEFAULT(receiptType_, 0) };
    inline SendByAliasFileIdShrinkRequest& setReceiptType(int32_t receiptType) { DARABONBA_PTR_SET_VALUE(receiptType_, receiptType) };


    // receiptUrl Field Functions 
    bool hasReceiptUrl() const { return this->receiptUrl_ != nullptr;};
    void deleteReceiptUrl() { this->receiptUrl_ = nullptr;};
    inline string getReceiptUrl() const { DARABONBA_PTR_GET_DEFAULT(receiptUrl_, "") };
    inline SendByAliasFileIdShrinkRequest& setReceiptUrl(string receiptUrl) { DARABONBA_PTR_SET_VALUE(receiptUrl_, receiptUrl) };


    // thirdPartyId Field Functions 
    bool hasThirdPartyId() const { return this->thirdPartyId_ != nullptr;};
    void deleteThirdPartyId() { this->thirdPartyId_ = nullptr;};
    inline string getThirdPartyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartyId_, "") };
    inline SendByAliasFileIdShrinkRequest& setThirdPartyId(string thirdPartyId) { DARABONBA_PTR_SET_VALUE(thirdPartyId_, thirdPartyId) };


    // callbackParams Field Functions 
    bool hasCallbackParams() const { return this->callbackParams_ != nullptr;};
    void deleteCallbackParams() { this->callbackParams_ = nullptr;};
    inline string getCallbackParams() const { DARABONBA_PTR_GET_DEFAULT(callbackParams_, "") };
    inline SendByAliasFileIdShrinkRequest& setCallbackParams(string callbackParams) { DARABONBA_PTR_SET_VALUE(callbackParams_, callbackParams) };


  protected:
    shared_ptr<string> aliasType_ {};
    shared_ptr<string> androidPayloadShrink_ {};
    shared_ptr<string> androidShortPayloadShrink_ {};
    shared_ptr<string> channelPropertiesShrink_ {};
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<string> fileId_ {};
    shared_ptr<string> harmonyPayloadShrink_ {};
    shared_ptr<string> iosPayloadShrink_ {};
    shared_ptr<string> policyShrink_ {};
    shared_ptr<bool> productionMode_ {};
    shared_ptr<int32_t> receiptType_ {};
    shared_ptr<string> receiptUrl_ {};
    shared_ptr<string> thirdPartyId_ {};
    shared_ptr<string> callbackParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
