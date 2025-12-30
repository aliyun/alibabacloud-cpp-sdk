// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPIIMPACTSRESPONSEBODY_HPP_
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
  class ListDataServiceApiImpactsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiImpactsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageResult, pageResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiImpactsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageResult, pageResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListDataServiceApiImpactsResponseBody() = default ;
    ListDataServiceApiImpactsResponseBody(const ListDataServiceApiImpactsResponseBody &) = default ;
    ListDataServiceApiImpactsResponseBody(ListDataServiceApiImpactsResponseBody &&) = default ;
    ListDataServiceApiImpactsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiImpactsResponseBody() = default ;
    ListDataServiceApiImpactsResponseBody& operator=(const ListDataServiceApiImpactsResponseBody &) = default ;
    ListDataServiceApiImpactsResponseBody& operator=(ListDataServiceApiImpactsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageResult& obj) { 
        DARABONBA_PTR_TO_JSON(ImpactList, impactList_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageResult& obj) { 
        DARABONBA_PTR_FROM_JSON(ImpactList, impactList_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageResult() = default ;
      PageResult(const PageResult &) = default ;
      PageResult(PageResult &&) = default ;
      PageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageResult() = default ;
      PageResult& operator=(const PageResult &) = default ;
      PageResult& operator=(PageResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ImpactList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImpactList& obj) { 
          DARABONBA_PTR_TO_JSON(ApiId, apiId_);
          DARABONBA_PTR_TO_JSON(AppKey, appKey_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(CallCount, callCount_);
          DARABONBA_PTR_TO_JSON(ClientFailCount, clientFailCount_);
          DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_TO_JSON(ErrorApiCount, errorApiCount_);
          DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_TO_JSON(ErrorRate, errorRate_);
          DARABONBA_PTR_TO_JSON(LastCallTime, lastCallTime_);
          DARABONBA_PTR_TO_JSON(Minute, minute_);
          DARABONBA_PTR_TO_JSON(OfflineCount, offlineCount_);
          DARABONBA_PTR_TO_JSON(SuccessTimeCost, successTimeCost_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_TO_JSON(TotalTimeCost, totalTimeCost_);
        };
        friend void from_json(const Darabonba::Json& j, ImpactList& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
          DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(CallCount, callCount_);
          DARABONBA_PTR_FROM_JSON(ClientFailCount, clientFailCount_);
          DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_FROM_JSON(ErrorApiCount, errorApiCount_);
          DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_FROM_JSON(ErrorRate, errorRate_);
          DARABONBA_PTR_FROM_JSON(LastCallTime, lastCallTime_);
          DARABONBA_PTR_FROM_JSON(Minute, minute_);
          DARABONBA_PTR_FROM_JSON(OfflineCount, offlineCount_);
          DARABONBA_PTR_FROM_JSON(SuccessTimeCost, successTimeCost_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
          DARABONBA_PTR_FROM_JSON(TotalTimeCost, totalTimeCost_);
        };
        ImpactList() = default ;
        ImpactList(const ImpactList &) = default ;
        ImpactList(ImpactList &&) = default ;
        ImpactList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImpactList() = default ;
        ImpactList& operator=(const ImpactList &) = default ;
        ImpactList& operator=(ImpactList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->apiId_ == nullptr
        && this->appKey_ == nullptr && this->appName_ == nullptr && this->callCount_ == nullptr && this->clientFailCount_ == nullptr && this->clientIp_ == nullptr
        && this->errorApiCount_ == nullptr && this->errorCount_ == nullptr && this->errorRate_ == nullptr && this->lastCallTime_ == nullptr && this->minute_ == nullptr
        && this->offlineCount_ == nullptr && this->successTimeCost_ == nullptr && this->totalCount_ == nullptr && this->totalTimeCost_ == nullptr; };
        // apiId Field Functions 
        bool hasApiId() const { return this->apiId_ != nullptr;};
        void deleteApiId() { this->apiId_ = nullptr;};
        inline int64_t getApiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, 0L) };
        inline ImpactList& setApiId(int64_t apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


        // appKey Field Functions 
        bool hasAppKey() const { return this->appKey_ != nullptr;};
        void deleteAppKey() { this->appKey_ = nullptr;};
        inline int64_t getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, 0L) };
        inline ImpactList& setAppKey(int64_t appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline ImpactList& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // callCount Field Functions 
        bool hasCallCount() const { return this->callCount_ != nullptr;};
        void deleteCallCount() { this->callCount_ = nullptr;};
        inline int64_t getCallCount() const { DARABONBA_PTR_GET_DEFAULT(callCount_, 0L) };
        inline ImpactList& setCallCount(int64_t callCount) { DARABONBA_PTR_SET_VALUE(callCount_, callCount) };


        // clientFailCount Field Functions 
        bool hasClientFailCount() const { return this->clientFailCount_ != nullptr;};
        void deleteClientFailCount() { this->clientFailCount_ = nullptr;};
        inline int64_t getClientFailCount() const { DARABONBA_PTR_GET_DEFAULT(clientFailCount_, 0L) };
        inline ImpactList& setClientFailCount(int64_t clientFailCount) { DARABONBA_PTR_SET_VALUE(clientFailCount_, clientFailCount) };


        // clientIp Field Functions 
        bool hasClientIp() const { return this->clientIp_ != nullptr;};
        void deleteClientIp() { this->clientIp_ = nullptr;};
        inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
        inline ImpactList& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


        // errorApiCount Field Functions 
        bool hasErrorApiCount() const { return this->errorApiCount_ != nullptr;};
        void deleteErrorApiCount() { this->errorApiCount_ = nullptr;};
        inline int64_t getErrorApiCount() const { DARABONBA_PTR_GET_DEFAULT(errorApiCount_, 0L) };
        inline ImpactList& setErrorApiCount(int64_t errorApiCount) { DARABONBA_PTR_SET_VALUE(errorApiCount_, errorApiCount) };


        // errorCount Field Functions 
        bool hasErrorCount() const { return this->errorCount_ != nullptr;};
        void deleteErrorCount() { this->errorCount_ = nullptr;};
        inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
        inline ImpactList& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


        // errorRate Field Functions 
        bool hasErrorRate() const { return this->errorRate_ != nullptr;};
        void deleteErrorRate() { this->errorRate_ = nullptr;};
        inline string getErrorRate() const { DARABONBA_PTR_GET_DEFAULT(errorRate_, "") };
        inline ImpactList& setErrorRate(string errorRate) { DARABONBA_PTR_SET_VALUE(errorRate_, errorRate) };


        // lastCallTime Field Functions 
        bool hasLastCallTime() const { return this->lastCallTime_ != nullptr;};
        void deleteLastCallTime() { this->lastCallTime_ = nullptr;};
        inline string getLastCallTime() const { DARABONBA_PTR_GET_DEFAULT(lastCallTime_, "") };
        inline ImpactList& setLastCallTime(string lastCallTime) { DARABONBA_PTR_SET_VALUE(lastCallTime_, lastCallTime) };


        // minute Field Functions 
        bool hasMinute() const { return this->minute_ != nullptr;};
        void deleteMinute() { this->minute_ = nullptr;};
        inline string getMinute() const { DARABONBA_PTR_GET_DEFAULT(minute_, "") };
        inline ImpactList& setMinute(string minute) { DARABONBA_PTR_SET_VALUE(minute_, minute) };


        // offlineCount Field Functions 
        bool hasOfflineCount() const { return this->offlineCount_ != nullptr;};
        void deleteOfflineCount() { this->offlineCount_ = nullptr;};
        inline int64_t getOfflineCount() const { DARABONBA_PTR_GET_DEFAULT(offlineCount_, 0L) };
        inline ImpactList& setOfflineCount(int64_t offlineCount) { DARABONBA_PTR_SET_VALUE(offlineCount_, offlineCount) };


        // successTimeCost Field Functions 
        bool hasSuccessTimeCost() const { return this->successTimeCost_ != nullptr;};
        void deleteSuccessTimeCost() { this->successTimeCost_ = nullptr;};
        inline string getSuccessTimeCost() const { DARABONBA_PTR_GET_DEFAULT(successTimeCost_, "") };
        inline ImpactList& setSuccessTimeCost(string successTimeCost) { DARABONBA_PTR_SET_VALUE(successTimeCost_, successTimeCost) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline ImpactList& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


        // totalTimeCost Field Functions 
        bool hasTotalTimeCost() const { return this->totalTimeCost_ != nullptr;};
        void deleteTotalTimeCost() { this->totalTimeCost_ = nullptr;};
        inline string getTotalTimeCost() const { DARABONBA_PTR_GET_DEFAULT(totalTimeCost_, "") };
        inline ImpactList& setTotalTimeCost(string totalTimeCost) { DARABONBA_PTR_SET_VALUE(totalTimeCost_, totalTimeCost) };


      protected:
        // apiNo
        shared_ptr<int64_t> apiId_ {};
        // appKey
        shared_ptr<int64_t> appKey_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<int64_t> callCount_ {};
        shared_ptr<int64_t> clientFailCount_ {};
        shared_ptr<string> clientIp_ {};
        shared_ptr<int64_t> errorApiCount_ {};
        shared_ptr<int64_t> errorCount_ {};
        shared_ptr<string> errorRate_ {};
        shared_ptr<string> lastCallTime_ {};
        shared_ptr<string> minute_ {};
        shared_ptr<int64_t> offlineCount_ {};
        shared_ptr<string> successTimeCost_ {};
        shared_ptr<int64_t> totalCount_ {};
        shared_ptr<string> totalTimeCost_ {};
      };

      virtual bool empty() const override { return this->impactList_ == nullptr
        && this->totalCount_ == nullptr; };
      // impactList Field Functions 
      bool hasImpactList() const { return this->impactList_ != nullptr;};
      void deleteImpactList() { this->impactList_ = nullptr;};
      inline const vector<PageResult::ImpactList> & getImpactList() const { DARABONBA_PTR_GET_CONST(impactList_, vector<PageResult::ImpactList>) };
      inline vector<PageResult::ImpactList> getImpactList() { DARABONBA_PTR_GET(impactList_, vector<PageResult::ImpactList>) };
      inline PageResult& setImpactList(const vector<PageResult::ImpactList> & impactList) { DARABONBA_PTR_SET_VALUE(impactList_, impactList) };
      inline PageResult& setImpactList(vector<PageResult::ImpactList> && impactList) { DARABONBA_PTR_SET_RVALUE(impactList_, impactList) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<PageResult::ImpactList>> impactList_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->pageResult_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListDataServiceApiImpactsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListDataServiceApiImpactsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListDataServiceApiImpactsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageResult Field Functions 
    bool hasPageResult() const { return this->pageResult_ != nullptr;};
    void deletePageResult() { this->pageResult_ = nullptr;};
    inline const ListDataServiceApiImpactsResponseBody::PageResult & getPageResult() const { DARABONBA_PTR_GET_CONST(pageResult_, ListDataServiceApiImpactsResponseBody::PageResult) };
    inline ListDataServiceApiImpactsResponseBody::PageResult getPageResult() { DARABONBA_PTR_GET(pageResult_, ListDataServiceApiImpactsResponseBody::PageResult) };
    inline ListDataServiceApiImpactsResponseBody& setPageResult(const ListDataServiceApiImpactsResponseBody::PageResult & pageResult) { DARABONBA_PTR_SET_VALUE(pageResult_, pageResult) };
    inline ListDataServiceApiImpactsResponseBody& setPageResult(ListDataServiceApiImpactsResponseBody::PageResult && pageResult) { DARABONBA_PTR_SET_RVALUE(pageResult_, pageResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataServiceApiImpactsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListDataServiceApiImpactsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<ListDataServiceApiImpactsResponseBody::PageResult> pageResult_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
