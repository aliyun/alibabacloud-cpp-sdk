// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPICALLTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiCallTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiCallTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiCallTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataServiceApiCallTrendResponseBody() = default ;
    GetDataServiceApiCallTrendResponseBody(const GetDataServiceApiCallTrendResponseBody &) = default ;
    GetDataServiceApiCallTrendResponseBody(GetDataServiceApiCallTrendResponseBody &&) = default ;
    GetDataServiceApiCallTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiCallTrendResponseBody() = default ;
    GetDataServiceApiCallTrendResponseBody& operator=(const GetDataServiceApiCallTrendResponseBody &) = default ;
    GetDataServiceApiCallTrendResponseBody& operator=(GetDataServiceApiCallTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallErrorImpactTrendList, callErrorImpactTrendList_);
        DARABONBA_PTR_TO_JSON(CallErrorTrendList, callErrorTrendList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallErrorImpactTrendList, callErrorImpactTrendList_);
        DARABONBA_PTR_FROM_JSON(CallErrorTrendList, callErrorTrendList_);
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
      class CallErrorTrendList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallErrorTrendList& obj) { 
          DARABONBA_PTR_TO_JSON(CallCount, callCount_);
          DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_TO_JSON(Minute, minute_);
        };
        friend void from_json(const Darabonba::Json& j, CallErrorTrendList& obj) { 
          DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
          DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_FROM_JSON(Minute, minute_);
        };
        CallErrorTrendList() = default ;
        CallErrorTrendList(const CallErrorTrendList &) = default ;
        CallErrorTrendList(CallErrorTrendList &&) = default ;
        CallErrorTrendList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallErrorTrendList() = default ;
        CallErrorTrendList& operator=(const CallErrorTrendList &) = default ;
        CallErrorTrendList& operator=(CallErrorTrendList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callCount_ == nullptr
        && this->errorCount_ == nullptr && this->minute_ == nullptr; };
        // callCount Field Functions 
        bool hasCallCount() const { return this->callCount_ != nullptr;};
        void deleteCallCount() { this->callCount_ = nullptr;};
        inline int64_t getCallCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0L) };
        inline CallErrorTrendList& setCallCount(int64_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


        // errorCount Field Functions 
        bool hasErrorCount() const { return this->errorCount_ != nullptr;};
        void deleteErrorCount() { this->errorCount_ = nullptr;};
        inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
        inline CallErrorTrendList& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


        // minute Field Functions 
        bool hasMinute() const { return this->minute_ != nullptr;};
        void deleteMinute() { this->minute_ = nullptr;};
        inline string getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, "") };
        inline CallErrorTrendList& setMinute(string minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


      protected:
        shared_ptr<int64_t> callCount_ {};
        shared_ptr<int64_t> errorCount_ {};
        shared_ptr<string> minute_ {};
      };

      class CallErrorImpactTrendList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallErrorImpactTrendList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiIdList, apiIdList_);
          DARABONBA_PTR_TO_JSON(ErrorApiCount, errorApiCount_);
          DARABONBA_PTR_TO_JSON(ErrorAppCount, errorAppCount_);
          DARABONBA_PTR_TO_JSON(Minute, minute_);
        };
        friend void from_json(const Darabonba::Json& j, CallErrorImpactTrendList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiIdList, apiIdList_);
          DARABONBA_PTR_FROM_JSON(ErrorApiCount, errorApiCount_);
          DARABONBA_PTR_FROM_JSON(ErrorAppCount, errorAppCount_);
          DARABONBA_PTR_FROM_JSON(Minute, minute_);
        };
        CallErrorImpactTrendList() = default ;
        CallErrorImpactTrendList(const CallErrorImpactTrendList &) = default ;
        CallErrorImpactTrendList(CallErrorImpactTrendList &&) = default ;
        CallErrorImpactTrendList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallErrorImpactTrendList() = default ;
        CallErrorImpactTrendList& operator=(const CallErrorImpactTrendList &) = default ;
        CallErrorImpactTrendList& operator=(CallErrorImpactTrendList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiIdList_ == nullptr
        && this->errorApiCount_ == nullptr && this->errorAppCount_ == nullptr && this->minute_ == nullptr; };
        // apiIdList Field Functions 
        bool hasApiIdList() const { return this->apiIdList_ != nullptr;};
        void deleteApiIdList() { this->apiIdList_ = nullptr;};
        inline const vector<int64_t> & getApiIdList() const { DARABONBA_PTR_GET_CONST(apiIdList_, vector<int64_t>) };
        inline vector<int64_t> getApiIdList() { DARABONBA_PTR_GET(apiIdList_, vector<int64_t>) };
        inline CallErrorImpactTrendList& setApiIdList(const vector<int64_t> & apiIdList) { DARABONBA_PTR_SET_VALUE(apiIdList_, apiIdList) };
        inline CallErrorImpactTrendList& setApiIdList(vector<int64_t> && apiIdList) { DARABONBA_PTR_SET_RVALUE(apiIdList_, apiIdList) };


        // errorApiCount Field Functions 
        bool hasErrorApiCount() const { return this->errorApiCount_ != nullptr;};
        void deleteErrorApiCount() { this->errorApiCount_ = nullptr;};
        inline int32_t getErrorApiCount() const { DARABONBA_PTR_GET_DEFAULT(errorApiCount_, 0) };
        inline CallErrorImpactTrendList& setErrorApiCount(int32_t errorApiCount) { DARABONBA_PTR_SET_VALUE(errorApiCount_, errorApiCount) };


        // errorAppCount Field Functions 
        bool hasErrorAppCount() const { return this->errorAppCount_ != nullptr;};
        void deleteErrorAppCount() { this->errorAppCount_ = nullptr;};
        inline int32_t getErrorAppCount() const { DARABONBA_PTR_GET_DEFAULT(errorAppCount_, 0) };
        inline CallErrorImpactTrendList& setErrorAppCount(int32_t errorAppCount) { DARABONBA_PTR_SET_VALUE(errorAppCount_, errorAppCount) };


        // minute Field Functions 
        bool hasMinute() const { return this->minute_ != nullptr;};
        void deleteMinute() { this->minute_ = nullptr;};
        inline string getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, "") };
        inline CallErrorImpactTrendList& setMinute(string minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


      protected:
        shared_ptr<vector<int64_t>> apiIdList_ {};
        shared_ptr<int32_t> errorApiCount_ {};
        shared_ptr<int32_t> errorAppCount_ {};
        shared_ptr<string> minute_ {};
      };

      virtual bool empty() const override { return this->callErrorImpactTrendList_ == nullptr
        && this->callErrorTrendList_ == nullptr; };
      // callErrorImpactTrendList Field Functions 
      bool hasCallErrorImpactTrendList() const { return this->callErrorImpactTrendList_ != nullptr;};
      void deleteCallErrorImpactTrendList() { this->callErrorImpactTrendList_ = nullptr;};
      inline const vector<Data::CallErrorImpactTrendList> & getCallErrorImpactTrendList() const { DARABONBA_PTR_GET_CONST(callErrorImpactTrendList_, vector<Data::CallErrorImpactTrendList>) };
      inline vector<Data::CallErrorImpactTrendList> getCallErrorImpactTrendList() { DARABONBA_PTR_GET(callErrorImpactTrendList_, vector<Data::CallErrorImpactTrendList>) };
      inline Data& setCallErrorImpactTrendList(const vector<Data::CallErrorImpactTrendList> & callErrorImpactTrendList) { DARABONBA_PTR_SET_VALUE(callErrorImpactTrendList_, callErrorImpactTrendList) };
      inline Data& setCallErrorImpactTrendList(vector<Data::CallErrorImpactTrendList> && callErrorImpactTrendList) { DARABONBA_PTR_SET_RVALUE(callErrorImpactTrendList_, callErrorImpactTrendList) };


      // callErrorTrendList Field Functions 
      bool hasCallErrorTrendList() const { return this->callErrorTrendList_ != nullptr;};
      void deleteCallErrorTrendList() { this->callErrorTrendList_ = nullptr;};
      inline const vector<Data::CallErrorTrendList> & getCallErrorTrendList() const { DARABONBA_PTR_GET_CONST(callErrorTrendList_, vector<Data::CallErrorTrendList>) };
      inline vector<Data::CallErrorTrendList> getCallErrorTrendList() { DARABONBA_PTR_GET(callErrorTrendList_, vector<Data::CallErrorTrendList>) };
      inline Data& setCallErrorTrendList(const vector<Data::CallErrorTrendList> & callErrorTrendList) { DARABONBA_PTR_SET_VALUE(callErrorTrendList_, callErrorTrendList) };
      inline Data& setCallErrorTrendList(vector<Data::CallErrorTrendList> && callErrorTrendList) { DARABONBA_PTR_SET_RVALUE(callErrorTrendList_, callErrorTrendList) };


    protected:
      shared_ptr<vector<Data::CallErrorImpactTrendList>> callErrorImpactTrendList_ {};
      shared_ptr<vector<Data::CallErrorTrendList>> callErrorTrendList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceApiCallTrendResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataServiceApiCallTrendResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataServiceApiCallTrendResponseBody::Data) };
    inline GetDataServiceApiCallTrendResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataServiceApiCallTrendResponseBody::Data) };
    inline GetDataServiceApiCallTrendResponseBody& setData(const GetDataServiceApiCallTrendResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataServiceApiCallTrendResponseBody& setData(GetDataServiceApiCallTrendResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceApiCallTrendResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceApiCallTrendResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceApiCallTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceApiCallTrendResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetDataServiceApiCallTrendResponseBody::Data> data_ {};
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
