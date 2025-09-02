// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOPTENERRORTIMESINSTANCERESPONSEBODYINSTANCEERRORRANKERRORRANK_HPP_
#define ALIBABACLOUD_MODELS_TOPTENERRORTIMESINSTANCERESPONSEBODYINSTANCEERRORRANKERRORRANK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProgramType, programType_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank() = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank(const TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank &) = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank(TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank &&) = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank() = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& operator=(const TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank &) = default ;
    TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& operator=(TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->owner_ != nullptr && this->programType_ != nullptr && this->projectId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline int32_t programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, 0) };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& setProgramType(int32_t programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline TopTenErrorTimesInstanceResponseBodyInstanceErrorRankErrorRank& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The number of errors that occurred on the node.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the node owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The type of the node. Valid values: 6 (Shell), 10 (ODPS SQL), 11 (ODPS MR), 23 (Data Integration), 24 (ODPS Script), 99 (zero load), 221 (PyODPS 2), 225 (ODPS Spark), 227 (EMR Hive), 228 (EMR Spark), 229 (EMR Spark SQL), 230 (EMR MR), 239 (OSS object inspection), 257 (EMR Shell), 258 (EMR Spark Shell), 259 (EMR Presto), 260 (EMR Impala), 900 (real-time synchronization), 1089 (cross-tenant collaboration), 1091 (Hologres development), 1093 (Hologres SQL), 1100 (assignment), and 1221 (PyODPS 3)
    std::shared_ptr<int32_t> programType_ = nullptr;
    // The DataWorks workspace ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
