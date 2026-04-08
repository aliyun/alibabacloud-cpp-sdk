// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTMESSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALERTMESSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetAlertMessageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertMessageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertMessageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAlertMessageResponseBody() = default ;
    GetAlertMessageResponseBody(const GetAlertMessageResponseBody &) = default ;
    GetAlertMessageResponseBody(GetAlertMessageResponseBody &&) = default ;
    GetAlertMessageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertMessageResponseBody() = default ;
    GetAlertMessageResponseBody& operator=(const GetAlertMessageResponseBody &) = default ;
    GetAlertMessageResponseBody& operator=(GetAlertMessageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      class Topics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Topics& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(TopicId, topicId_);
          DARABONBA_PTR_TO_JSON(TopicName, topicName_);
          DARABONBA_PTR_TO_JSON(TopicOwner, topicOwner_);
          DARABONBA_PTR_TO_JSON(TopicStatus, topicStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Topics& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(TopicId, topicId_);
          DARABONBA_PTR_FROM_JSON(TopicName, topicName_);
          DARABONBA_PTR_FROM_JSON(TopicOwner, topicOwner_);
          DARABONBA_PTR_FROM_JSON(TopicStatus, topicStatus_);
        };
        Topics() = default ;
        Topics(const Topics &) = default ;
        Topics(Topics &&) = default ;
        Topics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Topics() = default ;
        Topics& operator=(const Topics &) = default ;
        Topics& operator=(Topics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeId_ == nullptr && this->topicId_ == nullptr && this->topicName_ == nullptr && this->topicOwner_ == nullptr && this->topicStatus_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline Topics& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline Topics& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // topicId Field Functions 
        bool hasTopicId() const { return this->topicId_ != nullptr;};
        void deleteTopicId() { this->topicId_ = nullptr;};
        inline int64_t getTopicId() const { DARABONBA_PTR_GET_DEFAULT(topicId_, 0L) };
        inline Topics& setTopicId(int64_t topicId) { DARABONBA_PTR_SET_VALUE(topicId_, topicId) };


        // topicName Field Functions 
        bool hasTopicName() const { return this->topicName_ != nullptr;};
        void deleteTopicName() { this->topicName_ = nullptr;};
        inline string getTopicName() const { DARABONBA_PTR_GET_DEFAULT(topicName_, "") };
        inline Topics& setTopicName(string topicName) { DARABONBA_PTR_SET_VALUE(topicName_, topicName) };


        // topicOwner Field Functions 
        bool hasTopicOwner() const { return this->topicOwner_ != nullptr;};
        void deleteTopicOwner() { this->topicOwner_ = nullptr;};
        inline string getTopicOwner() const { DARABONBA_PTR_GET_DEFAULT(topicOwner_, "") };
        inline Topics& setTopicOwner(string topicOwner) { DARABONBA_PTR_SET_VALUE(topicOwner_, topicOwner) };


        // topicStatus Field Functions 
        bool hasTopicStatus() const { return this->topicStatus_ != nullptr;};
        void deleteTopicStatus() { this->topicStatus_ = nullptr;};
        inline string getTopicStatus() const { DARABONBA_PTR_GET_DEFAULT(topicStatus_, "") };
        inline Topics& setTopicStatus(string topicStatus) { DARABONBA_PTR_SET_VALUE(topicStatus_, topicStatus) };


      protected:
        // The ID of the instance that triggered the event.
        shared_ptr<int64_t> instanceId_ {};
        // The ID of the node that triggered the event.
        shared_ptr<int64_t> nodeId_ {};
        // The event ID.
        shared_ptr<int64_t> topicId_ {};
        // The name of the event.
        shared_ptr<string> topicName_ {};
        // The ID of the Alibaba Cloud account used by the event owner.
        shared_ptr<string> topicOwner_ {};
        // The status of the event. Valid values:
        // 
        // *   IGNORE
        // *   NEW
        // *   FIXING
        // *   RECOVER
        shared_ptr<string> topicStatus_ {};
      };

      class SlaAlert : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SlaAlert& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_TO_JSON(BaselineOwner, baselineOwner_);
          DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, SlaAlert& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
          DARABONBA_PTR_FROM_JSON(BaselineOwner, baselineOwner_);
          DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
          DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        SlaAlert() = default ;
        SlaAlert(const SlaAlert &) = default ;
        SlaAlert(SlaAlert &&) = default ;
        SlaAlert(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SlaAlert() = default ;
        SlaAlert& operator=(const SlaAlert &) = default ;
        SlaAlert& operator=(SlaAlert &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->baselineName_ == nullptr && this->baselineOwner_ == nullptr && this->bizdate_ == nullptr && this->inGroupId_ == nullptr && this->projectId_ == nullptr
        && this->status_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline SlaAlert& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


        // baselineName Field Functions 
        bool hasBaselineName() const { return this->baselineName_ != nullptr;};
        void deleteBaselineName() { this->baselineName_ = nullptr;};
        inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
        inline SlaAlert& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


        // baselineOwner Field Functions 
        bool hasBaselineOwner() const { return this->baselineOwner_ != nullptr;};
        void deleteBaselineOwner() { this->baselineOwner_ = nullptr;};
        inline string getBaselineOwner() const { DARABONBA_PTR_GET_DEFAULT(baselineOwner_, "") };
        inline SlaAlert& setBaselineOwner(string baselineOwner) { DARABONBA_PTR_SET_VALUE(baselineOwner_, baselineOwner) };


        // bizdate Field Functions 
        bool hasBizdate() const { return this->bizdate_ != nullptr;};
        void deleteBizdate() { this->bizdate_ = nullptr;};
        inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
        inline SlaAlert& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


        // inGroupId Field Functions 
        bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
        void deleteInGroupId() { this->inGroupId_ = nullptr;};
        inline int32_t getInGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
        inline SlaAlert& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline SlaAlert& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline SlaAlert& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The name of the baseline.
        shared_ptr<string> baselineName_ {};
        // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs are separated by commas (,).
        shared_ptr<string> baselineOwner_ {};
        // The data timestamp of the baseline instance.
        shared_ptr<int64_t> bizdate_ {};
        // The ID of the cycle of the baseline instance. Valid values of the ID of an hour-level cycle: [1,24]. The ID of a day-level cycle is 1.
        shared_ptr<int32_t> inGroupId_ {};
        // The ID of the workspace to which the baseline belongs.
        shared_ptr<int64_t> projectId_ {};
        // The status of the baseline. Valid values:
        // 
        // *   ERROR
        // *   SAFE
        // *   DANGEROUS
        // *   OVER
        shared_ptr<string> status_ {};
      };

      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->nodeName_ == nullptr && this->owner_ == nullptr && this->projectId_ == nullptr; };
        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline Nodes& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline Nodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Nodes& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Nodes& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      protected:
        // The node ID.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The ID of the Alibaba Cloud account used by the node owner.
        shared_ptr<string> owner_ {};
        // The ID of the workspace to which the node belongs.
        shared_ptr<int64_t> projectId_ {};
      };

      class Instances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instances& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Instances& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Instances() = default ;
        Instances(const Instances &) = default ;
        Instances(Instances &&) = default ;
        Instances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instances() = default ;
        Instances& operator=(const Instances &) = default ;
        Instances& operator=(Instances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->projectId_ == nullptr && this->status_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline Instances& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline Instances& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline Instances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Instances& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The instance ID.
        shared_ptr<int64_t> instanceId_ {};
        // The node ID.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The ID of the workspace to which the node belongs.
        shared_ptr<int64_t> projectId_ {};
        // The status of the instance. Valid values:
        // 
        // *   NOT_RUN
        // *   WAIT_TIME
        // *   WAIT_RESOURCE
        // *   RUNNING
        // *   CHECKING
        // *   CHECKING_CONDITION
        // *   FAILURE
        // *   SUCCESS
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->alertId_ == nullptr
        && this->alertMessageStatus_ == nullptr && this->alertMethod_ == nullptr && this->alertTime_ == nullptr && this->alertUser_ == nullptr && this->content_ == nullptr
        && this->instances_ == nullptr && this->nodes_ == nullptr && this->remindId_ == nullptr && this->remindName_ == nullptr && this->slaAlert_ == nullptr
        && this->source_ == nullptr && this->topics_ == nullptr; };
      // alertId Field Functions 
      bool hasAlertId() const { return this->alertId_ != nullptr;};
      void deleteAlertId() { this->alertId_ = nullptr;};
      inline int64_t getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
      inline Data& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


      // alertMessageStatus Field Functions 
      bool hasAlertMessageStatus() const { return this->alertMessageStatus_ != nullptr;};
      void deleteAlertMessageStatus() { this->alertMessageStatus_ = nullptr;};
      inline string getAlertMessageStatus() const { DARABONBA_PTR_GET_DEFAULT(alertMessageStatus_, "") };
      inline Data& setAlertMessageStatus(string alertMessageStatus) { DARABONBA_PTR_SET_VALUE(alertMessageStatus_, alertMessageStatus) };


      // alertMethod Field Functions 
      bool hasAlertMethod() const { return this->alertMethod_ != nullptr;};
      void deleteAlertMethod() { this->alertMethod_ = nullptr;};
      inline string getAlertMethod() const { DARABONBA_PTR_GET_DEFAULT(alertMethod_, "") };
      inline Data& setAlertMethod(string alertMethod) { DARABONBA_PTR_SET_VALUE(alertMethod_, alertMethod) };


      // alertTime Field Functions 
      bool hasAlertTime() const { return this->alertTime_ != nullptr;};
      void deleteAlertTime() { this->alertTime_ = nullptr;};
      inline int64_t getAlertTime() const { DARABONBA_PTR_GET_DEFAULT(alertTime_, 0L) };
      inline Data& setAlertTime(int64_t alertTime) { DARABONBA_PTR_SET_VALUE(alertTime_, alertTime) };


      // alertUser Field Functions 
      bool hasAlertUser() const { return this->alertUser_ != nullptr;};
      void deleteAlertUser() { this->alertUser_ = nullptr;};
      inline string getAlertUser() const { DARABONBA_PTR_GET_DEFAULT(alertUser_, "") };
      inline Data& setAlertUser(string alertUser) { DARABONBA_PTR_SET_VALUE(alertUser_, alertUser) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Data& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // instances Field Functions 
      bool hasInstances() const { return this->instances_ != nullptr;};
      void deleteInstances() { this->instances_ = nullptr;};
      inline const vector<Data::Instances> & getInstances() const { DARABONBA_PTR_GET_CONST(instances_, vector<Data::Instances>) };
      inline vector<Data::Instances> getInstances() { DARABONBA_PTR_GET(instances_, vector<Data::Instances>) };
      inline Data& setInstances(const vector<Data::Instances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
      inline Data& setInstances(vector<Data::Instances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // remindId Field Functions 
      bool hasRemindId() const { return this->remindId_ != nullptr;};
      void deleteRemindId() { this->remindId_ = nullptr;};
      inline int64_t getRemindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
      inline Data& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


      // remindName Field Functions 
      bool hasRemindName() const { return this->remindName_ != nullptr;};
      void deleteRemindName() { this->remindName_ = nullptr;};
      inline string getRemindName() const { DARABONBA_PTR_GET_DEFAULT(remindName_, "") };
      inline Data& setRemindName(string remindName) { DARABONBA_PTR_SET_VALUE(remindName_, remindName) };


      // slaAlert Field Functions 
      bool hasSlaAlert() const { return this->slaAlert_ != nullptr;};
      void deleteSlaAlert() { this->slaAlert_ = nullptr;};
      inline const Data::SlaAlert & getSlaAlert() const { DARABONBA_PTR_GET_CONST(slaAlert_, Data::SlaAlert) };
      inline Data::SlaAlert getSlaAlert() { DARABONBA_PTR_GET(slaAlert_, Data::SlaAlert) };
      inline Data& setSlaAlert(const Data::SlaAlert & slaAlert) { DARABONBA_PTR_SET_VALUE(slaAlert_, slaAlert) };
      inline Data& setSlaAlert(Data::SlaAlert && slaAlert) { DARABONBA_PTR_SET_RVALUE(slaAlert_, slaAlert) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Data& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // topics Field Functions 
      bool hasTopics() const { return this->topics_ != nullptr;};
      void deleteTopics() { this->topics_ = nullptr;};
      inline const vector<Data::Topics> & getTopics() const { DARABONBA_PTR_GET_CONST(topics_, vector<Data::Topics>) };
      inline vector<Data::Topics> getTopics() { DARABONBA_PTR_GET(topics_, vector<Data::Topics>) };
      inline Data& setTopics(const vector<Data::Topics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
      inline Data& setTopics(vector<Data::Topics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


    protected:
      // The alert ID.
      shared_ptr<int64_t> alertId_ {};
      // The sending status of the notification. Valid values:
      // 
      // *   READY_TO_SEND: The notification is waiting to be sent.
      // *   SEND_FAIL: The notification fails to be sent.
      // *   SEND_SUCCESS: The notification is sent.
      // *   SEND_OVERLIMIT: The number of notifications that are sent exceeds the upper limit.
      shared_ptr<string> alertMessageStatus_ {};
      // The notification method. Valid values:
      // 
      // *   MAIL.
      // *   SMS.
      // *   PHONE. Only DataWorks Professional Edition and more advanced editions support the PHONE notification method.
      shared_ptr<string> alertMethod_ {};
      // The time when the alert was reported.
      shared_ptr<int64_t> alertTime_ {};
      // The ID of the Alibaba Cloud account used by the alert recipient.
      shared_ptr<string> alertUser_ {};
      // The content of the alert.
      shared_ptr<string> content_ {};
      // The instances that triggered the custom alert rule. This parameter is returned if the value of the Source parameter is REMIND_ALERT. This parameter is left empty if the value of the Source parameter is not REMIND_ALERT.
      shared_ptr<vector<Data::Instances>> instances_ {};
      // The nodes returned for different alert sources. The nodes that form a loop are returned if the value of the Source parameter is NODE_CYCLE_ALERT. The nodes that are isolated are returned if the value of the Source parameter is NODE_LONELY_ALERT.
      shared_ptr<vector<Data::Nodes>> nodes_ {};
      // The ID of the custom alert rule that was triggered. This parameter is returned if the value of the Source parameter is REMIND_ALERT.
      shared_ptr<int64_t> remindId_ {};
      // The name of the custom alert rule that was triggered. This parameter is returned if the value of the Source parameter is REMIND_ALERT.
      shared_ptr<string> remindName_ {};
      // The basic information about the baseline instance that triggered an alert. This parameter is returned if the value of the Source parameter is SLA_ALERT. This parameter is left empty if the value of the Source parameter is not SLA_ALERT.
      shared_ptr<Data::SlaAlert> slaAlert_ {};
      // The type of the alert. Valid values:
      // 
      // *   REMIND_ALERT: The alert is a custom alert.
      // *   TOPIC_ALERT: The alert is an event alert.
      // *   SLA_ALERT: The alert is a baseline alert.
      // *   NODE_CYCLE_ALERT: The alert is reported for a node dependency loop.
      // *   NODE_LONELY_ALERT: The alert is reported for isolated nodes.
      shared_ptr<string> source_ {};
      // The events that triggered alerts. This parameter is returned if the value of the Source parameter is TOPIC_ALERT. This parameter is left empty if the value of the Source parameter is not TOPIC_ALERT.
      shared_ptr<vector<Data::Topics>> topics_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlertMessageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAlertMessageResponseBody::Data) };
    inline GetAlertMessageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAlertMessageResponseBody::Data) };
    inline GetAlertMessageResponseBody& setData(const GetAlertMessageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlertMessageResponseBody& setData(GetAlertMessageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetAlertMessageResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetAlertMessageResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAlertMessageResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlertMessageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAlertMessageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about returned alerts.
    shared_ptr<GetAlertMessageResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
