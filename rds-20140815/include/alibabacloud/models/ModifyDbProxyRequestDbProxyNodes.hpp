// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBPROXYREQUESTDBPROXYNODES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBPROXYREQUESTDBPROXYNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBProxyRequestDBProxyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBProxyRequestDBProxyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(nodeCounts, nodeCounts_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBProxyRequestDBProxyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(cpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(nodeCounts, nodeCounts_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    ModifyDBProxyRequestDBProxyNodes() = default ;
    ModifyDBProxyRequestDBProxyNodes(const ModifyDBProxyRequestDBProxyNodes &) = default ;
    ModifyDBProxyRequestDBProxyNodes(ModifyDBProxyRequestDBProxyNodes &&) = default ;
    ModifyDBProxyRequestDBProxyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBProxyRequestDBProxyNodes() = default ;
    ModifyDBProxyRequestDBProxyNodes& operator=(const ModifyDBProxyRequestDBProxyNodes &) = default ;
    ModifyDBProxyRequestDBProxyNodes& operator=(ModifyDBProxyRequestDBProxyNodes &&) = default ;
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
    inline ModifyDBProxyRequestDBProxyNodes& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // nodeCounts Field Functions 
    bool hasNodeCounts() const { return this->nodeCounts_ != nullptr;};
    void deleteNodeCounts() { this->nodeCounts_ = nullptr;};
    inline string nodeCounts() const { DARABONBA_PTR_GET_DEFAULT(nodeCounts_, "") };
    inline ModifyDBProxyRequestDBProxyNodes& setNodeCounts(string nodeCounts) { DARABONBA_PTR_SET_VALUE(nodeCounts_, nodeCounts) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyDBProxyRequestDBProxyNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of CPU cores of the node. Valid values: **1** to **16**.
    // 
    // >  This parameter is required when you configure the **DBProxyNodes** parameter.
    std::shared_ptr<string> cpuCores_ = nullptr;
    // The number of proxy nodes in the zone. Valid values: **1** and **2**.
    // 
    // >  This parameter is required when you configure the **DBProxyNodes** parameter.
    std::shared_ptr<string> nodeCounts_ = nullptr;
    // The ID of the zone in which the node resides.
    // 
    // >  This parameter is required when you configure the **DBProxyNodes** parameter.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
