// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGINTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetLoginTokenResponseBodyMfaTypeList.hpp>
#include <alibabacloud/models/GetLoginTokenResponseBodyPasswordStrategy.hpp>
#include <map>
#include <alibabacloud/models/GetLoginTokenResponseBodyRiskVerifyInfo.hpp>
#include <alibabacloud/models/GetLoginTokenResponseBodyTenantInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
namespace Models
{
  class GetLoginTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLoginTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(IdpId, idpId_);
      DARABONBA_PTR_TO_JSON(Industry, industry_);
      DARABONBA_PTR_TO_JSON(KeepAliveToken, keepAliveToken_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_TO_JSON(MfaTypeList, mfaTypeList_);
      DARABONBA_PTR_TO_JSON(NextStage, nextStage_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_TO_JSON(PasswordStrategy, passwordStrategy_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(Props, props_);
      DARABONBA_PTR_TO_JSON(QrCodePng, qrCodePng_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskVerifyInfo, riskVerifyInfo_);
      DARABONBA_PTR_TO_JSON(Secret, secret_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TenantAlias, tenantAlias_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(TenantInfos, tenantInfos_);
      DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
      DARABONBA_PTR_TO_JSON(WindowDisplayMode, windowDisplayMode_);
      DARABONBA_PTR_TO_JSON(WyId, wyId_);
    };
    friend void from_json(const Darabonba::Json& j, GetLoginTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(AdDomain, adDomain_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(IdpId, idpId_);
      DARABONBA_PTR_FROM_JSON(Industry, industry_);
      DARABONBA_PTR_FROM_JSON(KeepAliveToken, keepAliveToken_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(LoginToken, loginToken_);
      DARABONBA_PTR_FROM_JSON(MfaTypeList, mfaTypeList_);
      DARABONBA_PTR_FROM_JSON(NextStage, nextStage_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_FROM_JSON(PasswordStrategy, passwordStrategy_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(Props, props_);
      DARABONBA_PTR_FROM_JSON(QrCodePng, qrCodePng_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskVerifyInfo, riskVerifyInfo_);
      DARABONBA_PTR_FROM_JSON(Secret, secret_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TenantAlias, tenantAlias_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(TenantInfos, tenantInfos_);
      DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
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
    virtual bool empty() const override { return this->accessType_ == nullptr
        && return this->accountType_ == nullptr && return this->adDomain_ == nullptr && return this->email_ == nullptr && return this->endUserId_ == nullptr && return this->idpId_ == nullptr
        && return this->industry_ == nullptr && return this->keepAliveToken_ == nullptr && return this->label_ == nullptr && return this->loginToken_ == nullptr && return this->mfaTypeList_ == nullptr
        && return this->nextStage_ == nullptr && return this->nickName_ == nullptr && return this->officeSites_ == nullptr && return this->passwordStrategy_ == nullptr && return this->phone_ == nullptr
        && return this->props_ == nullptr && return this->qrCodePng_ == nullptr && return this->reason_ == nullptr && return this->requestId_ == nullptr && return this->riskVerifyInfo_ == nullptr
        && return this->secret_ == nullptr && return this->sessionId_ == nullptr && return this->tenantAlias_ == nullptr && return this->tenantId_ == nullptr && return this->tenantInfos_ == nullptr
        && return this->vpcRegionId_ == nullptr && return this->windowDisplayMode_ == nullptr && return this->wyId_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string accessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline GetLoginTokenResponseBody& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline GetLoginTokenResponseBody& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // adDomain Field Functions 
    bool hasAdDomain() const { return this->adDomain_ != nullptr;};
    void deleteAdDomain() { this->adDomain_ = nullptr;};
    inline string adDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
    inline GetLoginTokenResponseBody& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


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


    // idpId Field Functions 
    bool hasIdpId() const { return this->idpId_ != nullptr;};
    void deleteIdpId() { this->idpId_ = nullptr;};
    inline string idpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
    inline GetLoginTokenResponseBody& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


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


    // mfaTypeList Field Functions 
    bool hasMfaTypeList() const { return this->mfaTypeList_ != nullptr;};
    void deleteMfaTypeList() { this->mfaTypeList_ = nullptr;};
    inline const vector<GetLoginTokenResponseBodyMfaTypeList> & mfaTypeList() const { DARABONBA_PTR_GET_CONST(mfaTypeList_, vector<GetLoginTokenResponseBodyMfaTypeList>) };
    inline vector<GetLoginTokenResponseBodyMfaTypeList> mfaTypeList() { DARABONBA_PTR_GET(mfaTypeList_, vector<GetLoginTokenResponseBodyMfaTypeList>) };
    inline GetLoginTokenResponseBody& setMfaTypeList(const vector<GetLoginTokenResponseBodyMfaTypeList> & mfaTypeList) { DARABONBA_PTR_SET_VALUE(mfaTypeList_, mfaTypeList) };
    inline GetLoginTokenResponseBody& setMfaTypeList(vector<GetLoginTokenResponseBodyMfaTypeList> && mfaTypeList) { DARABONBA_PTR_SET_RVALUE(mfaTypeList_, mfaTypeList) };


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


    // officeSites Field Functions 
    bool hasOfficeSites() const { return this->officeSites_ != nullptr;};
    void deleteOfficeSites() { this->officeSites_ = nullptr;};
    inline const vector<string> & officeSites() const { DARABONBA_PTR_GET_CONST(officeSites_, vector<string>) };
    inline vector<string> officeSites() { DARABONBA_PTR_GET(officeSites_, vector<string>) };
    inline GetLoginTokenResponseBody& setOfficeSites(const vector<string> & officeSites) { DARABONBA_PTR_SET_VALUE(officeSites_, officeSites) };
    inline GetLoginTokenResponseBody& setOfficeSites(vector<string> && officeSites) { DARABONBA_PTR_SET_RVALUE(officeSites_, officeSites) };


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


    // tenantAlias Field Functions 
    bool hasTenantAlias() const { return this->tenantAlias_ != nullptr;};
    void deleteTenantAlias() { this->tenantAlias_ = nullptr;};
    inline string tenantAlias() const { DARABONBA_PTR_GET_DEFAULT(tenantAlias_, "") };
    inline GetLoginTokenResponseBody& setTenantAlias(string tenantAlias) { DARABONBA_PTR_SET_VALUE(tenantAlias_, tenantAlias) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetLoginTokenResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantInfos Field Functions 
    bool hasTenantInfos() const { return this->tenantInfos_ != nullptr;};
    void deleteTenantInfos() { this->tenantInfos_ = nullptr;};
    inline const vector<GetLoginTokenResponseBodyTenantInfos> & tenantInfos() const { DARABONBA_PTR_GET_CONST(tenantInfos_, vector<GetLoginTokenResponseBodyTenantInfos>) };
    inline vector<GetLoginTokenResponseBodyTenantInfos> tenantInfos() { DARABONBA_PTR_GET(tenantInfos_, vector<GetLoginTokenResponseBodyTenantInfos>) };
    inline GetLoginTokenResponseBody& setTenantInfos(const vector<GetLoginTokenResponseBodyTenantInfos> & tenantInfos) { DARABONBA_PTR_SET_VALUE(tenantInfos_, tenantInfos) };
    inline GetLoginTokenResponseBody& setTenantInfos(vector<GetLoginTokenResponseBodyTenantInfos> && tenantInfos) { DARABONBA_PTR_SET_RVALUE(tenantInfos_, tenantInfos) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string vpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline GetLoginTokenResponseBody& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


    // windowDisplayMode Field Functions 
    bool hasWindowDisplayMode() const { return this->windowDisplayMode_ != nullptr;};
    void deleteWindowDisplayMode() { this->windowDisplayMode_ = nullptr;};
    inline string windowDisplayMode() const { DARABONBA_PTR_GET_DEFAULT(windowDisplayMode_, "") };
    inline GetLoginTokenResponseBody& setWindowDisplayMode(string windowDisplayMode) { DARABONBA_PTR_SET_VALUE(windowDisplayMode_, windowDisplayMode) };


    // wyId Field Functions 
    bool hasWyId() const { return this->wyId_ != nullptr;};
    void deleteWyId() { this->wyId_ = nullptr;};
    inline string wyId() const { DARABONBA_PTR_GET_DEFAULT(wyId_, "") };
    inline GetLoginTokenResponseBody& setWyId(string wyId) { DARABONBA_PTR_SET_VALUE(wyId_, wyId) };


  protected:
    std::shared_ptr<string> accessType_ = nullptr;
    std::shared_ptr<string> accountType_ = nullptr;
    std::shared_ptr<string> adDomain_ = nullptr;
    std::shared_ptr<string> email_ = nullptr;
    std::shared_ptr<string> endUserId_ = nullptr;
    std::shared_ptr<string> idpId_ = nullptr;
    std::shared_ptr<string> industry_ = nullptr;
    std::shared_ptr<string> keepAliveToken_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
    std::shared_ptr<string> loginToken_ = nullptr;
    std::shared_ptr<vector<GetLoginTokenResponseBodyMfaTypeList>> mfaTypeList_ = nullptr;
    std::shared_ptr<string> nextStage_ = nullptr;
    std::shared_ptr<string> nickName_ = nullptr;
    std::shared_ptr<vector<string>> officeSites_ = nullptr;
    std::shared_ptr<GetLoginTokenResponseBodyPasswordStrategy> passwordStrategy_ = nullptr;
    std::shared_ptr<string> phone_ = nullptr;
    std::shared_ptr<map<string, string>> props_ = nullptr;
    std::shared_ptr<string> qrCodePng_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetLoginTokenResponseBodyRiskVerifyInfo> riskVerifyInfo_ = nullptr;
    std::shared_ptr<string> secret_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> tenantAlias_ = nullptr;
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    std::shared_ptr<vector<GetLoginTokenResponseBodyTenantInfos>> tenantInfos_ = nullptr;
    std::shared_ptr<string> vpcRegionId_ = nullptr;
    std::shared_ptr<string> windowDisplayMode_ = nullptr;
    std::shared_ptr<string> wyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
