// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNOTICECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNOTICECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyNoticeConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNoticeConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(FocusLevel, focusLevel_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Route, route_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(TimeLimit, timeLimit_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNoticeConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(FocusLevel, focusLevel_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Route, route_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(TimeLimit, timeLimit_);
    };
    ModifyNoticeConfigRequest() = default ;
    ModifyNoticeConfigRequest(const ModifyNoticeConfigRequest &) = default ;
    ModifyNoticeConfigRequest(ModifyNoticeConfigRequest &&) = default ;
    ModifyNoticeConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNoticeConfigRequest() = default ;
    ModifyNoticeConfigRequest& operator=(const ModifyNoticeConfigRequest &) = default ;
    ModifyNoticeConfigRequest& operator=(ModifyNoticeConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizType_ == nullptr
        && this->focusLevel_ == nullptr && this->project_ == nullptr && this->route_ == nullptr && this->sourceIp_ == nullptr && this->timeLimit_ == nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ModifyNoticeConfigRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // focusLevel Field Functions 
    bool hasFocusLevel() const { return this->focusLevel_ != nullptr;};
    void deleteFocusLevel() { this->focusLevel_ = nullptr;};
    inline string getFocusLevel() const { DARABONBA_PTR_GET_DEFAULT(focusLevel_, "") };
    inline ModifyNoticeConfigRequest& setFocusLevel(string focusLevel) { DARABONBA_PTR_SET_VALUE(focusLevel_, focusLevel) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ModifyNoticeConfigRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // route Field Functions 
    bool hasRoute() const { return this->route_ != nullptr;};
    void deleteRoute() { this->route_ = nullptr;};
    inline int32_t getRoute() const { DARABONBA_PTR_GET_DEFAULT(route_, 0) };
    inline ModifyNoticeConfigRequest& setRoute(int32_t route) { DARABONBA_PTR_SET_VALUE(route_, route) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyNoticeConfigRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // timeLimit Field Functions 
    bool hasTimeLimit() const { return this->timeLimit_ != nullptr;};
    void deleteTimeLimit() { this->timeLimit_ = nullptr;};
    inline int32_t getTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(timeLimit_, 0) };
    inline ModifyNoticeConfigRequest& setTimeLimit(int32_t timeLimit) { DARABONBA_PTR_SET_VALUE(timeLimit_, timeLimit) };


  protected:
    // The notification configuration type. By default, notifications are sent by SMS, email, or internal message. Valid values:
    // 
    // - **cms**: CloudMonitor push.
    shared_ptr<string> bizType_ {};
    // The focus level. Separate multiple levels with commas (,).
    // 
    // When **Project** is **yundun_soar_incident_generate** or **yundun_soar_incident_update**, valid values:
    // 
    // - **CRITICAL**: Critical.
    // - **HIGH**: High-risk.
    // - **MEDIUM**: Medium-risk.
    // - **LOW**: Low-risk.
    // - **INFO**: Informational.
    // 
    // When **Project** is **yundun_sas_antiransomware_task**, valid values:
    // 
    // - **Success**: Execution succeeded.
    // - **Failed**: Execution failed.
    shared_ptr<string> focusLevel_ {};
    // ### Project identity
    // 
    // #### When the BizType field is empty: valid values
    // - **yundun_security_Weekreport**: Security weekly report (email only)
    // - **sas_healthcheck**: Baseline check
    // - **yundun_defennce_antiRansomware_overflow**: Anti-ransomware storage space exceeded
    // - **yundun_sas_cloudsiem_log**: Cloud Threat Detection and Response (CTDR) log excess notification
    // - **sas_suspicious**: Security alert
    // - **yundun_aegis_AV_true**: Precise defense
    // - **yundun_sas_ak_leakage AccessKey**: AccessKey leak intelligence
    // - **yundun_sas_config_alert**: Cloud platform configuration check
    // - **yundun_sas_vul_Emergency**: Emergency vulnerability intelligence
    // - **yundun_webguard_event**: Web tamper-proofing
    // - **yundun_sas_cloud_native_firewall**: Container firewall anomaly alert notification (email only)
    // - **yundun_sas_cloud_native_firewall_Defense**: Container firewall active defense notification (email only)
    // - **yundun_IP_Blocking**: Malicious IP blocking alerting notification
    // - **yundun_sas_anti_virus_config**: Virus scan notification
    // - **yundun_sas_log**: Log storage exceeded
    // - **yundun_honeypot_alarm**: Cloud honeypot alerting
    // - **aliyun_rasp_alarm**: Application protection alerting
    // - **yundun_soar_incident_generate**: New security incident
    // - **yundun_soar_incident_update**: Updated security incident
    // > **yundun_security_Weekreport** sends a weekly report to notify you of unresolved vulnerabilities.
    // 
    // ---
    // 
    // #### When the BizType field is `cms`: valid values
    // - **Vul_event**: Vulnerability result details
    // - **Hc_summary**: Baseline check result summary
    // - **Cspm_summary**: Cloud Security Posture Management (CSPM) result summary
    // - **Vul_summary**: Vulnerability result summary
    // - **Agentless_event**: Agentless detection result details
    // - **Filedetect_event**: Malicious file SDK result details
    // - **Rasp_event**: Application protection result details.
    shared_ptr<string> project_ {};
    // ### Notification method
    // 
    // #### When BizType is empty
    // - 0: disabled
    // - 1: SMS enabled
    // - 2: email enabled
    // - 4: internal message enabled
    // - 3: SMS and email enabled
    // - 5: SMS and internal message enabled
    // - 6: email and internal message enabled
    // - 7: SMS, email, and internal message all enabled
    // 
    // #### When BizType is `cms`
    // - 0: CloudMonitor push disabled
    // - 1: CloudMonitor push enabled.
    shared_ptr<int32_t> route_ {};
    // The IP address of the access source.
    shared_ptr<string> sourceIp_ {};
    // ### Notification time limit
    // 
    // #### When the BizType field is empty: valid values
    // - **0**: No limit.
    // - **1**: Notifications are sent only between 08:00 and 22:00.
    // 
    // #### When the BizType field is `cms`
    // Specifies the push frequency limit, in seconds. The minimum value is **60**.
    shared_ptr<int32_t> timeLimit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
