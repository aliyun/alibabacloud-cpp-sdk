// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NODESNAPSHOT_HPP_
#define ALIBABACLOUD_MODELS_NODESNAPSHOT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Workloads : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Workloads& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(WorkloadId, workloadId_);
        DARABONBA_PTR_TO_JSON(WorkloadType, workloadType_);
      };
      friend void from_json(const Darabonba::Json& j, Workloads& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(WorkloadId, workloadId_);
        DARABONBA_PTR_FROM_JSON(WorkloadType, workloadType_);
      };
      Workloads() = default ;
      Workloads(const Workloads &) = default ;
      Workloads(Workloads &&) = default ;
      Workloads(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Workloads() = default ;
      Workloads& operator=(const Workloads &) = default ;
      Workloads& operator=(Workloads &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->workloadId_ == nullptr && this->workloadType_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Workloads& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // workloadId Field Functions 
      bool hasWorkloadId() const { return this->workloadId_ != nullptr;};
      void deleteWorkloadId() { this->workloadId_ = nullptr;};
      inline string getWorkloadId() const { DARABONBA_PTR_GET_DEFAULT(workloadId_, "") };
      inline Workloads& setWorkloadId(string workloadId) { DARABONBA_PTR_SET_VALUE(workloadId_, workloadId) };


      // workloadType Field Functions 
      bool hasWorkloadType() const { return this->workloadType_ != nullptr;};
      void deleteWorkloadType() { this->workloadType_ = nullptr;};
      inline string getWorkloadType() const { DARABONBA_PTR_GET_DEFAULT(workloadType_, "") };
      inline Workloads& setWorkloadType(string workloadType) { DARABONBA_PTR_SET_VALUE(workloadType_, workloadType) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> workloadId_ {};
      shared_ptr<string> workloadType_ {};
    };

    virtual bool empty() const override { return this->ancestorQuotaWorkloadNum_ == nullptr
        && this->descendantQuotaWorkloadNum_ == nullptr && this->nodeName_ == nullptr && this->requestCPU_ == nullptr && this->requestGPU_ == nullptr && this->requestMemory_ == nullptr
        && this->selfQuotaWorkloadNum_ == nullptr && this->workloadNum_ == nullptr && this->workloads_ == nullptr; };
    // ancestorQuotaWorkloadNum Field Functions 
    bool hasAncestorQuotaWorkloadNum() const { return this->ancestorQuotaWorkloadNum_ != nullptr;};
    void deleteAncestorQuotaWorkloadNum() { this->ancestorQuotaWorkloadNum_ = nullptr;};
    inline int32_t getAncestorQuotaWorkloadNum() const { DARABONBA_PTR_GET_DEFAULT(ancestorQuotaWorkloadNum_, 0) };
    inline NodeSnapshot& setAncestorQuotaWorkloadNum(int32_t ancestorQuotaWorkloadNum) { DARABONBA_PTR_SET_VALUE(ancestorQuotaWorkloadNum_, ancestorQuotaWorkloadNum) };


    // descendantQuotaWorkloadNum Field Functions 
    bool hasDescendantQuotaWorkloadNum() const { return this->descendantQuotaWorkloadNum_ != nullptr;};
    void deleteDescendantQuotaWorkloadNum() { this->descendantQuotaWorkloadNum_ = nullptr;};
    inline int32_t getDescendantQuotaWorkloadNum() const { DARABONBA_PTR_GET_DEFAULT(descendantQuotaWorkloadNum_, 0) };
    inline NodeSnapshot& setDescendantQuotaWorkloadNum(int32_t descendantQuotaWorkloadNum) { DARABONBA_PTR_SET_VALUE(descendantQuotaWorkloadNum_, descendantQuotaWorkloadNum) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline NodeSnapshot& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // requestCPU Field Functions 
    bool hasRequestCPU() const { return this->requestCPU_ != nullptr;};
    void deleteRequestCPU() { this->requestCPU_ = nullptr;};
    inline string getRequestCPU() const { DARABONBA_PTR_GET_DEFAULT(requestCPU_, "") };
    inline NodeSnapshot& setRequestCPU(string requestCPU) { DARABONBA_PTR_SET_VALUE(requestCPU_, requestCPU) };


    // requestGPU Field Functions 
    bool hasRequestGPU() const { return this->requestGPU_ != nullptr;};
    void deleteRequestGPU() { this->requestGPU_ = nullptr;};
    inline string getRequestGPU() const { DARABONBA_PTR_GET_DEFAULT(requestGPU_, "") };
    inline NodeSnapshot& setRequestGPU(string requestGPU) { DARABONBA_PTR_SET_VALUE(requestGPU_, requestGPU) };


    // requestMemory Field Functions 
    bool hasRequestMemory() const { return this->requestMemory_ != nullptr;};
    void deleteRequestMemory() { this->requestMemory_ = nullptr;};
    inline string getRequestMemory() const { DARABONBA_PTR_GET_DEFAULT(requestMemory_, "") };
    inline NodeSnapshot& setRequestMemory(string requestMemory) { DARABONBA_PTR_SET_VALUE(requestMemory_, requestMemory) };


    // selfQuotaWorkloadNum Field Functions 
    bool hasSelfQuotaWorkloadNum() const { return this->selfQuotaWorkloadNum_ != nullptr;};
    void deleteSelfQuotaWorkloadNum() { this->selfQuotaWorkloadNum_ = nullptr;};
    inline int32_t getSelfQuotaWorkloadNum() const { DARABONBA_PTR_GET_DEFAULT(selfQuotaWorkloadNum_, 0) };
    inline NodeSnapshot& setSelfQuotaWorkloadNum(int32_t selfQuotaWorkloadNum) { DARABONBA_PTR_SET_VALUE(selfQuotaWorkloadNum_, selfQuotaWorkloadNum) };


    // workloadNum Field Functions 
    bool hasWorkloadNum() const { return this->workloadNum_ != nullptr;};
    void deleteWorkloadNum() { this->workloadNum_ = nullptr;};
    inline int32_t getWorkloadNum() const { DARABONBA_PTR_GET_DEFAULT(workloadNum_, 0) };
    inline NodeSnapshot& setWorkloadNum(int32_t workloadNum) { DARABONBA_PTR_SET_VALUE(workloadNum_, workloadNum) };


    // workloads Field Functions 
    bool hasWorkloads() const { return this->workloads_ != nullptr;};
    void deleteWorkloads() { this->workloads_ = nullptr;};
    inline const vector<NodeSnapshot::Workloads> & getWorkloads() const { DARABONBA_PTR_GET_CONST(workloads_, vector<NodeSnapshot::Workloads>) };
    inline vector<NodeSnapshot::Workloads> getWorkloads() { DARABONBA_PTR_GET(workloads_, vector<NodeSnapshot::Workloads>) };
    inline NodeSnapshot& setWorkloads(const vector<NodeSnapshot::Workloads> & workloads) { DARABONBA_PTR_SET_VALUE(workloads_, workloads) };
    inline NodeSnapshot& setWorkloads(vector<NodeSnapshot::Workloads> && workloads) { DARABONBA_PTR_SET_RVALUE(workloads_, workloads) };


  protected:
    shared_ptr<int32_t> ancestorQuotaWorkloadNum_ {};
    shared_ptr<int32_t> descendantQuotaWorkloadNum_ {};
    shared_ptr<string> nodeName_ {};
    shared_ptr<string> requestCPU_ {};
    shared_ptr<string> requestGPU_ {};
    shared_ptr<string> requestMemory_ {};
    shared_ptr<int32_t> selfQuotaWorkloadNum_ {};
    shared_ptr<int32_t> workloadNum_ {};
    shared_ptr<vector<NodeSnapshot::Workloads>> workloads_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
