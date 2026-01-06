// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifySecurityGroupConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityGroupConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityGroupConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifySecurityGroupConfigurationResponseBody() = default ;
    ModifySecurityGroupConfigurationResponseBody(const ModifySecurityGroupConfigurationResponseBody &) = default ;
    ModifySecurityGroupConfigurationResponseBody(ModifySecurityGroupConfigurationResponseBody &&) = default ;
    ModifySecurityGroupConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityGroupConfigurationResponseBody() = default ;
    ModifySecurityGroupConfigurationResponseBody& operator=(const ModifySecurityGroupConfigurationResponseBody &) = default ;
    ModifySecurityGroupConfigurationResponseBody& operator=(ModifySecurityGroupConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(EcsSecurityGroupRelation, ecsSecurityGroupRelation_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(EcsSecurityGroupRelation, ecsSecurityGroupRelation_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EcsSecurityGroupRelation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EcsSecurityGroupRelation& obj) { 
          DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, EcsSecurityGroupRelation& obj) { 
          DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        };
        EcsSecurityGroupRelation() = default ;
        EcsSecurityGroupRelation(const EcsSecurityGroupRelation &) = default ;
        EcsSecurityGroupRelation(EcsSecurityGroupRelation &&) = default ;
        EcsSecurityGroupRelation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EcsSecurityGroupRelation() = default ;
        EcsSecurityGroupRelation& operator=(const EcsSecurityGroupRelation &) = default ;
        EcsSecurityGroupRelation& operator=(EcsSecurityGroupRelation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->networkType_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr; };
        // networkType Field Functions 
        bool hasNetworkType() const { return this->networkType_ != nullptr;};
        void deleteNetworkType() { this->networkType_ = nullptr;};
        inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
        inline EcsSecurityGroupRelation& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EcsSecurityGroupRelation& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline EcsSecurityGroupRelation& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      protected:
        // The network type of the ECS security group. Valid values:
        // 
        // *   **Classic**
        // *   **VPC**
        shared_ptr<string> networkType_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The ID of the ECS security group.
        shared_ptr<string> securityGroupId_ {};
      };

      virtual bool empty() const override { return this->ecsSecurityGroupRelation_ == nullptr; };
      // ecsSecurityGroupRelation Field Functions 
      bool hasEcsSecurityGroupRelation() const { return this->ecsSecurityGroupRelation_ != nullptr;};
      void deleteEcsSecurityGroupRelation() { this->ecsSecurityGroupRelation_ = nullptr;};
      inline const vector<Items::EcsSecurityGroupRelation> & getEcsSecurityGroupRelation() const { DARABONBA_PTR_GET_CONST(ecsSecurityGroupRelation_, vector<Items::EcsSecurityGroupRelation>) };
      inline vector<Items::EcsSecurityGroupRelation> getEcsSecurityGroupRelation() { DARABONBA_PTR_GET(ecsSecurityGroupRelation_, vector<Items::EcsSecurityGroupRelation>) };
      inline Items& setEcsSecurityGroupRelation(const vector<Items::EcsSecurityGroupRelation> & ecsSecurityGroupRelation) { DARABONBA_PTR_SET_VALUE(ecsSecurityGroupRelation_, ecsSecurityGroupRelation) };
      inline Items& setEcsSecurityGroupRelation(vector<Items::EcsSecurityGroupRelation> && ecsSecurityGroupRelation) { DARABONBA_PTR_SET_RVALUE(ecsSecurityGroupRelation_, ecsSecurityGroupRelation) };


    protected:
      shared_ptr<vector<Items::EcsSecurityGroupRelation>> ecsSecurityGroupRelation_ {};
    };

    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->items_ == nullptr && this->requestId_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline ModifySecurityGroupConfigurationResponseBody& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const ModifySecurityGroupConfigurationResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, ModifySecurityGroupConfigurationResponseBody::Items) };
    inline ModifySecurityGroupConfigurationResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, ModifySecurityGroupConfigurationResponseBody::Items) };
    inline ModifySecurityGroupConfigurationResponseBody& setItems(const ModifySecurityGroupConfigurationResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline ModifySecurityGroupConfigurationResponseBody& setItems(ModifySecurityGroupConfigurationResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifySecurityGroupConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance ID.
    shared_ptr<string> DBInstanceName_ {};
    // An array that consists of information about the ECS security group.
    shared_ptr<ModifySecurityGroupConfigurationResponseBody::Items> items_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
