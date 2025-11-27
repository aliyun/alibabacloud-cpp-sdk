// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSAUTHORIZATIONLETTERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSAUTHORIZATIONLETTERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsAuthorizationLetterResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsAuthorizationLetterResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Authorization, authorization_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterExpDate, authorizationLetterExpDate_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterName, authorizationLetterName_);
      DARABONBA_PTR_TO_JSON(AuthorizationLetterPic, authorizationLetterPic_);
      DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_TO_JSON(ProxyAuthorization, proxyAuthorization_);
      DARABONBA_PTR_TO_JSON(SignScope, signScope_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsAuthorizationLetterResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Authorization, authorization_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterExpDate, authorizationLetterExpDate_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterId, authorizationLetterId_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterName, authorizationLetterName_);
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterPic, authorizationLetterPic_);
      DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_FROM_JSON(ProxyAuthorization, proxyAuthorization_);
      DARABONBA_PTR_FROM_JSON(SignScope, signScope_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QuerySmsAuthorizationLetterResponseBodyData() = default ;
    QuerySmsAuthorizationLetterResponseBodyData(const QuerySmsAuthorizationLetterResponseBodyData &) = default ;
    QuerySmsAuthorizationLetterResponseBodyData(QuerySmsAuthorizationLetterResponseBodyData &&) = default ;
    QuerySmsAuthorizationLetterResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsAuthorizationLetterResponseBodyData() = default ;
    QuerySmsAuthorizationLetterResponseBodyData& operator=(const QuerySmsAuthorizationLetterResponseBodyData &) = default ;
    QuerySmsAuthorizationLetterResponseBodyData& operator=(QuerySmsAuthorizationLetterResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorization_ == nullptr
        && return this->authorizationLetterExpDate_ == nullptr && return this->authorizationLetterId_ == nullptr && return this->authorizationLetterName_ == nullptr && return this->authorizationLetterPic_ == nullptr && return this->organizationCode_ == nullptr
        && return this->proxyAuthorization_ == nullptr && return this->signScope_ == nullptr && return this->state_ == nullptr && return this->status_ == nullptr; };
    // authorization Field Functions 
    bool hasAuthorization() const { return this->authorization_ != nullptr;};
    void deleteAuthorization() { this->authorization_ = nullptr;};
    inline string authorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
    inline QuerySmsAuthorizationLetterResponseBodyData& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


    // authorizationLetterExpDate Field Functions 
    bool hasAuthorizationLetterExpDate() const { return this->authorizationLetterExpDate_ != nullptr;};
    void deleteAuthorizationLetterExpDate() { this->authorizationLetterExpDate_ = nullptr;};
    inline string authorizationLetterExpDate() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterExpDate_, "") };
    inline QuerySmsAuthorizationLetterResponseBodyData& setAuthorizationLetterExpDate(string authorizationLetterExpDate) { DARABONBA_PTR_SET_VALUE(authorizationLetterExpDate_, authorizationLetterExpDate) };


    // authorizationLetterId Field Functions 
    bool hasAuthorizationLetterId() const { return this->authorizationLetterId_ != nullptr;};
    void deleteAuthorizationLetterId() { this->authorizationLetterId_ = nullptr;};
    inline int64_t authorizationLetterId() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterId_, 0L) };
    inline QuerySmsAuthorizationLetterResponseBodyData& setAuthorizationLetterId(int64_t authorizationLetterId) { DARABONBA_PTR_SET_VALUE(authorizationLetterId_, authorizationLetterId) };


    // authorizationLetterName Field Functions 
    bool hasAuthorizationLetterName() const { return this->authorizationLetterName_ != nullptr;};
    void deleteAuthorizationLetterName() { this->authorizationLetterName_ = nullptr;};
    inline string authorizationLetterName() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterName_, "") };
    inline QuerySmsAuthorizationLetterResponseBodyData& setAuthorizationLetterName(string authorizationLetterName) { DARABONBA_PTR_SET_VALUE(authorizationLetterName_, authorizationLetterName) };


    // authorizationLetterPic Field Functions 
    bool hasAuthorizationLetterPic() const { return this->authorizationLetterPic_ != nullptr;};
    void deleteAuthorizationLetterPic() { this->authorizationLetterPic_ = nullptr;};
    inline string authorizationLetterPic() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterPic_, "") };
    inline QuerySmsAuthorizationLetterResponseBodyData& setAuthorizationLetterPic(string authorizationLetterPic) { DARABONBA_PTR_SET_VALUE(authorizationLetterPic_, authorizationLetterPic) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string organizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline QuerySmsAuthorizationLetterResponseBodyData& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // proxyAuthorization Field Functions 
    bool hasProxyAuthorization() const { return this->proxyAuthorization_ != nullptr;};
    void deleteProxyAuthorization() { this->proxyAuthorization_ = nullptr;};
    inline string proxyAuthorization() const { DARABONBA_PTR_GET_DEFAULT(proxyAuthorization_, "") };
    inline QuerySmsAuthorizationLetterResponseBodyData& setProxyAuthorization(string proxyAuthorization) { DARABONBA_PTR_SET_VALUE(proxyAuthorization_, proxyAuthorization) };


    // signScope Field Functions 
    bool hasSignScope() const { return this->signScope_ != nullptr;};
    void deleteSignScope() { this->signScope_ = nullptr;};
    inline string signScope() const { DARABONBA_PTR_GET_DEFAULT(signScope_, "") };
    inline QuerySmsAuthorizationLetterResponseBodyData& setSignScope(string signScope) { DARABONBA_PTR_SET_VALUE(signScope_, signScope) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QuerySmsAuthorizationLetterResponseBodyData& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySmsAuthorizationLetterResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // 委托授权方
    std::shared_ptr<string> authorization_ = nullptr;
    // 委托授权书有效期
    std::shared_ptr<string> authorizationLetterExpDate_ = nullptr;
    // 委托授权书id
    std::shared_ptr<int64_t> authorizationLetterId_ = nullptr;
    // 委托授权书命名
    std::shared_ptr<string> authorizationLetterName_ = nullptr;
    // 委托授权书图片地址
    std::shared_ptr<string> authorizationLetterPic_ = nullptr;
    // 授权方统一社会信用代码
    std::shared_ptr<string> organizationCode_ = nullptr;
    // 被委托授权方
    std::shared_ptr<string> proxyAuthorization_ = nullptr;
    // 委托授权签名范围
    std::shared_ptr<string> signScope_ = nullptr;
    // 委托授权书审核状态（初始化INT/审核通过PASSED）
    std::shared_ptr<string> state_ = nullptr;
    // 委托授权书可用状态（可用VALID/不可用INVALID）
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
