// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICSTRENGTHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeElasticStrengthResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticStrengthResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticStrength, elasticStrength_);
      DARABONBA_PTR_TO_JSON(ElasticStrengthModels, elasticStrengthModels_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcePools, resourcePools_);
      DARABONBA_PTR_TO_JSON(TotalStrength, totalStrength_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticStrengthResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticStrength, elasticStrength_);
      DARABONBA_PTR_FROM_JSON(ElasticStrengthModels, elasticStrengthModels_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcePools, resourcePools_);
      DARABONBA_PTR_FROM_JSON(TotalStrength, totalStrength_);
    };
    DescribeElasticStrengthResponseBody() = default ;
    DescribeElasticStrengthResponseBody(const DescribeElasticStrengthResponseBody &) = default ;
    DescribeElasticStrengthResponseBody(DescribeElasticStrengthResponseBody &&) = default ;
    DescribeElasticStrengthResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticStrengthResponseBody() = default ;
    DescribeElasticStrengthResponseBody& operator=(const DescribeElasticStrengthResponseBody &) = default ;
    DescribeElasticStrengthResponseBody& operator=(DescribeElasticStrengthResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourcePools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcePools& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(InventoryHealth, inventoryHealth_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Strength, strength_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcePools& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(InventoryHealth, inventoryHealth_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Strength, strength_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ResourcePools() = default ;
      ResourcePools(const ResourcePools &) = default ;
      ResourcePools(ResourcePools &&) = default ;
      ResourcePools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourcePools() = default ;
      ResourcePools& operator=(const ResourcePools &) = default ;
      ResourcePools& operator=(ResourcePools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InventoryHealth : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InventoryHealth& obj) { 
          DARABONBA_PTR_TO_JSON(AdequacyScore, adequacyScore_);
          DARABONBA_PTR_TO_JSON(HealthScore, healthScore_);
          DARABONBA_PTR_TO_JSON(HotScore, hotScore_);
          DARABONBA_PTR_TO_JSON(SupplyScore, supplyScore_);
        };
        friend void from_json(const Darabonba::Json& j, InventoryHealth& obj) { 
          DARABONBA_PTR_FROM_JSON(AdequacyScore, adequacyScore_);
          DARABONBA_PTR_FROM_JSON(HealthScore, healthScore_);
          DARABONBA_PTR_FROM_JSON(HotScore, hotScore_);
          DARABONBA_PTR_FROM_JSON(SupplyScore, supplyScore_);
        };
        InventoryHealth() = default ;
        InventoryHealth(const InventoryHealth &) = default ;
        InventoryHealth(InventoryHealth &&) = default ;
        InventoryHealth(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InventoryHealth() = default ;
        InventoryHealth& operator=(const InventoryHealth &) = default ;
        InventoryHealth& operator=(InventoryHealth &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->adequacyScore_ == nullptr
        && this->healthScore_ == nullptr && this->hotScore_ == nullptr && this->supplyScore_ == nullptr; };
        // adequacyScore Field Functions 
        bool hasAdequacyScore() const { return this->adequacyScore_ != nullptr;};
        void deleteAdequacyScore() { this->adequacyScore_ = nullptr;};
        inline int32_t getAdequacyScore() const { DARABONBA_PTR_GET_DEFAULT(adequacyScore_, 0) };
        inline InventoryHealth& setAdequacyScore(int32_t adequacyScore) { DARABONBA_PTR_SET_VALUE(adequacyScore_, adequacyScore) };


        // healthScore Field Functions 
        bool hasHealthScore() const { return this->healthScore_ != nullptr;};
        void deleteHealthScore() { this->healthScore_ = nullptr;};
        inline int32_t getHealthScore() const { DARABONBA_PTR_GET_DEFAULT(healthScore_, 0) };
        inline InventoryHealth& setHealthScore(int32_t healthScore) { DARABONBA_PTR_SET_VALUE(healthScore_, healthScore) };


        // hotScore Field Functions 
        bool hasHotScore() const { return this->hotScore_ != nullptr;};
        void deleteHotScore() { this->hotScore_ = nullptr;};
        inline int32_t getHotScore() const { DARABONBA_PTR_GET_DEFAULT(hotScore_, 0) };
        inline InventoryHealth& setHotScore(int32_t hotScore) { DARABONBA_PTR_SET_VALUE(hotScore_, hotScore) };


        // supplyScore Field Functions 
        bool hasSupplyScore() const { return this->supplyScore_ != nullptr;};
        void deleteSupplyScore() { this->supplyScore_ = nullptr;};
        inline int32_t getSupplyScore() const { DARABONBA_PTR_GET_DEFAULT(supplyScore_, 0) };
        inline InventoryHealth& setSupplyScore(int32_t supplyScore) { DARABONBA_PTR_SET_VALUE(supplyScore_, supplyScore) };


      protected:
        // The adequacy score.
        // 
        // Valid values: 0 to 3.
        shared_ptr<int32_t> adequacyScore_ {};
        // The inventory health score.
        // 
        // *   A score between 5 and 6 indicates a sufficient inventory.
        // *   A score between 1 and 4 indicates that there is no guarantee of a sufficient inventory. Select a reservation as necessary.
        // *   A score between -3 and 0 indicates that the inventory is sufficient, and an alert is triggered. Select another instance type.
        // 
        // Calculation formula: `HealthScore` = `AdequacyScore` + `SupplyScore` - `HotScore`.
        shared_ptr<int32_t> healthScore_ {};
        // The popularity score.
        // 
        // Valid values: 0 to 3.
        shared_ptr<int32_t> hotScore_ {};
        // The replenishment capability score.
        // 
        // Valid values: 0 to 3.
        shared_ptr<int32_t> supplyScore_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceType_ == nullptr && this->inventoryHealth_ == nullptr && this->msg_ == nullptr && this->status_ == nullptr && this->strength_ == nullptr
        && this->vSwitchIds_ == nullptr && this->zoneId_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline ResourcePools& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline ResourcePools& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // inventoryHealth Field Functions 
      bool hasInventoryHealth() const { return this->inventoryHealth_ != nullptr;};
      void deleteInventoryHealth() { this->inventoryHealth_ = nullptr;};
      inline const ResourcePools::InventoryHealth & getInventoryHealth() const { DARABONBA_PTR_GET_CONST(inventoryHealth_, ResourcePools::InventoryHealth) };
      inline ResourcePools::InventoryHealth getInventoryHealth() { DARABONBA_PTR_GET(inventoryHealth_, ResourcePools::InventoryHealth) };
      inline ResourcePools& setInventoryHealth(const ResourcePools::InventoryHealth & inventoryHealth) { DARABONBA_PTR_SET_VALUE(inventoryHealth_, inventoryHealth) };
      inline ResourcePools& setInventoryHealth(ResourcePools::InventoryHealth && inventoryHealth) { DARABONBA_PTR_SET_RVALUE(inventoryHealth_, inventoryHealth) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline ResourcePools& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ResourcePools& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // strength Field Functions 
      bool hasStrength() const { return this->strength_ != nullptr;};
      void deleteStrength() { this->strength_ = nullptr;};
      inline double getStrength() const { DARABONBA_PTR_GET_DEFAULT(strength_, 0.0) };
      inline ResourcePools& setStrength(double strength) { DARABONBA_PTR_SET_VALUE(strength_, strength) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline ResourcePools& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline ResourcePools& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ResourcePools& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The error code returned when the scaling strength is the weakest.
      shared_ptr<string> code_ {};
      // The instance type of the resource pool.
      shared_ptr<string> instanceType_ {};
      // The inventory health.
      shared_ptr<ResourcePools::InventoryHealth> inventoryHealth_ {};
      // The error message returned when the scaling strength is the weakest.
      shared_ptr<string> msg_ {};
      // Indicates whether the resource pool is available. Valid values:
      // 
      // *   Available
      // *   Unavailable (If a constraint is not provided, the instance type is not deployed, or the instance type is out of stock, the resource pool becomes unavailable.)
      shared_ptr<string> status_ {};
      // The scaling strength of the resource pool.
      shared_ptr<double> strength_ {};
      // The IDs of the vSwitches in the zones of the resource pool.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The zone ID of the resource pool.
      shared_ptr<string> zoneId_ {};
    };

    class ElasticStrengthModels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ElasticStrengthModels& obj) { 
        DARABONBA_PTR_TO_JSON(ElasticStrength, elasticStrength_);
        DARABONBA_PTR_TO_JSON(ResourcePools, resourcePools_);
        DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_TO_JSON(TotalStrength, totalStrength_);
      };
      friend void from_json(const Darabonba::Json& j, ElasticStrengthModels& obj) { 
        DARABONBA_PTR_FROM_JSON(ElasticStrength, elasticStrength_);
        DARABONBA_PTR_FROM_JSON(ResourcePools, resourcePools_);
        DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_FROM_JSON(TotalStrength, totalStrength_);
      };
      ElasticStrengthModels() = default ;
      ElasticStrengthModels(const ElasticStrengthModels &) = default ;
      ElasticStrengthModels(ElasticStrengthModels &&) = default ;
      ElasticStrengthModels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ElasticStrengthModels() = default ;
      ElasticStrengthModels& operator=(const ElasticStrengthModels &) = default ;
      ElasticStrengthModels& operator=(ElasticStrengthModels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourcePools : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePools& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(InventoryHealth, inventoryHealth_);
          DARABONBA_PTR_TO_JSON(Msg, msg_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Strength, strength_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePools& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(InventoryHealth, inventoryHealth_);
          DARABONBA_PTR_FROM_JSON(Msg, msg_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Strength, strength_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        ResourcePools() = default ;
        ResourcePools(const ResourcePools &) = default ;
        ResourcePools(ResourcePools &&) = default ;
        ResourcePools(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePools() = default ;
        ResourcePools& operator=(const ResourcePools &) = default ;
        ResourcePools& operator=(ResourcePools &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class InventoryHealth : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const InventoryHealth& obj) { 
            DARABONBA_PTR_TO_JSON(AdequacyScore, adequacyScore_);
            DARABONBA_PTR_TO_JSON(HealthScore, healthScore_);
            DARABONBA_PTR_TO_JSON(HotScore, hotScore_);
            DARABONBA_PTR_TO_JSON(SupplyScore, supplyScore_);
          };
          friend void from_json(const Darabonba::Json& j, InventoryHealth& obj) { 
            DARABONBA_PTR_FROM_JSON(AdequacyScore, adequacyScore_);
            DARABONBA_PTR_FROM_JSON(HealthScore, healthScore_);
            DARABONBA_PTR_FROM_JSON(HotScore, hotScore_);
            DARABONBA_PTR_FROM_JSON(SupplyScore, supplyScore_);
          };
          InventoryHealth() = default ;
          InventoryHealth(const InventoryHealth &) = default ;
          InventoryHealth(InventoryHealth &&) = default ;
          InventoryHealth(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~InventoryHealth() = default ;
          InventoryHealth& operator=(const InventoryHealth &) = default ;
          InventoryHealth& operator=(InventoryHealth &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->adequacyScore_ == nullptr
        && this->healthScore_ == nullptr && this->hotScore_ == nullptr && this->supplyScore_ == nullptr; };
          // adequacyScore Field Functions 
          bool hasAdequacyScore() const { return this->adequacyScore_ != nullptr;};
          void deleteAdequacyScore() { this->adequacyScore_ = nullptr;};
          inline int32_t getAdequacyScore() const { DARABONBA_PTR_GET_DEFAULT(adequacyScore_, 0) };
          inline InventoryHealth& setAdequacyScore(int32_t adequacyScore) { DARABONBA_PTR_SET_VALUE(adequacyScore_, adequacyScore) };


          // healthScore Field Functions 
          bool hasHealthScore() const { return this->healthScore_ != nullptr;};
          void deleteHealthScore() { this->healthScore_ = nullptr;};
          inline int32_t getHealthScore() const { DARABONBA_PTR_GET_DEFAULT(healthScore_, 0) };
          inline InventoryHealth& setHealthScore(int32_t healthScore) { DARABONBA_PTR_SET_VALUE(healthScore_, healthScore) };


          // hotScore Field Functions 
          bool hasHotScore() const { return this->hotScore_ != nullptr;};
          void deleteHotScore() { this->hotScore_ = nullptr;};
          inline int32_t getHotScore() const { DARABONBA_PTR_GET_DEFAULT(hotScore_, 0) };
          inline InventoryHealth& setHotScore(int32_t hotScore) { DARABONBA_PTR_SET_VALUE(hotScore_, hotScore) };


          // supplyScore Field Functions 
          bool hasSupplyScore() const { return this->supplyScore_ != nullptr;};
          void deleteSupplyScore() { this->supplyScore_ = nullptr;};
          inline int32_t getSupplyScore() const { DARABONBA_PTR_GET_DEFAULT(supplyScore_, 0) };
          inline InventoryHealth& setSupplyScore(int32_t supplyScore) { DARABONBA_PTR_SET_VALUE(supplyScore_, supplyScore) };


        protected:
          // The adequacy score.
          // 
          // Valid values: 0 to 3.
          shared_ptr<int32_t> adequacyScore_ {};
          // The score of the inventory health.
          // 
          // *   A score between 5 and 6 indicates a sufficient inventory.
          // *   A score between 1 and 4 indicates that there is no guarantee of a sufficient inventory. Select a reservation as necessary.
          // *   A score between -3 and 0 indicates that the inventory is sufficient, and an alert is triggered. Select another instance type.
          // 
          // Calculation formula: `HealthScore` = `AdequacyScore` + `SupplyScore` - `HotScore`.
          shared_ptr<int32_t> healthScore_ {};
          // The popularity score.
          // 
          // Valid values: 0 to 3.
          shared_ptr<int32_t> hotScore_ {};
          // The score of the replenishment capability.
          // 
          // Valid values: 0 to 3.
          shared_ptr<int32_t> supplyScore_ {};
        };

        virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceType_ == nullptr && this->inventoryHealth_ == nullptr && this->msg_ == nullptr && this->status_ == nullptr && this->strength_ == nullptr
        && this->vSwitchIds_ == nullptr && this->zoneId_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline ResourcePools& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline ResourcePools& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // inventoryHealth Field Functions 
        bool hasInventoryHealth() const { return this->inventoryHealth_ != nullptr;};
        void deleteInventoryHealth() { this->inventoryHealth_ = nullptr;};
        inline const ResourcePools::InventoryHealth & getInventoryHealth() const { DARABONBA_PTR_GET_CONST(inventoryHealth_, ResourcePools::InventoryHealth) };
        inline ResourcePools::InventoryHealth getInventoryHealth() { DARABONBA_PTR_GET(inventoryHealth_, ResourcePools::InventoryHealth) };
        inline ResourcePools& setInventoryHealth(const ResourcePools::InventoryHealth & inventoryHealth) { DARABONBA_PTR_SET_VALUE(inventoryHealth_, inventoryHealth) };
        inline ResourcePools& setInventoryHealth(ResourcePools::InventoryHealth && inventoryHealth) { DARABONBA_PTR_SET_RVALUE(inventoryHealth_, inventoryHealth) };


        // msg Field Functions 
        bool hasMsg() const { return this->msg_ != nullptr;};
        void deleteMsg() { this->msg_ = nullptr;};
        inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
        inline ResourcePools& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ResourcePools& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // strength Field Functions 
        bool hasStrength() const { return this->strength_ != nullptr;};
        void deleteStrength() { this->strength_ = nullptr;};
        inline double getStrength() const { DARABONBA_PTR_GET_DEFAULT(strength_, 0.0) };
        inline ResourcePools& setStrength(double strength) { DARABONBA_PTR_SET_VALUE(strength_, strength) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
        inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
        inline ResourcePools& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline ResourcePools& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline ResourcePools& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The error code returned when the scaling strength is the weakest.
        shared_ptr<string> code_ {};
        // The instance type of the resource pool.
        shared_ptr<string> instanceType_ {};
        // The inventory health.
        shared_ptr<ResourcePools::InventoryHealth> inventoryHealth_ {};
        // The error message returned when the scaling strength is the weakest.
        shared_ptr<string> msg_ {};
        // Indicates whether the resource pool is available. Valid values:
        // 
        // *   Available
        // *   Unavailable (If a constraint is not provided, the instance type is not deployed, or the instance type is out of stock, the resource pool becomes unavailable.)
        shared_ptr<string> status_ {};
        // The scaling strength of the resource pool.
        // 
        // **
        // 
        // **Warning** This parameter is deprecated.
        shared_ptr<double> strength_ {};
        // The IDs of the vSwitches in the zones of the resource pool.
        shared_ptr<vector<string>> vSwitchIds_ {};
        // The zone ID of the resource pool.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->elasticStrength_ == nullptr
        && this->resourcePools_ == nullptr && this->scalingGroupId_ == nullptr && this->totalStrength_ == nullptr; };
      // elasticStrength Field Functions 
      bool hasElasticStrength() const { return this->elasticStrength_ != nullptr;};
      void deleteElasticStrength() { this->elasticStrength_ = nullptr;};
      inline string getElasticStrength() const { DARABONBA_PTR_GET_DEFAULT(elasticStrength_, "") };
      inline ElasticStrengthModels& setElasticStrength(string elasticStrength) { DARABONBA_PTR_SET_VALUE(elasticStrength_, elasticStrength) };


      // resourcePools Field Functions 
      bool hasResourcePools() const { return this->resourcePools_ != nullptr;};
      void deleteResourcePools() { this->resourcePools_ = nullptr;};
      inline const vector<ElasticStrengthModels::ResourcePools> & getResourcePools() const { DARABONBA_PTR_GET_CONST(resourcePools_, vector<ElasticStrengthModels::ResourcePools>) };
      inline vector<ElasticStrengthModels::ResourcePools> getResourcePools() { DARABONBA_PTR_GET(resourcePools_, vector<ElasticStrengthModels::ResourcePools>) };
      inline ElasticStrengthModels& setResourcePools(const vector<ElasticStrengthModels::ResourcePools> & resourcePools) { DARABONBA_PTR_SET_VALUE(resourcePools_, resourcePools) };
      inline ElasticStrengthModels& setResourcePools(vector<ElasticStrengthModels::ResourcePools> && resourcePools) { DARABONBA_PTR_SET_RVALUE(resourcePools_, resourcePools) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline ElasticStrengthModels& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // totalStrength Field Functions 
      bool hasTotalStrength() const { return this->totalStrength_ != nullptr;};
      void deleteTotalStrength() { this->totalStrength_ = nullptr;};
      inline double getTotalStrength() const { DARABONBA_PTR_GET_DEFAULT(totalStrength_, 0.0) };
      inline ElasticStrengthModels& setTotalStrength(double totalStrength) { DARABONBA_PTR_SET_VALUE(totalStrength_, totalStrength) };


    protected:
      // The scaling strength level of the scaling group. Valid values:
      // 
      // *   Strong
      // *   Medium
      // *   Weak
      shared_ptr<string> elasticStrength_ {};
      // The resource pools.
      shared_ptr<vector<ElasticStrengthModels::ResourcePools>> resourcePools_ {};
      // The ID of the scaling group.
      shared_ptr<string> scalingGroupId_ {};
      // The scaling strength score of the scaling group. Each combination of instance type + zone is scored from 0 to 1 based on its availability, with 0 being the weakest scaling strength and 1 being the strongest. The scaling strength score of the scaling group is measured by the combined scores of all the combinations of instance type + zone.
      // 
      // **
      // 
      // **Warning** This parameter is deprecated.
      shared_ptr<double> totalStrength_ {};
    };

    virtual bool empty() const override { return this->elasticStrength_ == nullptr
        && this->elasticStrengthModels_ == nullptr && this->requestId_ == nullptr && this->resourcePools_ == nullptr && this->totalStrength_ == nullptr; };
    // elasticStrength Field Functions 
    bool hasElasticStrength() const { return this->elasticStrength_ != nullptr;};
    void deleteElasticStrength() { this->elasticStrength_ = nullptr;};
    inline string getElasticStrength() const { DARABONBA_PTR_GET_DEFAULT(elasticStrength_, "") };
    inline DescribeElasticStrengthResponseBody& setElasticStrength(string elasticStrength) { DARABONBA_PTR_SET_VALUE(elasticStrength_, elasticStrength) };


    // elasticStrengthModels Field Functions 
    bool hasElasticStrengthModels() const { return this->elasticStrengthModels_ != nullptr;};
    void deleteElasticStrengthModels() { this->elasticStrengthModels_ = nullptr;};
    inline const vector<DescribeElasticStrengthResponseBody::ElasticStrengthModels> & getElasticStrengthModels() const { DARABONBA_PTR_GET_CONST(elasticStrengthModels_, vector<DescribeElasticStrengthResponseBody::ElasticStrengthModels>) };
    inline vector<DescribeElasticStrengthResponseBody::ElasticStrengthModels> getElasticStrengthModels() { DARABONBA_PTR_GET(elasticStrengthModels_, vector<DescribeElasticStrengthResponseBody::ElasticStrengthModels>) };
    inline DescribeElasticStrengthResponseBody& setElasticStrengthModels(const vector<DescribeElasticStrengthResponseBody::ElasticStrengthModels> & elasticStrengthModels) { DARABONBA_PTR_SET_VALUE(elasticStrengthModels_, elasticStrengthModels) };
    inline DescribeElasticStrengthResponseBody& setElasticStrengthModels(vector<DescribeElasticStrengthResponseBody::ElasticStrengthModels> && elasticStrengthModels) { DARABONBA_PTR_SET_RVALUE(elasticStrengthModels_, elasticStrengthModels) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticStrengthResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcePools Field Functions 
    bool hasResourcePools() const { return this->resourcePools_ != nullptr;};
    void deleteResourcePools() { this->resourcePools_ = nullptr;};
    inline const vector<DescribeElasticStrengthResponseBody::ResourcePools> & getResourcePools() const { DARABONBA_PTR_GET_CONST(resourcePools_, vector<DescribeElasticStrengthResponseBody::ResourcePools>) };
    inline vector<DescribeElasticStrengthResponseBody::ResourcePools> getResourcePools() { DARABONBA_PTR_GET(resourcePools_, vector<DescribeElasticStrengthResponseBody::ResourcePools>) };
    inline DescribeElasticStrengthResponseBody& setResourcePools(const vector<DescribeElasticStrengthResponseBody::ResourcePools> & resourcePools) { DARABONBA_PTR_SET_VALUE(resourcePools_, resourcePools) };
    inline DescribeElasticStrengthResponseBody& setResourcePools(vector<DescribeElasticStrengthResponseBody::ResourcePools> && resourcePools) { DARABONBA_PTR_SET_RVALUE(resourcePools_, resourcePools) };


    // totalStrength Field Functions 
    bool hasTotalStrength() const { return this->totalStrength_ != nullptr;};
    void deleteTotalStrength() { this->totalStrength_ = nullptr;};
    inline double getTotalStrength() const { DARABONBA_PTR_GET_DEFAULT(totalStrength_, 0.0) };
    inline DescribeElasticStrengthResponseBody& setTotalStrength(double totalStrength) { DARABONBA_PTR_SET_VALUE(totalStrength_, totalStrength) };


  protected:
    // The scaling strength level of the scaling group. Valid values:
    // 
    // *   Strong
    // *   Medium
    // *   Weak
    shared_ptr<string> elasticStrength_ {};
    // The scaling strength models.
    shared_ptr<vector<DescribeElasticStrengthResponseBody::ElasticStrengthModels>> elasticStrengthModels_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The resource pools.
    shared_ptr<vector<DescribeElasticStrengthResponseBody::ResourcePools>> resourcePools_ {};
    // The scaling strength score of the scaling group. Each combination of instance type + zone is scored from 0 to 1 based on its availability, with 0 being the weakest scaling strength and 1 being the strongest. The scaling strength score of the scaling group is measured by the combined scores of all the combinations of instance type + zone.
    // 
    // **
    // 
    // **Warning** This parameter is deprecated.
    shared_ptr<double> totalStrength_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
