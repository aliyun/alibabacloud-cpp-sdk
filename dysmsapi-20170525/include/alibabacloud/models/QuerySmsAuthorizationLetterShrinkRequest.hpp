// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSAUTHORIZATIONLETTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSAUTHORIZATIONLETTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsAuthorizationLetterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsAuthorizationLetterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationLetterIdList, authorizationLetterIdListShrink_);
      DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsAuthorizationLetterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterIdList, authorizationLetterIdListShrink_);
      DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QuerySmsAuthorizationLetterShrinkRequest() = default ;
    QuerySmsAuthorizationLetterShrinkRequest(const QuerySmsAuthorizationLetterShrinkRequest &) = default ;
    QuerySmsAuthorizationLetterShrinkRequest(QuerySmsAuthorizationLetterShrinkRequest &&) = default ;
    QuerySmsAuthorizationLetterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsAuthorizationLetterShrinkRequest() = default ;
    QuerySmsAuthorizationLetterShrinkRequest& operator=(const QuerySmsAuthorizationLetterShrinkRequest &) = default ;
    QuerySmsAuthorizationLetterShrinkRequest& operator=(QuerySmsAuthorizationLetterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationLetterIdListShrink_ != nullptr
        && this->organizationCode_ != nullptr && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->signName_ != nullptr
        && this->state_ != nullptr && this->status_ != nullptr; };
    // authorizationLetterIdListShrink Field Functions 
    bool hasAuthorizationLetterIdListShrink() const { return this->authorizationLetterIdListShrink_ != nullptr;};
    void deleteAuthorizationLetterIdListShrink() { this->authorizationLetterIdListShrink_ = nullptr;};
    inline string authorizationLetterIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterIdListShrink_, "") };
    inline QuerySmsAuthorizationLetterShrinkRequest& setAuthorizationLetterIdListShrink(string authorizationLetterIdListShrink) { DARABONBA_PTR_SET_VALUE(authorizationLetterIdListShrink_, authorizationLetterIdListShrink) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string organizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline QuerySmsAuthorizationLetterShrinkRequest& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySmsAuthorizationLetterShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySmsAuthorizationLetterShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySmsAuthorizationLetterShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string signName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline QuerySmsAuthorizationLetterShrinkRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QuerySmsAuthorizationLetterShrinkRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySmsAuthorizationLetterShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 委托授权书id列表
    std::shared_ptr<string> authorizationLetterIdListShrink_ = nullptr;
    // 授权方社会统一信用代码
    std::shared_ptr<string> organizationCode_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // 签名名称（支持命中签名范围查询）
    std::shared_ptr<string> signName_ = nullptr;
    // 授权书审核状态，INT:审核中，PASSED:审核通过
    std::shared_ptr<string> state_ = nullptr;
    // 授权书可用状态，VALID可用，INVALID不可用
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
