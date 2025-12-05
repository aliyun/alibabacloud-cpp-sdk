// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPTSREPORTSBYSCENEIDRESPONSEBODYREPORTOVERVIEWLIST_HPP_
#define ALIBABACLOUD_MODELS_GETPTSREPORTSBYSCENEIDRESPONSEBODYREPORTOVERVIEWLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class GetPtsReportsBySceneIdResponseBodyReportOverViewList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPtsReportsBySceneIdResponseBodyReportOverViewList& obj) { 
      DARABONBA_PTR_TO_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportName, reportName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Vum, vum_);
    };
    friend void from_json(const Darabonba::Json& j, GetPtsReportsBySceneIdResponseBodyReportOverViewList& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentCount, agentCount_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportName, reportName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Vum, vum_);
    };
    GetPtsReportsBySceneIdResponseBodyReportOverViewList() = default ;
    GetPtsReportsBySceneIdResponseBodyReportOverViewList(const GetPtsReportsBySceneIdResponseBodyReportOverViewList &) = default ;
    GetPtsReportsBySceneIdResponseBodyReportOverViewList(GetPtsReportsBySceneIdResponseBodyReportOverViewList &&) = default ;
    GetPtsReportsBySceneIdResponseBodyReportOverViewList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPtsReportsBySceneIdResponseBodyReportOverViewList() = default ;
    GetPtsReportsBySceneIdResponseBodyReportOverViewList& operator=(const GetPtsReportsBySceneIdResponseBodyReportOverViewList &) = default ;
    GetPtsReportsBySceneIdResponseBodyReportOverViewList& operator=(GetPtsReportsBySceneIdResponseBodyReportOverViewList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentCount_ == nullptr
        && return this->endTime_ == nullptr && return this->reportId_ == nullptr && return this->reportName_ == nullptr && return this->startTime_ == nullptr && return this->vum_ == nullptr; };
    // agentCount Field Functions 
    bool hasAgentCount() const { return this->agentCount_ != nullptr;};
    void deleteAgentCount() { this->agentCount_ = nullptr;};
    inline int32_t agentCount() const { DARABONBA_PTR_GET_DEFAULT(agentCount_, 0) };
    inline GetPtsReportsBySceneIdResponseBodyReportOverViewList& setAgentCount(int32_t agentCount) { DARABONBA_PTR_SET_VALUE(agentCount_, agentCount) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetPtsReportsBySceneIdResponseBodyReportOverViewList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string reportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetPtsReportsBySceneIdResponseBodyReportOverViewList& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportName Field Functions 
    bool hasReportName() const { return this->reportName_ != nullptr;};
    void deleteReportName() { this->reportName_ = nullptr;};
    inline string reportName() const { DARABONBA_PTR_GET_DEFAULT(reportName_, "") };
    inline GetPtsReportsBySceneIdResponseBodyReportOverViewList& setReportName(string reportName) { DARABONBA_PTR_SET_VALUE(reportName_, reportName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetPtsReportsBySceneIdResponseBodyReportOverViewList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // vum Field Functions 
    bool hasVum() const { return this->vum_ != nullptr;};
    void deleteVum() { this->vum_ = nullptr;};
    inline int64_t vum() const { DARABONBA_PTR_GET_DEFAULT(vum_, 0L) };
    inline GetPtsReportsBySceneIdResponseBodyReportOverViewList& setVum(int64_t vum) { DARABONBA_PTR_SET_VALUE(vum_, vum) };


  protected:
    // The number of stress testers.
    std::shared_ptr<int32_t> agentCount_ = nullptr;
    // The end time of the stress testing.
    std::shared_ptr<string> endTime_ = nullptr;
    // The report ID.
    std::shared_ptr<string> reportId_ = nullptr;
    // The title of the report.
    std::shared_ptr<string> reportName_ = nullptr;
    // The start time of the stress testing.
    std::shared_ptr<string> startTime_ = nullptr;
    // The consumed Virtual User Minutes (VUM).
    std::shared_ptr<int64_t> vum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
