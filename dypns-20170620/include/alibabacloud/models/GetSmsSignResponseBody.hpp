// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMSSIGNRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class GetSmsSignResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmsSignResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmsSignResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetSmsSignResponseBody() = default ;
    GetSmsSignResponseBody(const GetSmsSignResponseBody &) = default ;
    GetSmsSignResponseBody(GetSmsSignResponseBody &&) = default ;
    GetSmsSignResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmsSignResponseBody() = default ;
    GetSmsSignResponseBody& operator=(const GetSmsSignResponseBody &) = default ;
    GetSmsSignResponseBody& operator=(GetSmsSignResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppUrl, appUrl_);
        DARABONBA_PTR_TO_JSON(AuditResult, auditResult_);
        DARABONBA_PTR_TO_JSON(BusinessLicenseCert, businessLicenseCert_);
        DARABONBA_PTR_TO_JSON(BusinessLicenseCertId, businessLicenseCertId_);
        DARABONBA_PTR_TO_JSON(CertType, certType_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DefaultFlag, defaultFlag_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(OrganizationCodeCert, organizationCodeCert_);
        DARABONBA_PTR_TO_JSON(OrganizationCodeCertId, organizationCodeCertId_);
        DARABONBA_PTR_TO_JSON(SmsSignName, smsSignName_);
        DARABONBA_PTR_TO_JSON(SmsSignRemark, smsSignRemark_);
        DARABONBA_PTR_TO_JSON(SmsSignSource, smsSignSource_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaxRegistrationCert, taxRegistrationCert_);
        DARABONBA_PTR_TO_JSON(TaxRegistrationCertId, taxRegistrationCertId_);
        DARABONBA_PTR_TO_JSON(TestFlag, testFlag_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppUrl, appUrl_);
        DARABONBA_PTR_FROM_JSON(AuditResult, auditResult_);
        DARABONBA_PTR_FROM_JSON(BusinessLicenseCert, businessLicenseCert_);
        DARABONBA_PTR_FROM_JSON(BusinessLicenseCertId, businessLicenseCertId_);
        DARABONBA_PTR_FROM_JSON(CertType, certType_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DefaultFlag, defaultFlag_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(OrganizationCodeCert, organizationCodeCert_);
        DARABONBA_PTR_FROM_JSON(OrganizationCodeCertId, organizationCodeCertId_);
        DARABONBA_PTR_FROM_JSON(SmsSignName, smsSignName_);
        DARABONBA_PTR_FROM_JSON(SmsSignRemark, smsSignRemark_);
        DARABONBA_PTR_FROM_JSON(SmsSignSource, smsSignSource_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaxRegistrationCert, taxRegistrationCert_);
        DARABONBA_PTR_FROM_JSON(TaxRegistrationCertId, taxRegistrationCertId_);
        DARABONBA_PTR_FROM_JSON(TestFlag, testFlag_);
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
      virtual bool empty() const override { return this->appUrl_ == nullptr
        && this->auditResult_ == nullptr && this->businessLicenseCert_ == nullptr && this->businessLicenseCertId_ == nullptr && this->certType_ == nullptr && this->createDate_ == nullptr
        && this->defaultFlag_ == nullptr && this->orderId_ == nullptr && this->organizationCodeCert_ == nullptr && this->organizationCodeCertId_ == nullptr && this->smsSignName_ == nullptr
        && this->smsSignRemark_ == nullptr && this->smsSignSource_ == nullptr && this->status_ == nullptr && this->taxRegistrationCert_ == nullptr && this->taxRegistrationCertId_ == nullptr
        && this->testFlag_ == nullptr; };
      // appUrl Field Functions 
      bool hasAppUrl() const { return this->appUrl_ != nullptr;};
      void deleteAppUrl() { this->appUrl_ = nullptr;};
      inline string getAppUrl() const { DARABONBA_PTR_GET_DEFAULT(appUrl_, "") };
      inline Data& setAppUrl(string appUrl) { DARABONBA_PTR_SET_VALUE(appUrl_, appUrl) };


      // auditResult Field Functions 
      bool hasAuditResult() const { return this->auditResult_ != nullptr;};
      void deleteAuditResult() { this->auditResult_ = nullptr;};
      inline string getAuditResult() const { DARABONBA_PTR_GET_DEFAULT(auditResult_, "") };
      inline Data& setAuditResult(string auditResult) { DARABONBA_PTR_SET_VALUE(auditResult_, auditResult) };


      // businessLicenseCert Field Functions 
      bool hasBusinessLicenseCert() const { return this->businessLicenseCert_ != nullptr;};
      void deleteBusinessLicenseCert() { this->businessLicenseCert_ = nullptr;};
      inline string getBusinessLicenseCert() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseCert_, "") };
      inline Data& setBusinessLicenseCert(string businessLicenseCert) { DARABONBA_PTR_SET_VALUE(businessLicenseCert_, businessLicenseCert) };


      // businessLicenseCertId Field Functions 
      bool hasBusinessLicenseCertId() const { return this->businessLicenseCertId_ != nullptr;};
      void deleteBusinessLicenseCertId() { this->businessLicenseCertId_ = nullptr;};
      inline string getBusinessLicenseCertId() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseCertId_, "") };
      inline Data& setBusinessLicenseCertId(string businessLicenseCertId) { DARABONBA_PTR_SET_VALUE(businessLicenseCertId_, businessLicenseCertId) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
      inline Data& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline int64_t getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, 0L) };
      inline Data& setCreateDate(int64_t createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // defaultFlag Field Functions 
      bool hasDefaultFlag() const { return this->defaultFlag_ != nullptr;};
      void deleteDefaultFlag() { this->defaultFlag_ = nullptr;};
      inline bool getDefaultFlag() const { DARABONBA_PTR_GET_DEFAULT(defaultFlag_, false) };
      inline Data& setDefaultFlag(bool defaultFlag) { DARABONBA_PTR_SET_VALUE(defaultFlag_, defaultFlag) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline Data& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // organizationCodeCert Field Functions 
      bool hasOrganizationCodeCert() const { return this->organizationCodeCert_ != nullptr;};
      void deleteOrganizationCodeCert() { this->organizationCodeCert_ = nullptr;};
      inline string getOrganizationCodeCert() const { DARABONBA_PTR_GET_DEFAULT(organizationCodeCert_, "") };
      inline Data& setOrganizationCodeCert(string organizationCodeCert) { DARABONBA_PTR_SET_VALUE(organizationCodeCert_, organizationCodeCert) };


      // organizationCodeCertId Field Functions 
      bool hasOrganizationCodeCertId() const { return this->organizationCodeCertId_ != nullptr;};
      void deleteOrganizationCodeCertId() { this->organizationCodeCertId_ = nullptr;};
      inline string getOrganizationCodeCertId() const { DARABONBA_PTR_GET_DEFAULT(organizationCodeCertId_, "") };
      inline Data& setOrganizationCodeCertId(string organizationCodeCertId) { DARABONBA_PTR_SET_VALUE(organizationCodeCertId_, organizationCodeCertId) };


      // smsSignName Field Functions 
      bool hasSmsSignName() const { return this->smsSignName_ != nullptr;};
      void deleteSmsSignName() { this->smsSignName_ = nullptr;};
      inline string getSmsSignName() const { DARABONBA_PTR_GET_DEFAULT(smsSignName_, "") };
      inline Data& setSmsSignName(string smsSignName) { DARABONBA_PTR_SET_VALUE(smsSignName_, smsSignName) };


      // smsSignRemark Field Functions 
      bool hasSmsSignRemark() const { return this->smsSignRemark_ != nullptr;};
      void deleteSmsSignRemark() { this->smsSignRemark_ = nullptr;};
      inline string getSmsSignRemark() const { DARABONBA_PTR_GET_DEFAULT(smsSignRemark_, "") };
      inline Data& setSmsSignRemark(string smsSignRemark) { DARABONBA_PTR_SET_VALUE(smsSignRemark_, smsSignRemark) };


      // smsSignSource Field Functions 
      bool hasSmsSignSource() const { return this->smsSignSource_ != nullptr;};
      void deleteSmsSignSource() { this->smsSignSource_ = nullptr;};
      inline string getSmsSignSource() const { DARABONBA_PTR_GET_DEFAULT(smsSignSource_, "") };
      inline Data& setSmsSignSource(string smsSignSource) { DARABONBA_PTR_SET_VALUE(smsSignSource_, smsSignSource) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taxRegistrationCert Field Functions 
      bool hasTaxRegistrationCert() const { return this->taxRegistrationCert_ != nullptr;};
      void deleteTaxRegistrationCert() { this->taxRegistrationCert_ = nullptr;};
      inline string getTaxRegistrationCert() const { DARABONBA_PTR_GET_DEFAULT(taxRegistrationCert_, "") };
      inline Data& setTaxRegistrationCert(string taxRegistrationCert) { DARABONBA_PTR_SET_VALUE(taxRegistrationCert_, taxRegistrationCert) };


      // taxRegistrationCertId Field Functions 
      bool hasTaxRegistrationCertId() const { return this->taxRegistrationCertId_ != nullptr;};
      void deleteTaxRegistrationCertId() { this->taxRegistrationCertId_ = nullptr;};
      inline string getTaxRegistrationCertId() const { DARABONBA_PTR_GET_DEFAULT(taxRegistrationCertId_, "") };
      inline Data& setTaxRegistrationCertId(string taxRegistrationCertId) { DARABONBA_PTR_SET_VALUE(taxRegistrationCertId_, taxRegistrationCertId) };


      // testFlag Field Functions 
      bool hasTestFlag() const { return this->testFlag_ != nullptr;};
      void deleteTestFlag() { this->testFlag_ = nullptr;};
      inline bool getTestFlag() const { DARABONBA_PTR_GET_DEFAULT(testFlag_, false) };
      inline Data& setTestFlag(bool testFlag) { DARABONBA_PTR_SET_VALUE(testFlag_, testFlag) };


    protected:
      shared_ptr<string> appUrl_ {};
      shared_ptr<string> auditResult_ {};
      shared_ptr<string> businessLicenseCert_ {};
      shared_ptr<string> businessLicenseCertId_ {};
      shared_ptr<string> certType_ {};
      shared_ptr<int64_t> createDate_ {};
      shared_ptr<bool> defaultFlag_ {};
      shared_ptr<string> orderId_ {};
      shared_ptr<string> organizationCodeCert_ {};
      shared_ptr<string> organizationCodeCertId_ {};
      shared_ptr<string> smsSignName_ {};
      shared_ptr<string> smsSignRemark_ {};
      shared_ptr<string> smsSignSource_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> taxRegistrationCert_ {};
      shared_ptr<string> taxRegistrationCertId_ {};
      shared_ptr<bool> testFlag_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetSmsSignResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetSmsSignResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetSmsSignResponseBody::Data>) };
    inline vector<GetSmsSignResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetSmsSignResponseBody::Data>) };
    inline GetSmsSignResponseBody& setData(const vector<GetSmsSignResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSmsSignResponseBody& setData(vector<GetSmsSignResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetSmsSignResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmsSignResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetSmsSignResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
