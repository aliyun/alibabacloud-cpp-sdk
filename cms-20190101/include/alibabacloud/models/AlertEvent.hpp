// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTEVENT_HPP_
#define ALIBABACLOUD_MODELS_ALERTEVENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertEventMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class AlertEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertEvent& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DeDupId, deDupId_);
      DARABONBA_PTR_TO_JSON(Details, details_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_ANY_TO_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, AlertEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DeDupId, deDupId_);
      DARABONBA_PTR_FROM_JSON(Details, details_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_ANY_FROM_JSON(ResourceInfo, resourceInfo_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    AlertEvent() = default ;
    AlertEvent(const AlertEvent &) = default ;
    AlertEvent(AlertEvent &&) = default ;
    AlertEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertEvent() = default ;
    AlertEvent& operator=(const AlertEvent &) = default ;
    AlertEvent& operator=(AlertEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertName_ != nullptr
        && this->alertStatus_ != nullptr && this->arn_ != nullptr && this->content_ != nullptr && this->customLabels_ != nullptr && this->deDupId_ != nullptr
        && this->details_ != nullptr && this->eventName_ != nullptr && this->eventType_ != nullptr && this->expression_ != nullptr && this->metrics_ != nullptr
        && this->product_ != nullptr && this->resourceInfo_ != nullptr && this->ruleName_ != nullptr && this->severity_ != nullptr && this->source_ != nullptr
        && this->summary_ != nullptr && this->timestamp_ != nullptr && this->traceId_ != nullptr && this->userId_ != nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline AlertEvent& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertStatus Field Functions 
    bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
    void deleteAlertStatus() { this->alertStatus_ = nullptr;};
    inline string alertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
    inline AlertEvent& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline AlertEvent& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline AlertEvent& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & customLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & customLabels() { DARABONBA_GET(customLabels_) };
    inline AlertEvent& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline AlertEvent& setCustomLabels(Darabonba::Json & customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // deDupId Field Functions 
    bool hasDeDupId() const { return this->deDupId_ != nullptr;};
    void deleteDeDupId() { this->deDupId_ = nullptr;};
    inline string deDupId() const { DARABONBA_PTR_GET_DEFAULT(deDupId_, "") };
    inline AlertEvent& setDeDupId(string deDupId) { DARABONBA_PTR_SET_VALUE(deDupId_, deDupId) };


    // details Field Functions 
    bool hasDetails() const { return this->details_ != nullptr;};
    void deleteDetails() { this->details_ = nullptr;};
    inline string details() const { DARABONBA_PTR_GET_DEFAULT(details_, "") };
    inline AlertEvent& setDetails(string details) { DARABONBA_PTR_SET_VALUE(details_, details) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline AlertEvent& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline AlertEvent& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string expression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline AlertEvent& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline const vector<AlertEventMetrics> & metrics() const { DARABONBA_PTR_GET_CONST(metrics_, vector<AlertEventMetrics>) };
    inline vector<AlertEventMetrics> metrics() { DARABONBA_PTR_GET(metrics_, vector<AlertEventMetrics>) };
    inline AlertEvent& setMetrics(const vector<AlertEventMetrics> & metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };
    inline AlertEvent& setMetrics(vector<AlertEventMetrics> && metrics) { DARABONBA_PTR_SET_RVALUE(metrics_, metrics) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline AlertEvent& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // resourceInfo Field Functions 
    bool hasResourceInfo() const { return this->resourceInfo_ != nullptr;};
    void deleteResourceInfo() { this->resourceInfo_ = nullptr;};
    inline     const Darabonba::Json & resourceInfo() const { DARABONBA_GET(resourceInfo_) };
    Darabonba::Json & resourceInfo() { DARABONBA_GET(resourceInfo_) };
    inline AlertEvent& setResourceInfo(const Darabonba::Json & resourceInfo) { DARABONBA_SET_VALUE(resourceInfo_, resourceInfo) };
    inline AlertEvent& setResourceInfo(Darabonba::Json & resourceInfo) { DARABONBA_SET_RVALUE(resourceInfo_, resourceInfo) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline AlertEvent& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline AlertEvent& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AlertEvent& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline AlertEvent& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // timestamp Field Functions 
    bool hasTimestamp() const { return this->timestamp_ != nullptr;};
    void deleteTimestamp() { this->timestamp_ = nullptr;};
    inline int64_t timestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
    inline AlertEvent& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline AlertEvent& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AlertEvent& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> alertName_ = nullptr;
    std::shared_ptr<string> alertStatus_ = nullptr;
    std::shared_ptr<string> arn_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    Darabonba::Json customLabels_ = nullptr;
    std::shared_ptr<string> deDupId_ = nullptr;
    std::shared_ptr<string> details_ = nullptr;
    std::shared_ptr<string> eventName_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
    std::shared_ptr<string> expression_ = nullptr;
    std::shared_ptr<vector<AlertEventMetrics>> metrics_ = nullptr;
    std::shared_ptr<string> product_ = nullptr;
    Darabonba::Json resourceInfo_ = nullptr;
    std::shared_ptr<string> ruleName_ = nullptr;
    std::shared_ptr<string> severity_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<int64_t> timestamp_ = nullptr;
    std::shared_ptr<string> traceId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
