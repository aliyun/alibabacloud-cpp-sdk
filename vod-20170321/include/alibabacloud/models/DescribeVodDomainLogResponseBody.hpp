// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINLOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODDOMAINLOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodDomainLogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodDomainLogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodDomainLogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodDomainLogResponseBody() = default ;
    DescribeVodDomainLogResponseBody(const DescribeVodDomainLogResponseBody &) = default ;
    DescribeVodDomainLogResponseBody(DescribeVodDomainLogResponseBody &&) = default ;
    DescribeVodDomainLogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodDomainLogResponseBody() = default ;
    DescribeVodDomainLogResponseBody& operator=(const DescribeVodDomainLogResponseBody &) = default ;
    DescribeVodDomainLogResponseBody& operator=(DescribeVodDomainLogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainLogDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainLogDetails& obj) { 
        DARABONBA_PTR_TO_JSON(DomainLogDetail, domainLogDetail_);
      };
      friend void from_json(const Darabonba::Json& j, DomainLogDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(DomainLogDetail, domainLogDetail_);
      };
      DomainLogDetails() = default ;
      DomainLogDetails(const DomainLogDetails &) = default ;
      DomainLogDetails(DomainLogDetails &&) = default ;
      DomainLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainLogDetails() = default ;
      DomainLogDetails& operator=(const DomainLogDetails &) = default ;
      DomainLogDetails& operator=(DomainLogDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DomainLogDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DomainLogDetail& obj) { 
          DARABONBA_PTR_TO_JSON(DomainName, domainName_);
          DARABONBA_PTR_TO_JSON(LogCount, logCount_);
          DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
          DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
        };
        friend void from_json(const Darabonba::Json& j, DomainLogDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
          DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
          DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
          DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
        };
        DomainLogDetail() = default ;
        DomainLogDetail(const DomainLogDetail &) = default ;
        DomainLogDetail(DomainLogDetail &&) = default ;
        DomainLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DomainLogDetail() = default ;
        DomainLogDetail& operator=(const DomainLogDetail &) = default ;
        DomainLogDetail& operator=(DomainLogDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PageInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PageInfos& obj) { 
            DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
            DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
            DARABONBA_PTR_TO_JSON(Total, total_);
          };
          friend void from_json(const Darabonba::Json& j, PageInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
            DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
            DARABONBA_PTR_FROM_JSON(Total, total_);
          };
          PageInfos() = default ;
          PageInfos(const PageInfos &) = default ;
          PageInfos(PageInfos &&) = default ;
          PageInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PageInfos() = default ;
          PageInfos& operator=(const PageInfos &) = default ;
          PageInfos& operator=(PageInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
          // pageNumber Field Functions 
          bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
          void deletePageNumber() { this->pageNumber_ = nullptr;};
          inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
          inline PageInfos& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


          // pageSize Field Functions 
          bool hasPageSize() const { return this->pageSize_ != nullptr;};
          void deletePageSize() { this->pageSize_ = nullptr;};
          inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
          inline PageInfos& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


          // total Field Functions 
          bool hasTotal() const { return this->total_ != nullptr;};
          void deleteTotal() { this->total_ = nullptr;};
          inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
          inline PageInfos& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


        protected:
          // The page number.
          shared_ptr<int64_t> pageNumber_ {};
          // The number of entries per page.
          shared_ptr<int64_t> pageSize_ {};
          // The total number of entries returned.
          shared_ptr<int64_t> total_ {};
        };

        class LogInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LogInfos& obj) { 
            DARABONBA_PTR_TO_JSON(LogInfoDetail, logInfoDetail_);
          };
          friend void from_json(const Darabonba::Json& j, LogInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(LogInfoDetail, logInfoDetail_);
          };
          LogInfos() = default ;
          LogInfos(const LogInfos &) = default ;
          LogInfos(LogInfos &&) = default ;
          LogInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LogInfos() = default ;
          LogInfos& operator=(const LogInfos &) = default ;
          LogInfos& operator=(LogInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class LogInfoDetail : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const LogInfoDetail& obj) { 
              DARABONBA_PTR_TO_JSON(EndTime, endTime_);
              DARABONBA_PTR_TO_JSON(LogName, logName_);
              DARABONBA_PTR_TO_JSON(LogPath, logPath_);
              DARABONBA_PTR_TO_JSON(LogSize, logSize_);
              DARABONBA_PTR_TO_JSON(StartTime, startTime_);
            };
            friend void from_json(const Darabonba::Json& j, LogInfoDetail& obj) { 
              DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
              DARABONBA_PTR_FROM_JSON(LogName, logName_);
              DARABONBA_PTR_FROM_JSON(LogPath, logPath_);
              DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
              DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
            };
            LogInfoDetail() = default ;
            LogInfoDetail(const LogInfoDetail &) = default ;
            LogInfoDetail(LogInfoDetail &&) = default ;
            LogInfoDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~LogInfoDetail() = default ;
            LogInfoDetail& operator=(const LogInfoDetail &) = default ;
            LogInfoDetail& operator=(LogInfoDetail &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->endTime_ == nullptr
        && this->logName_ == nullptr && this->logPath_ == nullptr && this->logSize_ == nullptr && this->startTime_ == nullptr; };
            // endTime Field Functions 
            bool hasEndTime() const { return this->endTime_ != nullptr;};
            void deleteEndTime() { this->endTime_ = nullptr;};
            inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
            inline LogInfoDetail& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


            // logName Field Functions 
            bool hasLogName() const { return this->logName_ != nullptr;};
            void deleteLogName() { this->logName_ = nullptr;};
            inline string getLogName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
            inline LogInfoDetail& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


            // logPath Field Functions 
            bool hasLogPath() const { return this->logPath_ != nullptr;};
            void deleteLogPath() { this->logPath_ = nullptr;};
            inline string getLogPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
            inline LogInfoDetail& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


            // logSize Field Functions 
            bool hasLogSize() const { return this->logSize_ != nullptr;};
            void deleteLogSize() { this->logSize_ = nullptr;};
            inline int64_t getLogSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0L) };
            inline LogInfoDetail& setLogSize(int64_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


            // startTime Field Functions 
            bool hasStartTime() const { return this->startTime_ != nullptr;};
            void deleteStartTime() { this->startTime_ = nullptr;};
            inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
            inline LogInfoDetail& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


          protected:
            // The end of the time range during which data was queried. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
            shared_ptr<string> endTime_ {};
            // The name of the log file.
            shared_ptr<string> logName_ {};
            // The path of the log file.
            shared_ptr<string> logPath_ {};
            // The size of the log file.
            shared_ptr<int64_t> logSize_ {};
            // The beginning of the time range during which data was queried. The time follows the ISO 8601 standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
            shared_ptr<string> startTime_ {};
          };

          virtual bool empty() const override { return this->logInfoDetail_ == nullptr; };
          // logInfoDetail Field Functions 
          bool hasLogInfoDetail() const { return this->logInfoDetail_ != nullptr;};
          void deleteLogInfoDetail() { this->logInfoDetail_ = nullptr;};
          inline const vector<LogInfos::LogInfoDetail> & getLogInfoDetail() const { DARABONBA_PTR_GET_CONST(logInfoDetail_, vector<LogInfos::LogInfoDetail>) };
          inline vector<LogInfos::LogInfoDetail> getLogInfoDetail() { DARABONBA_PTR_GET(logInfoDetail_, vector<LogInfos::LogInfoDetail>) };
          inline LogInfos& setLogInfoDetail(const vector<LogInfos::LogInfoDetail> & logInfoDetail) { DARABONBA_PTR_SET_VALUE(logInfoDetail_, logInfoDetail) };
          inline LogInfos& setLogInfoDetail(vector<LogInfos::LogInfoDetail> && logInfoDetail) { DARABONBA_PTR_SET_RVALUE(logInfoDetail_, logInfoDetail) };


        protected:
          shared_ptr<vector<LogInfos::LogInfoDetail>> logInfoDetail_ {};
        };

        virtual bool empty() const override { return this->domainName_ == nullptr
        && this->logCount_ == nullptr && this->logInfos_ == nullptr && this->pageInfos_ == nullptr; };
        // domainName Field Functions 
        bool hasDomainName() const { return this->domainName_ != nullptr;};
        void deleteDomainName() { this->domainName_ = nullptr;};
        inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
        inline DomainLogDetail& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


        // logCount Field Functions 
        bool hasLogCount() const { return this->logCount_ != nullptr;};
        void deleteLogCount() { this->logCount_ = nullptr;};
        inline int64_t getLogCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
        inline DomainLogDetail& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


        // logInfos Field Functions 
        bool hasLogInfos() const { return this->logInfos_ != nullptr;};
        void deleteLogInfos() { this->logInfos_ = nullptr;};
        inline const DomainLogDetail::LogInfos & getLogInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, DomainLogDetail::LogInfos) };
        inline DomainLogDetail::LogInfos getLogInfos() { DARABONBA_PTR_GET(logInfos_, DomainLogDetail::LogInfos) };
        inline DomainLogDetail& setLogInfos(const DomainLogDetail::LogInfos & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
        inline DomainLogDetail& setLogInfos(DomainLogDetail::LogInfos && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


        // pageInfos Field Functions 
        bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
        void deletePageInfos() { this->pageInfos_ = nullptr;};
        inline const DomainLogDetail::PageInfos & getPageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, DomainLogDetail::PageInfos) };
        inline DomainLogDetail::PageInfos getPageInfos() { DARABONBA_PTR_GET(pageInfos_, DomainLogDetail::PageInfos) };
        inline DomainLogDetail& setPageInfos(const DomainLogDetail::PageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
        inline DomainLogDetail& setPageInfos(DomainLogDetail::PageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


      protected:
        // The domain name.
        shared_ptr<string> domainName_ {};
        // The total number of entries returned on the current page.
        shared_ptr<int64_t> logCount_ {};
        // The queried CDN logs.
        shared_ptr<DomainLogDetail::LogInfos> logInfos_ {};
        // The pagination information.
        shared_ptr<DomainLogDetail::PageInfos> pageInfos_ {};
      };

      virtual bool empty() const override { return this->domainLogDetail_ == nullptr; };
      // domainLogDetail Field Functions 
      bool hasDomainLogDetail() const { return this->domainLogDetail_ != nullptr;};
      void deleteDomainLogDetail() { this->domainLogDetail_ = nullptr;};
      inline const vector<DomainLogDetails::DomainLogDetail> & getDomainLogDetail() const { DARABONBA_PTR_GET_CONST(domainLogDetail_, vector<DomainLogDetails::DomainLogDetail>) };
      inline vector<DomainLogDetails::DomainLogDetail> getDomainLogDetail() { DARABONBA_PTR_GET(domainLogDetail_, vector<DomainLogDetails::DomainLogDetail>) };
      inline DomainLogDetails& setDomainLogDetail(const vector<DomainLogDetails::DomainLogDetail> & domainLogDetail) { DARABONBA_PTR_SET_VALUE(domainLogDetail_, domainLogDetail) };
      inline DomainLogDetails& setDomainLogDetail(vector<DomainLogDetails::DomainLogDetail> && domainLogDetail) { DARABONBA_PTR_SET_RVALUE(domainLogDetail_, domainLogDetail) };


    protected:
      shared_ptr<vector<DomainLogDetails::DomainLogDetail>> domainLogDetail_ {};
    };

    virtual bool empty() const override { return this->domainLogDetails_ == nullptr
        && this->requestId_ == nullptr; };
    // domainLogDetails Field Functions 
    bool hasDomainLogDetails() const { return this->domainLogDetails_ != nullptr;};
    void deleteDomainLogDetails() { this->domainLogDetails_ = nullptr;};
    inline const DescribeVodDomainLogResponseBody::DomainLogDetails & getDomainLogDetails() const { DARABONBA_PTR_GET_CONST(domainLogDetails_, DescribeVodDomainLogResponseBody::DomainLogDetails) };
    inline DescribeVodDomainLogResponseBody::DomainLogDetails getDomainLogDetails() { DARABONBA_PTR_GET(domainLogDetails_, DescribeVodDomainLogResponseBody::DomainLogDetails) };
    inline DescribeVodDomainLogResponseBody& setDomainLogDetails(const DescribeVodDomainLogResponseBody::DomainLogDetails & domainLogDetails) { DARABONBA_PTR_SET_VALUE(domainLogDetails_, domainLogDetails) };
    inline DescribeVodDomainLogResponseBody& setDomainLogDetails(DescribeVodDomainLogResponseBody::DomainLogDetails && domainLogDetails) { DARABONBA_PTR_SET_RVALUE(domainLogDetails_, domainLogDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodDomainLogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of CDN logs.
    shared_ptr<DescribeVodDomainLogResponseBody::DomainLogDetails> domainLogDetails_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
