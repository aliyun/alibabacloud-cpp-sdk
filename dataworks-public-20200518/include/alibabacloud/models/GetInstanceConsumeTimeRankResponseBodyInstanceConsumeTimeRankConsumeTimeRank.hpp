// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCECONSUMETIMERANKRESPONSEBODYINSTANCECONSUMETIMERANKCONSUMETIMERANK_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCECONSUMETIMERANKRESPONSEBODYINSTANCECONSUMETIMERANKCONSUMETIMERANK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& obj) { 
      DARABONBA_PTR_TO_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_TO_JSON(Consumed, consumed_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PrgType, prgType_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& obj) { 
      DARABONBA_PTR_FROM_JSON(Bizdate, bizdate_);
      DARABONBA_PTR_FROM_JSON(Consumed, consumed_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PrgType, prgType_);
    };
    GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank() = default ;
    GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank(const GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank &) = default ;
    GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank(GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank &&) = default ;
    GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank() = default ;
    GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& operator=(const GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank &) = default ;
    GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& operator=(GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizdate_ != nullptr
        && this->consumed_ != nullptr && this->instanceId_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->owner_ != nullptr
        && this->prgType_ != nullptr; };
    // bizdate Field Functions 
    bool hasBizdate() const { return this->bizdate_ != nullptr;};
    void deleteBizdate() { this->bizdate_ = nullptr;};
    inline int64_t bizdate() const { DARABONBA_PTR_GET_DEFAULT(bizdate_, 0L) };
    inline GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setBizdate(int64_t bizdate) { DARABONBA_PTR_SET_VALUE(bizdate_, bizdate) };


    // consumed Field Functions 
    bool hasConsumed() const { return this->consumed_ != nullptr;};
    void deleteConsumed() { this->consumed_ = nullptr;};
    inline int64_t consumed() const { DARABONBA_PTR_GET_DEFAULT(consumed_, 0L) };
    inline GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setConsumed(int64_t consumed) { DARABONBA_PTR_SET_VALUE(consumed_, consumed) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // prgType Field Functions 
    bool hasPrgType() const { return this->prgType_ != nullptr;};
    void deletePrgType() { this->prgType_ = nullptr;};
    inline int32_t prgType() const { DARABONBA_PTR_GET_DEFAULT(prgType_, 0) };
    inline GetInstanceConsumeTimeRankResponseBodyInstanceConsumeTimeRankConsumeTimeRank& setPrgType(int32_t prgType) { DARABONBA_PTR_SET_VALUE(prgType_, prgType) };


  protected:
    // The data timestamp of the instance.
    std::shared_ptr<int64_t> bizdate_ = nullptr;
    // The running duration of the instance. Unit: seconds.
    std::shared_ptr<int64_t> consumed_ = nullptr;
    // The instance ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the Alibaba Cloud account used by the node owner.
    std::shared_ptr<string> owner_ = nullptr;
    // The type of the node.
    std::shared_ptr<int32_t> prgType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
