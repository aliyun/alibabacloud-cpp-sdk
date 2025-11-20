// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONTAINERCLUSTERRESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONTAINERCLUSTERRESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeContainerClusterResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeContainerClusterResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeContainerClusterResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStatus, agentStatus_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribeContainerClusterResponseBodyClusters() = default ;
    DescribeContainerClusterResponseBodyClusters(const DescribeContainerClusterResponseBodyClusters &) = default ;
    DescribeContainerClusterResponseBodyClusters(DescribeContainerClusterResponseBodyClusters &&) = default ;
    DescribeContainerClusterResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeContainerClusterResponseBodyClusters() = default ;
    DescribeContainerClusterResponseBodyClusters& operator=(const DescribeContainerClusterResponseBodyClusters &) = default ;
    DescribeContainerClusterResponseBodyClusters& operator=(DescribeContainerClusterResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStatus_ == nullptr
        && return this->clusterId_ == nullptr && return this->clusterType_ == nullptr && return this->description_ == nullptr && return this->identifier_ == nullptr && return this->name_ == nullptr
        && return this->networkType_ == nullptr && return this->token_ == nullptr; };
    // agentStatus Field Functions 
    bool hasAgentStatus() const { return this->agentStatus_ != nullptr;};
    void deleteAgentStatus() { this->agentStatus_ = nullptr;};
    inline string agentStatus() const { DARABONBA_PTR_GET_DEFAULT(agentStatus_, "") };
    inline DescribeContainerClusterResponseBodyClusters& setAgentStatus(string agentStatus) { DARABONBA_PTR_SET_VALUE(agentStatus_, agentStatus) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeContainerClusterResponseBodyClusters& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline DescribeContainerClusterResponseBodyClusters& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeContainerClusterResponseBodyClusters& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeContainerClusterResponseBodyClusters& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeContainerClusterResponseBodyClusters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeContainerClusterResponseBodyClusters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeContainerClusterResponseBodyClusters& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    // The status of the client. Valid values:
    // 
    // *   **MISS**: The client is disconnected.
    // *   **UNKNOWN**: The client is in an unknown state.
    // *   **READY**: The client is ready.
    std::shared_ptr<string> agentStatus_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the cluster. Valid value: ACK, which indicates ACK clusters.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The description.
    std::shared_ptr<string> description_ = nullptr;
    // The identifier of the cluster.
    std::shared_ptr<string> identifier_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> name_ = nullptr;
    // The network type of the cluster. Valid values:
    // 
    // *   **CLASSIC**: the classic network
    // *   **VPC**: virtual private cloud (VPC)
    std::shared_ptr<string> networkType_ = nullptr;
    // The token that is used to register the Hybrid Backup Recovery (HBR) client in the cluster.
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
