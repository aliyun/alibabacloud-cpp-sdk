// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTANDALONEREPORTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTANDALONEREPORTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class GetStandAloneReportsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStandAloneReportsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Reports, reports_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetStandAloneReportsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Reports, reports_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetStandAloneReportsResponseBody() = default ;
    GetStandAloneReportsResponseBody(const GetStandAloneReportsResponseBody &) = default ;
    GetStandAloneReportsResponseBody(GetStandAloneReportsResponseBody &&) = default ;
    GetStandAloneReportsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStandAloneReportsResponseBody() = default ;
    GetStandAloneReportsResponseBody& operator=(const GetStandAloneReportsResponseBody &) = default ;
    GetStandAloneReportsResponseBody& operator=(GetStandAloneReportsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Reports : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reports& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(InspectionItems, inspectionItems_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_TO_JSON(ReportType, reportType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Reports& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(InspectionItems, inspectionItems_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ReportLanguage, reportLanguage_);
        DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      Reports() = default ;
      Reports(const Reports &) = default ;
      Reports(Reports &&) = default ;
      Reports(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Reports() = default ;
      Reports& operator=(const Reports &) = default ;
      Reports& operator=(Reports &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdTime_ == nullptr
        && this->endTime_ == nullptr && this->inspectionItems_ == nullptr && this->regionId_ == nullptr && this->reportLanguage_ == nullptr && this->reportType_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline string getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
      inline Reports& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
      inline Reports& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // inspectionItems Field Functions 
      bool hasInspectionItems() const { return this->inspectionItems_ != nullptr;};
      void deleteInspectionItems() { this->inspectionItems_ = nullptr;};
      inline string getInspectionItems() const { DARABONBA_PTR_GET_DEFAULT(inspectionItems_, "") };
      inline Reports& setInspectionItems(string inspectionItems) { DARABONBA_PTR_SET_VALUE(inspectionItems_, inspectionItems) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Reports& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // reportLanguage Field Functions 
      bool hasReportLanguage() const { return this->reportLanguage_ != nullptr;};
      void deleteReportLanguage() { this->reportLanguage_ = nullptr;};
      inline string getReportLanguage() const { DARABONBA_PTR_GET_DEFAULT(reportLanguage_, "") };
      inline Reports& setReportLanguage(string reportLanguage) { DARABONBA_PTR_SET_VALUE(reportLanguage_, reportLanguage) };


      // reportType Field Functions 
      bool hasReportType() const { return this->reportType_ != nullptr;};
      void deleteReportType() { this->reportType_ = nullptr;};
      inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
      inline Reports& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
      inline Reports& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Reports& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Reports& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Reports& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Reports& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      // The creation time.
      shared_ptr<string> createdTime_ {};
      // The inspection end time in the format of YYYY-MM-DDTHH:mm:ssZ.
      shared_ptr<string> endTime_ {};
      shared_ptr<string> inspectionItems_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> reportLanguage_ {};
      shared_ptr<string> reportType_ {};
      // The inspection start time in the format of YYYY-MM-DDTHH:mm:ssZ.
      shared_ptr<string> startTime_ {};
      // The status.
      shared_ptr<string> status_ {};
      // The inspection report ID.
      shared_ptr<string> taskId_ {};
      shared_ptr<string> templateId_ {};
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->reports_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStandAloneReportsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetStandAloneReportsResponseBody& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetStandAloneReportsResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // reports Field Functions 
    bool hasReports() const { return this->reports_ != nullptr;};
    void deleteReports() { this->reports_ = nullptr;};
    inline const vector<GetStandAloneReportsResponseBody::Reports> & getReports() const { DARABONBA_PTR_GET_CONST(reports_, vector<GetStandAloneReportsResponseBody::Reports>) };
    inline vector<GetStandAloneReportsResponseBody::Reports> getReports() { DARABONBA_PTR_GET(reports_, vector<GetStandAloneReportsResponseBody::Reports>) };
    inline GetStandAloneReportsResponseBody& setReports(const vector<GetStandAloneReportsResponseBody::Reports> & reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };
    inline GetStandAloneReportsResponseBody& setReports(vector<GetStandAloneReportsResponseBody::Reports> && reports) { DARABONBA_PTR_SET_RVALUE(reports_, reports) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStandAloneReportsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStandAloneReportsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetStandAloneReportsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response message.
    shared_ptr<string> message_ {};
    // The page number. Default value: 1.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries per page. Default value: 20. Maximum value: 100.
    shared_ptr<int64_t> pageSize_ {};
    // The list of reports.
    shared_ptr<vector<GetStandAloneReportsResponseBody::Reports>> reports_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The request result.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
