// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMFAAUTHENTICATIONSETTINGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMFAAUTHENTICATIONSETTINGINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
namespace Models
{
  class GetMFAAuthenticationSettingInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMFAAuthenticationSettingInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MFAAuthenticationSettingInfo, MFAAuthenticationSettingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMFAAuthenticationSettingInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MFAAuthenticationSettingInfo, MFAAuthenticationSettingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetMFAAuthenticationSettingInfoResponseBody() = default ;
    GetMFAAuthenticationSettingInfoResponseBody(const GetMFAAuthenticationSettingInfoResponseBody &) = default ;
    GetMFAAuthenticationSettingInfoResponseBody(GetMFAAuthenticationSettingInfoResponseBody &&) = default ;
    GetMFAAuthenticationSettingInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMFAAuthenticationSettingInfoResponseBody() = default ;
    GetMFAAuthenticationSettingInfoResponseBody& operator=(const GetMFAAuthenticationSettingInfoResponseBody &) = default ;
    GetMFAAuthenticationSettingInfoResponseBody& operator=(GetMFAAuthenticationSettingInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MFAAuthenticationSettingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MFAAuthenticationSettingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AllowedVerificationTypes, allowedVerificationTypes_);
        DARABONBA_PTR_TO_JSON(MfaAuthenticationAdvanceSettings, mfaAuthenticationAdvanceSettings_);
        DARABONBA_PTR_TO_JSON(OperationForRiskLogin, operationForRiskLogin_);
      };
      friend void from_json(const Darabonba::Json& j, MFAAuthenticationSettingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowedVerificationTypes, allowedVerificationTypes_);
        DARABONBA_PTR_FROM_JSON(MfaAuthenticationAdvanceSettings, mfaAuthenticationAdvanceSettings_);
        DARABONBA_PTR_FROM_JSON(OperationForRiskLogin, operationForRiskLogin_);
      };
      MFAAuthenticationSettingInfo() = default ;
      MFAAuthenticationSettingInfo(const MFAAuthenticationSettingInfo &) = default ;
      MFAAuthenticationSettingInfo(MFAAuthenticationSettingInfo &&) = default ;
      MFAAuthenticationSettingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MFAAuthenticationSettingInfo() = default ;
      MFAAuthenticationSettingInfo& operator=(const MFAAuthenticationSettingInfo &) = default ;
      MFAAuthenticationSettingInfo& operator=(MFAAuthenticationSettingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowedVerificationTypes_ == nullptr
        && this->mfaAuthenticationAdvanceSettings_ == nullptr && this->operationForRiskLogin_ == nullptr; };
      // allowedVerificationTypes Field Functions 
      bool hasAllowedVerificationTypes() const { return this->allowedVerificationTypes_ != nullptr;};
      void deleteAllowedVerificationTypes() { this->allowedVerificationTypes_ = nullptr;};
      inline const vector<string> & getAllowedVerificationTypes() const { DARABONBA_PTR_GET_CONST(allowedVerificationTypes_, vector<string>) };
      inline vector<string> getAllowedVerificationTypes() { DARABONBA_PTR_GET(allowedVerificationTypes_, vector<string>) };
      inline MFAAuthenticationSettingInfo& setAllowedVerificationTypes(const vector<string> & allowedVerificationTypes) { DARABONBA_PTR_SET_VALUE(allowedVerificationTypes_, allowedVerificationTypes) };
      inline MFAAuthenticationSettingInfo& setAllowedVerificationTypes(vector<string> && allowedVerificationTypes) { DARABONBA_PTR_SET_RVALUE(allowedVerificationTypes_, allowedVerificationTypes) };


      // mfaAuthenticationAdvanceSettings Field Functions 
      bool hasMfaAuthenticationAdvanceSettings() const { return this->mfaAuthenticationAdvanceSettings_ != nullptr;};
      void deleteMfaAuthenticationAdvanceSettings() { this->mfaAuthenticationAdvanceSettings_ = nullptr;};
      inline string getMfaAuthenticationAdvanceSettings() const { DARABONBA_PTR_GET_DEFAULT(mfaAuthenticationAdvanceSettings_, "") };
      inline MFAAuthenticationSettingInfo& setMfaAuthenticationAdvanceSettings(string mfaAuthenticationAdvanceSettings) { DARABONBA_PTR_SET_VALUE(mfaAuthenticationAdvanceSettings_, mfaAuthenticationAdvanceSettings) };


      // operationForRiskLogin Field Functions 
      bool hasOperationForRiskLogin() const { return this->operationForRiskLogin_ != nullptr;};
      void deleteOperationForRiskLogin() { this->operationForRiskLogin_ = nullptr;};
      inline string getOperationForRiskLogin() const { DARABONBA_PTR_GET_DEFAULT(operationForRiskLogin_, "") };
      inline MFAAuthenticationSettingInfo& setOperationForRiskLogin(string operationForRiskLogin) { DARABONBA_PTR_SET_VALUE(operationForRiskLogin_, operationForRiskLogin) };


    protected:
      shared_ptr<vector<string>> allowedVerificationTypes_ {};
      // The global MFA verification policy. Valid values:
      // 
      // - Enabled: MFA verification is enabled for all users.
      // - Byuser: MFA verification depends on the independent MFA configuration of each user. For more information about user-specific MFA configuration, see [UpdateUserMFAAuthenticationSettings](https://help.aliyun.com/document_detail/450135.html).
      // - Disabled: MFA verification is disabled for all users.
      // - OnlyRiskyLogin: MFA verification is required only for unusual logon attempts.
      shared_ptr<string> mfaAuthenticationAdvanceSettings_ {};
      // The MFA verification policy for unusual logon attempts. Valid values:
      // 
      // - Autonomous: Users can skip MFA binding during unusual logon, but users who have already bound MFA must complete verification.
      // - EnforceVerify: Users are required to bind or verify MFA during unusual logon.
      // 
      // > This parameter is displayed only when MfaAuthenticationAdvanceSettings is set to Byuser or OnlyRiskyLogin.
      shared_ptr<string> operationForRiskLogin_ {};
    };

    virtual bool empty() const override { return this->MFAAuthenticationSettingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // MFAAuthenticationSettingInfo Field Functions 
    bool hasMFAAuthenticationSettingInfo() const { return this->MFAAuthenticationSettingInfo_ != nullptr;};
    void deleteMFAAuthenticationSettingInfo() { this->MFAAuthenticationSettingInfo_ = nullptr;};
    inline const GetMFAAuthenticationSettingInfoResponseBody::MFAAuthenticationSettingInfo & getMFAAuthenticationSettingInfo() const { DARABONBA_PTR_GET_CONST(MFAAuthenticationSettingInfo_, GetMFAAuthenticationSettingInfoResponseBody::MFAAuthenticationSettingInfo) };
    inline GetMFAAuthenticationSettingInfoResponseBody::MFAAuthenticationSettingInfo getMFAAuthenticationSettingInfo() { DARABONBA_PTR_GET(MFAAuthenticationSettingInfo_, GetMFAAuthenticationSettingInfoResponseBody::MFAAuthenticationSettingInfo) };
    inline GetMFAAuthenticationSettingInfoResponseBody& setMFAAuthenticationSettingInfo(const GetMFAAuthenticationSettingInfoResponseBody::MFAAuthenticationSettingInfo & mFAAuthenticationSettingInfo) { DARABONBA_PTR_SET_VALUE(MFAAuthenticationSettingInfo_, mFAAuthenticationSettingInfo) };
    inline GetMFAAuthenticationSettingInfoResponseBody& setMFAAuthenticationSettingInfo(GetMFAAuthenticationSettingInfoResponseBody::MFAAuthenticationSettingInfo && mFAAuthenticationSettingInfo) { DARABONBA_PTR_SET_RVALUE(MFAAuthenticationSettingInfo_, mFAAuthenticationSettingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMFAAuthenticationSettingInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The global MFA verification configuration.
    shared_ptr<GetMFAAuthenticationSettingInfoResponseBody::MFAAuthenticationSettingInfo> MFAAuthenticationSettingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
