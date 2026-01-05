// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSAUTHORIZATIONLETTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSAUTHORIZATIONLETTERRESPONSEBODY_HPP_
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
  class QuerySmsAuthorizationLetterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsAuthorizationLetterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsAuthorizationLetterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySmsAuthorizationLetterResponseBody() = default ;
    QuerySmsAuthorizationLetterResponseBody(const QuerySmsAuthorizationLetterResponseBody &) = default ;
    QuerySmsAuthorizationLetterResponseBody(QuerySmsAuthorizationLetterResponseBody &&) = default ;
    QuerySmsAuthorizationLetterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsAuthorizationLetterResponseBody() = default ;
    QuerySmsAuthorizationLetterResponseBody& operator=(const QuerySmsAuthorizationLetterResponseBody &) = default ;
    QuerySmsAuthorizationLetterResponseBody& operator=(QuerySmsAuthorizationLetterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authorization_ == nullptr
        && this->authorizationLetterExpDate_ == nullptr && this->authorizationLetterId_ == nullptr && this->authorizationLetterName_ == nullptr && this->authorizationLetterPic_ == nullptr && this->organizationCode_ == nullptr
        && this->proxyAuthorization_ == nullptr && this->signScope_ == nullptr && this->state_ == nullptr && this->status_ == nullptr; };
      // authorization Field Functions 
      bool hasAuthorization() const { return this->authorization_ != nullptr;};
      void deleteAuthorization() { this->authorization_ = nullptr;};
      inline string getAuthorization() const { DARABONBA_PTR_GET_DEFAULT(authorization_, "") };
      inline Data& setAuthorization(string authorization) { DARABONBA_PTR_SET_VALUE(authorization_, authorization) };


      // authorizationLetterExpDate Field Functions 
      bool hasAuthorizationLetterExpDate() const { return this->authorizationLetterExpDate_ != nullptr;};
      void deleteAuthorizationLetterExpDate() { this->authorizationLetterExpDate_ = nullptr;};
      inline string getAuthorizationLetterExpDate() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterExpDate_, "") };
      inline Data& setAuthorizationLetterExpDate(string authorizationLetterExpDate) { DARABONBA_PTR_SET_VALUE(authorizationLetterExpDate_, authorizationLetterExpDate) };


      // authorizationLetterId Field Functions 
      bool hasAuthorizationLetterId() const { return this->authorizationLetterId_ != nullptr;};
      void deleteAuthorizationLetterId() { this->authorizationLetterId_ = nullptr;};
      inline int64_t getAuthorizationLetterId() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterId_, 0L) };
      inline Data& setAuthorizationLetterId(int64_t authorizationLetterId) { DARABONBA_PTR_SET_VALUE(authorizationLetterId_, authorizationLetterId) };


      // authorizationLetterName Field Functions 
      bool hasAuthorizationLetterName() const { return this->authorizationLetterName_ != nullptr;};
      void deleteAuthorizationLetterName() { this->authorizationLetterName_ = nullptr;};
      inline string getAuthorizationLetterName() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterName_, "") };
      inline Data& setAuthorizationLetterName(string authorizationLetterName) { DARABONBA_PTR_SET_VALUE(authorizationLetterName_, authorizationLetterName) };


      // authorizationLetterPic Field Functions 
      bool hasAuthorizationLetterPic() const { return this->authorizationLetterPic_ != nullptr;};
      void deleteAuthorizationLetterPic() { this->authorizationLetterPic_ = nullptr;};
      inline string getAuthorizationLetterPic() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterPic_, "") };
      inline Data& setAuthorizationLetterPic(string authorizationLetterPic) { DARABONBA_PTR_SET_VALUE(authorizationLetterPic_, authorizationLetterPic) };


      // organizationCode Field Functions 
      bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
      void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
      inline string getOrganizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
      inline Data& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


      // proxyAuthorization Field Functions 
      bool hasProxyAuthorization() const { return this->proxyAuthorization_ != nullptr;};
      void deleteProxyAuthorization() { this->proxyAuthorization_ = nullptr;};
      inline string getProxyAuthorization() const { DARABONBA_PTR_GET_DEFAULT(proxyAuthorization_, "") };
      inline Data& setProxyAuthorization(string proxyAuthorization) { DARABONBA_PTR_SET_VALUE(proxyAuthorization_, proxyAuthorization) };


      // signScope Field Functions 
      bool hasSignScope() const { return this->signScope_ != nullptr;};
      void deleteSignScope() { this->signScope_ = nullptr;};
      inline string getSignScope() const { DARABONBA_PTR_GET_DEFAULT(signScope_, "") };
      inline Data& setSignScope(string signScope) { DARABONBA_PTR_SET_VALUE(signScope_, signScope) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Data& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // 委托授权方
      shared_ptr<string> authorization_ {};
      // 委托授权书有效期
      shared_ptr<string> authorizationLetterExpDate_ {};
      // 委托授权书id
      shared_ptr<int64_t> authorizationLetterId_ {};
      // 委托授权书命名
      shared_ptr<string> authorizationLetterName_ {};
      // 委托授权书图片地址
      shared_ptr<string> authorizationLetterPic_ {};
      // 授权方统一社会信用代码
      shared_ptr<string> organizationCode_ {};
      // 被委托授权方
      shared_ptr<string> proxyAuthorization_ {};
      // 委托授权签名范围
      shared_ptr<string> signScope_ {};
      // 委托授权书审核状态（初始化INT/审核通过PASSED）
      shared_ptr<string> state_ {};
      // 委托授权书可用状态（可用VALID/不可用INVALID）
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QuerySmsAuthorizationLetterResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsAuthorizationLetterResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QuerySmsAuthorizationLetterResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QuerySmsAuthorizationLetterResponseBody::Data>) };
    inline vector<QuerySmsAuthorizationLetterResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QuerySmsAuthorizationLetterResponseBody::Data>) };
    inline QuerySmsAuthorizationLetterResponseBody& setData(const vector<QuerySmsAuthorizationLetterResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySmsAuthorizationLetterResponseBody& setData(vector<QuerySmsAuthorizationLetterResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsAuthorizationLetterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsAuthorizationLetterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySmsAuthorizationLetterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<QuerySmsAuthorizationLetterResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
