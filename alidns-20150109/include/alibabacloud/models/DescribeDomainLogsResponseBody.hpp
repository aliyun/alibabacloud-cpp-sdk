// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINLOGSRESPONSEBODY_HPP_
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
  class DescribeDomainLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogs, domainLogs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogs, domainLogs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDomainLogsResponseBody() = default ;
    DescribeDomainLogsResponseBody(const DescribeDomainLogsResponseBody &) = default ;
    DescribeDomainLogsResponseBody(DescribeDomainLogsResponseBody &&) = default ;
    DescribeDomainLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainLogsResponseBody() = default ;
    DescribeDomainLogsResponseBody& operator=(const DescribeDomainLogsResponseBody &) = default ;
    DescribeDomainLogsResponseBody& operator=(DescribeDomainLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainLogs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainLogs& obj) { 
        DARABONBA_PTR_TO_JSON(DomainLog, domainLog_);
      };
      friend void from_json(const Darabonba::Json& j, DomainLogs& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainLog, domainLog_);
      };
      DomainLogs() = default ;
      DomainLogs(const DomainLogs &) = default ;
      DomainLogs(DomainLogs &&) = default ;
      DomainLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainLogs() = default ;
      DomainLogs& operator=(const DomainLogs &) = default ;
      DomainLogs& operator=(DomainLogs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainLog : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainLog& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ActionTime, actionTime_);
          DARABONBA_PTR_TO_JSON(ActionTimestamp, actionTimestamp_);
          DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, DomainLog& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ActionTime, actionTime_);
          DARABONBA_PTR_FROM_JSON(ActionTimestamp, actionTimestamp_);
          DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        DomainLog() = default ;
        DomainLog(const DomainLog &) = default ;
        DomainLog(DomainLog &&) = default ;
        DomainLog(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainLog() = default ;
        DomainLog& operator=(const DomainLog &) = default ;
        DomainLog& operator=(DomainLog &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->actionTime_ == nullptr && this->actionTimestamp_ == nullptr && this->clientIp_ == nullptr && this->domainName_ == nullptr && this->message_ == nullptr
        && this->zoneId_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline DomainLog& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // actionTime Field Functions 
        bool hasActionTime() const { return this->actionTime_ != nullptr;};
        void deleteActionTime() { this->actionTime_ = nullptr;};
        inline string getActionTime() const { DARABONBA_PTR_GET_DEFAULT(actionTime_, "") };
        inline DomainLog& setActionTime(string actionTime) { DARABONBA_PTR_SET_VALUE(actionTime_, actionTime) };


        // actionTimestamp Field Functions 
        bool hasActionTimestamp() const { return this->actionTimestamp_ != nullptr;};
        void deleteActionTimestamp() { this->actionTimestamp_ = nullptr;};
        inline int64_t getActionTimestamp() const { DARABONBA_PTR_GET_DEFAULT(actionTimestamp_, 0L) };
        inline DomainLog& setActionTimestamp(int64_t actionTimestamp) { DARABONBA_PTR_SET_VALUE(actionTimestamp_, actionTimestamp) };


        // clientIp Field Functions 
        bool hasClientIp() const { return this->clientIp_ != nullptr;};
        void deleteClientIp() { this->clientIp_ = nullptr;};
        inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
        inline DomainLog& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainLog& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline DomainLog& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline DomainLog& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The operation.
        shared_ptr<string> action_ {};
        // The time when the operation is performed. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
        shared_ptr<string> actionTime_ {};
        // The time when the operation was performed. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> actionTimestamp_ {};
        // The IP address of the operator.
        shared_ptr<string> clientIp_ {};
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The message for the operation.
        shared_ptr<string> message_ {};
        // The ID of the private zone.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->domainLog_ == nullptr; };
      // domainLog Field Functions 
      bool hasDomainLog() const { return this->domainLog_ != nullptr;};
      void deleteDomainLog() { this->domainLog_ = nullptr;};
      inline const vector<DomainLogs::DomainLog> & getDomainLog() const { DARABONBA_PTR_GET_CONST(domainLog_, vector<DomainLogs::DomainLog>) };
      inline vector<DomainLogs::DomainLog> getDomainLog() { DARABONBA_PTR_GET(domainLog_, vector<DomainLogs::DomainLog>) };
      inline DomainLogs& setDomainLog(const vector<DomainLogs::DomainLog> & domainLog) { DARABONBA_PTR_SET_VALUE(domainLog_, domainLog) };
      inline DomainLogs& setDomainLog(vector<DomainLogs::DomainLog> && domainLog) { DARABONBA_PTR_SET_RVALUE(domainLog_, domainLog) };


    protected:
      shared_ptr<vector<DomainLogs::DomainLog>> domainLog_ {};
    };

    virtual bool empty() const override { return this->domainLogs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domainLogs Field Functions 
    bool hasDomainLogs() const { return this->domainLogs_ != nullptr;};
    void deleteDomainLogs() { this->domainLogs_ = nullptr;};
    inline const DescribeDomainLogsResponseBody::DomainLogs & getDomainLogs() const { DARABONBA_PTR_GET_CONST(domainLogs_, DescribeDomainLogsResponseBody::DomainLogs) };
    inline DescribeDomainLogsResponseBody::DomainLogs getDomainLogs() { DARABONBA_PTR_GET(domainLogs_, DescribeDomainLogsResponseBody::DomainLogs) };
    inline DescribeDomainLogsResponseBody& setDomainLogs(const DescribeDomainLogsResponseBody::DomainLogs & domainLogs) { DARABONBA_PTR_SET_VALUE(domainLogs_, domainLogs) };
    inline DescribeDomainLogsResponseBody& setDomainLogs(DescribeDomainLogsResponseBody::DomainLogs && domainLogs) { DARABONBA_PTR_SET_RVALUE(domainLogs_, domainLogs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainLogsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainLogsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeDomainLogsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The operation logs.
    shared_ptr<DescribeDomainLogsResponseBody::DomainLogs> domainLogs_ {};
    // The page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
