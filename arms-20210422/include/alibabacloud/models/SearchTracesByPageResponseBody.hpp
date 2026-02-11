// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTRACESBYPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class SearchTracesByPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTracesByPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageBean, pageBean_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTracesByPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageBean, pageBean_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SearchTracesByPageResponseBody() = default ;
    SearchTracesByPageResponseBody(const SearchTracesByPageResponseBody &) = default ;
    SearchTracesByPageResponseBody(SearchTracesByPageResponseBody &&) = default ;
    SearchTracesByPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTracesByPageResponseBody() = default ;
    SearchTracesByPageResponseBody& operator=(const SearchTracesByPageResponseBody &) = default ;
    SearchTracesByPageResponseBody& operator=(SearchTracesByPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageBean : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageBean& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
        DARABONBA_PTR_TO_JSON(TraceInfos, traceInfos_);
      };
      friend void from_json(const Darabonba::Json& j, PageBean& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
        DARABONBA_PTR_FROM_JSON(TraceInfos, traceInfos_);
      };
      PageBean() = default ;
      PageBean(const PageBean &) = default ;
      PageBean(PageBean &&) = default ;
      PageBean(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageBean() = default ;
      PageBean& operator=(const PageBean &) = default ;
      PageBean& operator=(PageBean &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TraceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TraceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Duration, duration_);
          DARABONBA_PTR_TO_JSON(OperationName, operationName_);
          DARABONBA_PTR_TO_JSON(ServiceIp, serviceIp_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(TraceID, traceID_);
        };
        friend void from_json(const Darabonba::Json& j, TraceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Duration, duration_);
          DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
          DARABONBA_PTR_FROM_JSON(ServiceIp, serviceIp_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(TraceID, traceID_);
        };
        TraceInfos() = default ;
        TraceInfos(const TraceInfos &) = default ;
        TraceInfos(TraceInfos &&) = default ;
        TraceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TraceInfos() = default ;
        TraceInfos& operator=(const TraceInfos &) = default ;
        TraceInfos& operator=(TraceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->duration_ == nullptr
        && this->operationName_ == nullptr && this->serviceIp_ == nullptr && this->serviceName_ == nullptr && this->timestamp_ == nullptr && this->traceID_ == nullptr; };
        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
        inline TraceInfos& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // operationName Field Functions 
        bool hasOperationName() const { return this->operationName_ != nullptr;};
        void deleteOperationName() { this->operationName_ = nullptr;};
        inline string getOperationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
        inline TraceInfos& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


        // serviceIp Field Functions 
        bool hasServiceIp() const { return this->serviceIp_ != nullptr;};
        void deleteServiceIp() { this->serviceIp_ = nullptr;};
        inline string getServiceIp() const { DARABONBA_PTR_GET_DEFAULT(serviceIp_, "") };
        inline TraceInfos& setServiceIp(string serviceIp) { DARABONBA_PTR_SET_VALUE(serviceIp_, serviceIp) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline TraceInfos& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline TraceInfos& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // traceID Field Functions 
        bool hasTraceID() const { return this->traceID_ != nullptr;};
        void deleteTraceID() { this->traceID_ = nullptr;};
        inline string getTraceID() const { DARABONBA_PTR_GET_DEFAULT(traceID_, "") };
        inline TraceInfos& setTraceID(string traceID) { DARABONBA_PTR_SET_VALUE(traceID_, traceID) };


      protected:
        shared_ptr<int64_t> duration_ {};
        shared_ptr<string> operationName_ {};
        shared_ptr<string> serviceIp_ {};
        shared_ptr<string> serviceName_ {};
        shared_ptr<int64_t> timestamp_ {};
        shared_ptr<string> traceID_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr && this->traceInfos_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageBean& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageBean& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline PageBean& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


      // traceInfos Field Functions 
      bool hasTraceInfos() const { return this->traceInfos_ != nullptr;};
      void deleteTraceInfos() { this->traceInfos_ = nullptr;};
      inline const vector<PageBean::TraceInfos> & getTraceInfos() const { DARABONBA_PTR_GET_CONST(traceInfos_, vector<PageBean::TraceInfos>) };
      inline vector<PageBean::TraceInfos> getTraceInfos() { DARABONBA_PTR_GET(traceInfos_, vector<PageBean::TraceInfos>) };
      inline PageBean& setTraceInfos(const vector<PageBean::TraceInfos> & traceInfos) { DARABONBA_PTR_SET_VALUE(traceInfos_, traceInfos) };
      inline PageBean& setTraceInfos(vector<PageBean::TraceInfos> && traceInfos) { DARABONBA_PTR_SET_RVALUE(traceInfos_, traceInfos) };


    protected:
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> total_ {};
      shared_ptr<vector<PageBean::TraceInfos>> traceInfos_ {};
    };

    virtual bool empty() const override { return this->pageBean_ == nullptr
        && this->requestId_ == nullptr; };
    // pageBean Field Functions 
    bool hasPageBean() const { return this->pageBean_ != nullptr;};
    void deletePageBean() { this->pageBean_ = nullptr;};
    inline const SearchTracesByPageResponseBody::PageBean & getPageBean() const { DARABONBA_PTR_GET_CONST(pageBean_, SearchTracesByPageResponseBody::PageBean) };
    inline SearchTracesByPageResponseBody::PageBean getPageBean() { DARABONBA_PTR_GET(pageBean_, SearchTracesByPageResponseBody::PageBean) };
    inline SearchTracesByPageResponseBody& setPageBean(const SearchTracesByPageResponseBody::PageBean & pageBean) { DARABONBA_PTR_SET_VALUE(pageBean_, pageBean) };
    inline SearchTracesByPageResponseBody& setPageBean(SearchTracesByPageResponseBody::PageBean && pageBean) { DARABONBA_PTR_SET_RVALUE(pageBean_, pageBean) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchTracesByPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<SearchTracesByPageResponseBody::PageBean> pageBean_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
