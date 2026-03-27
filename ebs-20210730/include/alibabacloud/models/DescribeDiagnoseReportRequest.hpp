// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeDiagnoseReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportIds, reportIds_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnoseReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DiagnoseType, diagnoseType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportIds, reportIds_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDiagnoseReportRequest() = default ;
    DescribeDiagnoseReportRequest(const DescribeDiagnoseReportRequest &) = default ;
    DescribeDiagnoseReportRequest(DescribeDiagnoseReportRequest &&) = default ;
    DescribeDiagnoseReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnoseReportRequest() = default ;
    DescribeDiagnoseReportRequest& operator=(const DescribeDiagnoseReportRequest &) = default ;
    DescribeDiagnoseReportRequest& operator=(DescribeDiagnoseReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->diagnoseType_ == nullptr && this->endTime_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr
        && this->reportIds_ == nullptr && this->resourceIds_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DescribeDiagnoseReportRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // diagnoseType Field Functions 
    bool hasDiagnoseType() const { return this->diagnoseType_ != nullptr;};
    void deleteDiagnoseType() { this->diagnoseType_ = nullptr;};
    inline string getDiagnoseType() const { DARABONBA_PTR_GET_DEFAULT(diagnoseType_, "") };
    inline DescribeDiagnoseReportRequest& setDiagnoseType(string diagnoseType) { DARABONBA_PTR_SET_VALUE(diagnoseType_, diagnoseType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDiagnoseReportRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDiagnoseReportRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDiagnoseReportRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiagnoseReportRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportIds Field Functions 
    bool hasReportIds() const { return this->reportIds_ != nullptr;};
    void deleteReportIds() { this->reportIds_ = nullptr;};
    inline const vector<string> & getReportIds() const { DARABONBA_PTR_GET_CONST(reportIds_, vector<string>) };
    inline vector<string> getReportIds() { DARABONBA_PTR_GET(reportIds_, vector<string>) };
    inline DescribeDiagnoseReportRequest& setReportIds(const vector<string> & reportIds) { DARABONBA_PTR_SET_VALUE(reportIds_, reportIds) };
    inline DescribeDiagnoseReportRequest& setReportIds(vector<string> && reportIds) { DARABONBA_PTR_SET_RVALUE(reportIds_, reportIds) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline DescribeDiagnoseReportRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeDiagnoseReportRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDiagnoseReportRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDiagnoseReportRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> diagnoseType_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionId_ {};
    shared_ptr<vector<string>> reportIds_ {};
    shared_ptr<vector<string>> resourceIds_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
