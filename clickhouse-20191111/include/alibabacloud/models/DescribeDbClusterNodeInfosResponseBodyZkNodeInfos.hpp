// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODEINFOSRESPONSEBODYZKNODEINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERNODEINFOSRESPONSEBODYZKNODEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeDBClusterNodeInfosResponseBodyZkNodeInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterNodeInfosResponseBodyZkNodeInfos& obj) { 
      DARABONBA_PTR_TO_JSON(FailoverTesting, failoverTesting_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(ReplicaId, replicaId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterNodeInfosResponseBodyZkNodeInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(FailoverTesting, failoverTesting_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(ReplicaId, replicaId_);
    };
    DescribeDBClusterNodeInfosResponseBodyZkNodeInfos() = default ;
    DescribeDBClusterNodeInfosResponseBodyZkNodeInfos(const DescribeDBClusterNodeInfosResponseBodyZkNodeInfos &) = default ;
    DescribeDBClusterNodeInfosResponseBodyZkNodeInfos(DescribeDBClusterNodeInfosResponseBodyZkNodeInfos &&) = default ;
    DescribeDBClusterNodeInfosResponseBodyZkNodeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterNodeInfosResponseBodyZkNodeInfos() = default ;
    DescribeDBClusterNodeInfosResponseBodyZkNodeInfos& operator=(const DescribeDBClusterNodeInfosResponseBodyZkNodeInfos &) = default ;
    DescribeDBClusterNodeInfosResponseBodyZkNodeInfos& operator=(DescribeDBClusterNodeInfosResponseBodyZkNodeInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failoverTesting_ == nullptr
        && return this->nodeName_ == nullptr && return this->replicaId_ == nullptr; };
    // failoverTesting Field Functions 
    bool hasFailoverTesting() const { return this->failoverTesting_ != nullptr;};
    void deleteFailoverTesting() { this->failoverTesting_ = nullptr;};
    inline bool failoverTesting() const { DARABONBA_PTR_GET_DEFAULT(failoverTesting_, false) };
    inline DescribeDBClusterNodeInfosResponseBodyZkNodeInfos& setFailoverTesting(bool failoverTesting) { DARABONBA_PTR_SET_VALUE(failoverTesting_, failoverTesting) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeDBClusterNodeInfosResponseBodyZkNodeInfos& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // replicaId Field Functions 
    bool hasReplicaId() const { return this->replicaId_ != nullptr;};
    void deleteReplicaId() { this->replicaId_ = nullptr;};
    inline string replicaId() const { DARABONBA_PTR_GET_DEFAULT(replicaId_, "") };
    inline DescribeDBClusterNodeInfosResponseBodyZkNodeInfos& setReplicaId(string replicaId) { DARABONBA_PTR_SET_VALUE(replicaId_, replicaId) };


  protected:
    std::shared_ptr<bool> failoverTesting_ = nullptr;
    std::shared_ptr<string> nodeName_ = nullptr;
    std::shared_ptr<string> replicaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
