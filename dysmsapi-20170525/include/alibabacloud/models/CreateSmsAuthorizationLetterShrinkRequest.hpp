// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESMSAUTHORIZATIONLETTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESMSAUTHORIZATIONLETTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class CreateSmsAuthorizationLetterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSmsAuthorizationLetterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Authorization, authorization_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterExpDate, authorizationLetterExpDate_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterName, authorizationLetterName_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterPic, authorizationLetterPic_);
      DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProxyAuthorization, proxyAuthorization_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignList, signListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSmsAuthorizationLetterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorization, authorization_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterExpDate, authorizationLetterExpDate_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterName, authorizationLetterName_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterPic, authorizationLetterPic_);
      DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProxyAuthorization, proxyAuthorization_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignList, signListShrink_);
    };
    CreateSmsAuthorizationLetterShrinkRequest() = default ;
    CreateSmsAuthorizationLetterShrinkRequest(const CreateSmsAuthorizationLetterShrinkRequest &) = default ;
    CreateSmsAuthorizationLetterShrinkRequest(CreateSmsAuthorizationLetterShrinkRequest &&) = default ;
    CreateSmsAuthorizationLetterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSmsAuthorizationLetterShrinkRequest() = default ;
    CreateSmsAuthorizationLetterShrinkRequest& operator=(const CreateSmsAuthorizationLetterShrinkRequest &) = default ;
    CreateSmsAuthorizationLetterShrinkRequest& operator=(CreateSmsAuthorizationLetterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorization_ == nullptr
        && this->authorizationLetterExpDate_ == nullptr && this->authorizationLetterName_ == nullptr && this->authorizationLetterPic_ == nullptr && this->organizationCode_ == nullptr && this->ownerId_ == nullptr
        && this->proxyAuthorization_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->signListShrink_ == nullptr; };
    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string getAuthorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


    // authorizationLetterExpDate Field Functions 
    bool hasAuthorizationLetterExpDate() const { return this->authorizationLetterExpDate_ != nullptr;};
    void deleteAuthorizationLetterExpDate() { this->authorizationLetterExpDate_ = nullptr;};
    inline string getAuthorizationLetterExpDate() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterExpDate_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setAuthorizationLetterExpDate(string authorizationLetterExpDate) { DARABONBA_PTR_SET_VALUE(authorizationLetterExpDate_, authorizationLetterExpDate) };


    // authorizationLetterName Field Functions 
    bool hasAuthorizationLetterName() const { return this->authorizationLetterName_ != nullptr;};
    void deleteAuthorizationLetterName() { this->authorizationLetterName_ = nullptr;};
    inline string getAuthorizationLetterName() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterName_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setAuthorizationLetterName(string authorizationLetterName) { DARABONBA_PTR_SET_VALUE(authorizationLetterName_, authorizationLetterName) };


    // authorizationLetterPic Field Functions 
    bool hasAuthorizationLetterPic() const { return this->authorizationLetterPic_ != nullptr;};
    void deleteAuthorizationLetterPic() { this->authorizationLetterPic_ = nullptr;};
    inline string getAuthorizationLetterPic() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterPic_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setAuthorizationLetterPic(string authorizationLetterPic) { DARABONBA_PTR_SET_VALUE(authorizationLetterPic_, authorizationLetterPic) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string getOrganizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsAuthorizationLetterShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // proxyAuthorization Field Functions 
    bool hasProxyAuthorization() const { return this->proxyAuthorization_ != nullptr;};
    void deleteProxyAuthorization() { this->proxyAuthorization_ = nullptr;};
    inline string getProxyAuthorization() const { DARABONBA_PTR_GET_DEFAULT(proxyAuthorization_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setProxyAuthorization(string proxyAuthorization) { DARABONBA_PTR_SET_VALUE(proxyAuthorization_, proxyAuthorization) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsAuthorizationLetterShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signListShrink Field Functions 
    bool hasSignListShrink() const { return this->signListShrink_ != nullptr;};
    void deleteSignListShrink() { this->signListShrink_ = nullptr;};
    inline string getSignListShrink() const { DARABONBA_PTR_GET_DEFAULT(signListShrink_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setSignListShrink(string signListShrink) { DARABONBA_PTR_SET_VALUE(signListShrink_, signListShrink) };


  protected:
    // The authorizing party, that is, the owner of the signature. Only the middle dot `·`, Chinese `【】（）`, English `()`, and spaces are supported. Other symbols or purely numeric input are not allowed. The length cannot exceed 150 characters.
    // 
    // This parameter is required.
    shared_ptr<string> authorization_ {};
    // The validity period of the authorization letter. Format: `YYYY-MM-DD~YYYY-MM-DD`.
    // 
    // > The recommended validity period is 1 to 3 years. Set a reasonable time period and avoid making the validity period too long or too short.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationLetterExpDate_ {};
    // The name of the authorization letter. The name cannot be the same as any of your other authorization letters. Only Chinese characters, English characters, or a combination with numbers are supported. Symbols or purely numeric input are not allowed. The length cannot exceed 100 characters.
    // 
    // This parameter is required.
    shared_ptr<string> authorizationLetterName_ {};
    // The fileKey of the authorization letter.
    // 
    // 1. The authorization letter file uploaded to OSS. Download the [Authorization Letter Template](https://help-static-aliyun-doc.aliyuncs.com/file-manage-files/zh-CN/20250414/bvpcmo/%E6%8E%88%E6%9D%83%E5%A7%94%E6%89%98%E4%B9%A6%E6%A8%A1%E7%89%88.doc), then fill it out and stamp it according to the [specifications](https://help.aliyun.com/document_detail/56741.html) before uploading. File upload requirements:
    // - The name of the file to be uploaded cannot contain Chinese characters or special characters.
    // - Only images in JPG, PNG, GIF, or JPEG format are supported, and the image must not exceed 5 MB.
    // 
    // 2. To obtain the fileKey, see [Upload files through OSS](https://help.aliyun.com/document_detail/2833114.html).
    // 
    // This parameter is required.
    shared_ptr<string> authorizationLetterPic_ {};
    // The unified social credit code of the authorizing party. The length cannot exceed 150 characters. The credit code must be consistent with the unified social credit code field in the qualification information bound to the signature. Otherwise, the signature creation will fail.
    // 
    // This parameter is required.
    shared_ptr<string> organizationCode_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The authorized party, that is, the signature applicant. Only the middle dot `·`, Chinese `【】（）`, English `()`, and spaces are supported. Other symbols or purely numeric input are not allowed. The length cannot exceed 150 characters.
    // 
    // This parameter is required.
    shared_ptr<string> proxyAuthorization_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The list of authorized signatures. The number of signatures cannot exceed 100.
    // 
    // > We recommend that you authorize all signatures that may be used at once in the authorization letter. This prevents subsequent signature applications from falling outside the scope of the authorization letter, which would cause review failure and require you to supplement the authorization letter.
    // 
    // This parameter is required.
    shared_ptr<string> signListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
