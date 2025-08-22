// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSALERTRULERESPONSEBODYPROMETHEUSALERTRULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSALERTRULERESPONSEBODYPROMETHEUSALERTRULE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations.hpp>
#include <alibabacloud/models/CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule() = default ;
    CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule(const CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule &) = default ;
    CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule(CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule &&) = default ;
    CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule() = default ;
    CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& operator=(const CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule &) = default ;
    CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& operator=(CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->alertName_ != nullptr && this->annotations_ != nullptr && this->clusterId_ != nullptr && this->dispatchRuleId_ != nullptr && this->duration_ != nullptr
        && this->expression_ != nullptr && this->labels_ != nullptr && this->message_ != nullptr && this->notifyType_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline const vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations> & annotations() const { DARABONBA_PTR_GET_CONST(annotations_, vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations>) };
    inline vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations> annotations() { DARABONBA_PTR_GET(annotations_, vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations>) };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setAnnotations(const vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations> & annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setAnnotations(vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations> && annotations) { DARABONBA_PTR_SET_RVALUE(annotations_, annotations) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dispatchRuleId Field Functions 
    bool hasDispatchRuleId() const { return this->dispatchRuleId_ != nullptr;};
    void deleteDispatchRuleId() { this->dispatchRuleId_ = nullptr;};
    inline int64_t dispatchRuleId() const { DARABONBA_PTR_GET_DEFAULT(dispatchRuleId_, 0L) };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setDispatchRuleId(int64_t dispatchRuleId) { DARABONBA_PTR_SET_VALUE(dispatchRuleId_, dispatchRuleId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels>) };
    inline vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels>) };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setLabels(const vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setLabels(vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreatePrometheusAlertRuleResponseBodyPrometheusAlertRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the alert rule.
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> alertName_ = nullptr;
    // The annotations of the alert rule.
    std::shared_ptr<vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleAnnotations>> annotations_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the notification policy.
    std::shared_ptr<int64_t> dispatchRuleId_ = nullptr;
    // The duration. The value ranges from 1 to 1440 minutes.
    std::shared_ptr<string> duration_ = nullptr;
    // The expression of the alert rule.
    std::shared_ptr<string> expression_ = nullptr;
    // The tags of the alert rule.
    std::shared_ptr<vector<Models::CreatePrometheusAlertRuleResponseBodyPrometheusAlertRuleLabels>> labels_ = nullptr;
    // The content of the alert notification. Tags can be referenced in the {{$labels.xxx}} format.
    std::shared_ptr<string> message_ = nullptr;
    // The method that is used to send alert notifications. Valid values:
    // 
    // - ALERT_MANAGER: Alert notifications are sent by Operation Center.
    // - DISPATCH_RULE: Alert notifications are sent based on the specified notification policy.
    std::shared_ptr<string> notifyType_ = nullptr;
    // Indicates whether the alert rule is enabled. Valid values:
    // 
    // - `1`: The alert rule is enabled.
    // - `0`: The alert rule is disabled.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The type of the alert rule.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
