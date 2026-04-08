// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINESTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINESTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBaselineStatusResponseBody() = default ;
    GetBaselineStatusResponseBody(const GetBaselineStatusResponseBody &) = default ;
    GetBaselineStatusResponseBody(GetBaselineStatusResponseBody &&) = default ;
    GetBaselineStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineStatusResponseBody() = default ;
    GetBaselineStatusResponseBody& operator=(const GetBaselineStatusResponseBody &) = default ;
    GetBaselineStatusResponseBody& operator=(GetBaselineStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_TO_JSON(BaselineName, baselineName_);
        DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
        DARABONBA_PTR_TO_JSON(BlockInstance, blockInstance_);
        DARABONBA_PTR_TO_JSON(Buffer, buffer_);
        DARABONBA_PTR_TO_JSON(EndCast, endCast_);
        DARABONBA_PTR_TO_JSON(ExpTime, expTime_);
        DARABONBA_PTR_TO_JSON(FinishStatus, finishStatus_);
        DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
        DARABONBA_PTR_TO_JSON(LastInstance, lastInstance_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
        DARABONBA_PTR_TO_JSON(SlaTime, slaTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BaselineId, baselineId_);
        DARABONBA_PTR_FROM_JSON(BaselineName, baselineName_);
        DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
        DARABONBA_PTR_FROM_JSON(BlockInstance, blockInstance_);
        DARABONBA_PTR_FROM_JSON(Buffer, buffer_);
        DARABONBA_PTR_FROM_JSON(EndCast, endCast_);
        DARABONBA_PTR_FROM_JSON(ExpTime, expTime_);
        DARABONBA_PTR_FROM_JSON(FinishStatus, finishStatus_);
        DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
        DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
        DARABONBA_PTR_FROM_JSON(LastInstance, lastInstance_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
        DARABONBA_PTR_FROM_JSON(SlaTime, slaTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class LastInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LastInstance& obj) { 
          DARABONBA_PTR_TO_JSON(EndCast, endCast_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, LastInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(EndCast, endCast_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        LastInstance() = default ;
        LastInstance(const LastInstance &) = default ;
        LastInstance(LastInstance &&) = default ;
        LastInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LastInstance() = default ;
        LastInstance& operator=(const LastInstance &) = default ;
        LastInstance& operator=(LastInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endCast_ == nullptr
        && this->finishTime_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->status_ == nullptr; };
        // endCast Field Functions 
        bool hasEndCast() const { return this->endCast_ != nullptr;};
        void deleteEndCast() { this->endCast_ = nullptr;};
        inline int64_t getEndCast() const { DARABONBA_PTR_GET_DEFAULT(endCast_, 0L) };
        inline LastInstance& setEndCast(int64_t endCast) { DARABONBA_PTR_SET_VALUE(endCast_, endCast) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline LastInstance& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline LastInstance& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline LastInstance& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline LastInstance& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline LastInstance& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline LastInstance& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline LastInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The timestamp of the predicted time when the instance finished running.
        shared_ptr<int64_t> endCast_ {};
        // The timestamp of the actual time when the instance finished running.
        shared_ptr<int64_t> finishTime_ {};
        // The ID of the instance.
        shared_ptr<int64_t> instanceId_ {};
        // The ID of the node.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The ID of the Alibaba Cloud account used by the node owner.
        shared_ptr<string> owner_ {};
        // The ID of the workspace to which the node belongs.
        shared_ptr<int64_t> projectId_ {};
        // The status of the instance. Valid values: NOT_RUN, WAIT_TIME, WAIT_RESOURCE, RUNNING, CHECKING, CHECKING_CONDITION, FAILURE, and SUCCESS. The value NOT_RUN indicates that the instance is not run. The value WAIT_TIME indicates that the instance is waiting to be run. The value WAIT_RESOURCE indicates that the instance is waiting for resources. The value RUNNING indicates that the instance is running. The value CHECKING indicates that data quality is being checked for the instance. The value CHECKING_CONDITION indicates that branch conditions are being checked for the instance. The value FAILURE indicates that the instance fails to run. The value SUCCESS indicates that the instance is run.
        shared_ptr<string> status_ {};
      };

      class BlockInstance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BlockInstance& obj) { 
          DARABONBA_PTR_TO_JSON(EndCast, endCast_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, BlockInstance& obj) { 
          DARABONBA_PTR_FROM_JSON(EndCast, endCast_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        BlockInstance() = default ;
        BlockInstance(const BlockInstance &) = default ;
        BlockInstance(BlockInstance &&) = default ;
        BlockInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BlockInstance() = default ;
        BlockInstance& operator=(const BlockInstance &) = default ;
        BlockInstance& operator=(BlockInstance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endCast_ == nullptr
        && this->finishTime_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->nodeName_ == nullptr && this->owner_ == nullptr
        && this->projectId_ == nullptr && this->status_ == nullptr; };
        // endCast Field Functions 
        bool hasEndCast() const { return this->endCast_ != nullptr;};
        void deleteEndCast() { this->endCast_ = nullptr;};
        inline int64_t getEndCast() const { DARABONBA_PTR_GET_DEFAULT(endCast_, 0L) };
        inline BlockInstance& setEndCast(int64_t endCast) { DARABONBA_PTR_SET_VALUE(endCast_, endCast) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline BlockInstance& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
        inline BlockInstance& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
        inline BlockInstance& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline BlockInstance& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline BlockInstance& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectId Field Functions 
        bool hasProjectId() const { return this->projectId_ != nullptr;};
        void deleteProjectId() { this->projectId_ = nullptr;};
        inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
        inline BlockInstance& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BlockInstance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The timestamp of the predicted time when the instance finished running.
        shared_ptr<int64_t> endCast_ {};
        // The timestamp of the actual time when the instance finished running.
        shared_ptr<int64_t> finishTime_ {};
        // The ID of the instance.
        shared_ptr<int64_t> instanceId_ {};
        // The ID of the node.
        shared_ptr<int64_t> nodeId_ {};
        // The name of the node.
        shared_ptr<string> nodeName_ {};
        // The ID of the Alibaba Cloud account used by the node owner.
        shared_ptr<string> owner_ {};
        // The ID of the workspace to which the node belongs.
        shared_ptr<int64_t> projectId_ {};
        // The status of the instance. Valid values: NOT_RUN, WAIT_TIME, WAIT_RESOURCE, RUNNING, CHECKING, CHECKING_CONDITION, FAILURE, and SUCCESS. The value NOT_RUN indicates that the instance is not run. The value WAIT_TIME indicates that the instance is waiting to be run. The value WAIT_RESOURCE indicates that the instance is waiting for resources. The value RUNNING indicates that the instance is running. The value CHECKING indicates that data quality is being checked for the instance. The value CHECKING_CONDITION indicates that branch conditions are being checked for the instance. The value FAILURE indicates that the instance fails to run. The value SUCCESS indicates that the instance is run.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->baselineId_ == nullptr
        && this->baselineName_ == nullptr && this->bizdate_ == nullptr && this->blockInstance_ == nullptr && this->buffer_ == nullptr && this->endCast_ == nullptr
        && this->expTime_ == nullptr && this->finishStatus_ == nullptr && this->finishTime_ == nullptr && this->inGroupId_ == nullptr && this->lastInstance_ == nullptr
        && this->owner_ == nullptr && this->priority_ == nullptr && this->projectId_ == nullptr && this->slaTime_ == nullptr && this->status_ == nullptr; };
      // baselineId Field Functions 
      bool hasBaselineId() const { return this->baselineId_ != nullptr;};
      void deleteBaselineId() { this->baselineId_ = nullptr;};
      inline int64_t getBaselineId() const { DARABONBA_PTR_GET_DEFAULT(baselineId_, 0L) };
      inline Data& setBaselineId(int64_t baselineId) { DARABONBA_PTR_SET_VALUE(baselineId_, baselineId) };


      // baselineName Field Functions 
      bool hasBaselineName() const { return this->baselineName_ != nullptr;};
      void deleteBaselineName() { this->baselineName_ = nullptr;};
      inline string getBaselineName() const { DARABONBA_PTR_GET_DEFAULT(baselineName_, "") };
      inline Data& setBaselineName(string baselineName) { DARABONBA_PTR_SET_VALUE(baselineName_, baselineName) };


      // bizdate Field Functions 
      bool hasBizdate() const { return this->bizdate_ != nullptr;};
      void deleteBizdate() { this->bizdate_ = nullptr;};
      inline int64_t getBizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
      inline Data& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


      // blockInstance Field Functions 
      bool hasBlockInstance() const { return this->blockInstance_ != nullptr;};
      void deleteBlockInstance() { this->blockInstance_ = nullptr;};
      inline const Data::BlockInstance & getBlockInstance() const { DARABONBA_PTR_GET_CONST(blockInstance_, Data::BlockInstance) };
      inline Data::BlockInstance getBlockInstance() { DARABONBA_PTR_GET(blockInstance_, Data::BlockInstance) };
      inline Data& setBlockInstance(const Data::BlockInstance & blockInstance) { DARABONBA_PTR_SET_VALUE(blockInstance_, blockInstance) };
      inline Data& setBlockInstance(Data::BlockInstance && blockInstance) { DARABONBA_PTR_SET_RVALUE(blockInstance_, blockInstance) };


      // buffer Field Functions 
      bool hasBuffer() const { return this->buffer_ != nullptr;};
      void deleteBuffer() { this->buffer_ = nullptr;};
      inline float getBuffer() const { DARABONBA_PTR_GET_DEFAULT(buffer_, 0.0) };
      inline Data& setBuffer(float buffer) { DARABONBA_PTR_SET_VALUE(buffer_, buffer) };


      // endCast Field Functions 
      bool hasEndCast() const { return this->endCast_ != nullptr;};
      void deleteEndCast() { this->endCast_ = nullptr;};
      inline int64_t getEndCast() const { DARABONBA_PTR_GET_DEFAULT(endCast_, 0L) };
      inline Data& setEndCast(int64_t endCast) { DARABONBA_PTR_SET_VALUE(endCast_, endCast) };


      // expTime Field Functions 
      bool hasExpTime() const { return this->expTime_ != nullptr;};
      void deleteExpTime() { this->expTime_ = nullptr;};
      inline int64_t getExpTime() const { DARABONBA_PTR_GET_DEFAULT(expTime_, 0L) };
      inline Data& setExpTime(int64_t expTime) { DARABONBA_PTR_SET_VALUE(expTime_, expTime) };


      // finishStatus Field Functions 
      bool hasFinishStatus() const { return this->finishStatus_ != nullptr;};
      void deleteFinishStatus() { this->finishStatus_ = nullptr;};
      inline string getFinishStatus() const { DARABONBA_PTR_GET_DEFAULT(finishStatus_, "") };
      inline Data& setFinishStatus(string finishStatus) { DARABONBA_PTR_SET_VALUE(finishStatus_, finishStatus) };


      // finishTime Field Functions 
      bool hasFinishTime() const { return this->finishTime_ != nullptr;};
      void deleteFinishTime() { this->finishTime_ = nullptr;};
      inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
      inline Data& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


      // inGroupId Field Functions 
      bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
      void deleteInGroupId() { this->inGroupId_ = nullptr;};
      inline int32_t getInGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
      inline Data& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


      // lastInstance Field Functions 
      bool hasLastInstance() const { return this->lastInstance_ != nullptr;};
      void deleteLastInstance() { this->lastInstance_ = nullptr;};
      inline const Data::LastInstance & getLastInstance() const { DARABONBA_PTR_GET_CONST(lastInstance_, Data::LastInstance) };
      inline Data::LastInstance getLastInstance() { DARABONBA_PTR_GET(lastInstance_, Data::LastInstance) };
      inline Data& setLastInstance(const Data::LastInstance & lastInstance) { DARABONBA_PTR_SET_VALUE(lastInstance_, lastInstance) };
      inline Data& setLastInstance(Data::LastInstance && lastInstance) { DARABONBA_PTR_SET_RVALUE(lastInstance_, lastInstance) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline Data& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // projectId Field Functions 
      bool hasProjectId() const { return this->projectId_ != nullptr;};
      void deleteProjectId() { this->projectId_ = nullptr;};
      inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
      inline Data& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


      // slaTime Field Functions 
      bool hasSlaTime() const { return this->slaTime_ != nullptr;};
      void deleteSlaTime() { this->slaTime_ = nullptr;};
      inline int64_t getSlaTime() const { DARABONBA_PTR_GET_DEFAULT(slaTime_, 0L) };
      inline Data& setSlaTime(int64_t slaTime) { DARABONBA_PTR_SET_VALUE(slaTime_, slaTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the baseline.
      shared_ptr<int64_t> baselineId_ {};
      // The name of the baseline.
      shared_ptr<string> baselineName_ {};
      // The data timestamp of the baseline instance.
      shared_ptr<int64_t> bizdate_ {};
      // The information about the key instance.
      shared_ptr<Data::BlockInstance> blockInstance_ {};
      // The margin of the baseline instance. Unit: seconds.
      shared_ptr<float> buffer_ {};
      // The timestamp of the predicted time when the baseline instance finished running.
      shared_ptr<int64_t> endCast_ {};
      // The timestamp of the alerting time of the baseline instance.
      shared_ptr<int64_t> expTime_ {};
      // The status of the baseline instance. Valid values: UNFINISH and FINISH. The value UNFINISH indicates that the baseline instance is still running. The value FINISH indicates that the baseline instance finishes running.
      shared_ptr<string> finishStatus_ {};
      // The timestamp of the actual time when the baseline instance finished running. This parameter is returned if the value of the FinishStatus parameter is FINISH.
      shared_ptr<int64_t> finishTime_ {};
      // The ID of the scheduling cycle of the baseline instance. For a baseline instance that is scheduled by day, the value of this parameter is 1. For a baseline instance that is scheduled by hour, the value of this parameter ranges from 1 to 24.
      shared_ptr<int32_t> inGroupId_ {};
      // The information about the last generated instance.
      shared_ptr<Data::LastInstance> lastInstance_ {};
      // The ID of the Alibaba Cloud account used by the baseline owner. Multiple IDs are separated by commas (,).
      shared_ptr<string> owner_ {};
      // The priority of the baseline. Valid values: 1, 2, 5, 7, and 8.
      shared_ptr<int32_t> priority_ {};
      // The ID of the workspace to which the baseline belongs.
      shared_ptr<int64_t> projectId_ {};
      // The timestamp of the committed completion time of the baseline instance.
      shared_ptr<int64_t> slaTime_ {};
      // The status of the baseline. Valid values: ERROR, SAFE, DANGEROUS, and OVER. The value ERROR indicates that no nodes are associated with the baseline, or all nodes associated with the baseline are suspended. The value SAFE indicates that nodes finish running before the alerting time. The value DANGEROUS indicates that nodes are still running after the alerting time but before the committed completion time. The value OVER indicates that nodes are still running after the committed completion time.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBaselineStatusResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBaselineStatusResponseBody::Data) };
    inline GetBaselineStatusResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBaselineStatusResponseBody::Data) };
    inline GetBaselineStatusResponseBody& setData(const GetBaselineStatusResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBaselineStatusResponseBody& setData(GetBaselineStatusResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetBaselineStatusResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetBaselineStatusResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetBaselineStatusResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBaselineStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetBaselineStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the baseline instance.
    shared_ptr<GetBaselineStatusResponseBody::Data> data_ {};
    // The error code returned.
    shared_ptr<string> errorCode_ {};
    // The error message returned.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request. You can use the ID to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
