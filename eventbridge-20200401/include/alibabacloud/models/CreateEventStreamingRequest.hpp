// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BaiLianAgentTransformParameters.hpp>
#include <alibabacloud/models/DashScopeTransformParameters.hpp>
#include <alibabacloud/models/EmbeddingTransformParameters.hpp>
#include <vector>
#include <alibabacloud/models/SourceMySQLParameters.hpp>
#include <alibabacloud/models/SourcePostgreSQLParameters.hpp>
#include <alibabacloud/models/SourceRabbitMQMetaParameters.hpp>
#include <alibabacloud/models/SourceRabbitMQMsgSyncParameters.hpp>
#include <alibabacloud/models/SinkApiDestinationParameters.hpp>
#include <alibabacloud/models/SinkBaiLianParameters.hpp>
#include <alibabacloud/models/SinkDataWorksTriggerParameters.hpp>
#include <alibabacloud/models/SinkHttpsParameters.hpp>
#include <alibabacloud/models/SinkMQTTParameters.hpp>
#include <alibabacloud/models/SinkOSSParameters.hpp>
#include <alibabacloud/models/SinkRabbitMQMetaParameters.hpp>
#include <alibabacloud/models/SinkRabbitMQMsgSyncParameters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_TO_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_TO_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_TO_JSON(Sink, sink_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Transforms, transforms_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventStreamingName, eventStreamingName_);
      DARABONBA_PTR_FROM_JSON(FilterPattern, filterPattern_);
      DARABONBA_PTR_FROM_JSON(RunOptions, runOptions_);
      DARABONBA_PTR_FROM_JSON(Sink, sink_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Transforms, transforms_);
    };
    CreateEventStreamingRequest() = default ;
    CreateEventStreamingRequest(const CreateEventStreamingRequest &) = default ;
    CreateEventStreamingRequest(CreateEventStreamingRequest &&) = default ;
    CreateEventStreamingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequest() = default ;
    CreateEventStreamingRequest& operator=(const CreateEventStreamingRequest &) = default ;
    CreateEventStreamingRequest& operator=(CreateEventStreamingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Transforms : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Transforms& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(BaiLianAgentTransformParameters, baiLianAgentTransformParameters_);
        DARABONBA_PTR_TO_JSON(DashScopeTransformParameters, dashScopeTransformParameters_);
        DARABONBA_PTR_TO_JSON(EmbeddingTransformParameters, embeddingTransformParameters_);
      };
      friend void from_json(const Darabonba::Json& j, Transforms& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(BaiLianAgentTransformParameters, baiLianAgentTransformParameters_);
        DARABONBA_PTR_FROM_JSON(DashScopeTransformParameters, dashScopeTransformParameters_);
        DARABONBA_PTR_FROM_JSON(EmbeddingTransformParameters, embeddingTransformParameters_);
      };
      Transforms() = default ;
      Transforms(const Transforms &) = default ;
      Transforms(Transforms &&) = default ;
      Transforms(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Transforms() = default ;
      Transforms& operator=(const Transforms &) = default ;
      Transforms& operator=(Transforms &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->baiLianAgentTransformParameters_ == nullptr && this->dashScopeTransformParameters_ == nullptr && this->embeddingTransformParameters_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline Transforms& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // baiLianAgentTransformParameters Field Functions 
      bool hasBaiLianAgentTransformParameters() const { return this->baiLianAgentTransformParameters_ != nullptr;};
      void deleteBaiLianAgentTransformParameters() { this->baiLianAgentTransformParameters_ = nullptr;};
      inline const BaiLianAgentTransformParameters & getBaiLianAgentTransformParameters() const { DARABONBA_PTR_GET_CONST(baiLianAgentTransformParameters_, BaiLianAgentTransformParameters) };
      inline BaiLianAgentTransformParameters getBaiLianAgentTransformParameters() { DARABONBA_PTR_GET(baiLianAgentTransformParameters_, BaiLianAgentTransformParameters) };
      inline Transforms& setBaiLianAgentTransformParameters(const BaiLianAgentTransformParameters & baiLianAgentTransformParameters) { DARABONBA_PTR_SET_VALUE(baiLianAgentTransformParameters_, baiLianAgentTransformParameters) };
      inline Transforms& setBaiLianAgentTransformParameters(BaiLianAgentTransformParameters && baiLianAgentTransformParameters) { DARABONBA_PTR_SET_RVALUE(baiLianAgentTransformParameters_, baiLianAgentTransformParameters) };


      // dashScopeTransformParameters Field Functions 
      bool hasDashScopeTransformParameters() const { return this->dashScopeTransformParameters_ != nullptr;};
      void deleteDashScopeTransformParameters() { this->dashScopeTransformParameters_ = nullptr;};
      inline const DashScopeTransformParameters & getDashScopeTransformParameters() const { DARABONBA_PTR_GET_CONST(dashScopeTransformParameters_, DashScopeTransformParameters) };
      inline DashScopeTransformParameters getDashScopeTransformParameters() { DARABONBA_PTR_GET(dashScopeTransformParameters_, DashScopeTransformParameters) };
      inline Transforms& setDashScopeTransformParameters(const DashScopeTransformParameters & dashScopeTransformParameters) { DARABONBA_PTR_SET_VALUE(dashScopeTransformParameters_, dashScopeTransformParameters) };
      inline Transforms& setDashScopeTransformParameters(DashScopeTransformParameters && dashScopeTransformParameters) { DARABONBA_PTR_SET_RVALUE(dashScopeTransformParameters_, dashScopeTransformParameters) };


      // embeddingTransformParameters Field Functions 
      bool hasEmbeddingTransformParameters() const { return this->embeddingTransformParameters_ != nullptr;};
      void deleteEmbeddingTransformParameters() { this->embeddingTransformParameters_ = nullptr;};
      inline const EmbeddingTransformParameters & getEmbeddingTransformParameters() const { DARABONBA_PTR_GET_CONST(embeddingTransformParameters_, EmbeddingTransformParameters) };
      inline EmbeddingTransformParameters getEmbeddingTransformParameters() { DARABONBA_PTR_GET(embeddingTransformParameters_, EmbeddingTransformParameters) };
      inline Transforms& setEmbeddingTransformParameters(const EmbeddingTransformParameters & embeddingTransformParameters) { DARABONBA_PTR_SET_VALUE(embeddingTransformParameters_, embeddingTransformParameters) };
      inline Transforms& setEmbeddingTransformParameters(EmbeddingTransformParameters && embeddingTransformParameters) { DARABONBA_PTR_SET_RVALUE(embeddingTransformParameters_, embeddingTransformParameters) };


    protected:
      shared_ptr<string> arn_ {};
      shared_ptr<BaiLianAgentTransformParameters> baiLianAgentTransformParameters_ {};
      shared_ptr<DashScopeTransformParameters> dashScopeTransformParameters_ {};
      shared_ptr<EmbeddingTransformParameters> embeddingTransformParameters_ {};
    };

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
      shared_ptr<string> key_ {};
      shared_ptr<string> value_ {};
    };

    class Source : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Source& obj) { 
        DARABONBA_PTR_TO_JSON(SourceApacheKafkaParameters, sourceApacheKafkaParameters_);
        DARABONBA_PTR_TO_JSON(SourceApacheRocketMQCheckpointParameters, sourceApacheRocketMQCheckpointParameters_);
        DARABONBA_PTR_TO_JSON(SourceCustomizedKafkaConnectorParameters, sourceCustomizedKafkaConnectorParameters_);
        DARABONBA_PTR_TO_JSON(SourceCustomizedKafkaParameters, sourceCustomizedKafkaParameters_);
        DARABONBA_PTR_TO_JSON(SourceDTSParameters, sourceDTSParameters_);
        DARABONBA_PTR_TO_JSON(SourceEventBusParameters, sourceEventBusParameters_);
        DARABONBA_PTR_TO_JSON(SourceKafkaParameters, sourceKafkaParameters_);
        DARABONBA_PTR_TO_JSON(SourceMNSParameters, sourceMNSParameters_);
        DARABONBA_PTR_TO_JSON(SourceMQTTParameters, sourceMQTTParameters_);
        DARABONBA_PTR_TO_JSON(SourceMySQLParameters, sourceMySQLParameters_);
        DARABONBA_PTR_TO_JSON(SourceOSSParameters, sourceOSSParameters_);
        DARABONBA_PTR_TO_JSON(SourceOpenSourceRabbitMQParameters, sourceOpenSourceRabbitMQParameters_);
        DARABONBA_PTR_TO_JSON(SourcePostgreSQLParameters, sourcePostgreSQLParameters_);
        DARABONBA_PTR_TO_JSON(SourcePrometheusParameters, sourcePrometheusParameters_);
        DARABONBA_PTR_TO_JSON(SourceRabbitMQMetaParameters, sourceRabbitMQMetaParameters_);
        DARABONBA_PTR_TO_JSON(SourceRabbitMQMsgSyncParameters, sourceRabbitMQMsgSyncParameters_);
        DARABONBA_PTR_TO_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
        DARABONBA_PTR_TO_JSON(SourceRocketMQCheckpointParameters, sourceRocketMQCheckpointParameters_);
        DARABONBA_PTR_TO_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
        DARABONBA_PTR_TO_JSON(SourceSLSParameters, sourceSLSParameters_);
      };
      friend void from_json(const Darabonba::Json& j, Source& obj) { 
        DARABONBA_PTR_FROM_JSON(SourceApacheKafkaParameters, sourceApacheKafkaParameters_);
        DARABONBA_PTR_FROM_JSON(SourceApacheRocketMQCheckpointParameters, sourceApacheRocketMQCheckpointParameters_);
        DARABONBA_PTR_FROM_JSON(SourceCustomizedKafkaConnectorParameters, sourceCustomizedKafkaConnectorParameters_);
        DARABONBA_PTR_FROM_JSON(SourceCustomizedKafkaParameters, sourceCustomizedKafkaParameters_);
        DARABONBA_PTR_FROM_JSON(SourceDTSParameters, sourceDTSParameters_);
        DARABONBA_PTR_FROM_JSON(SourceEventBusParameters, sourceEventBusParameters_);
        DARABONBA_PTR_FROM_JSON(SourceKafkaParameters, sourceKafkaParameters_);
        DARABONBA_PTR_FROM_JSON(SourceMNSParameters, sourceMNSParameters_);
        DARABONBA_PTR_FROM_JSON(SourceMQTTParameters, sourceMQTTParameters_);
        DARABONBA_PTR_FROM_JSON(SourceMySQLParameters, sourceMySQLParameters_);
        DARABONBA_PTR_FROM_JSON(SourceOSSParameters, sourceOSSParameters_);
        DARABONBA_PTR_FROM_JSON(SourceOpenSourceRabbitMQParameters, sourceOpenSourceRabbitMQParameters_);
        DARABONBA_PTR_FROM_JSON(SourcePostgreSQLParameters, sourcePostgreSQLParameters_);
        DARABONBA_PTR_FROM_JSON(SourcePrometheusParameters, sourcePrometheusParameters_);
        DARABONBA_PTR_FROM_JSON(SourceRabbitMQMetaParameters, sourceRabbitMQMetaParameters_);
        DARABONBA_PTR_FROM_JSON(SourceRabbitMQMsgSyncParameters, sourceRabbitMQMsgSyncParameters_);
        DARABONBA_PTR_FROM_JSON(SourceRabbitMQParameters, sourceRabbitMQParameters_);
        DARABONBA_PTR_FROM_JSON(SourceRocketMQCheckpointParameters, sourceRocketMQCheckpointParameters_);
        DARABONBA_PTR_FROM_JSON(SourceRocketMQParameters, sourceRocketMQParameters_);
        DARABONBA_PTR_FROM_JSON(SourceSLSParameters, sourceSLSParameters_);
      };
      Source() = default ;
      Source(const Source &) = default ;
      Source(Source &&) = default ;
      Source(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Source() = default ;
      Source& operator=(const Source &) = default ;
      Source& operator=(Source &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SourceSLSParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceSLSParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumePosition, consumePosition_);
          DARABONBA_PTR_TO_JSON(LogStore, logStore_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceSLSParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumePosition, consumePosition_);
          DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        };
        SourceSLSParameters() = default ;
        SourceSLSParameters(const SourceSLSParameters &) = default ;
        SourceSLSParameters(SourceSLSParameters &&) = default ;
        SourceSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceSLSParameters() = default ;
        SourceSLSParameters& operator=(const SourceSLSParameters &) = default ;
        SourceSLSParameters& operator=(SourceSLSParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumePosition_ == nullptr
        && this->logStore_ == nullptr && this->project_ == nullptr && this->roleName_ == nullptr; };
        // consumePosition Field Functions 
        bool hasConsumePosition() const { return this->consumePosition_ != nullptr;};
        void deleteConsumePosition() { this->consumePosition_ = nullptr;};
        inline string getConsumePosition() const { DARABONBA_PTR_GET_DEFAULT(consumePosition_, "") };
        inline SourceSLSParameters& setConsumePosition(string consumePosition) { DARABONBA_PTR_SET_VALUE(consumePosition_, consumePosition) };


        // logStore Field Functions 
        bool hasLogStore() const { return this->logStore_ != nullptr;};
        void deleteLogStore() { this->logStore_ = nullptr;};
        inline string getLogStore() const { DARABONBA_PTR_GET_DEFAULT(logStore_, "") };
        inline SourceSLSParameters& setLogStore(string logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
        inline SourceSLSParameters& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline SourceSLSParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      protected:
        // The consumer offset. The value begin specifies the earliest offset. The value end specifies the latest offset. You can also specify a time in seconds to start consumption.
        shared_ptr<string> consumePosition_ {};
        // The Simple Log Service Logstore.
        shared_ptr<string> logStore_ {};
        // The Simple Log Service project.
        shared_ptr<string> project_ {};
        // The role name. If you want to authorize EventBridge to use this role to read logs in Simple Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the Resource Access Management (RAM) console.
        shared_ptr<string> roleName_ {};
      };

      class SourceRocketMQParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceRocketMQParameters& obj) { 
          DARABONBA_PTR_TO_JSON(AuthType, authType_);
          DARABONBA_PTR_TO_JSON(BodyDataType, bodyDataType_);
          DARABONBA_PTR_TO_JSON(FilterSql, filterSql_);
          DARABONBA_PTR_TO_JSON(FilterType, filterType_);
          DARABONBA_PTR_TO_JSON(GroupID, groupID_);
          DARABONBA_PTR_TO_JSON(InstanceEndpoint, instanceEndpoint_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceNetwork, instanceNetwork_);
          DARABONBA_PTR_TO_JSON(InstancePassword, instancePassword_);
          DARABONBA_PTR_TO_JSON(InstanceSecurityGroupId, instanceSecurityGroupId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InstanceUsername, instanceUsername_);
          DARABONBA_PTR_TO_JSON(InstanceVSwitchIds, instanceVSwitchIds_);
          DARABONBA_PTR_TO_JSON(InstanceVpcId, instanceVpcId_);
          DARABONBA_PTR_TO_JSON(Network, network_);
          DARABONBA_PTR_TO_JSON(Offset, offset_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(Tag, tag_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceRocketMQParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthType, authType_);
          DARABONBA_PTR_FROM_JSON(BodyDataType, bodyDataType_);
          DARABONBA_PTR_FROM_JSON(FilterSql, filterSql_);
          DARABONBA_PTR_FROM_JSON(FilterType, filterType_);
          DARABONBA_PTR_FROM_JSON(GroupID, groupID_);
          DARABONBA_PTR_FROM_JSON(InstanceEndpoint, instanceEndpoint_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceNetwork, instanceNetwork_);
          DARABONBA_PTR_FROM_JSON(InstancePassword, instancePassword_);
          DARABONBA_PTR_FROM_JSON(InstanceSecurityGroupId, instanceSecurityGroupId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InstanceUsername, instanceUsername_);
          DARABONBA_PTR_FROM_JSON(InstanceVSwitchIds, instanceVSwitchIds_);
          DARABONBA_PTR_FROM_JSON(InstanceVpcId, instanceVpcId_);
          DARABONBA_PTR_FROM_JSON(Network, network_);
          DARABONBA_PTR_FROM_JSON(Offset, offset_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SourceRocketMQParameters() = default ;
        SourceRocketMQParameters(const SourceRocketMQParameters &) = default ;
        SourceRocketMQParameters(SourceRocketMQParameters &&) = default ;
        SourceRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceRocketMQParameters() = default ;
        SourceRocketMQParameters& operator=(const SourceRocketMQParameters &) = default ;
        SourceRocketMQParameters& operator=(SourceRocketMQParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authType_ == nullptr
        && this->bodyDataType_ == nullptr && this->filterSql_ == nullptr && this->filterType_ == nullptr && this->groupID_ == nullptr && this->instanceEndpoint_ == nullptr
        && this->instanceId_ == nullptr && this->instanceNetwork_ == nullptr && this->instancePassword_ == nullptr && this->instanceSecurityGroupId_ == nullptr && this->instanceType_ == nullptr
        && this->instanceUsername_ == nullptr && this->instanceVSwitchIds_ == nullptr && this->instanceVpcId_ == nullptr && this->network_ == nullptr && this->offset_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr && this->tag_ == nullptr && this->timestamp_ == nullptr && this->topic_ == nullptr
        && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline SourceRocketMQParameters& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // bodyDataType Field Functions 
        bool hasBodyDataType() const { return this->bodyDataType_ != nullptr;};
        void deleteBodyDataType() { this->bodyDataType_ = nullptr;};
        inline string getBodyDataType() const { DARABONBA_PTR_GET_DEFAULT(bodyDataType_, "") };
        inline SourceRocketMQParameters& setBodyDataType(string bodyDataType) { DARABONBA_PTR_SET_VALUE(bodyDataType_, bodyDataType) };


        // filterSql Field Functions 
        bool hasFilterSql() const { return this->filterSql_ != nullptr;};
        void deleteFilterSql() { this->filterSql_ = nullptr;};
        inline string getFilterSql() const { DARABONBA_PTR_GET_DEFAULT(filterSql_, "") };
        inline SourceRocketMQParameters& setFilterSql(string filterSql) { DARABONBA_PTR_SET_VALUE(filterSql_, filterSql) };


        // filterType Field Functions 
        bool hasFilterType() const { return this->filterType_ != nullptr;};
        void deleteFilterType() { this->filterType_ = nullptr;};
        inline string getFilterType() const { DARABONBA_PTR_GET_DEFAULT(filterType_, "") };
        inline SourceRocketMQParameters& setFilterType(string filterType) { DARABONBA_PTR_SET_VALUE(filterType_, filterType) };


        // groupID Field Functions 
        bool hasGroupID() const { return this->groupID_ != nullptr;};
        void deleteGroupID() { this->groupID_ = nullptr;};
        inline string getGroupID() const { DARABONBA_PTR_GET_DEFAULT(groupID_, "") };
        inline SourceRocketMQParameters& setGroupID(string groupID) { DARABONBA_PTR_SET_VALUE(groupID_, groupID) };


        // instanceEndpoint Field Functions 
        bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
        void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
        inline string getInstanceEndpoint() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpoint_, "") };
        inline SourceRocketMQParameters& setInstanceEndpoint(string instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SourceRocketMQParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceNetwork Field Functions 
        bool hasInstanceNetwork() const { return this->instanceNetwork_ != nullptr;};
        void deleteInstanceNetwork() { this->instanceNetwork_ = nullptr;};
        inline string getInstanceNetwork() const { DARABONBA_PTR_GET_DEFAULT(instanceNetwork_, "") };
        inline SourceRocketMQParameters& setInstanceNetwork(string instanceNetwork) { DARABONBA_PTR_SET_VALUE(instanceNetwork_, instanceNetwork) };


        // instancePassword Field Functions 
        bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
        void deleteInstancePassword() { this->instancePassword_ = nullptr;};
        inline string getInstancePassword() const { DARABONBA_PTR_GET_DEFAULT(instancePassword_, "") };
        inline SourceRocketMQParameters& setInstancePassword(string instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };


        // instanceSecurityGroupId Field Functions 
        bool hasInstanceSecurityGroupId() const { return this->instanceSecurityGroupId_ != nullptr;};
        void deleteInstanceSecurityGroupId() { this->instanceSecurityGroupId_ = nullptr;};
        inline string getInstanceSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceSecurityGroupId_, "") };
        inline SourceRocketMQParameters& setInstanceSecurityGroupId(string instanceSecurityGroupId) { DARABONBA_PTR_SET_VALUE(instanceSecurityGroupId_, instanceSecurityGroupId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SourceRocketMQParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // instanceUsername Field Functions 
        bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
        void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
        inline string getInstanceUsername() const { DARABONBA_PTR_GET_DEFAULT(instanceUsername_, "") };
        inline SourceRocketMQParameters& setInstanceUsername(string instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };


        // instanceVSwitchIds Field Functions 
        bool hasInstanceVSwitchIds() const { return this->instanceVSwitchIds_ != nullptr;};
        void deleteInstanceVSwitchIds() { this->instanceVSwitchIds_ = nullptr;};
        inline string getInstanceVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(instanceVSwitchIds_, "") };
        inline SourceRocketMQParameters& setInstanceVSwitchIds(string instanceVSwitchIds) { DARABONBA_PTR_SET_VALUE(instanceVSwitchIds_, instanceVSwitchIds) };


        // instanceVpcId Field Functions 
        bool hasInstanceVpcId() const { return this->instanceVpcId_ != nullptr;};
        void deleteInstanceVpcId() { this->instanceVpcId_ = nullptr;};
        inline string getInstanceVpcId() const { DARABONBA_PTR_GET_DEFAULT(instanceVpcId_, "") };
        inline SourceRocketMQParameters& setInstanceVpcId(string instanceVpcId) { DARABONBA_PTR_SET_VALUE(instanceVpcId_, instanceVpcId) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
        inline SourceRocketMQParameters& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


        // offset Field Functions 
        bool hasOffset() const { return this->offset_ != nullptr;};
        void deleteOffset() { this->offset_ = nullptr;};
        inline string getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, "") };
        inline SourceRocketMQParameters& setOffset(string offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SourceRocketMQParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SourceRocketMQParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
        inline SourceRocketMQParameters& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline SourceRocketMQParameters& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline SourceRocketMQParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
        inline SourceRocketMQParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SourceRocketMQParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The authentication method.
        shared_ptr<string> authType_ {};
        shared_ptr<string> bodyDataType_ {};
        // The SQL statement that you want to use to filter messages.
        shared_ptr<string> filterSql_ {};
        // The method that you want to use to filter messages.
        shared_ptr<string> filterType_ {};
        // The ID of the consumer group on the ApsaraMQ for RocketMQ instance.
        shared_ptr<string> groupID_ {};
        // The endpoint that you want to use to access the ApsaraMQ for RocketMQ instance.
        shared_ptr<string> instanceEndpoint_ {};
        // The ID of the ApsaraMQ for RocketMQ instance.
        shared_ptr<string> instanceId_ {};
        // The network type. Valid values:
        // 
        // *   PublicNetwork
        // *   PrivateNetwork
        shared_ptr<string> instanceNetwork_ {};
        // The password that you want to use to access the ApsaraMQ for RocketMQ instance.
        shared_ptr<string> instancePassword_ {};
        // The ID of the security group to which the ApsaraMQ for RocketMQ instance belongs.
        shared_ptr<string> instanceSecurityGroupId_ {};
        // The type of the ApsaraMQ for RocketMQ instance.
        shared_ptr<string> instanceType_ {};
        // The username that you want to use to access the ApsaraMQ for RocketMQ instance.
        shared_ptr<string> instanceUsername_ {};
        // The ID of the vSwitch with which the ApsaraMQ for RocketMQ instance is associated.
        shared_ptr<string> instanceVSwitchIds_ {};
        // The ID of the VPC to which the ApsaraMQ for RocketMQ instance belongs.
        shared_ptr<string> instanceVpcId_ {};
        // The network type. Valid values: PublicNetwork and PrivateNetwork.
        shared_ptr<string> network_ {};
        // The offset from which messages are consumed. Valid values:
        // 
        // *   CONSUME_FROM_LAST_OFFSET: Messages are consumed from the latest offset.
        // *   CONSUME_FROM_FIRST_OFFSET: Messages are consumed from the earliest offset.
        // *   CONSUME_FROM_TIMESTAMP: Messages are consumed from the offset at the specified point in time.
        // 
        // Default value: CONSUME_FROM_LAST_OFFSET.
        shared_ptr<string> offset_ {};
        // The ID of the region where the ApsaraMQ for RocketMQ instance resides.
        shared_ptr<string> regionId_ {};
        // The security group ID of the cross-border task.
        shared_ptr<string> securityGroupId_ {};
        // The tag that you want to use to filter messages.
        shared_ptr<string> tag_ {};
        // The timestamp that indicates the time from which messages are consumed. This parameter is valid only if you set Offset to CONSUME_FROM_TIMESTAMP.
        shared_ptr<int64_t> timestamp_ {};
        // The name of the topic on the ApsaraMQ for RocketMQ instance.
        shared_ptr<string> topic_ {};
        // The vSwitch ID of the cross-border task.
        shared_ptr<string> vSwitchIds_ {};
        // The VPC ID of the cross-border task.
        shared_ptr<string> vpcId_ {};
      };

      class SourceRocketMQCheckpointParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceRocketMQCheckpointParameters& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Topics, topics_);
        };
        friend void from_json(const Darabonba::Json& j, SourceRocketMQCheckpointParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Topics, topics_);
        };
        SourceRocketMQCheckpointParameters() = default ;
        SourceRocketMQCheckpointParameters(const SourceRocketMQCheckpointParameters &) = default ;
        SourceRocketMQCheckpointParameters(SourceRocketMQCheckpointParameters &&) = default ;
        SourceRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceRocketMQCheckpointParameters() = default ;
        SourceRocketMQCheckpointParameters& operator=(const SourceRocketMQCheckpointParameters &) = default ;
        SourceRocketMQCheckpointParameters& operator=(SourceRocketMQCheckpointParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->instanceType_ == nullptr && this->regionId_ == nullptr && this->topics_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SourceRocketMQCheckpointParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SourceRocketMQCheckpointParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SourceRocketMQCheckpointParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // topics Field Functions 
        bool hasTopics() const { return this->topics_ != nullptr;};
        void deleteTopics() { this->topics_ = nullptr;};
        inline const vector<string> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
        inline vector<string> getTopics() { DARABONBA_PTR_GET(topics_, vector<string>) };
        inline SourceRocketMQCheckpointParameters& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
        inline SourceRocketMQCheckpointParameters& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


      protected:
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<vector<string>> topics_ {};
      };

      class SourceRabbitMQParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceRabbitMQParameters& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceRabbitMQParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
        };
        SourceRabbitMQParameters() = default ;
        SourceRabbitMQParameters(const SourceRabbitMQParameters &) = default ;
        SourceRabbitMQParameters(SourceRabbitMQParameters &&) = default ;
        SourceRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceRabbitMQParameters() = default ;
        SourceRabbitMQParameters& operator=(const SourceRabbitMQParameters &) = default ;
        SourceRabbitMQParameters& operator=(SourceRabbitMQParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->queueName_ == nullptr && this->regionId_ == nullptr && this->virtualHostName_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SourceRabbitMQParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline SourceRabbitMQParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SourceRabbitMQParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // virtualHostName Field Functions 
        bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
        void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
        inline string getVirtualHostName() const { DARABONBA_PTR_GET_DEFAULT(virtualHostName_, "") };
        inline SourceRabbitMQParameters& setVirtualHostName(string virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };


      protected:
        // The ID of the ApsaraMQ for RabbitMQ instance.
        shared_ptr<string> instanceId_ {};
        // The name of the queue on the ApsaraMQ for RabbitMQ instance.
        shared_ptr<string> queueName_ {};
        // The ID of the region where the ApsaraMQ for RabbitMQ instance resides. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/62010.html) operation to query the most recent region list.
        shared_ptr<string> regionId_ {};
        // The name of the vhost to which the ApsaraMQ for RabbitMQ instance belongs.
        shared_ptr<string> virtualHostName_ {};
      };

      class SourcePrometheusParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourcePrometheusParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(ExternalLabels, externalLabels_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        };
        friend void from_json(const Darabonba::Json& j, SourcePrometheusParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(ExternalLabels, externalLabels_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        };
        SourcePrometheusParameters() = default ;
        SourcePrometheusParameters(const SourcePrometheusParameters &) = default ;
        SourcePrometheusParameters(SourcePrometheusParameters &&) = default ;
        SourcePrometheusParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourcePrometheusParameters() = default ;
        SourcePrometheusParameters& operator=(const SourcePrometheusParameters &) = default ;
        SourcePrometheusParameters& operator=(SourcePrometheusParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->dataType_ == nullptr && this->externalLabels_ == nullptr && this->labels_ == nullptr && this->regionId_ == nullptr && this->roleName_ == nullptr; };
        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline SourcePrometheusParameters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline SourcePrometheusParameters& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // externalLabels Field Functions 
        bool hasExternalLabels() const { return this->externalLabels_ != nullptr;};
        void deleteExternalLabels() { this->externalLabels_ = nullptr;};
        inline string getExternalLabels() const { DARABONBA_PTR_GET_DEFAULT(externalLabels_, "") };
        inline SourcePrometheusParameters& setExternalLabels(string externalLabels) { DARABONBA_PTR_SET_VALUE(externalLabels_, externalLabels) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline SourcePrometheusParameters& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SourcePrometheusParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline SourcePrometheusParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      protected:
        // The cluster ID.
        shared_ptr<string> clusterId_ {};
        // The data type.
        shared_ptr<string> dataType_ {};
        shared_ptr<string> externalLabels_ {};
        // The labels.
        shared_ptr<string> labels_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> roleName_ {};
      };

      class SourceOpenSourceRabbitMQParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceOpenSourceRabbitMQParameters& obj) { 
          DARABONBA_PTR_TO_JSON(AuthType, authType_);
          DARABONBA_PTR_TO_JSON(BodyDataType, bodyDataType_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(Username, username_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceOpenSourceRabbitMQParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthType, authType_);
          DARABONBA_PTR_FROM_JSON(BodyDataType, bodyDataType_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SourceOpenSourceRabbitMQParameters() = default ;
        SourceOpenSourceRabbitMQParameters(const SourceOpenSourceRabbitMQParameters &) = default ;
        SourceOpenSourceRabbitMQParameters(SourceOpenSourceRabbitMQParameters &&) = default ;
        SourceOpenSourceRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceOpenSourceRabbitMQParameters() = default ;
        SourceOpenSourceRabbitMQParameters& operator=(const SourceOpenSourceRabbitMQParameters &) = default ;
        SourceOpenSourceRabbitMQParameters& operator=(SourceOpenSourceRabbitMQParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authType_ == nullptr
        && this->bodyDataType_ == nullptr && this->endpoint_ == nullptr && this->networkType_ == nullptr && this->password_ == nullptr && this->queueName_ == nullptr
        && this->securityGroupId_ == nullptr && this->username_ == nullptr && this->vSwitchIds_ == nullptr && this->virtualHostName_ == nullptr && this->vpcId_ == nullptr; };
        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline SourceOpenSourceRabbitMQParameters& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // bodyDataType Field Functions 
        bool hasBodyDataType() const { return this->bodyDataType_ != nullptr;};
        void deleteBodyDataType() { this->bodyDataType_ = nullptr;};
        inline string getBodyDataType() const { DARABONBA_PTR_GET_DEFAULT(bodyDataType_, "") };
        inline SourceOpenSourceRabbitMQParameters& setBodyDataType(string bodyDataType) { DARABONBA_PTR_SET_VALUE(bodyDataType_, bodyDataType) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline SourceOpenSourceRabbitMQParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SourceOpenSourceRabbitMQParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline SourceOpenSourceRabbitMQParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline SourceOpenSourceRabbitMQParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SourceOpenSourceRabbitMQParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline SourceOpenSourceRabbitMQParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
        inline SourceOpenSourceRabbitMQParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


        // virtualHostName Field Functions 
        bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
        void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
        inline string getVirtualHostName() const { DARABONBA_PTR_GET_DEFAULT(virtualHostName_, "") };
        inline SourceOpenSourceRabbitMQParameters& setVirtualHostName(string virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SourceOpenSourceRabbitMQParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<string> authType_ {};
        shared_ptr<string> bodyDataType_ {};
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> password_ {};
        shared_ptr<string> queueName_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<string> username_ {};
        shared_ptr<string> vSwitchIds_ {};
        shared_ptr<string> virtualHostName_ {};
        shared_ptr<string> vpcId_ {};
      };

      class SourceOSSParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceOSSParameters& obj) { 
          DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
          DARABONBA_PTR_TO_JSON(Delimiter, delimiter_);
          DARABONBA_PTR_TO_JSON(LoadFormat, loadFormat_);
          DARABONBA_PTR_TO_JSON(LoadMode, loadMode_);
          DARABONBA_PTR_TO_JSON(Prefix, prefix_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceOSSParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
          DARABONBA_PTR_FROM_JSON(Delimiter, delimiter_);
          DARABONBA_PTR_FROM_JSON(LoadFormat, loadFormat_);
          DARABONBA_PTR_FROM_JSON(LoadMode, loadMode_);
          DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        };
        SourceOSSParameters() = default ;
        SourceOSSParameters(const SourceOSSParameters &) = default ;
        SourceOSSParameters(SourceOSSParameters &&) = default ;
        SourceOSSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceOSSParameters() = default ;
        SourceOSSParameters& operator=(const SourceOSSParameters &) = default ;
        SourceOSSParameters& operator=(SourceOSSParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->delimiter_ == nullptr && this->loadFormat_ == nullptr && this->loadMode_ == nullptr && this->prefix_ == nullptr && this->roleName_ == nullptr; };
        // bucketName Field Functions 
        bool hasBucketName() const { return this->bucketName_ != nullptr;};
        void deleteBucketName() { this->bucketName_ = nullptr;};
        inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
        inline SourceOSSParameters& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


        // delimiter Field Functions 
        bool hasDelimiter() const { return this->delimiter_ != nullptr;};
        void deleteDelimiter() { this->delimiter_ = nullptr;};
        inline string getDelimiter() const { DARABONBA_PTR_GET_DEFAULT(delimiter_, "") };
        inline SourceOSSParameters& setDelimiter(string delimiter) { DARABONBA_PTR_SET_VALUE(delimiter_, delimiter) };


        // loadFormat Field Functions 
        bool hasLoadFormat() const { return this->loadFormat_ != nullptr;};
        void deleteLoadFormat() { this->loadFormat_ = nullptr;};
        inline string getLoadFormat() const { DARABONBA_PTR_GET_DEFAULT(loadFormat_, "") };
        inline SourceOSSParameters& setLoadFormat(string loadFormat) { DARABONBA_PTR_SET_VALUE(loadFormat_, loadFormat) };


        // loadMode Field Functions 
        bool hasLoadMode() const { return this->loadMode_ != nullptr;};
        void deleteLoadMode() { this->loadMode_ = nullptr;};
        inline string getLoadMode() const { DARABONBA_PTR_GET_DEFAULT(loadMode_, "") };
        inline SourceOSSParameters& setLoadMode(string loadMode) { DARABONBA_PTR_SET_VALUE(loadMode_, loadMode) };


        // prefix Field Functions 
        bool hasPrefix() const { return this->prefix_ != nullptr;};
        void deletePrefix() { this->prefix_ = nullptr;};
        inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
        inline SourceOSSParameters& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline string getRoleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
        inline SourceOSSParameters& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


      protected:
        shared_ptr<string> bucketName_ {};
        shared_ptr<string> delimiter_ {};
        shared_ptr<string> loadFormat_ {};
        shared_ptr<string> loadMode_ {};
        shared_ptr<string> prefix_ {};
        shared_ptr<string> roleName_ {};
      };

      class SourceMQTTParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceMQTTParameters& obj) { 
          DARABONBA_PTR_TO_JSON(BodyDataType, bodyDataType_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
        };
        friend void from_json(const Darabonba::Json& j, SourceMQTTParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(BodyDataType, bodyDataType_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
        };
        SourceMQTTParameters() = default ;
        SourceMQTTParameters(const SourceMQTTParameters &) = default ;
        SourceMQTTParameters(SourceMQTTParameters &&) = default ;
        SourceMQTTParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceMQTTParameters() = default ;
        SourceMQTTParameters& operator=(const SourceMQTTParameters &) = default ;
        SourceMQTTParameters& operator=(SourceMQTTParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bodyDataType_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->topic_ == nullptr; };
        // bodyDataType Field Functions 
        bool hasBodyDataType() const { return this->bodyDataType_ != nullptr;};
        void deleteBodyDataType() { this->bodyDataType_ = nullptr;};
        inline string getBodyDataType() const { DARABONBA_PTR_GET_DEFAULT(bodyDataType_, "") };
        inline SourceMQTTParameters& setBodyDataType(string bodyDataType) { DARABONBA_PTR_SET_VALUE(bodyDataType_, bodyDataType) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SourceMQTTParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SourceMQTTParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline SourceMQTTParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


      protected:
        shared_ptr<string> bodyDataType_ {};
        // The ID of the ApsaraMQ for MQTT instance.
        shared_ptr<string> instanceId_ {};
        // The ID of the region where the ApsaraMQ for MQTT instance resides.
        shared_ptr<string> regionId_ {};
        // The topic from which messages are sent.
        shared_ptr<string> topic_ {};
      };

      class SourceMNSParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceMNSParameters& obj) { 
          DARABONBA_PTR_TO_JSON(IsBase64Decode, isBase64Decode_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceMNSParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(IsBase64Decode, isBase64Decode_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        };
        SourceMNSParameters() = default ;
        SourceMNSParameters(const SourceMNSParameters &) = default ;
        SourceMNSParameters(SourceMNSParameters &&) = default ;
        SourceMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceMNSParameters() = default ;
        SourceMNSParameters& operator=(const SourceMNSParameters &) = default ;
        SourceMNSParameters& operator=(SourceMNSParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->isBase64Decode_ == nullptr
        && this->queueName_ == nullptr && this->regionId_ == nullptr; };
        // isBase64Decode Field Functions 
        bool hasIsBase64Decode() const { return this->isBase64Decode_ != nullptr;};
        void deleteIsBase64Decode() { this->isBase64Decode_ = nullptr;};
        inline bool getIsBase64Decode() const { DARABONBA_PTR_GET_DEFAULT(isBase64Decode_, false) };
        inline SourceMNSParameters& setIsBase64Decode(bool isBase64Decode) { DARABONBA_PTR_SET_VALUE(isBase64Decode_, isBase64Decode) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline SourceMNSParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SourceMNSParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      protected:
        // Specifies whether to enable Base64 encoding. Default value: true.
        shared_ptr<bool> isBase64Decode_ {};
        // The queue name.
        shared_ptr<string> queueName_ {};
        // The ID of the region where the MNS queue resides.
        shared_ptr<string> regionId_ {};
      };

      class SourceKafkaParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceKafkaParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumerGroup, consumerGroup_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Network, network_);
          DARABONBA_PTR_TO_JSON(OffsetReset, offsetReset_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(ValueDataType, valueDataType_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceKafkaParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumerGroup, consumerGroup_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Network, network_);
          DARABONBA_PTR_FROM_JSON(OffsetReset, offsetReset_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(ValueDataType, valueDataType_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SourceKafkaParameters() = default ;
        SourceKafkaParameters(const SourceKafkaParameters &) = default ;
        SourceKafkaParameters(SourceKafkaParameters &&) = default ;
        SourceKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceKafkaParameters() = default ;
        SourceKafkaParameters& operator=(const SourceKafkaParameters &) = default ;
        SourceKafkaParameters& operator=(SourceKafkaParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->consumerGroup_ == nullptr
        && this->instanceId_ == nullptr && this->network_ == nullptr && this->offsetReset_ == nullptr && this->regionId_ == nullptr && this->securityGroupId_ == nullptr
        && this->topic_ == nullptr && this->vSwitchIds_ == nullptr && this->valueDataType_ == nullptr && this->vpcId_ == nullptr; };
        // consumerGroup Field Functions 
        bool hasConsumerGroup() const { return this->consumerGroup_ != nullptr;};
        void deleteConsumerGroup() { this->consumerGroup_ = nullptr;};
        inline string getConsumerGroup() const { DARABONBA_PTR_GET_DEFAULT(consumerGroup_, "") };
        inline SourceKafkaParameters& setConsumerGroup(string consumerGroup) { DARABONBA_PTR_SET_VALUE(consumerGroup_, consumerGroup) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SourceKafkaParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
        inline SourceKafkaParameters& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


        // offsetReset Field Functions 
        bool hasOffsetReset() const { return this->offsetReset_ != nullptr;};
        void deleteOffsetReset() { this->offsetReset_ = nullptr;};
        inline string getOffsetReset() const { DARABONBA_PTR_GET_DEFAULT(offsetReset_, "") };
        inline SourceKafkaParameters& setOffsetReset(string offsetReset) { DARABONBA_PTR_SET_VALUE(offsetReset_, offsetReset) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SourceKafkaParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SourceKafkaParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline SourceKafkaParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
        inline SourceKafkaParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


        // valueDataType Field Functions 
        bool hasValueDataType() const { return this->valueDataType_ != nullptr;};
        void deleteValueDataType() { this->valueDataType_ = nullptr;};
        inline string getValueDataType() const { DARABONBA_PTR_GET_DEFAULT(valueDataType_, "") };
        inline SourceKafkaParameters& setValueDataType(string valueDataType) { DARABONBA_PTR_SET_VALUE(valueDataType_, valueDataType) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SourceKafkaParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The group ID of the consumer that subscribes to the topic.
        shared_ptr<string> consumerGroup_ {};
        // The ID of the ApsaraMQ for Kafka instance.
        shared_ptr<string> instanceId_ {};
        // The network type. Default value: Default. The value PublicNetwork specifies a virtual private cloud (VPC).
        shared_ptr<string> network_ {};
        // The offset from which messages are consumed.
        shared_ptr<string> offsetReset_ {};
        // The ID of the region where the ApsaraMQ for Kafka instance resides.
        shared_ptr<string> regionId_ {};
        // The ID of the security group to which the ApsaraMQ for Kafka instance belongs.
        shared_ptr<string> securityGroupId_ {};
        // The name of the topic on the ApsaraMQ for Kafka instance.
        shared_ptr<string> topic_ {};
        // The ID of the vSwitch with which the ApsaraMQ for Kafka instance is associated.
        shared_ptr<string> vSwitchIds_ {};
        shared_ptr<string> valueDataType_ {};
        // The ID of the VPC to which the ApsaraMQ for Kafka instance belongs.
        shared_ptr<string> vpcId_ {};
      };

      class SourceEventBusParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceEventBusParameters& obj) { 
          DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_TO_JSON(EventRuleName, eventRuleName_);
        };
        friend void from_json(const Darabonba::Json& j, SourceEventBusParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
          DARABONBA_PTR_FROM_JSON(EventRuleName, eventRuleName_);
        };
        SourceEventBusParameters() = default ;
        SourceEventBusParameters(const SourceEventBusParameters &) = default ;
        SourceEventBusParameters(SourceEventBusParameters &&) = default ;
        SourceEventBusParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceEventBusParameters() = default ;
        SourceEventBusParameters& operator=(const SourceEventBusParameters &) = default ;
        SourceEventBusParameters& operator=(SourceEventBusParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->eventBusName_ == nullptr
        && this->eventRuleName_ == nullptr; };
        // eventBusName Field Functions 
        bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
        void deleteEventBusName() { this->eventBusName_ = nullptr;};
        inline string getEventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
        inline SourceEventBusParameters& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


        // eventRuleName Field Functions 
        bool hasEventRuleName() const { return this->eventRuleName_ != nullptr;};
        void deleteEventRuleName() { this->eventRuleName_ = nullptr;};
        inline string getEventRuleName() const { DARABONBA_PTR_GET_DEFAULT(eventRuleName_, "") };
        inline SourceEventBusParameters& setEventRuleName(string eventRuleName) { DARABONBA_PTR_SET_VALUE(eventRuleName_, eventRuleName) };


      protected:
        shared_ptr<string> eventBusName_ {};
        shared_ptr<string> eventRuleName_ {};
      };

      class SourceDTSParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceDTSParameters& obj) { 
          DARABONBA_PTR_TO_JSON(BrokerUrl, brokerUrl_);
          DARABONBA_PTR_TO_JSON(InitCheckPoint, initCheckPoint_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(Sid, sid_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, SourceDTSParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(BrokerUrl, brokerUrl_);
          DARABONBA_PTR_FROM_JSON(InitCheckPoint, initCheckPoint_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(Sid, sid_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        SourceDTSParameters() = default ;
        SourceDTSParameters(const SourceDTSParameters &) = default ;
        SourceDTSParameters(SourceDTSParameters &&) = default ;
        SourceDTSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceDTSParameters() = default ;
        SourceDTSParameters& operator=(const SourceDTSParameters &) = default ;
        SourceDTSParameters& operator=(SourceDTSParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->brokerUrl_ == nullptr
        && this->initCheckPoint_ == nullptr && this->password_ == nullptr && this->sid_ == nullptr && this->taskId_ == nullptr && this->topic_ == nullptr
        && this->username_ == nullptr; };
        // brokerUrl Field Functions 
        bool hasBrokerUrl() const { return this->brokerUrl_ != nullptr;};
        void deleteBrokerUrl() { this->brokerUrl_ = nullptr;};
        inline string getBrokerUrl() const { DARABONBA_PTR_GET_DEFAULT(brokerUrl_, "") };
        inline SourceDTSParameters& setBrokerUrl(string brokerUrl) { DARABONBA_PTR_SET_VALUE(brokerUrl_, brokerUrl) };


        // initCheckPoint Field Functions 
        bool hasInitCheckPoint() const { return this->initCheckPoint_ != nullptr;};
        void deleteInitCheckPoint() { this->initCheckPoint_ = nullptr;};
        inline int64_t getInitCheckPoint() const { DARABONBA_PTR_GET_DEFAULT(initCheckPoint_, 0L) };
        inline SourceDTSParameters& setInitCheckPoint(int64_t initCheckPoint) { DARABONBA_PTR_SET_VALUE(initCheckPoint_, initCheckPoint) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline SourceDTSParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // sid Field Functions 
        bool hasSid() const { return this->sid_ != nullptr;};
        void deleteSid() { this->sid_ = nullptr;};
        inline string getSid() const { DARABONBA_PTR_GET_DEFAULT(sid_, "") };
        inline SourceDTSParameters& setSid(string sid) { DARABONBA_PTR_SET_VALUE(sid_, sid) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline SourceDTSParameters& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline SourceDTSParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline SourceDTSParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        // The URL and port number of the change tracking instance.
        shared_ptr<string> brokerUrl_ {};
        // The UNIX timestamp that is generated when the SDK client consumes the first data record.
        shared_ptr<int64_t> initCheckPoint_ {};
        // The consumer group password.
        shared_ptr<string> password_ {};
        // The consumer group ID.
        shared_ptr<string> sid_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
        // The name of the tracked topic of the change tracking instance.
        shared_ptr<string> topic_ {};
        // The consumer group username.
        shared_ptr<string> username_ {};
      };

      class SourceCustomizedKafkaParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceCustomizedKafkaParameters& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceCustomizedKafkaParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        SourceCustomizedKafkaParameters() = default ;
        SourceCustomizedKafkaParameters(const SourceCustomizedKafkaParameters &) = default ;
        SourceCustomizedKafkaParameters(SourceCustomizedKafkaParameters &&) = default ;
        SourceCustomizedKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceCustomizedKafkaParameters() = default ;
        SourceCustomizedKafkaParameters& operator=(const SourceCustomizedKafkaParameters &) = default ;
        SourceCustomizedKafkaParameters& operator=(SourceCustomizedKafkaParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SourceCustomizedKafkaParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        shared_ptr<string> instanceId_ {};
      };

      class SourceCustomizedKafkaConnectorParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceCustomizedKafkaConnectorParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectorPackageUrl, connectorPackageUrl_);
          DARABONBA_PTR_TO_JSON(ConnectorParameters, connectorParameters_);
          DARABONBA_ANY_TO_JSON(WorkerParameters, workerParameters_);
        };
        friend void from_json(const Darabonba::Json& j, SourceCustomizedKafkaConnectorParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectorPackageUrl, connectorPackageUrl_);
          DARABONBA_PTR_FROM_JSON(ConnectorParameters, connectorParameters_);
          DARABONBA_ANY_FROM_JSON(WorkerParameters, workerParameters_);
        };
        SourceCustomizedKafkaConnectorParameters() = default ;
        SourceCustomizedKafkaConnectorParameters(const SourceCustomizedKafkaConnectorParameters &) = default ;
        SourceCustomizedKafkaConnectorParameters(SourceCustomizedKafkaConnectorParameters &&) = default ;
        SourceCustomizedKafkaConnectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceCustomizedKafkaConnectorParameters() = default ;
        SourceCustomizedKafkaConnectorParameters& operator=(const SourceCustomizedKafkaConnectorParameters &) = default ;
        SourceCustomizedKafkaConnectorParameters& operator=(SourceCustomizedKafkaConnectorParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConnectorParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConnectorParameters& obj) { 
            DARABONBA_ANY_TO_JSON(Config, config_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ConnectorParameters& obj) { 
            DARABONBA_ANY_FROM_JSON(Config, config_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          ConnectorParameters() = default ;
          ConnectorParameters(const ConnectorParameters &) = default ;
          ConnectorParameters(ConnectorParameters &&) = default ;
          ConnectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConnectorParameters() = default ;
          ConnectorParameters& operator=(const ConnectorParameters &) = default ;
          ConnectorParameters& operator=(ConnectorParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr; };
          // config Field Functions 
          bool hasConfig() const { return this->config_ != nullptr;};
          void deleteConfig() { this->config_ = nullptr;};
          inline           const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
          Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
          inline ConnectorParameters& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
          inline ConnectorParameters& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConnectorParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          Darabonba::Json config_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->connectorPackageUrl_ == nullptr
        && this->connectorParameters_ == nullptr && this->workerParameters_ == nullptr; };
        // connectorPackageUrl Field Functions 
        bool hasConnectorPackageUrl() const { return this->connectorPackageUrl_ != nullptr;};
        void deleteConnectorPackageUrl() { this->connectorPackageUrl_ = nullptr;};
        inline string getConnectorPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(connectorPackageUrl_, "") };
        inline SourceCustomizedKafkaConnectorParameters& setConnectorPackageUrl(string connectorPackageUrl) { DARABONBA_PTR_SET_VALUE(connectorPackageUrl_, connectorPackageUrl) };


        // connectorParameters Field Functions 
        bool hasConnectorParameters() const { return this->connectorParameters_ != nullptr;};
        void deleteConnectorParameters() { this->connectorParameters_ = nullptr;};
        inline const SourceCustomizedKafkaConnectorParameters::ConnectorParameters & getConnectorParameters() const { DARABONBA_PTR_GET_CONST(connectorParameters_, SourceCustomizedKafkaConnectorParameters::ConnectorParameters) };
        inline SourceCustomizedKafkaConnectorParameters::ConnectorParameters getConnectorParameters() { DARABONBA_PTR_GET(connectorParameters_, SourceCustomizedKafkaConnectorParameters::ConnectorParameters) };
        inline SourceCustomizedKafkaConnectorParameters& setConnectorParameters(const SourceCustomizedKafkaConnectorParameters::ConnectorParameters & connectorParameters) { DARABONBA_PTR_SET_VALUE(connectorParameters_, connectorParameters) };
        inline SourceCustomizedKafkaConnectorParameters& setConnectorParameters(SourceCustomizedKafkaConnectorParameters::ConnectorParameters && connectorParameters) { DARABONBA_PTR_SET_RVALUE(connectorParameters_, connectorParameters) };


        // workerParameters Field Functions 
        bool hasWorkerParameters() const { return this->workerParameters_ != nullptr;};
        void deleteWorkerParameters() { this->workerParameters_ = nullptr;};
        inline         const Darabonba::Json & getWorkerParameters() const { DARABONBA_GET(workerParameters_) };
        Darabonba::Json & getWorkerParameters() { DARABONBA_GET(workerParameters_) };
        inline SourceCustomizedKafkaConnectorParameters& setWorkerParameters(const Darabonba::Json & workerParameters) { DARABONBA_SET_VALUE(workerParameters_, workerParameters) };
        inline SourceCustomizedKafkaConnectorParameters& setWorkerParameters(Darabonba::Json && workerParameters) { DARABONBA_SET_RVALUE(workerParameters_, workerParameters) };


      protected:
        shared_ptr<string> connectorPackageUrl_ {};
        shared_ptr<SourceCustomizedKafkaConnectorParameters::ConnectorParameters> connectorParameters_ {};
        Darabonba::Json workerParameters_ {};
      };

      class SourceApacheRocketMQCheckpointParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceApacheRocketMQCheckpointParameters& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceEndpoint, instanceEndpoint_);
          DARABONBA_PTR_TO_JSON(InstancePassword, instancePassword_);
          DARABONBA_PTR_TO_JSON(InstanceUsername, instanceUsername_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(Topics, topics_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceApacheRocketMQCheckpointParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceEndpoint, instanceEndpoint_);
          DARABONBA_PTR_FROM_JSON(InstancePassword, instancePassword_);
          DARABONBA_PTR_FROM_JSON(InstanceUsername, instanceUsername_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(Topics, topics_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SourceApacheRocketMQCheckpointParameters() = default ;
        SourceApacheRocketMQCheckpointParameters(const SourceApacheRocketMQCheckpointParameters &) = default ;
        SourceApacheRocketMQCheckpointParameters(SourceApacheRocketMQCheckpointParameters &&) = default ;
        SourceApacheRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceApacheRocketMQCheckpointParameters() = default ;
        SourceApacheRocketMQCheckpointParameters& operator=(const SourceApacheRocketMQCheckpointParameters &) = default ;
        SourceApacheRocketMQCheckpointParameters& operator=(SourceApacheRocketMQCheckpointParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceEndpoint_ == nullptr
        && this->instancePassword_ == nullptr && this->instanceUsername_ == nullptr && this->networkType_ == nullptr && this->regionId_ == nullptr && this->securityGroupId_ == nullptr
        && this->topics_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // instanceEndpoint Field Functions 
        bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
        void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
        inline string getInstanceEndpoint() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpoint_, "") };
        inline SourceApacheRocketMQCheckpointParameters& setInstanceEndpoint(string instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };


        // instancePassword Field Functions 
        bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
        void deleteInstancePassword() { this->instancePassword_ = nullptr;};
        inline string getInstancePassword() const { DARABONBA_PTR_GET_DEFAULT(instancePassword_, "") };
        inline SourceApacheRocketMQCheckpointParameters& setInstancePassword(string instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };


        // instanceUsername Field Functions 
        bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
        void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
        inline string getInstanceUsername() const { DARABONBA_PTR_GET_DEFAULT(instanceUsername_, "") };
        inline SourceApacheRocketMQCheckpointParameters& setInstanceUsername(string instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SourceApacheRocketMQCheckpointParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline SourceApacheRocketMQCheckpointParameters& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SourceApacheRocketMQCheckpointParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // topics Field Functions 
        bool hasTopics() const { return this->topics_ != nullptr;};
        void deleteTopics() { this->topics_ = nullptr;};
        inline const vector<string> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<string>) };
        inline vector<string> getTopics() { DARABONBA_PTR_GET(topics_, vector<string>) };
        inline SourceApacheRocketMQCheckpointParameters& setTopics(const vector<string> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
        inline SourceApacheRocketMQCheckpointParameters& setTopics(vector<string> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline SourceApacheRocketMQCheckpointParameters& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SourceApacheRocketMQCheckpointParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<string> instanceEndpoint_ {};
        shared_ptr<string> instancePassword_ {};
        shared_ptr<string> instanceUsername_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<vector<string>> topics_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
      };

      class SourceApacheKafkaParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SourceApacheKafkaParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Bootstraps, bootstraps_);
          DARABONBA_PTR_TO_JSON(ConsumerGroup, consumerGroup_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(OffsetReset, offsetReset_);
          DARABONBA_PTR_TO_JSON(SaslMechanism, saslMechanism_);
          DARABONBA_PTR_TO_JSON(SaslPassword, saslPassword_);
          DARABONBA_PTR_TO_JSON(SaslUser, saslUser_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityProtocol, securityProtocol_);
          DARABONBA_PTR_TO_JSON(SslTruststoreCertificates, sslTruststoreCertificates_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(ValueDataType, valueDataType_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SourceApacheKafkaParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Bootstraps, bootstraps_);
          DARABONBA_PTR_FROM_JSON(ConsumerGroup, consumerGroup_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(OffsetReset, offsetReset_);
          DARABONBA_PTR_FROM_JSON(SaslMechanism, saslMechanism_);
          DARABONBA_PTR_FROM_JSON(SaslPassword, saslPassword_);
          DARABONBA_PTR_FROM_JSON(SaslUser, saslUser_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityProtocol, securityProtocol_);
          DARABONBA_PTR_FROM_JSON(SslTruststoreCertificates, sslTruststoreCertificates_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(ValueDataType, valueDataType_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SourceApacheKafkaParameters() = default ;
        SourceApacheKafkaParameters(const SourceApacheKafkaParameters &) = default ;
        SourceApacheKafkaParameters(SourceApacheKafkaParameters &&) = default ;
        SourceApacheKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SourceApacheKafkaParameters() = default ;
        SourceApacheKafkaParameters& operator=(const SourceApacheKafkaParameters &) = default ;
        SourceApacheKafkaParameters& operator=(SourceApacheKafkaParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bootstraps_ == nullptr
        && this->consumerGroup_ == nullptr && this->networkType_ == nullptr && this->offsetReset_ == nullptr && this->saslMechanism_ == nullptr && this->saslPassword_ == nullptr
        && this->saslUser_ == nullptr && this->securityGroupId_ == nullptr && this->securityProtocol_ == nullptr && this->sslTruststoreCertificates_ == nullptr && this->topic_ == nullptr
        && this->vSwitchIds_ == nullptr && this->valueDataType_ == nullptr && this->vpcId_ == nullptr; };
        // bootstraps Field Functions 
        bool hasBootstraps() const { return this->bootstraps_ != nullptr;};
        void deleteBootstraps() { this->bootstraps_ = nullptr;};
        inline string getBootstraps() const { DARABONBA_PTR_GET_DEFAULT(bootstraps_, "") };
        inline SourceApacheKafkaParameters& setBootstraps(string bootstraps) { DARABONBA_PTR_SET_VALUE(bootstraps_, bootstraps) };


        // consumerGroup Field Functions 
        bool hasConsumerGroup() const { return this->consumerGroup_ != nullptr;};
        void deleteConsumerGroup() { this->consumerGroup_ = nullptr;};
        inline string getConsumerGroup() const { DARABONBA_PTR_GET_DEFAULT(consumerGroup_, "") };
        inline SourceApacheKafkaParameters& setConsumerGroup(string consumerGroup) { DARABONBA_PTR_SET_VALUE(consumerGroup_, consumerGroup) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SourceApacheKafkaParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // offsetReset Field Functions 
        bool hasOffsetReset() const { return this->offsetReset_ != nullptr;};
        void deleteOffsetReset() { this->offsetReset_ = nullptr;};
        inline string getOffsetReset() const { DARABONBA_PTR_GET_DEFAULT(offsetReset_, "") };
        inline SourceApacheKafkaParameters& setOffsetReset(string offsetReset) { DARABONBA_PTR_SET_VALUE(offsetReset_, offsetReset) };


        // saslMechanism Field Functions 
        bool hasSaslMechanism() const { return this->saslMechanism_ != nullptr;};
        void deleteSaslMechanism() { this->saslMechanism_ = nullptr;};
        inline string getSaslMechanism() const { DARABONBA_PTR_GET_DEFAULT(saslMechanism_, "") };
        inline SourceApacheKafkaParameters& setSaslMechanism(string saslMechanism) { DARABONBA_PTR_SET_VALUE(saslMechanism_, saslMechanism) };


        // saslPassword Field Functions 
        bool hasSaslPassword() const { return this->saslPassword_ != nullptr;};
        void deleteSaslPassword() { this->saslPassword_ = nullptr;};
        inline string getSaslPassword() const { DARABONBA_PTR_GET_DEFAULT(saslPassword_, "") };
        inline SourceApacheKafkaParameters& setSaslPassword(string saslPassword) { DARABONBA_PTR_SET_VALUE(saslPassword_, saslPassword) };


        // saslUser Field Functions 
        bool hasSaslUser() const { return this->saslUser_ != nullptr;};
        void deleteSaslUser() { this->saslUser_ = nullptr;};
        inline string getSaslUser() const { DARABONBA_PTR_GET_DEFAULT(saslUser_, "") };
        inline SourceApacheKafkaParameters& setSaslUser(string saslUser) { DARABONBA_PTR_SET_VALUE(saslUser_, saslUser) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SourceApacheKafkaParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // securityProtocol Field Functions 
        bool hasSecurityProtocol() const { return this->securityProtocol_ != nullptr;};
        void deleteSecurityProtocol() { this->securityProtocol_ = nullptr;};
        inline string getSecurityProtocol() const { DARABONBA_PTR_GET_DEFAULT(securityProtocol_, "") };
        inline SourceApacheKafkaParameters& setSecurityProtocol(string securityProtocol) { DARABONBA_PTR_SET_VALUE(securityProtocol_, securityProtocol) };


        // sslTruststoreCertificates Field Functions 
        bool hasSslTruststoreCertificates() const { return this->sslTruststoreCertificates_ != nullptr;};
        void deleteSslTruststoreCertificates() { this->sslTruststoreCertificates_ = nullptr;};
        inline string getSslTruststoreCertificates() const { DARABONBA_PTR_GET_DEFAULT(sslTruststoreCertificates_, "") };
        inline SourceApacheKafkaParameters& setSslTruststoreCertificates(string sslTruststoreCertificates) { DARABONBA_PTR_SET_VALUE(sslTruststoreCertificates_, sslTruststoreCertificates) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline SourceApacheKafkaParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
        inline SourceApacheKafkaParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


        // valueDataType Field Functions 
        bool hasValueDataType() const { return this->valueDataType_ != nullptr;};
        void deleteValueDataType() { this->valueDataType_ = nullptr;};
        inline string getValueDataType() const { DARABONBA_PTR_GET_DEFAULT(valueDataType_, "") };
        inline SourceApacheKafkaParameters& setValueDataType(string valueDataType) { DARABONBA_PTR_SET_VALUE(valueDataType_, valueDataType) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SourceApacheKafkaParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<string> bootstraps_ {};
        shared_ptr<string> consumerGroup_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> offsetReset_ {};
        shared_ptr<string> saslMechanism_ {};
        shared_ptr<string> saslPassword_ {};
        shared_ptr<string> saslUser_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<string> securityProtocol_ {};
        shared_ptr<string> sslTruststoreCertificates_ {};
        shared_ptr<string> topic_ {};
        shared_ptr<string> vSwitchIds_ {};
        shared_ptr<string> valueDataType_ {};
        shared_ptr<string> vpcId_ {};
      };

      virtual bool empty() const override { return this->sourceApacheKafkaParameters_ == nullptr
        && this->sourceApacheRocketMQCheckpointParameters_ == nullptr && this->sourceCustomizedKafkaConnectorParameters_ == nullptr && this->sourceCustomizedKafkaParameters_ == nullptr && this->sourceDTSParameters_ == nullptr && this->sourceEventBusParameters_ == nullptr
        && this->sourceKafkaParameters_ == nullptr && this->sourceMNSParameters_ == nullptr && this->sourceMQTTParameters_ == nullptr && this->sourceMySQLParameters_ == nullptr && this->sourceOSSParameters_ == nullptr
        && this->sourceOpenSourceRabbitMQParameters_ == nullptr && this->sourcePostgreSQLParameters_ == nullptr && this->sourcePrometheusParameters_ == nullptr && this->sourceRabbitMQMetaParameters_ == nullptr && this->sourceRabbitMQMsgSyncParameters_ == nullptr
        && this->sourceRabbitMQParameters_ == nullptr && this->sourceRocketMQCheckpointParameters_ == nullptr && this->sourceRocketMQParameters_ == nullptr && this->sourceSLSParameters_ == nullptr; };
      // sourceApacheKafkaParameters Field Functions 
      bool hasSourceApacheKafkaParameters() const { return this->sourceApacheKafkaParameters_ != nullptr;};
      void deleteSourceApacheKafkaParameters() { this->sourceApacheKafkaParameters_ = nullptr;};
      inline const Source::SourceApacheKafkaParameters & getSourceApacheKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceApacheKafkaParameters_, Source::SourceApacheKafkaParameters) };
      inline Source::SourceApacheKafkaParameters getSourceApacheKafkaParameters() { DARABONBA_PTR_GET(sourceApacheKafkaParameters_, Source::SourceApacheKafkaParameters) };
      inline Source& setSourceApacheKafkaParameters(const Source::SourceApacheKafkaParameters & sourceApacheKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceApacheKafkaParameters_, sourceApacheKafkaParameters) };
      inline Source& setSourceApacheKafkaParameters(Source::SourceApacheKafkaParameters && sourceApacheKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceApacheKafkaParameters_, sourceApacheKafkaParameters) };


      // sourceApacheRocketMQCheckpointParameters Field Functions 
      bool hasSourceApacheRocketMQCheckpointParameters() const { return this->sourceApacheRocketMQCheckpointParameters_ != nullptr;};
      void deleteSourceApacheRocketMQCheckpointParameters() { this->sourceApacheRocketMQCheckpointParameters_ = nullptr;};
      inline const Source::SourceApacheRocketMQCheckpointParameters & getSourceApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceApacheRocketMQCheckpointParameters_, Source::SourceApacheRocketMQCheckpointParameters) };
      inline Source::SourceApacheRocketMQCheckpointParameters getSourceApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceApacheRocketMQCheckpointParameters_, Source::SourceApacheRocketMQCheckpointParameters) };
      inline Source& setSourceApacheRocketMQCheckpointParameters(const Source::SourceApacheRocketMQCheckpointParameters & sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };
      inline Source& setSourceApacheRocketMQCheckpointParameters(Source::SourceApacheRocketMQCheckpointParameters && sourceApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceApacheRocketMQCheckpointParameters_, sourceApacheRocketMQCheckpointParameters) };


      // sourceCustomizedKafkaConnectorParameters Field Functions 
      bool hasSourceCustomizedKafkaConnectorParameters() const { return this->sourceCustomizedKafkaConnectorParameters_ != nullptr;};
      void deleteSourceCustomizedKafkaConnectorParameters() { this->sourceCustomizedKafkaConnectorParameters_ = nullptr;};
      inline const Source::SourceCustomizedKafkaConnectorParameters & getSourceCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaConnectorParameters_, Source::SourceCustomizedKafkaConnectorParameters) };
      inline Source::SourceCustomizedKafkaConnectorParameters getSourceCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaConnectorParameters_, Source::SourceCustomizedKafkaConnectorParameters) };
      inline Source& setSourceCustomizedKafkaConnectorParameters(const Source::SourceCustomizedKafkaConnectorParameters & sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };
      inline Source& setSourceCustomizedKafkaConnectorParameters(Source::SourceCustomizedKafkaConnectorParameters && sourceCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaConnectorParameters_, sourceCustomizedKafkaConnectorParameters) };


      // sourceCustomizedKafkaParameters Field Functions 
      bool hasSourceCustomizedKafkaParameters() const { return this->sourceCustomizedKafkaParameters_ != nullptr;};
      void deleteSourceCustomizedKafkaParameters() { this->sourceCustomizedKafkaParameters_ = nullptr;};
      inline const Source::SourceCustomizedKafkaParameters & getSourceCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceCustomizedKafkaParameters_, Source::SourceCustomizedKafkaParameters) };
      inline Source::SourceCustomizedKafkaParameters getSourceCustomizedKafkaParameters() { DARABONBA_PTR_GET(sourceCustomizedKafkaParameters_, Source::SourceCustomizedKafkaParameters) };
      inline Source& setSourceCustomizedKafkaParameters(const Source::SourceCustomizedKafkaParameters & sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };
      inline Source& setSourceCustomizedKafkaParameters(Source::SourceCustomizedKafkaParameters && sourceCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceCustomizedKafkaParameters_, sourceCustomizedKafkaParameters) };


      // sourceDTSParameters Field Functions 
      bool hasSourceDTSParameters() const { return this->sourceDTSParameters_ != nullptr;};
      void deleteSourceDTSParameters() { this->sourceDTSParameters_ = nullptr;};
      inline const Source::SourceDTSParameters & getSourceDTSParameters() const { DARABONBA_PTR_GET_CONST(sourceDTSParameters_, Source::SourceDTSParameters) };
      inline Source::SourceDTSParameters getSourceDTSParameters() { DARABONBA_PTR_GET(sourceDTSParameters_, Source::SourceDTSParameters) };
      inline Source& setSourceDTSParameters(const Source::SourceDTSParameters & sourceDTSParameters) { DARABONBA_PTR_SET_VALUE(sourceDTSParameters_, sourceDTSParameters) };
      inline Source& setSourceDTSParameters(Source::SourceDTSParameters && sourceDTSParameters) { DARABONBA_PTR_SET_RVALUE(sourceDTSParameters_, sourceDTSParameters) };


      // sourceEventBusParameters Field Functions 
      bool hasSourceEventBusParameters() const { return this->sourceEventBusParameters_ != nullptr;};
      void deleteSourceEventBusParameters() { this->sourceEventBusParameters_ = nullptr;};
      inline const Source::SourceEventBusParameters & getSourceEventBusParameters() const { DARABONBA_PTR_GET_CONST(sourceEventBusParameters_, Source::SourceEventBusParameters) };
      inline Source::SourceEventBusParameters getSourceEventBusParameters() { DARABONBA_PTR_GET(sourceEventBusParameters_, Source::SourceEventBusParameters) };
      inline Source& setSourceEventBusParameters(const Source::SourceEventBusParameters & sourceEventBusParameters) { DARABONBA_PTR_SET_VALUE(sourceEventBusParameters_, sourceEventBusParameters) };
      inline Source& setSourceEventBusParameters(Source::SourceEventBusParameters && sourceEventBusParameters) { DARABONBA_PTR_SET_RVALUE(sourceEventBusParameters_, sourceEventBusParameters) };


      // sourceKafkaParameters Field Functions 
      bool hasSourceKafkaParameters() const { return this->sourceKafkaParameters_ != nullptr;};
      void deleteSourceKafkaParameters() { this->sourceKafkaParameters_ = nullptr;};
      inline const Source::SourceKafkaParameters & getSourceKafkaParameters() const { DARABONBA_PTR_GET_CONST(sourceKafkaParameters_, Source::SourceKafkaParameters) };
      inline Source::SourceKafkaParameters getSourceKafkaParameters() { DARABONBA_PTR_GET(sourceKafkaParameters_, Source::SourceKafkaParameters) };
      inline Source& setSourceKafkaParameters(const Source::SourceKafkaParameters & sourceKafkaParameters) { DARABONBA_PTR_SET_VALUE(sourceKafkaParameters_, sourceKafkaParameters) };
      inline Source& setSourceKafkaParameters(Source::SourceKafkaParameters && sourceKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sourceKafkaParameters_, sourceKafkaParameters) };


      // sourceMNSParameters Field Functions 
      bool hasSourceMNSParameters() const { return this->sourceMNSParameters_ != nullptr;};
      void deleteSourceMNSParameters() { this->sourceMNSParameters_ = nullptr;};
      inline const Source::SourceMNSParameters & getSourceMNSParameters() const { DARABONBA_PTR_GET_CONST(sourceMNSParameters_, Source::SourceMNSParameters) };
      inline Source::SourceMNSParameters getSourceMNSParameters() { DARABONBA_PTR_GET(sourceMNSParameters_, Source::SourceMNSParameters) };
      inline Source& setSourceMNSParameters(const Source::SourceMNSParameters & sourceMNSParameters) { DARABONBA_PTR_SET_VALUE(sourceMNSParameters_, sourceMNSParameters) };
      inline Source& setSourceMNSParameters(Source::SourceMNSParameters && sourceMNSParameters) { DARABONBA_PTR_SET_RVALUE(sourceMNSParameters_, sourceMNSParameters) };


      // sourceMQTTParameters Field Functions 
      bool hasSourceMQTTParameters() const { return this->sourceMQTTParameters_ != nullptr;};
      void deleteSourceMQTTParameters() { this->sourceMQTTParameters_ = nullptr;};
      inline const Source::SourceMQTTParameters & getSourceMQTTParameters() const { DARABONBA_PTR_GET_CONST(sourceMQTTParameters_, Source::SourceMQTTParameters) };
      inline Source::SourceMQTTParameters getSourceMQTTParameters() { DARABONBA_PTR_GET(sourceMQTTParameters_, Source::SourceMQTTParameters) };
      inline Source& setSourceMQTTParameters(const Source::SourceMQTTParameters & sourceMQTTParameters) { DARABONBA_PTR_SET_VALUE(sourceMQTTParameters_, sourceMQTTParameters) };
      inline Source& setSourceMQTTParameters(Source::SourceMQTTParameters && sourceMQTTParameters) { DARABONBA_PTR_SET_RVALUE(sourceMQTTParameters_, sourceMQTTParameters) };


      // sourceMySQLParameters Field Functions 
      bool hasSourceMySQLParameters() const { return this->sourceMySQLParameters_ != nullptr;};
      void deleteSourceMySQLParameters() { this->sourceMySQLParameters_ = nullptr;};
      inline const SourceMySQLParameters & getSourceMySQLParameters() const { DARABONBA_PTR_GET_CONST(sourceMySQLParameters_, SourceMySQLParameters) };
      inline SourceMySQLParameters getSourceMySQLParameters() { DARABONBA_PTR_GET(sourceMySQLParameters_, SourceMySQLParameters) };
      inline Source& setSourceMySQLParameters(const SourceMySQLParameters & sourceMySQLParameters) { DARABONBA_PTR_SET_VALUE(sourceMySQLParameters_, sourceMySQLParameters) };
      inline Source& setSourceMySQLParameters(SourceMySQLParameters && sourceMySQLParameters) { DARABONBA_PTR_SET_RVALUE(sourceMySQLParameters_, sourceMySQLParameters) };


      // sourceOSSParameters Field Functions 
      bool hasSourceOSSParameters() const { return this->sourceOSSParameters_ != nullptr;};
      void deleteSourceOSSParameters() { this->sourceOSSParameters_ = nullptr;};
      inline const Source::SourceOSSParameters & getSourceOSSParameters() const { DARABONBA_PTR_GET_CONST(sourceOSSParameters_, Source::SourceOSSParameters) };
      inline Source::SourceOSSParameters getSourceOSSParameters() { DARABONBA_PTR_GET(sourceOSSParameters_, Source::SourceOSSParameters) };
      inline Source& setSourceOSSParameters(const Source::SourceOSSParameters & sourceOSSParameters) { DARABONBA_PTR_SET_VALUE(sourceOSSParameters_, sourceOSSParameters) };
      inline Source& setSourceOSSParameters(Source::SourceOSSParameters && sourceOSSParameters) { DARABONBA_PTR_SET_RVALUE(sourceOSSParameters_, sourceOSSParameters) };


      // sourceOpenSourceRabbitMQParameters Field Functions 
      bool hasSourceOpenSourceRabbitMQParameters() const { return this->sourceOpenSourceRabbitMQParameters_ != nullptr;};
      void deleteSourceOpenSourceRabbitMQParameters() { this->sourceOpenSourceRabbitMQParameters_ = nullptr;};
      inline const Source::SourceOpenSourceRabbitMQParameters & getSourceOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceOpenSourceRabbitMQParameters_, Source::SourceOpenSourceRabbitMQParameters) };
      inline Source::SourceOpenSourceRabbitMQParameters getSourceOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceOpenSourceRabbitMQParameters_, Source::SourceOpenSourceRabbitMQParameters) };
      inline Source& setSourceOpenSourceRabbitMQParameters(const Source::SourceOpenSourceRabbitMQParameters & sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };
      inline Source& setSourceOpenSourceRabbitMQParameters(Source::SourceOpenSourceRabbitMQParameters && sourceOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceOpenSourceRabbitMQParameters_, sourceOpenSourceRabbitMQParameters) };


      // sourcePostgreSQLParameters Field Functions 
      bool hasSourcePostgreSQLParameters() const { return this->sourcePostgreSQLParameters_ != nullptr;};
      void deleteSourcePostgreSQLParameters() { this->sourcePostgreSQLParameters_ = nullptr;};
      inline const SourcePostgreSQLParameters & getSourcePostgreSQLParameters() const { DARABONBA_PTR_GET_CONST(sourcePostgreSQLParameters_, SourcePostgreSQLParameters) };
      inline SourcePostgreSQLParameters getSourcePostgreSQLParameters() { DARABONBA_PTR_GET(sourcePostgreSQLParameters_, SourcePostgreSQLParameters) };
      inline Source& setSourcePostgreSQLParameters(const SourcePostgreSQLParameters & sourcePostgreSQLParameters) { DARABONBA_PTR_SET_VALUE(sourcePostgreSQLParameters_, sourcePostgreSQLParameters) };
      inline Source& setSourcePostgreSQLParameters(SourcePostgreSQLParameters && sourcePostgreSQLParameters) { DARABONBA_PTR_SET_RVALUE(sourcePostgreSQLParameters_, sourcePostgreSQLParameters) };


      // sourcePrometheusParameters Field Functions 
      bool hasSourcePrometheusParameters() const { return this->sourcePrometheusParameters_ != nullptr;};
      void deleteSourcePrometheusParameters() { this->sourcePrometheusParameters_ = nullptr;};
      inline const Source::SourcePrometheusParameters & getSourcePrometheusParameters() const { DARABONBA_PTR_GET_CONST(sourcePrometheusParameters_, Source::SourcePrometheusParameters) };
      inline Source::SourcePrometheusParameters getSourcePrometheusParameters() { DARABONBA_PTR_GET(sourcePrometheusParameters_, Source::SourcePrometheusParameters) };
      inline Source& setSourcePrometheusParameters(const Source::SourcePrometheusParameters & sourcePrometheusParameters) { DARABONBA_PTR_SET_VALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };
      inline Source& setSourcePrometheusParameters(Source::SourcePrometheusParameters && sourcePrometheusParameters) { DARABONBA_PTR_SET_RVALUE(sourcePrometheusParameters_, sourcePrometheusParameters) };


      // sourceRabbitMQMetaParameters Field Functions 
      bool hasSourceRabbitMQMetaParameters() const { return this->sourceRabbitMQMetaParameters_ != nullptr;};
      void deleteSourceRabbitMQMetaParameters() { this->sourceRabbitMQMetaParameters_ = nullptr;};
      inline const SourceRabbitMQMetaParameters & getSourceRabbitMQMetaParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQMetaParameters_, SourceRabbitMQMetaParameters) };
      inline SourceRabbitMQMetaParameters getSourceRabbitMQMetaParameters() { DARABONBA_PTR_GET(sourceRabbitMQMetaParameters_, SourceRabbitMQMetaParameters) };
      inline Source& setSourceRabbitMQMetaParameters(const SourceRabbitMQMetaParameters & sourceRabbitMQMetaParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQMetaParameters_, sourceRabbitMQMetaParameters) };
      inline Source& setSourceRabbitMQMetaParameters(SourceRabbitMQMetaParameters && sourceRabbitMQMetaParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQMetaParameters_, sourceRabbitMQMetaParameters) };


      // sourceRabbitMQMsgSyncParameters Field Functions 
      bool hasSourceRabbitMQMsgSyncParameters() const { return this->sourceRabbitMQMsgSyncParameters_ != nullptr;};
      void deleteSourceRabbitMQMsgSyncParameters() { this->sourceRabbitMQMsgSyncParameters_ = nullptr;};
      inline const SourceRabbitMQMsgSyncParameters & getSourceRabbitMQMsgSyncParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQMsgSyncParameters_, SourceRabbitMQMsgSyncParameters) };
      inline SourceRabbitMQMsgSyncParameters getSourceRabbitMQMsgSyncParameters() { DARABONBA_PTR_GET(sourceRabbitMQMsgSyncParameters_, SourceRabbitMQMsgSyncParameters) };
      inline Source& setSourceRabbitMQMsgSyncParameters(const SourceRabbitMQMsgSyncParameters & sourceRabbitMQMsgSyncParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQMsgSyncParameters_, sourceRabbitMQMsgSyncParameters) };
      inline Source& setSourceRabbitMQMsgSyncParameters(SourceRabbitMQMsgSyncParameters && sourceRabbitMQMsgSyncParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQMsgSyncParameters_, sourceRabbitMQMsgSyncParameters) };


      // sourceRabbitMQParameters Field Functions 
      bool hasSourceRabbitMQParameters() const { return this->sourceRabbitMQParameters_ != nullptr;};
      void deleteSourceRabbitMQParameters() { this->sourceRabbitMQParameters_ = nullptr;};
      inline const Source::SourceRabbitMQParameters & getSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRabbitMQParameters_, Source::SourceRabbitMQParameters) };
      inline Source::SourceRabbitMQParameters getSourceRabbitMQParameters() { DARABONBA_PTR_GET(sourceRabbitMQParameters_, Source::SourceRabbitMQParameters) };
      inline Source& setSourceRabbitMQParameters(const Source::SourceRabbitMQParameters & sourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };
      inline Source& setSourceRabbitMQParameters(Source::SourceRabbitMQParameters && sourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRabbitMQParameters_, sourceRabbitMQParameters) };


      // sourceRocketMQCheckpointParameters Field Functions 
      bool hasSourceRocketMQCheckpointParameters() const { return this->sourceRocketMQCheckpointParameters_ != nullptr;};
      void deleteSourceRocketMQCheckpointParameters() { this->sourceRocketMQCheckpointParameters_ = nullptr;};
      inline const Source::SourceRocketMQCheckpointParameters & getSourceRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQCheckpointParameters_, Source::SourceRocketMQCheckpointParameters) };
      inline Source::SourceRocketMQCheckpointParameters getSourceRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sourceRocketMQCheckpointParameters_, Source::SourceRocketMQCheckpointParameters) };
      inline Source& setSourceRocketMQCheckpointParameters(const Source::SourceRocketMQCheckpointParameters & sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };
      inline Source& setSourceRocketMQCheckpointParameters(Source::SourceRocketMQCheckpointParameters && sourceRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQCheckpointParameters_, sourceRocketMQCheckpointParameters) };


      // sourceRocketMQParameters Field Functions 
      bool hasSourceRocketMQParameters() const { return this->sourceRocketMQParameters_ != nullptr;};
      void deleteSourceRocketMQParameters() { this->sourceRocketMQParameters_ = nullptr;};
      inline const Source::SourceRocketMQParameters & getSourceRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sourceRocketMQParameters_, Source::SourceRocketMQParameters) };
      inline Source::SourceRocketMQParameters getSourceRocketMQParameters() { DARABONBA_PTR_GET(sourceRocketMQParameters_, Source::SourceRocketMQParameters) };
      inline Source& setSourceRocketMQParameters(const Source::SourceRocketMQParameters & sourceRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };
      inline Source& setSourceRocketMQParameters(Source::SourceRocketMQParameters && sourceRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sourceRocketMQParameters_, sourceRocketMQParameters) };


      // sourceSLSParameters Field Functions 
      bool hasSourceSLSParameters() const { return this->sourceSLSParameters_ != nullptr;};
      void deleteSourceSLSParameters() { this->sourceSLSParameters_ = nullptr;};
      inline const Source::SourceSLSParameters & getSourceSLSParameters() const { DARABONBA_PTR_GET_CONST(sourceSLSParameters_, Source::SourceSLSParameters) };
      inline Source::SourceSLSParameters getSourceSLSParameters() { DARABONBA_PTR_GET(sourceSLSParameters_, Source::SourceSLSParameters) };
      inline Source& setSourceSLSParameters(const Source::SourceSLSParameters & sourceSLSParameters) { DARABONBA_PTR_SET_VALUE(sourceSLSParameters_, sourceSLSParameters) };
      inline Source& setSourceSLSParameters(Source::SourceSLSParameters && sourceSLSParameters) { DARABONBA_PTR_SET_RVALUE(sourceSLSParameters_, sourceSLSParameters) };


    protected:
      shared_ptr<Source::SourceApacheKafkaParameters> sourceApacheKafkaParameters_ {};
      shared_ptr<Source::SourceApacheRocketMQCheckpointParameters> sourceApacheRocketMQCheckpointParameters_ {};
      shared_ptr<Source::SourceCustomizedKafkaConnectorParameters> sourceCustomizedKafkaConnectorParameters_ {};
      shared_ptr<Source::SourceCustomizedKafkaParameters> sourceCustomizedKafkaParameters_ {};
      // The parameters that are configured if you specify Data Transmission Service (DTS) as the event source.
      shared_ptr<Source::SourceDTSParameters> sourceDTSParameters_ {};
      shared_ptr<Source::SourceEventBusParameters> sourceEventBusParameters_ {};
      // The parameters that are configured if you specify ApsaraMQ for Kafka as the event source.
      shared_ptr<Source::SourceKafkaParameters> sourceKafkaParameters_ {};
      // The parameters that are configured if you specify Message Service (MNS) as the event source.
      shared_ptr<Source::SourceMNSParameters> sourceMNSParameters_ {};
      // The parameters that are configured if you specify ApsaraMQ for MQTT as the event source.
      shared_ptr<Source::SourceMQTTParameters> sourceMQTTParameters_ {};
      shared_ptr<SourceMySQLParameters> sourceMySQLParameters_ {};
      shared_ptr<Source::SourceOSSParameters> sourceOSSParameters_ {};
      shared_ptr<Source::SourceOpenSourceRabbitMQParameters> sourceOpenSourceRabbitMQParameters_ {};
      shared_ptr<SourcePostgreSQLParameters> sourcePostgreSQLParameters_ {};
      // Parameters that are configured if you specify Managed Service for Prometheus as the event source.
      shared_ptr<Source::SourcePrometheusParameters> sourcePrometheusParameters_ {};
      shared_ptr<SourceRabbitMQMetaParameters> sourceRabbitMQMetaParameters_ {};
      shared_ptr<SourceRabbitMQMsgSyncParameters> sourceRabbitMQMsgSyncParameters_ {};
      // The parameters that are configured if you specify ApsaraMQ for RabbitMQ as the event source.
      shared_ptr<Source::SourceRabbitMQParameters> sourceRabbitMQParameters_ {};
      shared_ptr<Source::SourceRocketMQCheckpointParameters> sourceRocketMQCheckpointParameters_ {};
      // The parameters that are configured if you specify ApsaraMQ for RocketMQ as the event source.
      shared_ptr<Source::SourceRocketMQParameters> sourceRocketMQParameters_ {};
      // The parameters that are configured if you specify Simple Log Service as the event source.
      shared_ptr<Source::SourceSLSParameters> sourceSLSParameters_ {};
    };

    class Sink : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sink& obj) { 
        DARABONBA_PTR_TO_JSON(SinkApacheKafkaParameters, sinkApacheKafkaParameters_);
        DARABONBA_PTR_TO_JSON(SinkApacheRocketMQCheckpointParameters, sinkApacheRocketMQCheckpointParameters_);
        DARABONBA_PTR_TO_JSON(SinkApiDestinationParameters, sinkApiDestinationParameters_);
        DARABONBA_PTR_TO_JSON(SinkBaiLianParameters, sinkBaiLianParameters_);
        DARABONBA_PTR_TO_JSON(SinkCustomizedKafkaConnectorParameters, sinkCustomizedKafkaConnectorParameters_);
        DARABONBA_PTR_TO_JSON(SinkCustomizedKafkaParameters, sinkCustomizedKafkaParameters_);
        DARABONBA_PTR_TO_JSON(SinkDashVectorParameters, sinkDashVectorParameters_);
        DARABONBA_PTR_TO_JSON(SinkDataHubParameters, sinkDataHubParameters_);
        DARABONBA_PTR_TO_JSON(SinkDataWorksTriggerParameters, sinkDataWorksTriggerParameters_);
        DARABONBA_PTR_TO_JSON(SinkDorisParameters, sinkDorisParameters_);
        DARABONBA_PTR_TO_JSON(SinkEventHouseParameters, sinkEventHouseParameters_);
        DARABONBA_PTR_TO_JSON(SinkFcParameters, sinkFcParameters_);
        DARABONBA_PTR_TO_JSON(SinkFnfParameters, sinkFnfParameters_);
        DARABONBA_PTR_TO_JSON(SinkHttpsParameters, sinkHttpsParameters_);
        DARABONBA_PTR_TO_JSON(SinkKafkaParameters, sinkKafkaParameters_);
        DARABONBA_PTR_TO_JSON(SinkMNSParameters, sinkMNSParameters_);
        DARABONBA_PTR_TO_JSON(SinkMQTTParameters, sinkMQTTParameters_);
        DARABONBA_PTR_TO_JSON(SinkOSSParameters, sinkOSSParameters_);
        DARABONBA_PTR_TO_JSON(SinkOpenSourceRabbitMQParameters, sinkOpenSourceRabbitMQParameters_);
        DARABONBA_PTR_TO_JSON(SinkPrometheusParameters, sinkPrometheusParameters_);
        DARABONBA_PTR_TO_JSON(SinkRabbitMQMetaParameters, sinkRabbitMQMetaParameters_);
        DARABONBA_PTR_TO_JSON(SinkRabbitMQMsgSyncParameters, sinkRabbitMQMsgSyncParameters_);
        DARABONBA_PTR_TO_JSON(SinkRabbitMQParameters, sinkRabbitMQParameters_);
        DARABONBA_PTR_TO_JSON(SinkRocketMQCheckpointParameters, sinkRocketMQCheckpointParameters_);
        DARABONBA_PTR_TO_JSON(SinkRocketMQParameters, sinkRocketMQParameters_);
        DARABONBA_PTR_TO_JSON(SinkSLSParameters, sinkSLSParameters_);
      };
      friend void from_json(const Darabonba::Json& j, Sink& obj) { 
        DARABONBA_PTR_FROM_JSON(SinkApacheKafkaParameters, sinkApacheKafkaParameters_);
        DARABONBA_PTR_FROM_JSON(SinkApacheRocketMQCheckpointParameters, sinkApacheRocketMQCheckpointParameters_);
        DARABONBA_PTR_FROM_JSON(SinkApiDestinationParameters, sinkApiDestinationParameters_);
        DARABONBA_PTR_FROM_JSON(SinkBaiLianParameters, sinkBaiLianParameters_);
        DARABONBA_PTR_FROM_JSON(SinkCustomizedKafkaConnectorParameters, sinkCustomizedKafkaConnectorParameters_);
        DARABONBA_PTR_FROM_JSON(SinkCustomizedKafkaParameters, sinkCustomizedKafkaParameters_);
        DARABONBA_PTR_FROM_JSON(SinkDashVectorParameters, sinkDashVectorParameters_);
        DARABONBA_PTR_FROM_JSON(SinkDataHubParameters, sinkDataHubParameters_);
        DARABONBA_PTR_FROM_JSON(SinkDataWorksTriggerParameters, sinkDataWorksTriggerParameters_);
        DARABONBA_PTR_FROM_JSON(SinkDorisParameters, sinkDorisParameters_);
        DARABONBA_PTR_FROM_JSON(SinkEventHouseParameters, sinkEventHouseParameters_);
        DARABONBA_PTR_FROM_JSON(SinkFcParameters, sinkFcParameters_);
        DARABONBA_PTR_FROM_JSON(SinkFnfParameters, sinkFnfParameters_);
        DARABONBA_PTR_FROM_JSON(SinkHttpsParameters, sinkHttpsParameters_);
        DARABONBA_PTR_FROM_JSON(SinkKafkaParameters, sinkKafkaParameters_);
        DARABONBA_PTR_FROM_JSON(SinkMNSParameters, sinkMNSParameters_);
        DARABONBA_PTR_FROM_JSON(SinkMQTTParameters, sinkMQTTParameters_);
        DARABONBA_PTR_FROM_JSON(SinkOSSParameters, sinkOSSParameters_);
        DARABONBA_PTR_FROM_JSON(SinkOpenSourceRabbitMQParameters, sinkOpenSourceRabbitMQParameters_);
        DARABONBA_PTR_FROM_JSON(SinkPrometheusParameters, sinkPrometheusParameters_);
        DARABONBA_PTR_FROM_JSON(SinkRabbitMQMetaParameters, sinkRabbitMQMetaParameters_);
        DARABONBA_PTR_FROM_JSON(SinkRabbitMQMsgSyncParameters, sinkRabbitMQMsgSyncParameters_);
        DARABONBA_PTR_FROM_JSON(SinkRabbitMQParameters, sinkRabbitMQParameters_);
        DARABONBA_PTR_FROM_JSON(SinkRocketMQCheckpointParameters, sinkRocketMQCheckpointParameters_);
        DARABONBA_PTR_FROM_JSON(SinkRocketMQParameters, sinkRocketMQParameters_);
        DARABONBA_PTR_FROM_JSON(SinkSLSParameters, sinkSLSParameters_);
      };
      Sink() = default ;
      Sink(const Sink &) = default ;
      Sink(Sink &&) = default ;
      Sink(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sink() = default ;
      Sink& operator=(const Sink &) = default ;
      Sink& operator=(Sink &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SinkSLSParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkSLSParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(ContentSchema, contentSchema_);
          DARABONBA_PTR_TO_JSON(ContentType, contentType_);
          DARABONBA_PTR_TO_JSON(LogStore, logStore_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
        };
        friend void from_json(const Darabonba::Json& j, SinkSLSParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(ContentSchema, contentSchema_);
          DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
          DARABONBA_PTR_FROM_JSON(LogStore, logStore_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
        };
        SinkSLSParameters() = default ;
        SinkSLSParameters(const SinkSLSParameters &) = default ;
        SinkSLSParameters(SinkSLSParameters &&) = default ;
        SinkSLSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkSLSParameters() = default ;
        SinkSLSParameters& operator=(const SinkSLSParameters &) = default ;
        SinkSLSParameters& operator=(SinkSLSParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Topic : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Topic& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Topic& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Topic() = default ;
          Topic(const Topic &) = default ;
          Topic(Topic &&) = default ;
          Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Topic() = default ;
          Topic& operator=(const Topic &) = default ;
          Topic& operator=(Topic &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Topic& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Topic& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Topic& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The topic that you want to use to store logs. This parameter corresponds to the reserved field **topic** in Simple Log Service.
          shared_ptr<string> value_ {};
        };

        class RoleName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoleName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RoleName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RoleName() = default ;
          RoleName(const RoleName &) = default ;
          RoleName(RoleName &&) = default ;
          RoleName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoleName() = default ;
          RoleName& operator=(const RoleName &) = default ;
          RoleName& operator=(RoleName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline RoleName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline RoleName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RoleName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The role name. If you want to authorize EventBridge to use this role to read logs in Simple Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the RAM console.
          shared_ptr<string> value_ {};
        };

        class Project : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Project& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Project& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Project() = default ;
          Project(const Project &) = default ;
          Project(Project &&) = default ;
          Project(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Project() = default ;
          Project& operator=(const Project &) = default ;
          Project& operator=(Project &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Project& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Project& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Project& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The Simple Log Service project.
          shared_ptr<string> value_ {};
        };

        class LogStore : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LogStore& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, LogStore& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          LogStore() = default ;
          LogStore(const LogStore &) = default ;
          LogStore(LogStore &&) = default ;
          LogStore(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LogStore() = default ;
          LogStore& operator=(const LogStore &) = default ;
          LogStore& operator=(LogStore &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline LogStore& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline LogStore& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline LogStore& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The Simple Log Service Logstore.
          shared_ptr<string> value_ {};
        };

        class ContentType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContentType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ContentType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ContentType() = default ;
          ContentType(const ContentType &) = default ;
          ContentType(ContentType &&) = default ;
          ContentType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContentType() = default ;
          ContentType& operator=(const ContentType &) = default ;
          ContentType& operator=(ContentType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline ContentType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline ContentType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ContentType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class ContentSchema : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ContentSchema& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ContentSchema& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ContentSchema() = default ;
          ContentSchema(const ContentSchema &) = default ;
          ContentSchema(ContentSchema &&) = default ;
          ContentSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ContentSchema() = default ;
          ContentSchema& operator=(const ContentSchema &) = default ;
          ContentSchema& operator=(ContentSchema &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline ContentSchema& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline ContentSchema& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ContentSchema& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Body : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Body& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Body& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Body() = default ;
          Body(const Body &) = default ;
          Body(Body &&) = default ;
          Body(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Body() = default ;
          Body& operator=(const Body &) = default ;
          Body& operator=(Body &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Body& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Body& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->body_ == nullptr
        && this->contentSchema_ == nullptr && this->contentType_ == nullptr && this->logStore_ == nullptr && this->project_ == nullptr && this->roleName_ == nullptr
        && this->topic_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline const SinkSLSParameters::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SinkSLSParameters::Body) };
        inline SinkSLSParameters::Body getBody() { DARABONBA_PTR_GET(body_, SinkSLSParameters::Body) };
        inline SinkSLSParameters& setBody(const SinkSLSParameters::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
        inline SinkSLSParameters& setBody(SinkSLSParameters::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


        // contentSchema Field Functions 
        bool hasContentSchema() const { return this->contentSchema_ != nullptr;};
        void deleteContentSchema() { this->contentSchema_ = nullptr;};
        inline const SinkSLSParameters::ContentSchema & getContentSchema() const { DARABONBA_PTR_GET_CONST(contentSchema_, SinkSLSParameters::ContentSchema) };
        inline SinkSLSParameters::ContentSchema getContentSchema() { DARABONBA_PTR_GET(contentSchema_, SinkSLSParameters::ContentSchema) };
        inline SinkSLSParameters& setContentSchema(const SinkSLSParameters::ContentSchema & contentSchema) { DARABONBA_PTR_SET_VALUE(contentSchema_, contentSchema) };
        inline SinkSLSParameters& setContentSchema(SinkSLSParameters::ContentSchema && contentSchema) { DARABONBA_PTR_SET_RVALUE(contentSchema_, contentSchema) };


        // contentType Field Functions 
        bool hasContentType() const { return this->contentType_ != nullptr;};
        void deleteContentType() { this->contentType_ = nullptr;};
        inline const SinkSLSParameters::ContentType & getContentType() const { DARABONBA_PTR_GET_CONST(contentType_, SinkSLSParameters::ContentType) };
        inline SinkSLSParameters::ContentType getContentType() { DARABONBA_PTR_GET(contentType_, SinkSLSParameters::ContentType) };
        inline SinkSLSParameters& setContentType(const SinkSLSParameters::ContentType & contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };
        inline SinkSLSParameters& setContentType(SinkSLSParameters::ContentType && contentType) { DARABONBA_PTR_SET_RVALUE(contentType_, contentType) };


        // logStore Field Functions 
        bool hasLogStore() const { return this->logStore_ != nullptr;};
        void deleteLogStore() { this->logStore_ = nullptr;};
        inline const SinkSLSParameters::LogStore & getLogStore() const { DARABONBA_PTR_GET_CONST(logStore_, SinkSLSParameters::LogStore) };
        inline SinkSLSParameters::LogStore getLogStore() { DARABONBA_PTR_GET(logStore_, SinkSLSParameters::LogStore) };
        inline SinkSLSParameters& setLogStore(const SinkSLSParameters::LogStore & logStore) { DARABONBA_PTR_SET_VALUE(logStore_, logStore) };
        inline SinkSLSParameters& setLogStore(SinkSLSParameters::LogStore && logStore) { DARABONBA_PTR_SET_RVALUE(logStore_, logStore) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline const SinkSLSParameters::Project & getProject() const { DARABONBA_PTR_GET_CONST(project_, SinkSLSParameters::Project) };
        inline SinkSLSParameters::Project getProject() { DARABONBA_PTR_GET(project_, SinkSLSParameters::Project) };
        inline SinkSLSParameters& setProject(const SinkSLSParameters::Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
        inline SinkSLSParameters& setProject(SinkSLSParameters::Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline const SinkSLSParameters::RoleName & getRoleName() const { DARABONBA_PTR_GET_CONST(roleName_, SinkSLSParameters::RoleName) };
        inline SinkSLSParameters::RoleName getRoleName() { DARABONBA_PTR_GET(roleName_, SinkSLSParameters::RoleName) };
        inline SinkSLSParameters& setRoleName(const SinkSLSParameters::RoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
        inline SinkSLSParameters& setRoleName(SinkSLSParameters::RoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline const SinkSLSParameters::Topic & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, SinkSLSParameters::Topic) };
        inline SinkSLSParameters::Topic getTopic() { DARABONBA_PTR_GET(topic_, SinkSLSParameters::Topic) };
        inline SinkSLSParameters& setTopic(const SinkSLSParameters::Topic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
        inline SinkSLSParameters& setTopic(SinkSLSParameters::Topic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


      protected:
        // The message body that you want to deliver to Simple Log Service.
        shared_ptr<SinkSLSParameters::Body> body_ {};
        shared_ptr<SinkSLSParameters::ContentSchema> contentSchema_ {};
        shared_ptr<SinkSLSParameters::ContentType> contentType_ {};
        // The Simple Log Service Logstore.
        shared_ptr<SinkSLSParameters::LogStore> logStore_ {};
        // The Simple Log Service project.
        shared_ptr<SinkSLSParameters::Project> project_ {};
        // The role name. If you want to authorize EventBridge to use this role to read logs in Simple Log Service, you must select Alibaba Cloud Service for Selected Trusted Entity and EventBridge for Select Trusted Service when you create the role in the RAM console.
        shared_ptr<SinkSLSParameters::RoleName> roleName_ {};
        // The topic that you want to use to store logs. This parameter corresponds to the reserved field **topic** in Simple Log Service.
        shared_ptr<SinkSLSParameters::Topic> topic_ {};
      };

      class SinkRocketMQParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkRocketMQParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(DeliveryOrderType, deliveryOrderType_);
          DARABONBA_PTR_TO_JSON(InstanceEndpoint, instanceEndpoint_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstancePassword, instancePassword_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InstanceUsername, instanceUsername_);
          DARABONBA_PTR_TO_JSON(Keys, keys_);
          DARABONBA_PTR_TO_JSON(Network, network_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(ShardingKey, shardingKey_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SinkRocketMQParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(DeliveryOrderType, deliveryOrderType_);
          DARABONBA_PTR_FROM_JSON(InstanceEndpoint, instanceEndpoint_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstancePassword, instancePassword_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InstanceUsername, instanceUsername_);
          DARABONBA_PTR_FROM_JSON(Keys, keys_);
          DARABONBA_PTR_FROM_JSON(Network, network_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(ShardingKey, shardingKey_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SinkRocketMQParameters() = default ;
        SinkRocketMQParameters(const SinkRocketMQParameters &) = default ;
        SinkRocketMQParameters(SinkRocketMQParameters &&) = default ;
        SinkRocketMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkRocketMQParameters() = default ;
        SinkRocketMQParameters& operator=(const SinkRocketMQParameters &) = default ;
        SinkRocketMQParameters& operator=(SinkRocketMQParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpcId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpcId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VpcId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VpcId() = default ;
          VpcId(const VpcId &) = default ;
          VpcId(VpcId &&) = default ;
          VpcId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpcId() = default ;
          VpcId& operator=(const VpcId &) = default ;
          VpcId& operator=(VpcId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline VpcId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline VpcId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VpcId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The ID of the VPC to which the ApsaraMQ for RocketMQ instance belongs.
          shared_ptr<string> value_ {};
        };

        class VSwitchIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitchIds& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitchIds& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VSwitchIds() = default ;
          VSwitchIds(const VSwitchIds &) = default ;
          VSwitchIds(VSwitchIds &&) = default ;
          VSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VSwitchIds() = default ;
          VSwitchIds& operator=(const VSwitchIds &) = default ;
          VSwitchIds& operator=(VSwitchIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline VSwitchIds& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline VSwitchIds& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VSwitchIds& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The ID of the vSwitch with which the ApsaraMQ for RocketMQ instance is associated.
          shared_ptr<string> value_ {};
        };

        class Topic : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Topic& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Topic& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Topic() = default ;
          Topic(const Topic &) = default ;
          Topic(Topic &&) = default ;
          Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Topic() = default ;
          Topic& operator=(const Topic &) = default ;
          Topic& operator=(Topic &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Topic& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Topic& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Topic& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The name of the topic on the ApsaraMQ for RocketMQ instance.
          shared_ptr<string> value_ {};
        };

        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
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
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Tags& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Tags& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        class ShardingKey : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ShardingKey& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ShardingKey& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ShardingKey() = default ;
          ShardingKey(const ShardingKey &) = default ;
          ShardingKey(ShardingKey &&) = default ;
          ShardingKey(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ShardingKey() = default ;
          ShardingKey& operator=(const ShardingKey &) = default ;
          ShardingKey& operator=(ShardingKey &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline ShardingKey& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline ShardingKey& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ShardingKey& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class SecurityGroupId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityGroupId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityGroupId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SecurityGroupId() = default ;
          SecurityGroupId(const SecurityGroupId &) = default ;
          SecurityGroupId(SecurityGroupId &&) = default ;
          SecurityGroupId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityGroupId() = default ;
          SecurityGroupId& operator=(const SecurityGroupId &) = default ;
          SecurityGroupId& operator=(SecurityGroupId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline SecurityGroupId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline SecurityGroupId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline SecurityGroupId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The ID of the security group to which the ApsaraMQ for RocketMQ instance belongs.
          shared_ptr<string> value_ {};
        };

        class Properties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Properties& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Properties& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Properties() = default ;
          Properties(const Properties &) = default ;
          Properties(Properties &&) = default ;
          Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Properties() = default ;
          Properties& operator=(const Properties &) = default ;
          Properties& operator=(Properties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Properties& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Properties& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        class Network : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Network& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Network& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Network() = default ;
          Network(const Network &) = default ;
          Network(Network &&) = default ;
          Network(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Network() = default ;
          Network& operator=(const Network &) = default ;
          Network& operator=(Network &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Network& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Network& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Network& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The network type.
          // 
          // *   PublicNetwork
          // *   PrivateNetwork
          shared_ptr<string> value_ {};
        };

        class Keys : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Keys& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Keys& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Keys() = default ;
          Keys(const Keys &) = default ;
          Keys(Keys &&) = default ;
          Keys(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Keys() = default ;
          Keys& operator=(const Keys &) = default ;
          Keys& operator=(Keys &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Keys& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Keys& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Keys& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        class InstanceUsername : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceUsername& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceUsername& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InstanceUsername() = default ;
          InstanceUsername(const InstanceUsername &) = default ;
          InstanceUsername(InstanceUsername &&) = default ;
          InstanceUsername(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceUsername() = default ;
          InstanceUsername& operator=(const InstanceUsername &) = default ;
          InstanceUsername& operator=(InstanceUsername &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline InstanceUsername& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline InstanceUsername& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline InstanceUsername& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The username that you want to use to access the ApsaraMQ for RocketMQ instance.
          shared_ptr<string> value_ {};
        };

        class InstanceType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InstanceType() = default ;
          InstanceType(const InstanceType &) = default ;
          InstanceType(InstanceType &&) = default ;
          InstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceType() = default ;
          InstanceType& operator=(const InstanceType &) = default ;
          InstanceType& operator=(InstanceType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline InstanceType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline InstanceType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline InstanceType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The type of the ApsaraMQ for RocketMQ instance.
          shared_ptr<string> value_ {};
        };

        class InstancePassword : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstancePassword& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InstancePassword& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InstancePassword() = default ;
          InstancePassword(const InstancePassword &) = default ;
          InstancePassword(InstancePassword &&) = default ;
          InstancePassword(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstancePassword() = default ;
          InstancePassword& operator=(const InstancePassword &) = default ;
          InstancePassword& operator=(InstancePassword &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline InstancePassword& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline InstancePassword& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline InstancePassword& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The password that you want to use to access the ApsaraMQ for RocketMQ instance.
          shared_ptr<string> value_ {};
        };

        class InstanceId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InstanceId() = default ;
          InstanceId(const InstanceId &) = default ;
          InstanceId(InstanceId &&) = default ;
          InstanceId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceId() = default ;
          InstanceId& operator=(const InstanceId &) = default ;
          InstanceId& operator=(InstanceId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline InstanceId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline InstanceId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline InstanceId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The ID of the ApsaraMQ for RocketMQ instance.
          shared_ptr<string> value_ {};
        };

        class InstanceEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InstanceEndpoint() = default ;
          InstanceEndpoint(const InstanceEndpoint &) = default ;
          InstanceEndpoint(InstanceEndpoint &&) = default ;
          InstanceEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceEndpoint() = default ;
          InstanceEndpoint& operator=(const InstanceEndpoint &) = default ;
          InstanceEndpoint& operator=(InstanceEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline InstanceEndpoint& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline InstanceEndpoint& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline InstanceEndpoint& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The endpoint that you want to use to access the ApsaraMQ for RocketMQ instance.
          shared_ptr<string> value_ {};
        };

        class DeliveryOrderType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DeliveryOrderType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DeliveryOrderType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          DeliveryOrderType() = default ;
          DeliveryOrderType(const DeliveryOrderType &) = default ;
          DeliveryOrderType(DeliveryOrderType &&) = default ;
          DeliveryOrderType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DeliveryOrderType() = default ;
          DeliveryOrderType& operator=(const DeliveryOrderType &) = default ;
          DeliveryOrderType& operator=(DeliveryOrderType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline DeliveryOrderType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline DeliveryOrderType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline DeliveryOrderType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Body : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Body& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Body& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Body() = default ;
          Body(const Body &) = default ;
          Body(Body &&) = default ;
          Body(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Body() = default ;
          Body& operator=(const Body &) = default ;
          Body& operator=(Body &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Body& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Body& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->body_ == nullptr
        && this->deliveryOrderType_ == nullptr && this->instanceEndpoint_ == nullptr && this->instanceId_ == nullptr && this->instancePassword_ == nullptr && this->instanceType_ == nullptr
        && this->instanceUsername_ == nullptr && this->keys_ == nullptr && this->network_ == nullptr && this->properties_ == nullptr && this->securityGroupId_ == nullptr
        && this->shardingKey_ == nullptr && this->tags_ == nullptr && this->topic_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline const SinkRocketMQParameters::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SinkRocketMQParameters::Body) };
        inline SinkRocketMQParameters::Body getBody() { DARABONBA_PTR_GET(body_, SinkRocketMQParameters::Body) };
        inline SinkRocketMQParameters& setBody(const SinkRocketMQParameters::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
        inline SinkRocketMQParameters& setBody(SinkRocketMQParameters::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


        // deliveryOrderType Field Functions 
        bool hasDeliveryOrderType() const { return this->deliveryOrderType_ != nullptr;};
        void deleteDeliveryOrderType() { this->deliveryOrderType_ = nullptr;};
        inline const SinkRocketMQParameters::DeliveryOrderType & getDeliveryOrderType() const { DARABONBA_PTR_GET_CONST(deliveryOrderType_, SinkRocketMQParameters::DeliveryOrderType) };
        inline SinkRocketMQParameters::DeliveryOrderType getDeliveryOrderType() { DARABONBA_PTR_GET(deliveryOrderType_, SinkRocketMQParameters::DeliveryOrderType) };
        inline SinkRocketMQParameters& setDeliveryOrderType(const SinkRocketMQParameters::DeliveryOrderType & deliveryOrderType) { DARABONBA_PTR_SET_VALUE(deliveryOrderType_, deliveryOrderType) };
        inline SinkRocketMQParameters& setDeliveryOrderType(SinkRocketMQParameters::DeliveryOrderType && deliveryOrderType) { DARABONBA_PTR_SET_RVALUE(deliveryOrderType_, deliveryOrderType) };


        // instanceEndpoint Field Functions 
        bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
        void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
        inline const SinkRocketMQParameters::InstanceEndpoint & getInstanceEndpoint() const { DARABONBA_PTR_GET_CONST(instanceEndpoint_, SinkRocketMQParameters::InstanceEndpoint) };
        inline SinkRocketMQParameters::InstanceEndpoint getInstanceEndpoint() { DARABONBA_PTR_GET(instanceEndpoint_, SinkRocketMQParameters::InstanceEndpoint) };
        inline SinkRocketMQParameters& setInstanceEndpoint(const SinkRocketMQParameters::InstanceEndpoint & instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };
        inline SinkRocketMQParameters& setInstanceEndpoint(SinkRocketMQParameters::InstanceEndpoint && instanceEndpoint) { DARABONBA_PTR_SET_RVALUE(instanceEndpoint_, instanceEndpoint) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline const SinkRocketMQParameters::InstanceId & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, SinkRocketMQParameters::InstanceId) };
        inline SinkRocketMQParameters::InstanceId getInstanceId() { DARABONBA_PTR_GET(instanceId_, SinkRocketMQParameters::InstanceId) };
        inline SinkRocketMQParameters& setInstanceId(const SinkRocketMQParameters::InstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
        inline SinkRocketMQParameters& setInstanceId(SinkRocketMQParameters::InstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


        // instancePassword Field Functions 
        bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
        void deleteInstancePassword() { this->instancePassword_ = nullptr;};
        inline const SinkRocketMQParameters::InstancePassword & getInstancePassword() const { DARABONBA_PTR_GET_CONST(instancePassword_, SinkRocketMQParameters::InstancePassword) };
        inline SinkRocketMQParameters::InstancePassword getInstancePassword() { DARABONBA_PTR_GET(instancePassword_, SinkRocketMQParameters::InstancePassword) };
        inline SinkRocketMQParameters& setInstancePassword(const SinkRocketMQParameters::InstancePassword & instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };
        inline SinkRocketMQParameters& setInstancePassword(SinkRocketMQParameters::InstancePassword && instancePassword) { DARABONBA_PTR_SET_RVALUE(instancePassword_, instancePassword) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline const SinkRocketMQParameters::InstanceType & getInstanceType() const { DARABONBA_PTR_GET_CONST(instanceType_, SinkRocketMQParameters::InstanceType) };
        inline SinkRocketMQParameters::InstanceType getInstanceType() { DARABONBA_PTR_GET(instanceType_, SinkRocketMQParameters::InstanceType) };
        inline SinkRocketMQParameters& setInstanceType(const SinkRocketMQParameters::InstanceType & instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };
        inline SinkRocketMQParameters& setInstanceType(SinkRocketMQParameters::InstanceType && instanceType) { DARABONBA_PTR_SET_RVALUE(instanceType_, instanceType) };


        // instanceUsername Field Functions 
        bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
        void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
        inline const SinkRocketMQParameters::InstanceUsername & getInstanceUsername() const { DARABONBA_PTR_GET_CONST(instanceUsername_, SinkRocketMQParameters::InstanceUsername) };
        inline SinkRocketMQParameters::InstanceUsername getInstanceUsername() { DARABONBA_PTR_GET(instanceUsername_, SinkRocketMQParameters::InstanceUsername) };
        inline SinkRocketMQParameters& setInstanceUsername(const SinkRocketMQParameters::InstanceUsername & instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };
        inline SinkRocketMQParameters& setInstanceUsername(SinkRocketMQParameters::InstanceUsername && instanceUsername) { DARABONBA_PTR_SET_RVALUE(instanceUsername_, instanceUsername) };


        // keys Field Functions 
        bool hasKeys() const { return this->keys_ != nullptr;};
        void deleteKeys() { this->keys_ = nullptr;};
        inline const SinkRocketMQParameters::Keys & getKeys() const { DARABONBA_PTR_GET_CONST(keys_, SinkRocketMQParameters::Keys) };
        inline SinkRocketMQParameters::Keys getKeys() { DARABONBA_PTR_GET(keys_, SinkRocketMQParameters::Keys) };
        inline SinkRocketMQParameters& setKeys(const SinkRocketMQParameters::Keys & keys) { DARABONBA_PTR_SET_VALUE(keys_, keys) };
        inline SinkRocketMQParameters& setKeys(SinkRocketMQParameters::Keys && keys) { DARABONBA_PTR_SET_RVALUE(keys_, keys) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline const SinkRocketMQParameters::Network & getNetwork() const { DARABONBA_PTR_GET_CONST(network_, SinkRocketMQParameters::Network) };
        inline SinkRocketMQParameters::Network getNetwork() { DARABONBA_PTR_GET(network_, SinkRocketMQParameters::Network) };
        inline SinkRocketMQParameters& setNetwork(const SinkRocketMQParameters::Network & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
        inline SinkRocketMQParameters& setNetwork(SinkRocketMQParameters::Network && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const SinkRocketMQParameters::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, SinkRocketMQParameters::Properties) };
        inline SinkRocketMQParameters::Properties getProperties() { DARABONBA_PTR_GET(properties_, SinkRocketMQParameters::Properties) };
        inline SinkRocketMQParameters& setProperties(const SinkRocketMQParameters::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline SinkRocketMQParameters& setProperties(SinkRocketMQParameters::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline const SinkRocketMQParameters::SecurityGroupId & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, SinkRocketMQParameters::SecurityGroupId) };
        inline SinkRocketMQParameters::SecurityGroupId getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, SinkRocketMQParameters::SecurityGroupId) };
        inline SinkRocketMQParameters& setSecurityGroupId(const SinkRocketMQParameters::SecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
        inline SinkRocketMQParameters& setSecurityGroupId(SinkRocketMQParameters::SecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


        // shardingKey Field Functions 
        bool hasShardingKey() const { return this->shardingKey_ != nullptr;};
        void deleteShardingKey() { this->shardingKey_ = nullptr;};
        inline const SinkRocketMQParameters::ShardingKey & getShardingKey() const { DARABONBA_PTR_GET_CONST(shardingKey_, SinkRocketMQParameters::ShardingKey) };
        inline SinkRocketMQParameters::ShardingKey getShardingKey() { DARABONBA_PTR_GET(shardingKey_, SinkRocketMQParameters::ShardingKey) };
        inline SinkRocketMQParameters& setShardingKey(const SinkRocketMQParameters::ShardingKey & shardingKey) { DARABONBA_PTR_SET_VALUE(shardingKey_, shardingKey) };
        inline SinkRocketMQParameters& setShardingKey(SinkRocketMQParameters::ShardingKey && shardingKey) { DARABONBA_PTR_SET_RVALUE(shardingKey_, shardingKey) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const SinkRocketMQParameters::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, SinkRocketMQParameters::Tags) };
        inline SinkRocketMQParameters::Tags getTags() { DARABONBA_PTR_GET(tags_, SinkRocketMQParameters::Tags) };
        inline SinkRocketMQParameters& setTags(const SinkRocketMQParameters::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline SinkRocketMQParameters& setTags(SinkRocketMQParameters::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline const SinkRocketMQParameters::Topic & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, SinkRocketMQParameters::Topic) };
        inline SinkRocketMQParameters::Topic getTopic() { DARABONBA_PTR_GET(topic_, SinkRocketMQParameters::Topic) };
        inline SinkRocketMQParameters& setTopic(const SinkRocketMQParameters::Topic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
        inline SinkRocketMQParameters& setTopic(SinkRocketMQParameters::Topic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const SinkRocketMQParameters::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, SinkRocketMQParameters::VSwitchIds) };
        inline SinkRocketMQParameters::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, SinkRocketMQParameters::VSwitchIds) };
        inline SinkRocketMQParameters& setVSwitchIds(const SinkRocketMQParameters::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline SinkRocketMQParameters& setVSwitchIds(SinkRocketMQParameters::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline const SinkRocketMQParameters::VpcId & getVpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, SinkRocketMQParameters::VpcId) };
        inline SinkRocketMQParameters::VpcId getVpcId() { DARABONBA_PTR_GET(vpcId_, SinkRocketMQParameters::VpcId) };
        inline SinkRocketMQParameters& setVpcId(const SinkRocketMQParameters::VpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
        inline SinkRocketMQParameters& setVpcId(SinkRocketMQParameters::VpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


      protected:
        // The message content.
        shared_ptr<SinkRocketMQParameters::Body> body_ {};
        shared_ptr<SinkRocketMQParameters::DeliveryOrderType> deliveryOrderType_ {};
        // The endpoint that you want to use to access the ApsaraMQ for RocketMQ instance.
        shared_ptr<SinkRocketMQParameters::InstanceEndpoint> instanceEndpoint_ {};
        // The ID of the ApsaraMQ for RocketMQ instance.
        shared_ptr<SinkRocketMQParameters::InstanceId> instanceId_ {};
        // The password that you want to use to access the ApsaraMQ for RocketMQ instance.
        shared_ptr<SinkRocketMQParameters::InstancePassword> instancePassword_ {};
        // The type of the ApsaraMQ for RocketMQ instance.
        shared_ptr<SinkRocketMQParameters::InstanceType> instanceType_ {};
        // The username that you want to use to access the ApsaraMQ for RocketMQ instance.
        shared_ptr<SinkRocketMQParameters::InstanceUsername> instanceUsername_ {};
        // The keys that you want to use to filter messages.
        shared_ptr<SinkRocketMQParameters::Keys> keys_ {};
        // The network type.
        // 
        // *   PublicNetwork
        // *   PrivateNetwork
        shared_ptr<SinkRocketMQParameters::Network> network_ {};
        // The properties that you want to use to filter messages.
        shared_ptr<SinkRocketMQParameters::Properties> properties_ {};
        // The ID of the security group to which the ApsaraMQ for RocketMQ instance belongs.
        shared_ptr<SinkRocketMQParameters::SecurityGroupId> securityGroupId_ {};
        shared_ptr<SinkRocketMQParameters::ShardingKey> shardingKey_ {};
        // The tags that you want to use to filter messages.
        shared_ptr<SinkRocketMQParameters::Tags> tags_ {};
        // The name of the topic on the ApsaraMQ for RocketMQ instance.
        shared_ptr<SinkRocketMQParameters::Topic> topic_ {};
        // The ID of the vSwitch with which the ApsaraMQ for RocketMQ instance is associated.
        shared_ptr<SinkRocketMQParameters::VSwitchIds> vSwitchIds_ {};
        // The ID of the VPC to which the ApsaraMQ for RocketMQ instance belongs.
        shared_ptr<SinkRocketMQParameters::VpcId> vpcId_ {};
      };

      class SinkRocketMQCheckpointParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkRocketMQCheckpointParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumeTimestamp, consumeTimestamp_);
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
        };
        friend void from_json(const Darabonba::Json& j, SinkRocketMQCheckpointParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumeTimestamp, consumeTimestamp_);
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
        };
        SinkRocketMQCheckpointParameters() = default ;
        SinkRocketMQCheckpointParameters(const SinkRocketMQCheckpointParameters &) = default ;
        SinkRocketMQCheckpointParameters(SinkRocketMQCheckpointParameters &&) = default ;
        SinkRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkRocketMQCheckpointParameters() = default ;
        SinkRocketMQCheckpointParameters& operator=(const SinkRocketMQCheckpointParameters &) = default ;
        SinkRocketMQCheckpointParameters& operator=(SinkRocketMQCheckpointParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Topic : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Topic& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Topic& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Topic() = default ;
          Topic(const Topic &) = default ;
          Topic(Topic &&) = default ;
          Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Topic() = default ;
          Topic& operator=(const Topic &) = default ;
          Topic& operator=(Topic &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Topic& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Topic& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Topic& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Group : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Group& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Group& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Group() = default ;
          Group(const Group &) = default ;
          Group(Group &&) = default ;
          Group(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Group() = default ;
          Group& operator=(const Group &) = default ;
          Group& operator=(Group &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Group& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Group& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Group& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class ConsumeTimestamp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumeTimestamp& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumeTimestamp& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ConsumeTimestamp() = default ;
          ConsumeTimestamp(const ConsumeTimestamp &) = default ;
          ConsumeTimestamp(ConsumeTimestamp &&) = default ;
          ConsumeTimestamp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumeTimestamp() = default ;
          ConsumeTimestamp& operator=(const ConsumeTimestamp &) = default ;
          ConsumeTimestamp& operator=(ConsumeTimestamp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline ConsumeTimestamp& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline ConsumeTimestamp& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ConsumeTimestamp& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->consumeTimestamp_ == nullptr
        && this->group_ == nullptr && this->instanceId_ == nullptr && this->instanceType_ == nullptr && this->topic_ == nullptr; };
        // consumeTimestamp Field Functions 
        bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
        void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
        inline const SinkRocketMQCheckpointParameters::ConsumeTimestamp & getConsumeTimestamp() const { DARABONBA_PTR_GET_CONST(consumeTimestamp_, SinkRocketMQCheckpointParameters::ConsumeTimestamp) };
        inline SinkRocketMQCheckpointParameters::ConsumeTimestamp getConsumeTimestamp() { DARABONBA_PTR_GET(consumeTimestamp_, SinkRocketMQCheckpointParameters::ConsumeTimestamp) };
        inline SinkRocketMQCheckpointParameters& setConsumeTimestamp(const SinkRocketMQCheckpointParameters::ConsumeTimestamp & consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };
        inline SinkRocketMQCheckpointParameters& setConsumeTimestamp(SinkRocketMQCheckpointParameters::ConsumeTimestamp && consumeTimestamp) { DARABONBA_PTR_SET_RVALUE(consumeTimestamp_, consumeTimestamp) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline const SinkRocketMQCheckpointParameters::Group & getGroup() const { DARABONBA_PTR_GET_CONST(group_, SinkRocketMQCheckpointParameters::Group) };
        inline SinkRocketMQCheckpointParameters::Group getGroup() { DARABONBA_PTR_GET(group_, SinkRocketMQCheckpointParameters::Group) };
        inline SinkRocketMQCheckpointParameters& setGroup(const SinkRocketMQCheckpointParameters::Group & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
        inline SinkRocketMQCheckpointParameters& setGroup(SinkRocketMQCheckpointParameters::Group && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SinkRocketMQCheckpointParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SinkRocketMQCheckpointParameters& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline const SinkRocketMQCheckpointParameters::Topic & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, SinkRocketMQCheckpointParameters::Topic) };
        inline SinkRocketMQCheckpointParameters::Topic getTopic() { DARABONBA_PTR_GET(topic_, SinkRocketMQCheckpointParameters::Topic) };
        inline SinkRocketMQCheckpointParameters& setTopic(const SinkRocketMQCheckpointParameters::Topic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
        inline SinkRocketMQCheckpointParameters& setTopic(SinkRocketMQCheckpointParameters::Topic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


      protected:
        shared_ptr<SinkRocketMQCheckpointParameters::ConsumeTimestamp> consumeTimestamp_ {};
        shared_ptr<SinkRocketMQCheckpointParameters::Group> group_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceType_ {};
        shared_ptr<SinkRocketMQCheckpointParameters::Topic> topic_ {};
      };

      class SinkRabbitMQParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkRabbitMQParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(Exchange, exchange_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(MessageId, messageId_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
          DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
        };
        friend void from_json(const Darabonba::Json& j, SinkRabbitMQParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(Exchange, exchange_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
          DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
        };
        SinkRabbitMQParameters() = default ;
        SinkRabbitMQParameters(const SinkRabbitMQParameters &) = default ;
        SinkRabbitMQParameters(SinkRabbitMQParameters &&) = default ;
        SinkRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkRabbitMQParameters() = default ;
        SinkRabbitMQParameters& operator=(const SinkRabbitMQParameters &) = default ;
        SinkRabbitMQParameters& operator=(SinkRabbitMQParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VirtualHostName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VirtualHostName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VirtualHostName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VirtualHostName() = default ;
          VirtualHostName(const VirtualHostName &) = default ;
          VirtualHostName(VirtualHostName &&) = default ;
          VirtualHostName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VirtualHostName() = default ;
          VirtualHostName& operator=(const VirtualHostName &) = default ;
          VirtualHostName& operator=(VirtualHostName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline VirtualHostName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline VirtualHostName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VirtualHostName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The name of the vhost to which the ApsaraMQ for RabbitMQ instance belongs.
          shared_ptr<string> value_ {};
        };

        class TargetType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TargetType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TargetType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TargetType() = default ;
          TargetType(const TargetType &) = default ;
          TargetType(TargetType &&) = default ;
          TargetType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TargetType() = default ;
          TargetType& operator=(const TargetType &) = default ;
          TargetType& operator=(TargetType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline TargetType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline TargetType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TargetType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The type of the resource to which you want to deliver events. Valid values:
          // 
          // *   Exchange
          // *   Queue
          shared_ptr<string> value_ {};
        };

        class RoutingKey : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoutingKey& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RoutingKey& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RoutingKey() = default ;
          RoutingKey(const RoutingKey &) = default ;
          RoutingKey(RoutingKey &&) = default ;
          RoutingKey(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoutingKey() = default ;
          RoutingKey& operator=(const RoutingKey &) = default ;
          RoutingKey& operator=(RoutingKey &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline RoutingKey& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline RoutingKey& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RoutingKey& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The rule that you want to use to route messages.
          shared_ptr<string> value_ {};
        };

        class QueueName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueueName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, QueueName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          QueueName() = default ;
          QueueName(const QueueName &) = default ;
          QueueName(QueueName &&) = default ;
          QueueName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueueName() = default ;
          QueueName& operator=(const QueueName &) = default ;
          QueueName& operator=(QueueName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline QueueName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline QueueName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline QueueName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The name of the queue on the ApsaraMQ for RabbitMQ instance.
          shared_ptr<string> value_ {};
        };

        class Properties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Properties& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Properties& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Properties() = default ;
          Properties(const Properties &) = default ;
          Properties(Properties &&) = default ;
          Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Properties() = default ;
          Properties& operator=(const Properties &) = default ;
          Properties& operator=(Properties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Properties& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Properties& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        class MessageId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MessageId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MessageId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MessageId() = default ;
          MessageId(const MessageId &) = default ;
          MessageId(MessageId &&) = default ;
          MessageId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MessageId() = default ;
          MessageId& operator=(const MessageId &) = default ;
          MessageId& operator=(MessageId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline MessageId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline MessageId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline MessageId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        class InstanceId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InstanceId() = default ;
          InstanceId(const InstanceId &) = default ;
          InstanceId(InstanceId &&) = default ;
          InstanceId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceId() = default ;
          InstanceId& operator=(const InstanceId &) = default ;
          InstanceId& operator=(InstanceId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline InstanceId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline InstanceId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline InstanceId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The ID of the ApsaraMQ for RabbitMQ instance.
          shared_ptr<string> value_ {};
        };

        class Exchange : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Exchange& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Exchange& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Exchange() = default ;
          Exchange(const Exchange &) = default ;
          Exchange(Exchange &&) = default ;
          Exchange(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Exchange() = default ;
          Exchange& operator=(const Exchange &) = default ;
          Exchange& operator=(Exchange &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Exchange& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Exchange& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Exchange& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The name of the exchange on the ApsaraMQ for RabbitMQ instance.
          shared_ptr<string> value_ {};
        };

        class Body : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Body& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Body& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Body() = default ;
          Body(const Body &) = default ;
          Body(Body &&) = default ;
          Body(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Body() = default ;
          Body& operator=(const Body &) = default ;
          Body& operator=(Body &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Body& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Body& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->body_ == nullptr
        && this->exchange_ == nullptr && this->instanceId_ == nullptr && this->messageId_ == nullptr && this->properties_ == nullptr && this->queueName_ == nullptr
        && this->routingKey_ == nullptr && this->targetType_ == nullptr && this->virtualHostName_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline const SinkRabbitMQParameters::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SinkRabbitMQParameters::Body) };
        inline SinkRabbitMQParameters::Body getBody() { DARABONBA_PTR_GET(body_, SinkRabbitMQParameters::Body) };
        inline SinkRabbitMQParameters& setBody(const SinkRabbitMQParameters::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
        inline SinkRabbitMQParameters& setBody(SinkRabbitMQParameters::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


        // exchange Field Functions 
        bool hasExchange() const { return this->exchange_ != nullptr;};
        void deleteExchange() { this->exchange_ = nullptr;};
        inline const SinkRabbitMQParameters::Exchange & getExchange() const { DARABONBA_PTR_GET_CONST(exchange_, SinkRabbitMQParameters::Exchange) };
        inline SinkRabbitMQParameters::Exchange getExchange() { DARABONBA_PTR_GET(exchange_, SinkRabbitMQParameters::Exchange) };
        inline SinkRabbitMQParameters& setExchange(const SinkRabbitMQParameters::Exchange & exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };
        inline SinkRabbitMQParameters& setExchange(SinkRabbitMQParameters::Exchange && exchange) { DARABONBA_PTR_SET_RVALUE(exchange_, exchange) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline const SinkRabbitMQParameters::InstanceId & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, SinkRabbitMQParameters::InstanceId) };
        inline SinkRabbitMQParameters::InstanceId getInstanceId() { DARABONBA_PTR_GET(instanceId_, SinkRabbitMQParameters::InstanceId) };
        inline SinkRabbitMQParameters& setInstanceId(const SinkRabbitMQParameters::InstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
        inline SinkRabbitMQParameters& setInstanceId(SinkRabbitMQParameters::InstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline const SinkRabbitMQParameters::MessageId & getMessageId() const { DARABONBA_PTR_GET_CONST(messageId_, SinkRabbitMQParameters::MessageId) };
        inline SinkRabbitMQParameters::MessageId getMessageId() { DARABONBA_PTR_GET(messageId_, SinkRabbitMQParameters::MessageId) };
        inline SinkRabbitMQParameters& setMessageId(const SinkRabbitMQParameters::MessageId & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
        inline SinkRabbitMQParameters& setMessageId(SinkRabbitMQParameters::MessageId && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const SinkRabbitMQParameters::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, SinkRabbitMQParameters::Properties) };
        inline SinkRabbitMQParameters::Properties getProperties() { DARABONBA_PTR_GET(properties_, SinkRabbitMQParameters::Properties) };
        inline SinkRabbitMQParameters& setProperties(const SinkRabbitMQParameters::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline SinkRabbitMQParameters& setProperties(SinkRabbitMQParameters::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline const SinkRabbitMQParameters::QueueName & getQueueName() const { DARABONBA_PTR_GET_CONST(queueName_, SinkRabbitMQParameters::QueueName) };
        inline SinkRabbitMQParameters::QueueName getQueueName() { DARABONBA_PTR_GET(queueName_, SinkRabbitMQParameters::QueueName) };
        inline SinkRabbitMQParameters& setQueueName(const SinkRabbitMQParameters::QueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
        inline SinkRabbitMQParameters& setQueueName(SinkRabbitMQParameters::QueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


        // routingKey Field Functions 
        bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
        void deleteRoutingKey() { this->routingKey_ = nullptr;};
        inline const SinkRabbitMQParameters::RoutingKey & getRoutingKey() const { DARABONBA_PTR_GET_CONST(routingKey_, SinkRabbitMQParameters::RoutingKey) };
        inline SinkRabbitMQParameters::RoutingKey getRoutingKey() { DARABONBA_PTR_GET(routingKey_, SinkRabbitMQParameters::RoutingKey) };
        inline SinkRabbitMQParameters& setRoutingKey(const SinkRabbitMQParameters::RoutingKey & routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };
        inline SinkRabbitMQParameters& setRoutingKey(SinkRabbitMQParameters::RoutingKey && routingKey) { DARABONBA_PTR_SET_RVALUE(routingKey_, routingKey) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline const SinkRabbitMQParameters::TargetType & getTargetType() const { DARABONBA_PTR_GET_CONST(targetType_, SinkRabbitMQParameters::TargetType) };
        inline SinkRabbitMQParameters::TargetType getTargetType() { DARABONBA_PTR_GET(targetType_, SinkRabbitMQParameters::TargetType) };
        inline SinkRabbitMQParameters& setTargetType(const SinkRabbitMQParameters::TargetType & targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };
        inline SinkRabbitMQParameters& setTargetType(SinkRabbitMQParameters::TargetType && targetType) { DARABONBA_PTR_SET_RVALUE(targetType_, targetType) };


        // virtualHostName Field Functions 
        bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
        void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
        inline const SinkRabbitMQParameters::VirtualHostName & getVirtualHostName() const { DARABONBA_PTR_GET_CONST(virtualHostName_, SinkRabbitMQParameters::VirtualHostName) };
        inline SinkRabbitMQParameters::VirtualHostName getVirtualHostName() { DARABONBA_PTR_GET(virtualHostName_, SinkRabbitMQParameters::VirtualHostName) };
        inline SinkRabbitMQParameters& setVirtualHostName(const SinkRabbitMQParameters::VirtualHostName & virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };
        inline SinkRabbitMQParameters& setVirtualHostName(SinkRabbitMQParameters::VirtualHostName && virtualHostName) { DARABONBA_PTR_SET_RVALUE(virtualHostName_, virtualHostName) };


      protected:
        // The message content.
        shared_ptr<SinkRabbitMQParameters::Body> body_ {};
        // The exchange mode. This parameter is required only if you set TargetType to Exchange.
        shared_ptr<SinkRabbitMQParameters::Exchange> exchange_ {};
        // The ID of the ApsaraMQ for RabbitMQ instance.
        shared_ptr<SinkRabbitMQParameters::InstanceId> instanceId_ {};
        // The message ID.
        shared_ptr<SinkRabbitMQParameters::MessageId> messageId_ {};
        // The properties that you want to use to filter messages.
        shared_ptr<SinkRabbitMQParameters::Properties> properties_ {};
        // The queue mode. This parameter is required only if you set TargetType to Queue.
        shared_ptr<SinkRabbitMQParameters::QueueName> queueName_ {};
        // The rule that you want to use to route messages. This parameter is required only if you set TargetType to Exchange.
        shared_ptr<SinkRabbitMQParameters::RoutingKey> routingKey_ {};
        // The type of the resource to which you want to deliver events.
        shared_ptr<SinkRabbitMQParameters::TargetType> targetType_ {};
        // The name of the vhost to which the ApsaraMQ for RabbitMQ instance belongs.
        shared_ptr<SinkRabbitMQParameters::VirtualHostName> virtualHostName_ {};
      };

      class SinkPrometheusParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkPrometheusParameters& obj) { 
          DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(HeaderParameters, headerParameters_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(URL, URL_);
          DARABONBA_PTR_TO_JSON(Username, username_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SinkPrometheusParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(HeaderParameters, headerParameters_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(URL, URL_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SinkPrometheusParameters() = default ;
        SinkPrometheusParameters(const SinkPrometheusParameters &) = default ;
        SinkPrometheusParameters(SinkPrometheusParameters &&) = default ;
        SinkPrometheusParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkPrometheusParameters() = default ;
        SinkPrometheusParameters& operator=(const SinkPrometheusParameters &) = default ;
        SinkPrometheusParameters& operator=(SinkPrometheusParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpcId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpcId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VpcId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VpcId() = default ;
          VpcId(const VpcId &) = default ;
          VpcId(VpcId &&) = default ;
          VpcId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpcId() = default ;
          VpcId& operator=(const VpcId &) = default ;
          VpcId& operator=(VpcId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline VpcId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline VpcId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VpcId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The ID of the VPC to which the Managed Service for Prometheus instance belongs.
          shared_ptr<string> value_ {};
        };

        class VSwitchId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitchId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitchId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VSwitchId() = default ;
          VSwitchId(const VSwitchId &) = default ;
          VSwitchId(VSwitchId &&) = default ;
          VSwitchId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VSwitchId() = default ;
          VSwitchId& operator=(const VSwitchId &) = default ;
          VSwitchId& operator=(VSwitchId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline VSwitchId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline VSwitchId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VSwitchId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The ID of the vSwitch with which the Managed Service for Prometheus instance is associated.
          shared_ptr<string> value_ {};
        };

        class Username : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Username& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Username& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Username() = default ;
          Username(const Username &) = default ;
          Username(Username &&) = default ;
          Username(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Username() = default ;
          Username& operator=(const Username &) = default ;
          Username& operator=(Username &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Username& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Username& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Username& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The username.
          shared_ptr<string> value_ {};
        };

        class URL : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const URL& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, URL& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          URL() = default ;
          URL(const URL &) = default ;
          URL(URL &&) = default ;
          URL(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~URL() = default ;
          URL& operator=(const URL &) = default ;
          URL& operator=(URL &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline URL& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline URL& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline URL& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The URL for the remote write configuration item of the Managed Service for Prometheus instance.
          shared_ptr<string> value_ {};
        };

        class SecurityGroupId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityGroupId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityGroupId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SecurityGroupId() = default ;
          SecurityGroupId(const SecurityGroupId &) = default ;
          SecurityGroupId(SecurityGroupId &&) = default ;
          SecurityGroupId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityGroupId() = default ;
          SecurityGroupId& operator=(const SecurityGroupId &) = default ;
          SecurityGroupId& operator=(SecurityGroupId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline SecurityGroupId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline SecurityGroupId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline SecurityGroupId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The ID of the security group to which the Managed Service for Prometheus instance belongs.
          shared_ptr<string> value_ {};
        };

        class Password : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Password& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Password& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Password() = default ;
          Password(const Password &) = default ;
          Password(Password &&) = default ;
          Password(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Password() = default ;
          Password& operator=(const Password &) = default ;
          Password& operator=(Password &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Password& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Password& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Password& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The password.
          shared_ptr<string> value_ {};
        };

        class NetworkType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          NetworkType() = default ;
          NetworkType(const NetworkType &) = default ;
          NetworkType(NetworkType &&) = default ;
          NetworkType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkType() = default ;
          NetworkType& operator=(const NetworkType &) = default ;
          NetworkType& operator=(NetworkType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline NetworkType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline NetworkType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline NetworkType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The network type.
          shared_ptr<string> value_ {};
        };

        class HeaderParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HeaderParameters& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, HeaderParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          HeaderParameters() = default ;
          HeaderParameters(const HeaderParameters &) = default ;
          HeaderParameters(HeaderParameters &&) = default ;
          HeaderParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HeaderParameters() = default ;
          HeaderParameters& operator=(const HeaderParameters &) = default ;
          HeaderParameters& operator=(HeaderParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline HeaderParameters& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline HeaderParameters& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline HeaderParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Data() = default ;
          Data(const Data &) = default ;
          Data(Data &&) = default ;
          Data(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Data() = default ;
          Data& operator=(const Data &) = default ;
          Data& operator=(Data &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Data& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Data& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: JSAONPATH.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The metric data.
          shared_ptr<string> value_ {};
        };

        class AuthorizationType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AuthorizationType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, AuthorizationType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          AuthorizationType() = default ;
          AuthorizationType(const AuthorizationType &) = default ;
          AuthorizationType(AuthorizationType &&) = default ;
          AuthorizationType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AuthorizationType() = default ;
          AuthorizationType& operator=(const AuthorizationType &) = default ;
          AuthorizationType& operator=(AuthorizationType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline AuthorizationType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline AuthorizationType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline AuthorizationType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The authentication method.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->authorizationType_ == nullptr
        && this->data_ == nullptr && this->headerParameters_ == nullptr && this->networkType_ == nullptr && this->password_ == nullptr && this->securityGroupId_ == nullptr
        && this->URL_ == nullptr && this->username_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // authorizationType Field Functions 
        bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
        void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
        inline const SinkPrometheusParameters::AuthorizationType & getAuthorizationType() const { DARABONBA_PTR_GET_CONST(authorizationType_, SinkPrometheusParameters::AuthorizationType) };
        inline SinkPrometheusParameters::AuthorizationType getAuthorizationType() { DARABONBA_PTR_GET(authorizationType_, SinkPrometheusParameters::AuthorizationType) };
        inline SinkPrometheusParameters& setAuthorizationType(const SinkPrometheusParameters::AuthorizationType & authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };
        inline SinkPrometheusParameters& setAuthorizationType(SinkPrometheusParameters::AuthorizationType && authorizationType) { DARABONBA_PTR_SET_RVALUE(authorizationType_, authorizationType) };


        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const SinkPrometheusParameters::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, SinkPrometheusParameters::Data) };
        inline SinkPrometheusParameters::Data getData() { DARABONBA_PTR_GET(data_, SinkPrometheusParameters::Data) };
        inline SinkPrometheusParameters& setData(const SinkPrometheusParameters::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline SinkPrometheusParameters& setData(SinkPrometheusParameters::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // headerParameters Field Functions 
        bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
        void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
        inline const SinkPrometheusParameters::HeaderParameters & getHeaderParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, SinkPrometheusParameters::HeaderParameters) };
        inline SinkPrometheusParameters::HeaderParameters getHeaderParameters() { DARABONBA_PTR_GET(headerParameters_, SinkPrometheusParameters::HeaderParameters) };
        inline SinkPrometheusParameters& setHeaderParameters(const SinkPrometheusParameters::HeaderParameters & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
        inline SinkPrometheusParameters& setHeaderParameters(SinkPrometheusParameters::HeaderParameters && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline const SinkPrometheusParameters::NetworkType & getNetworkType() const { DARABONBA_PTR_GET_CONST(networkType_, SinkPrometheusParameters::NetworkType) };
        inline SinkPrometheusParameters::NetworkType getNetworkType() { DARABONBA_PTR_GET(networkType_, SinkPrometheusParameters::NetworkType) };
        inline SinkPrometheusParameters& setNetworkType(const SinkPrometheusParameters::NetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
        inline SinkPrometheusParameters& setNetworkType(SinkPrometheusParameters::NetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline const SinkPrometheusParameters::Password & getPassword() const { DARABONBA_PTR_GET_CONST(password_, SinkPrometheusParameters::Password) };
        inline SinkPrometheusParameters::Password getPassword() { DARABONBA_PTR_GET(password_, SinkPrometheusParameters::Password) };
        inline SinkPrometheusParameters& setPassword(const SinkPrometheusParameters::Password & password) { DARABONBA_PTR_SET_VALUE(password_, password) };
        inline SinkPrometheusParameters& setPassword(SinkPrometheusParameters::Password && password) { DARABONBA_PTR_SET_RVALUE(password_, password) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline const SinkPrometheusParameters::SecurityGroupId & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, SinkPrometheusParameters::SecurityGroupId) };
        inline SinkPrometheusParameters::SecurityGroupId getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, SinkPrometheusParameters::SecurityGroupId) };
        inline SinkPrometheusParameters& setSecurityGroupId(const SinkPrometheusParameters::SecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
        inline SinkPrometheusParameters& setSecurityGroupId(SinkPrometheusParameters::SecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


        // URL Field Functions 
        bool hasURL() const { return this->URL_ != nullptr;};
        void deleteURL() { this->URL_ = nullptr;};
        inline const SinkPrometheusParameters::URL & getURL() const { DARABONBA_PTR_GET_CONST(URL_, SinkPrometheusParameters::URL) };
        inline SinkPrometheusParameters::URL getURL() { DARABONBA_PTR_GET(URL_, SinkPrometheusParameters::URL) };
        inline SinkPrometheusParameters& setURL(const SinkPrometheusParameters::URL & uRL) { DARABONBA_PTR_SET_VALUE(URL_, uRL) };
        inline SinkPrometheusParameters& setURL(SinkPrometheusParameters::URL && uRL) { DARABONBA_PTR_SET_RVALUE(URL_, uRL) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline const SinkPrometheusParameters::Username & getUsername() const { DARABONBA_PTR_GET_CONST(username_, SinkPrometheusParameters::Username) };
        inline SinkPrometheusParameters::Username getUsername() { DARABONBA_PTR_GET(username_, SinkPrometheusParameters::Username) };
        inline SinkPrometheusParameters& setUsername(const SinkPrometheusParameters::Username & username) { DARABONBA_PTR_SET_VALUE(username_, username) };
        inline SinkPrometheusParameters& setUsername(SinkPrometheusParameters::Username && username) { DARABONBA_PTR_SET_RVALUE(username_, username) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline const SinkPrometheusParameters::VSwitchId & getVSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, SinkPrometheusParameters::VSwitchId) };
        inline SinkPrometheusParameters::VSwitchId getVSwitchId() { DARABONBA_PTR_GET(vSwitchId_, SinkPrometheusParameters::VSwitchId) };
        inline SinkPrometheusParameters& setVSwitchId(const SinkPrometheusParameters::VSwitchId & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
        inline SinkPrometheusParameters& setVSwitchId(SinkPrometheusParameters::VSwitchId && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline const SinkPrometheusParameters::VpcId & getVpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, SinkPrometheusParameters::VpcId) };
        inline SinkPrometheusParameters::VpcId getVpcId() { DARABONBA_PTR_GET(vpcId_, SinkPrometheusParameters::VpcId) };
        inline SinkPrometheusParameters& setVpcId(const SinkPrometheusParameters::VpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
        inline SinkPrometheusParameters& setVpcId(SinkPrometheusParameters::VpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


      protected:
        // The authentication method.
        shared_ptr<SinkPrometheusParameters::AuthorizationType> authorizationType_ {};
        // The metric data.
        shared_ptr<SinkPrometheusParameters::Data> data_ {};
        shared_ptr<SinkPrometheusParameters::HeaderParameters> headerParameters_ {};
        // The network type.
        shared_ptr<SinkPrometheusParameters::NetworkType> networkType_ {};
        // The password.
        shared_ptr<SinkPrometheusParameters::Password> password_ {};
        // The ID of the security group to which the Managed Service for Prometheus instance belongs.
        shared_ptr<SinkPrometheusParameters::SecurityGroupId> securityGroupId_ {};
        // The URL for the remote write configuration item of the Managed Service for Prometheus instance.
        shared_ptr<SinkPrometheusParameters::URL> URL_ {};
        // The username.
        shared_ptr<SinkPrometheusParameters::Username> username_ {};
        // The ID of the vSwitch with which the Managed Service for Prometheus instance is associated.
        shared_ptr<SinkPrometheusParameters::VSwitchId> vSwitchId_ {};
        // The ID of the VPC to which the Managed Service for Prometheus instance belongs.
        shared_ptr<SinkPrometheusParameters::VpcId> vpcId_ {};
      };

      class SinkOpenSourceRabbitMQParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkOpenSourceRabbitMQParameters& obj) { 
          DARABONBA_PTR_TO_JSON(AuthType, authType_);
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_TO_JSON(Exchange, exchange_);
          DARABONBA_PTR_TO_JSON(MessageId, messageId_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(Properties, properties_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
          DARABONBA_PTR_TO_JSON(RoutingKey, routingKey_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(TargetType, targetType_);
          DARABONBA_PTR_TO_JSON(Username, username_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(VirtualHostName, virtualHostName_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SinkOpenSourceRabbitMQParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthType, authType_);
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
          DARABONBA_PTR_FROM_JSON(Exchange, exchange_);
          DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(Properties, properties_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
          DARABONBA_PTR_FROM_JSON(RoutingKey, routingKey_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(VirtualHostName, virtualHostName_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SinkOpenSourceRabbitMQParameters() = default ;
        SinkOpenSourceRabbitMQParameters(const SinkOpenSourceRabbitMQParameters &) = default ;
        SinkOpenSourceRabbitMQParameters(SinkOpenSourceRabbitMQParameters &&) = default ;
        SinkOpenSourceRabbitMQParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkOpenSourceRabbitMQParameters() = default ;
        SinkOpenSourceRabbitMQParameters& operator=(const SinkOpenSourceRabbitMQParameters &) = default ;
        SinkOpenSourceRabbitMQParameters& operator=(SinkOpenSourceRabbitMQParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RoutingKey : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoutingKey& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RoutingKey& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RoutingKey() = default ;
          RoutingKey(const RoutingKey &) = default ;
          RoutingKey(RoutingKey &&) = default ;
          RoutingKey(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoutingKey() = default ;
          RoutingKey& operator=(const RoutingKey &) = default ;
          RoutingKey& operator=(RoutingKey &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline RoutingKey& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline RoutingKey& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RoutingKey& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Properties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Properties& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Properties& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Properties() = default ;
          Properties(const Properties &) = default ;
          Properties(Properties &&) = default ;
          Properties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Properties() = default ;
          Properties& operator=(const Properties &) = default ;
          Properties& operator=(Properties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Properties& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Properties& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Properties& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class MessageId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MessageId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, MessageId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          MessageId() = default ;
          MessageId(const MessageId &) = default ;
          MessageId(MessageId &&) = default ;
          MessageId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MessageId() = default ;
          MessageId& operator=(const MessageId &) = default ;
          MessageId& operator=(MessageId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline MessageId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline MessageId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline MessageId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Body : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Body& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Body& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Body() = default ;
          Body(const Body &) = default ;
          Body(Body &&) = default ;
          Body(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Body() = default ;
          Body& operator=(const Body &) = default ;
          Body& operator=(Body &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Body& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Body& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->authType_ == nullptr
        && this->body_ == nullptr && this->endpoint_ == nullptr && this->exchange_ == nullptr && this->messageId_ == nullptr && this->networkType_ == nullptr
        && this->password_ == nullptr && this->properties_ == nullptr && this->queueName_ == nullptr && this->routingKey_ == nullptr && this->securityGroupId_ == nullptr
        && this->targetType_ == nullptr && this->username_ == nullptr && this->vSwitchIds_ == nullptr && this->virtualHostName_ == nullptr && this->vpcId_ == nullptr; };
        // authType Field Functions 
        bool hasAuthType() const { return this->authType_ != nullptr;};
        void deleteAuthType() { this->authType_ = nullptr;};
        inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
        inline SinkOpenSourceRabbitMQParameters& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline const SinkOpenSourceRabbitMQParameters::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SinkOpenSourceRabbitMQParameters::Body) };
        inline SinkOpenSourceRabbitMQParameters::Body getBody() { DARABONBA_PTR_GET(body_, SinkOpenSourceRabbitMQParameters::Body) };
        inline SinkOpenSourceRabbitMQParameters& setBody(const SinkOpenSourceRabbitMQParameters::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
        inline SinkOpenSourceRabbitMQParameters& setBody(SinkOpenSourceRabbitMQParameters::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


        // endpoint Field Functions 
        bool hasEndpoint() const { return this->endpoint_ != nullptr;};
        void deleteEndpoint() { this->endpoint_ = nullptr;};
        inline string getEndpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
        inline SinkOpenSourceRabbitMQParameters& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


        // exchange Field Functions 
        bool hasExchange() const { return this->exchange_ != nullptr;};
        void deleteExchange() { this->exchange_ = nullptr;};
        inline string getExchange() const { DARABONBA_PTR_GET_DEFAULT(exchange_, "") };
        inline SinkOpenSourceRabbitMQParameters& setExchange(string exchange) { DARABONBA_PTR_SET_VALUE(exchange_, exchange) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline const SinkOpenSourceRabbitMQParameters::MessageId & getMessageId() const { DARABONBA_PTR_GET_CONST(messageId_, SinkOpenSourceRabbitMQParameters::MessageId) };
        inline SinkOpenSourceRabbitMQParameters::MessageId getMessageId() { DARABONBA_PTR_GET(messageId_, SinkOpenSourceRabbitMQParameters::MessageId) };
        inline SinkOpenSourceRabbitMQParameters& setMessageId(const SinkOpenSourceRabbitMQParameters::MessageId & messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };
        inline SinkOpenSourceRabbitMQParameters& setMessageId(SinkOpenSourceRabbitMQParameters::MessageId && messageId) { DARABONBA_PTR_SET_RVALUE(messageId_, messageId) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SinkOpenSourceRabbitMQParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline SinkOpenSourceRabbitMQParameters& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // properties Field Functions 
        bool hasProperties() const { return this->properties_ != nullptr;};
        void deleteProperties() { this->properties_ = nullptr;};
        inline const SinkOpenSourceRabbitMQParameters::Properties & getProperties() const { DARABONBA_PTR_GET_CONST(properties_, SinkOpenSourceRabbitMQParameters::Properties) };
        inline SinkOpenSourceRabbitMQParameters::Properties getProperties() { DARABONBA_PTR_GET(properties_, SinkOpenSourceRabbitMQParameters::Properties) };
        inline SinkOpenSourceRabbitMQParameters& setProperties(const SinkOpenSourceRabbitMQParameters::Properties & properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };
        inline SinkOpenSourceRabbitMQParameters& setProperties(SinkOpenSourceRabbitMQParameters::Properties && properties) { DARABONBA_PTR_SET_RVALUE(properties_, properties) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
        inline SinkOpenSourceRabbitMQParameters& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


        // routingKey Field Functions 
        bool hasRoutingKey() const { return this->routingKey_ != nullptr;};
        void deleteRoutingKey() { this->routingKey_ = nullptr;};
        inline const SinkOpenSourceRabbitMQParameters::RoutingKey & getRoutingKey() const { DARABONBA_PTR_GET_CONST(routingKey_, SinkOpenSourceRabbitMQParameters::RoutingKey) };
        inline SinkOpenSourceRabbitMQParameters::RoutingKey getRoutingKey() { DARABONBA_PTR_GET(routingKey_, SinkOpenSourceRabbitMQParameters::RoutingKey) };
        inline SinkOpenSourceRabbitMQParameters& setRoutingKey(const SinkOpenSourceRabbitMQParameters::RoutingKey & routingKey) { DARABONBA_PTR_SET_VALUE(routingKey_, routingKey) };
        inline SinkOpenSourceRabbitMQParameters& setRoutingKey(SinkOpenSourceRabbitMQParameters::RoutingKey && routingKey) { DARABONBA_PTR_SET_RVALUE(routingKey_, routingKey) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SinkOpenSourceRabbitMQParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // targetType Field Functions 
        bool hasTargetType() const { return this->targetType_ != nullptr;};
        void deleteTargetType() { this->targetType_ = nullptr;};
        inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
        inline SinkOpenSourceRabbitMQParameters& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline SinkOpenSourceRabbitMQParameters& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
        inline SinkOpenSourceRabbitMQParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


        // virtualHostName Field Functions 
        bool hasVirtualHostName() const { return this->virtualHostName_ != nullptr;};
        void deleteVirtualHostName() { this->virtualHostName_ = nullptr;};
        inline string getVirtualHostName() const { DARABONBA_PTR_GET_DEFAULT(virtualHostName_, "") };
        inline SinkOpenSourceRabbitMQParameters& setVirtualHostName(string virtualHostName) { DARABONBA_PTR_SET_VALUE(virtualHostName_, virtualHostName) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SinkOpenSourceRabbitMQParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<string> authType_ {};
        shared_ptr<SinkOpenSourceRabbitMQParameters::Body> body_ {};
        shared_ptr<string> endpoint_ {};
        shared_ptr<string> exchange_ {};
        shared_ptr<SinkOpenSourceRabbitMQParameters::MessageId> messageId_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> password_ {};
        shared_ptr<SinkOpenSourceRabbitMQParameters::Properties> properties_ {};
        shared_ptr<string> queueName_ {};
        shared_ptr<SinkOpenSourceRabbitMQParameters::RoutingKey> routingKey_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<string> targetType_ {};
        shared_ptr<string> username_ {};
        shared_ptr<string> vSwitchIds_ {};
        shared_ptr<string> virtualHostName_ {};
        shared_ptr<string> vpcId_ {};
      };

      class SinkMNSParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkMNSParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(IsBase64Encode, isBase64Encode_);
          DARABONBA_PTR_TO_JSON(QueueName, queueName_);
        };
        friend void from_json(const Darabonba::Json& j, SinkMNSParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(IsBase64Encode, isBase64Encode_);
          DARABONBA_PTR_FROM_JSON(QueueName, queueName_);
        };
        SinkMNSParameters() = default ;
        SinkMNSParameters(const SinkMNSParameters &) = default ;
        SinkMNSParameters(SinkMNSParameters &&) = default ;
        SinkMNSParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkMNSParameters() = default ;
        SinkMNSParameters& operator=(const SinkMNSParameters &) = default ;
        SinkMNSParameters& operator=(SinkMNSParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class QueueName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueueName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, QueueName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          QueueName() = default ;
          QueueName(const QueueName &) = default ;
          QueueName(QueueName &&) = default ;
          QueueName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueueName() = default ;
          QueueName& operator=(const QueueName &) = default ;
          QueueName& operator=(QueueName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline QueueName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline QueueName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline QueueName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The name of the MNS queue.
          shared_ptr<string> value_ {};
        };

        class IsBase64Encode : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IsBase64Encode& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, IsBase64Encode& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          IsBase64Encode() = default ;
          IsBase64Encode(const IsBase64Encode &) = default ;
          IsBase64Encode(IsBase64Encode &&) = default ;
          IsBase64Encode(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IsBase64Encode() = default ;
          IsBase64Encode& operator=(const IsBase64Encode &) = default ;
          IsBase64Encode& operator=(IsBase64Encode &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline IsBase64Encode& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline IsBase64Encode& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline IsBase64Encode& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // Specifies whether to enable Base64 encoding.
          shared_ptr<string> value_ {};
        };

        class Body : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Body& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Body& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Body() = default ;
          Body(const Body &) = default ;
          Body(Body &&) = default ;
          Body(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Body() = default ;
          Body& operator=(const Body &) = default ;
          Body& operator=(Body &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Body& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Body& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->body_ == nullptr
        && this->isBase64Encode_ == nullptr && this->queueName_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline const SinkMNSParameters::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SinkMNSParameters::Body) };
        inline SinkMNSParameters::Body getBody() { DARABONBA_PTR_GET(body_, SinkMNSParameters::Body) };
        inline SinkMNSParameters& setBody(const SinkMNSParameters::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
        inline SinkMNSParameters& setBody(SinkMNSParameters::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


        // isBase64Encode Field Functions 
        bool hasIsBase64Encode() const { return this->isBase64Encode_ != nullptr;};
        void deleteIsBase64Encode() { this->isBase64Encode_ = nullptr;};
        inline const SinkMNSParameters::IsBase64Encode & getIsBase64Encode() const { DARABONBA_PTR_GET_CONST(isBase64Encode_, SinkMNSParameters::IsBase64Encode) };
        inline SinkMNSParameters::IsBase64Encode getIsBase64Encode() { DARABONBA_PTR_GET(isBase64Encode_, SinkMNSParameters::IsBase64Encode) };
        inline SinkMNSParameters& setIsBase64Encode(const SinkMNSParameters::IsBase64Encode & isBase64Encode) { DARABONBA_PTR_SET_VALUE(isBase64Encode_, isBase64Encode) };
        inline SinkMNSParameters& setIsBase64Encode(SinkMNSParameters::IsBase64Encode && isBase64Encode) { DARABONBA_PTR_SET_RVALUE(isBase64Encode_, isBase64Encode) };


        // queueName Field Functions 
        bool hasQueueName() const { return this->queueName_ != nullptr;};
        void deleteQueueName() { this->queueName_ = nullptr;};
        inline const SinkMNSParameters::QueueName & getQueueName() const { DARABONBA_PTR_GET_CONST(queueName_, SinkMNSParameters::QueueName) };
        inline SinkMNSParameters::QueueName getQueueName() { DARABONBA_PTR_GET(queueName_, SinkMNSParameters::QueueName) };
        inline SinkMNSParameters& setQueueName(const SinkMNSParameters::QueueName & queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };
        inline SinkMNSParameters& setQueueName(SinkMNSParameters::QueueName && queueName) { DARABONBA_PTR_SET_RVALUE(queueName_, queueName) };


      protected:
        // The message content.
        shared_ptr<SinkMNSParameters::Body> body_ {};
        // Specifies whether to enable Base64 encoding.
        shared_ptr<SinkMNSParameters::IsBase64Encode> isBase64Encode_ {};
        // The name of the MNS queue.
        shared_ptr<SinkMNSParameters::QueueName> queueName_ {};
      };

      class SinkKafkaParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkKafkaParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Acks, acks_);
          DARABONBA_PTR_TO_JSON(CompressionType, compressionType_);
          DARABONBA_PTR_TO_JSON(Headers, headers_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, SinkKafkaParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Acks, acks_);
          DARABONBA_PTR_FROM_JSON(CompressionType, compressionType_);
          DARABONBA_PTR_FROM_JSON(Headers, headers_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        SinkKafkaParameters() = default ;
        SinkKafkaParameters(const SinkKafkaParameters &) = default ;
        SinkKafkaParameters(SinkKafkaParameters &&) = default ;
        SinkKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkKafkaParameters() = default ;
        SinkKafkaParameters& operator=(const SinkKafkaParameters &) = default ;
        SinkKafkaParameters& operator=(SinkKafkaParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Value : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Value& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Value& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Value() = default ;
          Value(const Value &) = default ;
          Value(Value &&) = default ;
          Value(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Value() = default ;
          Value& operator=(const Value &) = default ;
          Value& operator=(Value &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Value& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Value& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Value& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        class Topic : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Topic& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Topic& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Topic() = default ;
          Topic(const Topic &) = default ;
          Topic(Topic &&) = default ;
          Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Topic() = default ;
          Topic& operator=(const Topic &) = default ;
          Topic& operator=(Topic &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Topic& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Topic& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Topic& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The name of the topic on the ApsaraMQ for Kafka instance.
          shared_ptr<string> value_ {};
        };

        class Key : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Key& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Key& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Key() = default ;
          Key(const Key &) = default ;
          Key(Key &&) = default ;
          Key(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Key() = default ;
          Key& operator=(const Key &) = default ;
          Key& operator=(Key &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Key& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Key& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Key& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The message key.
          shared_ptr<string> value_ {};
        };

        class InstanceId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InstanceId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InstanceId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InstanceId() = default ;
          InstanceId(const InstanceId &) = default ;
          InstanceId(InstanceId &&) = default ;
          InstanceId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InstanceId() = default ;
          InstanceId& operator=(const InstanceId &) = default ;
          InstanceId& operator=(InstanceId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline InstanceId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline InstanceId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline InstanceId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The ID of the ApsaraMQ for Kafka instance.
          shared_ptr<string> value_ {};
        };

        class Headers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Headers& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Headers& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Headers() = default ;
          Headers(const Headers &) = default ;
          Headers(Headers &&) = default ;
          Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Headers() = default ;
          Headers& operator=(const Headers &) = default ;
          Headers& operator=(Headers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Headers& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Headers& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Headers& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Acks : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Acks& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Acks& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Acks() = default ;
          Acks(const Acks &) = default ;
          Acks(Acks &&) = default ;
          Acks(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Acks() = default ;
          Acks& operator=(const Acks &) = default ;
          Acks& operator=(Acks &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Acks& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Acks& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Acks& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The ACK mode.
          // 
          // *   If you set this parameter to 0, no response is returned from the broker. In this mode, the performance is high, but the risk of data loss is also high.
          // *   If you set this parameter to 1, a response is returned when data is written to the leader. In this mode, the performance and the risk of data loss are moderate. Data loss may occur if a failure occurs on the leader.
          // *   If you set this parameter to all, a response is returned when data is written to the leader and synchronized to the followers. In this mode, the performance is low, but the risk of data loss is also low. Data loss occurs if the leader and the followers fail at the same time.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->acks_ == nullptr
        && this->compressionType_ == nullptr && this->headers_ == nullptr && this->instanceId_ == nullptr && this->key_ == nullptr && this->topic_ == nullptr
        && this->value_ == nullptr; };
        // acks Field Functions 
        bool hasAcks() const { return this->acks_ != nullptr;};
        void deleteAcks() { this->acks_ = nullptr;};
        inline const SinkKafkaParameters::Acks & getAcks() const { DARABONBA_PTR_GET_CONST(acks_, SinkKafkaParameters::Acks) };
        inline SinkKafkaParameters::Acks getAcks() { DARABONBA_PTR_GET(acks_, SinkKafkaParameters::Acks) };
        inline SinkKafkaParameters& setAcks(const SinkKafkaParameters::Acks & acks) { DARABONBA_PTR_SET_VALUE(acks_, acks) };
        inline SinkKafkaParameters& setAcks(SinkKafkaParameters::Acks && acks) { DARABONBA_PTR_SET_RVALUE(acks_, acks) };


        // compressionType Field Functions 
        bool hasCompressionType() const { return this->compressionType_ != nullptr;};
        void deleteCompressionType() { this->compressionType_ = nullptr;};
        inline string getCompressionType() const { DARABONBA_PTR_GET_DEFAULT(compressionType_, "") };
        inline SinkKafkaParameters& setCompressionType(string compressionType) { DARABONBA_PTR_SET_VALUE(compressionType_, compressionType) };


        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline const SinkKafkaParameters::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, SinkKafkaParameters::Headers) };
        inline SinkKafkaParameters::Headers getHeaders() { DARABONBA_PTR_GET(headers_, SinkKafkaParameters::Headers) };
        inline SinkKafkaParameters& setHeaders(const SinkKafkaParameters::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
        inline SinkKafkaParameters& setHeaders(SinkKafkaParameters::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline const SinkKafkaParameters::InstanceId & getInstanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, SinkKafkaParameters::InstanceId) };
        inline SinkKafkaParameters::InstanceId getInstanceId() { DARABONBA_PTR_GET(instanceId_, SinkKafkaParameters::InstanceId) };
        inline SinkKafkaParameters& setInstanceId(const SinkKafkaParameters::InstanceId & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
        inline SinkKafkaParameters& setInstanceId(SinkKafkaParameters::InstanceId && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline const SinkKafkaParameters::Key & getKey() const { DARABONBA_PTR_GET_CONST(key_, SinkKafkaParameters::Key) };
        inline SinkKafkaParameters::Key getKey() { DARABONBA_PTR_GET(key_, SinkKafkaParameters::Key) };
        inline SinkKafkaParameters& setKey(const SinkKafkaParameters::Key & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
        inline SinkKafkaParameters& setKey(SinkKafkaParameters::Key && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline const SinkKafkaParameters::Topic & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, SinkKafkaParameters::Topic) };
        inline SinkKafkaParameters::Topic getTopic() { DARABONBA_PTR_GET(topic_, SinkKafkaParameters::Topic) };
        inline SinkKafkaParameters& setTopic(const SinkKafkaParameters::Topic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
        inline SinkKafkaParameters& setTopic(SinkKafkaParameters::Topic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline const SinkKafkaParameters::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, SinkKafkaParameters::Value) };
        inline SinkKafkaParameters::Value getValue() { DARABONBA_PTR_GET(value_, SinkKafkaParameters::Value) };
        inline SinkKafkaParameters& setValue(const SinkKafkaParameters::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
        inline SinkKafkaParameters& setValue(SinkKafkaParameters::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


      protected:
        // The acknowledgment (ACK) mode.
        // 
        // *   If you set this parameter to 0, no response is returned from the broker. In this mode, the performance is high, but the risk of data loss is also high.
        // *   If you set this parameter to 1, a response is returned when data is written to the leader. In this mode, the performance and the risk of data loss are moderate. Data loss may occur if a failure occurs on the leader.
        // *   If you set this parameter to all, a response is returned when data is written to the leader and synchronized to the followers. In this mode, the performance is low, but the risk of data loss is also low. Data loss occurs if the leader and the followers fail at the same time.
        shared_ptr<SinkKafkaParameters::Acks> acks_ {};
        shared_ptr<string> compressionType_ {};
        shared_ptr<SinkKafkaParameters::Headers> headers_ {};
        // The ID of the ApsaraMQ for Kafka instance.
        shared_ptr<SinkKafkaParameters::InstanceId> instanceId_ {};
        // The message key.
        shared_ptr<SinkKafkaParameters::Key> key_ {};
        // The name of the topic on the ApsaraMQ for Kafka instance.
        shared_ptr<SinkKafkaParameters::Topic> topic_ {};
        // The message body.
        shared_ptr<SinkKafkaParameters::Value> value_ {};
      };

      class SinkFnfParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkFnfParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ExecutionName, executionName_);
          DARABONBA_PTR_TO_JSON(FlowName, flowName_);
          DARABONBA_PTR_TO_JSON(Input, input_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
        };
        friend void from_json(const Darabonba::Json& j, SinkFnfParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ExecutionName, executionName_);
          DARABONBA_PTR_FROM_JSON(FlowName, flowName_);
          DARABONBA_PTR_FROM_JSON(Input, input_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
        };
        SinkFnfParameters() = default ;
        SinkFnfParameters(const SinkFnfParameters &) = default ;
        SinkFnfParameters(SinkFnfParameters &&) = default ;
        SinkFnfParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkFnfParameters() = default ;
        SinkFnfParameters& operator=(const SinkFnfParameters &) = default ;
        SinkFnfParameters& operator=(SinkFnfParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RoleName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoleName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RoleName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RoleName() = default ;
          RoleName(const RoleName &) = default ;
          RoleName(RoleName &&) = default ;
          RoleName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoleName() = default ;
          RoleName& operator=(const RoleName &) = default ;
          RoleName& operator=(RoleName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline RoleName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline RoleName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RoleName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The role name.
          shared_ptr<string> value_ {};
        };

        class Input : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Input& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Input& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Input() = default ;
          Input(const Input &) = default ;
          Input(Input &&) = default ;
          Input(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Input() = default ;
          Input& operator=(const Input &) = default ;
          Input& operator=(Input &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Input& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Input& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Input& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The input information of the execution.
          shared_ptr<string> value_ {};
        };

        class FlowName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FlowName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, FlowName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          FlowName() = default ;
          FlowName(const FlowName &) = default ;
          FlowName(FlowName &&) = default ;
          FlowName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FlowName() = default ;
          FlowName& operator=(const FlowName &) = default ;
          FlowName& operator=(FlowName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline FlowName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline FlowName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline FlowName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The flow name.
          shared_ptr<string> value_ {};
        };

        class ExecutionName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ExecutionName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ExecutionName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ExecutionName() = default ;
          ExecutionName(const ExecutionName &) = default ;
          ExecutionName(ExecutionName &&) = default ;
          ExecutionName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ExecutionName() = default ;
          ExecutionName& operator=(const ExecutionName &) = default ;
          ExecutionName& operator=(ExecutionName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline ExecutionName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline ExecutionName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ExecutionName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The execution name.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->executionName_ == nullptr
        && this->flowName_ == nullptr && this->input_ == nullptr && this->roleName_ == nullptr; };
        // executionName Field Functions 
        bool hasExecutionName() const { return this->executionName_ != nullptr;};
        void deleteExecutionName() { this->executionName_ = nullptr;};
        inline const SinkFnfParameters::ExecutionName & getExecutionName() const { DARABONBA_PTR_GET_CONST(executionName_, SinkFnfParameters::ExecutionName) };
        inline SinkFnfParameters::ExecutionName getExecutionName() { DARABONBA_PTR_GET(executionName_, SinkFnfParameters::ExecutionName) };
        inline SinkFnfParameters& setExecutionName(const SinkFnfParameters::ExecutionName & executionName) { DARABONBA_PTR_SET_VALUE(executionName_, executionName) };
        inline SinkFnfParameters& setExecutionName(SinkFnfParameters::ExecutionName && executionName) { DARABONBA_PTR_SET_RVALUE(executionName_, executionName) };


        // flowName Field Functions 
        bool hasFlowName() const { return this->flowName_ != nullptr;};
        void deleteFlowName() { this->flowName_ = nullptr;};
        inline const SinkFnfParameters::FlowName & getFlowName() const { DARABONBA_PTR_GET_CONST(flowName_, SinkFnfParameters::FlowName) };
        inline SinkFnfParameters::FlowName getFlowName() { DARABONBA_PTR_GET(flowName_, SinkFnfParameters::FlowName) };
        inline SinkFnfParameters& setFlowName(const SinkFnfParameters::FlowName & flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };
        inline SinkFnfParameters& setFlowName(SinkFnfParameters::FlowName && flowName) { DARABONBA_PTR_SET_RVALUE(flowName_, flowName) };


        // input Field Functions 
        bool hasInput() const { return this->input_ != nullptr;};
        void deleteInput() { this->input_ = nullptr;};
        inline const SinkFnfParameters::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SinkFnfParameters::Input) };
        inline SinkFnfParameters::Input getInput() { DARABONBA_PTR_GET(input_, SinkFnfParameters::Input) };
        inline SinkFnfParameters& setInput(const SinkFnfParameters::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
        inline SinkFnfParameters& setInput(SinkFnfParameters::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline const SinkFnfParameters::RoleName & getRoleName() const { DARABONBA_PTR_GET_CONST(roleName_, SinkFnfParameters::RoleName) };
        inline SinkFnfParameters::RoleName getRoleName() { DARABONBA_PTR_GET(roleName_, SinkFnfParameters::RoleName) };
        inline SinkFnfParameters& setRoleName(const SinkFnfParameters::RoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
        inline SinkFnfParameters& setRoleName(SinkFnfParameters::RoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


      protected:
        // The execution name.
        shared_ptr<SinkFnfParameters::ExecutionName> executionName_ {};
        // The flow name.
        shared_ptr<SinkFnfParameters::FlowName> flowName_ {};
        // The input information of the execution.
        shared_ptr<SinkFnfParameters::Input> input_ {};
        // The role name.
        shared_ptr<SinkFnfParameters::RoleName> roleName_ {};
      };

      class SinkFcParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkFcParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(Concurrency, concurrency_);
          DARABONBA_PTR_TO_JSON(DataFormat, dataFormat_);
          DARABONBA_PTR_TO_JSON(FunctionName, functionName_);
          DARABONBA_PTR_TO_JSON(InvocationType, invocationType_);
          DARABONBA_PTR_TO_JSON(Qualifier, qualifier_);
          DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
        };
        friend void from_json(const Darabonba::Json& j, SinkFcParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(Concurrency, concurrency_);
          DARABONBA_PTR_FROM_JSON(DataFormat, dataFormat_);
          DARABONBA_PTR_FROM_JSON(FunctionName, functionName_);
          DARABONBA_PTR_FROM_JSON(InvocationType, invocationType_);
          DARABONBA_PTR_FROM_JSON(Qualifier, qualifier_);
          DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
        };
        SinkFcParameters() = default ;
        SinkFcParameters(const SinkFcParameters &) = default ;
        SinkFcParameters(SinkFcParameters &&) = default ;
        SinkFcParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkFcParameters() = default ;
        SinkFcParameters& operator=(const SinkFcParameters &) = default ;
        SinkFcParameters& operator=(SinkFcParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ServiceName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ServiceName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ServiceName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ServiceName() = default ;
          ServiceName(const ServiceName &) = default ;
          ServiceName(ServiceName &&) = default ;
          ServiceName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ServiceName() = default ;
          ServiceName& operator=(const ServiceName &) = default ;
          ServiceName& operator=(ServiceName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline ServiceName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline ServiceName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ServiceName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The service name.
          shared_ptr<string> value_ {};
        };

        class Qualifier : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Qualifier& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Qualifier& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Qualifier() = default ;
          Qualifier(const Qualifier &) = default ;
          Qualifier(Qualifier &&) = default ;
          Qualifier(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Qualifier() = default ;
          Qualifier& operator=(const Qualifier &) = default ;
          Qualifier& operator=(Qualifier &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Qualifier& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Qualifier& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Qualifier& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The service version.
          shared_ptr<string> value_ {};
        };

        class InvocationType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InvocationType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, InvocationType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          InvocationType() = default ;
          InvocationType(const InvocationType &) = default ;
          InvocationType(InvocationType &&) = default ;
          InvocationType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InvocationType() = default ;
          InvocationType& operator=(const InvocationType &) = default ;
          InvocationType& operator=(InvocationType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline InvocationType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline InvocationType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline InvocationType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The invocation mode. Valid values: Sync and Async.
          shared_ptr<string> value_ {};
        };

        class FunctionName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FunctionName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, FunctionName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          FunctionName() = default ;
          FunctionName(const FunctionName &) = default ;
          FunctionName(FunctionName &&) = default ;
          FunctionName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FunctionName() = default ;
          FunctionName& operator=(const FunctionName &) = default ;
          FunctionName& operator=(FunctionName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline FunctionName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline FunctionName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline FunctionName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The function name.
          shared_ptr<string> value_ {};
        };

        class DataFormat : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataFormat& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DataFormat& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          DataFormat() = default ;
          DataFormat(const DataFormat &) = default ;
          DataFormat(DataFormat &&) = default ;
          DataFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataFormat() = default ;
          DataFormat& operator=(const DataFormat &) = default ;
          DataFormat& operator=(DataFormat &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline DataFormat& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline DataFormat& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline DataFormat& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Concurrency : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Concurrency& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Concurrency& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Concurrency() = default ;
          Concurrency(const Concurrency &) = default ;
          Concurrency(Concurrency &&) = default ;
          Concurrency(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Concurrency() = default ;
          Concurrency& operator=(const Concurrency &) = default ;
          Concurrency& operator=(Concurrency &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Concurrency& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Concurrency& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Concurrency& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The delivery concurrency. Minimum value: 1.
          shared_ptr<string> value_ {};
        };

        class Body : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Body& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Body& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Body() = default ;
          Body(const Body &) = default ;
          Body(Body &&) = default ;
          Body(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Body() = default ;
          Body& operator=(const Body &) = default ;
          Body& operator=(Body &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Body& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Body& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The value before transformation.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->body_ == nullptr
        && this->concurrency_ == nullptr && this->dataFormat_ == nullptr && this->functionName_ == nullptr && this->invocationType_ == nullptr && this->qualifier_ == nullptr
        && this->serviceName_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline const SinkFcParameters::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SinkFcParameters::Body) };
        inline SinkFcParameters::Body getBody() { DARABONBA_PTR_GET(body_, SinkFcParameters::Body) };
        inline SinkFcParameters& setBody(const SinkFcParameters::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
        inline SinkFcParameters& setBody(SinkFcParameters::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


        // concurrency Field Functions 
        bool hasConcurrency() const { return this->concurrency_ != nullptr;};
        void deleteConcurrency() { this->concurrency_ = nullptr;};
        inline const SinkFcParameters::Concurrency & getConcurrency() const { DARABONBA_PTR_GET_CONST(concurrency_, SinkFcParameters::Concurrency) };
        inline SinkFcParameters::Concurrency getConcurrency() { DARABONBA_PTR_GET(concurrency_, SinkFcParameters::Concurrency) };
        inline SinkFcParameters& setConcurrency(const SinkFcParameters::Concurrency & concurrency) { DARABONBA_PTR_SET_VALUE(concurrency_, concurrency) };
        inline SinkFcParameters& setConcurrency(SinkFcParameters::Concurrency && concurrency) { DARABONBA_PTR_SET_RVALUE(concurrency_, concurrency) };


        // dataFormat Field Functions 
        bool hasDataFormat() const { return this->dataFormat_ != nullptr;};
        void deleteDataFormat() { this->dataFormat_ = nullptr;};
        inline const SinkFcParameters::DataFormat & getDataFormat() const { DARABONBA_PTR_GET_CONST(dataFormat_, SinkFcParameters::DataFormat) };
        inline SinkFcParameters::DataFormat getDataFormat() { DARABONBA_PTR_GET(dataFormat_, SinkFcParameters::DataFormat) };
        inline SinkFcParameters& setDataFormat(const SinkFcParameters::DataFormat & dataFormat) { DARABONBA_PTR_SET_VALUE(dataFormat_, dataFormat) };
        inline SinkFcParameters& setDataFormat(SinkFcParameters::DataFormat && dataFormat) { DARABONBA_PTR_SET_RVALUE(dataFormat_, dataFormat) };


        // functionName Field Functions 
        bool hasFunctionName() const { return this->functionName_ != nullptr;};
        void deleteFunctionName() { this->functionName_ = nullptr;};
        inline const SinkFcParameters::FunctionName & getFunctionName() const { DARABONBA_PTR_GET_CONST(functionName_, SinkFcParameters::FunctionName) };
        inline SinkFcParameters::FunctionName getFunctionName() { DARABONBA_PTR_GET(functionName_, SinkFcParameters::FunctionName) };
        inline SinkFcParameters& setFunctionName(const SinkFcParameters::FunctionName & functionName) { DARABONBA_PTR_SET_VALUE(functionName_, functionName) };
        inline SinkFcParameters& setFunctionName(SinkFcParameters::FunctionName && functionName) { DARABONBA_PTR_SET_RVALUE(functionName_, functionName) };


        // invocationType Field Functions 
        bool hasInvocationType() const { return this->invocationType_ != nullptr;};
        void deleteInvocationType() { this->invocationType_ = nullptr;};
        inline const SinkFcParameters::InvocationType & getInvocationType() const { DARABONBA_PTR_GET_CONST(invocationType_, SinkFcParameters::InvocationType) };
        inline SinkFcParameters::InvocationType getInvocationType() { DARABONBA_PTR_GET(invocationType_, SinkFcParameters::InvocationType) };
        inline SinkFcParameters& setInvocationType(const SinkFcParameters::InvocationType & invocationType) { DARABONBA_PTR_SET_VALUE(invocationType_, invocationType) };
        inline SinkFcParameters& setInvocationType(SinkFcParameters::InvocationType && invocationType) { DARABONBA_PTR_SET_RVALUE(invocationType_, invocationType) };


        // qualifier Field Functions 
        bool hasQualifier() const { return this->qualifier_ != nullptr;};
        void deleteQualifier() { this->qualifier_ = nullptr;};
        inline const SinkFcParameters::Qualifier & getQualifier() const { DARABONBA_PTR_GET_CONST(qualifier_, SinkFcParameters::Qualifier) };
        inline SinkFcParameters::Qualifier getQualifier() { DARABONBA_PTR_GET(qualifier_, SinkFcParameters::Qualifier) };
        inline SinkFcParameters& setQualifier(const SinkFcParameters::Qualifier & qualifier) { DARABONBA_PTR_SET_VALUE(qualifier_, qualifier) };
        inline SinkFcParameters& setQualifier(SinkFcParameters::Qualifier && qualifier) { DARABONBA_PTR_SET_RVALUE(qualifier_, qualifier) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline const SinkFcParameters::ServiceName & getServiceName() const { DARABONBA_PTR_GET_CONST(serviceName_, SinkFcParameters::ServiceName) };
        inline SinkFcParameters::ServiceName getServiceName() { DARABONBA_PTR_GET(serviceName_, SinkFcParameters::ServiceName) };
        inline SinkFcParameters& setServiceName(const SinkFcParameters::ServiceName & serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };
        inline SinkFcParameters& setServiceName(SinkFcParameters::ServiceName && serviceName) { DARABONBA_PTR_SET_RVALUE(serviceName_, serviceName) };


      protected:
        // The message body that you want to deliver to Function Compute.
        shared_ptr<SinkFcParameters::Body> body_ {};
        // The delivery concurrency. Minimum value: 1.
        shared_ptr<SinkFcParameters::Concurrency> concurrency_ {};
        shared_ptr<SinkFcParameters::DataFormat> dataFormat_ {};
        // The function name.
        shared_ptr<SinkFcParameters::FunctionName> functionName_ {};
        // The invocation mode. Valid values: Sync and Async.
        shared_ptr<SinkFcParameters::InvocationType> invocationType_ {};
        // The service version.
        shared_ptr<SinkFcParameters::Qualifier> qualifier_ {};
        // The service name.
        shared_ptr<SinkFcParameters::ServiceName> serviceName_ {};
      };

      class SinkEventHouseParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkEventHouseParameters& obj) { 
          DARABONBA_PTR_TO_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_TO_JSON(EventTableName, eventTableName_);
          DARABONBA_PTR_TO_JSON(MappingRules, mappingRules_);
          DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
        };
        friend void from_json(const Darabonba::Json& j, SinkEventHouseParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(CatalogName, catalogName_);
          DARABONBA_PTR_FROM_JSON(EventTableName, eventTableName_);
          DARABONBA_PTR_FROM_JSON(MappingRules, mappingRules_);
          DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
        };
        SinkEventHouseParameters() = default ;
        SinkEventHouseParameters(const SinkEventHouseParameters &) = default ;
        SinkEventHouseParameters(SinkEventHouseParameters &&) = default ;
        SinkEventHouseParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkEventHouseParameters() = default ;
        SinkEventHouseParameters& operator=(const SinkEventHouseParameters &) = default ;
        SinkEventHouseParameters& operator=(SinkEventHouseParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MappingRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MappingRules& obj) { 
            DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
            DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
            DARABONBA_PTR_TO_JSON(ColumnValue, columnValue_);
          };
          friend void from_json(const Darabonba::Json& j, MappingRules& obj) { 
            DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
            DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
            DARABONBA_PTR_FROM_JSON(ColumnValue, columnValue_);
          };
          MappingRules() = default ;
          MappingRules(const MappingRules &) = default ;
          MappingRules(MappingRules &&) = default ;
          MappingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MappingRules() = default ;
          MappingRules& operator=(const MappingRules &) = default ;
          MappingRules& operator=(MappingRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ColumnValue : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ColumnValue& obj) { 
              DARABONBA_PTR_TO_JSON(Form, form_);
              DARABONBA_PTR_TO_JSON(Template, template_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, ColumnValue& obj) { 
              DARABONBA_PTR_FROM_JSON(Form, form_);
              DARABONBA_PTR_FROM_JSON(Template, template_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            ColumnValue() = default ;
            ColumnValue(const ColumnValue &) = default ;
            ColumnValue(ColumnValue &&) = default ;
            ColumnValue(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ColumnValue() = default ;
            ColumnValue& operator=(const ColumnValue &) = default ;
            ColumnValue& operator=(ColumnValue &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
            // form Field Functions 
            bool hasForm() const { return this->form_ != nullptr;};
            void deleteForm() { this->form_ = nullptr;};
            inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
            inline ColumnValue& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


            // template Field Functions 
            bool hasTemplate() const { return this->template_ != nullptr;};
            void deleteTemplate() { this->template_ = nullptr;};
            inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
            inline ColumnValue& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline ColumnValue& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> form_ {};
            shared_ptr<string> template_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->columnName_ == nullptr
        && this->columnType_ == nullptr && this->columnValue_ == nullptr; };
          // columnName Field Functions 
          bool hasColumnName() const { return this->columnName_ != nullptr;};
          void deleteColumnName() { this->columnName_ = nullptr;};
          inline string getColumnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
          inline MappingRules& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


          // columnType Field Functions 
          bool hasColumnType() const { return this->columnType_ != nullptr;};
          void deleteColumnType() { this->columnType_ = nullptr;};
          inline string getColumnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
          inline MappingRules& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


          // columnValue Field Functions 
          bool hasColumnValue() const { return this->columnValue_ != nullptr;};
          void deleteColumnValue() { this->columnValue_ = nullptr;};
          inline const MappingRules::ColumnValue & getColumnValue() const { DARABONBA_PTR_GET_CONST(columnValue_, MappingRules::ColumnValue) };
          inline MappingRules::ColumnValue getColumnValue() { DARABONBA_PTR_GET(columnValue_, MappingRules::ColumnValue) };
          inline MappingRules& setColumnValue(const MappingRules::ColumnValue & columnValue) { DARABONBA_PTR_SET_VALUE(columnValue_, columnValue) };
          inline MappingRules& setColumnValue(MappingRules::ColumnValue && columnValue) { DARABONBA_PTR_SET_RVALUE(columnValue_, columnValue) };


        protected:
          shared_ptr<string> columnName_ {};
          shared_ptr<string> columnType_ {};
          shared_ptr<MappingRules::ColumnValue> columnValue_ {};
        };

        virtual bool empty() const override { return this->catalogName_ == nullptr
        && this->eventTableName_ == nullptr && this->mappingRules_ == nullptr && this->namespaceName_ == nullptr; };
        // catalogName Field Functions 
        bool hasCatalogName() const { return this->catalogName_ != nullptr;};
        void deleteCatalogName() { this->catalogName_ = nullptr;};
        inline string getCatalogName() const { DARABONBA_PTR_GET_DEFAULT(catalogName_, "") };
        inline SinkEventHouseParameters& setCatalogName(string catalogName) { DARABONBA_PTR_SET_VALUE(catalogName_, catalogName) };


        // eventTableName Field Functions 
        bool hasEventTableName() const { return this->eventTableName_ != nullptr;};
        void deleteEventTableName() { this->eventTableName_ = nullptr;};
        inline string getEventTableName() const { DARABONBA_PTR_GET_DEFAULT(eventTableName_, "") };
        inline SinkEventHouseParameters& setEventTableName(string eventTableName) { DARABONBA_PTR_SET_VALUE(eventTableName_, eventTableName) };


        // mappingRules Field Functions 
        bool hasMappingRules() const { return this->mappingRules_ != nullptr;};
        void deleteMappingRules() { this->mappingRules_ = nullptr;};
        inline const vector<SinkEventHouseParameters::MappingRules> & getMappingRules() const { DARABONBA_PTR_GET_CONST(mappingRules_, vector<SinkEventHouseParameters::MappingRules>) };
        inline vector<SinkEventHouseParameters::MappingRules> getMappingRules() { DARABONBA_PTR_GET(mappingRules_, vector<SinkEventHouseParameters::MappingRules>) };
        inline SinkEventHouseParameters& setMappingRules(const vector<SinkEventHouseParameters::MappingRules> & mappingRules) { DARABONBA_PTR_SET_VALUE(mappingRules_, mappingRules) };
        inline SinkEventHouseParameters& setMappingRules(vector<SinkEventHouseParameters::MappingRules> && mappingRules) { DARABONBA_PTR_SET_RVALUE(mappingRules_, mappingRules) };


        // namespaceName Field Functions 
        bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
        void deleteNamespaceName() { this->namespaceName_ = nullptr;};
        inline string getNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
        inline SinkEventHouseParameters& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


      protected:
        shared_ptr<string> catalogName_ {};
        shared_ptr<string> eventTableName_ {};
        shared_ptr<vector<SinkEventHouseParameters::MappingRules>> mappingRules_ {};
        shared_ptr<string> namespaceName_ {};
      };

      class SinkDorisParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkDorisParameters& obj) { 
          DARABONBA_PTR_TO_JSON(BeHttpEndpoint, beHttpEndpoint_);
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(Database, database_);
          DARABONBA_PTR_TO_JSON(FeHttpEndpoint, feHttpEndpoint_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(QueryEndpoint, queryEndpoint_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(Table, table_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SinkDorisParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(BeHttpEndpoint, beHttpEndpoint_);
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(Database, database_);
          DARABONBA_PTR_FROM_JSON(FeHttpEndpoint, feHttpEndpoint_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(QueryEndpoint, queryEndpoint_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(Table, table_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SinkDorisParameters() = default ;
        SinkDorisParameters(const SinkDorisParameters &) = default ;
        SinkDorisParameters(SinkDorisParameters &&) = default ;
        SinkDorisParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkDorisParameters() = default ;
        SinkDorisParameters& operator=(const SinkDorisParameters &) = default ;
        SinkDorisParameters& operator=(SinkDorisParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpcId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpcId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VpcId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VpcId() = default ;
          VpcId(const VpcId &) = default ;
          VpcId(VpcId &&) = default ;
          VpcId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpcId() = default ;
          VpcId& operator=(const VpcId &) = default ;
          VpcId& operator=(VpcId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline VpcId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline VpcId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VpcId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class VSwitchIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitchIds& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitchIds& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VSwitchIds() = default ;
          VSwitchIds(const VSwitchIds &) = default ;
          VSwitchIds(VSwitchIds &&) = default ;
          VSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VSwitchIds() = default ;
          VSwitchIds& operator=(const VSwitchIds &) = default ;
          VSwitchIds& operator=(VSwitchIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline VSwitchIds& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline VSwitchIds& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VSwitchIds& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class UserName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UserName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, UserName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          UserName() = default ;
          UserName(const UserName &) = default ;
          UserName(UserName &&) = default ;
          UserName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UserName() = default ;
          UserName& operator=(const UserName &) = default ;
          UserName& operator=(UserName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline UserName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline UserName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline UserName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Table : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Table& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Table& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Table() = default ;
          Table(const Table &) = default ;
          Table(Table &&) = default ;
          Table(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Table() = default ;
          Table& operator=(const Table &) = default ;
          Table& operator=(Table &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Table& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Table& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Table& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class SecurityGroupId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityGroupId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityGroupId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SecurityGroupId() = default ;
          SecurityGroupId(const SecurityGroupId &) = default ;
          SecurityGroupId(SecurityGroupId &&) = default ;
          SecurityGroupId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityGroupId() = default ;
          SecurityGroupId& operator=(const SecurityGroupId &) = default ;
          SecurityGroupId& operator=(SecurityGroupId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline SecurityGroupId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline SecurityGroupId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline SecurityGroupId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class QueryEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const QueryEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, QueryEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          QueryEndpoint() = default ;
          QueryEndpoint(const QueryEndpoint &) = default ;
          QueryEndpoint(QueryEndpoint &&) = default ;
          QueryEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~QueryEndpoint() = default ;
          QueryEndpoint& operator=(const QueryEndpoint &) = default ;
          QueryEndpoint& operator=(QueryEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline QueryEndpoint& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline QueryEndpoint& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline QueryEndpoint& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Password : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Password& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Password& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Password() = default ;
          Password(const Password &) = default ;
          Password(Password &&) = default ;
          Password(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Password() = default ;
          Password& operator=(const Password &) = default ;
          Password& operator=(Password &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Password& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Password& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Password& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class NetworkType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          NetworkType() = default ;
          NetworkType(const NetworkType &) = default ;
          NetworkType(NetworkType &&) = default ;
          NetworkType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkType() = default ;
          NetworkType& operator=(const NetworkType &) = default ;
          NetworkType& operator=(NetworkType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline NetworkType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline NetworkType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline NetworkType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class FeHttpEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const FeHttpEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, FeHttpEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          FeHttpEndpoint() = default ;
          FeHttpEndpoint(const FeHttpEndpoint &) = default ;
          FeHttpEndpoint(FeHttpEndpoint &&) = default ;
          FeHttpEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~FeHttpEndpoint() = default ;
          FeHttpEndpoint& operator=(const FeHttpEndpoint &) = default ;
          FeHttpEndpoint& operator=(FeHttpEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline FeHttpEndpoint& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline FeHttpEndpoint& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline FeHttpEndpoint& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Database : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Database& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Database& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Database() = default ;
          Database(const Database &) = default ;
          Database(Database &&) = default ;
          Database(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Database() = default ;
          Database& operator=(const Database &) = default ;
          Database& operator=(Database &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Database& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Database& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Database& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Body : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Body& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Body& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Body() = default ;
          Body(const Body &) = default ;
          Body(Body &&) = default ;
          Body(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Body() = default ;
          Body& operator=(const Body &) = default ;
          Body& operator=(Body &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Body& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Body& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class BeHttpEndpoint : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BeHttpEndpoint& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, BeHttpEndpoint& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          BeHttpEndpoint() = default ;
          BeHttpEndpoint(const BeHttpEndpoint &) = default ;
          BeHttpEndpoint(BeHttpEndpoint &&) = default ;
          BeHttpEndpoint(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BeHttpEndpoint() = default ;
          BeHttpEndpoint& operator=(const BeHttpEndpoint &) = default ;
          BeHttpEndpoint& operator=(BeHttpEndpoint &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline BeHttpEndpoint& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline BeHttpEndpoint& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline BeHttpEndpoint& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->beHttpEndpoint_ == nullptr
        && this->body_ == nullptr && this->database_ == nullptr && this->feHttpEndpoint_ == nullptr && this->networkType_ == nullptr && this->password_ == nullptr
        && this->queryEndpoint_ == nullptr && this->securityGroupId_ == nullptr && this->table_ == nullptr && this->userName_ == nullptr && this->vSwitchIds_ == nullptr
        && this->vpcId_ == nullptr; };
        // beHttpEndpoint Field Functions 
        bool hasBeHttpEndpoint() const { return this->beHttpEndpoint_ != nullptr;};
        void deleteBeHttpEndpoint() { this->beHttpEndpoint_ = nullptr;};
        inline const SinkDorisParameters::BeHttpEndpoint & getBeHttpEndpoint() const { DARABONBA_PTR_GET_CONST(beHttpEndpoint_, SinkDorisParameters::BeHttpEndpoint) };
        inline SinkDorisParameters::BeHttpEndpoint getBeHttpEndpoint() { DARABONBA_PTR_GET(beHttpEndpoint_, SinkDorisParameters::BeHttpEndpoint) };
        inline SinkDorisParameters& setBeHttpEndpoint(const SinkDorisParameters::BeHttpEndpoint & beHttpEndpoint) { DARABONBA_PTR_SET_VALUE(beHttpEndpoint_, beHttpEndpoint) };
        inline SinkDorisParameters& setBeHttpEndpoint(SinkDorisParameters::BeHttpEndpoint && beHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(beHttpEndpoint_, beHttpEndpoint) };


        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline const SinkDorisParameters::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SinkDorisParameters::Body) };
        inline SinkDorisParameters::Body getBody() { DARABONBA_PTR_GET(body_, SinkDorisParameters::Body) };
        inline SinkDorisParameters& setBody(const SinkDorisParameters::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
        inline SinkDorisParameters& setBody(SinkDorisParameters::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline const SinkDorisParameters::Database & getDatabase() const { DARABONBA_PTR_GET_CONST(database_, SinkDorisParameters::Database) };
        inline SinkDorisParameters::Database getDatabase() { DARABONBA_PTR_GET(database_, SinkDorisParameters::Database) };
        inline SinkDorisParameters& setDatabase(const SinkDorisParameters::Database & database) { DARABONBA_PTR_SET_VALUE(database_, database) };
        inline SinkDorisParameters& setDatabase(SinkDorisParameters::Database && database) { DARABONBA_PTR_SET_RVALUE(database_, database) };


        // feHttpEndpoint Field Functions 
        bool hasFeHttpEndpoint() const { return this->feHttpEndpoint_ != nullptr;};
        void deleteFeHttpEndpoint() { this->feHttpEndpoint_ = nullptr;};
        inline const SinkDorisParameters::FeHttpEndpoint & getFeHttpEndpoint() const { DARABONBA_PTR_GET_CONST(feHttpEndpoint_, SinkDorisParameters::FeHttpEndpoint) };
        inline SinkDorisParameters::FeHttpEndpoint getFeHttpEndpoint() { DARABONBA_PTR_GET(feHttpEndpoint_, SinkDorisParameters::FeHttpEndpoint) };
        inline SinkDorisParameters& setFeHttpEndpoint(const SinkDorisParameters::FeHttpEndpoint & feHttpEndpoint) { DARABONBA_PTR_SET_VALUE(feHttpEndpoint_, feHttpEndpoint) };
        inline SinkDorisParameters& setFeHttpEndpoint(SinkDorisParameters::FeHttpEndpoint && feHttpEndpoint) { DARABONBA_PTR_SET_RVALUE(feHttpEndpoint_, feHttpEndpoint) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline const SinkDorisParameters::NetworkType & getNetworkType() const { DARABONBA_PTR_GET_CONST(networkType_, SinkDorisParameters::NetworkType) };
        inline SinkDorisParameters::NetworkType getNetworkType() { DARABONBA_PTR_GET(networkType_, SinkDorisParameters::NetworkType) };
        inline SinkDorisParameters& setNetworkType(const SinkDorisParameters::NetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
        inline SinkDorisParameters& setNetworkType(SinkDorisParameters::NetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline const SinkDorisParameters::Password & getPassword() const { DARABONBA_PTR_GET_CONST(password_, SinkDorisParameters::Password) };
        inline SinkDorisParameters::Password getPassword() { DARABONBA_PTR_GET(password_, SinkDorisParameters::Password) };
        inline SinkDorisParameters& setPassword(const SinkDorisParameters::Password & password) { DARABONBA_PTR_SET_VALUE(password_, password) };
        inline SinkDorisParameters& setPassword(SinkDorisParameters::Password && password) { DARABONBA_PTR_SET_RVALUE(password_, password) };


        // queryEndpoint Field Functions 
        bool hasQueryEndpoint() const { return this->queryEndpoint_ != nullptr;};
        void deleteQueryEndpoint() { this->queryEndpoint_ = nullptr;};
        inline const SinkDorisParameters::QueryEndpoint & getQueryEndpoint() const { DARABONBA_PTR_GET_CONST(queryEndpoint_, SinkDorisParameters::QueryEndpoint) };
        inline SinkDorisParameters::QueryEndpoint getQueryEndpoint() { DARABONBA_PTR_GET(queryEndpoint_, SinkDorisParameters::QueryEndpoint) };
        inline SinkDorisParameters& setQueryEndpoint(const SinkDorisParameters::QueryEndpoint & queryEndpoint) { DARABONBA_PTR_SET_VALUE(queryEndpoint_, queryEndpoint) };
        inline SinkDorisParameters& setQueryEndpoint(SinkDorisParameters::QueryEndpoint && queryEndpoint) { DARABONBA_PTR_SET_RVALUE(queryEndpoint_, queryEndpoint) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline const SinkDorisParameters::SecurityGroupId & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, SinkDorisParameters::SecurityGroupId) };
        inline SinkDorisParameters::SecurityGroupId getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, SinkDorisParameters::SecurityGroupId) };
        inline SinkDorisParameters& setSecurityGroupId(const SinkDorisParameters::SecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
        inline SinkDorisParameters& setSecurityGroupId(SinkDorisParameters::SecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


        // table Field Functions 
        bool hasTable() const { return this->table_ != nullptr;};
        void deleteTable() { this->table_ = nullptr;};
        inline const SinkDorisParameters::Table & getTable() const { DARABONBA_PTR_GET_CONST(table_, SinkDorisParameters::Table) };
        inline SinkDorisParameters::Table getTable() { DARABONBA_PTR_GET(table_, SinkDorisParameters::Table) };
        inline SinkDorisParameters& setTable(const SinkDorisParameters::Table & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
        inline SinkDorisParameters& setTable(SinkDorisParameters::Table && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline const SinkDorisParameters::UserName & getUserName() const { DARABONBA_PTR_GET_CONST(userName_, SinkDorisParameters::UserName) };
        inline SinkDorisParameters::UserName getUserName() { DARABONBA_PTR_GET(userName_, SinkDorisParameters::UserName) };
        inline SinkDorisParameters& setUserName(const SinkDorisParameters::UserName & userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };
        inline SinkDorisParameters& setUserName(SinkDorisParameters::UserName && userName) { DARABONBA_PTR_SET_RVALUE(userName_, userName) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const SinkDorisParameters::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, SinkDorisParameters::VSwitchIds) };
        inline SinkDorisParameters::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, SinkDorisParameters::VSwitchIds) };
        inline SinkDorisParameters& setVSwitchIds(const SinkDorisParameters::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline SinkDorisParameters& setVSwitchIds(SinkDorisParameters::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline const SinkDorisParameters::VpcId & getVpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, SinkDorisParameters::VpcId) };
        inline SinkDorisParameters::VpcId getVpcId() { DARABONBA_PTR_GET(vpcId_, SinkDorisParameters::VpcId) };
        inline SinkDorisParameters& setVpcId(const SinkDorisParameters::VpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
        inline SinkDorisParameters& setVpcId(SinkDorisParameters::VpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<SinkDorisParameters::BeHttpEndpoint> beHttpEndpoint_ {};
        shared_ptr<SinkDorisParameters::Body> body_ {};
        shared_ptr<SinkDorisParameters::Database> database_ {};
        shared_ptr<SinkDorisParameters::FeHttpEndpoint> feHttpEndpoint_ {};
        shared_ptr<SinkDorisParameters::NetworkType> networkType_ {};
        shared_ptr<SinkDorisParameters::Password> password_ {};
        shared_ptr<SinkDorisParameters::QueryEndpoint> queryEndpoint_ {};
        shared_ptr<SinkDorisParameters::SecurityGroupId> securityGroupId_ {};
        shared_ptr<SinkDorisParameters::Table> table_ {};
        shared_ptr<SinkDorisParameters::UserName> userName_ {};
        shared_ptr<SinkDorisParameters::VSwitchIds> vSwitchIds_ {};
        shared_ptr<SinkDorisParameters::VpcId> vpcId_ {};
      };

      class SinkDataHubParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkDataHubParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Body, body_);
          DARABONBA_PTR_TO_JSON(Project, project_);
          DARABONBA_PTR_TO_JSON(RoleName, roleName_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(TopicSchema, topicSchema_);
          DARABONBA_PTR_TO_JSON(TopicType, topicType_);
        };
        friend void from_json(const Darabonba::Json& j, SinkDataHubParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Body, body_);
          DARABONBA_PTR_FROM_JSON(Project, project_);
          DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(TopicSchema, topicSchema_);
          DARABONBA_PTR_FROM_JSON(TopicType, topicType_);
        };
        SinkDataHubParameters() = default ;
        SinkDataHubParameters(const SinkDataHubParameters &) = default ;
        SinkDataHubParameters(SinkDataHubParameters &&) = default ;
        SinkDataHubParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkDataHubParameters() = default ;
        SinkDataHubParameters& operator=(const SinkDataHubParameters &) = default ;
        SinkDataHubParameters& operator=(SinkDataHubParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TopicType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TopicType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TopicType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TopicType() = default ;
          TopicType(const TopicType &) = default ;
          TopicType(TopicType &&) = default ;
          TopicType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TopicType() = default ;
          TopicType& operator=(const TopicType &) = default ;
          TopicType& operator=(TopicType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline TopicType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline TopicType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TopicType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The topic type. Valid values:
          // 
          // *   TUPLE
          // *   BLOB
          shared_ptr<string> value_ {};
        };

        class TopicSchema : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TopicSchema& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, TopicSchema& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          TopicSchema() = default ;
          TopicSchema(const TopicSchema &) = default ;
          TopicSchema(TopicSchema &&) = default ;
          TopicSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TopicSchema() = default ;
          TopicSchema& operator=(const TopicSchema &) = default ;
          TopicSchema& operator=(TopicSchema &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline TopicSchema& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline TopicSchema& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline TopicSchema& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // The template based on which you want to transform events.
          shared_ptr<string> template_ {};
          // The TUBLE topic.
          shared_ptr<string> value_ {};
        };

        class Topic : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Topic& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Topic& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Topic() = default ;
          Topic(const Topic &) = default ;
          Topic(Topic &&) = default ;
          Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Topic() = default ;
          Topic& operator=(const Topic &) = default ;
          Topic& operator=(Topic &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Topic& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Topic& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Topic& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The name of the DataHub topic.
          shared_ptr<string> value_ {};
        };

        class RoleName : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RoleName& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RoleName& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RoleName() = default ;
          RoleName(const RoleName &) = default ;
          RoleName(RoleName &&) = default ;
          RoleName(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RoleName() = default ;
          RoleName& operator=(const RoleName &) = default ;
          RoleName& operator=(RoleName &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline RoleName& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline RoleName& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RoleName& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The role name.
          shared_ptr<string> value_ {};
        };

        class Project : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Project& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Project& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Project() = default ;
          Project(const Project &) = default ;
          Project(Project &&) = default ;
          Project(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Project() = default ;
          Project& operator=(const Project &) = default ;
          Project& operator=(Project &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Project& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Project& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Project& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events. Default value: CONSTANT.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The name of the DataHub project.
          shared_ptr<string> value_ {};
        };

        class Body : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Body& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Body& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Body() = default ;
          Body(const Body &) = default ;
          Body(Body &&) = default ;
          Body(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Body() = default ;
          Body& operator=(const Body &) = default ;
          Body& operator=(Body &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Body& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Body& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Body& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The method that you want to use to transform events.
          shared_ptr<string> form_ {};
          // None.
          shared_ptr<string> template_ {};
          // The BLOB topic.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->body_ == nullptr
        && this->project_ == nullptr && this->roleName_ == nullptr && this->topic_ == nullptr && this->topicSchema_ == nullptr && this->topicType_ == nullptr; };
        // body Field Functions 
        bool hasBody() const { return this->body_ != nullptr;};
        void deleteBody() { this->body_ = nullptr;};
        inline const SinkDataHubParameters::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, SinkDataHubParameters::Body) };
        inline SinkDataHubParameters::Body getBody() { DARABONBA_PTR_GET(body_, SinkDataHubParameters::Body) };
        inline SinkDataHubParameters& setBody(const SinkDataHubParameters::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
        inline SinkDataHubParameters& setBody(SinkDataHubParameters::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


        // project Field Functions 
        bool hasProject() const { return this->project_ != nullptr;};
        void deleteProject() { this->project_ = nullptr;};
        inline const SinkDataHubParameters::Project & getProject() const { DARABONBA_PTR_GET_CONST(project_, SinkDataHubParameters::Project) };
        inline SinkDataHubParameters::Project getProject() { DARABONBA_PTR_GET(project_, SinkDataHubParameters::Project) };
        inline SinkDataHubParameters& setProject(const SinkDataHubParameters::Project & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
        inline SinkDataHubParameters& setProject(SinkDataHubParameters::Project && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


        // roleName Field Functions 
        bool hasRoleName() const { return this->roleName_ != nullptr;};
        void deleteRoleName() { this->roleName_ = nullptr;};
        inline const SinkDataHubParameters::RoleName & getRoleName() const { DARABONBA_PTR_GET_CONST(roleName_, SinkDataHubParameters::RoleName) };
        inline SinkDataHubParameters::RoleName getRoleName() { DARABONBA_PTR_GET(roleName_, SinkDataHubParameters::RoleName) };
        inline SinkDataHubParameters& setRoleName(const SinkDataHubParameters::RoleName & roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };
        inline SinkDataHubParameters& setRoleName(SinkDataHubParameters::RoleName && roleName) { DARABONBA_PTR_SET_RVALUE(roleName_, roleName) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline const SinkDataHubParameters::Topic & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, SinkDataHubParameters::Topic) };
        inline SinkDataHubParameters::Topic getTopic() { DARABONBA_PTR_GET(topic_, SinkDataHubParameters::Topic) };
        inline SinkDataHubParameters& setTopic(const SinkDataHubParameters::Topic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
        inline SinkDataHubParameters& setTopic(SinkDataHubParameters::Topic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


        // topicSchema Field Functions 
        bool hasTopicSchema() const { return this->topicSchema_ != nullptr;};
        void deleteTopicSchema() { this->topicSchema_ = nullptr;};
        inline const SinkDataHubParameters::TopicSchema & getTopicSchema() const { DARABONBA_PTR_GET_CONST(topicSchema_, SinkDataHubParameters::TopicSchema) };
        inline SinkDataHubParameters::TopicSchema getTopicSchema() { DARABONBA_PTR_GET(topicSchema_, SinkDataHubParameters::TopicSchema) };
        inline SinkDataHubParameters& setTopicSchema(const SinkDataHubParameters::TopicSchema & topicSchema) { DARABONBA_PTR_SET_VALUE(topicSchema_, topicSchema) };
        inline SinkDataHubParameters& setTopicSchema(SinkDataHubParameters::TopicSchema && topicSchema) { DARABONBA_PTR_SET_RVALUE(topicSchema_, topicSchema) };


        // topicType Field Functions 
        bool hasTopicType() const { return this->topicType_ != nullptr;};
        void deleteTopicType() { this->topicType_ = nullptr;};
        inline const SinkDataHubParameters::TopicType & getTopicType() const { DARABONBA_PTR_GET_CONST(topicType_, SinkDataHubParameters::TopicType) };
        inline SinkDataHubParameters::TopicType getTopicType() { DARABONBA_PTR_GET(topicType_, SinkDataHubParameters::TopicType) };
        inline SinkDataHubParameters& setTopicType(const SinkDataHubParameters::TopicType & topicType) { DARABONBA_PTR_SET_VALUE(topicType_, topicType) };
        inline SinkDataHubParameters& setTopicType(SinkDataHubParameters::TopicType && topicType) { DARABONBA_PTR_SET_RVALUE(topicType_, topicType) };


      protected:
        // The BLOB topic.
        shared_ptr<SinkDataHubParameters::Body> body_ {};
        // The name of the DataHub project.
        shared_ptr<SinkDataHubParameters::Project> project_ {};
        // The role name.
        shared_ptr<SinkDataHubParameters::RoleName> roleName_ {};
        // The name of the DataHub topic.
        shared_ptr<SinkDataHubParameters::Topic> topic_ {};
        // The TUBLE topic.
        shared_ptr<SinkDataHubParameters::TopicSchema> topicSchema_ {};
        // The topic type. Valid values:
        // 
        // *   TUPLE
        // *   BLOB
        shared_ptr<SinkDataHubParameters::TopicType> topicType_ {};
      };

      class SinkDashVectorParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkDashVectorParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_TO_JSON(Collection, collection_);
          DARABONBA_PTR_TO_JSON(DashVectorSchemaParameters, dashVectorSchemaParameters_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(Network, network_);
          DARABONBA_PTR_TO_JSON(Operation, operation_);
          DARABONBA_PTR_TO_JSON(Partition, partition_);
          DARABONBA_PTR_TO_JSON(PrimaryKeyId, primaryKeyId_);
          DARABONBA_PTR_TO_JSON(Vector, vector_);
        };
        friend void from_json(const Darabonba::Json& j, SinkDashVectorParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ApiKey, apiKey_);
          DARABONBA_PTR_FROM_JSON(Collection, collection_);
          DARABONBA_PTR_FROM_JSON(DashVectorSchemaParameters, dashVectorSchemaParameters_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(Network, network_);
          DARABONBA_PTR_FROM_JSON(Operation, operation_);
          DARABONBA_PTR_FROM_JSON(Partition, partition_);
          DARABONBA_PTR_FROM_JSON(PrimaryKeyId, primaryKeyId_);
          DARABONBA_PTR_FROM_JSON(Vector, vector_);
        };
        SinkDashVectorParameters() = default ;
        SinkDashVectorParameters(const SinkDashVectorParameters &) = default ;
        SinkDashVectorParameters(SinkDashVectorParameters &&) = default ;
        SinkDashVectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkDashVectorParameters() = default ;
        SinkDashVectorParameters& operator=(const SinkDashVectorParameters &) = default ;
        SinkDashVectorParameters& operator=(SinkDashVectorParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Vector : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Vector& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Vector& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Vector() = default ;
          Vector(const Vector &) = default ;
          Vector(Vector &&) = default ;
          Vector(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Vector() = default ;
          Vector& operator=(const Vector &) = default ;
          Vector& operator=(Vector &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Vector& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Vector& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Vector& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class PrimaryKeyId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PrimaryKeyId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, PrimaryKeyId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          PrimaryKeyId() = default ;
          PrimaryKeyId(const PrimaryKeyId &) = default ;
          PrimaryKeyId(PrimaryKeyId &&) = default ;
          PrimaryKeyId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PrimaryKeyId() = default ;
          PrimaryKeyId& operator=(const PrimaryKeyId &) = default ;
          PrimaryKeyId& operator=(PrimaryKeyId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline PrimaryKeyId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline PrimaryKeyId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline PrimaryKeyId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Partition : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Partition& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Partition& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Partition() = default ;
          Partition(const Partition &) = default ;
          Partition(Partition &&) = default ;
          Partition(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Partition() = default ;
          Partition& operator=(const Partition &) = default ;
          Partition& operator=(Partition &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Partition& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Partition& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Partition& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class DashVectorSchemaParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DashVectorSchemaParameters& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DashVectorSchemaParameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          DashVectorSchemaParameters() = default ;
          DashVectorSchemaParameters(const DashVectorSchemaParameters &) = default ;
          DashVectorSchemaParameters(DashVectorSchemaParameters &&) = default ;
          DashVectorSchemaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DashVectorSchemaParameters() = default ;
          DashVectorSchemaParameters& operator=(const DashVectorSchemaParameters &) = default ;
          DashVectorSchemaParameters& operator=(DashVectorSchemaParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Value : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Value& obj) { 
              DARABONBA_PTR_TO_JSON(Form, form_);
              DARABONBA_PTR_TO_JSON(Template, template_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Value& obj) { 
              DARABONBA_PTR_FROM_JSON(Form, form_);
              DARABONBA_PTR_FROM_JSON(Template, template_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Value() = default ;
            Value(const Value &) = default ;
            Value(Value &&) = default ;
            Value(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Value() = default ;
            Value& operator=(const Value &) = default ;
            Value& operator=(Value &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
            // form Field Functions 
            bool hasForm() const { return this->form_ != nullptr;};
            void deleteForm() { this->form_ = nullptr;};
            inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
            inline Value& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


            // template Field Functions 
            bool hasTemplate() const { return this->template_ != nullptr;};
            void deleteTemplate() { this->template_ = nullptr;};
            inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
            inline Value& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Value& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> form_ {};
            shared_ptr<string> template_ {};
            shared_ptr<string> value_ {};
          };

          class Type : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Type& obj) { 
              DARABONBA_PTR_TO_JSON(Form, form_);
              DARABONBA_PTR_TO_JSON(Template, template_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Type& obj) { 
              DARABONBA_PTR_FROM_JSON(Form, form_);
              DARABONBA_PTR_FROM_JSON(Template, template_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Type() = default ;
            Type(const Type &) = default ;
            Type(Type &&) = default ;
            Type(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Type() = default ;
            Type& operator=(const Type &) = default ;
            Type& operator=(Type &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
            // form Field Functions 
            bool hasForm() const { return this->form_ != nullptr;};
            void deleteForm() { this->form_ = nullptr;};
            inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
            inline Type& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


            // template Field Functions 
            bool hasTemplate() const { return this->template_ != nullptr;};
            void deleteTemplate() { this->template_ = nullptr;};
            inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
            inline Type& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Type& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> form_ {};
            shared_ptr<string> template_ {};
            shared_ptr<string> value_ {};
          };

          class Name : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Name& obj) { 
              DARABONBA_PTR_TO_JSON(Form, form_);
              DARABONBA_PTR_TO_JSON(Template, template_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Name& obj) { 
              DARABONBA_PTR_FROM_JSON(Form, form_);
              DARABONBA_PTR_FROM_JSON(Template, template_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            Name() = default ;
            Name(const Name &) = default ;
            Name(Name &&) = default ;
            Name(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Name() = default ;
            Name& operator=(const Name &) = default ;
            Name& operator=(Name &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
            // form Field Functions 
            bool hasForm() const { return this->form_ != nullptr;};
            void deleteForm() { this->form_ = nullptr;};
            inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
            inline Name& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


            // template Field Functions 
            bool hasTemplate() const { return this->template_ != nullptr;};
            void deleteTemplate() { this->template_ = nullptr;};
            inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
            inline Name& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Name& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> form_ {};
            shared_ptr<string> template_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline const DashVectorSchemaParameters::Name & getName() const { DARABONBA_PTR_GET_CONST(name_, DashVectorSchemaParameters::Name) };
          inline DashVectorSchemaParameters::Name getName() { DARABONBA_PTR_GET(name_, DashVectorSchemaParameters::Name) };
          inline DashVectorSchemaParameters& setName(const DashVectorSchemaParameters::Name & name) { DARABONBA_PTR_SET_VALUE(name_, name) };
          inline DashVectorSchemaParameters& setName(DashVectorSchemaParameters::Name && name) { DARABONBA_PTR_SET_RVALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline const DashVectorSchemaParameters::Type & getType() const { DARABONBA_PTR_GET_CONST(type_, DashVectorSchemaParameters::Type) };
          inline DashVectorSchemaParameters::Type getType() { DARABONBA_PTR_GET(type_, DashVectorSchemaParameters::Type) };
          inline DashVectorSchemaParameters& setType(const DashVectorSchemaParameters::Type & type) { DARABONBA_PTR_SET_VALUE(type_, type) };
          inline DashVectorSchemaParameters& setType(DashVectorSchemaParameters::Type && type) { DARABONBA_PTR_SET_RVALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline const DashVectorSchemaParameters::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, DashVectorSchemaParameters::Value) };
          inline DashVectorSchemaParameters::Value getValue() { DARABONBA_PTR_GET(value_, DashVectorSchemaParameters::Value) };
          inline DashVectorSchemaParameters& setValue(const DashVectorSchemaParameters::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
          inline DashVectorSchemaParameters& setValue(DashVectorSchemaParameters::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


        protected:
          shared_ptr<DashVectorSchemaParameters::Name> name_ {};
          shared_ptr<DashVectorSchemaParameters::Type> type_ {};
          shared_ptr<DashVectorSchemaParameters::Value> value_ {};
        };

        virtual bool empty() const override { return this->apiKey_ == nullptr
        && this->collection_ == nullptr && this->dashVectorSchemaParameters_ == nullptr && this->instanceId_ == nullptr && this->network_ == nullptr && this->operation_ == nullptr
        && this->partition_ == nullptr && this->primaryKeyId_ == nullptr && this->vector_ == nullptr; };
        // apiKey Field Functions 
        bool hasApiKey() const { return this->apiKey_ != nullptr;};
        void deleteApiKey() { this->apiKey_ = nullptr;};
        inline string getApiKey() const { DARABONBA_PTR_GET_DEFAULT(apiKey_, "") };
        inline SinkDashVectorParameters& setApiKey(string apiKey) { DARABONBA_PTR_SET_VALUE(apiKey_, apiKey) };


        // collection Field Functions 
        bool hasCollection() const { return this->collection_ != nullptr;};
        void deleteCollection() { this->collection_ = nullptr;};
        inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
        inline SinkDashVectorParameters& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


        // dashVectorSchemaParameters Field Functions 
        bool hasDashVectorSchemaParameters() const { return this->dashVectorSchemaParameters_ != nullptr;};
        void deleteDashVectorSchemaParameters() { this->dashVectorSchemaParameters_ = nullptr;};
        inline const vector<SinkDashVectorParameters::DashVectorSchemaParameters> & getDashVectorSchemaParameters() const { DARABONBA_PTR_GET_CONST(dashVectorSchemaParameters_, vector<SinkDashVectorParameters::DashVectorSchemaParameters>) };
        inline vector<SinkDashVectorParameters::DashVectorSchemaParameters> getDashVectorSchemaParameters() { DARABONBA_PTR_GET(dashVectorSchemaParameters_, vector<SinkDashVectorParameters::DashVectorSchemaParameters>) };
        inline SinkDashVectorParameters& setDashVectorSchemaParameters(const vector<SinkDashVectorParameters::DashVectorSchemaParameters> & dashVectorSchemaParameters) { DARABONBA_PTR_SET_VALUE(dashVectorSchemaParameters_, dashVectorSchemaParameters) };
        inline SinkDashVectorParameters& setDashVectorSchemaParameters(vector<SinkDashVectorParameters::DashVectorSchemaParameters> && dashVectorSchemaParameters) { DARABONBA_PTR_SET_RVALUE(dashVectorSchemaParameters_, dashVectorSchemaParameters) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SinkDashVectorParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
        inline SinkDashVectorParameters& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


        // operation Field Functions 
        bool hasOperation() const { return this->operation_ != nullptr;};
        void deleteOperation() { this->operation_ = nullptr;};
        inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
        inline SinkDashVectorParameters& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


        // partition Field Functions 
        bool hasPartition() const { return this->partition_ != nullptr;};
        void deletePartition() { this->partition_ = nullptr;};
        inline const SinkDashVectorParameters::Partition & getPartition() const { DARABONBA_PTR_GET_CONST(partition_, SinkDashVectorParameters::Partition) };
        inline SinkDashVectorParameters::Partition getPartition() { DARABONBA_PTR_GET(partition_, SinkDashVectorParameters::Partition) };
        inline SinkDashVectorParameters& setPartition(const SinkDashVectorParameters::Partition & partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };
        inline SinkDashVectorParameters& setPartition(SinkDashVectorParameters::Partition && partition) { DARABONBA_PTR_SET_RVALUE(partition_, partition) };


        // primaryKeyId Field Functions 
        bool hasPrimaryKeyId() const { return this->primaryKeyId_ != nullptr;};
        void deletePrimaryKeyId() { this->primaryKeyId_ = nullptr;};
        inline const SinkDashVectorParameters::PrimaryKeyId & getPrimaryKeyId() const { DARABONBA_PTR_GET_CONST(primaryKeyId_, SinkDashVectorParameters::PrimaryKeyId) };
        inline SinkDashVectorParameters::PrimaryKeyId getPrimaryKeyId() { DARABONBA_PTR_GET(primaryKeyId_, SinkDashVectorParameters::PrimaryKeyId) };
        inline SinkDashVectorParameters& setPrimaryKeyId(const SinkDashVectorParameters::PrimaryKeyId & primaryKeyId) { DARABONBA_PTR_SET_VALUE(primaryKeyId_, primaryKeyId) };
        inline SinkDashVectorParameters& setPrimaryKeyId(SinkDashVectorParameters::PrimaryKeyId && primaryKeyId) { DARABONBA_PTR_SET_RVALUE(primaryKeyId_, primaryKeyId) };


        // vector Field Functions 
        bool hasVector() const { return this->vector_ != nullptr;};
        void deleteVector() { this->vector_ = nullptr;};
        inline const SinkDashVectorParameters::Vector & getVector() const { DARABONBA_PTR_GET_CONST(vector_, SinkDashVectorParameters::Vector) };
        inline SinkDashVectorParameters::Vector getVector() { DARABONBA_PTR_GET(vector_, SinkDashVectorParameters::Vector) };
        inline SinkDashVectorParameters& setVector(const SinkDashVectorParameters::Vector & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
        inline SinkDashVectorParameters& setVector(SinkDashVectorParameters::Vector && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


      protected:
        shared_ptr<string> apiKey_ {};
        shared_ptr<string> collection_ {};
        shared_ptr<vector<SinkDashVectorParameters::DashVectorSchemaParameters>> dashVectorSchemaParameters_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> network_ {};
        shared_ptr<string> operation_ {};
        shared_ptr<SinkDashVectorParameters::Partition> partition_ {};
        shared_ptr<SinkDashVectorParameters::PrimaryKeyId> primaryKeyId_ {};
        shared_ptr<SinkDashVectorParameters::Vector> vector_ {};
      };

      class SinkCustomizedKafkaParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkCustomizedKafkaParameters& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        };
        friend void from_json(const Darabonba::Json& j, SinkCustomizedKafkaParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        };
        SinkCustomizedKafkaParameters() = default ;
        SinkCustomizedKafkaParameters(const SinkCustomizedKafkaParameters &) = default ;
        SinkCustomizedKafkaParameters(SinkCustomizedKafkaParameters &&) = default ;
        SinkCustomizedKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkCustomizedKafkaParameters() = default ;
        SinkCustomizedKafkaParameters& operator=(const SinkCustomizedKafkaParameters &) = default ;
        SinkCustomizedKafkaParameters& operator=(SinkCustomizedKafkaParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline SinkCustomizedKafkaParameters& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      protected:
        shared_ptr<string> instanceId_ {};
      };

      class SinkCustomizedKafkaConnectorParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkCustomizedKafkaConnectorParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ConnectorPackageUrl, connectorPackageUrl_);
          DARABONBA_PTR_TO_JSON(ConnectorParameters, connectorParameters_);
          DARABONBA_ANY_TO_JSON(WorkerParameters, workerParameters_);
        };
        friend void from_json(const Darabonba::Json& j, SinkCustomizedKafkaConnectorParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ConnectorPackageUrl, connectorPackageUrl_);
          DARABONBA_PTR_FROM_JSON(ConnectorParameters, connectorParameters_);
          DARABONBA_ANY_FROM_JSON(WorkerParameters, workerParameters_);
        };
        SinkCustomizedKafkaConnectorParameters() = default ;
        SinkCustomizedKafkaConnectorParameters(const SinkCustomizedKafkaConnectorParameters &) = default ;
        SinkCustomizedKafkaConnectorParameters(SinkCustomizedKafkaConnectorParameters &&) = default ;
        SinkCustomizedKafkaConnectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkCustomizedKafkaConnectorParameters() = default ;
        SinkCustomizedKafkaConnectorParameters& operator=(const SinkCustomizedKafkaConnectorParameters &) = default ;
        SinkCustomizedKafkaConnectorParameters& operator=(SinkCustomizedKafkaConnectorParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConnectorParameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConnectorParameters& obj) { 
            DARABONBA_ANY_TO_JSON(Config, config_);
            DARABONBA_PTR_TO_JSON(Name, name_);
          };
          friend void from_json(const Darabonba::Json& j, ConnectorParameters& obj) { 
            DARABONBA_ANY_FROM_JSON(Config, config_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
          };
          ConnectorParameters() = default ;
          ConnectorParameters(const ConnectorParameters &) = default ;
          ConnectorParameters(ConnectorParameters &&) = default ;
          ConnectorParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConnectorParameters() = default ;
          ConnectorParameters& operator=(const ConnectorParameters &) = default ;
          ConnectorParameters& operator=(ConnectorParameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->config_ == nullptr
        && this->name_ == nullptr; };
          // config Field Functions 
          bool hasConfig() const { return this->config_ != nullptr;};
          void deleteConfig() { this->config_ = nullptr;};
          inline           const Darabonba::Json & getConfig() const { DARABONBA_GET(config_) };
          Darabonba::Json & getConfig() { DARABONBA_GET(config_) };
          inline ConnectorParameters& setConfig(const Darabonba::Json & config) { DARABONBA_SET_VALUE(config_, config) };
          inline ConnectorParameters& setConfig(Darabonba::Json && config) { DARABONBA_SET_RVALUE(config_, config) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline ConnectorParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        protected:
          Darabonba::Json config_ {};
          shared_ptr<string> name_ {};
        };

        virtual bool empty() const override { return this->connectorPackageUrl_ == nullptr
        && this->connectorParameters_ == nullptr && this->workerParameters_ == nullptr; };
        // connectorPackageUrl Field Functions 
        bool hasConnectorPackageUrl() const { return this->connectorPackageUrl_ != nullptr;};
        void deleteConnectorPackageUrl() { this->connectorPackageUrl_ = nullptr;};
        inline string getConnectorPackageUrl() const { DARABONBA_PTR_GET_DEFAULT(connectorPackageUrl_, "") };
        inline SinkCustomizedKafkaConnectorParameters& setConnectorPackageUrl(string connectorPackageUrl) { DARABONBA_PTR_SET_VALUE(connectorPackageUrl_, connectorPackageUrl) };


        // connectorParameters Field Functions 
        bool hasConnectorParameters() const { return this->connectorParameters_ != nullptr;};
        void deleteConnectorParameters() { this->connectorParameters_ = nullptr;};
        inline const SinkCustomizedKafkaConnectorParameters::ConnectorParameters & getConnectorParameters() const { DARABONBA_PTR_GET_CONST(connectorParameters_, SinkCustomizedKafkaConnectorParameters::ConnectorParameters) };
        inline SinkCustomizedKafkaConnectorParameters::ConnectorParameters getConnectorParameters() { DARABONBA_PTR_GET(connectorParameters_, SinkCustomizedKafkaConnectorParameters::ConnectorParameters) };
        inline SinkCustomizedKafkaConnectorParameters& setConnectorParameters(const SinkCustomizedKafkaConnectorParameters::ConnectorParameters & connectorParameters) { DARABONBA_PTR_SET_VALUE(connectorParameters_, connectorParameters) };
        inline SinkCustomizedKafkaConnectorParameters& setConnectorParameters(SinkCustomizedKafkaConnectorParameters::ConnectorParameters && connectorParameters) { DARABONBA_PTR_SET_RVALUE(connectorParameters_, connectorParameters) };


        // workerParameters Field Functions 
        bool hasWorkerParameters() const { return this->workerParameters_ != nullptr;};
        void deleteWorkerParameters() { this->workerParameters_ = nullptr;};
        inline         const Darabonba::Json & getWorkerParameters() const { DARABONBA_GET(workerParameters_) };
        Darabonba::Json & getWorkerParameters() { DARABONBA_GET(workerParameters_) };
        inline SinkCustomizedKafkaConnectorParameters& setWorkerParameters(const Darabonba::Json & workerParameters) { DARABONBA_SET_VALUE(workerParameters_, workerParameters) };
        inline SinkCustomizedKafkaConnectorParameters& setWorkerParameters(Darabonba::Json && workerParameters) { DARABONBA_SET_RVALUE(workerParameters_, workerParameters) };


      protected:
        shared_ptr<string> connectorPackageUrl_ {};
        shared_ptr<SinkCustomizedKafkaConnectorParameters::ConnectorParameters> connectorParameters_ {};
        Darabonba::Json workerParameters_ {};
      };

      class SinkApacheRocketMQCheckpointParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkApacheRocketMQCheckpointParameters& obj) { 
          DARABONBA_PTR_TO_JSON(ConsumeTimestamp, consumeTimestamp_);
          DARABONBA_PTR_TO_JSON(Group, group_);
          DARABONBA_PTR_TO_JSON(InstanceEndpoint, instanceEndpoint_);
          DARABONBA_PTR_TO_JSON(InstancePassword, instancePassword_);
          DARABONBA_PTR_TO_JSON(InstanceUsername, instanceUsername_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SinkApacheRocketMQCheckpointParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(ConsumeTimestamp, consumeTimestamp_);
          DARABONBA_PTR_FROM_JSON(Group, group_);
          DARABONBA_PTR_FROM_JSON(InstanceEndpoint, instanceEndpoint_);
          DARABONBA_PTR_FROM_JSON(InstancePassword, instancePassword_);
          DARABONBA_PTR_FROM_JSON(InstanceUsername, instanceUsername_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SinkApacheRocketMQCheckpointParameters() = default ;
        SinkApacheRocketMQCheckpointParameters(const SinkApacheRocketMQCheckpointParameters &) = default ;
        SinkApacheRocketMQCheckpointParameters(SinkApacheRocketMQCheckpointParameters &&) = default ;
        SinkApacheRocketMQCheckpointParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkApacheRocketMQCheckpointParameters() = default ;
        SinkApacheRocketMQCheckpointParameters& operator=(const SinkApacheRocketMQCheckpointParameters &) = default ;
        SinkApacheRocketMQCheckpointParameters& operator=(SinkApacheRocketMQCheckpointParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Topic : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Topic& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Topic& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Topic() = default ;
          Topic(const Topic &) = default ;
          Topic(Topic &&) = default ;
          Topic(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Topic() = default ;
          Topic& operator=(const Topic &) = default ;
          Topic& operator=(Topic &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Topic& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Topic& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Topic& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Group : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Group& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Group& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Group() = default ;
          Group(const Group &) = default ;
          Group(Group &&) = default ;
          Group(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Group() = default ;
          Group& operator=(const Group &) = default ;
          Group& operator=(Group &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Group& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Group& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Group& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class ConsumeTimestamp : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConsumeTimestamp& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ConsumeTimestamp& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          ConsumeTimestamp() = default ;
          ConsumeTimestamp(const ConsumeTimestamp &) = default ;
          ConsumeTimestamp(ConsumeTimestamp &&) = default ;
          ConsumeTimestamp(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConsumeTimestamp() = default ;
          ConsumeTimestamp& operator=(const ConsumeTimestamp &) = default ;
          ConsumeTimestamp& operator=(ConsumeTimestamp &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline ConsumeTimestamp& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline ConsumeTimestamp& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline ConsumeTimestamp& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->consumeTimestamp_ == nullptr
        && this->group_ == nullptr && this->instanceEndpoint_ == nullptr && this->instancePassword_ == nullptr && this->instanceUsername_ == nullptr && this->networkType_ == nullptr
        && this->securityGroupId_ == nullptr && this->topic_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr; };
        // consumeTimestamp Field Functions 
        bool hasConsumeTimestamp() const { return this->consumeTimestamp_ != nullptr;};
        void deleteConsumeTimestamp() { this->consumeTimestamp_ = nullptr;};
        inline const SinkApacheRocketMQCheckpointParameters::ConsumeTimestamp & getConsumeTimestamp() const { DARABONBA_PTR_GET_CONST(consumeTimestamp_, SinkApacheRocketMQCheckpointParameters::ConsumeTimestamp) };
        inline SinkApacheRocketMQCheckpointParameters::ConsumeTimestamp getConsumeTimestamp() { DARABONBA_PTR_GET(consumeTimestamp_, SinkApacheRocketMQCheckpointParameters::ConsumeTimestamp) };
        inline SinkApacheRocketMQCheckpointParameters& setConsumeTimestamp(const SinkApacheRocketMQCheckpointParameters::ConsumeTimestamp & consumeTimestamp) { DARABONBA_PTR_SET_VALUE(consumeTimestamp_, consumeTimestamp) };
        inline SinkApacheRocketMQCheckpointParameters& setConsumeTimestamp(SinkApacheRocketMQCheckpointParameters::ConsumeTimestamp && consumeTimestamp) { DARABONBA_PTR_SET_RVALUE(consumeTimestamp_, consumeTimestamp) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline const SinkApacheRocketMQCheckpointParameters::Group & getGroup() const { DARABONBA_PTR_GET_CONST(group_, SinkApacheRocketMQCheckpointParameters::Group) };
        inline SinkApacheRocketMQCheckpointParameters::Group getGroup() { DARABONBA_PTR_GET(group_, SinkApacheRocketMQCheckpointParameters::Group) };
        inline SinkApacheRocketMQCheckpointParameters& setGroup(const SinkApacheRocketMQCheckpointParameters::Group & group) { DARABONBA_PTR_SET_VALUE(group_, group) };
        inline SinkApacheRocketMQCheckpointParameters& setGroup(SinkApacheRocketMQCheckpointParameters::Group && group) { DARABONBA_PTR_SET_RVALUE(group_, group) };


        // instanceEndpoint Field Functions 
        bool hasInstanceEndpoint() const { return this->instanceEndpoint_ != nullptr;};
        void deleteInstanceEndpoint() { this->instanceEndpoint_ = nullptr;};
        inline string getInstanceEndpoint() const { DARABONBA_PTR_GET_DEFAULT(instanceEndpoint_, "") };
        inline SinkApacheRocketMQCheckpointParameters& setInstanceEndpoint(string instanceEndpoint) { DARABONBA_PTR_SET_VALUE(instanceEndpoint_, instanceEndpoint) };


        // instancePassword Field Functions 
        bool hasInstancePassword() const { return this->instancePassword_ != nullptr;};
        void deleteInstancePassword() { this->instancePassword_ = nullptr;};
        inline string getInstancePassword() const { DARABONBA_PTR_GET_DEFAULT(instancePassword_, "") };
        inline SinkApacheRocketMQCheckpointParameters& setInstancePassword(string instancePassword) { DARABONBA_PTR_SET_VALUE(instancePassword_, instancePassword) };


        // instanceUsername Field Functions 
        bool hasInstanceUsername() const { return this->instanceUsername_ != nullptr;};
        void deleteInstanceUsername() { this->instanceUsername_ = nullptr;};
        inline string getInstanceUsername() const { DARABONBA_PTR_GET_DEFAULT(instanceUsername_, "") };
        inline SinkApacheRocketMQCheckpointParameters& setInstanceUsername(string instanceUsername) { DARABONBA_PTR_SET_VALUE(instanceUsername_, instanceUsername) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline SinkApacheRocketMQCheckpointParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline SinkApacheRocketMQCheckpointParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline const SinkApacheRocketMQCheckpointParameters::Topic & getTopic() const { DARABONBA_PTR_GET_CONST(topic_, SinkApacheRocketMQCheckpointParameters::Topic) };
        inline SinkApacheRocketMQCheckpointParameters::Topic getTopic() { DARABONBA_PTR_GET(topic_, SinkApacheRocketMQCheckpointParameters::Topic) };
        inline SinkApacheRocketMQCheckpointParameters& setTopic(const SinkApacheRocketMQCheckpointParameters::Topic & topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };
        inline SinkApacheRocketMQCheckpointParameters& setTopic(SinkApacheRocketMQCheckpointParameters::Topic && topic) { DARABONBA_PTR_SET_RVALUE(topic_, topic) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline SinkApacheRocketMQCheckpointParameters& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline SinkApacheRocketMQCheckpointParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<SinkApacheRocketMQCheckpointParameters::ConsumeTimestamp> consumeTimestamp_ {};
        shared_ptr<SinkApacheRocketMQCheckpointParameters::Group> group_ {};
        shared_ptr<string> instanceEndpoint_ {};
        shared_ptr<string> instancePassword_ {};
        shared_ptr<string> instanceUsername_ {};
        shared_ptr<string> networkType_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<SinkApacheRocketMQCheckpointParameters::Topic> topic_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> vpcId_ {};
      };

      class SinkApacheKafkaParameters : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SinkApacheKafkaParameters& obj) { 
          DARABONBA_PTR_TO_JSON(Acks, acks_);
          DARABONBA_PTR_TO_JSON(Bootstraps, bootstraps_);
          DARABONBA_PTR_TO_JSON(CompressionType, compressionType_);
          DARABONBA_PTR_TO_JSON(Headers, headers_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(SaslMechanism, saslMechanism_);
          DARABONBA_PTR_TO_JSON(SaslPassword, saslPassword_);
          DARABONBA_PTR_TO_JSON(SaslUser, saslUser_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(SecurityProtocol, securityProtocol_);
          DARABONBA_PTR_TO_JSON(SslTruststoreCertificates, sslTruststoreCertificates_);
          DARABONBA_PTR_TO_JSON(Topic, topic_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(Value, value_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, SinkApacheKafkaParameters& obj) { 
          DARABONBA_PTR_FROM_JSON(Acks, acks_);
          DARABONBA_PTR_FROM_JSON(Bootstraps, bootstraps_);
          DARABONBA_PTR_FROM_JSON(CompressionType, compressionType_);
          DARABONBA_PTR_FROM_JSON(Headers, headers_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(SaslMechanism, saslMechanism_);
          DARABONBA_PTR_FROM_JSON(SaslPassword, saslPassword_);
          DARABONBA_PTR_FROM_JSON(SaslUser, saslUser_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(SecurityProtocol, securityProtocol_);
          DARABONBA_PTR_FROM_JSON(SslTruststoreCertificates, sslTruststoreCertificates_);
          DARABONBA_PTR_FROM_JSON(Topic, topic_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        SinkApacheKafkaParameters() = default ;
        SinkApacheKafkaParameters(const SinkApacheKafkaParameters &) = default ;
        SinkApacheKafkaParameters(SinkApacheKafkaParameters &&) = default ;
        SinkApacheKafkaParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SinkApacheKafkaParameters() = default ;
        SinkApacheKafkaParameters& operator=(const SinkApacheKafkaParameters &) = default ;
        SinkApacheKafkaParameters& operator=(SinkApacheKafkaParameters &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VpcId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VpcId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VpcId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VpcId() = default ;
          VpcId(const VpcId &) = default ;
          VpcId(VpcId &&) = default ;
          VpcId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VpcId() = default ;
          VpcId& operator=(const VpcId &) = default ;
          VpcId& operator=(VpcId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline VpcId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline VpcId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VpcId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Value : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Value& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Value& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Value() = default ;
          Value(const Value &) = default ;
          Value(Value &&) = default ;
          Value(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Value() = default ;
          Value& operator=(const Value &) = default ;
          Value& operator=(Value &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Value& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Value& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Value& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class VSwitchIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitchIds& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitchIds& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          VSwitchIds() = default ;
          VSwitchIds(const VSwitchIds &) = default ;
          VSwitchIds(VSwitchIds &&) = default ;
          VSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VSwitchIds() = default ;
          VSwitchIds& operator=(const VSwitchIds &) = default ;
          VSwitchIds& operator=(VSwitchIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline VSwitchIds& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline VSwitchIds& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline VSwitchIds& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class SecurityGroupId : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityGroupId& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityGroupId& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          SecurityGroupId() = default ;
          SecurityGroupId(const SecurityGroupId &) = default ;
          SecurityGroupId(SecurityGroupId &&) = default ;
          SecurityGroupId(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityGroupId() = default ;
          SecurityGroupId& operator=(const SecurityGroupId &) = default ;
          SecurityGroupId& operator=(SecurityGroupId &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline SecurityGroupId& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline SecurityGroupId& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline SecurityGroupId& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class NetworkType : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkType& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkType& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          NetworkType() = default ;
          NetworkType(const NetworkType &) = default ;
          NetworkType(NetworkType &&) = default ;
          NetworkType(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkType() = default ;
          NetworkType& operator=(const NetworkType &) = default ;
          NetworkType& operator=(NetworkType &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline NetworkType& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline NetworkType& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline NetworkType& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Key : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Key& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Key& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Key() = default ;
          Key(const Key &) = default ;
          Key(Key &&) = default ;
          Key(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Key() = default ;
          Key& operator=(const Key &) = default ;
          Key& operator=(Key &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Key& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Key& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Key& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        class Headers : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Headers& obj) { 
            DARABONBA_PTR_TO_JSON(Form, form_);
            DARABONBA_PTR_TO_JSON(Template, template_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Headers& obj) { 
            DARABONBA_PTR_FROM_JSON(Form, form_);
            DARABONBA_PTR_FROM_JSON(Template, template_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Headers() = default ;
          Headers(const Headers &) = default ;
          Headers(Headers &&) = default ;
          Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Headers() = default ;
          Headers& operator=(const Headers &) = default ;
          Headers& operator=(Headers &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->form_ == nullptr
        && this->template_ == nullptr && this->value_ == nullptr; };
          // form Field Functions 
          bool hasForm() const { return this->form_ != nullptr;};
          void deleteForm() { this->form_ = nullptr;};
          inline string getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, "") };
          inline Headers& setForm(string form) { DARABONBA_PTR_SET_VALUE(form_, form) };


          // template Field Functions 
          bool hasTemplate() const { return this->template_ != nullptr;};
          void deleteTemplate() { this->template_ = nullptr;};
          inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
          inline Headers& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Headers& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> form_ {};
          shared_ptr<string> template_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->acks_ == nullptr
        && this->bootstraps_ == nullptr && this->compressionType_ == nullptr && this->headers_ == nullptr && this->key_ == nullptr && this->networkType_ == nullptr
        && this->saslMechanism_ == nullptr && this->saslPassword_ == nullptr && this->saslUser_ == nullptr && this->securityGroupId_ == nullptr && this->securityProtocol_ == nullptr
        && this->sslTruststoreCertificates_ == nullptr && this->topic_ == nullptr && this->vSwitchIds_ == nullptr && this->value_ == nullptr && this->vpcId_ == nullptr; };
        // acks Field Functions 
        bool hasAcks() const { return this->acks_ != nullptr;};
        void deleteAcks() { this->acks_ = nullptr;};
        inline string getAcks() const { DARABONBA_PTR_GET_DEFAULT(acks_, "") };
        inline SinkApacheKafkaParameters& setAcks(string acks) { DARABONBA_PTR_SET_VALUE(acks_, acks) };


        // bootstraps Field Functions 
        bool hasBootstraps() const { return this->bootstraps_ != nullptr;};
        void deleteBootstraps() { this->bootstraps_ = nullptr;};
        inline string getBootstraps() const { DARABONBA_PTR_GET_DEFAULT(bootstraps_, "") };
        inline SinkApacheKafkaParameters& setBootstraps(string bootstraps) { DARABONBA_PTR_SET_VALUE(bootstraps_, bootstraps) };


        // compressionType Field Functions 
        bool hasCompressionType() const { return this->compressionType_ != nullptr;};
        void deleteCompressionType() { this->compressionType_ = nullptr;};
        inline string getCompressionType() const { DARABONBA_PTR_GET_DEFAULT(compressionType_, "") };
        inline SinkApacheKafkaParameters& setCompressionType(string compressionType) { DARABONBA_PTR_SET_VALUE(compressionType_, compressionType) };


        // headers Field Functions 
        bool hasHeaders() const { return this->headers_ != nullptr;};
        void deleteHeaders() { this->headers_ = nullptr;};
        inline const SinkApacheKafkaParameters::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, SinkApacheKafkaParameters::Headers) };
        inline SinkApacheKafkaParameters::Headers getHeaders() { DARABONBA_PTR_GET(headers_, SinkApacheKafkaParameters::Headers) };
        inline SinkApacheKafkaParameters& setHeaders(const SinkApacheKafkaParameters::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
        inline SinkApacheKafkaParameters& setHeaders(SinkApacheKafkaParameters::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline const SinkApacheKafkaParameters::Key & getKey() const { DARABONBA_PTR_GET_CONST(key_, SinkApacheKafkaParameters::Key) };
        inline SinkApacheKafkaParameters::Key getKey() { DARABONBA_PTR_GET(key_, SinkApacheKafkaParameters::Key) };
        inline SinkApacheKafkaParameters& setKey(const SinkApacheKafkaParameters::Key & key) { DARABONBA_PTR_SET_VALUE(key_, key) };
        inline SinkApacheKafkaParameters& setKey(SinkApacheKafkaParameters::Key && key) { DARABONBA_PTR_SET_RVALUE(key_, key) };


        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline const SinkApacheKafkaParameters::NetworkType & getNetworkType() const { DARABONBA_PTR_GET_CONST(networkType_, SinkApacheKafkaParameters::NetworkType) };
        inline SinkApacheKafkaParameters::NetworkType getNetworkType() { DARABONBA_PTR_GET(networkType_, SinkApacheKafkaParameters::NetworkType) };
        inline SinkApacheKafkaParameters& setNetworkType(const SinkApacheKafkaParameters::NetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
        inline SinkApacheKafkaParameters& setNetworkType(SinkApacheKafkaParameters::NetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


        // saslMechanism Field Functions 
        bool hasSaslMechanism() const { return this->saslMechanism_ != nullptr;};
        void deleteSaslMechanism() { this->saslMechanism_ = nullptr;};
        inline string getSaslMechanism() const { DARABONBA_PTR_GET_DEFAULT(saslMechanism_, "") };
        inline SinkApacheKafkaParameters& setSaslMechanism(string saslMechanism) { DARABONBA_PTR_SET_VALUE(saslMechanism_, saslMechanism) };


        // saslPassword Field Functions 
        bool hasSaslPassword() const { return this->saslPassword_ != nullptr;};
        void deleteSaslPassword() { this->saslPassword_ = nullptr;};
        inline string getSaslPassword() const { DARABONBA_PTR_GET_DEFAULT(saslPassword_, "") };
        inline SinkApacheKafkaParameters& setSaslPassword(string saslPassword) { DARABONBA_PTR_SET_VALUE(saslPassword_, saslPassword) };


        // saslUser Field Functions 
        bool hasSaslUser() const { return this->saslUser_ != nullptr;};
        void deleteSaslUser() { this->saslUser_ = nullptr;};
        inline string getSaslUser() const { DARABONBA_PTR_GET_DEFAULT(saslUser_, "") };
        inline SinkApacheKafkaParameters& setSaslUser(string saslUser) { DARABONBA_PTR_SET_VALUE(saslUser_, saslUser) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline const SinkApacheKafkaParameters::SecurityGroupId & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, SinkApacheKafkaParameters::SecurityGroupId) };
        inline SinkApacheKafkaParameters::SecurityGroupId getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, SinkApacheKafkaParameters::SecurityGroupId) };
        inline SinkApacheKafkaParameters& setSecurityGroupId(const SinkApacheKafkaParameters::SecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
        inline SinkApacheKafkaParameters& setSecurityGroupId(SinkApacheKafkaParameters::SecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


        // securityProtocol Field Functions 
        bool hasSecurityProtocol() const { return this->securityProtocol_ != nullptr;};
        void deleteSecurityProtocol() { this->securityProtocol_ = nullptr;};
        inline string getSecurityProtocol() const { DARABONBA_PTR_GET_DEFAULT(securityProtocol_, "") };
        inline SinkApacheKafkaParameters& setSecurityProtocol(string securityProtocol) { DARABONBA_PTR_SET_VALUE(securityProtocol_, securityProtocol) };


        // sslTruststoreCertificates Field Functions 
        bool hasSslTruststoreCertificates() const { return this->sslTruststoreCertificates_ != nullptr;};
        void deleteSslTruststoreCertificates() { this->sslTruststoreCertificates_ = nullptr;};
        inline string getSslTruststoreCertificates() const { DARABONBA_PTR_GET_DEFAULT(sslTruststoreCertificates_, "") };
        inline SinkApacheKafkaParameters& setSslTruststoreCertificates(string sslTruststoreCertificates) { DARABONBA_PTR_SET_VALUE(sslTruststoreCertificates_, sslTruststoreCertificates) };


        // topic Field Functions 
        bool hasTopic() const { return this->topic_ != nullptr;};
        void deleteTopic() { this->topic_ = nullptr;};
        inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
        inline SinkApacheKafkaParameters& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const SinkApacheKafkaParameters::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, SinkApacheKafkaParameters::VSwitchIds) };
        inline SinkApacheKafkaParameters::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, SinkApacheKafkaParameters::VSwitchIds) };
        inline SinkApacheKafkaParameters& setVSwitchIds(const SinkApacheKafkaParameters::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline SinkApacheKafkaParameters& setVSwitchIds(SinkApacheKafkaParameters::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline const SinkApacheKafkaParameters::Value & getValue() const { DARABONBA_PTR_GET_CONST(value_, SinkApacheKafkaParameters::Value) };
        inline SinkApacheKafkaParameters::Value getValue() { DARABONBA_PTR_GET(value_, SinkApacheKafkaParameters::Value) };
        inline SinkApacheKafkaParameters& setValue(const SinkApacheKafkaParameters::Value & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
        inline SinkApacheKafkaParameters& setValue(SinkApacheKafkaParameters::Value && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline const SinkApacheKafkaParameters::VpcId & getVpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, SinkApacheKafkaParameters::VpcId) };
        inline SinkApacheKafkaParameters::VpcId getVpcId() { DARABONBA_PTR_GET(vpcId_, SinkApacheKafkaParameters::VpcId) };
        inline SinkApacheKafkaParameters& setVpcId(const SinkApacheKafkaParameters::VpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
        inline SinkApacheKafkaParameters& setVpcId(SinkApacheKafkaParameters::VpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


      protected:
        shared_ptr<string> acks_ {};
        shared_ptr<string> bootstraps_ {};
        shared_ptr<string> compressionType_ {};
        shared_ptr<SinkApacheKafkaParameters::Headers> headers_ {};
        shared_ptr<SinkApacheKafkaParameters::Key> key_ {};
        shared_ptr<SinkApacheKafkaParameters::NetworkType> networkType_ {};
        shared_ptr<string> saslMechanism_ {};
        shared_ptr<string> saslPassword_ {};
        shared_ptr<string> saslUser_ {};
        shared_ptr<SinkApacheKafkaParameters::SecurityGroupId> securityGroupId_ {};
        shared_ptr<string> securityProtocol_ {};
        shared_ptr<string> sslTruststoreCertificates_ {};
        shared_ptr<string> topic_ {};
        shared_ptr<SinkApacheKafkaParameters::VSwitchIds> vSwitchIds_ {};
        shared_ptr<SinkApacheKafkaParameters::Value> value_ {};
        shared_ptr<SinkApacheKafkaParameters::VpcId> vpcId_ {};
      };

      virtual bool empty() const override { return this->sinkApacheKafkaParameters_ == nullptr
        && this->sinkApacheRocketMQCheckpointParameters_ == nullptr && this->sinkApiDestinationParameters_ == nullptr && this->sinkBaiLianParameters_ == nullptr && this->sinkCustomizedKafkaConnectorParameters_ == nullptr && this->sinkCustomizedKafkaParameters_ == nullptr
        && this->sinkDashVectorParameters_ == nullptr && this->sinkDataHubParameters_ == nullptr && this->sinkDataWorksTriggerParameters_ == nullptr && this->sinkDorisParameters_ == nullptr && this->sinkEventHouseParameters_ == nullptr
        && this->sinkFcParameters_ == nullptr && this->sinkFnfParameters_ == nullptr && this->sinkHttpsParameters_ == nullptr && this->sinkKafkaParameters_ == nullptr && this->sinkMNSParameters_ == nullptr
        && this->sinkMQTTParameters_ == nullptr && this->sinkOSSParameters_ == nullptr && this->sinkOpenSourceRabbitMQParameters_ == nullptr && this->sinkPrometheusParameters_ == nullptr && this->sinkRabbitMQMetaParameters_ == nullptr
        && this->sinkRabbitMQMsgSyncParameters_ == nullptr && this->sinkRabbitMQParameters_ == nullptr && this->sinkRocketMQCheckpointParameters_ == nullptr && this->sinkRocketMQParameters_ == nullptr && this->sinkSLSParameters_ == nullptr; };
      // sinkApacheKafkaParameters Field Functions 
      bool hasSinkApacheKafkaParameters() const { return this->sinkApacheKafkaParameters_ != nullptr;};
      void deleteSinkApacheKafkaParameters() { this->sinkApacheKafkaParameters_ = nullptr;};
      inline const Sink::SinkApacheKafkaParameters & getSinkApacheKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkApacheKafkaParameters_, Sink::SinkApacheKafkaParameters) };
      inline Sink::SinkApacheKafkaParameters getSinkApacheKafkaParameters() { DARABONBA_PTR_GET(sinkApacheKafkaParameters_, Sink::SinkApacheKafkaParameters) };
      inline Sink& setSinkApacheKafkaParameters(const Sink::SinkApacheKafkaParameters & sinkApacheKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkApacheKafkaParameters_, sinkApacheKafkaParameters) };
      inline Sink& setSinkApacheKafkaParameters(Sink::SinkApacheKafkaParameters && sinkApacheKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkApacheKafkaParameters_, sinkApacheKafkaParameters) };


      // sinkApacheRocketMQCheckpointParameters Field Functions 
      bool hasSinkApacheRocketMQCheckpointParameters() const { return this->sinkApacheRocketMQCheckpointParameters_ != nullptr;};
      void deleteSinkApacheRocketMQCheckpointParameters() { this->sinkApacheRocketMQCheckpointParameters_ = nullptr;};
      inline const Sink::SinkApacheRocketMQCheckpointParameters & getSinkApacheRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkApacheRocketMQCheckpointParameters_, Sink::SinkApacheRocketMQCheckpointParameters) };
      inline Sink::SinkApacheRocketMQCheckpointParameters getSinkApacheRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkApacheRocketMQCheckpointParameters_, Sink::SinkApacheRocketMQCheckpointParameters) };
      inline Sink& setSinkApacheRocketMQCheckpointParameters(const Sink::SinkApacheRocketMQCheckpointParameters & sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };
      inline Sink& setSinkApacheRocketMQCheckpointParameters(Sink::SinkApacheRocketMQCheckpointParameters && sinkApacheRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkApacheRocketMQCheckpointParameters_, sinkApacheRocketMQCheckpointParameters) };


      // sinkApiDestinationParameters Field Functions 
      bool hasSinkApiDestinationParameters() const { return this->sinkApiDestinationParameters_ != nullptr;};
      void deleteSinkApiDestinationParameters() { this->sinkApiDestinationParameters_ = nullptr;};
      inline const SinkApiDestinationParameters & getSinkApiDestinationParameters() const { DARABONBA_PTR_GET_CONST(sinkApiDestinationParameters_, SinkApiDestinationParameters) };
      inline SinkApiDestinationParameters getSinkApiDestinationParameters() { DARABONBA_PTR_GET(sinkApiDestinationParameters_, SinkApiDestinationParameters) };
      inline Sink& setSinkApiDestinationParameters(const SinkApiDestinationParameters & sinkApiDestinationParameters) { DARABONBA_PTR_SET_VALUE(sinkApiDestinationParameters_, sinkApiDestinationParameters) };
      inline Sink& setSinkApiDestinationParameters(SinkApiDestinationParameters && sinkApiDestinationParameters) { DARABONBA_PTR_SET_RVALUE(sinkApiDestinationParameters_, sinkApiDestinationParameters) };


      // sinkBaiLianParameters Field Functions 
      bool hasSinkBaiLianParameters() const { return this->sinkBaiLianParameters_ != nullptr;};
      void deleteSinkBaiLianParameters() { this->sinkBaiLianParameters_ = nullptr;};
      inline const SinkBaiLianParameters & getSinkBaiLianParameters() const { DARABONBA_PTR_GET_CONST(sinkBaiLianParameters_, SinkBaiLianParameters) };
      inline SinkBaiLianParameters getSinkBaiLianParameters() { DARABONBA_PTR_GET(sinkBaiLianParameters_, SinkBaiLianParameters) };
      inline Sink& setSinkBaiLianParameters(const SinkBaiLianParameters & sinkBaiLianParameters) { DARABONBA_PTR_SET_VALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };
      inline Sink& setSinkBaiLianParameters(SinkBaiLianParameters && sinkBaiLianParameters) { DARABONBA_PTR_SET_RVALUE(sinkBaiLianParameters_, sinkBaiLianParameters) };


      // sinkCustomizedKafkaConnectorParameters Field Functions 
      bool hasSinkCustomizedKafkaConnectorParameters() const { return this->sinkCustomizedKafkaConnectorParameters_ != nullptr;};
      void deleteSinkCustomizedKafkaConnectorParameters() { this->sinkCustomizedKafkaConnectorParameters_ = nullptr;};
      inline const Sink::SinkCustomizedKafkaConnectorParameters & getSinkCustomizedKafkaConnectorParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaConnectorParameters_, Sink::SinkCustomizedKafkaConnectorParameters) };
      inline Sink::SinkCustomizedKafkaConnectorParameters getSinkCustomizedKafkaConnectorParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaConnectorParameters_, Sink::SinkCustomizedKafkaConnectorParameters) };
      inline Sink& setSinkCustomizedKafkaConnectorParameters(const Sink::SinkCustomizedKafkaConnectorParameters & sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };
      inline Sink& setSinkCustomizedKafkaConnectorParameters(Sink::SinkCustomizedKafkaConnectorParameters && sinkCustomizedKafkaConnectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaConnectorParameters_, sinkCustomizedKafkaConnectorParameters) };


      // sinkCustomizedKafkaParameters Field Functions 
      bool hasSinkCustomizedKafkaParameters() const { return this->sinkCustomizedKafkaParameters_ != nullptr;};
      void deleteSinkCustomizedKafkaParameters() { this->sinkCustomizedKafkaParameters_ = nullptr;};
      inline const Sink::SinkCustomizedKafkaParameters & getSinkCustomizedKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkCustomizedKafkaParameters_, Sink::SinkCustomizedKafkaParameters) };
      inline Sink::SinkCustomizedKafkaParameters getSinkCustomizedKafkaParameters() { DARABONBA_PTR_GET(sinkCustomizedKafkaParameters_, Sink::SinkCustomizedKafkaParameters) };
      inline Sink& setSinkCustomizedKafkaParameters(const Sink::SinkCustomizedKafkaParameters & sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };
      inline Sink& setSinkCustomizedKafkaParameters(Sink::SinkCustomizedKafkaParameters && sinkCustomizedKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkCustomizedKafkaParameters_, sinkCustomizedKafkaParameters) };


      // sinkDashVectorParameters Field Functions 
      bool hasSinkDashVectorParameters() const { return this->sinkDashVectorParameters_ != nullptr;};
      void deleteSinkDashVectorParameters() { this->sinkDashVectorParameters_ = nullptr;};
      inline const Sink::SinkDashVectorParameters & getSinkDashVectorParameters() const { DARABONBA_PTR_GET_CONST(sinkDashVectorParameters_, Sink::SinkDashVectorParameters) };
      inline Sink::SinkDashVectorParameters getSinkDashVectorParameters() { DARABONBA_PTR_GET(sinkDashVectorParameters_, Sink::SinkDashVectorParameters) };
      inline Sink& setSinkDashVectorParameters(const Sink::SinkDashVectorParameters & sinkDashVectorParameters) { DARABONBA_PTR_SET_VALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };
      inline Sink& setSinkDashVectorParameters(Sink::SinkDashVectorParameters && sinkDashVectorParameters) { DARABONBA_PTR_SET_RVALUE(sinkDashVectorParameters_, sinkDashVectorParameters) };


      // sinkDataHubParameters Field Functions 
      bool hasSinkDataHubParameters() const { return this->sinkDataHubParameters_ != nullptr;};
      void deleteSinkDataHubParameters() { this->sinkDataHubParameters_ = nullptr;};
      inline const Sink::SinkDataHubParameters & getSinkDataHubParameters() const { DARABONBA_PTR_GET_CONST(sinkDataHubParameters_, Sink::SinkDataHubParameters) };
      inline Sink::SinkDataHubParameters getSinkDataHubParameters() { DARABONBA_PTR_GET(sinkDataHubParameters_, Sink::SinkDataHubParameters) };
      inline Sink& setSinkDataHubParameters(const Sink::SinkDataHubParameters & sinkDataHubParameters) { DARABONBA_PTR_SET_VALUE(sinkDataHubParameters_, sinkDataHubParameters) };
      inline Sink& setSinkDataHubParameters(Sink::SinkDataHubParameters && sinkDataHubParameters) { DARABONBA_PTR_SET_RVALUE(sinkDataHubParameters_, sinkDataHubParameters) };


      // sinkDataWorksTriggerParameters Field Functions 
      bool hasSinkDataWorksTriggerParameters() const { return this->sinkDataWorksTriggerParameters_ != nullptr;};
      void deleteSinkDataWorksTriggerParameters() { this->sinkDataWorksTriggerParameters_ = nullptr;};
      inline const SinkDataWorksTriggerParameters & getSinkDataWorksTriggerParameters() const { DARABONBA_PTR_GET_CONST(sinkDataWorksTriggerParameters_, SinkDataWorksTriggerParameters) };
      inline SinkDataWorksTriggerParameters getSinkDataWorksTriggerParameters() { DARABONBA_PTR_GET(sinkDataWorksTriggerParameters_, SinkDataWorksTriggerParameters) };
      inline Sink& setSinkDataWorksTriggerParameters(const SinkDataWorksTriggerParameters & sinkDataWorksTriggerParameters) { DARABONBA_PTR_SET_VALUE(sinkDataWorksTriggerParameters_, sinkDataWorksTriggerParameters) };
      inline Sink& setSinkDataWorksTriggerParameters(SinkDataWorksTriggerParameters && sinkDataWorksTriggerParameters) { DARABONBA_PTR_SET_RVALUE(sinkDataWorksTriggerParameters_, sinkDataWorksTriggerParameters) };


      // sinkDorisParameters Field Functions 
      bool hasSinkDorisParameters() const { return this->sinkDorisParameters_ != nullptr;};
      void deleteSinkDorisParameters() { this->sinkDorisParameters_ = nullptr;};
      inline const Sink::SinkDorisParameters & getSinkDorisParameters() const { DARABONBA_PTR_GET_CONST(sinkDorisParameters_, Sink::SinkDorisParameters) };
      inline Sink::SinkDorisParameters getSinkDorisParameters() { DARABONBA_PTR_GET(sinkDorisParameters_, Sink::SinkDorisParameters) };
      inline Sink& setSinkDorisParameters(const Sink::SinkDorisParameters & sinkDorisParameters) { DARABONBA_PTR_SET_VALUE(sinkDorisParameters_, sinkDorisParameters) };
      inline Sink& setSinkDorisParameters(Sink::SinkDorisParameters && sinkDorisParameters) { DARABONBA_PTR_SET_RVALUE(sinkDorisParameters_, sinkDorisParameters) };


      // sinkEventHouseParameters Field Functions 
      bool hasSinkEventHouseParameters() const { return this->sinkEventHouseParameters_ != nullptr;};
      void deleteSinkEventHouseParameters() { this->sinkEventHouseParameters_ = nullptr;};
      inline const Sink::SinkEventHouseParameters & getSinkEventHouseParameters() const { DARABONBA_PTR_GET_CONST(sinkEventHouseParameters_, Sink::SinkEventHouseParameters) };
      inline Sink::SinkEventHouseParameters getSinkEventHouseParameters() { DARABONBA_PTR_GET(sinkEventHouseParameters_, Sink::SinkEventHouseParameters) };
      inline Sink& setSinkEventHouseParameters(const Sink::SinkEventHouseParameters & sinkEventHouseParameters) { DARABONBA_PTR_SET_VALUE(sinkEventHouseParameters_, sinkEventHouseParameters) };
      inline Sink& setSinkEventHouseParameters(Sink::SinkEventHouseParameters && sinkEventHouseParameters) { DARABONBA_PTR_SET_RVALUE(sinkEventHouseParameters_, sinkEventHouseParameters) };


      // sinkFcParameters Field Functions 
      bool hasSinkFcParameters() const { return this->sinkFcParameters_ != nullptr;};
      void deleteSinkFcParameters() { this->sinkFcParameters_ = nullptr;};
      inline const Sink::SinkFcParameters & getSinkFcParameters() const { DARABONBA_PTR_GET_CONST(sinkFcParameters_, Sink::SinkFcParameters) };
      inline Sink::SinkFcParameters getSinkFcParameters() { DARABONBA_PTR_GET(sinkFcParameters_, Sink::SinkFcParameters) };
      inline Sink& setSinkFcParameters(const Sink::SinkFcParameters & sinkFcParameters) { DARABONBA_PTR_SET_VALUE(sinkFcParameters_, sinkFcParameters) };
      inline Sink& setSinkFcParameters(Sink::SinkFcParameters && sinkFcParameters) { DARABONBA_PTR_SET_RVALUE(sinkFcParameters_, sinkFcParameters) };


      // sinkFnfParameters Field Functions 
      bool hasSinkFnfParameters() const { return this->sinkFnfParameters_ != nullptr;};
      void deleteSinkFnfParameters() { this->sinkFnfParameters_ = nullptr;};
      inline const Sink::SinkFnfParameters & getSinkFnfParameters() const { DARABONBA_PTR_GET_CONST(sinkFnfParameters_, Sink::SinkFnfParameters) };
      inline Sink::SinkFnfParameters getSinkFnfParameters() { DARABONBA_PTR_GET(sinkFnfParameters_, Sink::SinkFnfParameters) };
      inline Sink& setSinkFnfParameters(const Sink::SinkFnfParameters & sinkFnfParameters) { DARABONBA_PTR_SET_VALUE(sinkFnfParameters_, sinkFnfParameters) };
      inline Sink& setSinkFnfParameters(Sink::SinkFnfParameters && sinkFnfParameters) { DARABONBA_PTR_SET_RVALUE(sinkFnfParameters_, sinkFnfParameters) };


      // sinkHttpsParameters Field Functions 
      bool hasSinkHttpsParameters() const { return this->sinkHttpsParameters_ != nullptr;};
      void deleteSinkHttpsParameters() { this->sinkHttpsParameters_ = nullptr;};
      inline const SinkHttpsParameters & getSinkHttpsParameters() const { DARABONBA_PTR_GET_CONST(sinkHttpsParameters_, SinkHttpsParameters) };
      inline SinkHttpsParameters getSinkHttpsParameters() { DARABONBA_PTR_GET(sinkHttpsParameters_, SinkHttpsParameters) };
      inline Sink& setSinkHttpsParameters(const SinkHttpsParameters & sinkHttpsParameters) { DARABONBA_PTR_SET_VALUE(sinkHttpsParameters_, sinkHttpsParameters) };
      inline Sink& setSinkHttpsParameters(SinkHttpsParameters && sinkHttpsParameters) { DARABONBA_PTR_SET_RVALUE(sinkHttpsParameters_, sinkHttpsParameters) };


      // sinkKafkaParameters Field Functions 
      bool hasSinkKafkaParameters() const { return this->sinkKafkaParameters_ != nullptr;};
      void deleteSinkKafkaParameters() { this->sinkKafkaParameters_ = nullptr;};
      inline const Sink::SinkKafkaParameters & getSinkKafkaParameters() const { DARABONBA_PTR_GET_CONST(sinkKafkaParameters_, Sink::SinkKafkaParameters) };
      inline Sink::SinkKafkaParameters getSinkKafkaParameters() { DARABONBA_PTR_GET(sinkKafkaParameters_, Sink::SinkKafkaParameters) };
      inline Sink& setSinkKafkaParameters(const Sink::SinkKafkaParameters & sinkKafkaParameters) { DARABONBA_PTR_SET_VALUE(sinkKafkaParameters_, sinkKafkaParameters) };
      inline Sink& setSinkKafkaParameters(Sink::SinkKafkaParameters && sinkKafkaParameters) { DARABONBA_PTR_SET_RVALUE(sinkKafkaParameters_, sinkKafkaParameters) };


      // sinkMNSParameters Field Functions 
      bool hasSinkMNSParameters() const { return this->sinkMNSParameters_ != nullptr;};
      void deleteSinkMNSParameters() { this->sinkMNSParameters_ = nullptr;};
      inline const Sink::SinkMNSParameters & getSinkMNSParameters() const { DARABONBA_PTR_GET_CONST(sinkMNSParameters_, Sink::SinkMNSParameters) };
      inline Sink::SinkMNSParameters getSinkMNSParameters() { DARABONBA_PTR_GET(sinkMNSParameters_, Sink::SinkMNSParameters) };
      inline Sink& setSinkMNSParameters(const Sink::SinkMNSParameters & sinkMNSParameters) { DARABONBA_PTR_SET_VALUE(sinkMNSParameters_, sinkMNSParameters) };
      inline Sink& setSinkMNSParameters(Sink::SinkMNSParameters && sinkMNSParameters) { DARABONBA_PTR_SET_RVALUE(sinkMNSParameters_, sinkMNSParameters) };


      // sinkMQTTParameters Field Functions 
      bool hasSinkMQTTParameters() const { return this->sinkMQTTParameters_ != nullptr;};
      void deleteSinkMQTTParameters() { this->sinkMQTTParameters_ = nullptr;};
      inline const SinkMQTTParameters & getSinkMQTTParameters() const { DARABONBA_PTR_GET_CONST(sinkMQTTParameters_, SinkMQTTParameters) };
      inline SinkMQTTParameters getSinkMQTTParameters() { DARABONBA_PTR_GET(sinkMQTTParameters_, SinkMQTTParameters) };
      inline Sink& setSinkMQTTParameters(const SinkMQTTParameters & sinkMQTTParameters) { DARABONBA_PTR_SET_VALUE(sinkMQTTParameters_, sinkMQTTParameters) };
      inline Sink& setSinkMQTTParameters(SinkMQTTParameters && sinkMQTTParameters) { DARABONBA_PTR_SET_RVALUE(sinkMQTTParameters_, sinkMQTTParameters) };


      // sinkOSSParameters Field Functions 
      bool hasSinkOSSParameters() const { return this->sinkOSSParameters_ != nullptr;};
      void deleteSinkOSSParameters() { this->sinkOSSParameters_ = nullptr;};
      inline const SinkOSSParameters & getSinkOSSParameters() const { DARABONBA_PTR_GET_CONST(sinkOSSParameters_, SinkOSSParameters) };
      inline SinkOSSParameters getSinkOSSParameters() { DARABONBA_PTR_GET(sinkOSSParameters_, SinkOSSParameters) };
      inline Sink& setSinkOSSParameters(const SinkOSSParameters & sinkOSSParameters) { DARABONBA_PTR_SET_VALUE(sinkOSSParameters_, sinkOSSParameters) };
      inline Sink& setSinkOSSParameters(SinkOSSParameters && sinkOSSParameters) { DARABONBA_PTR_SET_RVALUE(sinkOSSParameters_, sinkOSSParameters) };


      // sinkOpenSourceRabbitMQParameters Field Functions 
      bool hasSinkOpenSourceRabbitMQParameters() const { return this->sinkOpenSourceRabbitMQParameters_ != nullptr;};
      void deleteSinkOpenSourceRabbitMQParameters() { this->sinkOpenSourceRabbitMQParameters_ = nullptr;};
      inline const Sink::SinkOpenSourceRabbitMQParameters & getSinkOpenSourceRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkOpenSourceRabbitMQParameters_, Sink::SinkOpenSourceRabbitMQParameters) };
      inline Sink::SinkOpenSourceRabbitMQParameters getSinkOpenSourceRabbitMQParameters() { DARABONBA_PTR_GET(sinkOpenSourceRabbitMQParameters_, Sink::SinkOpenSourceRabbitMQParameters) };
      inline Sink& setSinkOpenSourceRabbitMQParameters(const Sink::SinkOpenSourceRabbitMQParameters & sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };
      inline Sink& setSinkOpenSourceRabbitMQParameters(Sink::SinkOpenSourceRabbitMQParameters && sinkOpenSourceRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkOpenSourceRabbitMQParameters_, sinkOpenSourceRabbitMQParameters) };


      // sinkPrometheusParameters Field Functions 
      bool hasSinkPrometheusParameters() const { return this->sinkPrometheusParameters_ != nullptr;};
      void deleteSinkPrometheusParameters() { this->sinkPrometheusParameters_ = nullptr;};
      inline const Sink::SinkPrometheusParameters & getSinkPrometheusParameters() const { DARABONBA_PTR_GET_CONST(sinkPrometheusParameters_, Sink::SinkPrometheusParameters) };
      inline Sink::SinkPrometheusParameters getSinkPrometheusParameters() { DARABONBA_PTR_GET(sinkPrometheusParameters_, Sink::SinkPrometheusParameters) };
      inline Sink& setSinkPrometheusParameters(const Sink::SinkPrometheusParameters & sinkPrometheusParameters) { DARABONBA_PTR_SET_VALUE(sinkPrometheusParameters_, sinkPrometheusParameters) };
      inline Sink& setSinkPrometheusParameters(Sink::SinkPrometheusParameters && sinkPrometheusParameters) { DARABONBA_PTR_SET_RVALUE(sinkPrometheusParameters_, sinkPrometheusParameters) };


      // sinkRabbitMQMetaParameters Field Functions 
      bool hasSinkRabbitMQMetaParameters() const { return this->sinkRabbitMQMetaParameters_ != nullptr;};
      void deleteSinkRabbitMQMetaParameters() { this->sinkRabbitMQMetaParameters_ = nullptr;};
      inline const SinkRabbitMQMetaParameters & getSinkRabbitMQMetaParameters() const { DARABONBA_PTR_GET_CONST(sinkRabbitMQMetaParameters_, SinkRabbitMQMetaParameters) };
      inline SinkRabbitMQMetaParameters getSinkRabbitMQMetaParameters() { DARABONBA_PTR_GET(sinkRabbitMQMetaParameters_, SinkRabbitMQMetaParameters) };
      inline Sink& setSinkRabbitMQMetaParameters(const SinkRabbitMQMetaParameters & sinkRabbitMQMetaParameters) { DARABONBA_PTR_SET_VALUE(sinkRabbitMQMetaParameters_, sinkRabbitMQMetaParameters) };
      inline Sink& setSinkRabbitMQMetaParameters(SinkRabbitMQMetaParameters && sinkRabbitMQMetaParameters) { DARABONBA_PTR_SET_RVALUE(sinkRabbitMQMetaParameters_, sinkRabbitMQMetaParameters) };


      // sinkRabbitMQMsgSyncParameters Field Functions 
      bool hasSinkRabbitMQMsgSyncParameters() const { return this->sinkRabbitMQMsgSyncParameters_ != nullptr;};
      void deleteSinkRabbitMQMsgSyncParameters() { this->sinkRabbitMQMsgSyncParameters_ = nullptr;};
      inline const SinkRabbitMQMsgSyncParameters & getSinkRabbitMQMsgSyncParameters() const { DARABONBA_PTR_GET_CONST(sinkRabbitMQMsgSyncParameters_, SinkRabbitMQMsgSyncParameters) };
      inline SinkRabbitMQMsgSyncParameters getSinkRabbitMQMsgSyncParameters() { DARABONBA_PTR_GET(sinkRabbitMQMsgSyncParameters_, SinkRabbitMQMsgSyncParameters) };
      inline Sink& setSinkRabbitMQMsgSyncParameters(const SinkRabbitMQMsgSyncParameters & sinkRabbitMQMsgSyncParameters) { DARABONBA_PTR_SET_VALUE(sinkRabbitMQMsgSyncParameters_, sinkRabbitMQMsgSyncParameters) };
      inline Sink& setSinkRabbitMQMsgSyncParameters(SinkRabbitMQMsgSyncParameters && sinkRabbitMQMsgSyncParameters) { DARABONBA_PTR_SET_RVALUE(sinkRabbitMQMsgSyncParameters_, sinkRabbitMQMsgSyncParameters) };


      // sinkRabbitMQParameters Field Functions 
      bool hasSinkRabbitMQParameters() const { return this->sinkRabbitMQParameters_ != nullptr;};
      void deleteSinkRabbitMQParameters() { this->sinkRabbitMQParameters_ = nullptr;};
      inline const Sink::SinkRabbitMQParameters & getSinkRabbitMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRabbitMQParameters_, Sink::SinkRabbitMQParameters) };
      inline Sink::SinkRabbitMQParameters getSinkRabbitMQParameters() { DARABONBA_PTR_GET(sinkRabbitMQParameters_, Sink::SinkRabbitMQParameters) };
      inline Sink& setSinkRabbitMQParameters(const Sink::SinkRabbitMQParameters & sinkRabbitMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };
      inline Sink& setSinkRabbitMQParameters(Sink::SinkRabbitMQParameters && sinkRabbitMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRabbitMQParameters_, sinkRabbitMQParameters) };


      // sinkRocketMQCheckpointParameters Field Functions 
      bool hasSinkRocketMQCheckpointParameters() const { return this->sinkRocketMQCheckpointParameters_ != nullptr;};
      void deleteSinkRocketMQCheckpointParameters() { this->sinkRocketMQCheckpointParameters_ = nullptr;};
      inline const Sink::SinkRocketMQCheckpointParameters & getSinkRocketMQCheckpointParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQCheckpointParameters_, Sink::SinkRocketMQCheckpointParameters) };
      inline Sink::SinkRocketMQCheckpointParameters getSinkRocketMQCheckpointParameters() { DARABONBA_PTR_GET(sinkRocketMQCheckpointParameters_, Sink::SinkRocketMQCheckpointParameters) };
      inline Sink& setSinkRocketMQCheckpointParameters(const Sink::SinkRocketMQCheckpointParameters & sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };
      inline Sink& setSinkRocketMQCheckpointParameters(Sink::SinkRocketMQCheckpointParameters && sinkRocketMQCheckpointParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQCheckpointParameters_, sinkRocketMQCheckpointParameters) };


      // sinkRocketMQParameters Field Functions 
      bool hasSinkRocketMQParameters() const { return this->sinkRocketMQParameters_ != nullptr;};
      void deleteSinkRocketMQParameters() { this->sinkRocketMQParameters_ = nullptr;};
      inline const Sink::SinkRocketMQParameters & getSinkRocketMQParameters() const { DARABONBA_PTR_GET_CONST(sinkRocketMQParameters_, Sink::SinkRocketMQParameters) };
      inline Sink::SinkRocketMQParameters getSinkRocketMQParameters() { DARABONBA_PTR_GET(sinkRocketMQParameters_, Sink::SinkRocketMQParameters) };
      inline Sink& setSinkRocketMQParameters(const Sink::SinkRocketMQParameters & sinkRocketMQParameters) { DARABONBA_PTR_SET_VALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };
      inline Sink& setSinkRocketMQParameters(Sink::SinkRocketMQParameters && sinkRocketMQParameters) { DARABONBA_PTR_SET_RVALUE(sinkRocketMQParameters_, sinkRocketMQParameters) };


      // sinkSLSParameters Field Functions 
      bool hasSinkSLSParameters() const { return this->sinkSLSParameters_ != nullptr;};
      void deleteSinkSLSParameters() { this->sinkSLSParameters_ = nullptr;};
      inline const Sink::SinkSLSParameters & getSinkSLSParameters() const { DARABONBA_PTR_GET_CONST(sinkSLSParameters_, Sink::SinkSLSParameters) };
      inline Sink::SinkSLSParameters getSinkSLSParameters() { DARABONBA_PTR_GET(sinkSLSParameters_, Sink::SinkSLSParameters) };
      inline Sink& setSinkSLSParameters(const Sink::SinkSLSParameters & sinkSLSParameters) { DARABONBA_PTR_SET_VALUE(sinkSLSParameters_, sinkSLSParameters) };
      inline Sink& setSinkSLSParameters(Sink::SinkSLSParameters && sinkSLSParameters) { DARABONBA_PTR_SET_RVALUE(sinkSLSParameters_, sinkSLSParameters) };


    protected:
      shared_ptr<Sink::SinkApacheKafkaParameters> sinkApacheKafkaParameters_ {};
      shared_ptr<Sink::SinkApacheRocketMQCheckpointParameters> sinkApacheRocketMQCheckpointParameters_ {};
      shared_ptr<SinkApiDestinationParameters> sinkApiDestinationParameters_ {};
      shared_ptr<SinkBaiLianParameters> sinkBaiLianParameters_ {};
      shared_ptr<Sink::SinkCustomizedKafkaConnectorParameters> sinkCustomizedKafkaConnectorParameters_ {};
      shared_ptr<Sink::SinkCustomizedKafkaParameters> sinkCustomizedKafkaParameters_ {};
      shared_ptr<Sink::SinkDashVectorParameters> sinkDashVectorParameters_ {};
      // The parameters that are configured if you specify DataHub as the event target.
      shared_ptr<Sink::SinkDataHubParameters> sinkDataHubParameters_ {};
      shared_ptr<SinkDataWorksTriggerParameters> sinkDataWorksTriggerParameters_ {};
      shared_ptr<Sink::SinkDorisParameters> sinkDorisParameters_ {};
      shared_ptr<Sink::SinkEventHouseParameters> sinkEventHouseParameters_ {};
      // The parameters that are configured if you specify Function Compute as the event target.
      shared_ptr<Sink::SinkFcParameters> sinkFcParameters_ {};
      // The parameters that are configured if you specify CloudFlow as the event target.
      shared_ptr<Sink::SinkFnfParameters> sinkFnfParameters_ {};
      shared_ptr<SinkHttpsParameters> sinkHttpsParameters_ {};
      // The parameters that are configured if you specify ApsaraMQ for Kafka as the event target.
      shared_ptr<Sink::SinkKafkaParameters> sinkKafkaParameters_ {};
      // The parameters that are configured if you specify MNS as the event target.
      shared_ptr<Sink::SinkMNSParameters> sinkMNSParameters_ {};
      shared_ptr<SinkMQTTParameters> sinkMQTTParameters_ {};
      shared_ptr<SinkOSSParameters> sinkOSSParameters_ {};
      shared_ptr<Sink::SinkOpenSourceRabbitMQParameters> sinkOpenSourceRabbitMQParameters_ {};
      // The parameters that are configured if you specify Managed Service for Prometheus as the event target.
      shared_ptr<Sink::SinkPrometheusParameters> sinkPrometheusParameters_ {};
      shared_ptr<SinkRabbitMQMetaParameters> sinkRabbitMQMetaParameters_ {};
      shared_ptr<SinkRabbitMQMsgSyncParameters> sinkRabbitMQMsgSyncParameters_ {};
      // The parameters that are configured if you specify ApsaraMQ for RabbitMQ as the event target.
      shared_ptr<Sink::SinkRabbitMQParameters> sinkRabbitMQParameters_ {};
      shared_ptr<Sink::SinkRocketMQCheckpointParameters> sinkRocketMQCheckpointParameters_ {};
      // The parameters that are configured if you specify ApsaraMQ for RocketMQ as the event target.
      shared_ptr<Sink::SinkRocketMQParameters> sinkRocketMQParameters_ {};
      // The parameters that are configured if you specify Simple Log Service as the event target.
      shared_ptr<Sink::SinkSLSParameters> sinkSLSParameters_ {};
    };

    class RunOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RunOptions& obj) { 
        DARABONBA_PTR_TO_JSON(BatchWindow, batchWindow_);
        DARABONBA_PTR_TO_JSON(BusinessOption, businessOption_);
        DARABONBA_PTR_TO_JSON(DeadLetterQueue, deadLetterQueue_);
        DARABONBA_PTR_TO_JSON(ErrorsTolerance, errorsTolerance_);
        DARABONBA_PTR_TO_JSON(MaximumTasks, maximumTasks_);
        DARABONBA_PTR_TO_JSON(RetryStrategy, retryStrategy_);
        DARABONBA_PTR_TO_JSON(Throttling, throttling_);
      };
      friend void from_json(const Darabonba::Json& j, RunOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(BatchWindow, batchWindow_);
        DARABONBA_PTR_FROM_JSON(BusinessOption, businessOption_);
        DARABONBA_PTR_FROM_JSON(DeadLetterQueue, deadLetterQueue_);
        DARABONBA_PTR_FROM_JSON(ErrorsTolerance, errorsTolerance_);
        DARABONBA_PTR_FROM_JSON(MaximumTasks, maximumTasks_);
        DARABONBA_PTR_FROM_JSON(RetryStrategy, retryStrategy_);
        DARABONBA_PTR_FROM_JSON(Throttling, throttling_);
      };
      RunOptions() = default ;
      RunOptions(const RunOptions &) = default ;
      RunOptions(RunOptions &&) = default ;
      RunOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RunOptions() = default ;
      RunOptions& operator=(const RunOptions &) = default ;
      RunOptions& operator=(RunOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RetryStrategy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RetryStrategy& obj) { 
          DARABONBA_PTR_TO_JSON(MaximumEventAgeInSeconds, maximumEventAgeInSeconds_);
          DARABONBA_PTR_TO_JSON(MaximumRetryAttempts, maximumRetryAttempts_);
          DARABONBA_PTR_TO_JSON(PushRetryStrategy, pushRetryStrategy_);
        };
        friend void from_json(const Darabonba::Json& j, RetryStrategy& obj) { 
          DARABONBA_PTR_FROM_JSON(MaximumEventAgeInSeconds, maximumEventAgeInSeconds_);
          DARABONBA_PTR_FROM_JSON(MaximumRetryAttempts, maximumRetryAttempts_);
          DARABONBA_PTR_FROM_JSON(PushRetryStrategy, pushRetryStrategy_);
        };
        RetryStrategy() = default ;
        RetryStrategy(const RetryStrategy &) = default ;
        RetryStrategy(RetryStrategy &&) = default ;
        RetryStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RetryStrategy() = default ;
        RetryStrategy& operator=(const RetryStrategy &) = default ;
        RetryStrategy& operator=(RetryStrategy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->maximumEventAgeInSeconds_ == nullptr
        && this->maximumRetryAttempts_ == nullptr && this->pushRetryStrategy_ == nullptr; };
        // maximumEventAgeInSeconds Field Functions 
        bool hasMaximumEventAgeInSeconds() const { return this->maximumEventAgeInSeconds_ != nullptr;};
        void deleteMaximumEventAgeInSeconds() { this->maximumEventAgeInSeconds_ = nullptr;};
        inline int64_t getMaximumEventAgeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maximumEventAgeInSeconds_, 0L) };
        inline RetryStrategy& setMaximumEventAgeInSeconds(int64_t maximumEventAgeInSeconds) { DARABONBA_PTR_SET_VALUE(maximumEventAgeInSeconds_, maximumEventAgeInSeconds) };


        // maximumRetryAttempts Field Functions 
        bool hasMaximumRetryAttempts() const { return this->maximumRetryAttempts_ != nullptr;};
        void deleteMaximumRetryAttempts() { this->maximumRetryAttempts_ = nullptr;};
        inline int64_t getMaximumRetryAttempts() const { DARABONBA_PTR_GET_DEFAULT(maximumRetryAttempts_, 0L) };
        inline RetryStrategy& setMaximumRetryAttempts(int64_t maximumRetryAttempts) { DARABONBA_PTR_SET_VALUE(maximumRetryAttempts_, maximumRetryAttempts) };


        // pushRetryStrategy Field Functions 
        bool hasPushRetryStrategy() const { return this->pushRetryStrategy_ != nullptr;};
        void deletePushRetryStrategy() { this->pushRetryStrategy_ = nullptr;};
        inline string getPushRetryStrategy() const { DARABONBA_PTR_GET_DEFAULT(pushRetryStrategy_, "") };
        inline RetryStrategy& setPushRetryStrategy(string pushRetryStrategy) { DARABONBA_PTR_SET_VALUE(pushRetryStrategy_, pushRetryStrategy) };


      protected:
        // The maximum timeout period for a retry.
        shared_ptr<int64_t> maximumEventAgeInSeconds_ {};
        // The maximum number of retries.
        shared_ptr<int64_t> maximumRetryAttempts_ {};
        // The retry policy. Valid values:
        // 
        // *   BACKOFF_RETRY
        // *   EXPONENTIAL_DECAY_RETRY
        shared_ptr<string> pushRetryStrategy_ {};
      };

      class DeadLetterQueue : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeadLetterQueue& obj) { 
          DARABONBA_PTR_TO_JSON(Arn, arn_);
          DARABONBA_PTR_TO_JSON(Network, network_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        };
        friend void from_json(const Darabonba::Json& j, DeadLetterQueue& obj) { 
          DARABONBA_PTR_FROM_JSON(Arn, arn_);
          DARABONBA_PTR_FROM_JSON(Network, network_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        };
        DeadLetterQueue() = default ;
        DeadLetterQueue(const DeadLetterQueue &) = default ;
        DeadLetterQueue(DeadLetterQueue &&) = default ;
        DeadLetterQueue(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeadLetterQueue() = default ;
        DeadLetterQueue& operator=(const DeadLetterQueue &) = default ;
        DeadLetterQueue& operator=(DeadLetterQueue &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->arn_ == nullptr
        && this->network_ == nullptr && this->securityGroupId_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr; };
        // arn Field Functions 
        bool hasArn() const { return this->arn_ != nullptr;};
        void deleteArn() { this->arn_ = nullptr;};
        inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
        inline DeadLetterQueue& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


        // network Field Functions 
        bool hasNetwork() const { return this->network_ != nullptr;};
        void deleteNetwork() { this->network_ = nullptr;};
        inline string getNetwork() const { DARABONBA_PTR_GET_DEFAULT(network_, "") };
        inline DeadLetterQueue& setNetwork(string network) { DARABONBA_PTR_SET_VALUE(network_, network) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline DeadLetterQueue& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline string getVSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
        inline DeadLetterQueue& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline DeadLetterQueue& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      protected:
        // The Alibaba Cloud Resource Name (ARN) of the dead-letter queue.
        shared_ptr<string> arn_ {};
        shared_ptr<string> network_ {};
        shared_ptr<string> securityGroupId_ {};
        shared_ptr<string> vSwitchIds_ {};
        shared_ptr<string> vpcId_ {};
      };

      class BusinessOption : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BusinessOption& obj) { 
          DARABONBA_PTR_TO_JSON(BusinessMode, businessMode_);
          DARABONBA_PTR_TO_JSON(MaxCapacityUnitCount, maxCapacityUnitCount_);
          DARABONBA_PTR_TO_JSON(MinCapacityUnitCount, minCapacityUnitCount_);
        };
        friend void from_json(const Darabonba::Json& j, BusinessOption& obj) { 
          DARABONBA_PTR_FROM_JSON(BusinessMode, businessMode_);
          DARABONBA_PTR_FROM_JSON(MaxCapacityUnitCount, maxCapacityUnitCount_);
          DARABONBA_PTR_FROM_JSON(MinCapacityUnitCount, minCapacityUnitCount_);
        };
        BusinessOption() = default ;
        BusinessOption(const BusinessOption &) = default ;
        BusinessOption(BusinessOption &&) = default ;
        BusinessOption(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BusinessOption() = default ;
        BusinessOption& operator=(const BusinessOption &) = default ;
        BusinessOption& operator=(BusinessOption &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->businessMode_ == nullptr
        && this->maxCapacityUnitCount_ == nullptr && this->minCapacityUnitCount_ == nullptr; };
        // businessMode Field Functions 
        bool hasBusinessMode() const { return this->businessMode_ != nullptr;};
        void deleteBusinessMode() { this->businessMode_ = nullptr;};
        inline string getBusinessMode() const { DARABONBA_PTR_GET_DEFAULT(businessMode_, "") };
        inline BusinessOption& setBusinessMode(string businessMode) { DARABONBA_PTR_SET_VALUE(businessMode_, businessMode) };


        // maxCapacityUnitCount Field Functions 
        bool hasMaxCapacityUnitCount() const { return this->maxCapacityUnitCount_ != nullptr;};
        void deleteMaxCapacityUnitCount() { this->maxCapacityUnitCount_ = nullptr;};
        inline int64_t getMaxCapacityUnitCount() const { DARABONBA_PTR_GET_DEFAULT(maxCapacityUnitCount_, 0L) };
        inline BusinessOption& setMaxCapacityUnitCount(int64_t maxCapacityUnitCount) { DARABONBA_PTR_SET_VALUE(maxCapacityUnitCount_, maxCapacityUnitCount) };


        // minCapacityUnitCount Field Functions 
        bool hasMinCapacityUnitCount() const { return this->minCapacityUnitCount_ != nullptr;};
        void deleteMinCapacityUnitCount() { this->minCapacityUnitCount_ = nullptr;};
        inline int64_t getMinCapacityUnitCount() const { DARABONBA_PTR_GET_DEFAULT(minCapacityUnitCount_, 0L) };
        inline BusinessOption& setMinCapacityUnitCount(int64_t minCapacityUnitCount) { DARABONBA_PTR_SET_VALUE(minCapacityUnitCount_, minCapacityUnitCount) };


      protected:
        shared_ptr<string> businessMode_ {};
        shared_ptr<int64_t> maxCapacityUnitCount_ {};
        shared_ptr<int64_t> minCapacityUnitCount_ {};
      };

      class BatchWindow : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BatchWindow& obj) { 
          DARABONBA_PTR_TO_JSON(CountBasedWindow, countBasedWindow_);
          DARABONBA_PTR_TO_JSON(TimeBasedWindow, timeBasedWindow_);
        };
        friend void from_json(const Darabonba::Json& j, BatchWindow& obj) { 
          DARABONBA_PTR_FROM_JSON(CountBasedWindow, countBasedWindow_);
          DARABONBA_PTR_FROM_JSON(TimeBasedWindow, timeBasedWindow_);
        };
        BatchWindow() = default ;
        BatchWindow(const BatchWindow &) = default ;
        BatchWindow(BatchWindow &&) = default ;
        BatchWindow(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BatchWindow() = default ;
        BatchWindow& operator=(const BatchWindow &) = default ;
        BatchWindow& operator=(BatchWindow &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->countBasedWindow_ == nullptr
        && this->timeBasedWindow_ == nullptr; };
        // countBasedWindow Field Functions 
        bool hasCountBasedWindow() const { return this->countBasedWindow_ != nullptr;};
        void deleteCountBasedWindow() { this->countBasedWindow_ = nullptr;};
        inline int32_t getCountBasedWindow() const { DARABONBA_PTR_GET_DEFAULT(countBasedWindow_, 0) };
        inline BatchWindow& setCountBasedWindow(int32_t countBasedWindow) { DARABONBA_PTR_SET_VALUE(countBasedWindow_, countBasedWindow) };


        // timeBasedWindow Field Functions 
        bool hasTimeBasedWindow() const { return this->timeBasedWindow_ != nullptr;};
        void deleteTimeBasedWindow() { this->timeBasedWindow_ = nullptr;};
        inline int32_t getTimeBasedWindow() const { DARABONBA_PTR_GET_DEFAULT(timeBasedWindow_, 0) };
        inline BatchWindow& setTimeBasedWindow(int32_t timeBasedWindow) { DARABONBA_PTR_SET_VALUE(timeBasedWindow_, timeBasedWindow) };


      protected:
        // The maximum number of events that are allowed in the batch window. When this threshold is reached, data in the window is pushed to the downstream service. If multiple batch windows exist, data is pushed if the triggering conditions are met in one of the windows.
        shared_ptr<int32_t> countBasedWindow_ {};
        // The maximum period of time during which events are allowed in the batch window. Unit: seconds. When this threshold is reached, data in the window is pushed to the downstream service. If multiple batch windows exist, data is pushed if the triggering conditions are met in one of the windows.
        shared_ptr<int32_t> timeBasedWindow_ {};
      };

      virtual bool empty() const override { return this->batchWindow_ == nullptr
        && this->businessOption_ == nullptr && this->deadLetterQueue_ == nullptr && this->errorsTolerance_ == nullptr && this->maximumTasks_ == nullptr && this->retryStrategy_ == nullptr
        && this->throttling_ == nullptr; };
      // batchWindow Field Functions 
      bool hasBatchWindow() const { return this->batchWindow_ != nullptr;};
      void deleteBatchWindow() { this->batchWindow_ = nullptr;};
      inline const RunOptions::BatchWindow & getBatchWindow() const { DARABONBA_PTR_GET_CONST(batchWindow_, RunOptions::BatchWindow) };
      inline RunOptions::BatchWindow getBatchWindow() { DARABONBA_PTR_GET(batchWindow_, RunOptions::BatchWindow) };
      inline RunOptions& setBatchWindow(const RunOptions::BatchWindow & batchWindow) { DARABONBA_PTR_SET_VALUE(batchWindow_, batchWindow) };
      inline RunOptions& setBatchWindow(RunOptions::BatchWindow && batchWindow) { DARABONBA_PTR_SET_RVALUE(batchWindow_, batchWindow) };


      // businessOption Field Functions 
      bool hasBusinessOption() const { return this->businessOption_ != nullptr;};
      void deleteBusinessOption() { this->businessOption_ = nullptr;};
      inline const RunOptions::BusinessOption & getBusinessOption() const { DARABONBA_PTR_GET_CONST(businessOption_, RunOptions::BusinessOption) };
      inline RunOptions::BusinessOption getBusinessOption() { DARABONBA_PTR_GET(businessOption_, RunOptions::BusinessOption) };
      inline RunOptions& setBusinessOption(const RunOptions::BusinessOption & businessOption) { DARABONBA_PTR_SET_VALUE(businessOption_, businessOption) };
      inline RunOptions& setBusinessOption(RunOptions::BusinessOption && businessOption) { DARABONBA_PTR_SET_RVALUE(businessOption_, businessOption) };


      // deadLetterQueue Field Functions 
      bool hasDeadLetterQueue() const { return this->deadLetterQueue_ != nullptr;};
      void deleteDeadLetterQueue() { this->deadLetterQueue_ = nullptr;};
      inline const RunOptions::DeadLetterQueue & getDeadLetterQueue() const { DARABONBA_PTR_GET_CONST(deadLetterQueue_, RunOptions::DeadLetterQueue) };
      inline RunOptions::DeadLetterQueue getDeadLetterQueue() { DARABONBA_PTR_GET(deadLetterQueue_, RunOptions::DeadLetterQueue) };
      inline RunOptions& setDeadLetterQueue(const RunOptions::DeadLetterQueue & deadLetterQueue) { DARABONBA_PTR_SET_VALUE(deadLetterQueue_, deadLetterQueue) };
      inline RunOptions& setDeadLetterQueue(RunOptions::DeadLetterQueue && deadLetterQueue) { DARABONBA_PTR_SET_RVALUE(deadLetterQueue_, deadLetterQueue) };


      // errorsTolerance Field Functions 
      bool hasErrorsTolerance() const { return this->errorsTolerance_ != nullptr;};
      void deleteErrorsTolerance() { this->errorsTolerance_ = nullptr;};
      inline string getErrorsTolerance() const { DARABONBA_PTR_GET_DEFAULT(errorsTolerance_, "") };
      inline RunOptions& setErrorsTolerance(string errorsTolerance) { DARABONBA_PTR_SET_VALUE(errorsTolerance_, errorsTolerance) };


      // maximumTasks Field Functions 
      bool hasMaximumTasks() const { return this->maximumTasks_ != nullptr;};
      void deleteMaximumTasks() { this->maximumTasks_ = nullptr;};
      inline int64_t getMaximumTasks() const { DARABONBA_PTR_GET_DEFAULT(maximumTasks_, 0L) };
      inline RunOptions& setMaximumTasks(int64_t maximumTasks) { DARABONBA_PTR_SET_VALUE(maximumTasks_, maximumTasks) };


      // retryStrategy Field Functions 
      bool hasRetryStrategy() const { return this->retryStrategy_ != nullptr;};
      void deleteRetryStrategy() { this->retryStrategy_ = nullptr;};
      inline const RunOptions::RetryStrategy & getRetryStrategy() const { DARABONBA_PTR_GET_CONST(retryStrategy_, RunOptions::RetryStrategy) };
      inline RunOptions::RetryStrategy getRetryStrategy() { DARABONBA_PTR_GET(retryStrategy_, RunOptions::RetryStrategy) };
      inline RunOptions& setRetryStrategy(const RunOptions::RetryStrategy & retryStrategy) { DARABONBA_PTR_SET_VALUE(retryStrategy_, retryStrategy) };
      inline RunOptions& setRetryStrategy(RunOptions::RetryStrategy && retryStrategy) { DARABONBA_PTR_SET_RVALUE(retryStrategy_, retryStrategy) };


      // throttling Field Functions 
      bool hasThrottling() const { return this->throttling_ != nullptr;};
      void deleteThrottling() { this->throttling_ = nullptr;};
      inline int32_t getThrottling() const { DARABONBA_PTR_GET_DEFAULT(throttling_, 0) };
      inline RunOptions& setThrottling(int32_t throttling) { DARABONBA_PTR_SET_VALUE(throttling_, throttling) };


    protected:
      // The batch window.
      shared_ptr<RunOptions::BatchWindow> batchWindow_ {};
      shared_ptr<RunOptions::BusinessOption> businessOption_ {};
      // Specifies whether to enable dead-letter queues. By default, dead-letter queues are disabled. Messages that fail to be pushed after the allowed retries as specified by the retry policy are discarded.
      shared_ptr<RunOptions::DeadLetterQueue> deadLetterQueue_ {};
      // The exception tolerance policy. Valid values:
      // 
      // *   NONE: does not tolerate exceptions.
      // *   ALL: tolerates all exceptions.
      shared_ptr<string> errorsTolerance_ {};
      // The maximum number of concurrent tasks.
      shared_ptr<int64_t> maximumTasks_ {};
      // The retry policy that you want to use if events fail to be pushed.
      shared_ptr<RunOptions::RetryStrategy> retryStrategy_ {};
      shared_ptr<int32_t> throttling_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->eventStreamingName_ == nullptr && this->filterPattern_ == nullptr && this->runOptions_ == nullptr && this->sink_ == nullptr && this->source_ == nullptr
        && this->tags_ == nullptr && this->transforms_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventStreamingRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventStreamingName Field Functions 
    bool hasEventStreamingName() const { return this->eventStreamingName_ != nullptr;};
    void deleteEventStreamingName() { this->eventStreamingName_ = nullptr;};
    inline string getEventStreamingName() const { DARABONBA_PTR_GET_DEFAULT(eventStreamingName_, "") };
    inline CreateEventStreamingRequest& setEventStreamingName(string eventStreamingName) { DARABONBA_PTR_SET_VALUE(eventStreamingName_, eventStreamingName) };


    // filterPattern Field Functions 
    bool hasFilterPattern() const { return this->filterPattern_ != nullptr;};
    void deleteFilterPattern() { this->filterPattern_ = nullptr;};
    inline string getFilterPattern() const { DARABONBA_PTR_GET_DEFAULT(filterPattern_, "") };
    inline CreateEventStreamingRequest& setFilterPattern(string filterPattern) { DARABONBA_PTR_SET_VALUE(filterPattern_, filterPattern) };


    // runOptions Field Functions 
    bool hasRunOptions() const { return this->runOptions_ != nullptr;};
    void deleteRunOptions() { this->runOptions_ = nullptr;};
    inline const CreateEventStreamingRequest::RunOptions & getRunOptions() const { DARABONBA_PTR_GET_CONST(runOptions_, CreateEventStreamingRequest::RunOptions) };
    inline CreateEventStreamingRequest::RunOptions getRunOptions() { DARABONBA_PTR_GET(runOptions_, CreateEventStreamingRequest::RunOptions) };
    inline CreateEventStreamingRequest& setRunOptions(const CreateEventStreamingRequest::RunOptions & runOptions) { DARABONBA_PTR_SET_VALUE(runOptions_, runOptions) };
    inline CreateEventStreamingRequest& setRunOptions(CreateEventStreamingRequest::RunOptions && runOptions) { DARABONBA_PTR_SET_RVALUE(runOptions_, runOptions) };


    // sink Field Functions 
    bool hasSink() const { return this->sink_ != nullptr;};
    void deleteSink() { this->sink_ = nullptr;};
    inline const CreateEventStreamingRequest::Sink & getSink() const { DARABONBA_PTR_GET_CONST(sink_, CreateEventStreamingRequest::Sink) };
    inline CreateEventStreamingRequest::Sink getSink() { DARABONBA_PTR_GET(sink_, CreateEventStreamingRequest::Sink) };
    inline CreateEventStreamingRequest& setSink(const CreateEventStreamingRequest::Sink & sink) { DARABONBA_PTR_SET_VALUE(sink_, sink) };
    inline CreateEventStreamingRequest& setSink(CreateEventStreamingRequest::Sink && sink) { DARABONBA_PTR_SET_RVALUE(sink_, sink) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const CreateEventStreamingRequest::Source & getSource() const { DARABONBA_PTR_GET_CONST(source_, CreateEventStreamingRequest::Source) };
    inline CreateEventStreamingRequest::Source getSource() { DARABONBA_PTR_GET(source_, CreateEventStreamingRequest::Source) };
    inline CreateEventStreamingRequest& setSource(const CreateEventStreamingRequest::Source & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline CreateEventStreamingRequest& setSource(CreateEventStreamingRequest::Source && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<CreateEventStreamingRequest::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<CreateEventStreamingRequest::Tags>) };
    inline vector<CreateEventStreamingRequest::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<CreateEventStreamingRequest::Tags>) };
    inline CreateEventStreamingRequest& setTags(const vector<CreateEventStreamingRequest::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline CreateEventStreamingRequest& setTags(vector<CreateEventStreamingRequest::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // transforms Field Functions 
    bool hasTransforms() const { return this->transforms_ != nullptr;};
    void deleteTransforms() { this->transforms_ = nullptr;};
    inline const vector<CreateEventStreamingRequest::Transforms> & getTransforms() const { DARABONBA_PTR_GET_CONST(transforms_, vector<CreateEventStreamingRequest::Transforms>) };
    inline vector<CreateEventStreamingRequest::Transforms> getTransforms() { DARABONBA_PTR_GET(transforms_, vector<CreateEventStreamingRequest::Transforms>) };
    inline CreateEventStreamingRequest& setTransforms(const vector<CreateEventStreamingRequest::Transforms> & transforms) { DARABONBA_PTR_SET_VALUE(transforms_, transforms) };
    inline CreateEventStreamingRequest& setTransforms(vector<CreateEventStreamingRequest::Transforms> && transforms) { DARABONBA_PTR_SET_RVALUE(transforms_, transforms) };


  protected:
    // The description of the event stream.
    shared_ptr<string> description_ {};
    // The name of the event stream.
    // 
    // This parameter is required.
    shared_ptr<string> eventStreamingName_ {};
    // The rule that is used to filter events. If you leave this parameter empty, all events are matched.
    // 
    // This parameter is required.
    shared_ptr<string> filterPattern_ {};
    // The parameters that are configured for the runtime environment.
    shared_ptr<CreateEventStreamingRequest::RunOptions> runOptions_ {};
    // The event target. You must and can specify only one event target.
    // 
    // This parameter is required.
    shared_ptr<CreateEventStreamingRequest::Sink> sink_ {};
    // The event provider, which is also known as the event source. You must and can specify only one event source.
    // 
    // This parameter is required.
    shared_ptr<CreateEventStreamingRequest::Source> source_ {};
    shared_ptr<vector<CreateEventStreamingRequest::Tags>> tags_ {};
    shared_ptr<vector<CreateEventStreamingRequest::Transforms>> transforms_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
