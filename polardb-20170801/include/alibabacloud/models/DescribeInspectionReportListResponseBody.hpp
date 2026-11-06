// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONREPORTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSPECTIONREPORTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeInspectionReportListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInspectionReportListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ReportItems, reportItems_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInspectionReportListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ReportItems, reportItems_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInspectionReportListResponseBody() = default ;
    DescribeInspectionReportListResponseBody(const DescribeInspectionReportListResponseBody &) = default ;
    DescribeInspectionReportListResponseBody(DescribeInspectionReportListResponseBody &&) = default ;
    DescribeInspectionReportListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInspectionReportListResponseBody() = default ;
    DescribeInspectionReportListResponseBody& operator=(const DescribeInspectionReportListResponseBody &) = default ;
    DescribeInspectionReportListResponseBody& operator=(DescribeInspectionReportListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReportItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportItems& obj) { 
        DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_TO_JSON(Latest, latest_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReportDescription, reportDescription_);
        DARABONBA_PTR_TO_JSON(ReportId, reportId_);
        DARABONBA_PTR_TO_JSON(ReportScore, reportScore_);
        DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
        DARABONBA_PTR_TO_JSON(ReportSummary, reportSummary_);
        DARABONBA_PTR_TO_JSON(ReportTime, reportTime_);
        DARABONBA_PTR_TO_JSON(SubItems, subItems_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      };
      friend void from_json(const Darabonba::Json& j, ReportItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
        DARABONBA_PTR_FROM_JSON(Latest, latest_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReportDescription, reportDescription_);
        DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
        DARABONBA_PTR_FROM_JSON(ReportScore, reportScore_);
        DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
        DARABONBA_PTR_FROM_JSON(ReportSummary, reportSummary_);
        DARABONBA_PTR_FROM_JSON(ReportTime, reportTime_);
        DARABONBA_PTR_FROM_JSON(SubItems, subItems_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      };
      ReportItems() = default ;
      ReportItems(const ReportItems &) = default ;
      ReportItems(ReportItems &&) = default ;
      ReportItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportItems() = default ;
      ReportItems& operator=(const ReportItems &) = default ;
      ReportItems& operator=(ReportItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SubItems : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SubItems& obj) { 
          DARABONBA_PTR_TO_JSON(Critical, critical_);
          DARABONBA_PTR_TO_JSON(Info, info_);
          DARABONBA_PTR_TO_JSON(Normal, normal_);
          DARABONBA_PTR_TO_JSON(Warning, warning_);
        };
        friend void from_json(const Darabonba::Json& j, SubItems& obj) { 
          DARABONBA_PTR_FROM_JSON(Critical, critical_);
          DARABONBA_PTR_FROM_JSON(Info, info_);
          DARABONBA_PTR_FROM_JSON(Normal, normal_);
          DARABONBA_PTR_FROM_JSON(Warning, warning_);
        };
        SubItems() = default ;
        SubItems(const SubItems &) = default ;
        SubItems(SubItems &&) = default ;
        SubItems(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SubItems() = default ;
        SubItems& operator=(const SubItems &) = default ;
        SubItems& operator=(SubItems &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->critical_ == nullptr
        && this->info_ == nullptr && this->normal_ == nullptr && this->warning_ == nullptr; };
        // critical Field Functions 
        bool hasCritical() const { return this->critical_ != nullptr;};
        void deleteCritical() { this->critical_ = nullptr;};
        inline int64_t getCritical() const { DARABONBA_PTR_GET_DEFAULT(critical_, 0L) };
        inline SubItems& setCritical(int64_t critical) { DARABONBA_PTR_SET_VALUE(critical_, critical) };


        // info Field Functions 
        bool hasInfo() const { return this->info_ != nullptr;};
        void deleteInfo() { this->info_ = nullptr;};
        inline int64_t getInfo() const { DARABONBA_PTR_GET_DEFAULT(info_, 0L) };
        inline SubItems& setInfo(int64_t info) { DARABONBA_PTR_SET_VALUE(info_, info) };


        // normal Field Functions 
        bool hasNormal() const { return this->normal_ != nullptr;};
        void deleteNormal() { this->normal_ = nullptr;};
        inline int64_t getNormal() const { DARABONBA_PTR_GET_DEFAULT(normal_, 0L) };
        inline SubItems& setNormal(int64_t normal) { DARABONBA_PTR_SET_VALUE(normal_, normal) };


        // warning Field Functions 
        bool hasWarning() const { return this->warning_ != nullptr;};
        void deleteWarning() { this->warning_ = nullptr;};
        inline int64_t getWarning() const { DARABONBA_PTR_GET_DEFAULT(warning_, 0L) };
        inline SubItems& setWarning(int64_t warning) { DARABONBA_PTR_SET_VALUE(warning_, warning) };


      protected:
        // The number of check items at the critical level.
        shared_ptr<int64_t> critical_ {};
        // The number of check items at the info level.
        shared_ptr<int64_t> info_ {};
        // The number of normal check items.
        shared_ptr<int64_t> normal_ {};
        // The number of check items at the warning level.
        shared_ptr<int64_t> warning_ {};
      };

      virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->latest_ == nullptr && this->regionId_ == nullptr && this->reportDescription_ == nullptr && this->reportId_ == nullptr && this->reportScore_ == nullptr
        && this->reportStatus_ == nullptr && this->reportSummary_ == nullptr && this->reportTime_ == nullptr && this->subItems_ == nullptr && this->taskId_ == nullptr; };
      // DBClusterId Field Functions 
      bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
      void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
      inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
      inline ReportItems& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


      // latest Field Functions 
      bool hasLatest() const { return this->latest_ != nullptr;};
      void deleteLatest() { this->latest_ = nullptr;};
      inline string getLatest() const { DARABONBA_PTR_GET_DEFAULT(latest_, "") };
      inline ReportItems& setLatest(string latest) { DARABONBA_PTR_SET_VALUE(latest_, latest) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ReportItems& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // reportDescription Field Functions 
      bool hasReportDescription() const { return this->reportDescription_ != nullptr;};
      void deleteReportDescription() { this->reportDescription_ = nullptr;};
      inline string getReportDescription() const { DARABONBA_PTR_GET_DEFAULT(reportDescription_, "") };
      inline ReportItems& setReportDescription(string reportDescription) { DARABONBA_PTR_SET_VALUE(reportDescription_, reportDescription) };


      // reportId Field Functions 
      bool hasReportId() const { return this->reportId_ != nullptr;};
      void deleteReportId() { this->reportId_ = nullptr;};
      inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
      inline ReportItems& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


      // reportScore Field Functions 
      bool hasReportScore() const { return this->reportScore_ != nullptr;};
      void deleteReportScore() { this->reportScore_ = nullptr;};
      inline int64_t getReportScore() const { DARABONBA_PTR_GET_DEFAULT(reportScore_, 0L) };
      inline ReportItems& setReportScore(int64_t reportScore) { DARABONBA_PTR_SET_VALUE(reportScore_, reportScore) };


      // reportStatus Field Functions 
      bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
      void deleteReportStatus() { this->reportStatus_ = nullptr;};
      inline string getReportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, "") };
      inline ReportItems& setReportStatus(string reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


      // reportSummary Field Functions 
      bool hasReportSummary() const { return this->reportSummary_ != nullptr;};
      void deleteReportSummary() { this->reportSummary_ = nullptr;};
      inline string getReportSummary() const { DARABONBA_PTR_GET_DEFAULT(reportSummary_, "") };
      inline ReportItems& setReportSummary(string reportSummary) { DARABONBA_PTR_SET_VALUE(reportSummary_, reportSummary) };


      // reportTime Field Functions 
      bool hasReportTime() const { return this->reportTime_ != nullptr;};
      void deleteReportTime() { this->reportTime_ = nullptr;};
      inline string getReportTime() const { DARABONBA_PTR_GET_DEFAULT(reportTime_, "") };
      inline ReportItems& setReportTime(string reportTime) { DARABONBA_PTR_SET_VALUE(reportTime_, reportTime) };


      // subItems Field Functions 
      bool hasSubItems() const { return this->subItems_ != nullptr;};
      void deleteSubItems() { this->subItems_ = nullptr;};
      inline const vector<ReportItems::SubItems> & getSubItems() const { DARABONBA_PTR_GET_CONST(subItems_, vector<ReportItems::SubItems>) };
      inline vector<ReportItems::SubItems> getSubItems() { DARABONBA_PTR_GET(subItems_, vector<ReportItems::SubItems>) };
      inline ReportItems& setSubItems(const vector<ReportItems::SubItems> & subItems) { DARABONBA_PTR_SET_VALUE(subItems_, subItems) };
      inline ReportItems& setSubItems(vector<ReportItems::SubItems> && subItems) { DARABONBA_PTR_SET_RVALUE(subItems_, subItems) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ReportItems& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    protected:
      // The ID of the inspected PolarDB cluster.
      shared_ptr<string> DBClusterId_ {};
      // Indicates whether the inspection report is the latest report. The value is returned as a string.
      shared_ptr<string> latest_ {};
      // The region ID of the inspected cluster.
      shared_ptr<string> regionId_ {};
      // The detailed description of the inspection report.
      shared_ptr<string> reportDescription_ {};
      // The ID of the inspection report.
      shared_ptr<string> reportId_ {};
      // The score of the inspection report.
      shared_ptr<int64_t> reportScore_ {};
      // The status of the inspection report.
      shared_ptr<string> reportStatus_ {};
      // The summary of the inspection report.
      shared_ptr<string> reportSummary_ {};
      // The time when the inspection report was generated. The time is in the yyyy-MM-dd HH:mm:ss format and is in the UTC+8 time zone.
      shared_ptr<string> reportTime_ {};
      // The number of check items categorized by inspection result level.
      shared_ptr<vector<ReportItems::SubItems>> subItems_ {};
      // The ID of the inspection task.
      shared_ptr<string> taskId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->reportItems_ == nullptr && this->requestId_ == nullptr && this->score_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeInspectionReportListResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeInspectionReportListResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reportItems Field Functions 
    bool hasReportItems() const { return this->reportItems_ != nullptr;};
    void deleteReportItems() { this->reportItems_ = nullptr;};
    inline const vector<DescribeInspectionReportListResponseBody::ReportItems> & getReportItems() const { DARABONBA_PTR_GET_CONST(reportItems_, vector<DescribeInspectionReportListResponseBody::ReportItems>) };
    inline vector<DescribeInspectionReportListResponseBody::ReportItems> getReportItems() { DARABONBA_PTR_GET(reportItems_, vector<DescribeInspectionReportListResponseBody::ReportItems>) };
    inline DescribeInspectionReportListResponseBody& setReportItems(const vector<DescribeInspectionReportListResponseBody::ReportItems> & reportItems) { DARABONBA_PTR_SET_VALUE(reportItems_, reportItems) };
    inline DescribeInspectionReportListResponseBody& setReportItems(vector<DescribeInspectionReportListResponseBody::ReportItems> && reportItems) { DARABONBA_PTR_SET_RVALUE(reportItems_, reportItems) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInspectionReportListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline DescribeInspectionReportListResponseBody& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeInspectionReportListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int64_t> pageSize_ {};
    // The list of inspection reports.
    shared_ptr<vector<DescribeInspectionReportListResponseBody::ReportItems>> reportItems_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The score returned by the inspection task.
    shared_ptr<int32_t> score_ {};
    // The total number of reports that meet the query conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
