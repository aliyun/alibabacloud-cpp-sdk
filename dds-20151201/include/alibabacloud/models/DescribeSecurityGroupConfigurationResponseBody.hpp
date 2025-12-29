// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPCONFIGURATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeSecurityGroupConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeSecurityGroupConfigurationResponseBody() = default ;
    DescribeSecurityGroupConfigurationResponseBody(const DescribeSecurityGroupConfigurationResponseBody &) = default ;
    DescribeSecurityGroupConfigurationResponseBody(DescribeSecurityGroupConfigurationResponseBody &&) = default ;
    DescribeSecurityGroupConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupConfigurationResponseBody() = default ;
    DescribeSecurityGroupConfigurationResponseBody& operator=(const DescribeSecurityGroupConfigurationResponseBody &) = default ;
    DescribeSecurityGroupConfigurationResponseBody& operator=(DescribeSecurityGroupConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(RdsEcsSecurityGroupRel, rdsEcsSecurityGroupRel_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(RdsEcsSecurityGroupRel, rdsEcsSecurityGroupRel_);
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
      class RdsEcsSecurityGroupRel : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RdsEcsSecurityGroupRel& obj) { 
          DARABONBA_PTR_TO_JSON(NetType, netType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        };
        friend void from_json(const Darabonba::Json& j, RdsEcsSecurityGroupRel& obj) { 
          DARABONBA_PTR_FROM_JSON(NetType, netType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        };
        RdsEcsSecurityGroupRel() = default ;
        RdsEcsSecurityGroupRel(const RdsEcsSecurityGroupRel &) = default ;
        RdsEcsSecurityGroupRel(RdsEcsSecurityGroupRel &&) = default ;
        RdsEcsSecurityGroupRel(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RdsEcsSecurityGroupRel() = default ;
        RdsEcsSecurityGroupRel& operator=(const RdsEcsSecurityGroupRel &) = default ;
        RdsEcsSecurityGroupRel& operator=(RdsEcsSecurityGroupRel &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->netType_ == nullptr
        && this->regionId_ == nullptr && this->securityGroupId_ == nullptr; };
        // netType Field Functions 
        bool hasNetType() const { return this->netType_ != nullptr;};
        void deleteNetType() { this->netType_ = nullptr;};
        inline string getNetType() const { DARABONBA_PTR_GET_DEFAULT(netType_, "") };
        inline RdsEcsSecurityGroupRel& setNetType(string netType) { DARABONBA_PTR_SET_VALUE(netType_, netType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline RdsEcsSecurityGroupRel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // securityGroupId Field Functions 
        bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
        void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
        inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
        inline RdsEcsSecurityGroupRel& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      protected:
        // The network type of the ECS security group. Valid values:
        // 
        // *   **vpc**
        // *   **classic**
        shared_ptr<string> netType_ {};
        // The region ID of the ECS security group.
        shared_ptr<string> regionId_ {};
        // The ID of the ECS security group.
        shared_ptr<string> securityGroupId_ {};
      };

      virtual bool empty() const override { return this->rdsEcsSecurityGroupRel_ == nullptr; };
      // rdsEcsSecurityGroupRel Field Functions 
      bool hasRdsEcsSecurityGroupRel() const { return this->rdsEcsSecurityGroupRel_ != nullptr;};
      void deleteRdsEcsSecurityGroupRel() { this->rdsEcsSecurityGroupRel_ = nullptr;};
      inline const vector<Items::RdsEcsSecurityGroupRel> & getRdsEcsSecurityGroupRel() const { DARABONBA_PTR_GET_CONST(rdsEcsSecurityGroupRel_, vector<Items::RdsEcsSecurityGroupRel>) };
      inline vector<Items::RdsEcsSecurityGroupRel> getRdsEcsSecurityGroupRel() { DARABONBA_PTR_GET(rdsEcsSecurityGroupRel_, vector<Items::RdsEcsSecurityGroupRel>) };
      inline Items& setRdsEcsSecurityGroupRel(const vector<Items::RdsEcsSecurityGroupRel> & rdsEcsSecurityGroupRel) { DARABONBA_PTR_SET_VALUE(rdsEcsSecurityGroupRel_, rdsEcsSecurityGroupRel) };
      inline Items& setRdsEcsSecurityGroupRel(vector<Items::RdsEcsSecurityGroupRel> && rdsEcsSecurityGroupRel) { DARABONBA_PTR_SET_RVALUE(rdsEcsSecurityGroupRel_, rdsEcsSecurityGroupRel) };


    protected:
      shared_ptr<vector<Items::RdsEcsSecurityGroupRel>> rdsEcsSecurityGroupRel_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->requestId_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const DescribeSecurityGroupConfigurationResponseBody::Items & getItems() const { DARABONBA_PTR_GET_CONST(items_, DescribeSecurityGroupConfigurationResponseBody::Items) };
    inline DescribeSecurityGroupConfigurationResponseBody::Items getItems() { DARABONBA_PTR_GET(items_, DescribeSecurityGroupConfigurationResponseBody::Items) };
    inline DescribeSecurityGroupConfigurationResponseBody& setItems(const DescribeSecurityGroupConfigurationResponseBody::Items & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeSecurityGroupConfigurationResponseBody& setItems(DescribeSecurityGroupConfigurationResponseBody::Items && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityGroupConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the ECS security groups.
    shared_ptr<DescribeSecurityGroupConfigurationResponseBody::Items> items_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
