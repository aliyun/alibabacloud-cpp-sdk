// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESITELOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeSiteLogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSiteLogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteLogDetails, siteLogDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSiteLogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteLogDetails, siteLogDetails_);
    };
    DescribeSiteLogsResponseBody() = default ;
    DescribeSiteLogsResponseBody(const DescribeSiteLogsResponseBody &) = default ;
    DescribeSiteLogsResponseBody(DescribeSiteLogsResponseBody &&) = default ;
    DescribeSiteLogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSiteLogsResponseBody() = default ;
    DescribeSiteLogsResponseBody& operator=(const DescribeSiteLogsResponseBody &) = default ;
    DescribeSiteLogsResponseBody& operator=(DescribeSiteLogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SiteLogDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SiteLogDetails& obj) { 
        DARABONBA_PTR_TO_JSON(LogCount, logCount_);
        DARABONBA_PTR_TO_JSON(LogInfos, logInfos_);
        DARABONBA_PTR_TO_JSON(PageInfos, pageInfos_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      };
      friend void from_json(const Darabonba::Json& j, SiteLogDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
        DARABONBA_PTR_FROM_JSON(LogInfos, logInfos_);
        DARABONBA_PTR_FROM_JSON(PageInfos, pageInfos_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      };
      SiteLogDetails() = default ;
      SiteLogDetails(const SiteLogDetails &) = default ;
      SiteLogDetails(SiteLogDetails &&) = default ;
      SiteLogDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SiteLogDetails() = default ;
      SiteLogDetails& operator=(const SiteLogDetails &) = default ;
      SiteLogDetails& operator=(SiteLogDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class PageInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfos& obj) { 
          DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        virtual bool empty() const override { return this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // pageIndex Field Functions 
        bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
        void deletePageIndex() { this->pageIndex_ = nullptr;};
        inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
        inline PageInfos& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfos& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
        inline PageInfos& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The page number returned.
        shared_ptr<int32_t> pageIndex_ {};
        // The number of entries per page. Default value: **300**. Valid values: **1 to 1000**.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int32_t> totalCount_ {};
      };

      class LogInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LogInfos& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(LogName, logName_);
          DARABONBA_PTR_TO_JSON(LogPath, logPath_);
          DARABONBA_PTR_TO_JSON(LogSize, logSize_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, LogInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(LogName, logName_);
          DARABONBA_PTR_FROM_JSON(LogPath, logPath_);
          DARABONBA_PTR_FROM_JSON(LogSize, logSize_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
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
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->logName_ == nullptr && this->logPath_ == nullptr && this->logSize_ == nullptr && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
        inline LogInfos& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // logName Field Functions 
        bool hasLogName() const { return this->logName_ != nullptr;};
        void deleteLogName() { this->logName_ = nullptr;};
        inline string getLogName() const { DARABONBA_PTR_GET_DEFAULT(logName_, "") };
        inline LogInfos& setLogName(string logName) { DARABONBA_PTR_SET_VALUE(logName_, logName) };


        // logPath Field Functions 
        bool hasLogPath() const { return this->logPath_ != nullptr;};
        void deleteLogPath() { this->logPath_ = nullptr;};
        inline string getLogPath() const { DARABONBA_PTR_GET_DEFAULT(logPath_, "") };
        inline LogInfos& setLogPath(string logPath) { DARABONBA_PTR_SET_VALUE(logPath_, logPath) };


        // logSize Field Functions 
        bool hasLogSize() const { return this->logSize_ != nullptr;};
        void deleteLogSize() { this->logSize_ = nullptr;};
        inline int32_t getLogSize() const { DARABONBA_PTR_GET_DEFAULT(logSize_, 0) };
        inline LogInfos& setLogSize(int32_t logSize) { DARABONBA_PTR_SET_VALUE(logSize_, logSize) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline LogInfos& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // The end time.
        shared_ptr<string> endTime_ {};
        // The name of the log file.
        shared_ptr<string> logName_ {};
        // The log path.
        // 
        // >  Take note of the Expires field (expiration timestamp) in this parameter. If the log download URL expires, you must reobtain the URL.
        shared_ptr<string> logPath_ {};
        // The size of the log file. Unit: bytes.
        shared_ptr<int32_t> logSize_ {};
        // The create time.
        shared_ptr<string> startTime_ {};
      };

      virtual bool empty() const override { return this->logCount_ == nullptr
        && this->logInfos_ == nullptr && this->pageInfos_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr; };
      // logCount Field Functions 
      bool hasLogCount() const { return this->logCount_ != nullptr;};
      void deleteLogCount() { this->logCount_ = nullptr;};
      inline int32_t getLogCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0) };
      inline SiteLogDetails& setLogCount(int32_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


      // logInfos Field Functions 
      bool hasLogInfos() const { return this->logInfos_ != nullptr;};
      void deleteLogInfos() { this->logInfos_ = nullptr;};
      inline const vector<SiteLogDetails::LogInfos> & getLogInfos() const { DARABONBA_PTR_GET_CONST(logInfos_, vector<SiteLogDetails::LogInfos>) };
      inline vector<SiteLogDetails::LogInfos> getLogInfos() { DARABONBA_PTR_GET(logInfos_, vector<SiteLogDetails::LogInfos>) };
      inline SiteLogDetails& setLogInfos(const vector<SiteLogDetails::LogInfos> & logInfos) { DARABONBA_PTR_SET_VALUE(logInfos_, logInfos) };
      inline SiteLogDetails& setLogInfos(vector<SiteLogDetails::LogInfos> && logInfos) { DARABONBA_PTR_SET_RVALUE(logInfos_, logInfos) };


      // pageInfos Field Functions 
      bool hasPageInfos() const { return this->pageInfos_ != nullptr;};
      void deletePageInfos() { this->pageInfos_ = nullptr;};
      inline const SiteLogDetails::PageInfos & getPageInfos() const { DARABONBA_PTR_GET_CONST(pageInfos_, SiteLogDetails::PageInfos) };
      inline SiteLogDetails::PageInfos getPageInfos() { DARABONBA_PTR_GET(pageInfos_, SiteLogDetails::PageInfos) };
      inline SiteLogDetails& setPageInfos(const SiteLogDetails::PageInfos & pageInfos) { DARABONBA_PTR_SET_VALUE(pageInfos_, pageInfos) };
      inline SiteLogDetails& setPageInfos(SiteLogDetails::PageInfos && pageInfos) { DARABONBA_PTR_SET_RVALUE(pageInfos_, pageInfos) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
      inline SiteLogDetails& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // siteName Field Functions 
      bool hasSiteName() const { return this->siteName_ != nullptr;};
      void deleteSiteName() { this->siteName_ = nullptr;};
      inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
      inline SiteLogDetails& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    protected:
      // The total number of entries returned on the current page.
      shared_ptr<int32_t> logCount_ {};
      // The details of the website log files.
      shared_ptr<vector<SiteLogDetails::LogInfos>> logInfos_ {};
      // Pagination information.
      shared_ptr<SiteLogDetails::PageInfos> pageInfos_ {};
      // The website ID.
      shared_ptr<int64_t> siteId_ {};
      // The website name.
      shared_ptr<string> siteName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->siteLogDetails_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSiteLogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteLogDetails Field Functions 
    bool hasSiteLogDetails() const { return this->siteLogDetails_ != nullptr;};
    void deleteSiteLogDetails() { this->siteLogDetails_ = nullptr;};
    inline const vector<DescribeSiteLogsResponseBody::SiteLogDetails> & getSiteLogDetails() const { DARABONBA_PTR_GET_CONST(siteLogDetails_, vector<DescribeSiteLogsResponseBody::SiteLogDetails>) };
    inline vector<DescribeSiteLogsResponseBody::SiteLogDetails> getSiteLogDetails() { DARABONBA_PTR_GET(siteLogDetails_, vector<DescribeSiteLogsResponseBody::SiteLogDetails>) };
    inline DescribeSiteLogsResponseBody& setSiteLogDetails(const vector<DescribeSiteLogsResponseBody::SiteLogDetails> & siteLogDetails) { DARABONBA_PTR_SET_VALUE(siteLogDetails_, siteLogDetails) };
    inline DescribeSiteLogsResponseBody& setSiteLogDetails(vector<DescribeSiteLogsResponseBody::SiteLogDetails> && siteLogDetails) { DARABONBA_PTR_SET_RVALUE(siteLogDetails_, siteLogDetails) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the website log files.
    shared_ptr<vector<DescribeSiteLogsResponseBody::SiteLogDetails>> siteLogDetails_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
