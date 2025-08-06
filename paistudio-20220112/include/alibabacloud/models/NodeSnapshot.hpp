// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODESNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_NODESNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/NodeSnapshotWorkloads.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class NodeSnapshot : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NodeSnapshot& obj) { 
      DARABONBA_PTR_TO_JSON(AncestorQuotaWorkloadNum, ancestorQuotaWorkloadNum_);
      DARABONBA_PTR_TO_JSON(DescendantQuotaWorkloadNum, descendantQuotaWorkloadNum_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_TO_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_TO_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_TO_JSON(SelfQuotaWorkloadNum, selfQuotaWorkloadNum_);
      DARABONBA_PTR_TO_JSON(WorkloadNum, workloadNum_);
      DARABONBA_PTR_TO_JSON(Workloads, workloads_);
    };
    friend void from_json(const Darabonba::Json& j, NodeSnapshot& obj) { 
      DARABONBA_PTR_FROM_JSON(AncestorQuotaWorkloadNum, ancestorQuotaWorkloadNum_);
      DARABONBA_PTR_FROM_JSON(DescendantQuotaWorkloadNum, descendantQuotaWorkloadNum_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(RequestCPU, requestCPU_);
      DARABONBA_PTR_FROM_JSON(RequestGPU, requestGPU_);
      DARABONBA_PTR_FROM_JSON(RequestMemory, requestMemory_);
      DARABONBA_PTR_FROM_JSON(SelfQuotaWorkloadNum, selfQuotaWorkloadNum_);
      DARABONBA_PTR_FROM_JSON(WorkloadNum, workloadNum_);
      DARABONBA_PTR_FROM_JSON(Workloads, workloads_);
    };
    NodeSnapshot() = default ;
    NodeSnapshot(const NodeSnapshot &) = default ;
    NodeSnapshot(NodeSnapshot &&) = default ;
    NodeSnapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NodeSnapshot() = default ;
    NodeSnapshot& operator=(const NodeSnapshot &) = default ;
    NodeSnapshot& operator=(NodeSnapshot &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ancestorQuotaWorkloadNum_ != nullptr
        && this->descendantQuotaWorkloadNum_ != nullptr && this->nodeName_ != nullptr && this->requestCPU_ != nullptr && this->requestGPU_ != nullptr && this->requestMemory_ != nullptr
        && this->selfQuotaWorkloadNum_ != nullptr && this->workloadNum_ != nullptr && this->workloads_ != nullptr; };
    // ancestorQuotaWorkloadNum Field Functions 
    bool hasAncestorQuotaWorkloadNum() const { return this->ancestorQuotaWorkloadNum_ != nullptr;};
    void deleteAncestorQuotaWorkloadNum() { this->ancestorQuotaWorkloadNum_ = nullptr;};
    inline int32_t ancestorQuotaWorkloadNum() const { DARABONBA_PTR_GET_DEFAULT(ancestorQuotaWorkloadNum_, 0) };
    inline NodeSnapshot& setAncestorQuotaWorkloadNum(int32_t ancestorQuotaWorkloadNum) { DARABONBA_PTR_SET_VALUE(ancestorQuotaWorkloadNum_, ancestorQuotaWorkloadNum) };


    // descendantQuotaWorkloadNum Field Functions 
    bool hasDescendantQuotaWorkloadNum() const { return this->descendantQuotaWorkloadNum_ != nullptr;};
    void deleteDescendantQuotaWorkloadNum() { this->descendantQuotaWorkloadNum_ = nullptr;};
    inline int32_t descendantQuotaWorkloadNum() const { DARABONBA_PTR_GET_DEFAULT(descendantQuotaWorkloadNum_, 0) };
    inline NodeSnapshot& setDescendantQuotaWorkloadNum(int32_t descendantQuotaWorkloadNum) { DARABONBA_PTR_SET_VALUE(descendantQuotaWorkloadNum_, descendantQuotaWorkloadNum) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline NodeSnapshot& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline string requestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, "") };
    inline NodeSnapshot& setRequestCPU(string requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestGPU Field Functions 
    bool hasRequestGPU() const { return this->requestGPU_ != nullptr;};
    void deleteRequestGPU() { this->requestGPU_ = nullptr;};
    inline string requestGPU() const { DARABONBA_PTR_GET_DEFAULT(requestGPU_, "") };
    inline NodeSnapshot& setRequestGPU(string requestGPU) { DARABONBA_PTR_SET_VALUE(requestGPU_, requestGPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string requestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline NodeSnapshot& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // selfQuotaWorkloadNum Field Functions 
    bool hasSelfQuotaWorkloadNum() const { return this->selfQuotaWorkloadNum_ != nullptr;};
    void deleteSelfQuotaWorkloadNum() { this->selfQuotaWorkloadNum_ = nullptr;};
    inline int32_t selfQuotaWorkloadNum() const { DARABONBA_PTR_GET_DEFAULT(selfQuotaWorkloadNum_, 0) };
    inline NodeSnapshot& setSelfQuotaWorkloadNum(int32_t selfQuotaWorkloadNum) { DARABONBA_PTR_SET_VALUE(selfQuotaWorkloadNum_, selfQuotaWorkloadNum) };


    // workloadNum Field Functions 
    bool hasWorkloadNum() const { return this->workloadNum_ != nullptr;};
    void deleteWorkloadNum() { this->workloadNum_ = nullptr;};
    inline int32_t workloadNum() const { DARABONBA_PTR_GET_DEFAULT(workloadNum_, 0) };
    inline NodeSnapshot& setWorkloadNum(int32_t workloadNum) { DARABONBA_PTR_SET_VALUE(workloadNum_, workloadNum) };


    // workloads Field Functions 
    bool hasWorkloads() const { return this->workloads_ != nullptr;};
    void deleteWorkloads() { this->workloads_ = nullptr;};
    inline const vector<NodeSnapshotWorkloads> & workloads() const { DARABONBA_PTR_GET_CONST(workloads_, vector<NodeSnapshotWorkloads>) };
    inline vector<NodeSnapshotWorkloads> workloads() { DARABONBA_PTR_GET(workloads_, vector<NodeSnapshotWorkloads>) };
    inline NodeSnapshot& setWorkloads(const vector<NodeSnapshotWorkloads> & workloads) { DARABONBA_PTR_SET_VALUE(workloads_, workloads) };
    inline NodeSnapshot& setWorkloads(vector<NodeSnapshotWorkloads> && workloads) { DARABONBA_PTR_SET_RVALUE(workloads_, workloads) };


  protected:
    std::shared_ptr<int32_t> ancestorQuotaWorkloadNum_ = nullptr;
    std::shared_ptr<int32_t> descendantQuotaWorkloadNum_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> requestCPU_ = nullptr;
    std::shared_ptr<string> requestGPU_ = nullptr;
    std::shared_ptr<string> requestMemory_ = nullptr;
    std::shared_ptr<int32_t> selfQuotaWorkloadNum_ = nullptr;
    std::shared_ptr<int32_t> workloadNum_ = nullptr;
    std::shared_ptr<vector<NodeSnapshotWorkloads>> workloads_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
