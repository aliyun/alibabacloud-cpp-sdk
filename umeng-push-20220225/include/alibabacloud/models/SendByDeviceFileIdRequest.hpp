// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDBYDEVICEFILEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDBYDEVICEFILEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AndroidPayload.hpp>
#include <alibabacloud/models/AndroidShortPayload.hpp>
#include <alibabacloud/models/ChannelProperties.hpp>
#include <alibabacloud/models/HarmonyPayload.hpp>
#include <alibabacloud/models/IosPayload.hpp>
#include <alibabacloud/models/Policy.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengPush20220225
{
namespace Models
{
  class SendByDeviceFileIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendByDeviceFileIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AndroidPayload, androidPayload_);
      DARABONBA_PTR_TO_JSON(AndroidShortPayload, androidShortPayload_);
      DARABONBA_PTR_TO_JSON(ChannelProperties, channelProperties_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileId, fileId_);
      DARABONBA_PTR_TO_JSON(HarmonyPayload, harmonyPayload_);
      DARABONBA_PTR_TO_JSON(IosPayload, iosPayload_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(ProductionMode, productionMode_);
      DARABONBA_PTR_TO_JSON(ReceiptType, receiptType_);
      DARABONBA_PTR_TO_JSON(ReceiptUrl, receiptUrl_);
      DARABONBA_PTR_TO_JSON(ThirdPartyId, thirdPartyId_);
      DARABONBA_PTR_TO_JSON(callbackParams, callbackParams_);
    };
    friend void from_json(const Darabonba::Json& j, SendByDeviceFileIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AndroidPayload, androidPayload_);
      DARABONBA_PTR_FROM_JSON(AndroidShortPayload, androidShortPayload_);
      DARABONBA_PTR_FROM_JSON(ChannelProperties, channelProperties_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileId, fileId_);
      DARABONBA_PTR_FROM_JSON(HarmonyPayload, harmonyPayload_);
      DARABONBA_PTR_FROM_JSON(IosPayload, iosPayload_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(ProductionMode, productionMode_);
      DARABONBA_PTR_FROM_JSON(ReceiptType, receiptType_);
      DARABONBA_PTR_FROM_JSON(ReceiptUrl, receiptUrl_);
      DARABONBA_PTR_FROM_JSON(ThirdPartyId, thirdPartyId_);
      DARABONBA_PTR_FROM_JSON(callbackParams, callbackParams_);
    };
    SendByDeviceFileIdRequest() = default ;
    SendByDeviceFileIdRequest(const SendByDeviceFileIdRequest &) = default ;
    SendByDeviceFileIdRequest(SendByDeviceFileIdRequest &&) = default ;
    SendByDeviceFileIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendByDeviceFileIdRequest() = default ;
    SendByDeviceFileIdRequest& operator=(const SendByDeviceFileIdRequest &) = default ;
    SendByDeviceFileIdRequest& operator=(SendByDeviceFileIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidPayload_ == nullptr
        && return this->androidShortPayload_ == nullptr && return this->channelProperties_ == nullptr && return this->description_ == nullptr && return this->fileId_ == nullptr && return this->harmonyPayload_ == nullptr
        && return this->iosPayload_ == nullptr && return this->policy_ == nullptr && return this->productionMode_ == nullptr && return this->receiptType_ == nullptr && return this->receiptUrl_ == nullptr
        && return this->thirdPartyId_ == nullptr && return this->callbackParams_ == nullptr; };
    // androidPayload Field Functions 
    bool hasAndroidPayload() const { return this->androidPayload_ != nullptr;};
    void deleteAndroidPayload() { this->androidPayload_ = nullptr;};
    inline const AndroidPayload & androidPayload() const { DARABONBA_PTR_GET_CONST(androidPayload_, AndroidPayload) };
    inline AndroidPayload androidPayload() { DARABONBA_PTR_GET(androidPayload_, AndroidPayload) };
    inline SendByDeviceFileIdRequest& setAndroidPayload(const AndroidPayload & androidPayload) { DARABONBA_PTR_SET_VALUE(androidPayload_, androidPayload) };
    inline SendByDeviceFileIdRequest& setAndroidPayload(AndroidPayload && androidPayload) { DARABONBA_PTR_SET_RVALUE(androidPayload_, androidPayload) };


    // androidShortPayload Field Functions 
    bool hasAndroidShortPayload() const { return this->androidShortPayload_ != nullptr;};
    void deleteAndroidShortPayload() { this->androidShortPayload_ = nullptr;};
    inline const AndroidShortPayload & androidShortPayload() const { DARABONBA_PTR_GET_CONST(androidShortPayload_, AndroidShortPayload) };
    inline AndroidShortPayload androidShortPayload() { DARABONBA_PTR_GET(androidShortPayload_, AndroidShortPayload) };
    inline SendByDeviceFileIdRequest& setAndroidShortPayload(const AndroidShortPayload & androidShortPayload) { DARABONBA_PTR_SET_VALUE(androidShortPayload_, androidShortPayload) };
    inline SendByDeviceFileIdRequest& setAndroidShortPayload(AndroidShortPayload && androidShortPayload) { DARABONBA_PTR_SET_RVALUE(androidShortPayload_, androidShortPayload) };


    // channelProperties Field Functions 
    bool hasChannelProperties() const { return this->channelProperties_ != nullptr;};
    void deleteChannelProperties() { this->channelProperties_ = nullptr;};
    inline const ChannelProperties & channelProperties() const { DARABONBA_PTR_GET_CONST(channelProperties_, ChannelProperties) };
    inline ChannelProperties channelProperties() { DARABONBA_PTR_GET(channelProperties_, ChannelProperties) };
    inline SendByDeviceFileIdRequest& setChannelProperties(const ChannelProperties & channelProperties) { DARABONBA_PTR_SET_VALUE(channelProperties_, channelProperties) };
    inline SendByDeviceFileIdRequest& setChannelProperties(ChannelProperties && channelProperties) { DARABONBA_PTR_SET_RVALUE(channelProperties_, channelProperties) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SendByDeviceFileIdRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileId Field Functions 
    bool hasFileId() const { return this->fileId_ != nullptr;};
    void deleteFileId() { this->fileId_ = nullptr;};
    inline string fileId() const { DARABONBA_PTR_GET_DEFAULT(fileId_, "") };
    inline SendByDeviceFileIdRequest& setFileId(string fileId) { DARABONBA_PTR_SET_VALUE(fileId_, fileId) };


    // harmonyPayload Field Functions 
    bool hasHarmonyPayload() const { return this->harmonyPayload_ != nullptr;};
    void deleteHarmonyPayload() { this->harmonyPayload_ = nullptr;};
    inline const HarmonyPayload & harmonyPayload() const { DARABONBA_PTR_GET_CONST(harmonyPayload_, HarmonyPayload) };
    inline HarmonyPayload harmonyPayload() { DARABONBA_PTR_GET(harmonyPayload_, HarmonyPayload) };
    inline SendByDeviceFileIdRequest& setHarmonyPayload(const HarmonyPayload & harmonyPayload) { DARABONBA_PTR_SET_VALUE(harmonyPayload_, harmonyPayload) };
    inline SendByDeviceFileIdRequest& setHarmonyPayload(HarmonyPayload && harmonyPayload) { DARABONBA_PTR_SET_RVALUE(harmonyPayload_, harmonyPayload) };


    // iosPayload Field Functions 
    bool hasIosPayload() const { return this->iosPayload_ != nullptr;};
    void deleteIosPayload() { this->iosPayload_ = nullptr;};
    inline const IosPayload & iosPayload() const { DARABONBA_PTR_GET_CONST(iosPayload_, IosPayload) };
    inline IosPayload iosPayload() { DARABONBA_PTR_GET(iosPayload_, IosPayload) };
    inline SendByDeviceFileIdRequest& setIosPayload(const IosPayload & iosPayload) { DARABONBA_PTR_SET_VALUE(iosPayload_, iosPayload) };
    inline SendByDeviceFileIdRequest& setIosPayload(IosPayload && iosPayload) { DARABONBA_PTR_SET_RVALUE(iosPayload_, iosPayload) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline const Policy & policy() const { DARABONBA_PTR_GET_CONST(policy_, Policy) };
    inline Policy policy() { DARABONBA_PTR_GET(policy_, Policy) };
    inline SendByDeviceFileIdRequest& setPolicy(const Policy & policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };
    inline SendByDeviceFileIdRequest& setPolicy(Policy && policy) { DARABONBA_PTR_SET_RVALUE(policy_, policy) };


    // productionMode Field Functions 
    bool hasProductionMode() const { return this->productionMode_ != nullptr;};
    void deleteProductionMode() { this->productionMode_ = nullptr;};
    inline bool productionMode() const { DARABONBA_PTR_GET_DEFAULT(productionMode_, false) };
    inline SendByDeviceFileIdRequest& setProductionMode(bool productionMode) { DARABONBA_PTR_SET_VALUE(productionMode_, productionMode) };


    // receiptType Field Functions 
    bool hasReceiptType() const { return this->receiptType_ != nullptr;};
    void deleteReceiptType() { this->receiptType_ = nullptr;};
    inline int32_t receiptType() const { DARABONBA_PTR_GET_DEFAULT(receiptType_, 0) };
    inline SendByDeviceFileIdRequest& setReceiptType(int32_t receiptType) { DARABONBA_PTR_SET_VALUE(receiptType_, receiptType) };


    // receiptUrl Field Functions 
    bool hasReceiptUrl() const { return this->receiptUrl_ != nullptr;};
    void deleteReceiptUrl() { this->receiptUrl_ = nullptr;};
    inline string receiptUrl() const { DARABONBA_PTR_GET_DEFAULT(receiptUrl_, "") };
    inline SendByDeviceFileIdRequest& setReceiptUrl(string receiptUrl) { DARABONBA_PTR_SET_VALUE(receiptUrl_, receiptUrl) };


    // thirdPartyId Field Functions 
    bool hasThirdPartyId() const { return this->thirdPartyId_ != nullptr;};
    void deleteThirdPartyId() { this->thirdPartyId_ = nullptr;};
    inline string thirdPartyId() const { DARABONBA_PTR_GET_DEFAULT(thirdPartyId_, "") };
    inline SendByDeviceFileIdRequest& setThirdPartyId(string thirdPartyId) { DARABONBA_PTR_SET_VALUE(thirdPartyId_, thirdPartyId) };


    // callbackParams Field Functions 
    bool hasCallbackParams() const { return this->callbackParams_ != nullptr;};
    void deleteCallbackParams() { this->callbackParams_ = nullptr;};
    inline string callbackParams() const { DARABONBA_PTR_GET_DEFAULT(callbackParams_, "") };
    inline SendByDeviceFileIdRequest& setCallbackParams(string callbackParams) { DARABONBA_PTR_SET_VALUE(callbackParams_, callbackParams) };


  protected:
    std::shared_ptr<AndroidPayload> androidPayload_ = nullptr;
    std::shared_ptr<AndroidShortPayload> androidShortPayload_ = nullptr;
    std::shared_ptr<ChannelProperties> channelProperties_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileId_ = nullptr;
    std::shared_ptr<HarmonyPayload> harmonyPayload_ = nullptr;
    std::shared_ptr<IosPayload> iosPayload_ = nullptr;
    std::shared_ptr<Policy> policy_ = nullptr;
    std::shared_ptr<bool> productionMode_ = nullptr;
    std::shared_ptr<int32_t> receiptType_ = nullptr;
    std::shared_ptr<string> receiptUrl_ = nullptr;
    std::shared_ptr<string> thirdPartyId_ = nullptr;
    std::shared_ptr<string> callbackParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengPush20220225
#endif
