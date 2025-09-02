// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TOPTENELAPSEDTIMEINSTANCERESPONSEBODYINSTANCECONSUMETIMERANKCONSUMETIMERANK_HPP_
#define ALIBABACLOUD_MODELS_TOPTENELAPSEDTIMEINSTANCERESPONSEBODYINSTANCECONSUMETIMERANKCONSUMETIMERANK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& obj) { 
      DARABONBA_PTR_TO_JSON(BusinessDate, businessDate_);
      DARABONBA_PTR_TO_JSON(Consumed, consumed_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(ProgramType, programType_);
    };
    friend void from_json(const Darabonba::Json& j, TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& obj) { 
      DARABONBA_PTR_FROM_JSON(BusinessDate, businessDate_);
      DARABONBA_PTR_FROM_JSON(Consumed, consumed_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(ProgramType, programType_);
    };
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank() = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank(const TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank &) = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank(TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank &&) = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank() = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& operator=(const TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank &) = default ;
    TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& operator=(TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->businessDate_ != nullptr
        && this->consumed_ != nullptr && this->instanceId_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->owner_ != nullptr
        && this->programType_ != nullptr; };
    // businessDate Field Functions 
    bool hasBusinessDate() const { return this->businessDate_ != nullptr;};
    void deleteBusinessDate() { this->businessDate_ = nullptr;};
    inline int64_t businessDate() const { DARABONBA_PTR_GET_DEFAULT(businessDate_, 0L) };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setBusinessDate(int64_t businessDate) { DARABONBA_PTR_SET_VALUE(businessDate_, businessDate) };


    // consumed Field Functions 
    bool hasConsumed() const { return this->consumed_ != nullptr;};
    void deleteConsumed() { this->consumed_ = nullptr;};
    inline int64_t consumed() const { DARABONBA_PTR_GET_DEFAULT(consumed_, 0L) };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setConsumed(int64_t consumed) { DARABONBA_PTR_SET_VALUE(consumed_, consumed) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // programType Field Functions 
    bool hasProgramType() const { return this->programType_ != nullptr;};
    void deleteProgramType() { this->programType_ = nullptr;};
    inline int32_t programType() const { DARABONBA_PTR_GET_DEFAULT(programType_, 0) };
    inline TopTenElapsedTimeInstanceResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setProgramType(int32_t programType) { DARABONBA_PTR_SET_VALUE(programType_, programType) };


  protected:
    // The data timestamp of the instance.
    std::shared_ptr<int64_t> businessDate_ = nullptr;
    // The run time length of the instance. Unit: seconds.
    std::shared_ptr<int64_t> consumed_ = nullptr;
    // The instance ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the node owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The type of the node. Valid values: 6 (Shell), 10 (ODPS SQL), 11 (ODPS MR), 23 (Data Integration), 24 (ODPS Script), 99 (zero load), 221 (PyODPS 2), 225 (ODPS Spark), 227 (EMR Hive), 228 (EMR Spark), 229 (EMR Spark SQL), 230 (EMR MR), 239 (OSS object inspection), 257 (EMR Shell), 258 (EMR Spark Shell), 259 (EMR Presto), 260 (EMR Impala), 900 (real-time synchronization), 1089 (cross-tenant collaboration), 1091 (Hologres development), 1093 (Hologres SQL), 1100 (assignment), and 1221 (PyODPS 3)
    std::shared_ptr<int32_t> programType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
