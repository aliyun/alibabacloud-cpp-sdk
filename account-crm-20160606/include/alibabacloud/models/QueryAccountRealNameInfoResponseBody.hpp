// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYACCOUNTREALNAMEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYACCOUNTREALNAMEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryAccountRealNameInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAccountRealNameInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAccountRealNameInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ProfileInfo, profileInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryAccountRealNameInfoResponseBody() = default ;
    QueryAccountRealNameInfoResponseBody(const QueryAccountRealNameInfoResponseBody &) = default ;
    QueryAccountRealNameInfoResponseBody(QueryAccountRealNameInfoResponseBody &&) = default ;
    QueryAccountRealNameInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAccountRealNameInfoResponseBody() = default ;
    QueryAccountRealNameInfoResponseBody& operator=(const QueryAccountRealNameInfoResponseBody &) = default ;
    QueryAccountRealNameInfoResponseBody& operator=(QueryAccountRealNameInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ProfileInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ProfileInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AccountCertifyType, accountCertifyType_);
        DARABONBA_PTR_TO_JSON(AuthAlipay, authAlipay_);
        DARABONBA_PTR_TO_JSON(AuthBeiAnCid, authBeiAnCid_);
        DARABONBA_PTR_TO_JSON(AuthDomain, authDomain_);
        DARABONBA_PTR_TO_JSON(CertifiedFrom, certifiedFrom_);
        DARABONBA_PTR_TO_JSON(CertifiedTime, certifiedTime_);
        DARABONBA_PTR_TO_JSON(IsBankIDAuth, isBankIDAuth_);
        DARABONBA_PTR_TO_JSON(IsCertified, isCertified_);
        DARABONBA_PTR_TO_JSON(LicenseNumber, licenseNumber_);
        DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ProcessingEnterpriseCertify, processingEnterpriseCertify_);
      };
      friend void from_json(const Darabonba::Json& j, ProfileInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountCertifyType, accountCertifyType_);
        DARABONBA_PTR_FROM_JSON(AuthAlipay, authAlipay_);
        DARABONBA_PTR_FROM_JSON(AuthBeiAnCid, authBeiAnCid_);
        DARABONBA_PTR_FROM_JSON(AuthDomain, authDomain_);
        DARABONBA_PTR_FROM_JSON(CertifiedFrom, certifiedFrom_);
        DARABONBA_PTR_FROM_JSON(CertifiedTime, certifiedTime_);
        DARABONBA_PTR_FROM_JSON(IsBankIDAuth, isBankIDAuth_);
        DARABONBA_PTR_FROM_JSON(IsCertified, isCertified_);
        DARABONBA_PTR_FROM_JSON(LicenseNumber, licenseNumber_);
        DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ProcessingEnterpriseCertify, processingEnterpriseCertify_);
      };
      ProfileInfo() = default ;
      ProfileInfo(const ProfileInfo &) = default ;
      ProfileInfo(ProfileInfo &&) = default ;
      ProfileInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ProfileInfo() = default ;
      ProfileInfo& operator=(const ProfileInfo &) = default ;
      ProfileInfo& operator=(ProfileInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountCertifyType_ == nullptr
        && this->authAlipay_ == nullptr && this->authBeiAnCid_ == nullptr && this->authDomain_ == nullptr && this->certifiedFrom_ == nullptr && this->certifiedTime_ == nullptr
        && this->isBankIDAuth_ == nullptr && this->isCertified_ == nullptr && this->licenseNumber_ == nullptr && this->licenseType_ == nullptr && this->name_ == nullptr
        && this->processingEnterpriseCertify_ == nullptr; };
      // accountCertifyType Field Functions 
      bool hasAccountCertifyType() const { return this->accountCertifyType_ != nullptr;};
      void deleteAccountCertifyType() { this->accountCertifyType_ = nullptr;};
      inline string getAccountCertifyType() const { DARABONBA_PTR_GET_DEFAULT(accountCertifyType_, "") };
      inline ProfileInfo& setAccountCertifyType(string accountCertifyType) { DARABONBA_PTR_SET_VALUE(accountCertifyType_, accountCertifyType) };


      // authAlipay Field Functions 
      bool hasAuthAlipay() const { return this->authAlipay_ != nullptr;};
      void deleteAuthAlipay() { this->authAlipay_ = nullptr;};
      inline string getAuthAlipay() const { DARABONBA_PTR_GET_DEFAULT(authAlipay_, "") };
      inline ProfileInfo& setAuthAlipay(string authAlipay) { DARABONBA_PTR_SET_VALUE(authAlipay_, authAlipay) };


      // authBeiAnCid Field Functions 
      bool hasAuthBeiAnCid() const { return this->authBeiAnCid_ != nullptr;};
      void deleteAuthBeiAnCid() { this->authBeiAnCid_ = nullptr;};
      inline string getAuthBeiAnCid() const { DARABONBA_PTR_GET_DEFAULT(authBeiAnCid_, "") };
      inline ProfileInfo& setAuthBeiAnCid(string authBeiAnCid) { DARABONBA_PTR_SET_VALUE(authBeiAnCid_, authBeiAnCid) };


      // authDomain Field Functions 
      bool hasAuthDomain() const { return this->authDomain_ != nullptr;};
      void deleteAuthDomain() { this->authDomain_ = nullptr;};
      inline string getAuthDomain() const { DARABONBA_PTR_GET_DEFAULT(authDomain_, "") };
      inline ProfileInfo& setAuthDomain(string authDomain) { DARABONBA_PTR_SET_VALUE(authDomain_, authDomain) };


      // certifiedFrom Field Functions 
      bool hasCertifiedFrom() const { return this->certifiedFrom_ != nullptr;};
      void deleteCertifiedFrom() { this->certifiedFrom_ = nullptr;};
      inline string getCertifiedFrom() const { DARABONBA_PTR_GET_DEFAULT(certifiedFrom_, "") };
      inline ProfileInfo& setCertifiedFrom(string certifiedFrom) { DARABONBA_PTR_SET_VALUE(certifiedFrom_, certifiedFrom) };


      // certifiedTime Field Functions 
      bool hasCertifiedTime() const { return this->certifiedTime_ != nullptr;};
      void deleteCertifiedTime() { this->certifiedTime_ = nullptr;};
      inline string getCertifiedTime() const { DARABONBA_PTR_GET_DEFAULT(certifiedTime_, "") };
      inline ProfileInfo& setCertifiedTime(string certifiedTime) { DARABONBA_PTR_SET_VALUE(certifiedTime_, certifiedTime) };


      // isBankIDAuth Field Functions 
      bool hasIsBankIDAuth() const { return this->isBankIDAuth_ != nullptr;};
      void deleteIsBankIDAuth() { this->isBankIDAuth_ = nullptr;};
      inline string getIsBankIDAuth() const { DARABONBA_PTR_GET_DEFAULT(isBankIDAuth_, "") };
      inline ProfileInfo& setIsBankIDAuth(string isBankIDAuth) { DARABONBA_PTR_SET_VALUE(isBankIDAuth_, isBankIDAuth) };


      // isCertified Field Functions 
      bool hasIsCertified() const { return this->isCertified_ != nullptr;};
      void deleteIsCertified() { this->isCertified_ = nullptr;};
      inline string getIsCertified() const { DARABONBA_PTR_GET_DEFAULT(isCertified_, "") };
      inline ProfileInfo& setIsCertified(string isCertified) { DARABONBA_PTR_SET_VALUE(isCertified_, isCertified) };


      // licenseNumber Field Functions 
      bool hasLicenseNumber() const { return this->licenseNumber_ != nullptr;};
      void deleteLicenseNumber() { this->licenseNumber_ = nullptr;};
      inline string getLicenseNumber() const { DARABONBA_PTR_GET_DEFAULT(licenseNumber_, "") };
      inline ProfileInfo& setLicenseNumber(string licenseNumber) { DARABONBA_PTR_SET_VALUE(licenseNumber_, licenseNumber) };


      // licenseType Field Functions 
      bool hasLicenseType() const { return this->licenseType_ != nullptr;};
      void deleteLicenseType() { this->licenseType_ = nullptr;};
      inline string getLicenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
      inline ProfileInfo& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ProfileInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // processingEnterpriseCertify Field Functions 
      bool hasProcessingEnterpriseCertify() const { return this->processingEnterpriseCertify_ != nullptr;};
      void deleteProcessingEnterpriseCertify() { this->processingEnterpriseCertify_ = nullptr;};
      inline bool getProcessingEnterpriseCertify() const { DARABONBA_PTR_GET_DEFAULT(processingEnterpriseCertify_, false) };
      inline ProfileInfo& setProcessingEnterpriseCertify(bool processingEnterpriseCertify) { DARABONBA_PTR_SET_VALUE(processingEnterpriseCertify_, processingEnterpriseCertify) };


    protected:
      shared_ptr<string> accountCertifyType_ {};
      shared_ptr<string> authAlipay_ {};
      shared_ptr<string> authBeiAnCid_ {};
      shared_ptr<string> authDomain_ {};
      shared_ptr<string> certifiedFrom_ {};
      shared_ptr<string> certifiedTime_ {};
      shared_ptr<string> isBankIDAuth_ {};
      shared_ptr<string> isCertified_ {};
      shared_ptr<string> licenseNumber_ {};
      shared_ptr<string> licenseType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<bool> processingEnterpriseCertify_ {};
    };

    virtual bool empty() const override { return this->profileInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // profileInfo Field Functions 
    bool hasProfileInfo() const { return this->profileInfo_ != nullptr;};
    void deleteProfileInfo() { this->profileInfo_ = nullptr;};
    inline const QueryAccountRealNameInfoResponseBody::ProfileInfo & getProfileInfo() const { DARABONBA_PTR_GET_CONST(profileInfo_, QueryAccountRealNameInfoResponseBody::ProfileInfo) };
    inline QueryAccountRealNameInfoResponseBody::ProfileInfo getProfileInfo() { DARABONBA_PTR_GET(profileInfo_, QueryAccountRealNameInfoResponseBody::ProfileInfo) };
    inline QueryAccountRealNameInfoResponseBody& setProfileInfo(const QueryAccountRealNameInfoResponseBody::ProfileInfo & profileInfo) { DARABONBA_PTR_SET_VALUE(profileInfo_, profileInfo) };
    inline QueryAccountRealNameInfoResponseBody& setProfileInfo(QueryAccountRealNameInfoResponseBody::ProfileInfo && profileInfo) { DARABONBA_PTR_SET_RVALUE(profileInfo_, profileInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAccountRealNameInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<QueryAccountRealNameInfoResponseBody::ProfileInfo> profileInfo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
