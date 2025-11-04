// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODYELASTICSTRENGTHMODELSRESOURCEPOOLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODYELASTICSTRENGTHMODELSRESOURCEPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePoolsInventoryHealth.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InventoryHealth, inventoryHealth_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Strength, strength_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InventoryHealth, inventoryHealth_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Strength, strength_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools() = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools(const DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools &) = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools(DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools &&) = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools() = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& operator=(const DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools &) = default ;
    DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& operator=(DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->instanceType_ == nullptr && return this->inventoryHealth_ == nullptr && return this->msg_ == nullptr && return this->status_ == nullptr && return this->strength_ == nullptr
        && return this->vSwitchIds_ == nullptr && return this->zoneId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // inventoryHealth Field Functions 
    bool hasInventoryHealth() const { return this->inventoryHealth_ != nullptr;};
    void deleteInventoryHealth() { this->inventoryHealth_ = nullptr;};
    inline const Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePoolsInventoryHealth & inventoryHealth() const { DARABONBA_PTR_GET_CONST(inventoryHealth_, Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePoolsInventoryHealth) };
    inline Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePoolsInventoryHealth inventoryHealth() { DARABONBA_PTR_GET(inventoryHealth_, Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePoolsInventoryHealth) };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setInventoryHealth(const Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePoolsInventoryHealth & inventoryHealth) { DARABONBA_PTR_SET_VALUE(inventoryHealth_, inventoryHealth) };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setInventoryHealth(Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePoolsInventoryHealth && inventoryHealth) { DARABONBA_PTR_SET_RVALUE(inventoryHealth_, inventoryHealth) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strength Field Functions 
    bool hasStrength() const { return this->strength_ != nullptr;};
    void deleteStrength() { this->strength_ = nullptr;};
    inline double strength() const { DARABONBA_PTR_GET_DEFAULT(strength_, 0.0) };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setStrength(double strength) { DARABONBA_PTR_SET_VALUE(strength_, strength) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePools& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The error code returned when the scaling strength is the weakest.
    std::shared_ptr<string> code_ = nullptr;
    // The instance type of the resource pool.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The inventory health.
    std::shared_ptr<Models::DescribeElasticStrengthResponseBodyElasticStrengthModelsResourcePoolsInventoryHealth> inventoryHealth_ = nullptr;
    // The error message returned when the scaling strength is the weakest.
    std::shared_ptr<string> msg_ = nullptr;
    // Indicates whether the resource pool is available. Valid values:
    // 
    // *   Available
    // *   Unavailable (If a constraint is not provided, the instance type is not deployed, or the instance type is out of stock, the resource pool becomes unavailable.)
    std::shared_ptr<string> status_ = nullptr;
    // The scaling strength of the resource pool.
    // 
    // **
    // 
    // **Warning** This parameter is deprecated.
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
