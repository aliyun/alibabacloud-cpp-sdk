// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROMETHEUSALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROMETHEUSALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePrometheusAlertRuleRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreatePrometheusAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePrometheusAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePrometheusAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NotifyType, notifyType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreatePrometheusAlertRuleRequest() = default ;
    CreatePrometheusAlertRuleRequest(const CreatePrometheusAlertRuleRequest &) = default ;
    CreatePrometheusAlertRuleRequest(CreatePrometheusAlertRuleRequest &&) = default ;
    CreatePrometheusAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePrometheusAlertRuleRequest() = default ;
    CreatePrometheusAlertRuleRequest& operator=(const CreatePrometheusAlertRuleRequest &) = default ;
    CreatePrometheusAlertRuleRequest& operator=(CreatePrometheusAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertName_ != nullptr
        && this->annotations_ != nullptr && this->clusterId_ != nullptr && this->dispatchRuleId_ != nullptr && this->duration_ != nullptr && this->expression_ != nullptr
        && this->labels_ != nullptr && this->message_ != nullptr && this->notifyType_ != nullptr && this->regionId_ != nullptr && this->tags_ != nullptr
        && this->type_ != nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline CreatePrometheusAlertRuleRequest& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string annotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline CreatePrometheusAlertRuleRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreatePrometheusAlertRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dispatchRuleId Field Functions 
    bool hasDispatchRuleId() const { return this->dispatchRuleId_ != nullptr;};
    void deleteDispatchRuleId() { this->dispatchRuleId_ = nullptr;};
    inline int64_t dispatchRuleId() const { DARABONBA_PTR_GET_DEFAULT(dispatchRuleId_, 0L) };
    inline CreatePrometheusAlertRuleRequest& setDispatchRuleId(int64_t dispatchRuleId) { DARABONBA_PTR_SET_VALUE(dispatchRuleId_, dispatchRuleId) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline CreatePrometheusAlertRuleRequest& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline CreatePrometheusAlertRuleRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline CreatePrometheusAlertRuleRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreatePrometheusAlertRuleRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // notifyType Field Functions 
    bool hasNotifyType() const { return this->notifyType_ != nullptr;};
    void deleteNotifyType() { this->notifyType_ = nullptr;};
    inline string notifyType() const { DARABONBA_PTR_GET_DEFAULT(notifyType_, "") };
    inline CreatePrometheusAlertRuleRequest& setNotifyType(string notifyType) { DARABONBA_PTR_SET_VALUE(notifyType_, notifyType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePrometheusAlertRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreatePrometheusAlertRuleRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreatePrometheusAlertRuleRequestTags>) };
    inline vector<CreatePrometheusAlertRuleRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<CreatePrometheusAlertRuleRequestTags>) };
    inline CreatePrometheusAlertRuleRequest& setTags(const vector<CreatePrometheusAlertRuleRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreatePrometheusAlertRuleRequest& setTags(vector<CreatePrometheusAlertRuleRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreatePrometheusAlertRuleRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> alertName_ = nullptr;
    // The annotations that are described in a JSON string. You must specify the name and value of each annotation.
    std::shared_ptr<string> annotations_ = nullptr;
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the notification policy. This parameter is required if the NotifyType parameter is set to `DISPATCH_RULE`.
    std::shared_ptr<int64_t> dispatchRuleId_ = nullptr;
    // The duration. The value ranges from 1 to 1440 minutes.
    // 
    // This parameter is required.
    std::shared_ptr<string> duration_ = nullptr;
    // The expression of the alert rule. The expression must follow the PromQL syntax.
    // 
    // This parameter is required.
    std::shared_ptr<string> expression_ = nullptr;
    // The tags that are described in a JSON string. You must specify the name and value of each tag.
    std::shared_ptr<string> labels_ = nullptr;
    // The content of the alert notification. Tags can be referenced in the {{$labels.xxx}} format.
    // 
    // This parameter is required.
    std::shared_ptr<string> message_ = nullptr;
    // The method that is used to send alert notifications. Valid values:
    // 
    // - `ALERT_MANAGER`: Alert notifications are sent by Operation Center. This is the default value.
    // - `DISPATCH_RULE`: Alert notifications are sent based on the specified notification policy.
    std::shared_ptr<string> notifyType_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreatePrometheusAlertRuleRequestTags>> tags_ = nullptr;
    // The type of the alert rule. Valid values:
    // 
    // - 99: custom alert
    // - 101: Prometheus Service alert
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
