// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATLOGSRESPONSEBODY_HPP_
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
  class DescribePdnsThreatLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsThreatLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsThreatLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePdnsThreatLogsResponseBody() = default ;
    DescribePdnsThreatLogsResponseBody(const DescribePdnsThreatLogsResponseBody &) = default ;
    DescribePdnsThreatLogsResponseBody(DescribePdnsThreatLogsResponseBody &&) = default ;
    DescribePdnsThreatLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsThreatLogsResponseBody() = default ;
    DescribePdnsThreatLogsResponseBody& operator=(const DescribePdnsThreatLogsResponseBody &) = default ;
    DescribePdnsThreatLogsResponseBody& operator=(DescribePdnsThreatLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
        DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_TO_JSON(ThreatTime, threatTime_);
        DARABONBA_PTR_TO_JSON(ThreatType, threatType_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
        DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
        DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
        DARABONBA_PTR_FROM_JSON(ThreatTime, threatTime_);
        DARABONBA_PTR_FROM_JSON(ThreatType, threatType_);
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
      virtual bool empty() const override { return this->sourceIp_ == nullptr
        && this->subDomain_ == nullptr && this->threatLevel_ == nullptr && this->threatTime_ == nullptr && this->threatType_ == nullptr; };
      // sourceIp Field Functions 
      bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
      void deleteSourceIp() { this->sourceIp_ = nullptr;};
      inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
      inline Logs& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


      // subDomain Field Functions 
      bool hasSubDomain() const { return this->subDomain_ != nullptr;};
      void deleteSubDomain() { this->subDomain_ = nullptr;};
      inline string getSubDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
      inline Logs& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


      // threatLevel Field Functions 
      bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
      void deleteThreatLevel() { this->threatLevel_ = nullptr;};
      inline string getThreatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
      inline Logs& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


      // threatTime Field Functions 
      bool hasThreatTime() const { return this->threatTime_ != nullptr;};
      void deleteThreatTime() { this->threatTime_ = nullptr;};
      inline string getThreatTime() const { DARABONBA_PTR_GET_DEFAULT(threatTime_, "") };
      inline Logs& setThreatTime(string threatTime) { DARABONBA_PTR_SET_VALUE(threatTime_, threatTime) };


      // threatType Field Functions 
      bool hasThreatType() const { return this->threatType_ != nullptr;};
      void deleteThreatType() { this->threatType_ = nullptr;};
      inline string getThreatType() const { DARABONBA_PTR_GET_DEFAULT(threatType_, "") };
      inline Logs& setThreatType(string threatType) { DARABONBA_PTR_SET_VALUE(threatType_, threatType) };


    protected:
      shared_ptr<string> sourceIp_ {};
      shared_ptr<string> subDomain_ {};
      shared_ptr<string> threatLevel_ {};
      shared_ptr<string> threatTime_ {};
      shared_ptr<string> threatType_ {};
    };

    virtual bool empty() const override { return this->logs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<DescribePdnsThreatLogsResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<DescribePdnsThreatLogsResponseBody::Logs>) };
    inline vector<DescribePdnsThreatLogsResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<DescribePdnsThreatLogsResponseBody::Logs>) };
    inline DescribePdnsThreatLogsResponseBody& setLogs(const vector<DescribePdnsThreatLogsResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribePdnsThreatLogsResponseBody& setLogs(vector<DescribePdnsThreatLogsResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribePdnsThreatLogsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribePdnsThreatLogsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePdnsThreatLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePdnsThreatLogsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribePdnsThreatLogsResponseBody::Logs>> logs_ {};
    shared_ptr<int64_t> pageNumber_ {};
    shared_ptr<int64_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
