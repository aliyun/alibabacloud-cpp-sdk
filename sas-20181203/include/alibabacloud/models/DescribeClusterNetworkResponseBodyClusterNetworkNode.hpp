// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODYCLUSTERNETWORKNODE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNETWORKRESPONSEBODYCLUSTERNETWORKNODE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterNetworkResponseBodyClusterNetworkNode : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNetworkResponseBodyClusterNetworkNode& obj) { 
      DARABONBA_PTR_TO_JSON(CnnfSwitch, cnnfSwitch_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InterceptionType, interceptionType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NetTopoSwitch, netTopoSwitch_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNetworkResponseBodyClusterNetworkNode& obj) { 
      DARABONBA_PTR_FROM_JSON(CnnfSwitch, cnnfSwitch_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InterceptionType, interceptionType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NetTopoSwitch, netTopoSwitch_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeClusterNetworkResponseBodyClusterNetworkNode() = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkNode(const DescribeClusterNetworkResponseBodyClusterNetworkNode &) = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkNode(DescribeClusterNetworkResponseBodyClusterNetworkNode &&) = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkNode(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNetworkResponseBodyClusterNetworkNode() = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkNode& operator=(const DescribeClusterNetworkResponseBodyClusterNetworkNode &) = default ;
    DescribeClusterNetworkResponseBodyClusterNetworkNode& operator=(DescribeClusterNetworkResponseBodyClusterNetworkNode &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cnnfSwitch_ != nullptr
        && this->id_ != nullptr && this->interceptionType_ != nullptr && this->name_ != nullptr && this->netTopoSwitch_ != nullptr && this->riskLevel_ != nullptr
        && this->type_ != nullptr; };
    // cnnfSwitch Field Functions 
    bool hasCnnfSwitch() const { return this->cnnfSwitch_ != nullptr;};
    void deleteCnnfSwitch() { this->cnnfSwitch_ = nullptr;};
    inline int32_t cnnfSwitch() const { DARABONBA_PTR_GET_DEFAULT(cnnfSwitch_, 0) };
    inline DescribeClusterNetworkResponseBodyClusterNetworkNode& setCnnfSwitch(int32_t cnnfSwitch) { DARABONBA_PTR_SET_VALUE(cnnfSwitch_, cnnfSwitch) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkNode& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // interceptionType Field Functions 
    bool hasInterceptionType() const { return this->interceptionType_ != nullptr;};
    void deleteInterceptionType() { this->interceptionType_ = nullptr;};
    inline int32_t interceptionType() const { DARABONBA_PTR_GET_DEFAULT(interceptionType_, 0) };
    inline DescribeClusterNetworkResponseBodyClusterNetworkNode& setInterceptionType(int32_t interceptionType) { DARABONBA_PTR_SET_VALUE(interceptionType_, interceptionType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkNode& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // netTopoSwitch Field Functions 
    bool hasNetTopoSwitch() const { return this->netTopoSwitch_ != nullptr;};
    void deleteNetTopoSwitch() { this->netTopoSwitch_ = nullptr;};
    inline string netTopoSwitch() const { DARABONBA_PTR_GET_DEFAULT(netTopoSwitch_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkNode& setNetTopoSwitch(string netTopoSwitch) { DARABONBA_PTR_SET_VALUE(netTopoSwitch_, netTopoSwitch) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkNode& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeClusterNetworkResponseBodyClusterNetworkNode& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The status of the microsegmentation switch. Valid values:
    // 
    // *   **0**: off.
    // *   **1**: on.
    std::shared_ptr<int32_t> cnnfSwitch_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> id_ = nullptr;
    // The network type. Valid values:
    // 
    // *   **0**: classic network.
    // *   **1**: virtual private cloud (VPC).
    std::shared_ptr<int32_t> interceptionType_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the network topology switch. Valid values:
    // 
    // *   **ON**
    // *   **OFF**
    std::shared_ptr<string> netTopoSwitch_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **3**: high.
    // *   **2**: medium.
    // *   **1**: low.
    // *   **0**: secure.
    // *   **-1**: unknown.
    std::shared_ptr<string> riskLevel_ = nullptr;
    // The type of the node. Valid values:
    // 
    // *   **cluster**: a cluster.
    // *   **internet**: a network node outside the cluster.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
