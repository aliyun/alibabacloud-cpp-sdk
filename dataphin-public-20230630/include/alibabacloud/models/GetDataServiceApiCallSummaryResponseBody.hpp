// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiCallSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiCallSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiCallSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataServiceApiCallSummaryResponseBody() = default ;
    GetDataServiceApiCallSummaryResponseBody(const GetDataServiceApiCallSummaryResponseBody &) = default ;
    GetDataServiceApiCallSummaryResponseBody(GetDataServiceApiCallSummaryResponseBody &&) = default ;
    GetDataServiceApiCallSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiCallSummaryResponseBody() = default ;
    GetDataServiceApiCallSummaryResponseBody& operator=(const GetDataServiceApiCallSummaryResponseBody &) = default ;
    GetDataServiceApiCallSummaryResponseBody& operator=(GetDataServiceApiCallSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallCount, callCount_);
        DARABONBA_PTR_TO_JSON(ErrorApiCount, errorApiCount_);
        DARABONBA_PTR_TO_JSON(ErrorAppCount, errorAppCount_);
        DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
        DARABONBA_PTR_TO_JSON(ErrorRate, errorRate_);
        DARABONBA_PTR_TO_JSON(OfflineRate, offlineRate_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
        DARABONBA_PTR_FROM_JSON(ErrorApiCount, errorApiCount_);
        DARABONBA_PTR_FROM_JSON(ErrorAppCount, errorAppCount_);
        DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
        DARABONBA_PTR_FROM_JSON(ErrorRate, errorRate_);
        DARABONBA_PTR_FROM_JSON(OfflineRate, offlineRate_);
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
      virtual bool empty() const override { return this->callCount_ == nullptr
        && this->errorApiCount_ == nullptr && this->errorAppCount_ == nullptr && this->errorCount_ == nullptr && this->errorRate_ == nullptr && this->offlineRate_ == nullptr; };
      // callCount Field Functions 
      bool hasCallCount() const { return this->callCount_ != nullptr;};
      void deleteCallCount() { this->callCount_ = nullptr;};
      inline int64_t getCallCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0L) };
      inline Data& setCallCount(int64_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


      // errorApiCount Field Functions 
      bool hasErrorApiCount() const { return this->errorApiCount_ != nullptr;};
      void deleteErrorApiCount() { this->errorApiCount_ = nullptr;};
      inline int64_t getErrorApiCount() const { DARABONBA_PTR_GET_DEFAULT(errorApiCount_, 0L) };
      inline Data& setErrorApiCount(int64_t errorApiCount) { DARABONBA_PTR_SET_VALUE(errorApiCount_, errorApiCount) };


      // errorAppCount Field Functions 
      bool hasErrorAppCount() const { return this->errorAppCount_ != nullptr;};
      void deleteErrorAppCount() { this->errorAppCount_ = nullptr;};
      inline int64_t getErrorAppCount() const { DARABONBA_PTR_GET_DEFAULT(errorAppCount_, 0L) };
      inline Data& setErrorAppCount(int64_t errorAppCount) { DARABONBA_PTR_SET_VALUE(errorAppCount_, errorAppCount) };


      // errorCount Field Functions 
      bool hasErrorCount() const { return this->errorCount_ != nullptr;};
      void deleteErrorCount() { this->errorCount_ = nullptr;};
      inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
      inline Data& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


      // errorRate Field Functions 
      bool hasErrorRate() const { return this->errorRate_ != nullptr;};
      void deleteErrorRate() { this->errorRate_ = nullptr;};
      inline double getErrorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, 0.0) };
      inline Data& setErrorRate(double errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


      // offlineRate Field Functions 
      bool hasOfflineRate() const { return this->offlineRate_ != nullptr;};
      void deleteOfflineRate() { this->offlineRate_ = nullptr;};
      inline double getOfflineRate() const { DARABONBA_PTR_GET_DEFAULT(offlineRate_, 0.0) };
      inline Data& setOfflineRate(double offlineRate) { DARABONBA_PTR_SET_VALUE(offlineRate_, offlineRate) };


    protected:
      shared_ptr<int64_t> callCount_ {};
      shared_ptr<int64_t> errorApiCount_ {};
      shared_ptr<int64_t> errorAppCount_ {};
      shared_ptr<int64_t> errorCount_ {};
      shared_ptr<double> errorRate_ {};
      shared_ptr<double> offlineRate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceApiCallSummaryResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataServiceApiCallSummaryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataServiceApiCallSummaryResponseBody::Data) };
    inline GetDataServiceApiCallSummaryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataServiceApiCallSummaryResponseBody::Data) };
    inline GetDataServiceApiCallSummaryResponseBody& setData(const GetDataServiceApiCallSummaryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataServiceApiCallSummaryResponseBody& setData(GetDataServiceApiCallSummaryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceApiCallSummaryResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceApiCallSummaryResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceApiCallSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceApiCallSummaryResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetDataServiceApiCallSummaryResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
