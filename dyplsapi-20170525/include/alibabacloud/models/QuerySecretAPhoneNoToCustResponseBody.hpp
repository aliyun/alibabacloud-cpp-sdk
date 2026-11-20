// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSECRETAPHONENOTOCUSTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSECRETAPHONENOTOCUSTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyplsapi20170525
{
namespace Models
{
  class QuerySecretAPhoneNoToCustResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySecretAPhoneNoToCustResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySecretAPhoneNoToCustResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySecretAPhoneNoToCustResponseBody() = default ;
    QuerySecretAPhoneNoToCustResponseBody(const QuerySecretAPhoneNoToCustResponseBody &) = default ;
    QuerySecretAPhoneNoToCustResponseBody(QuerySecretAPhoneNoToCustResponseBody &&) = default ;
    QuerySecretAPhoneNoToCustResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySecretAPhoneNoToCustResponseBody() = default ;
    QuerySecretAPhoneNoToCustResponseBody& operator=(const QuerySecretAPhoneNoToCustResponseBody &) = default ;
    QuerySecretAPhoneNoToCustResponseBody& operator=(QuerySecretAPhoneNoToCustResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
        DARABONBA_PTR_TO_JSON(CustPhoneNo, custPhoneNo_);
        DARABONBA_PTR_TO_JSON(NoType, noType_);
        DARABONBA_PTR_TO_JSON(PhoneNoA, phoneNoA_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(ReportResult, reportResult_);
        DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ANoWhiteGroupId, ANoWhiteGroupId_);
        DARABONBA_PTR_FROM_JSON(CustPhoneNo, custPhoneNo_);
        DARABONBA_PTR_FROM_JSON(NoType, noType_);
        DARABONBA_PTR_FROM_JSON(PhoneNoA, phoneNoA_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(ReportResult, reportResult_);
        DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
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
      virtual bool empty() const override { return this->ANoWhiteGroupId_ == nullptr
        && this->custPhoneNo_ == nullptr && this->noType_ == nullptr && this->phoneNoA_ == nullptr && this->remark_ == nullptr && this->reportResult_ == nullptr
        && this->reportStatus_ == nullptr; };
      // ANoWhiteGroupId Field Functions 
      bool hasANoWhiteGroupId() const { return this->ANoWhiteGroupId_ != nullptr;};
      void deleteANoWhiteGroupId() { this->ANoWhiteGroupId_ = nullptr;};
      inline string getANoWhiteGroupId() const { DARABONBA_PTR_GET_DEFAULT(ANoWhiteGroupId_, "") };
      inline Data& setANoWhiteGroupId(string ANoWhiteGroupId) { DARABONBA_PTR_SET_VALUE(ANoWhiteGroupId_, ANoWhiteGroupId) };


      // custPhoneNo Field Functions 
      bool hasCustPhoneNo() const { return this->custPhoneNo_ != nullptr;};
      void deleteCustPhoneNo() { this->custPhoneNo_ = nullptr;};
      inline string getCustPhoneNo() const { DARABONBA_PTR_GET_DEFAULT(custPhoneNo_, "") };
      inline Data& setCustPhoneNo(string custPhoneNo) { DARABONBA_PTR_SET_VALUE(custPhoneNo_, custPhoneNo) };


      // noType Field Functions 
      bool hasNoType() const { return this->noType_ != nullptr;};
      void deleteNoType() { this->noType_ = nullptr;};
      inline string getNoType() const { DARABONBA_PTR_GET_DEFAULT(noType_, "") };
      inline Data& setNoType(string noType) { DARABONBA_PTR_SET_VALUE(noType_, noType) };


      // phoneNoA Field Functions 
      bool hasPhoneNoA() const { return this->phoneNoA_ != nullptr;};
      void deletePhoneNoA() { this->phoneNoA_ = nullptr;};
      inline string getPhoneNoA() const { DARABONBA_PTR_GET_DEFAULT(phoneNoA_, "") };
      inline Data& setPhoneNoA(string phoneNoA) { DARABONBA_PTR_SET_VALUE(phoneNoA_, phoneNoA) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // reportResult Field Functions 
      bool hasReportResult() const { return this->reportResult_ != nullptr;};
      void deleteReportResult() { this->reportResult_ = nullptr;};
      inline string getReportResult() const { DARABONBA_PTR_GET_DEFAULT(reportResult_, "") };
      inline Data& setReportResult(string reportResult) { DARABONBA_PTR_SET_VALUE(reportResult_, reportResult) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
      inline Data& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    protected:
      // The ID of the A number group to which the number belongs.
      shared_ptr<string> ANoWhiteGroupId_ {};
      // The contact phone number of the handler or legal representative for landline reporting.
      shared_ptr<string> custPhoneNo_ {};
      // The number type. Valid values:
      // 
      // - Mobile: Mobile phone number.
      // 
      // - Fixed: Landline number.
      shared_ptr<string> noType_ {};
      // A number.
      shared_ptr<string> phoneNoA_ {};
      // Remarks (user\\"s own business notes).
      shared_ptr<string> remark_ {};
      // The reason for review failure.
      shared_ptr<string> reportResult_ {};
      // The reporting result. Valid values:
      // 
      // - REVIEWING: Under review.
      // 
      // - PASS: Review passed.
      // 
      // - FAIL: Review failed.
      shared_ptr<string> reportStatus_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QuerySecretAPhoneNoToCustResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySecretAPhoneNoToCustResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QuerySecretAPhoneNoToCustResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QuerySecretAPhoneNoToCustResponseBody::Data) };
    inline QuerySecretAPhoneNoToCustResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QuerySecretAPhoneNoToCustResponseBody::Data) };
    inline QuerySecretAPhoneNoToCustResponseBody& setData(const QuerySecretAPhoneNoToCustResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySecretAPhoneNoToCustResponseBody& setData(QuerySecretAPhoneNoToCustResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySecretAPhoneNoToCustResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySecretAPhoneNoToCustResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySecretAPhoneNoToCustResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Details of the denied access.
    shared_ptr<string> accessDeniedDetail_ {};
    // Request status code.
    shared_ptr<string> code_ {};
    // The struct for querying the A number reporting status.
    shared_ptr<QuerySecretAPhoneNoToCustResponseBody::Data> data_ {};
    // Error message for a failed operation.
    shared_ptr<string> message_ {};
    // The returned ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request succeeded. Valid values:
    // 
    // - true: Succeeded.
    // 
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyplsapi20170525
#endif
