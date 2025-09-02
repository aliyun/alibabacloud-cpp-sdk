// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTMESSAGERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETALERTMESSAGERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAlertMessageResponseBodyDataInstances.hpp>
#include <alibabacloud/models/GetAlertMessageResponseBodyDataNodes.hpp>
#include <alibabacloud/models/GetAlertMessageResponseBodyDataSlaAlert.hpp>
#include <alibabacloud/models/GetAlertMessageResponseBodyDataTopics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetAlertMessageResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertMessageResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertMessageStatus, alertMessageStatus_);
      DARABONBA_PTR_TO_JSON(AlertMethod, alertMethod_);
      DARABONBA_PTR_TO_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_TO_JSON(AlertUser, alertUser_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(Nodes, nodes_);
      DARABONBA_PTR_TO_JSON(RemindId, remindId_);
      DARABONBA_PTR_TO_JSON(RemindName, remindName_);
      DARABONBA_PTR_TO_JSON(SlaAlert, slaAlert_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertMessageResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertMessageStatus, alertMessageStatus_);
      DARABONBA_PTR_FROM_JSON(AlertMethod, alertMethod_);
      DARABONBA_PTR_FROM_JSON(AlertTime, alertTime_);
      DARABONBA_PTR_FROM_JSON(AlertUser, alertUser_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
      DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
      DARABONBA_PTR_FROM_JSON(RemindName, remindName_);
      DARABONBA_PTR_FROM_JSON(SlaAlert, slaAlert_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
    };
    GetAlertMessageResponseBodyData() = default ;
    GetAlertMessageResponseBodyData(const GetAlertMessageResponseBodyData &) = default ;
    GetAlertMessageResponseBodyData(GetAlertMessageResponseBodyData &&) = default ;
    GetAlertMessageResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertMessageResponseBodyData() = default ;
    GetAlertMessageResponseBodyData& operator=(const GetAlertMessageResponseBodyData &) = default ;
    GetAlertMessageResponseBodyData& operator=(GetAlertMessageResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->alertMessageStatus_ != nullptr && this->alertMethod_ != nullptr && this->alertTime_ != nullptr && this->alertUser_ != nullptr && this->content_ != nullptr
        && this->instances_ != nullptr && this->nodes_ != nullptr && this->remindId_ != nullptr && this->remindName_ != nullptr && this->slaAlert_ != nullptr
        && this->source_ != nullptr && this->topics_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline GetAlertMessageResponseBodyData& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertMessageStatus Field Functions 
    bool hasAlertMessageStatus() const { return this->alertMessageStatus_ != nullptr;};
    void deleteAlertMessageStatus() { this->alertMessageStatus_ = nullptr;};
    inline string alertMessageStatus() const { DARABONBA_PTR_GET_DEFAULT(alertMessageStatus_, "") };
    inline GetAlertMessageResponseBodyData& setAlertMessageStatus(string alertMessageStatus) { DARABONBA_PTR_SET_VALUE(alertMessageStatus_, alertMessageStatus) };


    // alertMethod Field Functions 
    bool hasAlertMethod() const { return this->alertMethod_ != nullptr;};
    void deleteAlertMethod() { this->alertMethod_ = nullptr;};
    inline string alertMethod() const { DARABONBA_PTR_GET_DEFAULT(alertMethod_, "") };
    inline GetAlertMessageResponseBodyData& setAlertMethod(string alertMethod) { DARABONBA_PTR_SET_VALUE(alertMethod_, alertMethod) };


    // alertTime Field Functions 
    bool hasAlertTime() const { return this->alertTime_ != nullptr;};
    void deleteAlertTime() { this->alertTime_ = nullptr;};
    inline int64_t alertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
    inline GetAlertMessageResponseBodyData& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


    // alertUser Field Functions 
    bool hasAlertUser() const { return this->alertUser_ != nullptr;};
    void deleteAlertUser() { this->alertUser_ = nullptr;};
    inline string alertUser() const { DARABONBA_PTR_GET_DEFAULT(alertUser_, "") };
    inline GetAlertMessageResponseBodyData& setAlertUser(string alertUser) { DARABONBA_PTR_SET_VALUE(alertUser_, alertUser) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetAlertMessageResponseBodyData& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<Models::GetAlertMessageResponseBodyDataInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Models::GetAlertMessageResponseBodyDataInstances>) };
    inline vector<Models::GetAlertMessageResponseBodyDataInstances> instances() { DARABONBA_PTR_GET(instances_, vector<Models::GetAlertMessageResponseBodyDataInstances>) };
    inline GetAlertMessageResponseBodyData& setInstances(const vector<Models::GetAlertMessageResponseBodyDataInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline GetAlertMessageResponseBodyData& setInstances(vector<Models::GetAlertMessageResponseBodyDataInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // nodes Field Functions 
    bool hasNodes() const { return this->nodes_ != nullptr;};
    void deleteNodes() { this->nodes_ = nullptr;};
    inline const vector<Models::GetAlertMessageResponseBodyDataNodes> & nodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Models::GetAlertMessageResponseBodyDataNodes>) };
    inline vector<Models::GetAlertMessageResponseBodyDataNodes> nodes() { DARABONBA_PTR_GET(nodes_, vector<Models::GetAlertMessageResponseBodyDataNodes>) };
    inline GetAlertMessageResponseBodyData& setNodes(const vector<Models::GetAlertMessageResponseBodyDataNodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
    inline GetAlertMessageResponseBodyData& setNodes(vector<Models::GetAlertMessageResponseBodyDataNodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


    // remindId Field Functions 
    bool hasRemindId() const { return this->remindId_ != nullptr;};
    void deleteRemindId() { this->remindId_ = nullptr;};
    inline int64_t remindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
    inline GetAlertMessageResponseBodyData& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


    // remindName Field Functions 
    bool hasRemindName() const { return this->remindName_ != nullptr;};
    void deleteRemindName() { this->remindName_ = nullptr;};
    inline string remindName() const { DARABONBA_PTR_GET_DEFAULT(remindName_, "") };
    inline GetAlertMessageResponseBodyData& setRemindName(string remindName) { DARABONBA_PTR_SET_VALUE(remindName_, remindName) };


    // slaAlert Field Functions 
    bool hasSlaAlert() const { return this->slaAlert_ != nullptr;};
    void deleteSlaAlert() { this->slaAlert_ = nullptr;};
    inline const Models::GetAlertMessageResponseBodyDataSlaAlert & slaAlert() const { DARABONBA_PTR_GET_CONST(slaAlert_, Models::GetAlertMessageResponseBodyDataSlaAlert) };
    inline Models::GetAlertMessageResponseBodyDataSlaAlert slaAlert() { DARABONBA_PTR_GET(slaAlert_, Models::GetAlertMessageResponseBodyDataSlaAlert) };
    inline GetAlertMessageResponseBodyData& setSlaAlert(const Models::GetAlertMessageResponseBodyDataSlaAlert & slaAlert) { DARABONBA_PTR_SET_VALUE(slaAlert_, slaAlert) };
    inline GetAlertMessageResponseBodyData& setSlaAlert(Models::GetAlertMessageResponseBodyDataSlaAlert && slaAlert) { DARABONBA_PTR_SET_RVALUE(slaAlert_, slaAlert) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetAlertMessageResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<Models::GetAlertMessageResponseBodyDataTopics> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<Models::GetAlertMessageResponseBodyDataTopics>) };
    inline vector<Models::GetAlertMessageResponseBodyDataTopics> topics() { DARABONBA_PTR_GET(topics_, vector<Models::GetAlertMessageResponseBodyDataTopics>) };
    inline GetAlertMessageResponseBodyData& setTopics(const vector<Models::GetAlertMessageResponseBodyDataTopics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline GetAlertMessageResponseBodyData& setTopics(vector<Models::GetAlertMessageResponseBodyDataTopics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    // The alert ID.
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The sending status of the notification. Valid values:
    // 
    // *   READY_TO_SEND: The notification is waiting to be sent.
    // *   SEND_FAIL: The notification fails to be sent.
    // *   SEND_SUCCESS: The notification is sent.
    // *   SEND_OVERLIMIT: The number of notifications that are sent exceeds the upper limit.
    std::shared_ptr<string> alertMessageStatus_ = nullptr;
    // The notification method. Valid values:
    // 
    // *   MAIL.
    // *   SMS.
    // *   PHONE. Only DataWorks Professional Edition and more advanced editions support the PHONE notification method.
    std::shared_ptr<string> alertMethod_ = nullptr;
    // The time when the alert was reported.
    std::shared_ptr<int64_t> alertTime_ = nullptr;
    // The ID of the Alibaba Cloud account used by the alert recipient.
    std::shared_ptr<string> alertUser_ = nullptr;
    // The content of the alert.
    std::shared_ptr<string> content_ = nullptr;
    // The instances that triggered the custom alert rule. This parameter is returned if the value of the Source parameter is REMIND_ALERT. This parameter is left empty if the value of the Source parameter is not REMIND_ALERT.
    std::shared_ptr<vector<Models::GetAlertMessageResponseBodyDataInstances>> instances_ = nullptr;
    // The nodes returned for different alert sources. The nodes that form a loop are returned if the value of the Source parameter is NODE_CYCLE_ALERT. The nodes that are isolated are returned if the value of the Source parameter is NODE_LONELY_ALERT.
    std::shared_ptr<vector<Models::GetAlertMessageResponseBodyDataNodes>> nodes_ = nullptr;
    // The ID of the custom alert rule that was triggered. This parameter is returned if the value of the Source parameter is REMIND_ALERT.
    std::shared_ptr<int64_t> remindId_ = nullptr;
    // The name of the custom alert rule that was triggered. This parameter is returned if the value of the Source parameter is REMIND_ALERT.
    std::shared_ptr<string> remindName_ = nullptr;
    // The basic information about the baseline instance that triggered an alert. This parameter is returned if the value of the Source parameter is SLA_ALERT. This parameter is left empty if the value of the Source parameter is not SLA_ALERT.
    std::shared_ptr<Models::GetAlertMessageResponseBodyDataSlaAlert> slaAlert_ = nullptr;
    // The type of the alert. Valid values:
    // 
    // *   REMIND_ALERT: The alert is a custom alert.
    // *   TOPIC_ALERT: The alert is an event alert.
    // *   SLA_ALERT: The alert is a baseline alert.
    // *   NODE_CYCLE_ALERT: The alert is reported for a node dependency loop.
    // *   NODE_LONELY_ALERT: The alert is reported for isolated nodes.
    std::shared_ptr<string> source_ = nullptr;
    // The events that triggered alerts. This parameter is returned if the value of the Source parameter is TOPIC_ALERT. This parameter is left empty if the value of the Source parameter is not TOPIC_ALERT.
    std::shared_ptr<vector<Models::GetAlertMessageResponseBodyDataTopics>> topics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
