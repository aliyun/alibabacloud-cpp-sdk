// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEGROUPINSPECTREPORTDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEGROUPINSPECTREPORTDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetInstanceGroupInspectReportDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceGroupInspectReportDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
      DARABONBA_PTR_TO_JSON(ReportType, reportType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceGroupInspectReportDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
      DARABONBA_PTR_FROM_JSON(ReportType, reportType_);
    };
    GetInstanceGroupInspectReportDetailRequest() = default ;
    GetInstanceGroupInspectReportDetailRequest(const GetInstanceGroupInspectReportDetailRequest &) = default ;
    GetInstanceGroupInspectReportDetailRequest(GetInstanceGroupInspectReportDetailRequest &&) = default ;
    GetInstanceGroupInspectReportDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceGroupInspectReportDetailRequest() = default ;
    GetInstanceGroupInspectReportDetailRequest& operator=(const GetInstanceGroupInspectReportDetailRequest &) = default ;
    GetInstanceGroupInspectReportDetailRequest& operator=(GetInstanceGroupInspectReportDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->reportId_ == nullptr && this->reportType_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline GetInstanceGroupInspectReportDetailRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline GetInstanceGroupInspectReportDetailRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string getReportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GetInstanceGroupInspectReportDetailRequest& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


  protected:
    // The ID of the agent that the user purchased.
    shared_ptr<string> agentId_ {};
    // The ID of the automated operations report.
    // 
    // This parameter is required.
    shared_ptr<string> reportId_ {};
    // The type of the report.
    shared_ptr<string> reportType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
