// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertCheckType, alertCheckType_);
      DARABONBA_PTR_TO_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(AlertPiplines, alertPiplines_);
      DARABONBA_PTR_TO_JSON(AlertRuleContent, alertRuleContent_);
      DARABONBA_PTR_TO_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(Annotations, annotations_);
      DARABONBA_PTR_TO_JSON(AutoAddNewApplication, autoAddNewApplication_);
      DARABONBA_PTR_TO_JSON(AutoAddTargetConfig, autoAddTargetConfig_);
      DARABONBA_PTR_TO_JSON(CheckCycle, checkCycle_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(DataConfig, dataConfig_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(MarkTags, markTags_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(MetricsKey, metricsKey_);
      DARABONBA_PTR_TO_JSON(MetricsType, metricsType_);
      DARABONBA_PTR_TO_JSON(Notice, notice_);
      DARABONBA_PTR_TO_JSON(NotifyMode, notifyMode_);
      DARABONBA_PTR_TO_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_TO_JSON(Pids, pids_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(PromQL, promQL_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(aliyunLang, aliyunLang_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertCheckType, alertCheckType_);
      DARABONBA_PTR_FROM_JSON(AlertGroup, alertGroup_);
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(AlertPiplines, alertPiplines_);
      DARABONBA_PTR_FROM_JSON(AlertRuleContent, alertRuleContent_);
      DARABONBA_PTR_FROM_JSON(AlertStatus, alertStatus_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(Annotations, annotations_);
      DARABONBA_PTR_FROM_JSON(AutoAddNewApplication, autoAddNewApplication_);
      DARABONBA_PTR_FROM_JSON(AutoAddTargetConfig, autoAddTargetConfig_);
      DARABONBA_PTR_FROM_JSON(CheckCycle, checkCycle_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(DataConfig, dataConfig_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(MarkTags, markTags_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(MetricsKey, metricsKey_);
      DARABONBA_PTR_FROM_JSON(MetricsType, metricsType_);
      DARABONBA_PTR_FROM_JSON(Notice, notice_);
      DARABONBA_PTR_FROM_JSON(NotifyMode, notifyMode_);
      DARABONBA_PTR_FROM_JSON(NotifyStrategy, notifyStrategy_);
      DARABONBA_PTR_FROM_JSON(Pids, pids_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(PromQL, promQL_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(aliyunLang, aliyunLang_);
    };
    CreateOrUpdateAlertRuleRequest() = default ;
    CreateOrUpdateAlertRuleRequest(const CreateOrUpdateAlertRuleRequest &) = default ;
    CreateOrUpdateAlertRuleRequest(CreateOrUpdateAlertRuleRequest &&) = default ;
    CreateOrUpdateAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateAlertRuleRequest() = default ;
    CreateOrUpdateAlertRuleRequest& operator=(const CreateOrUpdateAlertRuleRequest &) = default ;
    CreateOrUpdateAlertRuleRequest& operator=(CreateOrUpdateAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tags() = default ;
      Tags(const Tags &) = default ;
      Tags(Tags &&) = default ;
      Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tags() = default ;
      Tags& operator=(const Tags &) = default ;
      Tags& operator=(Tags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class MarkTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MarkTags& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, MarkTags& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      MarkTags() = default ;
      MarkTags(const MarkTags &) = default ;
      MarkTags(MarkTags &&) = default ;
      MarkTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MarkTags() = default ;
      MarkTags& operator=(const MarkTags &) = default ;
      MarkTags& operator=(MarkTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline MarkTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline MarkTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->alertCheckType_ == nullptr
        && this->alertGroup_ == nullptr && this->alertId_ == nullptr && this->alertName_ == nullptr && this->alertPiplines_ == nullptr && this->alertRuleContent_ == nullptr
        && this->alertStatus_ == nullptr && this->alertType_ == nullptr && this->annotations_ == nullptr && this->autoAddNewApplication_ == nullptr && this->autoAddTargetConfig_ == nullptr
        && this->checkCycle_ == nullptr && this->clusterId_ == nullptr && this->dataConfig_ == nullptr && this->duration_ == nullptr && this->filters_ == nullptr
        && this->labels_ == nullptr && this->level_ == nullptr && this->markTags_ == nullptr && this->message_ == nullptr && this->metricsKey_ == nullptr
        && this->metricsType_ == nullptr && this->notice_ == nullptr && this->notifyMode_ == nullptr && this->notifyStrategy_ == nullptr && this->pids_ == nullptr
        && this->product_ == nullptr && this->promQL_ == nullptr && this->regionId_ == nullptr && this->tags_ == nullptr && this->aliyunLang_ == nullptr; };
    // alertCheckType Field Functions 
    bool hasAlertCheckType() const { return this->alertCheckType_ != nullptr;};
    void deleteAlertCheckType() { this->alertCheckType_ = nullptr;};
    inline string getAlertCheckType() const { DARABONBA_PTR_GET_DEFAULT(alertCheckType_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertCheckType(string alertCheckType) { DARABONBA_PTR_SET_VALUE(alertCheckType_, alertCheckType) };


    // alertGroup Field Functions 
    bool hasAlertGroup() const { return this->alertGroup_ != nullptr;};
    void deleteAlertGroup() { this->alertGroup_ = nullptr;};
    inline int64_t getAlertGroup() const { DARABONBA_PTR_GET_DEFAULT(alertGroup_, 0L) };
    inline CreateOrUpdateAlertRuleRequest& setAlertGroup(int64_t alertGroup) { DARABONBA_PTR_SET_VALUE(alertGroup_, alertGroup) };


    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline CreateOrUpdateAlertRuleRequest& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // alertPiplines Field Functions 
    bool hasAlertPiplines() const { return this->alertPiplines_ != nullptr;};
    void deleteAlertPiplines() { this->alertPiplines_ = nullptr;};
    inline string getAlertPiplines() const { DARABONBA_PTR_GET_DEFAULT(alertPiplines_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertPiplines(string alertPiplines) { DARABONBA_PTR_SET_VALUE(alertPiplines_, alertPiplines) };


    // alertRuleContent Field Functions 
    bool hasAlertRuleContent() const { return this->alertRuleContent_ != nullptr;};
    void deleteAlertRuleContent() { this->alertRuleContent_ = nullptr;};
    inline string getAlertRuleContent() const { DARABONBA_PTR_GET_DEFAULT(alertRuleContent_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertRuleContent(string alertRuleContent) { DARABONBA_PTR_SET_VALUE(alertRuleContent_, alertRuleContent) };


    // alertStatus Field Functions 
    bool hasAlertStatus() const { return this->alertStatus_ != nullptr;};
    void deleteAlertStatus() { this->alertStatus_ = nullptr;};
    inline string getAlertStatus() const { DARABONBA_PTR_GET_DEFAULT(alertStatus_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertStatus(string alertStatus) { DARABONBA_PTR_SET_VALUE(alertStatus_, alertStatus) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // annotations Field Functions 
    bool hasAnnotations() const { return this->annotations_ != nullptr;};
    void deleteAnnotations() { this->annotations_ = nullptr;};
    inline string getAnnotations() const { DARABONBA_PTR_GET_DEFAULT(annotations_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAnnotations(string annotations) { DARABONBA_PTR_SET_VALUE(annotations_, annotations) };


    // autoAddNewApplication Field Functions 
    bool hasAutoAddNewApplication() const { return this->autoAddNewApplication_ != nullptr;};
    void deleteAutoAddNewApplication() { this->autoAddNewApplication_ = nullptr;};
    inline bool getAutoAddNewApplication() const { DARABONBA_PTR_GET_DEFAULT(autoAddNewApplication_, false) };
    inline CreateOrUpdateAlertRuleRequest& setAutoAddNewApplication(bool autoAddNewApplication) { DARABONBA_PTR_SET_VALUE(autoAddNewApplication_, autoAddNewApplication) };


    // autoAddTargetConfig Field Functions 
    bool hasAutoAddTargetConfig() const { return this->autoAddTargetConfig_ != nullptr;};
    void deleteAutoAddTargetConfig() { this->autoAddTargetConfig_ = nullptr;};
    inline string getAutoAddTargetConfig() const { DARABONBA_PTR_GET_DEFAULT(autoAddTargetConfig_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAutoAddTargetConfig(string autoAddTargetConfig) { DARABONBA_PTR_SET_VALUE(autoAddTargetConfig_, autoAddTargetConfig) };


    // checkCycle Field Functions 
    bool hasCheckCycle() const { return this->checkCycle_ != nullptr;};
    void deleteCheckCycle() { this->checkCycle_ = nullptr;};
    inline int64_t getCheckCycle() const { DARABONBA_PTR_GET_DEFAULT(checkCycle_, 0L) };
    inline CreateOrUpdateAlertRuleRequest& setCheckCycle(int64_t checkCycle) { DARABONBA_PTR_SET_VALUE(checkCycle_, checkCycle) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateOrUpdateAlertRuleRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // dataConfig Field Functions 
    bool hasDataConfig() const { return this->dataConfig_ != nullptr;};
    void deleteDataConfig() { this->dataConfig_ = nullptr;};
    inline string getDataConfig() const { DARABONBA_PTR_GET_DEFAULT(dataConfig_, "") };
    inline CreateOrUpdateAlertRuleRequest& setDataConfig(string dataConfig) { DARABONBA_PTR_SET_VALUE(dataConfig_, dataConfig) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline CreateOrUpdateAlertRuleRequest& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline string getFilters() const { DARABONBA_PTR_GET_DEFAULT(filters_, "") };
    inline CreateOrUpdateAlertRuleRequest& setFilters(string filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline CreateOrUpdateAlertRuleRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline CreateOrUpdateAlertRuleRequest& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // markTags Field Functions 
    bool hasMarkTags() const { return this->markTags_ != nullptr;};
    void deleteMarkTags() { this->markTags_ = nullptr;};
    inline const vector<CreateOrUpdateAlertRuleRequest::MarkTags> & getMarkTags() const { DARABONBA_PTR_GET_CONST(markTags_, vector<CreateOrUpdateAlertRuleRequest::MarkTags>) };
    inline vector<CreateOrUpdateAlertRuleRequest::MarkTags> getMarkTags() { DARABONBA_PTR_GET(markTags_, vector<CreateOrUpdateAlertRuleRequest::MarkTags>) };
    inline CreateOrUpdateAlertRuleRequest& setMarkTags(const vector<CreateOrUpdateAlertRuleRequest::MarkTags> & markTags) { DARABONBA_PTR_SET_VALUE(markTags_, markTags) };
    inline CreateOrUpdateAlertRuleRequest& setMarkTags(vector<CreateOrUpdateAlertRuleRequest::MarkTags> && markTags) { DARABONBA_PTR_SET_RVALUE(markTags_, markTags) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateOrUpdateAlertRuleRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // metricsKey Field Functions 
    bool hasMetricsKey() const { return this->metricsKey_ != nullptr;};
    void deleteMetricsKey() { this->metricsKey_ = nullptr;};
    inline string getMetricsKey() const { DARABONBA_PTR_GET_DEFAULT(metricsKey_, "") };
    inline CreateOrUpdateAlertRuleRequest& setMetricsKey(string metricsKey) { DARABONBA_PTR_SET_VALUE(metricsKey_, metricsKey) };


    // metricsType Field Functions 
    bool hasMetricsType() const { return this->metricsType_ != nullptr;};
    void deleteMetricsType() { this->metricsType_ = nullptr;};
    inline string getMetricsType() const { DARABONBA_PTR_GET_DEFAULT(metricsType_, "") };
    inline CreateOrUpdateAlertRuleRequest& setMetricsType(string metricsType) { DARABONBA_PTR_SET_VALUE(metricsType_, metricsType) };


    // notice Field Functions 
    bool hasNotice() const { return this->notice_ != nullptr;};
    void deleteNotice() { this->notice_ = nullptr;};
    inline string getNotice() const { DARABONBA_PTR_GET_DEFAULT(notice_, "") };
    inline CreateOrUpdateAlertRuleRequest& setNotice(string notice) { DARABONBA_PTR_SET_VALUE(notice_, notice) };


    // notifyMode Field Functions 
    bool hasNotifyMode() const { return this->notifyMode_ != nullptr;};
    void deleteNotifyMode() { this->notifyMode_ = nullptr;};
    inline string getNotifyMode() const { DARABONBA_PTR_GET_DEFAULT(notifyMode_, "") };
    inline CreateOrUpdateAlertRuleRequest& setNotifyMode(string notifyMode) { DARABONBA_PTR_SET_VALUE(notifyMode_, notifyMode) };


    // notifyStrategy Field Functions 
    bool hasNotifyStrategy() const { return this->notifyStrategy_ != nullptr;};
    void deleteNotifyStrategy() { this->notifyStrategy_ = nullptr;};
    inline string getNotifyStrategy() const { DARABONBA_PTR_GET_DEFAULT(notifyStrategy_, "") };
    inline CreateOrUpdateAlertRuleRequest& setNotifyStrategy(string notifyStrategy) { DARABONBA_PTR_SET_VALUE(notifyStrategy_, notifyStrategy) };


    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline string getPids() const { DARABONBA_PTR_GET_DEFAULT(pids_, "") };
    inline CreateOrUpdateAlertRuleRequest& setPids(string pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline CreateOrUpdateAlertRuleRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // promQL Field Functions 
    bool hasPromQL() const { return this->promQL_ != nullptr;};
    void deletePromQL() { this->promQL_ = nullptr;};
    inline string getPromQL() const { DARABONBA_PTR_GET_DEFAULT(promQL_, "") };
    inline CreateOrUpdateAlertRuleRequest& setPromQL(string promQL) { DARABONBA_PTR_SET_VALUE(promQL_, promQL) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateOrUpdateAlertRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateOrUpdateAlertRuleRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateOrUpdateAlertRuleRequest::Tags>) };
    inline vector<CreateOrUpdateAlertRuleRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateOrUpdateAlertRuleRequest::Tags>) };
    inline CreateOrUpdateAlertRuleRequest& setTags(const vector<CreateOrUpdateAlertRuleRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateOrUpdateAlertRuleRequest& setTags(vector<CreateOrUpdateAlertRuleRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline CreateOrUpdateAlertRuleRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


  protected:
    // The check type for a Prometheus monitoring alert rule.
    // 
    // - `STATIC`: A static threshold. The **MetricsKey** parameter is required. For more information, see the description of the **MetricsKey** parameter below.
    // 
    // - `CUSTOM`: A custom PromQL query. The **PromQL**, **Duration**, and **Message** parameters are required.
    shared_ptr<string> alertCheckType_ {};
    // The alert group ID for the Prometheus alert rule. Valid values:
    // 
    // - `-1`: Custom PromQL
    // 
    // - `1`: Kubernetes workloads
    // 
    // - `15`: Kubernetes nodes
    shared_ptr<int64_t> alertGroup_ {};
    // The ID of the alert rule.
    // 
    // - Omit this parameter to create a new alert rule.
    // 
    // - Specify an ID to modify an existing alert rule.
    shared_ptr<int64_t> alertId_ {};
    // The alert rule name.
    // 
    // This parameter is required.
    shared_ptr<string> alertName_ {};
    // The alert pipeline configuration. Used for compatibility with legacy alert rules.
    shared_ptr<string> alertPiplines_ {};
    // The content of the alert rule for application monitoring or browser monitoring. The following is a template for the **AlertRuleContent** parameter. For a description of the fields in the template, see the supplementary information below this table.
    // 
    // ```json
    // { 
    //     "Condition": "OR",
    //      "AlertRuleItems": [
    //              { "Operator": "CURRENT_LTE",
    //                  "MetricKey": "appstat.jvm.threadcount",
    //                  "Value": 1000,
    //                  "Aggregate": "AVG",
    //                   "N": 10,
    //                   "Tolerability": 169
    //             } 
    //        ]  
    //   }
    // ```
    // 
    // > The available fields for **AlertRuleItems.MetricKey** depend on the **MetricsType** value. For information about the metric types supported by application monitoring and browser monitoring and their corresponding alert rule fields, see the supplementary information below this table.
    shared_ptr<string> alertRuleContent_ {};
    // The status of the alert rule. Valid values:
    // 
    // - `RUNNING`: The alert rule is running. (Default)
    // 
    // - `STOPPED`: The alert rule is stopped.
    shared_ptr<string> alertStatus_ {};
    // The type of the alert rule. Valid values:
    // 
    // - `APPLICATION_MONITORING_ALERT_RULE`: For application monitoring.
    // 
    // - `BROWSER_MONITORING_ALERT_RULE`: For browser monitoring.
    // 
    // - `PROMETHEUS_MONITORING_ALERT_RULE`: For Prometheus monitoring.
    // 
    // - `XTRACE_MONITORING_ALERT_RULE`: For Tracing Analysis (OpenTelemetry edition).
    // 
    // - `EBPF_MONITORING_ALERT_RULE`: For eBPF monitoring.
    // 
    // - `RUM_MONITORING_ALERT_RULE`: For real user monitoring (RUM).
    // 
    // This parameter is required.
    shared_ptr<string> alertType_ {};
    // Annotations to add to the Prometheus alert rule. Specify as a JSON string representing an array of objects, each with Name and Value keys.
    shared_ptr<string> annotations_ {};
    // Determines whether to automatically apply this alert rule to new applications. This applies only to application monitoring and browser monitoring rules.
    // 
    // - `true`: enables the feature.
    // 
    // - `false`: disables the feature.
    shared_ptr<bool> autoAddNewApplication_ {};
    // The configuration for automatically adding applications to an application monitoring alert rule. Specify this parameter as a JSON string with the following fields:
    // 
    // - `autoAddMatchType`: The matching method. Can be `REGULAR` (matches the regular expression) or `NOT_REGULAR` (does not match the regular expression).
    // 
    //   Match type: Regular expression match (REGULAR) / Not a regular expression match (NOT_REGULAR)
    // 
    // - `autoAddMatchExp`: The regular expression.
    shared_ptr<string> autoAddTargetConfig_ {};
    // The check interval for the Prometheus alert rule.
    shared_ptr<int64_t> checkCycle_ {};
    // The cluster ID for the Prometheus monitoring alert rule.
    shared_ptr<string> clusterId_ {};
    // The data configuration. The dataRevision field specifies how to handle missing metric data.
    // 
    // - `0`: Fills the data with 0.
    // 
    // - `1`: Fills the data with 1.
    // 
    // - `2`: Fills the data with null. This is the default and does not trigger an alert.
    shared_ptr<string> dataConfig_ {};
    // The period, in minutes, that a condition must be true before a Prometheus alert is triggered. Valid values: 0 to 1440.
    shared_ptr<int64_t> duration_ {};
    // The filters for an application monitoring or browser monitoring alert rule.
    // Specify this parameter as a JSON string in the following format:
    // 
    // ```
    // "DimFilters": [ 
    // { 
    //  "FilterOpt": "ALL",
    //  "FilterValues": [],         // The filter value.
    //  "FilterKey": "rootIp"     // The filter key.
    // }
    // ]
    // ```
    // 
    // Valid values for **FilterOpt**:
    // 
    // - `STATIC`: Matches a fixed dimension value.
    // 
    // - `ALL`: Iterates over all dimension values. Note: This option is not supported for range detection.
    // 
    // - `DISABLE`: Aggregates all dimension values by summing them.
    shared_ptr<string> filters_ {};
    // Labels to add to the Prometheus alert rule. Specify as a JSON string representing an array of objects, each with Name and Value keys.
    shared_ptr<string> labels_ {};
    // The severity level for the Prometheus alert rule.
    // 
    // - `P1`: Critical. For major issues that affect core business availability with a wide impact and severe consequences.
    // 
    // - `P2`: Warning. For issues that cause partial service failures or affect system availability with a limited scope.
    // 
    // - `P3`: Info. For potential issues or alerts from non-critical services.
    // 
    // - `P4`: Low priority. Used for informational alerts that require attention but do not affect services.
    // 
    // - `Default`: The default level, used when no specific severity is required.
    shared_ptr<string> level_ {};
    // Application tags used to filter applications in application monitoring alert rules.
    shared_ptr<vector<CreateOrUpdateAlertRuleRequest::MarkTags>> markTags_ {};
    // The alert message for the Prometheus alert rule.
    shared_ptr<string> message_ {};
    // The alert metric. This parameter is required for Prometheus alert rules when **AlertCheckType** is **STATIC**.
    // 
    // > The available alert metrics vary based on the value of **AlertGroup**. For information about the mapping between **AlertGroup** and **MetricsKey**, see the supplementary information below this table.
    shared_ptr<string> metricsKey_ {};
    // The alert metric type for application monitoring or browser monitoring alert rules. For more information, see the table below.
    shared_ptr<string> metricsType_ {};
    // The effective time and notification time. Used for compatibility with legacy alert rules.
    shared_ptr<string> notice_ {};
    // The notification mode. Valid values:
    // 
    // - `DIRECTED_MODE`: Directed mode.
    // 
    // - `NORMAL_MODE`: Normal mode.
    shared_ptr<string> notifyMode_ {};
    // The notification policy.
    // 
    // - `null`: Does not associate the alert rule with a notification policy. You can associate them later by creating a notification policy with a matching rule, for example, based on the alert rule\\"s name. When the alert rule is triggered, alert events are sent to the contacts or contact groups specified in the matching notification policy.
    // 
    // - A notification policy ID: Associates the alert rule with a specific notification policy. ARMS automatically adds a matching rule to the policy that uses the alert rule\\"s ID. This ensures that alert events from this rule are always processed by the specified policy.
    shared_ptr<string> notifyStrategy_ {};
    // The PIDs of applications for an application monitoring or browser monitoring alert rule. Specify as a JSON array of strings.
    shared_ptr<string> pids_ {};
    // Required for Prometheus alert rules. Used to filter by cloud service. The specified product name must be valid.
    shared_ptr<string> product_ {};
    // The PromQL expression to evaluate.
    shared_ptr<string> promQL_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tags to add to the alert rule. These are standard Alibaba Cloud resource tags.
    shared_ptr<vector<CreateOrUpdateAlertRuleRequest::Tags>> tags_ {};
    // The language of the response.
    shared_ptr<string> aliyunLang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
