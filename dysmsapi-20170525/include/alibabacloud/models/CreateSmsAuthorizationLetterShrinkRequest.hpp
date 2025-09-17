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
    virtual bool empty() const override { this->authorization_ != nullptr
        && this->authorizationLetterExpDate_ != nullptr && this->authorizationLetterName_ != nullptr && this->authorizationLetterPic_ != nullptr && this->organizationCode_ != nullptr && this->ownerId_ != nullptr
        && this->proxyAuthorization_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->signListShrink_ != nullptr; };
    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string authorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


    // authorizationLetterExpDate Field Functions 
    bool hasAuthorizationLetterExpDate() const { return this->authorizationLetterExpDate_ != nullptr;};
    void deleteAuthorizationLetterExpDate() { this->authorizationLetterExpDate_ = nullptr;};
    inline string authorizationLetterExpDate() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterExpDate_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setAuthorizationLetterExpDate(string authorizationLetterExpDate) { DARABONBA_PTR_SET_VALUE(authorizationLetterExpDate_, authorizationLetterExpDate) };


    // authorizationLetterName Field Functions 
    bool hasAuthorizationLetterName() const { return this->authorizationLetterName_ != nullptr;};
    void deleteAuthorizationLetterName() { this->authorizationLetterName_ = nullptr;};
    inline string authorizationLetterName() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterName_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setAuthorizationLetterName(string authorizationLetterName) { DARABONBA_PTR_SET_VALUE(authorizationLetterName_, authorizationLetterName) };


    // authorizationLetterPic Field Functions 
    bool hasAuthorizationLetterPic() const { return this->authorizationLetterPic_ != nullptr;};
    void deleteAuthorizationLetterPic() { this->authorizationLetterPic_ = nullptr;};
    inline string authorizationLetterPic() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterPic_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setAuthorizationLetterPic(string authorizationLetterPic) { DARABONBA_PTR_SET_VALUE(authorizationLetterPic_, authorizationLetterPic) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string organizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateSmsAuthorizationLetterShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // proxyAuthorization Field Functions 
    bool hasProxyAuthorization() const { return this->proxyAuthorization_ != nullptr;};
    void deleteProxyAuthorization() { this->proxyAuthorization_ = nullptr;};
    inline string proxyAuthorization() const { DARABONBA_PTR_GET_DEFAULT(proxyAuthorization_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setProxyAuthorization(string proxyAuthorization) { DARABONBA_PTR_SET_VALUE(proxyAuthorization_, proxyAuthorization) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateSmsAuthorizationLetterShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signListShrink Field Functions 
    bool hasSignListShrink() const { return this->signListShrink_ != nullptr;};
    void deleteSignListShrink() { this->signListShrink_ = nullptr;};
    inline string signListShrink() const { DARABONBA_PTR_GET_DEFAULT(signListShrink_, "") };
    inline CreateSmsAuthorizationLetterShrinkRequest& setSignListShrink(string signListShrink) { DARABONBA_PTR_SET_VALUE(signListShrink_, signListShrink) };


  protected:
    // 授权方，授权方命名长度不超过1000个字符，暂不支持包含除中点（·）、空格、中文括号【】、英文括号()外的任何符号或纯数字输入
    // 
    // This parameter is required.
    std::shared_ptr<string> authorization_ = nullptr;
    // 委托授权书有效期
    // 
    // This parameter is required.
    std::shared_ptr<string> authorizationLetterExpDate_ = nullptr;
    // 委托授权书命名非空，不超过100个字符，支持中文、英文或与数字组合进行命名，暂不支持任何符号或纯数字输入
    // 
    // This parameter is required.
    std::shared_ptr<string> authorizationLetterName_ = nullptr;
    // 上传oss的委托授权书图片标识
    // 
    // This parameter is required.
    std::shared_ptr<string> authorizationLetterPic_ = nullptr;
    // 授权方社会统一信用代码，长度不超过150个字符
    // 
    // This parameter is required.
    std::shared_ptr<string> organizationCode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // 被授权方，被授权方命名长度不超过1000个字符，暂不支持包含除中点（·）、空格、中文括号【】、英文括号()外的任何符号或纯数字输入
    // 
    // This parameter is required.
    std::shared_ptr<string> proxyAuthorization_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // 委托授权签名列表，签名数量限制100个以内
    // 
    // This parameter is required.
    std::shared_ptr<string> signListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
