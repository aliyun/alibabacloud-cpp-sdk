// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETENTERPRISEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETENTERPRISEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class GetEnterpriseInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEnterpriseInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetEnterpriseInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetEnterpriseInfoResponseBody() = default ;
    GetEnterpriseInfoResponseBody(const GetEnterpriseInfoResponseBody &) = default ;
    GetEnterpriseInfoResponseBody(GetEnterpriseInfoResponseBody &&) = default ;
    GetEnterpriseInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEnterpriseInfoResponseBody() = default ;
    GetEnterpriseInfoResponseBody& operator=(const GetEnterpriseInfoResponseBody &) = default ;
    GetEnterpriseInfoResponseBody& operator=(GetEnterpriseInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuditDesc, auditDesc_);
        DARABONBA_PTR_TO_JSON(AuditTime, auditTime_);
        DARABONBA_PTR_TO_JSON(BusinessLicenseAddress, businessLicenseAddress_);
        DARABONBA_PTR_TO_JSON(BusinessLicensePicture, businessLicensePicture_);
        DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_TO_JSON(EnterpriseName, enterpriseName_);
        DARABONBA_PTR_TO_JSON(LegalPersonCertNumber, legalPersonCertNumber_);
        DARABONBA_PTR_TO_JSON(LegalPersonCertPicture, legalPersonCertPicture_);
        DARABONBA_PTR_TO_JSON(LegalPersonName, legalPersonName_);
        DARABONBA_PTR_TO_JSON(ManagerCertNumber, managerCertNumber_);
        DARABONBA_PTR_TO_JSON(ManagerCertPicture, managerCertPicture_);
        DARABONBA_PTR_TO_JSON(ManagerContactNumber, managerContactNumber_);
        DARABONBA_PTR_TO_JSON(ManagerName, managerName_);
        DARABONBA_PTR_TO_JSON(NumberApplicationLetterPicture, numberApplicationLetterPicture_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UndertakingPicture, undertakingPicture_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditDesc, auditDesc_);
        DARABONBA_PTR_FROM_JSON(AuditTime, auditTime_);
        DARABONBA_PTR_FROM_JSON(BusinessLicenseAddress, businessLicenseAddress_);
        DARABONBA_PTR_FROM_JSON(BusinessLicensePicture, businessLicensePicture_);
        DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
        DARABONBA_PTR_FROM_JSON(EnterpriseName, enterpriseName_);
        DARABONBA_PTR_FROM_JSON(LegalPersonCertNumber, legalPersonCertNumber_);
        DARABONBA_PTR_FROM_JSON(LegalPersonCertPicture, legalPersonCertPicture_);
        DARABONBA_PTR_FROM_JSON(LegalPersonName, legalPersonName_);
        DARABONBA_PTR_FROM_JSON(ManagerCertNumber, managerCertNumber_);
        DARABONBA_PTR_FROM_JSON(ManagerCertPicture, managerCertPicture_);
        DARABONBA_PTR_FROM_JSON(ManagerContactNumber, managerContactNumber_);
        DARABONBA_PTR_FROM_JSON(ManagerName, managerName_);
        DARABONBA_PTR_FROM_JSON(NumberApplicationLetterPicture, numberApplicationLetterPicture_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UndertakingPicture, undertakingPicture_);
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
      virtual bool empty() const override { return this->auditDesc_ == nullptr
        && this->auditTime_ == nullptr && this->businessLicenseAddress_ == nullptr && this->businessLicensePicture_ == nullptr && this->enterpriseId_ == nullptr && this->enterpriseName_ == nullptr
        && this->legalPersonCertNumber_ == nullptr && this->legalPersonCertPicture_ == nullptr && this->legalPersonName_ == nullptr && this->managerCertNumber_ == nullptr && this->managerCertPicture_ == nullptr
        && this->managerContactNumber_ == nullptr && this->managerName_ == nullptr && this->numberApplicationLetterPicture_ == nullptr && this->orderId_ == nullptr && this->organizationCode_ == nullptr
        && this->remark_ == nullptr && this->status_ == nullptr && this->undertakingPicture_ == nullptr; };
      // auditDesc Field Functions 
      bool hasAuditDesc() const { return this->auditDesc_ != nullptr;};
      void deleteAuditDesc() { this->auditDesc_ = nullptr;};
      inline string getAuditDesc() const { DARABONBA_PTR_GET_DEFAULT(auditDesc_, "") };
      inline Data& setAuditDesc(string auditDesc) { DARABONBA_PTR_SET_VALUE(auditDesc_, auditDesc) };


      // auditTime Field Functions 
      bool hasAuditTime() const { return this->auditTime_ != nullptr;};
      void deleteAuditTime() { this->auditTime_ = nullptr;};
      inline string getAuditTime() const { DARABONBA_PTR_GET_DEFAULT(auditTime_, "") };
      inline Data& setAuditTime(string auditTime) { DARABONBA_PTR_SET_VALUE(auditTime_, auditTime) };


      // businessLicenseAddress Field Functions 
      bool hasBusinessLicenseAddress() const { return this->businessLicenseAddress_ != nullptr;};
      void deleteBusinessLicenseAddress() { this->businessLicenseAddress_ = nullptr;};
      inline string getBusinessLicenseAddress() const { DARABONBA_PTR_GET_DEFAULT(businessLicenseAddress_, "") };
      inline Data& setBusinessLicenseAddress(string businessLicenseAddress) { DARABONBA_PTR_SET_VALUE(businessLicenseAddress_, businessLicenseAddress) };


      // businessLicensePicture Field Functions 
      bool hasBusinessLicensePicture() const { return this->businessLicensePicture_ != nullptr;};
      void deleteBusinessLicensePicture() { this->businessLicensePicture_ = nullptr;};
      inline string getBusinessLicensePicture() const { DARABONBA_PTR_GET_DEFAULT(businessLicensePicture_, "") };
      inline Data& setBusinessLicensePicture(string businessLicensePicture) { DARABONBA_PTR_SET_VALUE(businessLicensePicture_, businessLicensePicture) };


      // enterpriseId Field Functions 
      bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
      void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
      inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
      inline Data& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


      // enterpriseName Field Functions 
      bool hasEnterpriseName() const { return this->enterpriseName_ != nullptr;};
      void deleteEnterpriseName() { this->enterpriseName_ = nullptr;};
      inline string getEnterpriseName() const { DARABONBA_PTR_GET_DEFAULT(enterpriseName_, "") };
      inline Data& setEnterpriseName(string enterpriseName) { DARABONBA_PTR_SET_VALUE(enterpriseName_, enterpriseName) };


      // legalPersonCertNumber Field Functions 
      bool hasLegalPersonCertNumber() const { return this->legalPersonCertNumber_ != nullptr;};
      void deleteLegalPersonCertNumber() { this->legalPersonCertNumber_ = nullptr;};
      inline string getLegalPersonCertNumber() const { DARABONBA_PTR_GET_DEFAULT(legalPersonCertNumber_, "") };
      inline Data& setLegalPersonCertNumber(string legalPersonCertNumber) { DARABONBA_PTR_SET_VALUE(legalPersonCertNumber_, legalPersonCertNumber) };


      // legalPersonCertPicture Field Functions 
      bool hasLegalPersonCertPicture() const { return this->legalPersonCertPicture_ != nullptr;};
      void deleteLegalPersonCertPicture() { this->legalPersonCertPicture_ = nullptr;};
      inline string getLegalPersonCertPicture() const { DARABONBA_PTR_GET_DEFAULT(legalPersonCertPicture_, "") };
      inline Data& setLegalPersonCertPicture(string legalPersonCertPicture) { DARABONBA_PTR_SET_VALUE(legalPersonCertPicture_, legalPersonCertPicture) };


      // legalPersonName Field Functions 
      bool hasLegalPersonName() const { return this->legalPersonName_ != nullptr;};
      void deleteLegalPersonName() { this->legalPersonName_ = nullptr;};
      inline string getLegalPersonName() const { DARABONBA_PTR_GET_DEFAULT(legalPersonName_, "") };
      inline Data& setLegalPersonName(string legalPersonName) { DARABONBA_PTR_SET_VALUE(legalPersonName_, legalPersonName) };


      // managerCertNumber Field Functions 
      bool hasManagerCertNumber() const { return this->managerCertNumber_ != nullptr;};
      void deleteManagerCertNumber() { this->managerCertNumber_ = nullptr;};
      inline string getManagerCertNumber() const { DARABONBA_PTR_GET_DEFAULT(managerCertNumber_, "") };
      inline Data& setManagerCertNumber(string managerCertNumber) { DARABONBA_PTR_SET_VALUE(managerCertNumber_, managerCertNumber) };


      // managerCertPicture Field Functions 
      bool hasManagerCertPicture() const { return this->managerCertPicture_ != nullptr;};
      void deleteManagerCertPicture() { this->managerCertPicture_ = nullptr;};
      inline string getManagerCertPicture() const { DARABONBA_PTR_GET_DEFAULT(managerCertPicture_, "") };
      inline Data& setManagerCertPicture(string managerCertPicture) { DARABONBA_PTR_SET_VALUE(managerCertPicture_, managerCertPicture) };


      // managerContactNumber Field Functions 
      bool hasManagerContactNumber() const { return this->managerContactNumber_ != nullptr;};
      void deleteManagerContactNumber() { this->managerContactNumber_ = nullptr;};
      inline string getManagerContactNumber() const { DARABONBA_PTR_GET_DEFAULT(managerContactNumber_, "") };
      inline Data& setManagerContactNumber(string managerContactNumber) { DARABONBA_PTR_SET_VALUE(managerContactNumber_, managerContactNumber) };


      // managerName Field Functions 
      bool hasManagerName() const { return this->managerName_ != nullptr;};
      void deleteManagerName() { this->managerName_ = nullptr;};
      inline string getManagerName() const { DARABONBA_PTR_GET_DEFAULT(managerName_, "") };
      inline Data& setManagerName(string managerName) { DARABONBA_PTR_SET_VALUE(managerName_, managerName) };


      // numberApplicationLetterPicture Field Functions 
      bool hasNumberApplicationLetterPicture() const { return this->numberApplicationLetterPicture_ != nullptr;};
      void deleteNumberApplicationLetterPicture() { this->numberApplicationLetterPicture_ = nullptr;};
      inline string getNumberApplicationLetterPicture() const { DARABONBA_PTR_GET_DEFAULT(numberApplicationLetterPicture_, "") };
      inline Data& setNumberApplicationLetterPicture(string numberApplicationLetterPicture) { DARABONBA_PTR_SET_VALUE(numberApplicationLetterPicture_, numberApplicationLetterPicture) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Data& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // organizationCode Field Functions 
      bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
      void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
      inline string getOrganizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
      inline Data& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // undertakingPicture Field Functions 
      bool hasUndertakingPicture() const { return this->undertakingPicture_ != nullptr;};
      void deleteUndertakingPicture() { this->undertakingPicture_ = nullptr;};
      inline string getUndertakingPicture() const { DARABONBA_PTR_GET_DEFAULT(undertakingPicture_, "") };
      inline Data& setUndertakingPicture(string undertakingPicture) { DARABONBA_PTR_SET_VALUE(undertakingPicture_, undertakingPicture) };


    protected:
      shared_ptr<string> auditDesc_ {};
      shared_ptr<string> auditTime_ {};
      shared_ptr<string> businessLicenseAddress_ {};
      shared_ptr<string> businessLicensePicture_ {};
      shared_ptr<int64_t> enterpriseId_ {};
      shared_ptr<string> enterpriseName_ {};
      shared_ptr<string> legalPersonCertNumber_ {};
      shared_ptr<string> legalPersonCertPicture_ {};
      shared_ptr<string> legalPersonName_ {};
      shared_ptr<string> managerCertNumber_ {};
      shared_ptr<string> managerCertPicture_ {};
      shared_ptr<string> managerContactNumber_ {};
      shared_ptr<string> managerName_ {};
      shared_ptr<string> numberApplicationLetterPicture_ {};
      shared_ptr<int64_t> orderId_ {};
      shared_ptr<string> organizationCode_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<int32_t> status_ {};
      shared_ptr<string> undertakingPicture_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetEnterpriseInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetEnterpriseInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetEnterpriseInfoResponseBody::Data) };
    inline GetEnterpriseInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetEnterpriseInfoResponseBody::Data) };
    inline GetEnterpriseInfoResponseBody& setData(const GetEnterpriseInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetEnterpriseInfoResponseBody& setData(GetEnterpriseInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEnterpriseInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEnterpriseInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetEnterpriseInfoResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
