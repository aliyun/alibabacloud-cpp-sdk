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
    class TenantInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AccessType, accessType_);
        DARABONBA_PTR_TO_JSON(TenantAlias, tenantAlias_);
      };
      friend void from_json(const Darabonba::Json& j, TenantInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
        DARABONBA_PTR_FROM_JSON(TenantAlias, tenantAlias_);
      };
      TenantInfos() = default ;
      TenantInfos(const TenantInfos &) = default ;
      TenantInfos(TenantInfos &&) = default ;
      TenantInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantInfos() = default ;
      TenantInfos& operator=(const TenantInfos &) = default ;
      TenantInfos& operator=(TenantInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessType_ == nullptr
        && this->tenantAlias_ == nullptr; };
      // accessType Field Functions 
      bool hasAccessType() const { return this->accessType_ != nullptr;};
      void deleteAccessType() { this->accessType_ = nullptr;};
      inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
      inline TenantInfos& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


      // tenantAlias Field Functions 
      bool hasTenantAlias() const { return this->tenantAlias_ != nullptr;};
      void deleteTenantAlias() { this->tenantAlias_ = nullptr;};
      inline string getTenantAlias() const { DARABONBA_PTR_GET_DEFAULT(tenantAlias_, "") };
      inline TenantInfos& setTenantAlias(string tenantAlias) { DARABONBA_PTR_SET_VALUE(tenantAlias_, tenantAlias) };


    protected:
      shared_ptr<string> accessType_ {};
      shared_ptr<string> tenantAlias_ {};
    };

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
      inline bool getLocked() const { DARABONBA_PTR_GET_DEFAULT(locked_, false) };
      inline RiskVerifyInfo& setLocked(bool locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline RiskVerifyInfo& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    protected:
      shared_ptr<string> email_ {};
      shared_ptr<int64_t> lastLockDuration_ {};
      shared_ptr<bool> locked_ {};
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
      inline int32_t getTenantPasswordLength() const { DARABONBA_PTR_GET_DEFAULT(tenantPasswordLength_, 0) };
      inline PasswordStrategy& setTenantPasswordLength(int32_t tenantPasswordLength) { DARABONBA_PTR_SET_VALUE(tenantPasswordLength_, tenantPasswordLength) };


    protected:
      shared_ptr<vector<string>> tenantAlternativeChars_ {};
      shared_ptr<int32_t> tenantPasswordLength_ {};
    };

    class MfaTypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MfaTypeList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Stage, stage_);
      };
      friend void from_json(const Darabonba::Json& j, MfaTypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Stage, stage_);
      };
      MfaTypeList() = default ;
      MfaTypeList(const MfaTypeList &) = default ;
      MfaTypeList(MfaTypeList &&) = default ;
      MfaTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MfaTypeList() = default ;
      MfaTypeList& operator=(const MfaTypeList &) = default ;
      MfaTypeList& operator=(MfaTypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->stage_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MfaTypeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // stage Field Functions 
      bool hasStage() const { return this->stage_ != nullptr;};
      void deleteStage() { this->stage_ = nullptr;};
      inline string getStage() const { DARABONBA_PTR_GET_DEFAULT(stage_, "") };
      inline MfaTypeList& setStage(string stage) { DARABONBA_PTR_SET_VALUE(stage_, stage) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> stage_ {};
    };

    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->accountType_ == nullptr && this->adDomain_ == nullptr && this->email_ == nullptr && this->endUserId_ == nullptr && this->idpId_ == nullptr
        && this->industry_ == nullptr && this->keepAliveToken_ == nullptr && this->label_ == nullptr && this->loginToken_ == nullptr && this->mfaTypeList_ == nullptr
        && this->nextStage_ == nullptr && this->nickName_ == nullptr && this->officeSites_ == nullptr && this->passwordStrategy_ == nullptr && this->phone_ == nullptr
        && this->props_ == nullptr && this->qrCodePng_ == nullptr && this->reason_ == nullptr && this->requestId_ == nullptr && this->riskVerifyInfo_ == nullptr
        && this->secret_ == nullptr && this->sessionId_ == nullptr && this->tenantAlias_ == nullptr && this->tenantId_ == nullptr && this->tenantInfos_ == nullptr
        && this->vpcRegionId_ == nullptr && this->windowDisplayMode_ == nullptr && this->wyId_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline GetLoginTokenResponseBody& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline GetLoginTokenResponseBody& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // adDomain Field Functions 
    bool hasAdDomain() const { return this->adDomain_ != nullptr;};
    void deleteAdDomain() { this->adDomain_ = nullptr;};
    inline string getAdDomain() const { DARABONBA_PTR_GET_DEFAULT(adDomain_, "") };
    inline GetLoginTokenResponseBody& setAdDomain(string adDomain) { DARABONBA_PTR_SET_VALUE(adDomain_, adDomain) };


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


    // idpId Field Functions 
    bool hasIdpId() const { return this->idpId_ != nullptr;};
    void deleteIdpId() { this->idpId_ = nullptr;};
    inline string getIdpId() const { DARABONBA_PTR_GET_DEFAULT(idpId_, "") };
    inline GetLoginTokenResponseBody& setIdpId(string idpId) { DARABONBA_PTR_SET_VALUE(idpId_, idpId) };


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


    // mfaTypeList Field Functions 
    bool hasMfaTypeList() const { return this->mfaTypeList_ != nullptr;};
    void deleteMfaTypeList() { this->mfaTypeList_ = nullptr;};
    inline const vector<GetLoginTokenResponseBody::MfaTypeList> & getMfaTypeList() const { DARABONBA_PTR_GET_CONST(mfaTypeList_, vector<GetLoginTokenResponseBody::MfaTypeList>) };
    inline vector<GetLoginTokenResponseBody::MfaTypeList> getMfaTypeList() { DARABONBA_PTR_GET(mfaTypeList_, vector<GetLoginTokenResponseBody::MfaTypeList>) };
    inline GetLoginTokenResponseBody& setMfaTypeList(const vector<GetLoginTokenResponseBody::MfaTypeList> & mfaTypeList) { DARABONBA_PTR_SET_VALUE(mfaTypeList_, mfaTypeList) };
    inline GetLoginTokenResponseBody& setMfaTypeList(vector<GetLoginTokenResponseBody::MfaTypeList> && mfaTypeList) { DARABONBA_PTR_SET_RVALUE(mfaTypeList_, mfaTypeList) };


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


    // officeSites Field Functions 
    bool hasOfficeSites() const { return this->officeSites_ != nullptr;};
    void deleteOfficeSites() { this->officeSites_ = nullptr;};
    inline const vector<string> & getOfficeSites() const { DARABONBA_PTR_GET_CONST(officeSites_, vector<string>) };
    inline vector<string> getOfficeSites() { DARABONBA_PTR_GET(officeSites_, vector<string>) };
    inline GetLoginTokenResponseBody& setOfficeSites(const vector<string> & officeSites) { DARABONBA_PTR_SET_VALUE(officeSites_, officeSites) };
    inline GetLoginTokenResponseBody& setOfficeSites(vector<string> && officeSites) { DARABONBA_PTR_SET_RVALUE(officeSites_, officeSites) };


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


    // tenantAlias Field Functions 
    bool hasTenantAlias() const { return this->tenantAlias_ != nullptr;};
    void deleteTenantAlias() { this->tenantAlias_ = nullptr;};
    inline string getTenantAlias() const { DARABONBA_PTR_GET_DEFAULT(tenantAlias_, "") };
    inline GetLoginTokenResponseBody& setTenantAlias(string tenantAlias) { DARABONBA_PTR_SET_VALUE(tenantAlias_, tenantAlias) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline GetLoginTokenResponseBody& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // tenantInfos Field Functions 
    bool hasTenantInfos() const { return this->tenantInfos_ != nullptr;};
    void deleteTenantInfos() { this->tenantInfos_ = nullptr;};
    inline const vector<GetLoginTokenResponseBody::TenantInfos> & getTenantInfos() const { DARABONBA_PTR_GET_CONST(tenantInfos_, vector<GetLoginTokenResponseBody::TenantInfos>) };
    inline vector<GetLoginTokenResponseBody::TenantInfos> getTenantInfos() { DARABONBA_PTR_GET(tenantInfos_, vector<GetLoginTokenResponseBody::TenantInfos>) };
    inline GetLoginTokenResponseBody& setTenantInfos(const vector<GetLoginTokenResponseBody::TenantInfos> & tenantInfos) { DARABONBA_PTR_SET_VALUE(tenantInfos_, tenantInfos) };
    inline GetLoginTokenResponseBody& setTenantInfos(vector<GetLoginTokenResponseBody::TenantInfos> && tenantInfos) { DARABONBA_PTR_SET_RVALUE(tenantInfos_, tenantInfos) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string getVpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline GetLoginTokenResponseBody& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


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
    shared_ptr<string> accessType_ {};
    shared_ptr<string> accountType_ {};
    shared_ptr<string> adDomain_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> endUserId_ {};
    shared_ptr<string> idpId_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<string> keepAliveToken_ {};
    shared_ptr<string> label_ {};
    shared_ptr<string> loginToken_ {};
    shared_ptr<vector<GetLoginTokenResponseBody::MfaTypeList>> mfaTypeList_ {};
    shared_ptr<string> nextStage_ {};
    shared_ptr<string> nickName_ {};
    shared_ptr<vector<string>> officeSites_ {};
    shared_ptr<GetLoginTokenResponseBody::PasswordStrategy> passwordStrategy_ {};
    shared_ptr<string> phone_ {};
    shared_ptr<map<string, string>> props_ {};
    shared_ptr<string> qrCodePng_ {};
    shared_ptr<string> reason_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetLoginTokenResponseBody::RiskVerifyInfo> riskVerifyInfo_ {};
    shared_ptr<string> secret_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> tenantAlias_ {};
    shared_ptr<int64_t> tenantId_ {};
    shared_ptr<vector<GetLoginTokenResponseBody::TenantInfos>> tenantInfos_ {};
    shared_ptr<string> vpcRegionId_ {};
    shared_ptr<string> windowDisplayMode_ {};
    shared_ptr<string> wyId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
