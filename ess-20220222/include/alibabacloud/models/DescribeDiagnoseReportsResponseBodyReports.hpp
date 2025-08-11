// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTSRESPONSEBODYREPORTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDIAGNOSEREPORTSRESPONSEBODYREPORTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDiagnoseReportsResponseBodyReportsDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeDiagnoseReportsResponseBodyReports : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDiagnoseReportsResponseBodyReports& obj) { 
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(DiagnoseStatus, diagnoseStatus_);
      DARABONBA_PTR_TO_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDiagnoseReportsResponseBodyReports& obj) { 
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(DiagnoseStatus, diagnoseStatus_);
      DARABONBA_PTR_FROM_JSON(ProcessStatus, processStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeDiagnoseReportsResponseBodyReports() = default ;
    DescribeDiagnoseReportsResponseBodyReports(const DescribeDiagnoseReportsResponseBodyReports &) = default ;
    DescribeDiagnoseReportsResponseBodyReports(DescribeDiagnoseReportsResponseBodyReports &&) = default ;
    DescribeDiagnoseReportsResponseBodyReports(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDiagnoseReportsResponseBodyReports() = default ;
    DescribeDiagnoseReportsResponseBodyReports& operator=(const DescribeDiagnoseReportsResponseBodyReports &) = default ;
    DescribeDiagnoseReportsResponseBodyReports& operator=(DescribeDiagnoseReportsResponseBodyReports &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->creationTime_ != nullptr
        && this->details_ != nullptr && this->diagnoseStatus_ != nullptr && this->processStatus_ != nullptr && this->regionId_ != nullptr && this->reportId_ != nullptr
        && this->scalingGroupId_ != nullptr && this->userId_ != nullptr; };
    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDiagnoseReportsResponseBodyReports& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline const vector<Models::DescribeDiagnoseReportsResponseBodyReportsDetails> & details() const { DARABONBA_PTR_GET_CONST(details_, vector<Models::DescribeDiagnoseReportsResponseBodyReportsDetails>) };
    inline vector<Models::DescribeDiagnoseReportsResponseBodyReportsDetails> details() { DARABONBA_PTR_GET(details_, vector<Models::DescribeDiagnoseReportsResponseBodyReportsDetails>) };
    inline DescribeDiagnoseReportsResponseBodyReports& setDetails(const vector<Models::DescribeDiagnoseReportsResponseBodyReportsDetails> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
    inline DescribeDiagnoseReportsResponseBodyReports& setDetails(vector<Models::DescribeDiagnoseReportsResponseBodyReportsDetails> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


    // diagnoseStatus Field Functions 
    bool hasDiagnoseStatus() const { return this->diagnoseStatus_ != nullptr;};
    void deleteDiagnoseStatus() { this->diagnoseStatus_ = nullptr;};
    inline string diagnoseStatus() const { DARABONBA_PTR_GET_DEFAULT(diagnoseStatus_, "") };
    inline DescribeDiagnoseReportsResponseBodyReports& setDiagnoseStatus(string diagnoseStatus) { DARABONBA_PTR_SET_VALUE(diagnoseStatus_, diagnoseStatus) };


    // processStatus Field Functions 
    bool hasProcessStatus() const { return this->processStatus_ != nullptr;};
    void deleteProcessStatus() { this->processStatus_ = nullptr;};
    inline string processStatus() const { DARABONBA_PTR_GET_DEFAULT(processStatus_, "") };
    inline DescribeDiagnoseReportsResponseBodyReports& setProcessStatus(string processStatus) { DARABONBA_PTR_SET_VALUE(processStatus_, processStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDiagnoseReportsResponseBodyReports& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DescribeDiagnoseReportsResponseBodyReports& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeDiagnoseReportsResponseBodyReports& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DescribeDiagnoseReportsResponseBodyReports& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The time when the diagnostic report was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The details of the diagnostic report.
    std::shared_ptr<vector<Models::DescribeDiagnoseReportsResponseBodyReportsDetails>> details_ = nullptr;
    // The status of the diagnostic item. Only the severe status is displayed in the diagnostic report. Valid values:
    // 
    // *   Normal: The diagnostic result is normal.
    // *   Warn: The diagnostic result is warning.
    // *   Critical: The diagnostic result is critical.
    std::shared_ptr<string> diagnoseStatus_ = nullptr;
    // The status of the diagnostic report. Valid values:
    // 
    // *   processing: The diagnosis is in progress.
    // *   Finished: The diagnosis is complete.
    std::shared_ptr<string> processStatus_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the diagnostic report.
    std::shared_ptr<string> reportId_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The user ID of the scaling group.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
