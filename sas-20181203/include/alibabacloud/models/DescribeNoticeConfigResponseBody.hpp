// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENOTICECONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENOTICECONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeNoticeConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNoticeConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NoticeConfigList, noticeConfigList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNoticeConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NoticeConfigList, noticeConfigList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNoticeConfigResponseBody() = default ;
    DescribeNoticeConfigResponseBody(const DescribeNoticeConfigResponseBody &) = default ;
    DescribeNoticeConfigResponseBody(DescribeNoticeConfigResponseBody &&) = default ;
    DescribeNoticeConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNoticeConfigResponseBody() = default ;
    DescribeNoticeConfigResponseBody& operator=(const DescribeNoticeConfigResponseBody &) = default ;
    DescribeNoticeConfigResponseBody& operator=(DescribeNoticeConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NoticeConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NoticeConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(Project, project_);
        DARABONBA_PTR_TO_JSON(Route, route_);
        DARABONBA_PTR_TO_JSON(TimeLimit, timeLimit_);
      };
      friend void from_json(const Darabonba::Json& j, NoticeConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(Project, project_);
        DARABONBA_PTR_FROM_JSON(Route, route_);
        DARABONBA_PTR_FROM_JSON(TimeLimit, timeLimit_);
      };
      NoticeConfigList() = default ;
      NoticeConfigList(const NoticeConfigList &) = default ;
      NoticeConfigList(NoticeConfigList &&) = default ;
      NoticeConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NoticeConfigList() = default ;
      NoticeConfigList& operator=(const NoticeConfigList &) = default ;
      NoticeConfigList& operator=(NoticeConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->category_ == nullptr && this->currentPage_ == nullptr && this->project_ == nullptr && this->route_ == nullptr && this->timeLimit_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline NoticeConfigList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline NoticeConfigList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline NoticeConfigList& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // project Field Functions 
      bool hasProject() const { return this->project_ != nullptr;};
      void deleteProject() { this->project_ = nullptr;};
      inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
      inline NoticeConfigList& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


      // route Field Functions 
      bool hasRoute() const { return this->route_ != nullptr;};
      void deleteRoute() { this->route_ = nullptr;};
      inline int32_t getRoute() const { DARABONBA_PTR_GET_DEFAULT(route_, 0) };
      inline NoticeConfigList& setRoute(int32_t route) { DARABONBA_PTR_SET_VALUE(route_, route) };


      // timeLimit Field Functions 
      bool hasTimeLimit() const { return this->timeLimit_ != nullptr;};
      void deleteTimeLimit() { this->timeLimit_ = nullptr;};
      inline int32_t getTimeLimit() const { DARABONBA_PTR_GET_DEFAULT(timeLimit_, 0) };
      inline NoticeConfigList& setTimeLimit(int32_t timeLimit) { DARABONBA_PTR_SET_VALUE(timeLimit_, timeLimit) };


    protected:
      // The ID of the user.
      shared_ptr<int64_t> aliUid_ {};
      // Business categories under cloud monitoring notification configuration. Values:
      // - **Incident**: Security incidents. 
      // - **Suspicious**: Security alerts. 
      // - **Hc**: Baseline checks. 
      // - **Cspm**: Cloud Security Posture Management. 
      // - **Agentless**: Agentless detection. 
      // - **Filedetect**: Malicious file SDK. 
      // - **Vul**: Vulnerabilities. 
      // - **Rasp**: Application protection.
      shared_ptr<string> category_ {};
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The identifier of the notification item. Valid values:
      // 
      // *   **yundun_security_Weekreport**: notification for vulnerabilities
      // *   **yundun_sas_antiransomware_task**: notification for results of restoration tasks
      // *   **sas_healthcheck**: notification for baseline checks
      // *   **sas_suspicious**: notification for alerts generated by Security Center
      // *   **yundun_aegis_AV_true**: notification for precision defense
      // *   **yundun_sas_ak_leakage**: notification for AccessKey pair leaks
      // *   **yundun_sas_config_alert**: notification for configuration assessment
      // *   **yundun_sas_vul_Emergency**: notification for urgent vulnerabilities
      // *   **yundun_webguard_event**: notification for web tamper proofing
      // *   **yundun_sas_cloud_native_firewall**: notification for alerts generated by the container firewall feature
      // *   **yundun_sas_cloud_native_firewall_Defense**: notification for proactive defense implemented by the container firewall feature
      // *   **yundun_IP_Blocking**: notification for blocked brute-force attacks initiated from malicious IP addresses
      // *   **yundun_sas_anti_virus_config**: notification for virus scan
      // *   **yundun_sas_log**: notification for excess logs
      // *   **yundun_honeypot_alarm**: notification for alerts generated by the honeypot feature
      // *   **aliyun_rasp_alarm**: notification for alerts generated by the application security feature
      // *   **virusScheduleTask**: notification for completion of scheduled virus scans
      // *   **yundun_anti_Virus**: notification that no security checks are performed
      // *   **sas_vulnerability**: notification for vulnerabilities
      // *   **weeklyreport**: notification for weekly reports
      // *   **agent**: notification that the Security Center agent is offline
      // *   **bruteforcesuccess**: notification for protection against brute-force attacks
      // *   **webshell**: notification for webshells
      // *   **suspicious**: notification for alerts generated by Server Guard
      // *   **patch**: deprecated
      // *   **remotelogin**: notification for remote logons
      // *   **health**: notification for security checks
      // *   **yundun_sas_cloudsiem_log**: notifications of insufficient threat analysis log capacity
      // 
      // > If the value is **yundun_security_Weekreport**, weekly reports are sent to notify you of unhandled vulnerabilities.
      shared_ptr<string> project_ {};
      // The notification method. Valid values:
      // 
      // *   **1**: text message
      // *   **2**: email
      // *   **4**: internal message
      // *   **3**: text message and email
      // *   **5**: text message and internal message
      // *   **6**: email and internal message
      // *   **7**: text message, email, and internal message
      shared_ptr<int32_t> route_ {};
      // The time period during which Security Center sends notifications. Valid values:
      // 
      // *   **0**: any time
      // *   **1**: 08:00 to 22:00
      shared_ptr<int32_t> timeLimit_ {};
    };

    virtual bool empty() const override { return this->noticeConfigList_ == nullptr
        && this->requestId_ == nullptr; };
    // noticeConfigList Field Functions 
    bool hasNoticeConfigList() const { return this->noticeConfigList_ != nullptr;};
    void deleteNoticeConfigList() { this->noticeConfigList_ = nullptr;};
    inline const vector<DescribeNoticeConfigResponseBody::NoticeConfigList> & getNoticeConfigList() const { DARABONBA_PTR_GET_CONST(noticeConfigList_, vector<DescribeNoticeConfigResponseBody::NoticeConfigList>) };
    inline vector<DescribeNoticeConfigResponseBody::NoticeConfigList> getNoticeConfigList() { DARABONBA_PTR_GET(noticeConfigList_, vector<DescribeNoticeConfigResponseBody::NoticeConfigList>) };
    inline DescribeNoticeConfigResponseBody& setNoticeConfigList(const vector<DescribeNoticeConfigResponseBody::NoticeConfigList> & noticeConfigList) { DARABONBA_PTR_SET_VALUE(noticeConfigList_, noticeConfigList) };
    inline DescribeNoticeConfigResponseBody& setNoticeConfigList(vector<DescribeNoticeConfigResponseBody::NoticeConfigList> && noticeConfigList) { DARABONBA_PTR_SET_RVALUE(noticeConfigList_, noticeConfigList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNoticeConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the notification settings.
    shared_ptr<vector<DescribeNoticeConfigResponseBody::NoticeConfigList>> noticeConfigList_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
