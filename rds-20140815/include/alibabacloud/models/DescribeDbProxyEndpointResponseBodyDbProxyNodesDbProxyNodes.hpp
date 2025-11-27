// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODYDBPROXYNODESDBPROXYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBPROXYENDPOINTRESPONSEBODYDBPROXYNODESDBPROXYNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes() = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes(const DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes &) = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes(DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes &&) = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes() = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes& operator=(const DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes &) = default ;
    DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes& operator=(DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCores_ == nullptr
        && return this->nodeId_ == nullptr && return this->zoneId_ == nullptr; };
    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline string cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
    inline DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDBProxyEndpointResponseBodyDBProxyNodesDBProxyNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of CPU cores of the node.
    std::shared_ptr<string> cpuCores_ = nullptr;
    // The ID of the node in the zone.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The zone ID of the node.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
