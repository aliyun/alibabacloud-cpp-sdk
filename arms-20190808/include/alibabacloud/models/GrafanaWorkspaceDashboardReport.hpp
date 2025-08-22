// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEDASHBOARDREPORT_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEDASHBOARDREPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceDashboardReport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceDashboardReport& obj) { 
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastSendTime, lastSendTime_);
      DARABONBA_PTR_TO_JSON(msg, msg_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(reportChannelTarget, reportChannelTarget_);
      DARABONBA_PTR_TO_JSON(reportChannelType, reportChannelType_);
      DARABONBA_PTR_TO_JSON(reportStyle, reportStyle_);
      DARABONBA_PTR_TO_JSON(reportType, reportType_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(triggerDay, triggerDay_);
      DARABONBA_PTR_TO_JSON(triggerTime, triggerTime_);
      DARABONBA_PTR_TO_JSON(triggerType, triggerType_);
      DARABONBA_PTR_TO_JSON(url, url_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceDashboardReport& obj) { 
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(grafanaWorkspaceId, grafanaWorkspaceId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastSendTime, lastSendTime_);
      DARABONBA_PTR_FROM_JSON(msg, msg_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(reportChannelTarget, reportChannelTarget_);
      DARABONBA_PTR_FROM_JSON(reportChannelType, reportChannelType_);
      DARABONBA_PTR_FROM_JSON(reportStyle, reportStyle_);
      DARABONBA_PTR_FROM_JSON(reportType, reportType_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(triggerDay, triggerDay_);
      DARABONBA_PTR_FROM_JSON(triggerTime, triggerTime_);
      DARABONBA_PTR_FROM_JSON(triggerType, triggerType_);
      DARABONBA_PTR_FROM_JSON(url, url_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    GrafanaWorkspaceDashboardReport() = default ;
    GrafanaWorkspaceDashboardReport(const GrafanaWorkspaceDashboardReport &) = default ;
    GrafanaWorkspaceDashboardReport(GrafanaWorkspaceDashboardReport &&) = default ;
    GrafanaWorkspaceDashboardReport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceDashboardReport() = default ;
    GrafanaWorkspaceDashboardReport& operator=(const GrafanaWorkspaceDashboardReport &) = default ;
    GrafanaWorkspaceDashboardReport& operator=(GrafanaWorkspaceDashboardReport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->gmtCreate_ != nullptr
        && this->grafanaWorkspaceId_ != nullptr && this->id_ != nullptr && this->lastSendTime_ != nullptr && this->msg_ != nullptr && this->name_ != nullptr
        && this->reportChannelTarget_ != nullptr && this->reportChannelType_ != nullptr && this->reportStyle_ != nullptr && this->reportType_ != nullptr && this->status_ != nullptr
        && this->triggerDay_ != nullptr && this->triggerTime_ != nullptr && this->triggerType_ != nullptr && this->url_ != nullptr && this->userId_ != nullptr; };
    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline GrafanaWorkspaceDashboardReport& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // grafanaWorkspaceId Field Functions 
    bool hasGrafanaWorkspaceId() const { return this->grafanaWorkspaceId_ != nullptr;};
    void deleteGrafanaWorkspaceId() { this->grafanaWorkspaceId_ = nullptr;};
    inline string grafanaWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(grafanaWorkspaceId_, "") };
    inline GrafanaWorkspaceDashboardReport& setGrafanaWorkspaceId(string grafanaWorkspaceId) { DARABONBA_PTR_SET_VALUE(grafanaWorkspaceId_, grafanaWorkspaceId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GrafanaWorkspaceDashboardReport& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastSendTime Field Functions 
    bool hasLastSendTime() const { return this->lastSendTime_ != nullptr;};
    void deleteLastSendTime() { this->lastSendTime_ = nullptr;};
    inline int64_t lastSendTime() const { DARABONBA_PTR_GET_DEFAULT(lastSendTime_, 0L) };
    inline GrafanaWorkspaceDashboardReport& setLastSendTime(int64_t lastSendTime) { DARABONBA_PTR_SET_VALUE(lastSendTime_, lastSendTime) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline GrafanaWorkspaceDashboardReport& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GrafanaWorkspaceDashboardReport& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // reportChannelTarget Field Functions 
    bool hasReportChannelTarget() const { return this->reportChannelTarget_ != nullptr;};
    void deleteReportChannelTarget() { this->reportChannelTarget_ = nullptr;};
    inline string reportChannelTarget() const { DARABONBA_PTR_GET_DEFAULT(reportChannelTarget_, "") };
    inline GrafanaWorkspaceDashboardReport& setReportChannelTarget(string reportChannelTarget) { DARABONBA_PTR_SET_VALUE(reportChannelTarget_, reportChannelTarget) };


    // reportChannelType Field Functions 
    bool hasReportChannelType() const { return this->reportChannelType_ != nullptr;};
    void deleteReportChannelType() { this->reportChannelType_ = nullptr;};
    inline string reportChannelType() const { DARABONBA_PTR_GET_DEFAULT(reportChannelType_, "") };
    inline GrafanaWorkspaceDashboardReport& setReportChannelType(string reportChannelType) { DARABONBA_PTR_SET_VALUE(reportChannelType_, reportChannelType) };


    // reportStyle Field Functions 
    bool hasReportStyle() const { return this->reportStyle_ != nullptr;};
    void deleteReportStyle() { this->reportStyle_ = nullptr;};
    inline string reportStyle() const { DARABONBA_PTR_GET_DEFAULT(reportStyle_, "") };
    inline GrafanaWorkspaceDashboardReport& setReportStyle(string reportStyle) { DARABONBA_PTR_SET_VALUE(reportStyle_, reportStyle) };


    // reportType Field Functions 
    bool hasReportType() const { return this->reportType_ != nullptr;};
    void deleteReportType() { this->reportType_ = nullptr;};
    inline string reportType() const { DARABONBA_PTR_GET_DEFAULT(reportType_, "") };
    inline GrafanaWorkspaceDashboardReport& setReportType(string reportType) { DARABONBA_PTR_SET_VALUE(reportType_, reportType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GrafanaWorkspaceDashboardReport& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // triggerDay Field Functions 
    bool hasTriggerDay() const { return this->triggerDay_ != nullptr;};
    void deleteTriggerDay() { this->triggerDay_ = nullptr;};
    inline string triggerDay() const { DARABONBA_PTR_GET_DEFAULT(triggerDay_, "") };
    inline GrafanaWorkspaceDashboardReport& setTriggerDay(string triggerDay) { DARABONBA_PTR_SET_VALUE(triggerDay_, triggerDay) };


    // triggerTime Field Functions 
    bool hasTriggerTime() const { return this->triggerTime_ != nullptr;};
    void deleteTriggerTime() { this->triggerTime_ = nullptr;};
    inline string triggerTime() const { DARABONBA_PTR_GET_DEFAULT(triggerTime_, "") };
    inline GrafanaWorkspaceDashboardReport& setTriggerTime(string triggerTime) { DARABONBA_PTR_SET_VALUE(triggerTime_, triggerTime) };


    // triggerType Field Functions 
    bool hasTriggerType() const { return this->triggerType_ != nullptr;};
    void deleteTriggerType() { this->triggerType_ = nullptr;};
    inline string triggerType() const { DARABONBA_PTR_GET_DEFAULT(triggerType_, "") };
    inline GrafanaWorkspaceDashboardReport& setTriggerType(string triggerType) { DARABONBA_PTR_SET_VALUE(triggerType_, triggerType) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GrafanaWorkspaceDashboardReport& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GrafanaWorkspaceDashboardReport& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<string> grafanaWorkspaceId_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int64_t> lastSendTime_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> reportChannelTarget_ = nullptr;
    std::shared_ptr<string> reportChannelType_ = nullptr;
    std::shared_ptr<string> reportStyle_ = nullptr;
    std::shared_ptr<string> reportType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> triggerDay_ = nullptr;
    std::shared_ptr<string> triggerTime_ = nullptr;
    std::shared_ptr<string> triggerType_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
