// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCEREQUESTDBPROXYNODES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBPROXYINSTANCEREQUESTDBPROXYNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBProxyInstanceRequestDBProxyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBProxyInstanceRequestDBProxyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(nodeCounts, nodeCounts_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBProxyInstanceRequestDBProxyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(nodeCounts, nodeCounts_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    ModifyDBProxyInstanceRequestDBProxyNodes() = default ;
    ModifyDBProxyInstanceRequestDBProxyNodes(const ModifyDBProxyInstanceRequestDBProxyNodes &) = default ;
    ModifyDBProxyInstanceRequestDBProxyNodes(ModifyDBProxyInstanceRequestDBProxyNodes &&) = default ;
    ModifyDBProxyInstanceRequestDBProxyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBProxyInstanceRequestDBProxyNodes() = default ;
    ModifyDBProxyInstanceRequestDBProxyNodes& operator=(const ModifyDBProxyInstanceRequestDBProxyNodes &) = default ;
    ModifyDBProxyInstanceRequestDBProxyNodes& operator=(ModifyDBProxyInstanceRequestDBProxyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCores_ == nullptr
        && return this->nodeCounts_ == nullptr && return this->zoneId_ == nullptr; };
    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline string cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
    inline ModifyDBProxyInstanceRequestDBProxyNodes& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // nodeCounts Field Functions 
    bool hasNodeCounts() const { return this->nodeCounts_ != nullptr;};
    void deleteNodeCounts() { this->nodeCounts_ = nullptr;};
    inline string nodeCounts() const { DARABONBA_PTR_GET_DEFAULT(nodeCounts_, "") };
    inline ModifyDBProxyInstanceRequestDBProxyNodes& setNodeCounts(string nodeCounts) { DARABONBA_PTR_SET_VALUE(nodeCounts_, nodeCounts) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyDBProxyInstanceRequestDBProxyNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of cpu cores for the node, valid values: **1** to **16**.
    // >This parameter is required when selecting **DBProxyNodes**.
    std::shared_ptr<string> cpuCores_ = nullptr;
    // The number of proxy nodes in the availability zone, valid values: **1** to **16**.
    // >This parameter is required when selecting **DBProxyNodes**.
    std::shared_ptr<string> nodeCounts_ = nullptr;
    // The id of the availability zone where the node is located.
    // >This parameter is required when selecting **DBProxyNodes**.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
