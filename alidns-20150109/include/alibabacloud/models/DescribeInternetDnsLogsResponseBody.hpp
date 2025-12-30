// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInternetDnsLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetDnsLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Complete, complete_);
      DARABONBA_PTR_TO_JSON(CurPage, curPage_);
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetDnsLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Complete, complete_);
      DARABONBA_PTR_FROM_JSON(CurPage, curPage_);
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeInternetDnsLogsResponseBody() = default ;
    DescribeInternetDnsLogsResponseBody(const DescribeInternetDnsLogsResponseBody &) = default ;
    DescribeInternetDnsLogsResponseBody(DescribeInternetDnsLogsResponseBody &&) = default ;
    DescribeInternetDnsLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetDnsLogsResponseBody() = default ;
    DescribeInternetDnsLogsResponseBody& operator=(const DescribeInternetDnsLogsResponseBody &) = default ;
    DescribeInternetDnsLogsResponseBody& operator=(DescribeInternetDnsLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(Log, log_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(Log, log_);
      };
      Logs() = default ;
      Logs(const Logs &) = default ;
      Logs(Logs &&) = default ;
      Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logs() = default ;
      Logs& operator=(const Logs &) = default ;
      Logs& operator=(Logs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Log : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Log& obj) { 
          DARABONBA_PTR_TO_JSON(DnsMsgId, dnsMsgId_);
          DARABONBA_PTR_TO_JSON(LogTime, logTime_);
          DARABONBA_PTR_TO_JSON(Protocol, protocol_);
          DARABONBA_PTR_TO_JSON(QueryName, queryName_);
          DARABONBA_PTR_TO_JSON(QueryType, queryType_);
          DARABONBA_PTR_TO_JSON(Rt, rt_);
          DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
          DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubnetIp, subnetIp_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
        };
        friend void from_json(const Darabonba::Json& j, Log& obj) { 
          DARABONBA_PTR_FROM_JSON(DnsMsgId, dnsMsgId_);
          DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
          DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
          DARABONBA_PTR_FROM_JSON(QueryName, queryName_);
          DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
          DARABONBA_PTR_FROM_JSON(Rt, rt_);
          DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
          DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubnetIp, subnetIp_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
        };
        Log() = default ;
        Log(const Log &) = default ;
        Log(Log &&) = default ;
        Log(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Log() = default ;
        Log& operator=(const Log &) = default ;
        Log& operator=(Log &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Value : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Value& obj) { 
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Value& obj) { 
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Value() = default ;
          Value(const Value &) = default ;
          Value(Value &&) = default ;
          Value(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Value() = default ;
          Value& operator=(const Value &) = default ;
          Value& operator=(Value &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->value_ == nullptr; };
          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
          inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
          inline Value& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
          inline Value& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


        protected:
          shared_ptr<vector<string>> value_ {};
        };

        virtual bool empty() const override { return this->dnsMsgId_ == nullptr
        && this->logTime_ == nullptr && this->protocol_ == nullptr && this->queryName_ == nullptr && this->queryType_ == nullptr && this->rt_ == nullptr
        && this->serverIp_ == nullptr && this->sourceIp_ == nullptr && this->status_ == nullptr && this->subnetIp_ == nullptr && this->value_ == nullptr
        && this->zoneName_ == nullptr; };
        // dnsMsgId Field Functions 
        bool hasDnsMsgId() const { return this->dnsMsgId_ != nullptr;};
        void deleteDnsMsgId() { this->dnsMsgId_ = nullptr;};
        inline string getDnsMsgId() const { DARABONBA_PTR_GET_DEFAULT(dnsMsgId_, "") };
        inline Log& setDnsMsgId(string dnsMsgId) { DARABONBA_PTR_SET_VALUE(dnsMsgId_, dnsMsgId) };


        // logTime Field Functions 
        bool hasLogTime() const { return this->logTime_ != nullptr;};
        void deleteLogTime() { this->logTime_ = nullptr;};
        inline int64_t getLogTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, 0L) };
        inline Log& setLogTime(int64_t logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


        // protocol Field Functions 
        bool hasProtocol() const { return this->protocol_ != nullptr;};
        void deleteProtocol() { this->protocol_ = nullptr;};
        inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
        inline Log& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


        // queryName Field Functions 
        bool hasQueryName() const { return this->queryName_ != nullptr;};
        void deleteQueryName() { this->queryName_ = nullptr;};
        inline string getQueryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
        inline Log& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


        // queryType Field Functions 
        bool hasQueryType() const { return this->queryType_ != nullptr;};
        void deleteQueryType() { this->queryType_ = nullptr;};
        inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
        inline Log& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


        // rt Field Functions 
        bool hasRt() const { return this->rt_ != nullptr;};
        void deleteRt() { this->rt_ = nullptr;};
        inline int32_t getRt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0) };
        inline Log& setRt(int32_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


        // serverIp Field Functions 
        bool hasServerIp() const { return this->serverIp_ != nullptr;};
        void deleteServerIp() { this->serverIp_ = nullptr;};
        inline string getServerIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
        inline Log& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


        // sourceIp Field Functions 
        bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
        void deleteSourceIp() { this->sourceIp_ = nullptr;};
        inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
        inline Log& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Log& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subnetIp Field Functions 
        bool hasSubnetIp() const { return this->subnetIp_ != nullptr;};
        void deleteSubnetIp() { this->subnetIp_ = nullptr;};
        inline string getSubnetIp() const { DARABONBA_PTR_GET_DEFAULT(subnetIp_, "") };
        inline Log& setSubnetIp(string subnetIp) { DARABONBA_PTR_SET_VALUE(subnetIp_, subnetIp) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline const Log::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, Log::Value) };
        inline Log::Value getValue() { DARABONBA_PTR_GET(value_, Log::Value) };
        inline Log& setValue(const Log::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
        inline Log& setValue(Log::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


        // zoneName Field Functions 
        bool hasZoneName() const { return this->zoneName_ != nullptr;};
        void deleteZoneName() { this->zoneName_ = nullptr;};
        inline string getZoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
        inline Log& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


      protected:
        // Parse log ID (can be duplicated).
        shared_ptr<string> dnsMsgId_ {};
        // Parse timestamp.
        shared_ptr<int64_t> logTime_ {};
        // The protocol type of the domain name resolution query request:
        // - UDP
        // - TCP
        // - HTTP
        // - HTTPS
        // - DOH
        shared_ptr<string> protocol_ {};
        // The domain name for which you want to query Domain Name System (DNS) records.
        shared_ptr<string> queryName_ {};
        // Record type.
        shared_ptr<string> queryType_ {};
        // Parse response time.
        shared_ptr<int32_t> rt_ {};
        // Parse server IP.
        shared_ptr<string> serverIp_ {};
        // Source IP address.
        shared_ptr<string> sourceIp_ {};
        // Response status.
        shared_ptr<string> status_ {};
        // The value set for the edns-client-subnet option.
        shared_ptr<string> subnetIp_ {};
        // Array of parsing results.
        shared_ptr<Log::Value> value_ {};
        // The zone name.
        shared_ptr<string> zoneName_ {};
      };

      virtual bool empty() const override { return this->log_ == nullptr; };
      // log Field Functions 
      bool hasLog() const { return this->log_ != nullptr;};
      void deleteLog() { this->log_ = nullptr;};
      inline const vector<Logs::Log> & getLog() const { DARABONBA_PTR_GET_CONST(log_, vector<Logs::Log>) };
      inline vector<Logs::Log> getLog() { DARABONBA_PTR_GET(log_, vector<Logs::Log>) };
      inline Logs& setLog(const vector<Logs::Log> & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
      inline Logs& setLog(vector<Logs::Log> && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


    protected:
      shared_ptr<vector<Logs::Log>> log_ {};
    };

    virtual bool empty() const override { return this->complete_ == nullptr
        && this->curPage_ == nullptr && this->logs_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalPage_ == nullptr
        && this->totalSize_ == nullptr; };
    // complete Field Functions 
    bool hasComplete() const { return this->complete_ != nullptr;};
    void deleteComplete() { this->complete_ = nullptr;};
    inline bool getComplete() const { DARABONBA_PTR_GET_DEFAULT(complete_, false) };
    inline DescribeInternetDnsLogsResponseBody& setComplete(bool complete) { DARABONBA_PTR_SET_VALUE(complete_, complete) };


    // curPage Field Functions 
    bool hasCurPage() const { return this->curPage_ != nullptr;};
    void deleteCurPage() { this->curPage_ = nullptr;};
    inline int32_t getCurPage() const { DARABONBA_PTR_GET_DEFAULT(curPage_, 0) };
    inline DescribeInternetDnsLogsResponseBody& setCurPage(int32_t curPage) { DARABONBA_PTR_SET_VALUE(curPage_, curPage) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const DescribeInternetDnsLogsResponseBody::Logs & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, DescribeInternetDnsLogsResponseBody::Logs) };
    inline DescribeInternetDnsLogsResponseBody::Logs getLogs() { DARABONBA_PTR_GET(logs_, DescribeInternetDnsLogsResponseBody::Logs) };
    inline DescribeInternetDnsLogsResponseBody& setLogs(const DescribeInternetDnsLogsResponseBody::Logs & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeInternetDnsLogsResponseBody& setLogs(DescribeInternetDnsLogsResponseBody::Logs && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInternetDnsLogsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInternetDnsLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline DescribeInternetDnsLogsResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
    inline DescribeInternetDnsLogsResponseBody& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // Indicates whether the log query is precise.
    shared_ptr<bool> complete_ {};
    // Current page number.
    shared_ptr<int32_t> curPage_ {};
    // The queried logs.
    shared_ptr<DescribeInternetDnsLogsResponseBody::Logs> logs_ {};
    // Page size for query.
    shared_ptr<int32_t> pageSize_ {};
    // Unique request identifier.
    shared_ptr<string> requestId_ {};
    // Total number of pages.
    shared_ptr<int32_t> totalPage_ {};
    // Total quantity.
    shared_ptr<int32_t> totalSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
