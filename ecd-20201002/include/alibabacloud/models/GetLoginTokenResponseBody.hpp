// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLoginTokenResponseBodyPasswordStrategy.hpp>
#include <map>
#include <alibabacloud/models/GetLoginTokenResponseBodyRiskVerifyInfo.hpp>
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
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->endUserId_ == nullptr && return this->industry_ == nullptr && return this->keepAliveToken_ == nullptr && return this->label_ == nullptr && return this->loginToken_ == nullptr
        && return this->nextStage_ == nullptr && return this->nickName_ == nullptr && return this->passwordStrategy_ == nullptr && return this->phone_ == nullptr && return this->props_ == nullptr
        && return this->qrCodePng_ == nullptr && return this->reason_ == nullptr && return this->requestId_ == nullptr && return this->riskVerifyInfo_ == nullptr && return this->secret_ == nullptr
        && return this->sessionId_ == nullptr && return this->tenantId_ == nullptr && return this->windowDisplayMode_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetLoginTokenResponseBody& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline GetLoginTokenResponseBody& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string industry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline GetLoginTokenResponseBody& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // keepAliveToken Field Functions 
    bool hasKeepAliveToken() const { return this->keepAliveToken_ != nullptr;};
    void deleteKeepAliveToken() { this->keepAliveToken_ = nullptr;};
    inline string keepAliveToken() const { DARABONBA_PTR_GET_DEFAULT(keepAliveToken_, "") };
    inline GetLoginTokenResponseBody& setKeepAliveToken(string keepAliveToken) { DARABONBA_PTR_SET_VALUE(keepAliveToken_, keepAliveToken) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline GetLoginTokenResponseBody& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


    // loginToken Field Functions 
    bool hasLoginToken() const { return this->loginToken_ != nullptr;};
    void deleteLoginToken() { this->loginToken_ = nullptr;};
    inline string loginToken() const { DARABONBA_PTR_GET_DEFAULT(loginToken_, "") };
    inline GetLoginTokenResponseBody& setLoginToken(string loginToken) { DARABONBA_PTR_SET_VALUE(loginToken_, loginToken) };


    // nextStage Field Functions 
    bool hasNextStage() const { return this->nextStage_ != nullptr;};
    void deleteNextStage() { this->nextStage_ = nullptr;};
    inline string nextStage() const { DARABONBA_PTR_GET_DEFAULT(nextStage_, "") };
    inline GetLoginTokenResponseBody& setNextStage(string nextStage) { DARABONBA_PTR_SET_VALUE(nextStage_, nextStage) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string nickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GetLoginTokenResponseBody& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // passwordStrategy Field Functions 
    bool hasPasswordStrategy() const { return this->passwordStrategy_ != nullptr;};
    void deletePasswordStrategy() { this->passwordStrategy_ = nullptr;};
    inline const GetLoginTokenResponseBodyPasswordStrategy & passwordStrategy() const { DARABONBA_PTR_GET_CONST(passwordStrategy_, GetLoginTokenResponseBodyPasswordStrategy) };
    inline GetLoginTokenResponseBodyPasswordStrategy passwordStrategy() { DARABONBA_PTR_GET(passwordStrategy_, GetLoginTokenResponseBodyPasswordStrategy) };
    inline GetLoginTokenResponseBody& setPasswordStrategy(const GetLoginTokenResponseBodyPasswordStrategy & passwordStrategy) { DARABONBA_PTR_SET_VALUE(passwordStrategy_, passwordStrategy) };
    inline GetLoginTokenResponseBody& setPasswordStrategy(GetLoginTokenResponseBodyPasswordStrategy && passwordStrategy) { DARABONBA_PTR_SET_RVALUE(passwordStrategy_, passwordStrategy) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline GetLoginTokenResponseBody& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // props Field Functions 
    bool hasProps() const { return this->props_ != nullptr;};
    void deleteProps() { this->props_ = nullptr;};
    inline const map<string, string> & props() const { DARABONBA_PTR_GET_CONST(props_, map<string, string>) };
    inline map<string, string> props() { DARABONBA_PTR_GET(props_, map<string, string>) };
    inline GetLoginTokenResponseBody& setProps(const map<string, string> & props) { DARABONBA_PTR_SET_VALUE(props_, props) };
    inline GetLoginTokenResponseBody& setProps(map<string, string> && props) { DARABONBA_PTR_SET_RVALUE(props_, props) };


    // qrCodePng Field Functions 
    bool hasQrCodePng() const { return this->qrCodePng_ != nullptr;};
    void deleteQrCodePng() { this->qrCodePng_ = nullptr;};
    inline string qrCodePng() const { DARABONBA_PTR_GET_DEFAULT(qrCodePng_, "") };
    inline GetLoginTokenResponseBody& setQrCodePng(string qrCodePng) { DARABONBA_PTR_SET_VALUE(qrCodePng_, qrCodePng) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline GetLoginTokenResponseBody& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLoginTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskVerifyInfo Field Functions 
    bool hasRiskVerifyInfo() const { return this->riskVerifyInfo_ != nullptr;};
    void deleteRiskVerifyInfo() { this->riskVerifyInfo_ = nullptr;};
    inline const GetLoginTokenResponseBodyRiskVerifyInfo & riskVerifyInfo() const { DARABONBA_PTR_GET_CONST(riskVerifyInfo_, GetLoginTokenResponseBodyRiskVerifyInfo) };
    inline GetLoginTokenResponseBodyRiskVerifyInfo riskVerifyInfo() { DARABONBA_PTR_GET(riskVerifyInfo_, GetLoginTokenResponseBodyRiskVerifyInfo) };
    inline GetLoginTokenResponseBody& setRiskVerifyInfo(const GetLoginTokenResponseBodyRiskVerifyInfo & riskVerifyInfo) { DARABONBA_PTR_SET_VALUE(riskVerifyInfo_, riskVerifyInfo) };
    inline GetLoginTokenResponseBody& setRiskVerifyInfo(GetLoginTokenResponseBodyRiskVerifyInfo && riskVerifyInfo) { DARABONBA_PTR_SET_RVALUE(riskVerifyInfo_, riskVerifyInfo) };


    // secret Field Functions 
    bool hasSecret() const { return this->secret_ != nullptr;};
    void deleteSecret() { this->secret_ = nullptr;};
    inline string secret() const { DARABONBA_PTR_GET_DEFAULT(secret_, "") };
    inline GetLoginTokenResponseBody& setSecret(string secret) { DARABONBA_PTR_SET_VALUE(secret_, secret) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetLoginTokenResponseBody& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetLoginTokenResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // windowDisplayMode Field Functions 
    bool hasWindowDisplayMode() const { return this->windowDisplayMode_ != nullptr;};
    void deleteWindowDisplayMode() { this->windowDisplayMode_ = nullptr;};
    inline string windowDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(windowDisplayMode_, "") };
    inline GetLoginTokenResponseBody& setWindowDisplayMode(string windowDisplayMode) { DARABONBA_PTR_SET_VALUE(windowDisplayMode_, windowDisplayMode) };


  protected:
    // The email address of the user. The system returns the email address in the return value of the LoginToken parameter after the user logs on to the client.
    // 
    // *   For a convenience user, the return value is the email address specified when the administrator creates the convenience user.
    // *   For an AD user, the return value is in the following format: `Username@Name of the AD domain`.
    std::shared_ptr<string> email_ = nullptr;
    // The account of the convenience user or the AD user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // > This is a parameter only for internal use.
    std::shared_ptr<string> industry_ = nullptr;
    // The token used to keep the user logged on. After the user logs on to the client and select the Keep Logon option, `KeepAliveToken` is returned when you call the operation. If the user does not select the Keep Logon option, null is returned.
    std::shared_ptr<string> keepAliveToken_ = nullptr;
    // The attribute of the convenience user. For an AD user, null is returned.
    std::shared_ptr<string> label_ = nullptr;
    // The logon token.
    std::shared_ptr<string> loginToken_ = nullptr;
    // The next stage that is expected to enter. For example, an administrator enables MFA in the EDS console. When an end user enters the password, that is, the end user completes the `ADPassword` stage, this parameter returns `MFAVerify`. This indicates that MFA is required.
    // 
    // >  For more information about the authentication stages, see the `CurrentStage` parameter.
    std::shared_ptr<string> nextStage_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    // > This is a parameter only for internal use.
    std::shared_ptr<GetLoginTokenResponseBodyPasswordStrategy> passwordStrategy_ = nullptr;
    // Enter the mobile number of the convenience user. For an AD user, null is returned.
    std::shared_ptr<string> phone_ = nullptr;
    // > This is a parameter only for internal use.
    std::shared_ptr<map<string, string>> props_ = nullptr;
    // The QR code that is generated when the virtual MFA device is bound. The value is encoded in Base64. This parameter can be empty. This parameter is required only when the CurrentStage parameter is set to `MFABind`.
    // 
    // > For more information about each authentication stage, see the parameter description of the request parameter `CurrentStage`.
    std::shared_ptr<string> qrCodePng_ = nullptr;
    // > This is a parameter only for internal use.
    std::shared_ptr<string> reason_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Risk identification information regarding the signin process.
    std::shared_ptr<GetLoginTokenResponseBodyRiskVerifyInfo> riskVerifyInfo_ = nullptr;
    // The key that is generated when you bind the virtual MFA device. This parameter is required when the CurrentStage parameter is set to `MFABind`.
    // 
    // > For more information about each authentication stage, see the parameter description of the request parameter `CurrentStage`.
    std::shared_ptr<string> secret_ = nullptr;
    // The ID of the session. The ID is returned the first time you call the `GetLoginToken` operation in the session. If MFA is required, you must specify this parameter in subsequent stages.
    // 
    // > For more information about each authentication stage, see the parameter description of the request parameter `CurrentStage`.
    std::shared_ptr<string> sessionId_ = nullptr;
    // The ID of the Alibaba Cloud account. The ID is used for hardware client authentication.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // > This is a parameter only for internal use.
    std::shared_ptr<string> windowDisplayMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
