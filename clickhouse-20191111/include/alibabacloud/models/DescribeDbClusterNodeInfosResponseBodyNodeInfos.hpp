// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODEINFOSRESPONSEBODYNODEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODEINFOSRESPONSEBODYNODEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterNodeInfosResponseBodyNodeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNodeInfosResponseBodyNodeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FailoverTesting, failoverTesting_);
      DARABONBA_PTR_TO_JSON(NodeIp, nodeIp_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(ReplicaId, replicaId_);
      DARABONBA_PTR_TO_JSON(ShardId, shardId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNodeInfosResponseBodyNodeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FailoverTesting, failoverTesting_);
      DARABONBA_PTR_FROM_JSON(NodeIp, nodeIp_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(ReplicaId, replicaId_);
      DARABONBA_PTR_FROM_JSON(ShardId, shardId_);
    };
    DescribeDBClusterNodeInfosResponseBodyNodeInfos() = default ;
    DescribeDBClusterNodeInfosResponseBodyNodeInfos(const DescribeDBClusterNodeInfosResponseBodyNodeInfos &) = default ;
    DescribeDBClusterNodeInfosResponseBodyNodeInfos(DescribeDBClusterNodeInfosResponseBodyNodeInfos &&) = default ;
    DescribeDBClusterNodeInfosResponseBodyNodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNodeInfosResponseBodyNodeInfos() = default ;
    DescribeDBClusterNodeInfosResponseBodyNodeInfos& operator=(const DescribeDBClusterNodeInfosResponseBodyNodeInfos &) = default ;
    DescribeDBClusterNodeInfosResponseBodyNodeInfos& operator=(DescribeDBClusterNodeInfosResponseBodyNodeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failoverTesting_ == nullptr
        && return this->nodeIp_ == nullptr && return this->nodeName_ == nullptr && return this->replicaId_ == nullptr && return this->shardId_ == nullptr; };
    // failoverTesting Field Functions 
    bool hasFailoverTesting() const { return this->failoverTesting_ != nullptr;};
    void deleteFailoverTesting() { this->failoverTesting_ = nullptr;};
    inline bool failoverTesting() const { DARABONBA_PTR_GET_DEFAULT(failoverTesting_, false) };
    inline DescribeDBClusterNodeInfosResponseBodyNodeInfos& setFailoverTesting(bool failoverTesting) { DARABONBA_PTR_SET_VALUE(failoverTesting_, failoverTesting) };


    // nodeIp Field Functions 
    bool hasNodeIp() const { return this->nodeIp_ != nullptr;};
    void deleteNodeIp() { this->nodeIp_ = nullptr;};
    inline string nodeIp() const { DARABONBA_PTR_GET_DEFAULT(nodeIp_, "") };
    inline DescribeDBClusterNodeInfosResponseBodyNodeInfos& setNodeIp(string nodeIp) { DARABONBA_PTR_SET_VALUE(nodeIp_, nodeIp) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeDBClusterNodeInfosResponseBodyNodeInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // replicaId Field Functions 
    bool hasReplicaId() const { return this->replicaId_ != nullptr;};
    void deleteReplicaId() { this->replicaId_ = nullptr;};
    inline string replicaId() const { DARABONBA_PTR_GET_DEFAULT(replicaId_, "") };
    inline DescribeDBClusterNodeInfosResponseBodyNodeInfos& setReplicaId(string replicaId) { DARABONBA_PTR_SET_VALUE(replicaId_, replicaId) };


    // shardId Field Functions 
    bool hasShardId() const { return this->shardId_ != nullptr;};
    void deleteShardId() { this->shardId_ = nullptr;};
    inline string shardId() const { DARABONBA_PTR_GET_DEFAULT(shardId_, "") };
    inline DescribeDBClusterNodeInfosResponseBodyNodeInfos& setShardId(string shardId) { DARABONBA_PTR_SET_VALUE(shardId_, shardId) };


  protected:
    std::shared_ptr<bool> failoverTesting_ = nullptr;
    std::shared_ptr<string> nodeIp_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> replicaId_ = nullptr;
    std::shared_ptr<string> shardId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
