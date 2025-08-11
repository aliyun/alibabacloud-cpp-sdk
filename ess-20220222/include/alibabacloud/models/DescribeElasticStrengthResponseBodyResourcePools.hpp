// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODYRESOURCEPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODYRESOURCEPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeElasticStrengthResponseBodyResourcePools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticStrengthResponseBodyResourcePools& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InventoryHealth, inventoryHealth_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Strength, strength_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticStrengthResponseBodyResourcePools& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InventoryHealth, inventoryHealth_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Strength, strength_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeElasticStrengthResponseBodyResourcePools() = default ;
    DescribeElasticStrengthResponseBodyResourcePools(const DescribeElasticStrengthResponseBodyResourcePools &) = default ;
    DescribeElasticStrengthResponseBodyResourcePools(DescribeElasticStrengthResponseBodyResourcePools &&) = default ;
    DescribeElasticStrengthResponseBodyResourcePools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticStrengthResponseBodyResourcePools() = default ;
    DescribeElasticStrengthResponseBodyResourcePools& operator=(const DescribeElasticStrengthResponseBodyResourcePools &) = default ;
    DescribeElasticStrengthResponseBodyResourcePools& operator=(DescribeElasticStrengthResponseBodyResourcePools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->instanceType_ != nullptr && this->inventoryHealth_ != nullptr && this->msg_ != nullptr && this->status_ != nullptr && this->strength_ != nullptr
        && this->vSwitchIds_ != nullptr && this->zoneId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeElasticStrengthResponseBodyResourcePools& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeElasticStrengthResponseBodyResourcePools& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // inventoryHealth Field Functions 
    bool hasInventoryHealth() const { return this->inventoryHealth_ != nullptr;};
    void deleteInventoryHealth() { this->inventoryHealth_ = nullptr;};
    inline const Models::DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth & inventoryHealth() const { DARABONBA_PTR_GET_CONST(inventoryHealth_, Models::DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth) };
    inline Models::DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth inventoryHealth() { DARABONBA_PTR_GET(inventoryHealth_, Models::DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth) };
    inline DescribeElasticStrengthResponseBodyResourcePools& setInventoryHealth(const Models::DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth & inventoryHealth) { DARABONBA_PTR_SET_VALUE(inventoryHealth_, inventoryHealth) };
    inline DescribeElasticStrengthResponseBodyResourcePools& setInventoryHealth(Models::DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth && inventoryHealth) { DARABONBA_PTR_SET_RVALUE(inventoryHealth_, inventoryHealth) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeElasticStrengthResponseBodyResourcePools& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeElasticStrengthResponseBodyResourcePools& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strength Field Functions 
    bool hasStrength() const { return this->strength_ != nullptr;};
    void deleteStrength() { this->strength_ = nullptr;};
    inline double strength() const { DARABONBA_PTR_GET_DEFAULT(strength_, 0.0) };
    inline DescribeElasticStrengthResponseBodyResourcePools& setStrength(double strength) { DARABONBA_PTR_SET_VALUE(strength_, strength) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeElasticStrengthResponseBodyResourcePools& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeElasticStrengthResponseBodyResourcePools& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeElasticStrengthResponseBodyResourcePools& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The error code returned when the scaling strength is the weakest.
    std::shared_ptr<string> code_ = nullptr;
    // The instance type of the resource pool.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The inventory health.
    std::shared_ptr<Models::DescribeElasticStrengthResponseBodyResourcePoolsInventoryHealth> inventoryHealth_ = nullptr;
    // The error message returned when the scaling strength is the weakest.
    std::shared_ptr<string> msg_ = nullptr;
    // Indicates whether the resource pool is available. Valid values:
    // 
    // *   Available
    // *   Unavailable (If a constraint is not provided, the instance type is not deployed, or the instance type is out of stock, the resource pool becomes unavailable.)
    std::shared_ptr<string> status_ = nullptr;
    // The scaling strength of the resource pool.
    std::shared_ptr<double> strength_ = nullptr;
    // The IDs of the vSwitches in the zones of the resource pool.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // The zone ID of the resource pool.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
