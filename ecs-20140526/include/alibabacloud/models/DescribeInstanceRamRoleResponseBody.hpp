// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERAMROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERAMROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceRamRoleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRamRoleSets, instanceRamRoleSets_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceRamRoleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRamRoleSets, instanceRamRoleSets_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeInstanceRamRoleResponseBody() = default ;
    DescribeInstanceRamRoleResponseBody(const DescribeInstanceRamRoleResponseBody &) = default ;
    DescribeInstanceRamRoleResponseBody(DescribeInstanceRamRoleResponseBody &&) = default ;
    DescribeInstanceRamRoleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceRamRoleResponseBody() = default ;
    DescribeInstanceRamRoleResponseBody& operator=(const DescribeInstanceRamRoleResponseBody &) = default ;
    DescribeInstanceRamRoleResponseBody& operator=(DescribeInstanceRamRoleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceRamRoleSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceRamRoleSets& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceRamRoleSet, instanceRamRoleSet_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceRamRoleSets& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceRamRoleSet, instanceRamRoleSet_);
      };
      InstanceRamRoleSets() = default ;
      InstanceRamRoleSets(const InstanceRamRoleSets &) = default ;
      InstanceRamRoleSets(InstanceRamRoleSets &&) = default ;
      InstanceRamRoleSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceRamRoleSets() = default ;
      InstanceRamRoleSets& operator=(const InstanceRamRoleSets &) = default ;
      InstanceRamRoleSets& operator=(InstanceRamRoleSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceRamRoleSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceRamRoleSet& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceRamRoleSet& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
        };
        InstanceRamRoleSet() = default ;
        InstanceRamRoleSet(const InstanceRamRoleSet &) = default ;
        InstanceRamRoleSet(InstanceRamRoleSet &&) = default ;
        InstanceRamRoleSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceRamRoleSet() = default ;
        InstanceRamRoleSet& operator=(const InstanceRamRoleSet &) = default ;
        InstanceRamRoleSet& operator=(InstanceRamRoleSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->ramRoleName_ == nullptr; };
        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceRamRoleSet& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ramRoleName Field Functions 
        bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
        void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
        inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
        inline InstanceRamRoleSet& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


      protected:
        // The ID of the instance
        shared_ptr<string> instanceId_ {};
        // The name of the instance RAM role.
        shared_ptr<string> ramRoleName_ {};
      };

      virtual bool empty() const override { return this->instanceRamRoleSet_ == nullptr; };
      // instanceRamRoleSet Field Functions 
      bool hasInstanceRamRoleSet() const { return this->instanceRamRoleSet_ != nullptr;};
      void deleteInstanceRamRoleSet() { this->instanceRamRoleSet_ = nullptr;};
      inline const vector<InstanceRamRoleSets::InstanceRamRoleSet> & getInstanceRamRoleSet() const { DARABONBA_PTR_GET_CONST(instanceRamRoleSet_, vector<InstanceRamRoleSets::InstanceRamRoleSet>) };
      inline vector<InstanceRamRoleSets::InstanceRamRoleSet> getInstanceRamRoleSet() { DARABONBA_PTR_GET(instanceRamRoleSet_, vector<InstanceRamRoleSets::InstanceRamRoleSet>) };
      inline InstanceRamRoleSets& setInstanceRamRoleSet(const vector<InstanceRamRoleSets::InstanceRamRoleSet> & instanceRamRoleSet) { DARABONBA_PTR_SET_VALUE(instanceRamRoleSet_, instanceRamRoleSet) };
      inline InstanceRamRoleSets& setInstanceRamRoleSet(vector<InstanceRamRoleSets::InstanceRamRoleSet> && instanceRamRoleSet) { DARABONBA_PTR_SET_RVALUE(instanceRamRoleSet_, instanceRamRoleSet) };


    protected:
      shared_ptr<vector<InstanceRamRoleSets::InstanceRamRoleSet>> instanceRamRoleSet_ {};
    };

    virtual bool empty() const override { return this->instanceRamRoleSets_ == nullptr
        && this->regionId_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // instanceRamRoleSets Field Functions 
    bool hasInstanceRamRoleSets() const { return this->instanceRamRoleSets_ != nullptr;};
    void deleteInstanceRamRoleSets() { this->instanceRamRoleSets_ = nullptr;};
    inline const DescribeInstanceRamRoleResponseBody::InstanceRamRoleSets & getInstanceRamRoleSets() const { DARABONBA_PTR_GET_CONST(instanceRamRoleSets_, DescribeInstanceRamRoleResponseBody::InstanceRamRoleSets) };
    inline DescribeInstanceRamRoleResponseBody::InstanceRamRoleSets getInstanceRamRoleSets() { DARABONBA_PTR_GET(instanceRamRoleSets_, DescribeInstanceRamRoleResponseBody::InstanceRamRoleSets) };
    inline DescribeInstanceRamRoleResponseBody& setInstanceRamRoleSets(const DescribeInstanceRamRoleResponseBody::InstanceRamRoleSets & instanceRamRoleSets) { DARABONBA_PTR_SET_VALUE(instanceRamRoleSets_, instanceRamRoleSets) };
    inline DescribeInstanceRamRoleResponseBody& setInstanceRamRoleSets(DescribeInstanceRamRoleResponseBody::InstanceRamRoleSets && instanceRamRoleSets) { DARABONBA_PTR_SET_RVALUE(instanceRamRoleSets_, instanceRamRoleSets) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceRamRoleResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceRamRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceRamRoleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The IDs of the ECS instances and the names of the corresponding instance RAM roles.
    shared_ptr<DescribeInstanceRamRoleResponseBody::InstanceRamRoleSets> instanceRamRoleSets_ {};
    // The region ID of the ECS instances.
    shared_ptr<string> regionId_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of ECS instances returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
