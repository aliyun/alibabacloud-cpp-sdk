// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGEXTTLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINLOGEXTTLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainLogExTtlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainLogExTtlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainLogExTtlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLogDetails, domainLogDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainLogExTtlResponseBody() = default ;
    DescribeDcdnDomainLogExTtlResponseBody(const DescribeDcdnDomainLogExTtlResponseBody &) = default ;
    DescribeDcdnDomainLogExTtlResponseBody(DescribeDcdnDomainLogExTtlResponseBody &&) = default ;
    DescribeDcdnDomainLogExTtlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainLogExTtlResponseBody() = default ;
    DescribeDcdnDomainLogExTtlResponseBody& operator=(const DescribeDcdnDomainLogExTtlResponseBody &) = default ;
    DescribeDcdnDomainLogExTtlResponseBody& operator=(DescribeDcdnDomainLogExTtlResponseBody &&) = default ;
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
            DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
            DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
            DARABONBA_PTR_TO_JSON(Total, total_);
          };
          friend void from_json(const Darabonba::Json& j, PageInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
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
          virtual bool empty() const override { return this->pageIndex_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
          // pageIndex Field Functions 
          bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
          void deletePageIndex() { this->pageIndex_ = nullptr;};
          inline int64_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0L) };
          inline PageInfos& setPageIndex(int64_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


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
          shared_ptr<int64_t> pageIndex_ {};
          shared_ptr<int64_t> pageSize_ {};
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
            shared_ptr<string> endTime_ {};
            shared_ptr<string> logName_ {};
            shared_ptr<string> logPath_ {};
            shared_ptr<int64_t> logSize_ {};
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
        shared_ptr<string> domainName_ {};
        shared_ptr<int64_t> logCount_ {};
        shared_ptr<DomainLogDetail::LogInfos> logInfos_ {};
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
    inline const DescribeDcdnDomainLogExTtlResponseBody::DomainLogDetails & getDomainLogDetails() const { DARABONBA_PTR_GET_CONST(domainLogDetails_, DescribeDcdnDomainLogExTtlResponseBody::DomainLogDetails) };
    inline DescribeDcdnDomainLogExTtlResponseBody::DomainLogDetails getDomainLogDetails() { DARABONBA_PTR_GET(domainLogDetails_, DescribeDcdnDomainLogExTtlResponseBody::DomainLogDetails) };
    inline DescribeDcdnDomainLogExTtlResponseBody& setDomainLogDetails(const DescribeDcdnDomainLogExTtlResponseBody::DomainLogDetails & domainLogDetails) { DARABONBA_PTR_SET_VALUE(domainLogDetails_, domainLogDetails) };
    inline DescribeDcdnDomainLogExTtlResponseBody& setDomainLogDetails(DescribeDcdnDomainLogExTtlResponseBody::DomainLogDetails && domainLogDetails) { DARABONBA_PTR_SET_RVALUE(domainLogDetails_, domainLogDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainLogExTtlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeDcdnDomainLogExTtlResponseBody::DomainLogDetails> domainLogDetails_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
