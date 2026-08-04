// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOADREALNAMEINFOBYPKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LOADREALNAMEINFOBYPKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class LoadRealNameInfoByPkResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LoadRealNameInfoByPkResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LoadRealNameInfoByPkResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    LoadRealNameInfoByPkResponseBody() = default ;
    LoadRealNameInfoByPkResponseBody(const LoadRealNameInfoByPkResponseBody &) = default ;
    LoadRealNameInfoByPkResponseBody(LoadRealNameInfoByPkResponseBody &&) = default ;
    LoadRealNameInfoByPkResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LoadRealNameInfoByPkResponseBody() = default ;
    LoadRealNameInfoByPkResponseBody& operator=(const LoadRealNameInfoByPkResponseBody &) = default ;
    LoadRealNameInfoByPkResponseBody& operator=(LoadRealNameInfoByPkResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountCertifyType, accountCertifyType_);
        DARABONBA_PTR_TO_JSON(AuthAlipay, authAlipay_);
        DARABONBA_PTR_TO_JSON(AuthAlipayDomain, authAlipayDomain_);
        DARABONBA_PTR_TO_JSON(AuthAlipayLoginId, authAlipayLoginId_);
        DARABONBA_PTR_TO_JSON(AuthBeiAnCid, authBeiAnCid_);
        DARABONBA_PTR_TO_JSON(AuthDomain, authDomain_);
        DARABONBA_PTR_TO_JSON(CertifiedFrom, certifiedFrom_);
        DARABONBA_PTR_TO_JSON(CertifiedTime, certifiedTime_);
        DARABONBA_PTR_TO_JSON(CertifyStatus, certifyStatus_);
        DARABONBA_PTR_TO_JSON(CicCertifyFrom, cicCertifyFrom_);
        DARABONBA_PTR_TO_JSON(CicCertifyProduct, cicCertifyProduct_);
        DARABONBA_PTR_TO_JSON(IsBankIDAuth, isBankIDAuth_);
        DARABONBA_PTR_TO_JSON(IsCertified, isCertified_);
        DARABONBA_PTR_TO_JSON(LicenseNumber, licenseNumber_);
        DARABONBA_PTR_TO_JSON(LicenseType, licenseType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NewUnityRealNameAccount, newUnityRealNameAccount_);
        DARABONBA_PTR_TO_JSON(ProcessingEnterpriseCertify, processingEnterpriseCertify_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountCertifyType, accountCertifyType_);
        DARABONBA_PTR_FROM_JSON(AuthAlipay, authAlipay_);
        DARABONBA_PTR_FROM_JSON(AuthAlipayDomain, authAlipayDomain_);
        DARABONBA_PTR_FROM_JSON(AuthAlipayLoginId, authAlipayLoginId_);
        DARABONBA_PTR_FROM_JSON(AuthBeiAnCid, authBeiAnCid_);
        DARABONBA_PTR_FROM_JSON(AuthDomain, authDomain_);
        DARABONBA_PTR_FROM_JSON(CertifiedFrom, certifiedFrom_);
        DARABONBA_PTR_FROM_JSON(CertifiedTime, certifiedTime_);
        DARABONBA_PTR_FROM_JSON(CertifyStatus, certifyStatus_);
        DARABONBA_PTR_FROM_JSON(CicCertifyFrom, cicCertifyFrom_);
        DARABONBA_PTR_FROM_JSON(CicCertifyProduct, cicCertifyProduct_);
        DARABONBA_PTR_FROM_JSON(IsBankIDAuth, isBankIDAuth_);
        DARABONBA_PTR_FROM_JSON(IsCertified, isCertified_);
        DARABONBA_PTR_FROM_JSON(LicenseNumber, licenseNumber_);
        DARABONBA_PTR_FROM_JSON(LicenseType, licenseType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NewUnityRealNameAccount, newUnityRealNameAccount_);
        DARABONBA_PTR_FROM_JSON(ProcessingEnterpriseCertify, processingEnterpriseCertify_);
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
      virtual bool empty() const override { return this->accountCertifyType_ == nullptr
        && this->authAlipay_ == nullptr && this->authAlipayDomain_ == nullptr && this->authAlipayLoginId_ == nullptr && this->authBeiAnCid_ == nullptr && this->authDomain_ == nullptr
        && this->certifiedFrom_ == nullptr && this->certifiedTime_ == nullptr && this->certifyStatus_ == nullptr && this->cicCertifyFrom_ == nullptr && this->cicCertifyProduct_ == nullptr
        && this->isBankIDAuth_ == nullptr && this->isCertified_ == nullptr && this->licenseNumber_ == nullptr && this->licenseType_ == nullptr && this->name_ == nullptr
        && this->newUnityRealNameAccount_ == nullptr && this->processingEnterpriseCertify_ == nullptr; };
      // accountCertifyType Field Functions 
      bool hasAccountCertifyType() const { return this->accountCertifyType_ != nullptr;};
      void deleteAccountCertifyType() { this->accountCertifyType_ = nullptr;};
      inline string getAccountCertifyType() const { DARABONBA_PTR_GET_DEFAULT(accountCertifyType_, "") };
      inline Data& setAccountCertifyType(string accountCertifyType) { DARABONBA_PTR_SET_VALUE(accountCertifyType_, accountCertifyType) };


      // authAlipay Field Functions 
      bool hasAuthAlipay() const { return this->authAlipay_ != nullptr;};
      void deleteAuthAlipay() { this->authAlipay_ = nullptr;};
      inline string getAuthAlipay() const { DARABONBA_PTR_GET_DEFAULT(authAlipay_, "") };
      inline Data& setAuthAlipay(string authAlipay) { DARABONBA_PTR_SET_VALUE(authAlipay_, authAlipay) };


      // authAlipayDomain Field Functions 
      bool hasAuthAlipayDomain() const { return this->authAlipayDomain_ != nullptr;};
      void deleteAuthAlipayDomain() { this->authAlipayDomain_ = nullptr;};
      inline string getAuthAlipayDomain() const { DARABONBA_PTR_GET_DEFAULT(authAlipayDomain_, "") };
      inline Data& setAuthAlipayDomain(string authAlipayDomain) { DARABONBA_PTR_SET_VALUE(authAlipayDomain_, authAlipayDomain) };


      // authAlipayLoginId Field Functions 
      bool hasAuthAlipayLoginId() const { return this->authAlipayLoginId_ != nullptr;};
      void deleteAuthAlipayLoginId() { this->authAlipayLoginId_ = nullptr;};
      inline string getAuthAlipayLoginId() const { DARABONBA_PTR_GET_DEFAULT(authAlipayLoginId_, "") };
      inline Data& setAuthAlipayLoginId(string authAlipayLoginId) { DARABONBA_PTR_SET_VALUE(authAlipayLoginId_, authAlipayLoginId) };


      // authBeiAnCid Field Functions 
      bool hasAuthBeiAnCid() const { return this->authBeiAnCid_ != nullptr;};
      void deleteAuthBeiAnCid() { this->authBeiAnCid_ = nullptr;};
      inline string getAuthBeiAnCid() const { DARABONBA_PTR_GET_DEFAULT(authBeiAnCid_, "") };
      inline Data& setAuthBeiAnCid(string authBeiAnCid) { DARABONBA_PTR_SET_VALUE(authBeiAnCid_, authBeiAnCid) };


      // authDomain Field Functions 
      bool hasAuthDomain() const { return this->authDomain_ != nullptr;};
      void deleteAuthDomain() { this->authDomain_ = nullptr;};
      inline string getAuthDomain() const { DARABONBA_PTR_GET_DEFAULT(authDomain_, "") };
      inline Data& setAuthDomain(string authDomain) { DARABONBA_PTR_SET_VALUE(authDomain_, authDomain) };


      // certifiedFrom Field Functions 
      bool hasCertifiedFrom() const { return this->certifiedFrom_ != nullptr;};
      void deleteCertifiedFrom() { this->certifiedFrom_ = nullptr;};
      inline string getCertifiedFrom() const { DARABONBA_PTR_GET_DEFAULT(certifiedFrom_, "") };
      inline Data& setCertifiedFrom(string certifiedFrom) { DARABONBA_PTR_SET_VALUE(certifiedFrom_, certifiedFrom) };


      // certifiedTime Field Functions 
      bool hasCertifiedTime() const { return this->certifiedTime_ != nullptr;};
      void deleteCertifiedTime() { this->certifiedTime_ = nullptr;};
      inline string getCertifiedTime() const { DARABONBA_PTR_GET_DEFAULT(certifiedTime_, "") };
      inline Data& setCertifiedTime(string certifiedTime) { DARABONBA_PTR_SET_VALUE(certifiedTime_, certifiedTime) };


      // certifyStatus Field Functions 
      bool hasCertifyStatus() const { return this->certifyStatus_ != nullptr;};
      void deleteCertifyStatus() { this->certifyStatus_ = nullptr;};
      inline int32_t getCertifyStatus() const { DARABONBA_PTR_GET_DEFAULT(certifyStatus_, 0) };
      inline Data& setCertifyStatus(int32_t certifyStatus) { DARABONBA_PTR_SET_VALUE(certifyStatus_, certifyStatus) };


      // cicCertifyFrom Field Functions 
      bool hasCicCertifyFrom() const { return this->cicCertifyFrom_ != nullptr;};
      void deleteCicCertifyFrom() { this->cicCertifyFrom_ = nullptr;};
      inline int32_t getCicCertifyFrom() const { DARABONBA_PTR_GET_DEFAULT(cicCertifyFrom_, 0) };
      inline Data& setCicCertifyFrom(int32_t cicCertifyFrom) { DARABONBA_PTR_SET_VALUE(cicCertifyFrom_, cicCertifyFrom) };


      // cicCertifyProduct Field Functions 
      bool hasCicCertifyProduct() const { return this->cicCertifyProduct_ != nullptr;};
      void deleteCicCertifyProduct() { this->cicCertifyProduct_ = nullptr;};
      inline int64_t getCicCertifyProduct() const { DARABONBA_PTR_GET_DEFAULT(cicCertifyProduct_, 0L) };
      inline Data& setCicCertifyProduct(int64_t cicCertifyProduct) { DARABONBA_PTR_SET_VALUE(cicCertifyProduct_, cicCertifyProduct) };


      // isBankIDAuth Field Functions 
      bool hasIsBankIDAuth() const { return this->isBankIDAuth_ != nullptr;};
      void deleteIsBankIDAuth() { this->isBankIDAuth_ = nullptr;};
      inline bool getIsBankIDAuth() const { DARABONBA_PTR_GET_DEFAULT(isBankIDAuth_, false) };
      inline Data& setIsBankIDAuth(bool isBankIDAuth) { DARABONBA_PTR_SET_VALUE(isBankIDAuth_, isBankIDAuth) };


      // isCertified Field Functions 
      bool hasIsCertified() const { return this->isCertified_ != nullptr;};
      void deleteIsCertified() { this->isCertified_ = nullptr;};
      inline bool getIsCertified() const { DARABONBA_PTR_GET_DEFAULT(isCertified_, false) };
      inline Data& setIsCertified(bool isCertified) { DARABONBA_PTR_SET_VALUE(isCertified_, isCertified) };


      // licenseNumber Field Functions 
      bool hasLicenseNumber() const { return this->licenseNumber_ != nullptr;};
      void deleteLicenseNumber() { this->licenseNumber_ = nullptr;};
      inline string getLicenseNumber() const { DARABONBA_PTR_GET_DEFAULT(licenseNumber_, "") };
      inline Data& setLicenseNumber(string licenseNumber) { DARABONBA_PTR_SET_VALUE(licenseNumber_, licenseNumber) };


      // licenseType Field Functions 
      bool hasLicenseType() const { return this->licenseType_ != nullptr;};
      void deleteLicenseType() { this->licenseType_ = nullptr;};
      inline string getLicenseType() const { DARABONBA_PTR_GET_DEFAULT(licenseType_, "") };
      inline Data& setLicenseType(string licenseType) { DARABONBA_PTR_SET_VALUE(licenseType_, licenseType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // newUnityRealNameAccount Field Functions 
      bool hasNewUnityRealNameAccount() const { return this->newUnityRealNameAccount_ != nullptr;};
      void deleteNewUnityRealNameAccount() { this->newUnityRealNameAccount_ = nullptr;};
      inline string getNewUnityRealNameAccount() const { DARABONBA_PTR_GET_DEFAULT(newUnityRealNameAccount_, "") };
      inline Data& setNewUnityRealNameAccount(string newUnityRealNameAccount) { DARABONBA_PTR_SET_VALUE(newUnityRealNameAccount_, newUnityRealNameAccount) };


      // processingEnterpriseCertify Field Functions 
      bool hasProcessingEnterpriseCertify() const { return this->processingEnterpriseCertify_ != nullptr;};
      void deleteProcessingEnterpriseCertify() { this->processingEnterpriseCertify_ = nullptr;};
      inline bool getProcessingEnterpriseCertify() const { DARABONBA_PTR_GET_DEFAULT(processingEnterpriseCertify_, false) };
      inline Data& setProcessingEnterpriseCertify(bool processingEnterpriseCertify) { DARABONBA_PTR_SET_VALUE(processingEnterpriseCertify_, processingEnterpriseCertify) };


    protected:
      shared_ptr<string> accountCertifyType_ {};
      shared_ptr<string> authAlipay_ {};
      shared_ptr<string> authAlipayDomain_ {};
      shared_ptr<string> authAlipayLoginId_ {};
      shared_ptr<string> authBeiAnCid_ {};
      shared_ptr<string> authDomain_ {};
      shared_ptr<string> certifiedFrom_ {};
      shared_ptr<string> certifiedTime_ {};
      shared_ptr<int32_t> certifyStatus_ {};
      shared_ptr<int32_t> cicCertifyFrom_ {};
      shared_ptr<int64_t> cicCertifyProduct_ {};
      shared_ptr<bool> isBankIDAuth_ {};
      shared_ptr<bool> isCertified_ {};
      shared_ptr<string> licenseNumber_ {};
      shared_ptr<string> licenseType_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> newUnityRealNameAccount_ {};
      shared_ptr<bool> processingEnterpriseCertify_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline LoadRealNameInfoByPkResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const LoadRealNameInfoByPkResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, LoadRealNameInfoByPkResponseBody::Data) };
    inline LoadRealNameInfoByPkResponseBody::Data getData() { DARABONBA_PTR_GET(data_, LoadRealNameInfoByPkResponseBody::Data) };
    inline LoadRealNameInfoByPkResponseBody& setData(const LoadRealNameInfoByPkResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline LoadRealNameInfoByPkResponseBody& setData(LoadRealNameInfoByPkResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline LoadRealNameInfoByPkResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LoadRealNameInfoByPkResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<LoadRealNameInfoByPkResponseBody::Data> data_ {};
    shared_ptr<string> msg_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
