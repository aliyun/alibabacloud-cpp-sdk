// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLHTASKFLOWANDSCENARIORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListLhTaskFlowAndScenarioResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLhTaskFlowAndScenarioResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RawDAGList, rawDAGList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScenarioDAGList, scenarioDAGList_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListLhTaskFlowAndScenarioResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RawDAGList, rawDAGList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScenarioDAGList, scenarioDAGList_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListLhTaskFlowAndScenarioResponseBody() = default ;
    ListLhTaskFlowAndScenarioResponseBody(const ListLhTaskFlowAndScenarioResponseBody &) = default ;
    ListLhTaskFlowAndScenarioResponseBody(ListLhTaskFlowAndScenarioResponseBody &&) = default ;
    ListLhTaskFlowAndScenarioResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLhTaskFlowAndScenarioResponseBody() = default ;
    ListLhTaskFlowAndScenarioResponseBody& operator=(const ListLhTaskFlowAndScenarioResponseBody &) = default ;
    ListLhTaskFlowAndScenarioResponseBody& operator=(ListLhTaskFlowAndScenarioResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScenarioDAGList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScenarioDAGList& obj) { 
        DARABONBA_PTR_TO_JSON(ScenarioDAG, scenarioDAG_);
      };
      friend void from_json(const Darabonba::Json& j, ScenarioDAGList& obj) { 
        DARABONBA_PTR_FROM_JSON(ScenarioDAG, scenarioDAG_);
      };
      ScenarioDAGList() = default ;
      ScenarioDAGList(const ScenarioDAGList &) = default ;
      ScenarioDAGList(ScenarioDAGList &&) = default ;
      ScenarioDAGList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScenarioDAGList() = default ;
      ScenarioDAGList& operator=(const ScenarioDAGList &) = default ;
      ScenarioDAGList& operator=(ScenarioDAGList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ScenarioDAG : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ScenarioDAG& obj) { 
          DARABONBA_PTR_TO_JSON(DagList, dagList_);
          DARABONBA_PTR_TO_JSON(Scenario, scenario_);
        };
        friend void from_json(const Darabonba::Json& j, ScenarioDAG& obj) { 
          DARABONBA_PTR_FROM_JSON(DagList, dagList_);
          DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
        };
        ScenarioDAG() = default ;
        ScenarioDAG(const ScenarioDAG &) = default ;
        ScenarioDAG(ScenarioDAG &&) = default ;
        ScenarioDAG(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ScenarioDAG() = default ;
        ScenarioDAG& operator=(const ScenarioDAG &) = default ;
        ScenarioDAG& operator=(ScenarioDAG &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Scenario : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Scenario& obj) { 
            DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(ScenarioName, scenarioName_);
          };
          friend void from_json(const Darabonba::Json& j, Scenario& obj) { 
            DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(ScenarioName, scenarioName_);
          };
          Scenario() = default ;
          Scenario(const Scenario &) = default ;
          Scenario(Scenario &&) = default ;
          Scenario(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Scenario() = default ;
          Scenario& operator=(const Scenario &) = default ;
          Scenario& operator=(Scenario &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->creatorId_ == nullptr
        && this->description_ == nullptr && this->scenarioName_ == nullptr; };
          // creatorId Field Functions 
          bool hasCreatorId() const { return this->creatorId_ != nullptr;};
          void deleteCreatorId() { this->creatorId_ = nullptr;};
          inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
          inline Scenario& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Scenario& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // scenarioName Field Functions 
          bool hasScenarioName() const { return this->scenarioName_ != nullptr;};
          void deleteScenarioName() { this->scenarioName_ = nullptr;};
          inline string getScenarioName() const { DARABONBA_PTR_GET_DEFAULT(scenarioName_, "") };
          inline Scenario& setScenarioName(string scenarioName) { DARABONBA_PTR_SET_VALUE(scenarioName_, scenarioName) };


        protected:
          // The ID of the user who creates the business scenario.
          shared_ptr<string> creatorId_ {};
          // The description of the business scenario.
          shared_ptr<string> description_ {};
          // The name of the business scenario.
          shared_ptr<string> scenarioName_ {};
        };

        class DagList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DagList& obj) { 
            DARABONBA_PTR_TO_JSON(Dag, dag_);
          };
          friend void from_json(const Darabonba::Json& j, DagList& obj) { 
            DARABONBA_PTR_FROM_JSON(Dag, dag_);
          };
          DagList() = default ;
          DagList(const DagList &) = default ;
          DagList(DagList &&) = default ;
          DagList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DagList() = default ;
          DagList& operator=(const DagList &) = default ;
          DagList& operator=(DagList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Dag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Dag& obj) { 
              DARABONBA_PTR_TO_JSON(CanEdit, canEdit_);
              DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
              DARABONBA_PTR_TO_JSON(CreatorNickName, creatorNickName_);
              DARABONBA_PTR_TO_JSON(DagName, dagName_);
              DARABONBA_PTR_TO_JSON(DagOwnerId, dagOwnerId_);
              DARABONBA_PTR_TO_JSON(DagOwnerNickName, dagOwnerNickName_);
              DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
              DARABONBA_PTR_TO_JSON(DemoId, demoId_);
              DARABONBA_PTR_TO_JSON(DeployId, deployId_);
              DARABONBA_PTR_TO_JSON(Id, id_);
              DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
              DARABONBA_PTR_TO_JSON(LatestInstanceStatus, latestInstanceStatus_);
              DARABONBA_PTR_TO_JSON(LatestInstanceTime, latestInstanceTime_);
              DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
              DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
              DARABONBA_PTR_TO_JSON(Status, status_);
            };
            friend void from_json(const Darabonba::Json& j, Dag& obj) { 
              DARABONBA_PTR_FROM_JSON(CanEdit, canEdit_);
              DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
              DARABONBA_PTR_FROM_JSON(CreatorNickName, creatorNickName_);
              DARABONBA_PTR_FROM_JSON(DagName, dagName_);
              DARABONBA_PTR_FROM_JSON(DagOwnerId, dagOwnerId_);
              DARABONBA_PTR_FROM_JSON(DagOwnerNickName, dagOwnerNickName_);
              DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
              DARABONBA_PTR_FROM_JSON(DemoId, demoId_);
              DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
              DARABONBA_PTR_FROM_JSON(Id, id_);
              DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
              DARABONBA_PTR_FROM_JSON(LatestInstanceStatus, latestInstanceStatus_);
              DARABONBA_PTR_FROM_JSON(LatestInstanceTime, latestInstanceTime_);
              DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
              DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
            };
            Dag() = default ;
            Dag(const Dag &) = default ;
            Dag(Dag &&) = default ;
            Dag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Dag() = default ;
            Dag& operator=(const Dag &) = default ;
            Dag& operator=(Dag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->canEdit_ == nullptr
        && this->creatorId_ == nullptr && this->creatorNickName_ == nullptr && this->dagName_ == nullptr && this->dagOwnerId_ == nullptr && this->dagOwnerNickName_ == nullptr
        && this->dataFlowId_ == nullptr && this->demoId_ == nullptr && this->deployId_ == nullptr && this->id_ == nullptr && this->isDeleted_ == nullptr
        && this->latestInstanceStatus_ == nullptr && this->latestInstanceTime_ == nullptr && this->scenarioId_ == nullptr && this->spaceId_ == nullptr && this->status_ == nullptr; };
            // canEdit Field Functions 
            bool hasCanEdit() const { return this->canEdit_ != nullptr;};
            void deleteCanEdit() { this->canEdit_ = nullptr;};
            inline bool getCanEdit() const { DARABONBA_PTR_GET_DEFAULT(canEdit_, false) };
            inline Dag& setCanEdit(bool canEdit) { DARABONBA_PTR_SET_VALUE(canEdit_, canEdit) };


            // creatorId Field Functions 
            bool hasCreatorId() const { return this->creatorId_ != nullptr;};
            void deleteCreatorId() { this->creatorId_ = nullptr;};
            inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
            inline Dag& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


            // creatorNickName Field Functions 
            bool hasCreatorNickName() const { return this->creatorNickName_ != nullptr;};
            void deleteCreatorNickName() { this->creatorNickName_ = nullptr;};
            inline string getCreatorNickName() const { DARABONBA_PTR_GET_DEFAULT(creatorNickName_, "") };
            inline Dag& setCreatorNickName(string creatorNickName) { DARABONBA_PTR_SET_VALUE(creatorNickName_, creatorNickName) };


            // dagName Field Functions 
            bool hasDagName() const { return this->dagName_ != nullptr;};
            void deleteDagName() { this->dagName_ = nullptr;};
            inline string getDagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
            inline Dag& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


            // dagOwnerId Field Functions 
            bool hasDagOwnerId() const { return this->dagOwnerId_ != nullptr;};
            void deleteDagOwnerId() { this->dagOwnerId_ = nullptr;};
            inline string getDagOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerId_, "") };
            inline Dag& setDagOwnerId(string dagOwnerId) { DARABONBA_PTR_SET_VALUE(dagOwnerId_, dagOwnerId) };


            // dagOwnerNickName Field Functions 
            bool hasDagOwnerNickName() const { return this->dagOwnerNickName_ != nullptr;};
            void deleteDagOwnerNickName() { this->dagOwnerNickName_ = nullptr;};
            inline string getDagOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerNickName_, "") };
            inline Dag& setDagOwnerNickName(string dagOwnerNickName) { DARABONBA_PTR_SET_VALUE(dagOwnerNickName_, dagOwnerNickName) };


            // dataFlowId Field Functions 
            bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
            void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
            inline int64_t getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, 0L) };
            inline Dag& setDataFlowId(int64_t dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


            // demoId Field Functions 
            bool hasDemoId() const { return this->demoId_ != nullptr;};
            void deleteDemoId() { this->demoId_ = nullptr;};
            inline string getDemoId() const { DARABONBA_PTR_GET_DEFAULT(demoId_, "") };
            inline Dag& setDemoId(string demoId) { DARABONBA_PTR_SET_VALUE(demoId_, demoId) };


            // deployId Field Functions 
            bool hasDeployId() const { return this->deployId_ != nullptr;};
            void deleteDeployId() { this->deployId_ = nullptr;};
            inline int64_t getDeployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
            inline Dag& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


            // id Field Functions 
            bool hasId() const { return this->id_ != nullptr;};
            void deleteId() { this->id_ = nullptr;};
            inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
            inline Dag& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


            // isDeleted Field Functions 
            bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
            void deleteIsDeleted() { this->isDeleted_ = nullptr;};
            inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
            inline Dag& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


            // latestInstanceStatus Field Functions 
            bool hasLatestInstanceStatus() const { return this->latestInstanceStatus_ != nullptr;};
            void deleteLatestInstanceStatus() { this->latestInstanceStatus_ = nullptr;};
            inline int32_t getLatestInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceStatus_, 0) };
            inline Dag& setLatestInstanceStatus(int32_t latestInstanceStatus) { DARABONBA_PTR_SET_VALUE(latestInstanceStatus_, latestInstanceStatus) };


            // latestInstanceTime Field Functions 
            bool hasLatestInstanceTime() const { return this->latestInstanceTime_ != nullptr;};
            void deleteLatestInstanceTime() { this->latestInstanceTime_ = nullptr;};
            inline int32_t getLatestInstanceTime() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceTime_, 0) };
            inline Dag& setLatestInstanceTime(int32_t latestInstanceTime) { DARABONBA_PTR_SET_VALUE(latestInstanceTime_, latestInstanceTime) };


            // scenarioId Field Functions 
            bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
            void deleteScenarioId() { this->scenarioId_ = nullptr;};
            inline int64_t getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, 0L) };
            inline Dag& setScenarioId(int64_t scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


            // spaceId Field Functions 
            bool hasSpaceId() const { return this->spaceId_ != nullptr;};
            void deleteSpaceId() { this->spaceId_ = nullptr;};
            inline int64_t getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, 0L) };
            inline Dag& setSpaceId(int64_t spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
            inline Dag& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          protected:
            // Indicates whether the task flow can be modified. Valid values:
            // 
            // - **true**: The task flow can be modified.
            // - **false**: The task flow cannot be modified.
            shared_ptr<bool> canEdit_ {};
            // The ID of the user who creates the task flow.
            shared_ptr<string> creatorId_ {};
            // The name of the user who creates the workspace.
            shared_ptr<string> creatorNickName_ {};
            // The name of the task flow.
            shared_ptr<string> dagName_ {};
            // The user ID of the task flow owner.
            shared_ptr<string> dagOwnerId_ {};
            // The name of the task flow owner.
            shared_ptr<string> dagOwnerNickName_ {};
            // The extended field. No meaning is specified for this field.
            shared_ptr<int64_t> dataFlowId_ {};
            // The extended field. No meaning is specified for this field.
            shared_ptr<string> demoId_ {};
            // The ID of the latest deployment record.
            shared_ptr<int64_t> deployId_ {};
            // The ID of the task flow.
            shared_ptr<int64_t> id_ {};
            // Indicates whether the task flow is deleted. Valid values:
            // 
            // - **true**: deleted
            // - **false**: not deleted
            shared_ptr<bool> isDeleted_ {};
            // The status of the latest execution. Valid values:
            // 
            // - 0: invalid
            // - 1: scheduling disabled
            // - 2: waiting to be scheduled
            shared_ptr<int32_t> latestInstanceStatus_ {};
            // The time when the latest execution record was generated.
            shared_ptr<int32_t> latestInstanceTime_ {};
            // The ID of the business scenario.
            shared_ptr<int64_t> scenarioId_ {};
            // The ID of the workspace.
            shared_ptr<int64_t> spaceId_ {};
            // The status of the task flow. Valid values:
            // 
            // - **0**: invalid
            // - **1**: scheduling disabled
            // - **2**: waiting to be scheduled
            shared_ptr<int32_t> status_ {};
          };

          virtual bool empty() const override { return this->dag_ == nullptr; };
          // dag Field Functions 
          bool hasDag() const { return this->dag_ != nullptr;};
          void deleteDag() { this->dag_ = nullptr;};
          inline const vector<DagList::Dag> & getDag() const { DARABONBA_PTR_GET_CONST(dag_, vector<DagList::Dag>) };
          inline vector<DagList::Dag> getDag() { DARABONBA_PTR_GET(dag_, vector<DagList::Dag>) };
          inline DagList& setDag(const vector<DagList::Dag> & dag) { DARABONBA_PTR_SET_VALUE(dag_, dag) };
          inline DagList& setDag(vector<DagList::Dag> && dag) { DARABONBA_PTR_SET_RVALUE(dag_, dag) };


        protected:
          shared_ptr<vector<DagList::Dag>> dag_ {};
        };

        virtual bool empty() const override { return this->dagList_ == nullptr
        && this->scenario_ == nullptr; };
        // dagList Field Functions 
        bool hasDagList() const { return this->dagList_ != nullptr;};
        void deleteDagList() { this->dagList_ = nullptr;};
        inline const ScenarioDAG::DagList & getDagList() const { DARABONBA_PTR_GET_CONST(dagList_, ScenarioDAG::DagList) };
        inline ScenarioDAG::DagList getDagList() { DARABONBA_PTR_GET(dagList_, ScenarioDAG::DagList) };
        inline ScenarioDAG& setDagList(const ScenarioDAG::DagList & dagList) { DARABONBA_PTR_SET_VALUE(dagList_, dagList) };
        inline ScenarioDAG& setDagList(ScenarioDAG::DagList && dagList) { DARABONBA_PTR_SET_RVALUE(dagList_, dagList) };


        // scenario Field Functions 
        bool hasScenario() const { return this->scenario_ != nullptr;};
        void deleteScenario() { this->scenario_ = nullptr;};
        inline const ScenarioDAG::Scenario & getScenario() const { DARABONBA_PTR_GET_CONST(scenario_, ScenarioDAG::Scenario) };
        inline ScenarioDAG::Scenario getScenario() { DARABONBA_PTR_GET(scenario_, ScenarioDAG::Scenario) };
        inline ScenarioDAG& setScenario(const ScenarioDAG::Scenario & scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };
        inline ScenarioDAG& setScenario(ScenarioDAG::Scenario && scenario) { DARABONBA_PTR_SET_RVALUE(scenario_, scenario) };


      protected:
        // The list of task flows.
        shared_ptr<ScenarioDAG::DagList> dagList_ {};
        // The information about the business scenario.
        shared_ptr<ScenarioDAG::Scenario> scenario_ {};
      };

      virtual bool empty() const override { return this->scenarioDAG_ == nullptr; };
      // scenarioDAG Field Functions 
      bool hasScenarioDAG() const { return this->scenarioDAG_ != nullptr;};
      void deleteScenarioDAG() { this->scenarioDAG_ = nullptr;};
      inline const vector<ScenarioDAGList::ScenarioDAG> & getScenarioDAG() const { DARABONBA_PTR_GET_CONST(scenarioDAG_, vector<ScenarioDAGList::ScenarioDAG>) };
      inline vector<ScenarioDAGList::ScenarioDAG> getScenarioDAG() { DARABONBA_PTR_GET(scenarioDAG_, vector<ScenarioDAGList::ScenarioDAG>) };
      inline ScenarioDAGList& setScenarioDAG(const vector<ScenarioDAGList::ScenarioDAG> & scenarioDAG) { DARABONBA_PTR_SET_VALUE(scenarioDAG_, scenarioDAG) };
      inline ScenarioDAGList& setScenarioDAG(vector<ScenarioDAGList::ScenarioDAG> && scenarioDAG) { DARABONBA_PTR_SET_RVALUE(scenarioDAG_, scenarioDAG) };


    protected:
      shared_ptr<vector<ScenarioDAGList::ScenarioDAG>> scenarioDAG_ {};
    };

    class RawDAGList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RawDAGList& obj) { 
        DARABONBA_PTR_TO_JSON(Dag, dag_);
      };
      friend void from_json(const Darabonba::Json& j, RawDAGList& obj) { 
        DARABONBA_PTR_FROM_JSON(Dag, dag_);
      };
      RawDAGList() = default ;
      RawDAGList(const RawDAGList &) = default ;
      RawDAGList(RawDAGList &&) = default ;
      RawDAGList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RawDAGList() = default ;
      RawDAGList& operator=(const RawDAGList &) = default ;
      RawDAGList& operator=(RawDAGList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Dag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dag& obj) { 
          DARABONBA_PTR_TO_JSON(CanEdit, canEdit_);
          DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_TO_JSON(CreatorNickName, creatorNickName_);
          DARABONBA_PTR_TO_JSON(DagName, dagName_);
          DARABONBA_PTR_TO_JSON(DagOwnerId, dagOwnerId_);
          DARABONBA_PTR_TO_JSON(DagOwnerNickName, dagOwnerNickName_);
          DARABONBA_PTR_TO_JSON(DataFlowId, dataFlowId_);
          DARABONBA_PTR_TO_JSON(DemoId, demoId_);
          DARABONBA_PTR_TO_JSON(DeployId, deployId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_TO_JSON(LatestInstanceStatus, latestInstanceStatus_);
          DARABONBA_PTR_TO_JSON(LatestInstanceTime, latestInstanceTime_);
          DARABONBA_PTR_TO_JSON(ScenarioId, scenarioId_);
          DARABONBA_PTR_TO_JSON(SpaceId, spaceId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Dag& obj) { 
          DARABONBA_PTR_FROM_JSON(CanEdit, canEdit_);
          DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
          DARABONBA_PTR_FROM_JSON(CreatorNickName, creatorNickName_);
          DARABONBA_PTR_FROM_JSON(DagName, dagName_);
          DARABONBA_PTR_FROM_JSON(DagOwnerId, dagOwnerId_);
          DARABONBA_PTR_FROM_JSON(DagOwnerNickName, dagOwnerNickName_);
          DARABONBA_PTR_FROM_JSON(DataFlowId, dataFlowId_);
          DARABONBA_PTR_FROM_JSON(DemoId, demoId_);
          DARABONBA_PTR_FROM_JSON(DeployId, deployId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
          DARABONBA_PTR_FROM_JSON(LatestInstanceStatus, latestInstanceStatus_);
          DARABONBA_PTR_FROM_JSON(LatestInstanceTime, latestInstanceTime_);
          DARABONBA_PTR_FROM_JSON(ScenarioId, scenarioId_);
          DARABONBA_PTR_FROM_JSON(SpaceId, spaceId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Dag() = default ;
        Dag(const Dag &) = default ;
        Dag(Dag &&) = default ;
        Dag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dag() = default ;
        Dag& operator=(const Dag &) = default ;
        Dag& operator=(Dag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->canEdit_ == nullptr
        && this->creatorId_ == nullptr && this->creatorNickName_ == nullptr && this->dagName_ == nullptr && this->dagOwnerId_ == nullptr && this->dagOwnerNickName_ == nullptr
        && this->dataFlowId_ == nullptr && this->demoId_ == nullptr && this->deployId_ == nullptr && this->id_ == nullptr && this->isDeleted_ == nullptr
        && this->latestInstanceStatus_ == nullptr && this->latestInstanceTime_ == nullptr && this->scenarioId_ == nullptr && this->spaceId_ == nullptr && this->status_ == nullptr; };
        // canEdit Field Functions 
        bool hasCanEdit() const { return this->canEdit_ != nullptr;};
        void deleteCanEdit() { this->canEdit_ = nullptr;};
        inline bool getCanEdit() const { DARABONBA_PTR_GET_DEFAULT(canEdit_, false) };
        inline Dag& setCanEdit(bool canEdit) { DARABONBA_PTR_SET_VALUE(canEdit_, canEdit) };


        // creatorId Field Functions 
        bool hasCreatorId() const { return this->creatorId_ != nullptr;};
        void deleteCreatorId() { this->creatorId_ = nullptr;};
        inline string getCreatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
        inline Dag& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


        // creatorNickName Field Functions 
        bool hasCreatorNickName() const { return this->creatorNickName_ != nullptr;};
        void deleteCreatorNickName() { this->creatorNickName_ = nullptr;};
        inline string getCreatorNickName() const { DARABONBA_PTR_GET_DEFAULT(creatorNickName_, "") };
        inline Dag& setCreatorNickName(string creatorNickName) { DARABONBA_PTR_SET_VALUE(creatorNickName_, creatorNickName) };


        // dagName Field Functions 
        bool hasDagName() const { return this->dagName_ != nullptr;};
        void deleteDagName() { this->dagName_ = nullptr;};
        inline string getDagName() const { DARABONBA_PTR_GET_DEFAULT(dagName_, "") };
        inline Dag& setDagName(string dagName) { DARABONBA_PTR_SET_VALUE(dagName_, dagName) };


        // dagOwnerId Field Functions 
        bool hasDagOwnerId() const { return this->dagOwnerId_ != nullptr;};
        void deleteDagOwnerId() { this->dagOwnerId_ = nullptr;};
        inline string getDagOwnerId() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerId_, "") };
        inline Dag& setDagOwnerId(string dagOwnerId) { DARABONBA_PTR_SET_VALUE(dagOwnerId_, dagOwnerId) };


        // dagOwnerNickName Field Functions 
        bool hasDagOwnerNickName() const { return this->dagOwnerNickName_ != nullptr;};
        void deleteDagOwnerNickName() { this->dagOwnerNickName_ = nullptr;};
        inline string getDagOwnerNickName() const { DARABONBA_PTR_GET_DEFAULT(dagOwnerNickName_, "") };
        inline Dag& setDagOwnerNickName(string dagOwnerNickName) { DARABONBA_PTR_SET_VALUE(dagOwnerNickName_, dagOwnerNickName) };


        // dataFlowId Field Functions 
        bool hasDataFlowId() const { return this->dataFlowId_ != nullptr;};
        void deleteDataFlowId() { this->dataFlowId_ = nullptr;};
        inline int64_t getDataFlowId() const { DARABONBA_PTR_GET_DEFAULT(dataFlowId_, 0L) };
        inline Dag& setDataFlowId(int64_t dataFlowId) { DARABONBA_PTR_SET_VALUE(dataFlowId_, dataFlowId) };


        // demoId Field Functions 
        bool hasDemoId() const { return this->demoId_ != nullptr;};
        void deleteDemoId() { this->demoId_ = nullptr;};
        inline string getDemoId() const { DARABONBA_PTR_GET_DEFAULT(demoId_, "") };
        inline Dag& setDemoId(string demoId) { DARABONBA_PTR_SET_VALUE(demoId_, demoId) };


        // deployId Field Functions 
        bool hasDeployId() const { return this->deployId_ != nullptr;};
        void deleteDeployId() { this->deployId_ = nullptr;};
        inline int64_t getDeployId() const { DARABONBA_PTR_GET_DEFAULT(deployId_, 0L) };
        inline Dag& setDeployId(int64_t deployId) { DARABONBA_PTR_SET_VALUE(deployId_, deployId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Dag& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // isDeleted Field Functions 
        bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
        void deleteIsDeleted() { this->isDeleted_ = nullptr;};
        inline bool getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, false) };
        inline Dag& setIsDeleted(bool isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


        // latestInstanceStatus Field Functions 
        bool hasLatestInstanceStatus() const { return this->latestInstanceStatus_ != nullptr;};
        void deleteLatestInstanceStatus() { this->latestInstanceStatus_ = nullptr;};
        inline int32_t getLatestInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceStatus_, 0) };
        inline Dag& setLatestInstanceStatus(int32_t latestInstanceStatus) { DARABONBA_PTR_SET_VALUE(latestInstanceStatus_, latestInstanceStatus) };


        // latestInstanceTime Field Functions 
        bool hasLatestInstanceTime() const { return this->latestInstanceTime_ != nullptr;};
        void deleteLatestInstanceTime() { this->latestInstanceTime_ = nullptr;};
        inline int32_t getLatestInstanceTime() const { DARABONBA_PTR_GET_DEFAULT(latestInstanceTime_, 0) };
        inline Dag& setLatestInstanceTime(int32_t latestInstanceTime) { DARABONBA_PTR_SET_VALUE(latestInstanceTime_, latestInstanceTime) };


        // scenarioId Field Functions 
        bool hasScenarioId() const { return this->scenarioId_ != nullptr;};
        void deleteScenarioId() { this->scenarioId_ = nullptr;};
        inline int64_t getScenarioId() const { DARABONBA_PTR_GET_DEFAULT(scenarioId_, 0L) };
        inline Dag& setScenarioId(int64_t scenarioId) { DARABONBA_PTR_SET_VALUE(scenarioId_, scenarioId) };


        // spaceId Field Functions 
        bool hasSpaceId() const { return this->spaceId_ != nullptr;};
        void deleteSpaceId() { this->spaceId_ = nullptr;};
        inline int64_t getSpaceId() const { DARABONBA_PTR_GET_DEFAULT(spaceId_, 0L) };
        inline Dag& setSpaceId(int64_t spaceId) { DARABONBA_PTR_SET_VALUE(spaceId_, spaceId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Dag& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // Indicates whether the task flow can be modified. Valid values:
        // 
        // *   **true**: The task flow can be modified.
        // *   **false**: The task flow cannot be modified.
        shared_ptr<bool> canEdit_ {};
        // The ID of the user who creates the task flow.
        shared_ptr<string> creatorId_ {};
        // The name of the user who creates the workspace.
        shared_ptr<string> creatorNickName_ {};
        // The name of the task flow.
        shared_ptr<string> dagName_ {};
        // The user ID of the task flow owner.
        shared_ptr<string> dagOwnerId_ {};
        // The name of the task flow owner.
        shared_ptr<string> dagOwnerNickName_ {};
        // The extended field. No meaning is specified for this field.
        shared_ptr<int64_t> dataFlowId_ {};
        // The extended field. No meaning is specified for this field.
        shared_ptr<string> demoId_ {};
        // The ID of the latest deployment record.
        shared_ptr<int64_t> deployId_ {};
        // The ID of the task flow.
        shared_ptr<int64_t> id_ {};
        // Indicates whether the task flow is deleted. Valid values:
        // 
        // *   **true**: deleted
        // *   **false**: not deleted
        shared_ptr<bool> isDeleted_ {};
        // The status of the latest execution. Valid values:
        // 
        // *   **0**: invalid
        // *   **1**: scheduling disabled
        // *   **2**: waiting to be scheduled
        shared_ptr<int32_t> latestInstanceStatus_ {};
        // The time when the latest execution record was generated.
        shared_ptr<int32_t> latestInstanceTime_ {};
        // The ID of the business scenario.
        shared_ptr<int64_t> scenarioId_ {};
        // The ID of the workspace.
        shared_ptr<int64_t> spaceId_ {};
        // The status of the task flow. Valid values:
        // 
        // *   **0**: invalid
        // *   **1**: scheduling disabled
        // *   **2**: waiting to be scheduled
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->dag_ == nullptr; };
      // dag Field Functions 
      bool hasDag() const { return this->dag_ != nullptr;};
      void deleteDag() { this->dag_ = nullptr;};
      inline const vector<RawDAGList::Dag> & getDag() const { DARABONBA_PTR_GET_CONST(dag_, vector<RawDAGList::Dag>) };
      inline vector<RawDAGList::Dag> getDag() { DARABONBA_PTR_GET(dag_, vector<RawDAGList::Dag>) };
      inline RawDAGList& setDag(const vector<RawDAGList::Dag> & dag) { DARABONBA_PTR_SET_VALUE(dag_, dag) };
      inline RawDAGList& setDag(vector<RawDAGList::Dag> && dag) { DARABONBA_PTR_SET_RVALUE(dag_, dag) };


    protected:
      shared_ptr<vector<RawDAGList::Dag>> dag_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->rawDAGList_ == nullptr && this->requestId_ == nullptr && this->scenarioDAGList_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListLhTaskFlowAndScenarioResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListLhTaskFlowAndScenarioResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // rawDAGList Field Functions 
    bool hasRawDAGList() const { return this->rawDAGList_ != nullptr;};
    void deleteRawDAGList() { this->rawDAGList_ = nullptr;};
    inline const ListLhTaskFlowAndScenarioResponseBody::RawDAGList & getRawDAGList() const { DARABONBA_PTR_GET_CONST(rawDAGList_, ListLhTaskFlowAndScenarioResponseBody::RawDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody::RawDAGList getRawDAGList() { DARABONBA_PTR_GET(rawDAGList_, ListLhTaskFlowAndScenarioResponseBody::RawDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody& setRawDAGList(const ListLhTaskFlowAndScenarioResponseBody::RawDAGList & rawDAGList) { DARABONBA_PTR_SET_VALUE(rawDAGList_, rawDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody& setRawDAGList(ListLhTaskFlowAndScenarioResponseBody::RawDAGList && rawDAGList) { DARABONBA_PTR_SET_RVALUE(rawDAGList_, rawDAGList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLhTaskFlowAndScenarioResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scenarioDAGList Field Functions 
    bool hasScenarioDAGList() const { return this->scenarioDAGList_ != nullptr;};
    void deleteScenarioDAGList() { this->scenarioDAGList_ = nullptr;};
    inline const ListLhTaskFlowAndScenarioResponseBody::ScenarioDAGList & getScenarioDAGList() const { DARABONBA_PTR_GET_CONST(scenarioDAGList_, ListLhTaskFlowAndScenarioResponseBody::ScenarioDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody::ScenarioDAGList getScenarioDAGList() { DARABONBA_PTR_GET(scenarioDAGList_, ListLhTaskFlowAndScenarioResponseBody::ScenarioDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody& setScenarioDAGList(const ListLhTaskFlowAndScenarioResponseBody::ScenarioDAGList & scenarioDAGList) { DARABONBA_PTR_SET_VALUE(scenarioDAGList_, scenarioDAGList) };
    inline ListLhTaskFlowAndScenarioResponseBody& setScenarioDAGList(ListLhTaskFlowAndScenarioResponseBody::ScenarioDAGList && scenarioDAGList) { DARABONBA_PTR_SET_RVALUE(scenarioDAGList_, scenarioDAGList) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListLhTaskFlowAndScenarioResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The task flows in the default business scenario.
    shared_ptr<ListLhTaskFlowAndScenarioResponseBody::RawDAGList> rawDAGList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The task flows in other business scenarios.
    shared_ptr<ListLhTaskFlowAndScenarioResponseBody::ScenarioDAGList> scenarioDAGList_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // - **true**: The request is successful.
    // - **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
