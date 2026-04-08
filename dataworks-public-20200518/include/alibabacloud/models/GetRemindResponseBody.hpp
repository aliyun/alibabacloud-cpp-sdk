// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDRESPONSEBODY_HPP_
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
  class GetRemindResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRemindResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRemindResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRemindResponseBody() = default ;
    GetRemindResponseBody(const GetRemindResponseBody &) = default ;
    GetRemindResponseBody(GetRemindResponseBody &&) = default ;
    GetRemindResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRemindResponseBody() = default ;
    GetRemindResponseBody& operator=(const GetRemindResponseBody &) = default ;
    GetRemindResponseBody& operator=(GetRemindResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlertInterval, alertInterval_);
        DARABONBA_PTR_TO_JSON(AlertMethods, alertMethods_);
        DARABONBA_PTR_TO_JSON(AlertTargets, alertTargets_);
        DARABONBA_PTR_TO_JSON(AlertUnit, alertUnit_);
        DARABONBA_PTR_TO_JSON(AllowNodes, allowNodes_);
        DARABONBA_PTR_TO_JSON(Baselines, baselines_);
        DARABONBA_PTR_TO_JSON(BizProcesses, bizProcesses_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(DndEnd, dndEnd_);
        DARABONBA_PTR_TO_JSON(DndStart, dndStart_);
        DARABONBA_PTR_TO_JSON(Founder, founder_);
        DARABONBA_PTR_TO_JSON(MaxAlertTimes, maxAlertTimes_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Projects, projects_);
        DARABONBA_PTR_TO_JSON(Receivers, receivers_);
        DARABONBA_PTR_TO_JSON(RemindId, remindId_);
        DARABONBA_PTR_TO_JSON(RemindName, remindName_);
        DARABONBA_PTR_TO_JSON(RemindType, remindType_);
        DARABONBA_PTR_TO_JSON(RemindUnit, remindUnit_);
        DARABONBA_PTR_TO_JSON(Robots, robots_);
        DARABONBA_PTR_TO_JSON(Useflag, useflag_);
        DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlertInterval, alertInterval_);
        DARABONBA_PTR_FROM_JSON(AlertMethods, alertMethods_);
        DARABONBA_PTR_FROM_JSON(AlertTargets, alertTargets_);
        DARABONBA_PTR_FROM_JSON(AlertUnit, alertUnit_);
        DARABONBA_PTR_FROM_JSON(AllowNodes, allowNodes_);
        DARABONBA_PTR_FROM_JSON(Baselines, baselines_);
        DARABONBA_PTR_FROM_JSON(BizProcesses, bizProcesses_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(DndEnd, dndEnd_);
        DARABONBA_PTR_FROM_JSON(DndStart, dndStart_);
        DARABONBA_PTR_FROM_JSON(Founder, founder_);
        DARABONBA_PTR_FROM_JSON(MaxAlertTimes, maxAlertTimes_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Projects, projects_);
        DARABONBA_PTR_FROM_JSON(Receivers, receivers_);
        DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
        DARABONBA_PTR_FROM_JSON(RemindName, remindName_);
        DARABONBA_PTR_FROM_JSON(RemindType, remindType_);
        DARABONBA_PTR_FROM_JSON(RemindUnit, remindUnit_);
        DARABONBA_PTR_FROM_JSON(Robots, robots_);
        DARABONBA_PTR_FROM_JSON(Useflag, useflag_);
        DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
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
      class Robots : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Robots& obj) { 
          DARABONBA_PTR_TO_JSON(AtAll, atAll_);
          DARABONBA_PTR_TO_JSON(WebUrl, webUrl_);
        };
        friend void from_json(const Darabonba::Json& j, Robots& obj) { 
          DARABONBA_PTR_FROM_JSON(AtAll, atAll_);
          DARABONBA_PTR_FROM_JSON(WebUrl, webUrl_);
        };
        Robots() = default ;
        Robots(const Robots &) = default ;
        Robots(Robots &&) = default ;
        Robots(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Robots() = default ;
        Robots& operator=(const Robots &) = default ;
        Robots& operator=(Robots &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->atAll_ == nullptr
        && this->webUrl_ == nullptr; };
        // atAll Field Functions 
        bool hasAtAll() const { return this->atAll_ != nullptr;};
        void deleteAtAll() { this->atAll_ = nullptr;};
        inline bool getAtAll() const { DARABONBA_PTR_GET_DEFAULT(atAll_, false) };
        inline Robots& setAtAll(bool atAll) { DARABONBA_PTR_SET_VALUE(atAll_, atAll) };


        // webUrl Field Functions 
        bool hasWebUrl() const { return this->webUrl_ != nullptr;};
        void deleteWebUrl() { this->webUrl_ = nullptr;};
        inline string getWebUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
        inline Robots& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


      protected:
        // Indicates whether all group members are notified when the alert notification is sent to a DingTalk group. Valid values: true and false.
        shared_ptr<bool> atAll_ {};
        // The webhook URL of the DingTalk chatbot.
        shared_ptr<string> webUrl_ {};
      };

      class Receivers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Receivers& obj) { 
          DARABONBA_PTR_TO_JSON(AlertTargets, alertTargets_);
          DARABONBA_PTR_TO_JSON(AlertUnit, alertUnit_);
        };
        friend void from_json(const Darabonba::Json& j, Receivers& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertTargets, alertTargets_);
          DARABONBA_PTR_FROM_JSON(AlertUnit, alertUnit_);
        };
        Receivers() = default ;
        Receivers(const Receivers &) = default ;
        Receivers(Receivers &&) = default ;
        Receivers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Receivers() = default ;
        Receivers& operator=(const Receivers &) = default ;
        Receivers& operator=(Receivers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alertTargets_ == nullptr
        && this->alertUnit_ == nullptr; };
        // alertTargets Field Functions 
        bool hasAlertTargets() const { return this->alertTargets_ != nullptr;};
        void deleteAlertTargets() { this->alertTargets_ = nullptr;};
        inline const vector<string> & getAlertTargets() const { DARABONBA_PTR_GET_CONST(alertTargets_, vector<string>) };
        inline vector<string> getAlertTargets() { DARABONBA_PTR_GET(alertTargets_, vector<string>) };
        inline Receivers& setAlertTargets(const vector<string> & alertTargets) { DARABONBA_PTR_SET_VALUE(alertTargets_, alertTargets) };
        inline Receivers& setAlertTargets(vector<string> && alertTargets) { DARABONBA_PTR_SET_RVALUE(alertTargets_, alertTargets) };


        // alertUnit Field Functions 
        bool hasAlertUnit() const { return this->alertUnit_ != nullptr;};
        void deleteAlertUnit() { this->alertUnit_ = nullptr;};
        inline string getAlertUnit() const { DARABONBA_PTR_GET_DEFAULT(alertUnit_, "") };
        inline Receivers& setAlertUnit(string alertUnit) { DARABONBA_PTR_SET_VALUE(alertUnit_, alertUnit) };


      protected:
        // The alert recipient.
        shared_ptr<vector<string>> alertTargets_ {};
        // The type of the alert recipient. For more information about alert recipients, see the Receivers parameter. Valid values:
        // 
        // *   OWNER: indicate the task owner.
        // *   OTHER: indicates specified personnel.
        // *   SHIFT_SCHEDULE: indicates personnel in a shift schedule.
        shared_ptr<string> alertUnit_ {};
      };

      class Projects : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Projects& obj) { 
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        };
        friend void from_json(const Darabonba::Json& j, Projects& obj) { 
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        };
        Projects() = default ;
        Projects(const Projects &) = default ;
        Projects(Projects &&) = default ;
        Projects(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Projects() = default ;
        Projects& operator=(const Projects &) = default ;
        Projects& operator=(Projects &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->projectId_ == nullptr; };
        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline Projects& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      protected:
        // The workspace ID.
        shared_ptr<int64_t> projectId_ {};
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

      class BizProcesses : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BizProcesses& obj) { 
          DARABONBA_PTR_TO_JSON(BizId, bizId_);
          DARABONBA_PTR_TO_JSON(BizProcessName, bizProcessName_);
        };
        friend void from_json(const Darabonba::Json& j, BizProcesses& obj) { 
          DARABONBA_PTR_FROM_JSON(BizId, bizId_);
          DARABONBA_PTR_FROM_JSON(BizProcessName, bizProcessName_);
        };
        BizProcesses() = default ;
        BizProcesses(const BizProcesses &) = default ;
        BizProcesses(BizProcesses &&) = default ;
        BizProcesses(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BizProcesses() = default ;
        BizProcesses& operator=(const BizProcesses &) = default ;
        BizProcesses& operator=(BizProcesses &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bizId_ == nullptr
        && this->bizProcessName_ == nullptr; };
        // bizId Field Functions 
        bool hasBizId() const { return this->bizId_ != nullptr;};
        void deleteBizId() { this->bizId_ = nullptr;};
        inline int64_t getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, 0L) };
        inline BizProcesses& setBizId(int64_t bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


        // bizProcessName Field Functions 
        bool hasBizProcessName() const { return this->bizProcessName_ != nullptr;};
        void deleteBizProcessName() { this->bizProcessName_ = nullptr;};
        inline string getBizProcessName() const { DARABONBA_PTR_GET_DEFAULT(bizProcessName_, "") };
        inline BizProcesses& setBizProcessName(string bizProcessName) { DARABONBA_PTR_SET_VALUE(bizProcessName_, bizProcessName) };


      protected:
        // The ID of the workflow.
        shared_ptr<int64_t> bizId_ {};
        // The name of the workflow.
        shared_ptr<string> bizProcessName_ {};
      };

      class Baselines : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Baselines& obj) { 
          DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
        };
        friend void from_json(const Darabonba::Json& j, Baselines& obj) { 
          DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
          DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
        };
        Baselines() = default ;
        Baselines(const Baselines &) = default ;
        Baselines(Baselines &&) = default ;
        Baselines(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Baselines() = default ;
        Baselines& operator=(const Baselines &) = default ;
        Baselines& operator=(Baselines &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->baselineName_ == nullptr; };
        // baselineId Field Functions 
        bool hasBaselineId() const { return this->baselineId_ != nullptr;};
        void deleteBaselineId() { this->baselineId_ = nullptr;};
        inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
        inline Baselines& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


        // baselineName Field Functions 
        bool hasBaselineName() const { return this->baselineName_ != nullptr;};
        void deleteBaselineName() { this->baselineName_ = nullptr;};
        inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
        inline Baselines& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


      protected:
        // The baseline ID.
        shared_ptr<int64_t> baselineId_ {};
        // The name of the baseline.
        shared_ptr<string> baselineName_ {};
      };

      virtual bool empty() const override { return this->alertInterval_ == nullptr
        && this->alertMethods_ == nullptr && this->alertTargets_ == nullptr && this->alertUnit_ == nullptr && this->allowNodes_ == nullptr && this->baselines_ == nullptr
        && this->bizProcesses_ == nullptr && this->detail_ == nullptr && this->dndEnd_ == nullptr && this->dndStart_ == nullptr && this->founder_ == nullptr
        && this->maxAlertTimes_ == nullptr && this->nodes_ == nullptr && this->projects_ == nullptr && this->receivers_ == nullptr && this->remindId_ == nullptr
        && this->remindName_ == nullptr && this->remindType_ == nullptr && this->remindUnit_ == nullptr && this->robots_ == nullptr && this->useflag_ == nullptr
        && this->webhooks_ == nullptr; };
      // alertInterval Field Functions 
      bool hasAlertInterval() const { return this->alertInterval_ != nullptr;};
      void deleteAlertInterval() { this->alertInterval_ = nullptr;};
      inline int32_t getAlertInterval() const { DARABONBA_PTR_GET_DEFAULT(alertInterval_, 0) };
      inline Data& setAlertInterval(int32_t alertInterval) { DARABONBA_PTR_SET_VALUE(alertInterval_, alertInterval) };


      // alertMethods Field Functions 
      bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
      void deleteAlertMethods() { this->alertMethods_ = nullptr;};
      inline const vector<string> & getAlertMethods() const { DARABONBA_PTR_GET_CONST(alertMethods_, vector<string>) };
      inline vector<string> getAlertMethods() { DARABONBA_PTR_GET(alertMethods_, vector<string>) };
      inline Data& setAlertMethods(const vector<string> & alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };
      inline Data& setAlertMethods(vector<string> && alertMethods) { DARABONBA_PTR_SET_RVALUE(alertMethods_, alertMethods) };


      // alertTargets Field Functions 
      bool hasAlertTargets() const { return this->alertTargets_ != nullptr;};
      void deleteAlertTargets() { this->alertTargets_ = nullptr;};
      inline const vector<string> & getAlertTargets() const { DARABONBA_PTR_GET_CONST(alertTargets_, vector<string>) };
      inline vector<string> getAlertTargets() { DARABONBA_PTR_GET(alertTargets_, vector<string>) };
      inline Data& setAlertTargets(const vector<string> & alertTargets) { DARABONBA_PTR_SET_VALUE(alertTargets_, alertTargets) };
      inline Data& setAlertTargets(vector<string> && alertTargets) { DARABONBA_PTR_SET_RVALUE(alertTargets_, alertTargets) };


      // alertUnit Field Functions 
      bool hasAlertUnit() const { return this->alertUnit_ != nullptr;};
      void deleteAlertUnit() { this->alertUnit_ = nullptr;};
      inline string getAlertUnit() const { DARABONBA_PTR_GET_DEFAULT(alertUnit_, "") };
      inline Data& setAlertUnit(string alertUnit) { DARABONBA_PTR_SET_VALUE(alertUnit_, alertUnit) };


      // allowNodes Field Functions 
      bool hasAllowNodes() const { return this->allowNodes_ != nullptr;};
      void deleteAllowNodes() { this->allowNodes_ = nullptr;};
      inline const vector<int64_t> & getAllowNodes() const { DARABONBA_PTR_GET_CONST(allowNodes_, vector<int64_t>) };
      inline vector<int64_t> getAllowNodes() { DARABONBA_PTR_GET(allowNodes_, vector<int64_t>) };
      inline Data& setAllowNodes(const vector<int64_t> & allowNodes) { DARABONBA_PTR_SET_VALUE(allowNodes_, allowNodes) };
      inline Data& setAllowNodes(vector<int64_t> && allowNodes) { DARABONBA_PTR_SET_RVALUE(allowNodes_, allowNodes) };


      // baselines Field Functions 
      bool hasBaselines() const { return this->baselines_ != nullptr;};
      void deleteBaselines() { this->baselines_ = nullptr;};
      inline const vector<Data::Baselines> & getBaselines() const { DARABONBA_PTR_GET_CONST(baselines_, vector<Data::Baselines>) };
      inline vector<Data::Baselines> getBaselines() { DARABONBA_PTR_GET(baselines_, vector<Data::Baselines>) };
      inline Data& setBaselines(const vector<Data::Baselines> & baselines) { DARABONBA_PTR_SET_VALUE(baselines_, baselines) };
      inline Data& setBaselines(vector<Data::Baselines> && baselines) { DARABONBA_PTR_SET_RVALUE(baselines_, baselines) };


      // bizProcesses Field Functions 
      bool hasBizProcesses() const { return this->bizProcesses_ != nullptr;};
      void deleteBizProcesses() { this->bizProcesses_ = nullptr;};
      inline const vector<Data::BizProcesses> & getBizProcesses() const { DARABONBA_PTR_GET_CONST(bizProcesses_, vector<Data::BizProcesses>) };
      inline vector<Data::BizProcesses> getBizProcesses() { DARABONBA_PTR_GET(bizProcesses_, vector<Data::BizProcesses>) };
      inline Data& setBizProcesses(const vector<Data::BizProcesses> & bizProcesses) { DARABONBA_PTR_SET_VALUE(bizProcesses_, bizProcesses) };
      inline Data& setBizProcesses(vector<Data::BizProcesses> && bizProcesses) { DARABONBA_PTR_SET_RVALUE(bizProcesses_, bizProcesses) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Data& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // dndEnd Field Functions 
      bool hasDndEnd() const { return this->dndEnd_ != nullptr;};
      void deleteDndEnd() { this->dndEnd_ = nullptr;};
      inline string getDndEnd() const { DARABONBA_PTR_GET_DEFAULT(dndEnd_, "") };
      inline Data& setDndEnd(string dndEnd) { DARABONBA_PTR_SET_VALUE(dndEnd_, dndEnd) };


      // dndStart Field Functions 
      bool hasDndStart() const { return this->dndStart_ != nullptr;};
      void deleteDndStart() { this->dndStart_ = nullptr;};
      inline string getDndStart() const { DARABONBA_PTR_GET_DEFAULT(dndStart_, "") };
      inline Data& setDndStart(string dndStart) { DARABONBA_PTR_SET_VALUE(dndStart_, dndStart) };


      // founder Field Functions 
      bool hasFounder() const { return this->founder_ != nullptr;};
      void deleteFounder() { this->founder_ = nullptr;};
      inline string getFounder() const { DARABONBA_PTR_GET_DEFAULT(founder_, "") };
      inline Data& setFounder(string founder) { DARABONBA_PTR_SET_VALUE(founder_, founder) };


      // maxAlertTimes Field Functions 
      bool hasMaxAlertTimes() const { return this->maxAlertTimes_ != nullptr;};
      void deleteMaxAlertTimes() { this->maxAlertTimes_ = nullptr;};
      inline int32_t getMaxAlertTimes() const { DARABONBA_PTR_GET_DEFAULT(maxAlertTimes_, 0) };
      inline Data& setMaxAlertTimes(int32_t maxAlertTimes) { DARABONBA_PTR_SET_VALUE(maxAlertTimes_, maxAlertTimes) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // projects Field Functions 
      bool hasProjects() const { return this->projects_ != nullptr;};
      void deleteProjects() { this->projects_ = nullptr;};
      inline const vector<Data::Projects> & getProjects() const { DARABONBA_PTR_GET_CONST(projects_, vector<Data::Projects>) };
      inline vector<Data::Projects> getProjects() { DARABONBA_PTR_GET(projects_, vector<Data::Projects>) };
      inline Data& setProjects(const vector<Data::Projects> & projects) { DARABONBA_PTR_SET_VALUE(projects_, projects) };
      inline Data& setProjects(vector<Data::Projects> && projects) { DARABONBA_PTR_SET_RVALUE(projects_, projects) };


      // receivers Field Functions 
      bool hasReceivers() const { return this->receivers_ != nullptr;};
      void deleteReceivers() { this->receivers_ = nullptr;};
      inline const vector<Data::Receivers> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<Data::Receivers>) };
      inline vector<Data::Receivers> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<Data::Receivers>) };
      inline Data& setReceivers(const vector<Data::Receivers> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
      inline Data& setReceivers(vector<Data::Receivers> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


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


      // remindType Field Functions 
      bool hasRemindType() const { return this->remindType_ != nullptr;};
      void deleteRemindType() { this->remindType_ = nullptr;};
      inline string getRemindType() const { DARABONBA_PTR_GET_DEFAULT(remindType_, "") };
      inline Data& setRemindType(string remindType) { DARABONBA_PTR_SET_VALUE(remindType_, remindType) };


      // remindUnit Field Functions 
      bool hasRemindUnit() const { return this->remindUnit_ != nullptr;};
      void deleteRemindUnit() { this->remindUnit_ = nullptr;};
      inline string getRemindUnit() const { DARABONBA_PTR_GET_DEFAULT(remindUnit_, "") };
      inline Data& setRemindUnit(string remindUnit) { DARABONBA_PTR_SET_VALUE(remindUnit_, remindUnit) };


      // robots Field Functions 
      bool hasRobots() const { return this->robots_ != nullptr;};
      void deleteRobots() { this->robots_ = nullptr;};
      inline const vector<Data::Robots> & getRobots() const { DARABONBA_PTR_GET_CONST(robots_, vector<Data::Robots>) };
      inline vector<Data::Robots> getRobots() { DARABONBA_PTR_GET(robots_, vector<Data::Robots>) };
      inline Data& setRobots(const vector<Data::Robots> & robots) { DARABONBA_PTR_SET_VALUE(robots_, robots) };
      inline Data& setRobots(vector<Data::Robots> && robots) { DARABONBA_PTR_SET_RVALUE(robots_, robots) };


      // useflag Field Functions 
      bool hasUseflag() const { return this->useflag_ != nullptr;};
      void deleteUseflag() { this->useflag_ = nullptr;};
      inline bool getUseflag() const { DARABONBA_PTR_GET_DEFAULT(useflag_, false) };
      inline Data& setUseflag(bool useflag) { DARABONBA_PTR_SET_VALUE(useflag_, useflag) };


      // webhooks Field Functions 
      bool hasWebhooks() const { return this->webhooks_ != nullptr;};
      void deleteWebhooks() { this->webhooks_ = nullptr;};
      inline const vector<string> & getWebhooks() const { DARABONBA_PTR_GET_CONST(webhooks_, vector<string>) };
      inline vector<string> getWebhooks() { DARABONBA_PTR_GET(webhooks_, vector<string>) };
      inline Data& setWebhooks(const vector<string> & webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };
      inline Data& setWebhooks(vector<string> && webhooks) { DARABONBA_PTR_SET_RVALUE(webhooks_, webhooks) };


    protected:
      // The minimum interval at which alerts are reported. Unit: seconds.
      shared_ptr<int32_t> alertInterval_ {};
      // The notification method.
      shared_ptr<vector<string>> alertMethods_ {};
      // The description of the alert recipient. For more information about alert recipients, see the Receivers parameter.
      shared_ptr<vector<string>> alertTargets_ {};
      // The type of the alert recipient. For more information about alert recipient types, see the Receivers parameter. Valid values:
      // 
      // *   OWNER: the task owner
      // *   OTHER: specified personnel
      // *   SHIFT_SCHEDULE: personnel in a shift schedule
      shared_ptr<string> alertUnit_ {};
      // The IDs of the nodes that are added to a whitelist.
      shared_ptr<vector<int64_t>> allowNodes_ {};
      // The baselines to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is BASELINE.
      shared_ptr<vector<Data::Baselines>> baselines_ {};
      // The workflows to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is BIZPROCESS.
      shared_ptr<vector<Data::BizProcesses>> bizProcesses_ {};
      // *   If the value of the RemindType parameter is FINISHED, this parameter is left empty.
      // *   If the value of the RemindType parameter is UNFINISHED, the trigger conditions are returned as key-value pairs. Example: {"hour":23,"minu":59}. Valid values of hour: [0,47]. Valid values of minu: [0,59].
      // *   If the value of the RemindType parameter is ERROR, this parameter is left empty.
      // *   If the value of the RemindType parameter is CYCLE_UNFINISHED, the trigger conditions are returned as key-value pairs. Example: {"1":"05:50","2":"06:50","3":"07:50","4":"08:50","5":"09:50","6":"10:50","7":"11:50","8":"12:50","9":"13:50","10":"14:50","11":"15:50","12":"16:50","13":"17:50","14":"18:50","15":"19:50","16":"20:50","17":"21:50","18":"22:50","19":"23:50","20":"24:50","21":"25:50"}. The key indicates the ID of the cycle. Valid values: [1,288]. The value indicates the timeout period of the node that is running in the cycle. Specify the value in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
      // *   If the value of the RemindType parameter is TIMEOUT, the timeout period is returned. Unit: seconds. Example: 1800. This value indicates that an alert is reported if the node has run for more than 30 minutes.
      shared_ptr<string> detail_ {};
      // The end time of the quiet hours. The value is in the hh:mm format. Valid values of hh: [0,23]. Valid values of mm: [0,59].
      shared_ptr<string> dndEnd_ {};
      // The start time of the quiet hours. The value is in the hh:mm format. Valid values of hh: [0,23]. Valid values of mm: [0,59].
      shared_ptr<string> dndStart_ {};
      // The ID of the Alibaba Cloud account used by the creator of the custom alert rule.
      shared_ptr<string> founder_ {};
      // The maximum number of alerts.
      shared_ptr<int32_t> maxAlertTimes_ {};
      // The nodes to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is NODE.
      shared_ptr<vector<Data::Nodes>> nodes_ {};
      // The workspaces to which the custom alert rule is applied. This parameter is returned if the value of the RemindUnit parameter is PROJECT.
      shared_ptr<vector<Data::Projects>> projects_ {};
      // The information about the alert recipients.
      shared_ptr<vector<Data::Receivers>> receivers_ {};
      // The custom alert rule ID.
      shared_ptr<int64_t> remindId_ {};
      // The name of the rule.
      shared_ptr<string> remindName_ {};
      // The conditions that trigger an alert. Valid values: FINISHED, UNFINISHED, ERROR, CYCLE_UNFINISHED, and TIMEOUT.
      shared_ptr<string> remindType_ {};
      // The type of the object to which the custom alert rule is applied. Valid values: NODE, BASELINE, PROJECT, and BIZPROCESS. The value NODE indicates a node. The value BASELINE indicates a baseline. The value PROJECT indicates a workspace. The value BIZPROCESS indicates a workflow.
      shared_ptr<string> remindUnit_ {};
      // The webhook URLs of the DingTalk chatbots.
      shared_ptr<vector<Data::Robots>> robots_ {};
      // Indicates whether the custom alert rule is enabled. Valid values: true and false.
      shared_ptr<bool> useflag_ {};
      // WebHook URL
      shared_ptr<vector<string>> webhooks_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRemindResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRemindResponseBody::Data) };
    inline GetRemindResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRemindResponseBody::Data) };
    inline GetRemindResponseBody& setData(const GetRemindResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRemindResponseBody& setData(GetRemindResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetRemindResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetRemindResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRemindResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRemindResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRemindResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the custom alert rule.
    shared_ptr<GetRemindResponseBody::Data> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
