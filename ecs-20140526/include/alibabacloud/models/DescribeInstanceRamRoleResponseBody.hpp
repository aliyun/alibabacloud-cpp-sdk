// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERAMROLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERAMROLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets.hpp>
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
    virtual bool empty() const override { this->instanceRamRoleSets_ != nullptr
        && this->regionId_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // instanceRamRoleSets Field Functions 
    bool hasInstanceRamRoleSets() const { return this->instanceRamRoleSets_ != nullptr;};
    void deleteInstanceRamRoleSets() { this->instanceRamRoleSets_ = nullptr;};
    inline const DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets & instanceRamRoleSets() const { DARABONBA_PTR_GET_CONST(instanceRamRoleSets_, DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets) };
    inline DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets instanceRamRoleSets() { DARABONBA_PTR_GET(instanceRamRoleSets_, DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets) };
    inline DescribeInstanceRamRoleResponseBody& setInstanceRamRoleSets(const DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets & instanceRamRoleSets) { DARABONBA_PTR_SET_VALUE(instanceRamRoleSets_, instanceRamRoleSets) };
    inline DescribeInstanceRamRoleResponseBody& setInstanceRamRoleSets(DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets && instanceRamRoleSets) { DARABONBA_PTR_SET_RVALUE(instanceRamRoleSets_, instanceRamRoleSets) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceRamRoleResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceRamRoleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeInstanceRamRoleResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The IDs of the ECS instances and the names of the corresponding instance RAM roles.
    std::shared_ptr<DescribeInstanceRamRoleResponseBodyInstanceRamRoleSets> instanceRamRoleSets_ = nullptr;
    // The region ID of the ECS instances.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of ECS instances returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
