// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUESTGROUPMETRICRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEGROUPMETRICRULESREQUESTGROUPMETRICRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateGroupMetricRulesRequestGroupMetricRulesEscalations.hpp>
#include <vector>
#include <alibabacloud/models/CreateGroupMetricRulesRequestGroupMetricRulesLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateGroupMetricRulesRequestGroupMetricRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGroupMetricRulesRequestGroupMetricRules& obj) { 
      DARABONBA_PTR_TO_JSON(Escalations, escalations_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_TO_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_TO_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGroupMetricRulesRequestGroupMetricRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(ContactGroups, contactGroups_);
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(EffectiveInterval, effectiveInterval_);
      DARABONBA_PTR_FROM_JSON(EmailSubject, emailSubject_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NoDataPolicy, noDataPolicy_);
      DARABONBA_PTR_FROM_JSON(NoEffectiveInterval, noEffectiveInterval_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SilenceTime, silenceTime_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    CreateGroupMetricRulesRequestGroupMetricRules() = default ;
    CreateGroupMetricRulesRequestGroupMetricRules(const CreateGroupMetricRulesRequestGroupMetricRules &) = default ;
    CreateGroupMetricRulesRequestGroupMetricRules(CreateGroupMetricRulesRequestGroupMetricRules &&) = default ;
    CreateGroupMetricRulesRequestGroupMetricRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGroupMetricRulesRequestGroupMetricRules() = default ;
    CreateGroupMetricRulesRequestGroupMetricRules& operator=(const CreateGroupMetricRulesRequestGroupMetricRules &) = default ;
    CreateGroupMetricRulesRequestGroupMetricRules& operator=(CreateGroupMetricRulesRequestGroupMetricRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->escalations_ == nullptr
        && return this->category_ == nullptr && return this->contactGroups_ == nullptr && return this->dimensions_ == nullptr && return this->effectiveInterval_ == nullptr && return this->emailSubject_ == nullptr
        && return this->interval_ == nullptr && return this->labels_ == nullptr && return this->metricName_ == nullptr && return this->namespace_ == nullptr && return this->noDataPolicy_ == nullptr
        && return this->noEffectiveInterval_ == nullptr && return this->options_ == nullptr && return this->period_ == nullptr && return this->ruleId_ == nullptr && return this->ruleName_ == nullptr
        && return this->silenceTime_ == nullptr && return this->webhook_ == nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalations & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalations) };
    inline Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalations escalations() { DARABONBA_PTR_GET(escalations_, Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalations) };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setEscalations(const Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalations & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setEscalations(Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalations && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // contactGroups Field Functions 
    bool hasContactGroups() const { return this->contactGroups_ != nullptr;};
    void deleteContactGroups() { this->contactGroups_ = nullptr;};
    inline string contactGroups() const { DARABONBA_PTR_GET_DEFAULT(contactGroups_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setContactGroups(string contactGroups) { DARABONBA_PTR_SET_VALUE(contactGroups_, contactGroups) };


    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline string dimensions() const { DARABONBA_PTR_GET_DEFAULT(dimensions_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setDimensions(string dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };


    // effectiveInterval Field Functions 
    bool hasEffectiveInterval() const { return this->effectiveInterval_ != nullptr;};
    void deleteEffectiveInterval() { this->effectiveInterval_ = nullptr;};
    inline string effectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(effectiveInterval_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setEffectiveInterval(string effectiveInterval) { DARABONBA_PTR_SET_VALUE(effectiveInterval_, effectiveInterval) };


    // emailSubject Field Functions 
    bool hasEmailSubject() const { return this->emailSubject_ != nullptr;};
    void deleteEmailSubject() { this->emailSubject_ = nullptr;};
    inline string emailSubject() const { DARABONBA_PTR_GET_DEFAULT(emailSubject_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setEmailSubject(string emailSubject) { DARABONBA_PTR_SET_VALUE(emailSubject_, emailSubject) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::CreateGroupMetricRulesRequestGroupMetricRulesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::CreateGroupMetricRulesRequestGroupMetricRulesLabels>) };
    inline vector<Models::CreateGroupMetricRulesRequestGroupMetricRulesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::CreateGroupMetricRulesRequestGroupMetricRulesLabels>) };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setLabels(const vector<Models::CreateGroupMetricRulesRequestGroupMetricRulesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setLabels(vector<Models::CreateGroupMetricRulesRequestGroupMetricRulesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // noDataPolicy Field Functions 
    bool hasNoDataPolicy() const { return this->noDataPolicy_ != nullptr;};
    void deleteNoDataPolicy() { this->noDataPolicy_ = nullptr;};
    inline string noDataPolicy() const { DARABONBA_PTR_GET_DEFAULT(noDataPolicy_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setNoDataPolicy(string noDataPolicy) { DARABONBA_PTR_SET_VALUE(noDataPolicy_, noDataPolicy) };


    // noEffectiveInterval Field Functions 
    bool hasNoEffectiveInterval() const { return this->noEffectiveInterval_ != nullptr;};
    void deleteNoEffectiveInterval() { this->noEffectiveInterval_ = nullptr;};
    inline string noEffectiveInterval() const { DARABONBA_PTR_GET_DEFAULT(noEffectiveInterval_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setNoEffectiveInterval(string noEffectiveInterval) { DARABONBA_PTR_SET_VALUE(noEffectiveInterval_, noEffectiveInterval) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline string period() const { DARABONBA_PTR_GET_DEFAULT(period_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setPeriod(string period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // silenceTime Field Functions 
    bool hasSilenceTime() const { return this->silenceTime_ != nullptr;};
    void deleteSilenceTime() { this->silenceTime_ = nullptr;};
    inline int32_t silenceTime() const { DARABONBA_PTR_GET_DEFAULT(silenceTime_, 0) };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setSilenceTime(int32_t silenceTime) { DARABONBA_PTR_SET_VALUE(silenceTime_, silenceTime) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline CreateGroupMetricRulesRequestGroupMetricRules& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    std::shared_ptr<Models::CreateGroupMetricRulesRequestGroupMetricRulesEscalations> escalations_ = nullptr;
    // The name of the cloud service. Valid values of N: 1 to 200. Valid value:
    // 
    // *   PolarDB: PolarDB
    // *   NewBGPDDoS: Anti-DDoS Pro
    // *   IoTDevice: IoT Platform
    // *   DRDS: Distributed Relational Database Service (DRDS)
    // *   VS: Video Surveillance System
    // *   AMQP: Alibaba Cloud Message Queue for AMQP
    // *   ADS: AnalyticDB
    // *   APIGateway: API Gateway
    // *   InternetSharedBandwidth: EIP Bandwidth Plan
    // *   CDN: Alibaba Cloud Content Delivery Network (CDN)
    // *   CEN: Cloud Enterprise Network (CEN)
    // *   DCDN: Dynamic Route for CDN (DCDN)
    // *   DDoS: Anti-DDoS
    // *   ECS: Elastic Compute Service (ECS)
    // *   DirectMail: Direct Mail
    // *   Elasticsearch: Elasticsearch
    // *   EMR: E-MapReduce (EMR)
    // *   ESS: Auto Scaling
    // *   FunctionCompute: Function Compute
    // *   RealtimeCompute: Realtime Compute for Apache Flink
    // *   GlobalAcceleration: Global Accelerator (GA)
    // *   Hbase: ApsaraDB for HBase
    // *   TSDB: Time Series Database (TSDB)
    // *   IPv6trans: IPv6 Translation Service
    // *   Kafka: Message Queue for Apache Kafka
    // *   Kubernetes: Container Service for Kubernetes (ACK)
    // *   KVstore: ApsaraDB for Redis
    // *   MNS: Message Service (MNS)
    // *   MongoDB: ApsaraDB for MongoDB
    // *   MQ: Message Queue
    // *   NAT: NAT Gateway
    // *   OpenAd: Open Ad
    // *   OpenSearch: Open Search
    // *   OSS: Object Storage Service (OSS)
    // *   PCDN: P2P CDN
    // *   petadata: HybridDB for MySQL
    // *   RDS: ApsaraDB RDS
    // *   SCDN: Secure CDN
    // *   SLB: Server Load Balancer (SLB)
    // *   SLS: Log Service
    // *   VideoLive: ApsaraVideo Live
    // *   VOD: ApsaraVideo VOD
    // *   EIP: Elastic IP Address (EIP)
    // *   VPN: VPN Gateway
    // *   AIRec: Artificial Intelligence Recommendation
    // *   GPDB: AnalyticDB for PostgreSQL
    // *   DBS: Database Backup (DBS)
    // *   SAG: Smart Access Gateway (SAG)
    // *   Memcache: ApsaraDB for Memcache
    // *   IOT_EDGE: Link IoT Edge
    // *   OCS: ApsaraDB for Memcache (previous version)
    // *   VPC: Express Connect
    // *   EHPC: Elastic High Performance Computing (E-HPC)
    // *   MPS: ApsaraVideo Media Processing
    // *   ENS: Edge Node Service (ENS)
    // *   MaxCompute_Prepay: MaxCompute
    // *   IoT_Kubernetes: Edge Application Hosting
    // *   CMS: CloudMonitor
    // *   batchcomputenew: Batch Compute
    // *   HBaseUE: ApsaraDB for HBase Performance-enhanced Edition
    // *   UIS: Ultimate Internet Service (UIS)
    // *   nls: Intelligent Speech Interaction
    // *   ots: Tablestore
    // *   NAS: File Storage NAS
    // *   ECI: Elastic Container Instance (ECI)
    // *   OpenAPI: OpenAPI Explorer
    // *   pvtzpost: Alibaba Cloud DNS PrivateZone
    // *   blinkonk8s: Flink on Kubernetes
    // *   FunctionFlow: Serverless Workflow (SWF)
    // *   SMC: Server Migration Center (SMC)
    // *   ddosbgp: Anti-DDoS Origin
    // *   baas: Blockchain as a Service
    // *   privatelink: PrivateLink
    // *   cds: ApsaraDB for Cassandra
    // *   DDH: Dedicated Host
    // *   RocketMQ: Message Queue for Apache RocketMQ
    // *   ECC: Express Cloud Connect
    // *   hbaseserverless: ApsaraDB for HBase Serverless Edition
    // *   mns_tmp: Message Service
    // *   hdr: Hybrid Disaster Recovery (HDR)
    // *   hbr: Hybrid Backup Recovery (HBR)
    // *   ADB: AnalyticDB for MySQL V3.0
    // *   tag: Tag Service
    // *   GDB: Graph Database
    // *   WAF: Web Application Firewall (WAF)
    // *   hcs_sgw: Cloud Storage Gateway (CSG)
    // *   ipv6gateway: IPv6 Gateway
    // *   RDS_SAR: ApsaraDB Exclusive Host Group
    // *   learn: Machine Learning Platform for AI
    // *   ROS: Resource Orchestration Service (ROS)
    // *   OOS: Operation Orchestration Service (OOS)
    // *   bds: Data Synchronization for HBase
    // *   cfw: Cloud Firewall
    // *   ddosDip: Anti-DDoS Premium
    // *   datahub: DataHub
    // *   hologres: Hologres
    // *   ExpressConnect: Express Connect
    // *   dbfs: Database File System (DBFS)
    // *   clickhouse: ApsaraDB for ClickHouse
    // *   k8s: Container Service for Kubernetes (ACK)
    // *   DTS: Data Transmission Service (DTS)
    // *   AnycastEIP: Anycast Elastic IP Address
    // *   Lindorm: ApsaraDB for Lindorm
    // *   config: Cloud Config
    // *   spark: Databricks DataInsight (DDI)
    // *   serverless: Serverless App Engine (SAE)
    // *   alb: Application Load Balancer (ALB)
    // *   oceanbase: ApsaraDB for OceanBase
    // *   KMS: Key Management Service (KMS)
    // *   lvwang: Content Moderation
    // *   LinkVisual: LinkVisual
    // *   tair: ApsaraDB for Redis Enhanced Edition (Tair)
    // *   dlf: Data Lake Formation (DLF)
    // *   networkmonitor: Site Monitoring
    // *   pnc: Physical Network Change
    // *   AIS: Alibaba Cloud Infrastructure
    // *   cloudgame: Cloud Gaming Platform
    // *   RTC: Real-Time Communication
    // *   cloudbox: CloudBox
    // *   actiontrail: ActionTrail
    // *   cc: Cloud Connector
    // *   disk: Elastic Block Storage (EBS)
    // *   easygene: Genomics Computing Platform
    // *   cloudphone: Elastic Cloud Phone
    // *   BMS: Bare Metal Management Service
    // *   swas: Simple Application Server
    // *   AvailabilityMonitoring: Availability Monitoring of CloudMonitor
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // The alert contact groups. Valid values of N: 1 to 200.
    // 
    // For information about how to obtain alert contact groups, see [DescribeContactGroupList](https://help.aliyun.com/document_detail/114922.html).
    std::shared_ptr<string> contactGroups_ = nullptr;
    // The dimension of the alert rule. Valid values of N: 1 to 200.
    // 
    // Set the value to a set of key-value pairs, for example, `userId:120886317861****` or `instanceId:i-m5e1qg6uo38rztr4****`.
    std::shared_ptr<string> dimensions_ = nullptr;
    // The time period during which the alert rule is effective. Valid values of N: 1 to 200.
    std::shared_ptr<string> effectiveInterval_ = nullptr;
    // The subject of the alert notification email. Valid values of N: 1 to 200.
    std::shared_ptr<string> emailSubject_ = nullptr;
    // The interval at which CloudMonitor checks whether the alert rule is triggered. Valid values of N: 1 to 200.
    // 
    // Unit: seconds. The default value is the lowest frequency at which the metric is polled.
    // 
    // >  We recommend that you set the interval to the data aggregation period. If the interval is shorter than the data aggregation period, alerts cannot be triggered due to insufficient data.
    std::shared_ptr<string> interval_ = nullptr;
    std::shared_ptr<vector<Models::CreateGroupMetricRulesRequestGroupMetricRulesLabels>> labels_ = nullptr;
    // The name of the metric. Valid values of N: 1 to 200.
    // 
    // For information about how to obtain the name of a metric, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> metricName_ = nullptr;
    // The namespace of the cloud service. Valid values of N: 1 to 200.
    // 
    // For information about how to obtain the namespace of a cloud service, see [DescribeMetricMetaList](https://help.aliyun.com/document_detail/98846.html) or [Appendix 1: Metrics](https://help.aliyun.com/document_detail/163515.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The method that is used to handle alerts when no monitoring data is found. Valid values of N: 1 to 200. Valid value:
    // 
    // *   KEEP_LAST_STATE (default value): No operation is performed.
    // *   INSUFFICIENT_DATA: An alert whose content is "Insufficient data" is triggered.
    // *   OK: The alert rule has no active alerts.
    std::shared_ptr<string> noDataPolicy_ = nullptr;
    // The time period during which the alert rule is ineffective. Valid values of N: 1 to 200.
    std::shared_ptr<string> noEffectiveInterval_ = nullptr;
    std::shared_ptr<string> options_ = nullptr;
    // The aggregation period of the metric data. Valid values of N: 1 to 200.
    // 
    // Set the `Period` parameter to an integral multiple of 60. Unit: seconds. Default value: 300.
    std::shared_ptr<string> period_ = nullptr;
    // The ID of the alert rule. Valid values of N: 1 to 200.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the alert rule. Valid values of N: 1 to 200.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The mute period during which new alerts are not sent even if the trigger conditions are met. Valid values of N: 1 to 200.
    // 
    // Unit: seconds. Default value: 86400. Minimum value: 3600.
    std::shared_ptr<int32_t> silenceTime_ = nullptr;
    // The callback URL. Valid values of N: 1 to 200.
    // 
    // The callback URL must be accessible over the Internet. CloudMonitor pushes an alert notification to the specified callback URL by sending an HTTP POST request. Only the HTTP protocol is supported.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
