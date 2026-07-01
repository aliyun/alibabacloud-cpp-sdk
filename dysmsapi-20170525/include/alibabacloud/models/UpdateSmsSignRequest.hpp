// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESMSSIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESMSSIGNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class UpdateSmsSignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSmsSignRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppIcpRecordId, appIcpRecordId_);
      DARABONBA_PTR_TO_JSON(ApplySceneContent, applySceneContent_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_TO_JSON(MoreData, moreData_);
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
    friend void from_json(const Darabonba::Json& j, UpdateSmsSignRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppIcpRecordId, appIcpRecordId_);
      DARABONBA_PTR_FROM_JSON(ApplySceneContent, applySceneContent_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_FROM_JSON(MoreData, moreData_);
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
    UpdateSmsSignRequest() = default ;
    UpdateSmsSignRequest(const UpdateSmsSignRequest &) = default ;
    UpdateSmsSignRequest(UpdateSmsSignRequest &&) = default ;
    UpdateSmsSignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSmsSignRequest() = default ;
    UpdateSmsSignRequest& operator=(const UpdateSmsSignRequest &) = default ;
    UpdateSmsSignRequest& operator=(UpdateSmsSignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appIcpRecordId_ == nullptr
        && this->applySceneContent_ == nullptr && this->authorizationLetterId_ == nullptr && this->moreData_ == nullptr && this->ownerId_ == nullptr && this->qualificationId_ == nullptr
        && this->remark_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->signName_ == nullptr && this->signSource_ == nullptr
        && this->signType_ == nullptr && this->thirdParty_ == nullptr && this->trademarkId_ == nullptr; };
    // appIcpRecordId Field Functions 
    bool hasAppIcpRecordId() const { return this->appIcpRecordId_ != nullptr;};
    void deleteAppIcpRecordId() { this->appIcpRecordId_ = nullptr;};
    inline int64_t getAppIcpRecordId() const { DARABONBA_PTR_GET_DEFAULT(appIcpRecordId_, 0L) };
    inline UpdateSmsSignRequest& setAppIcpRecordId(int64_t appIcpRecordId) { DARABONBA_PTR_SET_VALUE(appIcpRecordId_, appIcpRecordId) };


    // applySceneContent Field Functions 
    bool hasApplySceneContent() const { return this->applySceneContent_ != nullptr;};
    void deleteApplySceneContent() { this->applySceneContent_ = nullptr;};
    inline string getApplySceneContent() const { DARABONBA_PTR_GET_DEFAULT(applySceneContent_, "") };
    inline UpdateSmsSignRequest& setApplySceneContent(string applySceneContent) { DARABONBA_PTR_SET_VALUE(applySceneContent_, applySceneContent) };


    // authorizationLetterId Field Functions 
    bool hasAuthorizationLetterId() const { return this->authorizationLetterId_ != nullptr;};
    void deleteAuthorizationLetterId() { this->authorizationLetterId_ = nullptr;};
    inline int64_t getAuthorizationLetterId() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterId_, 0L) };
    inline UpdateSmsSignRequest& setAuthorizationLetterId(int64_t authorizationLetterId) { DARABONBA_PTR_SET_VALUE(authorizationLetterId_, authorizationLetterId) };


    // moreData Field Functions 
    bool hasMoreData() const { return this->moreData_ != nullptr;};
    void deleteMoreData() { this->moreData_ = nullptr;};
    inline const vector<string> & getMoreData() const { DARABONBA_PTR_GET_CONST(moreData_, vector<string>) };
    inline vector<string> getMoreData() { DARABONBA_PTR_GET(moreData_, vector<string>) };
    inline UpdateSmsSignRequest& setMoreData(const vector<string> & moreData) { DARABONBA_PTR_SET_VALUE(moreData_, moreData) };
    inline UpdateSmsSignRequest& setMoreData(vector<string> && moreData) { DARABONBA_PTR_SET_RVALUE(moreData_, moreData) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateSmsSignRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t getQualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline UpdateSmsSignRequest& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateSmsSignRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateSmsSignRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateSmsSignRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline UpdateSmsSignRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signSource Field Functions 
    bool hasSignSource() const { return this->signSource_ != nullptr;};
    void deleteSignSource() { this->signSource_ = nullptr;};
    inline int32_t getSignSource() const { DARABONBA_PTR_GET_DEFAULT(signSource_, 0) };
    inline UpdateSmsSignRequest& setSignSource(int32_t signSource) { DARABONBA_PTR_SET_VALUE(signSource_, signSource) };


    // signType Field Functions 
    bool hasSignType() const { return this->signType_ != nullptr;};
    void deleteSignType() { this->signType_ = nullptr;};
    inline int32_t getSignType() const { DARABONBA_PTR_GET_DEFAULT(signType_, 0) };
    inline UpdateSmsSignRequest& setSignType(int32_t signType) { DARABONBA_PTR_SET_VALUE(signType_, signType) };


    // thirdParty Field Functions 
    bool hasThirdParty() const { return this->thirdParty_ != nullptr;};
    void deleteThirdParty() { this->thirdParty_ = nullptr;};
    inline bool getThirdParty() const { DARABONBA_PTR_GET_DEFAULT(thirdParty_, false) };
    inline UpdateSmsSignRequest& setThirdParty(bool thirdParty) { DARABONBA_PTR_SET_VALUE(thirdParty_, thirdParty) };


    // trademarkId Field Functions 
    bool hasTrademarkId() const { return this->trademarkId_ != nullptr;};
    void deleteTrademarkId() { this->trademarkId_ = nullptr;};
    inline int64_t getTrademarkId() const { DARABONBA_PTR_GET_DEFAULT(trademarkId_, 0L) };
    inline UpdateSmsSignRequest& setTrademarkId(int64_t trademarkId) { DARABONBA_PTR_SET_VALUE(trademarkId_, trademarkId) };


  protected:
    // The ID of the app\\"s ICP filing entity.
    // 
    // > - This parameter is required if `SignSource` is set to 2.
    // >
    // > - You can obtain the filing entity ID by calling the [Create ICP Filing Entity](~~CreateSmsAppIcpRecord~~) operation.
    shared_ptr<int64_t> appIcpRecordId_ {};
    // The app store link. This parameter is required if the signature source (`SignSource`) is an app (the value is 2). The link must start with `http://` or `https://`, and the app must be published in the app store.
    shared_ptr<string> applySceneContent_ {};
    // The authorization letter ID. This parameter is required if the signature is for third-party use (`ThirdParty` is set to `true`). The Unified Social Credit Code on the authorization letter must match the code in the selected qualification\\"s information.
    shared_ptr<int64_t> authorizationLetterId_ {};
    // Additional supporting materials. You can upload supporting business documents or business screenshots to help with the review. For details on what to upload, see [Signature application materials](~~108076#section-xup-k46-yi4~~).
    shared_ptr<vector<string>> moreData_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the approved qualification.
    // 
    // > - You must [apply for a qualification](https://help.aliyun.com/zh/sms/user-guide/new-qualification?spm=a2c4g.11186623.0.0.718d187bbkpMRK) before applying for an SMS signature.
    // >
    // > - You can find the qualification ID on the [qualification management](https://dysms.console.aliyun.com/domestic/text/qualification) page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> qualificationId_ {};
    // A description of the SMS signature\\"s use case. This information is used during the review and must be 200 characters or less.
    // 
    // > - Describe the use case for your live service. Include relevant links, such as a website link or an app store link.
    // >
    // > - Provide a complete example of an SMS message that reflects your use case.
    // >
    // > - Provide the values for any variables. Describe the use case in detail and explain why the variables are necessary.
    // >
    // > - If the signature involves a government agency or public institution, provide its official landline number.
    // 
    // Providing complete and accurate information accelerates the review process. If you do not provide the required information, your signature application may be rejected.
    shared_ptr<string> remark_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The name of the rejected SMS signature. You can find rejected SMS signatures on the [Domestic Messages > Signature Management](https://dysms.console.aliyun.com/domestic/text/sign) page in the console, or by calling the [QuerySmsSignList](~~QuerySmsSignList~~) operation.
    // 
    // This parameter is required.
    shared_ptr<string> signName_ {};
    // The signature source. Valid values:
    // 
    // - **0**: The full or abbreviated name of an enterprise or public institution. **(Recommended)**
    // 
    // - **5**: The full or abbreviated trademark name.
    // 
    // - **2**: The full or abbreviated name of an app. **(Not recommended)**
    // 
    // For more information, see [signature source](~~108076#section-fow-bfu-wo9~~).
    // 
    // This parameter is required.
    shared_ptr<int32_t> signSource_ {};
    // The signature type. Valid values:
    // 
    // - **0**: verification code.
    // 
    // - **1**: general (default).
    // 
    // We recommend that you use the default value, **general**.
    shared_ptr<int32_t> signType_ {};
    // The signature purpose. Valid values:
    // 
    // - false: for own use (default). The signature is for a business, website, or product owned by your account\\"s verified entity.
    // 
    // - true: for third-party use. The signature is for a business, website, or product not owned by your account\\"s verified entity.
    //   >Notice: Ensure the selected qualification ID matches the signature purpose (for own use or for third-party use).
    shared_ptr<bool> thirdParty_ {};
    // The trademark entity ID.
    // 
    // > - This parameter is required if `SignSource` is set to 5.
    // >
    // > - You can obtain the trademark entity ID by calling the [Create Trademark Entity](~~CreateSmsTrademark~~) operation.
    shared_ptr<int64_t> trademarkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
