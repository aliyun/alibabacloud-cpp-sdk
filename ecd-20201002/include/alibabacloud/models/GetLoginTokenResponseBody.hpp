// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class GetLoginTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(KeepAliveToken, keepAliveToken_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(NextStage, nextStage_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(PasswordStrategy, passwordStrategy_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(Props, props_);
      DARABONBA_PTR_TO_JSON(QrCodePng, qrCodePng_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskVerifyInfo, riskVerifyInfo_);
      DARABONBA_PTR_TO_JSON(Secret, secret_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WindowDisplayMode, windowDisplayMode_);
      DARABONBA_PTR_TO_JSON(WyId, wyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(KeepAliveToken, keepAliveToken_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(NextStage, nextStage_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(PasswordStrategy, passwordStrategy_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(Props, props_);
      DARABONBA_PTR_FROM_JSON(QrCodePng, qrCodePng_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskVerifyInfo, riskVerifyInfo_);
      DARABONBA_PTR_FROM_JSON(Secret, secret_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WindowDisplayMode, windowDisplayMode_);
      DARABONBA_PTR_FROM_JSON(WyId, wyId_);
    };
    GetLoginTokenResponseBody() = default ;
    GetLoginTokenResponseBody(const GetLoginTokenResponseBody &) = default ;
    GetLoginTokenResponseBody(GetLoginTokenResponseBody &&) = default ;
    GetLoginTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLoginTokenResponseBody() = default ;
    GetLoginTokenResponseBody& operator=(const GetLoginTokenResponseBody &) = default ;
    GetLoginTokenResponseBody& operator=(GetLoginTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RiskVerifyInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RiskVerifyInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(LastLockDuration, lastLockDuration_);
        DARABONBA_PTR_TO_JSON(Locked, locked_);
        DARABONBA_PTR_TO_JSON(Phone, phone_);
      };
      friend void from_json(const Darabonba::Json& j, RiskVerifyInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(LastLockDuration, lastLockDuration_);
        DARABONBA_PTR_FROM_JSON(Locked, locked_);
        DARABONBA_PTR_FROM_JSON(Phone, phone_);
      };
      RiskVerifyInfo() = default ;
      RiskVerifyInfo(const RiskVerifyInfo &) = default ;
      RiskVerifyInfo(RiskVerifyInfo &&) = default ;
      RiskVerifyInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RiskVerifyInfo() = default ;
      RiskVerifyInfo& operator=(const RiskVerifyInfo &) = default ;
      RiskVerifyInfo& operator=(RiskVerifyInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->email_ == nullptr
        && this->lastLockDuration_ == nullptr && this->locked_ == nullptr && this->phone_ == nullptr; };
      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline RiskVerifyInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // lastLockDuration Field Functions 
      bool hasLastLockDuration() const { return this->lastLockDuration_ != nullptr;};
      void deleteLastLockDuration() { this->lastLockDuration_ = nullptr;};
      inline int64_t getLastLockDuration() const { DARABONBA_PTR_GET_DEFAULT(lastLockDuration_, 0L) };
      inline RiskVerifyInfo& setLastLockDuration(int64_t lastLockDuration) { DARABONBA_PTR_SET_VALUE(lastLockDuration_, lastLockDuration) };


      // locked Field Functions 
      bool hasLocked() const { return this->locked_ != nullptr;};
      void deleteLocked() { this->locked_ = nullptr;};
      inline string getLocked() const { DARABONBA_PTR_GET_DEFAULT(locked_, "") };
      inline RiskVerifyInfo& setLocked(string locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline RiskVerifyInfo& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    protected:
      // The email address used for identity verification when risk verification is triggered.
      shared_ptr<string> email_ {};
      // The account lockout duration.
      shared_ptr<int64_t> lastLockDuration_ {};
      // Indicates whether the account is locked.
      shared_ptr<string> locked_ {};
      // The phone number used for identity verification when risk verification is triggered.
      shared_ptr<string> phone_ {};
    };

    class PasswordStrategy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PasswordStrategy& obj) { 
        DARABONBA_PTR_TO_JSON(TenantAlternativeChars, tenantAlternativeChars_);
        DARABONBA_PTR_TO_JSON(TenantPasswordLength, tenantPasswordLength_);
      };
      friend void from_json(const Darabonba::Json& j, PasswordStrategy& obj) { 
        DARABONBA_PTR_FROM_JSON(TenantAlternativeChars, tenantAlternativeChars_);
        DARABONBA_PTR_FROM_JSON(TenantPasswordLength, tenantPasswordLength_);
      };
      PasswordStrategy() = default ;
      PasswordStrategy(const PasswordStrategy &) = default ;
      PasswordStrategy(PasswordStrategy &&) = default ;
      PasswordStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PasswordStrategy() = default ;
      PasswordStrategy& operator=(const PasswordStrategy &) = default ;
      PasswordStrategy& operator=(PasswordStrategy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantAlternativeChars_ == nullptr
        && this->tenantPasswordLength_ == nullptr; };
      // tenantAlternativeChars Field Functions 
      bool hasTenantAlternativeChars() const { return this->tenantAlternativeChars_ != nullptr;};
      void deleteTenantAlternativeChars() { this->tenantAlternativeChars_ = nullptr;};
      inline const vector<string> & getTenantAlternativeChars() const { DARABONBA_PTR_GET_CONST(tenantAlternativeChars_, vector<string>) };
      inline vector<string> getTenantAlternativeChars() { DARABONBA_PTR_GET(tenantAlternativeChars_, vector<string>) };
      inline PasswordStrategy& setTenantAlternativeChars(const vector<string> & tenantAlternativeChars) { DARABONBA_PTR_SET_VALUE(tenantAlternativeChars_, tenantAlternativeChars) };
      inline PasswordStrategy& setTenantAlternativeChars(vector<string> && tenantAlternativeChars) { DARABONBA_PTR_SET_RVALUE(tenantAlternativeChars_, tenantAlternativeChars) };


      // tenantPasswordLength Field Functions 
      bool hasTenantPasswordLength() const { return this->tenantPasswordLength_ != nullptr;};
      void deleteTenantPasswordLength() { this->tenantPasswordLength_ = nullptr;};
      inline string getTenantPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(tenantPasswordLength_, "") };
      inline PasswordStrategy& setTenantPasswordLength(string tenantPasswordLength) { DARABONBA_PTR_SET_VALUE(tenantPasswordLength_, tenantPasswordLength) };


    protected:
      // > This is an internal field and is not available for public use.
      shared_ptr<vector<string>> tenantAlternativeChars_ {};
      // > This is an internal field and is not available for public use.
      shared_ptr<string> tenantPasswordLength_ {};
    };

    virtual bool empty() const override { return this->email_ == nullptr
        && this->endUserId_ == nullptr && this->industry_ == nullptr && this->keepAliveToken_ == nullptr && this->label_ == nullptr && this->loginToken_ == nullptr
        && this->nextStage_ == nullptr && this->nickName_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->passwordStrategy_ == nullptr
        && this->phone_ == nullptr && this->props_ == nullptr && this->qrCodePng_ == nullptr && this->reason_ == nullptr && this->requestId_ == nullptr
        && this->riskVerifyInfo_ == nullptr && this->secret_ == nullptr && this->sessionId_ == nullptr && this->tenantId_ == nullptr && this->windowDisplayMode_ == nullptr
        && this->wyId_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetLoginTokenResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetLoginTokenResponseBody& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline GetLoginTokenResponseBody& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // keepAliveToken Field Functions 
    bool hasKeepAliveToken() const { return this->keepAliveToken_ != nullptr;};
    void deleteKeepAliveToken() { this->keepAliveToken_ = nullptr;};
    inline string getKeepAliveToken() const { DARABONBA_PTR_GET_DEFAULT(keepAliveToken_, "") };
    inline GetLoginTokenResponseBody& setKeepAliveToken(string keepAliveToken) { DARABONBA_PTR_SET_VALUE(keepAliveToken_, keepAliveToken) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetLoginTokenResponseBody& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string getLoginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline GetLoginTokenResponseBody& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // nextStage Field Functions 
    bool hasNextStage() const { return this->nextStage_ != nullptr;};
    void deleteNextStage() { this->nextStage_ = nullptr;};
    inline string getNextStage() const { DARABONBA_PTR_GET_DEFAULT(nextStage_, "") };
    inline GetLoginTokenResponseBody& setNextStage(string nextStage) { DARABONBA_PTR_SET_VALUE(nextStage_, nextStage) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetLoginTokenResponseBody& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline GetLoginTokenResponseBody& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline GetLoginTokenResponseBody& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // passwordStrategy Field Functions 
    bool hasPasswordStrategy() const { return this->passwordStrategy_ != nullptr;};
    void deletePasswordStrategy() { this->passwordStrategy_ = nullptr;};
    inline const GetLoginTokenResponseBody::PasswordStrategy & getPasswordStrategy() const { DARABONBA_PTR_GET_CONST(passwordStrategy_, GetLoginTokenResponseBody::PasswordStrategy) };
    inline GetLoginTokenResponseBody::PasswordStrategy getPasswordStrategy() { DARABONBA_PTR_GET(passwordStrategy_, GetLoginTokenResponseBody::PasswordStrategy) };
    inline GetLoginTokenResponseBody& setPasswordStrategy(const GetLoginTokenResponseBody::PasswordStrategy & passwordStrategy) { DARABONBA_PTR_SET_VALUE(passwordStrategy_, passwordStrategy) };
    inline GetLoginTokenResponseBody& setPasswordStrategy(GetLoginTokenResponseBody::PasswordStrategy && passwordStrategy) { DARABONBA_PTR_SET_RVALUE(passwordStrategy_, passwordStrategy) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetLoginTokenResponseBody& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // props Field Functions 
    bool hasProps() const { return this->props_ != nullptr;};
    void deleteProps() { this->props_ = nullptr;};
    inline const map<string, string> & getProps() const { DARABONBA_PTR_GET_CONST(props_, map<string, string>) };
    inline map<string, string> getProps() { DARABONBA_PTR_GET(props_, map<string, string>) };
    inline GetLoginTokenResponseBody& setProps(const map<string, string> & props) { DARABONBA_PTR_SET_VALUE(props_, props) };
    inline GetLoginTokenResponseBody& setProps(map<string, string> && props) { DARABONBA_PTR_SET_RVALUE(props_, props) };


    // qrCodePng Field Functions 
    bool hasQrCodePng() const { return this->qrCodePng_ != nullptr;};
    void deleteQrCodePng() { this->qrCodePng_ = nullptr;};
    inline string getQrCodePng() const { DARABONBA_PTR_GET_DEFAULT(qrCodePng_, "") };
    inline GetLoginTokenResponseBody& setQrCodePng(string qrCodePng) { DARABONBA_PTR_SET_VALUE(qrCodePng_, qrCodePng) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetLoginTokenResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoginTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskVerifyInfo Field Functions 
    bool hasRiskVerifyInfo() const { return this->riskVerifyInfo_ != nullptr;};
    void deleteRiskVerifyInfo() { this->riskVerifyInfo_ = nullptr;};
    inline const GetLoginTokenResponseBody::RiskVerifyInfo & getRiskVerifyInfo() const { DARABONBA_PTR_GET_CONST(riskVerifyInfo_, GetLoginTokenResponseBody::RiskVerifyInfo) };
    inline GetLoginTokenResponseBody::RiskVerifyInfo getRiskVerifyInfo() { DARABONBA_PTR_GET(riskVerifyInfo_, GetLoginTokenResponseBody::RiskVerifyInfo) };
    inline GetLoginTokenResponseBody& setRiskVerifyInfo(const GetLoginTokenResponseBody::RiskVerifyInfo & riskVerifyInfo) { DARABONBA_PTR_SET_VALUE(riskVerifyInfo_, riskVerifyInfo) };
    inline GetLoginTokenResponseBody& setRiskVerifyInfo(GetLoginTokenResponseBody::RiskVerifyInfo && riskVerifyInfo) { DARABONBA_PTR_SET_RVALUE(riskVerifyInfo_, riskVerifyInfo) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string getSecret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline GetLoginTokenResponseBody& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetLoginTokenResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetLoginTokenResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // windowDisplayMode Field Functions 
    bool hasWindowDisplayMode() const { return this->windowDisplayMode_ != nullptr;};
    void deleteWindowDisplayMode() { this->windowDisplayMode_ = nullptr;};
    inline string getWindowDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(windowDisplayMode_, "") };
    inline GetLoginTokenResponseBody& setWindowDisplayMode(string windowDisplayMode) { DARABONBA_PTR_SET_VALUE(windowDisplayMode_, windowDisplayMode) };


    // wyId Field Functions 
    bool hasWyId() const { return this->wyId_ != nullptr;};
    void deleteWyId() { this->wyId_ = nullptr;};
    inline string getWyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
    inline GetLoginTokenResponseBody& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


  protected:
    // The email address of the user. This value is returned with the LoginToken after logon.    
    // 
    // - For a convenience user, the email address specified when the convenience user was created is returned.
    // - For an AD user, the value is returned in the format of `username@AD domain name`.
    shared_ptr<string> email_ {};
    // The convenience account username or AD username.
    shared_ptr<string> endUserId_ {};
    // > This is an internal field and is not available for public use.
    shared_ptr<string> industry_ {};
    // The token used to keep the logon session alive. After a successful logon with the keep-alive option enabled, the operation returns a `KeepAliveToken`. If the keep-alive option is not enabled, an empty value is returned.
    shared_ptr<string> keepAliveToken_ {};
    // The property of the convenience user. If the user is an AD user, an empty value is returned.
    shared_ptr<string> label_ {};
    // The logon credential.
    shared_ptr<string> loginToken_ {};
    // The expected next stage. For example, if the administrator has enabled MFA authentication in the Elastic Desktop Service console, after the username and password authentication is passed (the `ADPassword` stage), this parameter returns `MFAVerify`, indicating that MFA authentication is required.
    // 
    // > For more information about each authentication stage, see the parameter description of the `CurrentStage` request parameter of this operation.
    shared_ptr<string> nextStage_ {};
    shared_ptr<string> nickName_ {};
    shared_ptr<string> officeSiteId_ {};
    shared_ptr<string> officeSiteName_ {};
    // > This is an internal field and is not available for public use.
    shared_ptr<GetLoginTokenResponseBody::PasswordStrategy> passwordStrategy_ {};
    // The phone number of the convenience user. If the user is an AD user, an empty value is returned.
    shared_ptr<string> phone_ {};
    // > This is an internal field and is not available for public use.
    shared_ptr<map<string, string>> props_ {};
    // The QR code of the secret key used when attaching a virtual MFA device. The value uses Base64 encoding. This value can be empty and is used in the `MFABind` stage.
    // 
    // > For more information about each authentication stage, see the parameter description of the `CurrentStage` request parameter of this operation.
    shared_ptr<string> qrCodePng_ {};
    // > This is an internal field and is not available for public use.
    shared_ptr<string> reason_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The logon risk identification information.
    shared_ptr<GetLoginTokenResponseBody::RiskVerifyInfo> riskVerifyInfo_ {};
    // The secret key used when attaching a virtual MFA device. This value is used in the `MFABind` stage.
    // 
    // > For more information about each authentication stage, see the parameter description of the `CurrentStage` request parameter of this operation.
    shared_ptr<string> secret_ {};
    // The session ID. This value is returned only when `GetLoginToken` is invoked for the first time within the same session. For subsequent stages that require multiple authentications, pass in this parameter.
    // 
    // > For more information about each authentication stage, see the parameter description of the `CurrentStage` request parameter of this operation.
    shared_ptr<string> sessionId_ {};
    // The Alibaba Cloud account ID. This value is used for hardware terminal identification.
    shared_ptr<int64_t> tenantId_ {};
    // > This is an internal field and is not available for public use.
    shared_ptr<string> windowDisplayMode_ {};
    shared_ptr<string> wyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
