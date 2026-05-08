// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSINGLEACTIVITYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSINGLEACTIVITYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketingEvent20210101
{
namespace Models
{
  class QuerySingleActivityInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySingleActivityInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySingleActivityInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QuerySingleActivityInfoResponseBody() = default ;
    QuerySingleActivityInfoResponseBody(const QuerySingleActivityInfoResponseBody &) = default ;
    QuerySingleActivityInfoResponseBody(QuerySingleActivityInfoResponseBody &&) = default ;
    QuerySingleActivityInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySingleActivityInfoResponseBody() = default ;
    QuerySingleActivityInfoResponseBody& operator=(const QuerySingleActivityInfoResponseBody &) = default ;
    QuerySingleActivityInfoResponseBody& operator=(QuerySingleActivityInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ActivityId, activityId_);
        DARABONBA_PTR_TO_JSON(ChannelName, channelName_);
        DARABONBA_PTR_TO_JSON(CompanyName, companyName_);
        DARABONBA_PTR_TO_JSON(CustomerName, customerName_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsVipCustomer, isVipCustomer_);
        DARABONBA_PTR_TO_JSON(Mobile, mobile_);
        DARABONBA_PTR_TO_JSON(QRCode, QRCode_);
        DARABONBA_PTR_TO_JSON(ReportFields, reportFields_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ActivityId, activityId_);
        DARABONBA_PTR_FROM_JSON(ChannelName, channelName_);
        DARABONBA_PTR_FROM_JSON(CompanyName, companyName_);
        DARABONBA_PTR_FROM_JSON(CustomerName, customerName_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsVipCustomer, isVipCustomer_);
        DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
        DARABONBA_PTR_FROM_JSON(QRCode, QRCode_);
        DARABONBA_PTR_FROM_JSON(ReportFields, reportFields_);
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
      virtual bool empty() const override { return this->activityId_ == nullptr
        && this->channelName_ == nullptr && this->companyName_ == nullptr && this->customerName_ == nullptr && this->email_ == nullptr && this->id_ == nullptr
        && this->isVipCustomer_ == nullptr && this->mobile_ == nullptr && this->QRCode_ == nullptr && this->reportFields_ == nullptr; };
      // activityId Field Functions 
      bool hasActivityId() const { return this->activityId_ != nullptr;};
      void deleteActivityId() { this->activityId_ = nullptr;};
      inline int64_t getActivityId() const { DARABONBA_PTR_GET_DEFAULT(activityId_, 0L) };
      inline Data& setActivityId(int64_t activityId) { DARABONBA_PTR_SET_VALUE(activityId_, activityId) };


      // channelName Field Functions 
      bool hasChannelName() const { return this->channelName_ != nullptr;};
      void deleteChannelName() { this->channelName_ = nullptr;};
      inline string getChannelName() const { DARABONBA_PTR_GET_DEFAULT(channelName_, "") };
      inline Data& setChannelName(string channelName) { DARABONBA_PTR_SET_VALUE(channelName_, channelName) };


      // companyName Field Functions 
      bool hasCompanyName() const { return this->companyName_ != nullptr;};
      void deleteCompanyName() { this->companyName_ = nullptr;};
      inline string getCompanyName() const { DARABONBA_PTR_GET_DEFAULT(companyName_, "") };
      inline Data& setCompanyName(string companyName) { DARABONBA_PTR_SET_VALUE(companyName_, companyName) };


      // customerName Field Functions 
      bool hasCustomerName() const { return this->customerName_ != nullptr;};
      void deleteCustomerName() { this->customerName_ = nullptr;};
      inline string getCustomerName() const { DARABONBA_PTR_GET_DEFAULT(customerName_, "") };
      inline Data& setCustomerName(string customerName) { DARABONBA_PTR_SET_VALUE(customerName_, customerName) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isVipCustomer Field Functions 
      bool hasIsVipCustomer() const { return this->isVipCustomer_ != nullptr;};
      void deleteIsVipCustomer() { this->isVipCustomer_ = nullptr;};
      inline string getIsVipCustomer() const { DARABONBA_PTR_GET_DEFAULT(isVipCustomer_, "") };
      inline Data& setIsVipCustomer(string isVipCustomer) { DARABONBA_PTR_SET_VALUE(isVipCustomer_, isVipCustomer) };


      // mobile Field Functions 
      bool hasMobile() const { return this->mobile_ != nullptr;};
      void deleteMobile() { this->mobile_ = nullptr;};
      inline string getMobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
      inline Data& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


      // QRCode Field Functions 
      bool hasQRCode() const { return this->QRCode_ != nullptr;};
      void deleteQRCode() { this->QRCode_ = nullptr;};
      inline string getQRCode() const { DARABONBA_PTR_GET_DEFAULT(QRCode_, "") };
      inline Data& setQRCode(string QRCode) { DARABONBA_PTR_SET_VALUE(QRCode_, QRCode) };


      // reportFields Field Functions 
      bool hasReportFields() const { return this->reportFields_ != nullptr;};
      void deleteReportFields() { this->reportFields_ = nullptr;};
      inline string getReportFields() const { DARABONBA_PTR_GET_DEFAULT(reportFields_, "") };
      inline Data& setReportFields(string reportFields) { DARABONBA_PTR_SET_VALUE(reportFields_, reportFields) };


    protected:
      shared_ptr<int64_t> activityId_ {};
      shared_ptr<string> channelName_ {};
      shared_ptr<string> companyName_ {};
      shared_ptr<string> customerName_ {};
      shared_ptr<string> email_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> isVipCustomer_ {};
      shared_ptr<string> mobile_ {};
      shared_ptr<string> QRCode_ {};
      shared_ptr<string> reportFields_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QuerySingleActivityInfoResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySingleActivityInfoResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QuerySingleActivityInfoResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QuerySingleActivityInfoResponseBody::Data>) };
    inline vector<QuerySingleActivityInfoResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QuerySingleActivityInfoResponseBody::Data>) };
    inline QuerySingleActivityInfoResponseBody& setData(const vector<QuerySingleActivityInfoResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QuerySingleActivityInfoResponseBody& setData(vector<QuerySingleActivityInfoResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline string getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, "") };
    inline QuerySingleActivityInfoResponseBody& setHttpStatusCode(string httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySingleActivityInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySingleActivityInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QuerySingleActivityInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<vector<QuerySingleActivityInfoResponseBody::Data>> data_ {};
    shared_ptr<string> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketingEvent20210101
#endif
