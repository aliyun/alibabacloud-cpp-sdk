// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIERRORIMPACTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIERRORIMPACTRESPONSEBODY_HPP_
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
  class GetDataServiceApiErrorImpactResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiErrorImpactResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiErrorImpactResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDataServiceApiErrorImpactResponseBody() = default ;
    GetDataServiceApiErrorImpactResponseBody(const GetDataServiceApiErrorImpactResponseBody &) = default ;
    GetDataServiceApiErrorImpactResponseBody(GetDataServiceApiErrorImpactResponseBody &&) = default ;
    GetDataServiceApiErrorImpactResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiErrorImpactResponseBody() = default ;
    GetDataServiceApiErrorImpactResponseBody& operator=(const GetDataServiceApiErrorImpactResponseBody &) = default ;
    GetDataServiceApiErrorImpactResponseBody& operator=(GetDataServiceApiErrorImpactResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ErrorApiList, errorApiList_);
        DARABONBA_PTR_TO_JSON(ErrorAppList, errorAppList_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ErrorApiList, errorApiList_);
        DARABONBA_PTR_FROM_JSON(ErrorAppList, errorAppList_);
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
      class ErrorAppList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorAppList& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppKey, appKey_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorAppList& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
        };
        ErrorAppList() = default ;
        ErrorAppList(const ErrorAppList &) = default ;
        ErrorAppList(ErrorAppList &&) = default ;
        ErrorAppList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorAppList() = default ;
        ErrorAppList& operator=(const ErrorAppList &) = default ;
        ErrorAppList& operator=(ErrorAppList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appKey_ == nullptr && this->appName_ == nullptr && this->errorCount_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int32_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0) };
        inline ErrorAppList& setAppId(int32_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
        inline ErrorAppList& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline ErrorAppList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // errorCount Field Functions 
        bool hasErrorCount() const { return this->errorCount_ != nullptr;};
        void deleteErrorCount() { this->errorCount_ = nullptr;};
        inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
        inline ErrorAppList& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


      protected:
        // appId
        shared_ptr<int32_t> appId_ {};
        // appKey
        shared_ptr<int64_t> appKey_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<int64_t> errorCount_ {};
      };

      class ErrorApiList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ErrorApiList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiName, apiName_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
        };
        friend void from_json(const Darabonba::Json& j, ErrorApiList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
        };
        ErrorApiList() = default ;
        ErrorApiList(const ErrorApiList &) = default ;
        ErrorApiList(ErrorApiList &&) = default ;
        ErrorApiList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ErrorApiList() = default ;
        ErrorApiList& operator=(const ErrorApiList &) = default ;
        ErrorApiList& operator=(ErrorApiList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiName_ == nullptr
        && this->appId_ == nullptr && this->errorCount_ == nullptr; };
        // apiName Field Functions 
        bool hasApiName() const { return this->apiName_ != nullptr;};
        void deleteApiName() { this->apiName_ = nullptr;};
        inline string getApiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
        inline ErrorApiList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
        inline ErrorApiList& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // errorCount Field Functions 
        bool hasErrorCount() const { return this->errorCount_ != nullptr;};
        void deleteErrorCount() { this->errorCount_ = nullptr;};
        inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
        inline ErrorApiList& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


      protected:
        shared_ptr<string> apiName_ {};
        shared_ptr<int64_t> appId_ {};
        shared_ptr<int64_t> errorCount_ {};
      };

      virtual bool empty() const override { return this->errorApiList_ == nullptr
        && this->errorAppList_ == nullptr; };
      // errorApiList Field Functions 
      bool hasErrorApiList() const { return this->errorApiList_ != nullptr;};
      void deleteErrorApiList() { this->errorApiList_ = nullptr;};
      inline const vector<Data::ErrorApiList> & getErrorApiList() const { DARABONBA_PTR_GET_CONST(errorApiList_, vector<Data::ErrorApiList>) };
      inline vector<Data::ErrorApiList> getErrorApiList() { DARABONBA_PTR_GET(errorApiList_, vector<Data::ErrorApiList>) };
      inline Data& setErrorApiList(const vector<Data::ErrorApiList> & errorApiList) { DARABONBA_PTR_SET_VALUE(errorApiList_, errorApiList) };
      inline Data& setErrorApiList(vector<Data::ErrorApiList> && errorApiList) { DARABONBA_PTR_SET_RVALUE(errorApiList_, errorApiList) };


      // errorAppList Field Functions 
      bool hasErrorAppList() const { return this->errorAppList_ != nullptr;};
      void deleteErrorAppList() { this->errorAppList_ = nullptr;};
      inline const vector<Data::ErrorAppList> & getErrorAppList() const { DARABONBA_PTR_GET_CONST(errorAppList_, vector<Data::ErrorAppList>) };
      inline vector<Data::ErrorAppList> getErrorAppList() { DARABONBA_PTR_GET(errorAppList_, vector<Data::ErrorAppList>) };
      inline Data& setErrorAppList(const vector<Data::ErrorAppList> & errorAppList) { DARABONBA_PTR_SET_VALUE(errorAppList_, errorAppList) };
      inline Data& setErrorAppList(vector<Data::ErrorAppList> && errorAppList) { DARABONBA_PTR_SET_RVALUE(errorAppList_, errorAppList) };


    protected:
      shared_ptr<vector<Data::ErrorApiList>> errorApiList_ {};
      shared_ptr<vector<Data::ErrorAppList>> errorAppList_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDataServiceApiErrorImpactResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDataServiceApiErrorImpactResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDataServiceApiErrorImpactResponseBody::Data) };
    inline GetDataServiceApiErrorImpactResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDataServiceApiErrorImpactResponseBody::Data) };
    inline GetDataServiceApiErrorImpactResponseBody& setData(const GetDataServiceApiErrorImpactResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDataServiceApiErrorImpactResponseBody& setData(GetDataServiceApiErrorImpactResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDataServiceApiErrorImpactResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDataServiceApiErrorImpactResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDataServiceApiErrorImpactResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDataServiceApiErrorImpactResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetDataServiceApiErrorImpactResponseBody::Data> data_ {};
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
