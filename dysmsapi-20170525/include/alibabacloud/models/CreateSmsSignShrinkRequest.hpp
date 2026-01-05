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
    shared_ptr<int64_t> appIcpRecordId_ {};
    // Application scenarios, instructions as follows:
    // - For registered websites, enter the domain name with HTTP or HTTPS that has been registered with the MIIT.
    // 
    // - For launched apps, provide a display link from the app store with HTTP or HTTPS, ensuring the app is online.
    // 
    // - For public accounts or mini-programs, input the full name, ensuring they are online.
    // 
    // - For e-commerce platform store names, applicable only to enterprise users, provide a display link with HTTP or HTTPS for the store.
    shared_ptr<string> applySceneContent_ {};
    shared_ptr<int64_t> authorizationLetterId_ {};
    // Additional information to supplement uploaded business proof documents or screenshots, which helps reviewers understand your business details.
    // 
    // This parameter is optional; please fill it out based on your actual needs.
    shared_ptr<string> moreDataShrink_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Approved or under-review qualification ID.
    // 
    // > - Before applying for an SMS signature, please first [Apply for Qualification](https://help.aliyun.com/zh/sms/user-guide/new-qualification?spm=a2c4g.11186623.0.0.718d187bbkpMRK).
    // > - You can view the qualification ID on the [Qualification Management](https://dysms.console.aliyun.com/domestic/text/qualification) page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> qualificationId_ {};
    // Explanation of the SMS signature scenario, with a maximum length of 200 characters.
    // 
    // > The scenario explanation is one of the reference materials for signature review. Please provide a detailed description of the usage scenarios for your live services, along with links to verify these services such as website URLs with MIIT备案, app store display links, full names of public accounts or mini-programs, etc. For login scenarios, test account credentials are also required. A comprehensive application explanation enhances the efficiency of signature and template reviews. Refer to the **Application Scenario** column in the [Signature Source](https://help.aliyun.com/zh/sms/user-guide/signature-specifications-1?spm=a2c4g.11186623.0.i2#section-xup-k46-yi4) table for filling in SMS scenarios.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Signature name. Please adhere to the [Signature Specifications](https://help.aliyun.com/zh/sms/user-guide/signature-specifications-1?spm=a2c4g.11186623.0.0.4f9710fder2gR7#section-0p8-qn8-mmy).
    // 
    // > - Signature names are case-insensitive; e.g., 【Aliyun Communication】 and 【aliyun communication】 are considered identical.
    // > - If your verification code signature and general signature names are the same, the system defaults to using the general signature for sending SMS messages.
    // 
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // Signature source. Values:
    // 
    // - **0**: Full name or abbreviation of an enterprise or institution.
    // - **1**: Full name or abbreviation of a MIIT-registered website.
    // - **2**: Full name or abbreviation of an App.
    // - **3**: Full name or abbreviation of an official account or mini-program.
    // - **4**: Full name or abbreviation of an e-commerce platform store.
    // - **5**: Full name or abbreviation of a trademark.
    // 
    // For detailed information on signature sources, refer to [Signature Source](https://help.aliyun.com/zh/sms/user-guide/signature-specifications-1?spm=a2c4g.11186623.0.0.4f9710fder2gR7#section-xup-k46-yi4).
    // 
    // > This interface does not support applying for signatures with sources as **Test or Learning** and **Trial Use**. If you need to apply for signatures with these sources, please go to the [SMS Service Console](https://dysms.console.aliyun.com/domestic/text/sign/add/qualification).
    // 
    // This parameter is required.
    shared_ptr<int32_t> signSource_ {};
    // Signature type. Values:
    // 
    // - **0**: Verification Code
    // 
    // - **1**: General (Default)
    // 
    // > It is recommended to use the default value: **General**.
    shared_ptr<int32_t> signType_ {};
    // Choose whether the applied signature is for self-use or third-party use.
    // 
    // - false: Self-use (default)
    // 
    // - true: Third-party use
    // >Notice: Please select self-use qualification ID when the signature is for self-use; choose third-party use qualification ID when it\\"s for third-party use.
    shared_ptr<bool> thirdParty_ {};
    shared_ptr<int64_t> trademarkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
