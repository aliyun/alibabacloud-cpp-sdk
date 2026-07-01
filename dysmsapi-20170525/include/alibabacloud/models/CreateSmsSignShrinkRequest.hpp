// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSSIGNSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSSIGNSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmsSignShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsSignShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIcpRecordId, appIcpRecordId_);
      DARABONBA_PTR_TO_JSON(ApplySceneContent, applySceneContent_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_TO_JSON(MoreData, moreDataShrink_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(SignSource, signSource_);
      DARABONBA_PTR_TO_JSON(SignType, signType_);
      DARABONBA_PTR_TO_JSON(ThirdParty, thirdParty_);
      DARABONBA_PTR_TO_JSON(TrademarkId, trademarkId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsSignShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIcpRecordId, appIcpRecordId_);
      DARABONBA_PTR_FROM_JSON(ApplySceneContent, applySceneContent_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_FROM_JSON(MoreData, moreDataShrink_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(QualificationId, qualificationId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(SignSource, signSource_);
      DARABONBA_PTR_FROM_JSON(SignType, signType_);
      DARABONBA_PTR_FROM_JSON(ThirdParty, thirdParty_);
      DARABONBA_PTR_FROM_JSON(TrademarkId, trademarkId_);
    };
    CreateSmsSignShrinkRequest() = default ;
    CreateSmsSignShrinkRequest(const CreateSmsSignShrinkRequest &) = default ;
    CreateSmsSignShrinkRequest(CreateSmsSignShrinkRequest &&) = default ;
    CreateSmsSignShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsSignShrinkRequest() = default ;
    CreateSmsSignShrinkRequest& operator=(const CreateSmsSignShrinkRequest &) = default ;
    CreateSmsSignShrinkRequest& operator=(CreateSmsSignShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIcpRecordId_ == nullptr
        && this->applySceneContent_ == nullptr && this->authorizationLetterId_ == nullptr && this->moreDataShrink_ == nullptr && this->ownerId_ == nullptr && this->qualificationId_ == nullptr
        && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->signName_ == nullptr && this->signSource_ == nullptr
        && this->signType_ == nullptr && this->thirdParty_ == nullptr && this->trademarkId_ == nullptr; };
    // appIcpRecordId Field Functions 
    bool hasAppIcpRecordId() const { return this->appIcpRecordId_ != nullptr;};
    void deleteAppIcpRecordId() { this->appIcpRecordId_ = nullptr;};
    inline int64_t getAppIcpRecordId() const { DARABONBA_PTR_GET_DEFAULT(appIcpRecordId_, 0L) };
    inline CreateSmsSignShrinkRequest& setAppIcpRecordId(int64_t appIcpRecordId) { DARABONBA_PTR_SET_VALUE(appIcpRecordId_, appIcpRecordId) };


    // applySceneContent Field Functions 
    bool hasApplySceneContent() const { return this->applySceneContent_ != nullptr;};
    void deleteApplySceneContent() { this->applySceneContent_ = nullptr;};
    inline string getApplySceneContent() const { DARABONBA_PTR_GET_DEFAULT(applySceneContent_, "") };
    inline CreateSmsSignShrinkRequest& setApplySceneContent(string applySceneContent) { DARABONBA_PTR_SET_VALUE(applySceneContent_, applySceneContent) };


    // authorizationLetterId Field Functions 
    bool hasAuthorizationLetterId() const { return this->authorizationLetterId_ != nullptr;};
    void deleteAuthorizationLetterId() { this->authorizationLetterId_ = nullptr;};
    inline int64_t getAuthorizationLetterId() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterId_, 0L) };
    inline CreateSmsSignShrinkRequest& setAuthorizationLetterId(int64_t authorizationLetterId) { DARABONBA_PTR_SET_VALUE(authorizationLetterId_, authorizationLetterId) };


    // moreDataShrink Field Functions 
    bool hasMoreDataShrink() const { return this->moreDataShrink_ != nullptr;};
    void deleteMoreDataShrink() { this->moreDataShrink_ = nullptr;};
    inline string getMoreDataShrink() const { DARABONBA_PTR_GET_DEFAULT(moreDataShrink_, "") };
    inline CreateSmsSignShrinkRequest& setMoreDataShrink(string moreDataShrink) { DARABONBA_PTR_SET_VALUE(moreDataShrink_, moreDataShrink) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsSignShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline CreateSmsSignShrinkRequest& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateSmsSignShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsSignShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsSignShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline CreateSmsSignShrinkRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signSource Field Functions 
    bool hasSignSource() const { return this->signSource_ != nullptr;};
    void deleteSignSource() { this->signSource_ = nullptr;};
    inline int32_t getSignSource() const { DARABONBA_PTR_GET_DEFAULT(signSource_, 0) };
    inline CreateSmsSignShrinkRequest& setSignSource(int32_t signSource) { DARABONBA_PTR_SET_VALUE(signSource_, signSource) };


    // signType Field Functions 
    bool hasSignType() const { return this->signType_ != nullptr;};
    void deleteSignType() { this->signType_ = nullptr;};
    inline int32_t getSignType() const { DARABONBA_PTR_GET_DEFAULT(signType_, 0) };
    inline CreateSmsSignShrinkRequest& setSignType(int32_t signType) { DARABONBA_PTR_SET_VALUE(signType_, signType) };


    // thirdParty Field Functions 
    bool hasThirdParty() const { return this->thirdParty_ != nullptr;};
    void deleteThirdParty() { this->thirdParty_ = nullptr;};
    inline bool getThirdParty() const { DARABONBA_PTR_GET_DEFAULT(thirdParty_, false) };
    inline CreateSmsSignShrinkRequest& setThirdParty(bool thirdParty) { DARABONBA_PTR_SET_VALUE(thirdParty_, thirdParty) };


    // trademarkId Field Functions 
    bool hasTrademarkId() const { return this->trademarkId_ != nullptr;};
    void deleteTrademarkId() { this->trademarkId_ = nullptr;};
    inline int64_t getTrademarkId() const { DARABONBA_PTR_GET_DEFAULT(trademarkId_, 0L) };
    inline CreateSmsSignShrinkRequest& setTrademarkId(int64_t trademarkId) { DARABONBA_PTR_SET_VALUE(trademarkId_, trademarkId) };


  protected:
    // The APP-ICP filing entity ID.
    // > - This parameter is required when SignSource is set to 2.
    // > - You can obtain the filing entity ID by calling the [CreateSmsAppIcpRecord](~~CreateSmsAppIcpRecord~~) operation.
    shared_ptr<int64_t> appIcpRecordId_ {};
    // >Notice:  The signature source of launched apps is no longer supported.
    // The app store link. If the signature source is a launched app, that is, SignSource is set to 2, specify a link that starts with http:// or https:// and make sure the app is already launched.
    shared_ptr<string> applySceneContent_ {};
    // The ID of the power of attorney. When the signature is for third-party use, this parameter is required. Otherwise, the signature review will not pass. The unified social credit code in the power of attorney must match the unified social credit code in the qualification information bound to the signature. Otherwise, the signature creation fails.
    shared_ptr<int64_t> authorizationLetterId_ {};
    // The supplementary materials. Upload business proof files or business screenshots to help reviewers understand your business details. See [Signature application materials](~~108076#section-xup-k46-yi4~~) and upload the relevant materials.
    shared_ptr<string> moreDataShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the approved qualification.
    // 
    // > - Before applying for an SMS signature, [apply for a qualification](https://help.aliyun.com/document_detail/2539801.html).
    // > - You can view the qualification ID on the [Qualification Management](https://dysms.console.aliyun.com/domestic/text/qualification) page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> qualificationId_ {};
    // The description of the SMS signature scenario. This is one of the reference materials for signature review. The description can be up to 200 characters in length.
    // >  - You can describe the scenarios of your online service and provide links to the actual business website or marketplace download page.
    // >  - You can provide a complete SMS example that reflects your business scenario.
    // >  - You can provide the pass parameter content of variables and describe in detail the business scenario and the reason for selecting the variable property.
    // >  - If the signature involves a government or public institution, specify the landline phone number of the institution.
    // 
    // A well-documented application description improves the review efficiency for signatures and templates. Failure to follow the specifications or leaving this field empty may affect the approval of your signature.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The signature name. The signature name must comply with the [signature specifications](~~108076#section-0p8-qn8-mmy~~):
    // 
    // - The name must be 2 to 12 characters in length and cannot contain words such as "test".
    // 
    // - The name cannot contain symbols such as 【】, (), or []. Special characters such as commas, periods, and spaces are not supported.
    // 
    // > - Signature names are case-sensitive. For example, 【Aliyun通信】 and 【aliyun通信】 are treated as two different signatures.
    // > - If your verification code signature and general-purpose signature have the same name, the system uses the general-purpose signature to send SMS messages by default.
    // 
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // The signature source. Valid values:
    // 
    // -  **0**: full name or abbreviation of an enterprise or public institution. **(Recommended)**
    // -  **5**: full name or abbreviation of a trademark.
    // -  **2**: full name or abbreviation of an app. **(Not recommended)**
    // 
    // For more information about signature sources, see [Signature sources](~~108076#section-fow-bfu-wo9~~).
    // 
    // This parameter is required.
    shared_ptr<int32_t> signSource_ {};
    // The signature type. Valid values:
    // 
    // - **0**: verification code.
    // 
    // - **1**: general-purpose (default).
    // 
    // We recommend that you use the default value: **general-purpose**.
    shared_ptr<int32_t> signType_ {};
    // The signature purpose. Valid values:
    // 
    // - false: for personal use (default). The signature is the enterprise name, website, or product name verified under this account.
    // 
    // - true: for third-party use. The signature is the enterprise name, website, or product name not verified under this account.
    // >Notice: If the signature is for personal use, select a qualification ID for personal use. If the signature is for third-party use, select a qualification ID for third-party use..
    shared_ptr<bool> thirdParty_ {};
    // The trademark entity ID.
    // > - 1. This parameter is required when SignSource is set to 5.
    // > - 2. You can obtain the trademark entity ID by calling the [CreateSmsTrademark](~~CreateSmsTrademark~~) operation.
    // > - 3. Based on carrier real-name registration requirements, provide the relevant field information. Otherwise, the probability of review rejection or carrier registration failure increases significantly.
    shared_ptr<int64_t> trademarkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
