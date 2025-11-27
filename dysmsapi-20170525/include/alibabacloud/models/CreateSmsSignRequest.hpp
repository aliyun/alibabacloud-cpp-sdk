// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSSIGNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSSIGNREQUEST_HPP_
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
  class CreateSmsSignRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsSignRequest& obj) { 
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
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsSignRequest& obj) { 
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
    };
    CreateSmsSignRequest() = default ;
    CreateSmsSignRequest(const CreateSmsSignRequest &) = default ;
    CreateSmsSignRequest(CreateSmsSignRequest &&) = default ;
    CreateSmsSignRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsSignRequest() = default ;
    CreateSmsSignRequest& operator=(const CreateSmsSignRequest &) = default ;
    CreateSmsSignRequest& operator=(CreateSmsSignRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applySceneContent_ == nullptr
        && return this->authorizationLetterId_ == nullptr && return this->moreData_ == nullptr && return this->ownerId_ == nullptr && return this->qualificationId_ == nullptr && return this->remark_ == nullptr
        && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->signName_ == nullptr && return this->signSource_ == nullptr && return this->signType_ == nullptr
        && return this->thirdParty_ == nullptr; };
    // applySceneContent Field Functions 
    bool hasApplySceneContent() const { return this->applySceneContent_ != nullptr;};
    void deleteApplySceneContent() { this->applySceneContent_ = nullptr;};
    inline string applySceneContent() const { DARABONBA_PTR_GET_DEFAULT(applySceneContent_, "") };
    inline CreateSmsSignRequest& setApplySceneContent(string applySceneContent) { DARABONBA_PTR_SET_VALUE(applySceneContent_, applySceneContent) };


    // authorizationLetterId Field Functions 
    bool hasAuthorizationLetterId() const { return this->authorizationLetterId_ != nullptr;};
    void deleteAuthorizationLetterId() { this->authorizationLetterId_ = nullptr;};
    inline int64_t authorizationLetterId() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterId_, 0L) };
    inline CreateSmsSignRequest& setAuthorizationLetterId(int64_t authorizationLetterId) { DARABONBA_PTR_SET_VALUE(authorizationLetterId_, authorizationLetterId) };


    // moreData Field Functions 
    bool hasMoreData() const { return this->moreData_ != nullptr;};
    void deleteMoreData() { this->moreData_ = nullptr;};
    inline const vector<string> & moreData() const { DARABONBA_PTR_GET_CONST(moreData_, vector<string>) };
    inline vector<string> moreData() { DARABONBA_PTR_GET(moreData_, vector<string>) };
    inline CreateSmsSignRequest& setMoreData(const vector<string> & moreData) { DARABONBA_PTR_SET_VALUE(moreData_, moreData) };
    inline CreateSmsSignRequest& setMoreData(vector<string> && moreData) { DARABONBA_PTR_SET_RVALUE(moreData_, moreData) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsSignRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qualificationId Field Functions 
    bool hasQualificationId() const { return this->qualificationId_ != nullptr;};
    void deleteQualificationId() { this->qualificationId_ = nullptr;};
    inline int64_t qualificationId() const { DARABONBA_PTR_GET_DEFAULT(qualificationId_, 0L) };
    inline CreateSmsSignRequest& setQualificationId(int64_t qualificationId) { DARABONBA_PTR_SET_VALUE(qualificationId_, qualificationId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateSmsSignRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsSignRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsSignRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline CreateSmsSignRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // signSource Field Functions 
    bool hasSignSource() const { return this->signSource_ != nullptr;};
    void deleteSignSource() { this->signSource_ = nullptr;};
    inline int32_t signSource() const { DARABONBA_PTR_GET_DEFAULT(signSource_, 0) };
    inline CreateSmsSignRequest& setSignSource(int32_t signSource) { DARABONBA_PTR_SET_VALUE(signSource_, signSource) };


    // signType Field Functions 
    bool hasSignType() const { return this->signType_ != nullptr;};
    void deleteSignType() { this->signType_ = nullptr;};
    inline int32_t signType() const { DARABONBA_PTR_GET_DEFAULT(signType_, 0) };
    inline CreateSmsSignRequest& setSignType(int32_t signType) { DARABONBA_PTR_SET_VALUE(signType_, signType) };


    // thirdParty Field Functions 
    bool hasThirdParty() const { return this->thirdParty_ != nullptr;};
    void deleteThirdParty() { this->thirdParty_ = nullptr;};
    inline bool thirdParty() const { DARABONBA_PTR_GET_DEFAULT(thirdParty_, false) };
    inline CreateSmsSignRequest& setThirdParty(bool thirdParty) { DARABONBA_PTR_SET_VALUE(thirdParty_, thirdParty) };


  protected:
    // Application scenarios, instructions as follows:
    // - For registered websites, enter the domain name with HTTP or HTTPS that has been registered with the MIIT.
    // 
    // - For launched apps, provide a display link from the app store with HTTP or HTTPS, ensuring the app is online.
    // 
    // - For public accounts or mini-programs, input the full name, ensuring they are online.
    // 
    // - For e-commerce platform store names, applicable only to enterprise users, provide a display link with HTTP or HTTPS for the store.
    std::shared_ptr<string> applySceneContent_ = nullptr;
    std::shared_ptr<int64_t> authorizationLetterId_ = nullptr;
    // Additional information to supplement uploaded business proof documents or screenshots, which helps reviewers understand your business details.
    // 
    // This parameter is optional; please fill it out based on your actual needs.
    std::shared_ptr<vector<string>> moreData_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Approved or under-review qualification ID.
    // 
    // > - Before applying for an SMS signature, please first [Apply for Qualification](https://help.aliyun.com/zh/sms/user-guide/new-qualification?spm=a2c4g.11186623.0.0.718d187bbkpMRK).
    // > - You can view the qualification ID on the [Qualification Management](https://dysms.console.aliyun.com/domestic/text/qualification) page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> qualificationId_ = nullptr;
    // Explanation of the SMS signature scenario, with a maximum length of 200 characters.
    // 
    // > The scenario explanation is one of the reference materials for signature review. Please provide a detailed description of the usage scenarios for your live services, along with links to verify these services such as website URLs with MIIT备案, app store display links, full names of public accounts or mini-programs, etc. For login scenarios, test account credentials are also required. A comprehensive application explanation enhances the efficiency of signature and template reviews. Refer to the **Application Scenario** column in the [Signature Source](https://help.aliyun.com/zh/sms/user-guide/signature-specifications-1?spm=a2c4g.11186623.0.i2#section-xup-k46-yi4) table for filling in SMS scenarios.
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Signature name. Please adhere to the [Signature Specifications](https://help.aliyun.com/zh/sms/user-guide/signature-specifications-1?spm=a2c4g.11186623.0.0.4f9710fder2gR7#section-0p8-qn8-mmy).
    // 
    // > - Signature names are case-insensitive; e.g., 【Aliyun Communication】 and 【aliyun communication】 are considered identical.
    // > - If your verification code signature and general signature names are the same, the system defaults to using the general signature for sending SMS messages.
    // 
    // This parameter is required.
    std::shared_ptr<string> signName_ = nullptr;
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
    std::shared_ptr<int32_t> signSource_ = nullptr;
    // Signature type. Values:
    // 
    // - **0**: Verification Code
    // 
    // - **1**: General (Default)
    // 
    // > It is recommended to use the default value: **General**.
    std::shared_ptr<int32_t> signType_ = nullptr;
    // Choose whether the applied signature is for self-use or third-party use.
    // 
    // - false: Self-use (default)
    // 
    // - true: Third-party use
    // >Notice: Please select self-use qualification ID when the signature is for self-use; choose third-party use qualification ID when it\\"s for third-party use.
    std::shared_ptr<bool> thirdParty_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
