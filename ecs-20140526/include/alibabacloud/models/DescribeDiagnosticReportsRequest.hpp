// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSTICREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDiagnosticReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnosticReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportIds, reportIds_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnosticReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportIds, reportIds_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDiagnosticReportsRequest() = default ;
    DescribeDiagnosticReportsRequest(const DescribeDiagnosticReportsRequest &) = default ;
    DescribeDiagnosticReportsRequest(DescribeDiagnosticReportsRequest &&) = default ;
    DescribeDiagnosticReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnosticReportsRequest() = default ;
    DescribeDiagnosticReportsRequest& operator=(const DescribeDiagnosticReportsRequest &) = default ;
    DescribeDiagnosticReportsRequest& operator=(DescribeDiagnosticReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->reportIds_ == nullptr && this->resourceIds_ == nullptr && this->severity_ == nullptr
        && this->status_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDiagnosticReportsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiagnosticReportsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiagnosticReportsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportIds Field Functions 
    bool hasReportIds() const { return this->reportIds_ != nullptr;};
    void deleteReportIds() { this->reportIds_ = nullptr;};
    inline const vector<string> & getReportIds() const { DARABONBA_PTR_GET_CONST(reportIds_, vector<string>) };
    inline vector<string> getReportIds() { DARABONBA_PTR_GET(reportIds_, vector<string>) };
    inline DescribeDiagnosticReportsRequest& setReportIds(const vector<string> & reportIds) { DARABONBA_PTR_SET_VALUE(reportIds_, reportIds) };
    inline DescribeDiagnosticReportsRequest& setReportIds(vector<string> && reportIds) { DARABONBA_PTR_SET_RVALUE(reportIds_, reportIds) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline DescribeDiagnosticReportsRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeDiagnosticReportsRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeDiagnosticReportsRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnosticReportsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of entries per page. Valid values: 1 to 100.
    // 
    // Default value:
    // 
    // *   If this parameter is left empty, the default value is 10.
    // *   If you set this parameter to a value that is greater than 100, the default value is 100.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    shared_ptr<string> nextToken_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The IDs of diagnostic reports.
    shared_ptr<vector<string>> reportIds_ {};
    // The IDs of resources. You can specify up to 100 resource IDs.
    shared_ptr<vector<string>> resourceIds_ {};
    // The severity level of the diagnostic report. Valid values:
    // 
    // *   Unknown: The diagnostic did not start, failed to run, or unexpectedly exited without a diagnosis.
    // *   Normal: No exceptions were detected.
    // *   Info: Diagnostic information was recorded and may be related to exceptions.
    // *   Warn: Diagnostic information was recorded and may indicate exceptions.
    // *   Critical: Critical exceptions were detected.
    shared_ptr<string> severity_ {};
    // The status of the diagnostic report. Valid values:
    // 
    // *   InProgress
    // *   Failed
    // *   Finished
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
