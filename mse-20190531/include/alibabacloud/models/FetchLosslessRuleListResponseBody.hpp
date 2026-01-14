// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FETCHLOSSLESSRULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_FETCHLOSSLESSRULELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class FetchLosslessRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FetchLosslessRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, FetchLosslessRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    FetchLosslessRuleListResponseBody() = default ;
    FetchLosslessRuleListResponseBody(const FetchLosslessRuleListResponseBody &) = default ;
    FetchLosslessRuleListResponseBody(FetchLosslessRuleListResponseBody &&) = default ;
    FetchLosslessRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FetchLosslessRuleListResponseBody() = default ;
    FetchLosslessRuleListResponseBody& operator=(const FetchLosslessRuleListResponseBody &) = default ;
    FetchLosslessRuleListResponseBody& operator=(FetchLosslessRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Results, results_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Results, results_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Results : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Results& obj) { 
          DARABONBA_PTR_TO_JSON(Aligned, aligned_);
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(FuncType, funcType_);
          DARABONBA_PTR_TO_JSON(LossLessDetail, lossLessDetail_);
          DARABONBA_PTR_TO_JSON(Notice, notice_);
          DARABONBA_PTR_TO_JSON(Related, related_);
          DARABONBA_PTR_TO_JSON(WarmupTime, warmupTime_);
        };
        friend void from_json(const Darabonba::Json& j, Results& obj) { 
          DARABONBA_PTR_FROM_JSON(Aligned, aligned_);
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(FuncType, funcType_);
          DARABONBA_PTR_FROM_JSON(LossLessDetail, lossLessDetail_);
          DARABONBA_PTR_FROM_JSON(Notice, notice_);
          DARABONBA_PTR_FROM_JSON(Related, related_);
          DARABONBA_PTR_FROM_JSON(WarmupTime, warmupTime_);
        };
        Results() = default ;
        Results(const Results &) = default ;
        Results(Results &&) = default ;
        Results(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Results() = default ;
        Results& operator=(const Results &) = default ;
        Results& operator=(Results &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aligned_ == nullptr
        && this->appId_ == nullptr && this->appName_ == nullptr && this->count_ == nullptr && this->delayTime_ == nullptr && this->enable_ == nullptr
        && this->funcType_ == nullptr && this->lossLessDetail_ == nullptr && this->notice_ == nullptr && this->related_ == nullptr && this->warmupTime_ == nullptr; };
        // aligned Field Functions 
        bool hasAligned() const { return this->aligned_ != nullptr;};
        void deleteAligned() { this->aligned_ = nullptr;};
        inline bool getAligned() const { DARABONBA_PTR_GET_DEFAULT(aligned_, false) };
        inline Results& setAligned(bool aligned) { DARABONBA_PTR_SET_VALUE(aligned_, aligned) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Results& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Results& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline Results& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // delayTime Field Functions 
        bool hasDelayTime() const { return this->delayTime_ != nullptr;};
        void deleteDelayTime() { this->delayTime_ = nullptr;};
        inline int32_t getDelayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
        inline Results& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Results& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // funcType Field Functions 
        bool hasFuncType() const { return this->funcType_ != nullptr;};
        void deleteFuncType() { this->funcType_ = nullptr;};
        inline int32_t getFuncType() const { DARABONBA_PTR_GET_DEFAULT(funcType_, 0) };
        inline Results& setFuncType(int32_t funcType) { DARABONBA_PTR_SET_VALUE(funcType_, funcType) };


        // lossLessDetail Field Functions 
        bool hasLossLessDetail() const { return this->lossLessDetail_ != nullptr;};
        void deleteLossLessDetail() { this->lossLessDetail_ = nullptr;};
        inline bool getLossLessDetail() const { DARABONBA_PTR_GET_DEFAULT(lossLessDetail_, false) };
        inline Results& setLossLessDetail(bool lossLessDetail) { DARABONBA_PTR_SET_VALUE(lossLessDetail_, lossLessDetail) };


        // notice Field Functions 
        bool hasNotice() const { return this->notice_ != nullptr;};
        void deleteNotice() { this->notice_ = nullptr;};
        inline bool getNotice() const { DARABONBA_PTR_GET_DEFAULT(notice_, false) };
        inline Results& setNotice(bool notice) { DARABONBA_PTR_SET_VALUE(notice_, notice) };


        // related Field Functions 
        bool hasRelated() const { return this->related_ != nullptr;};
        void deleteRelated() { this->related_ = nullptr;};
        inline bool getRelated() const { DARABONBA_PTR_GET_DEFAULT(related_, false) };
        inline Results& setRelated(bool related) { DARABONBA_PTR_SET_VALUE(related_, related) };


        // warmupTime Field Functions 
        bool hasWarmupTime() const { return this->warmupTime_ != nullptr;};
        void deleteWarmupTime() { this->warmupTime_ = nullptr;};
        inline int32_t getWarmupTime() const { DARABONBA_PTR_GET_DEFAULT(warmupTime_, 0) };
        inline Results& setWarmupTime(int32_t warmupTime) { DARABONBA_PTR_SET_VALUE(warmupTime_, warmupTime) };


      protected:
        // Indicates whether service registration is complete before readiness probe.
        shared_ptr<bool> aligned_ {};
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The number of instances.
        shared_ptr<int32_t> count_ {};
        // The registration latency. Unit: seconds.
        shared_ptr<int32_t> delayTime_ {};
        // Indicates whether graceful start is enabled. Valid values:
        // 
        // *   `true`: enabled
        // *   `false`: disabled
        shared_ptr<bool> enable_ {};
        // The slope of the prefetching curve.
        shared_ptr<int32_t> funcType_ {};
        // Indicates whether online and offline processing details are displayed.
        shared_ptr<bool> lossLessDetail_ {};
        // Indicates whether notification is enabled.
        shared_ptr<bool> notice_ {};
        // Indicates whether service prefetching is complete before readiness probe.
        shared_ptr<bool> related_ {};
        // The prefetching duration. Unit: seconds.
        shared_ptr<int32_t> warmupTime_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->results_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // results Field Functions 
      bool hasResults() const { return this->results_ != nullptr;};
      void deleteResults() { this->results_ = nullptr;};
      inline const vector<Data::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<Data::Results>) };
      inline vector<Data::Results> getResults() { DARABONBA_PTR_GET(results_, vector<Data::Results>) };
      inline Data& setResults(const vector<Data::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
      inline Data& setResults(vector<Data::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The returned data.
      shared_ptr<vector<Data::Results>> results_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline FetchLosslessRuleListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const FetchLosslessRuleListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, FetchLosslessRuleListResponseBody::Data) };
    inline FetchLosslessRuleListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, FetchLosslessRuleListResponseBody::Data) };
    inline FetchLosslessRuleListResponseBody& setData(const FetchLosslessRuleListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline FetchLosslessRuleListResponseBody& setData(FetchLosslessRuleListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline FetchLosslessRuleListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline FetchLosslessRuleListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline FetchLosslessRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline FetchLosslessRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline FetchLosslessRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code returned.
    shared_ptr<int32_t> code_ {};
    // The returned result.
    shared_ptr<FetchLosslessRuleListResponseBody::Data> data_ {};
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
