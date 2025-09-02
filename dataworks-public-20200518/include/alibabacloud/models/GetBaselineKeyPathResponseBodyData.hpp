// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINEKEYPATHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINEKEYPATHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBaselineKeyPathResponseBodyDataRuns.hpp>
#include <alibabacloud/models/GetBaselineKeyPathResponseBodyDataTopics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineKeyPathResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineKeyPathResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PrgType, prgType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Runs, runs_);
      DARABONBA_PTR_TO_JSON(Topics, topics_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaselineKeyPathResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(InGroupId, inGroupId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PrgType, prgType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Runs, runs_);
      DARABONBA_PTR_FROM_JSON(Topics, topics_);
    };
    GetBaselineKeyPathResponseBodyData() = default ;
    GetBaselineKeyPathResponseBodyData(const GetBaselineKeyPathResponseBodyData &) = default ;
    GetBaselineKeyPathResponseBodyData(GetBaselineKeyPathResponseBodyData &&) = default ;
    GetBaselineKeyPathResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineKeyPathResponseBodyData() = default ;
    GetBaselineKeyPathResponseBodyData& operator=(const GetBaselineKeyPathResponseBodyData &) = default ;
    GetBaselineKeyPathResponseBodyData& operator=(GetBaselineKeyPathResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizdate_ != nullptr
        && this->inGroupId_ != nullptr && this->instanceId_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->owner_ != nullptr
        && this->prgType_ != nullptr && this->projectId_ != nullptr && this->runs_ != nullptr && this->topics_ != nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline GetBaselineKeyPathResponseBodyData& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // inGroupId Field Functions 
    bool hasInGroupId() const { return this->inGroupId_ != nullptr;};
    void deleteInGroupId() { this->inGroupId_ = nullptr;};
    inline int32_t inGroupId() const { DARABONBA_PTR_GET_DEFAULT(inGroupId_, 0) };
    inline GetBaselineKeyPathResponseBodyData& setInGroupId(int32_t inGroupId) { DARABONBA_PTR_SET_VALUE(inGroupId_, inGroupId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetBaselineKeyPathResponseBodyData& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetBaselineKeyPathResponseBodyData& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetBaselineKeyPathResponseBodyData& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetBaselineKeyPathResponseBodyData& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // prgType Field Functions 
    bool hasPrgType() const { return this->prgType_ != nullptr;};
    void deletePrgType() { this->prgType_ = nullptr;};
    inline int32_t prgType() const { DARABONBA_PTR_GET_DEFAULT(prgType_, 0) };
    inline GetBaselineKeyPathResponseBodyData& setPrgType(int32_t prgType) { DARABONBA_PTR_SET_VALUE(prgType_, prgType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GetBaselineKeyPathResponseBodyData& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runs Field Functions 
    bool hasRuns() const { return this->runs_ != nullptr;};
    void deleteRuns() { this->runs_ = nullptr;};
    inline const vector<Models::GetBaselineKeyPathResponseBodyDataRuns> & runs() const { DARABONBA_PTR_GET_CONST(runs_, vector<Models::GetBaselineKeyPathResponseBodyDataRuns>) };
    inline vector<Models::GetBaselineKeyPathResponseBodyDataRuns> runs() { DARABONBA_PTR_GET(runs_, vector<Models::GetBaselineKeyPathResponseBodyDataRuns>) };
    inline GetBaselineKeyPathResponseBodyData& setRuns(const vector<Models::GetBaselineKeyPathResponseBodyDataRuns> & runs) { DARABONBA_PTR_SET_VALUE(runs_, runs) };
    inline GetBaselineKeyPathResponseBodyData& setRuns(vector<Models::GetBaselineKeyPathResponseBodyDataRuns> && runs) { DARABONBA_PTR_SET_RVALUE(runs_, runs) };


    // topics Field Functions 
    bool hasTopics() const { return this->topics_ != nullptr;};
    void deleteTopics() { this->topics_ = nullptr;};
    inline const vector<Models::GetBaselineKeyPathResponseBodyDataTopics> & topics() const { DARABONBA_PTR_GET_CONST(topics_, vector<Models::GetBaselineKeyPathResponseBodyDataTopics>) };
    inline vector<Models::GetBaselineKeyPathResponseBodyDataTopics> topics() { DARABONBA_PTR_GET(topics_, vector<Models::GetBaselineKeyPathResponseBodyDataTopics>) };
    inline GetBaselineKeyPathResponseBodyData& setTopics(const vector<Models::GetBaselineKeyPathResponseBodyDataTopics> & topics) { DARABONBA_PTR_SET_VALUE(topics_, topics) };
    inline GetBaselineKeyPathResponseBodyData& setTopics(vector<Models::GetBaselineKeyPathResponseBodyDataTopics> && topics) { DARABONBA_PTR_SET_RVALUE(topics_, topics) };


  protected:
    // The data timestamp of the instance.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The ID of the scheduling cycle of the instance. Valid values: 1 to 288.
    std::shared_ptr<int32_t> inGroupId_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the node owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The type of the node. Valid values: 23, 10, 6, and 99. The value 23 indicates that the node is a Data Integration node. The value 10 indicates that the node is a MaxCompute SQL node. The value 6 indicates that the node is a Shell node. The value 99 indicates that the node is a zero load node.
    std::shared_ptr<int32_t> prgType_ = nullptr;
    // The ID of the workspace to which the node belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The running records of the instance.
    std::shared_ptr<vector<Models::GetBaselineKeyPathResponseBodyDataRuns>> runs_ = nullptr;
    // The information about the events that are associated with the instance.
    std::shared_ptr<vector<Models::GetBaselineKeyPathResponseBodyDataTopics>> topics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
