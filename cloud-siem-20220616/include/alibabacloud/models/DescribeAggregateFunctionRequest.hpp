// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAGGREGATEFUNCTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAGGREGATEFUNCTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeAggregateFunctionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAggregateFunctionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_TO_JSON(RoleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAggregateFunctionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RoleFor, roleFor_);
      DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
    };
    DescribeAggregateFunctionRequest() = default ;
    DescribeAggregateFunctionRequest(const DescribeAggregateFunctionRequest &) = default ;
    DescribeAggregateFunctionRequest(DescribeAggregateFunctionRequest &&) = default ;
    DescribeAggregateFunctionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAggregateFunctionRequest() = default ;
    DescribeAggregateFunctionRequest& operator=(const DescribeAggregateFunctionRequest &) = default ;
    DescribeAggregateFunctionRequest& operator=(DescribeAggregateFunctionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->roleFor_ == nullptr && this->roleType_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAggregateFunctionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // roleFor Field Functions 
    bool hasRoleFor() const { return this->roleFor_ != nullptr;};
    void deleteRoleFor() { this->roleFor_ = nullptr;};
    inline int64_t getRoleFor() const { DARABONBA_PTR_GET_DEFAULT(roleFor_, 0L) };
    inline DescribeAggregateFunctionRequest& setRoleFor(int64_t roleFor) { DARABONBA_PTR_SET_VALUE(roleFor_, roleFor) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline int32_t getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, 0) };
    inline DescribeAggregateFunctionRequest& setRoleType(int32_t roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    // The region where the data management center of Threat Analysis is located. Select a region based on the location of your assets. Valid values:
    // 
    // - cn-hangzhou: Your assets are in the Chinese mainland or Hong Kong (China).
    // 
    // - ap-southeast-1: Your assets are in a region outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The ID of the member. An administrator can switch to the perspective of the member.
    shared_ptr<int64_t> roleFor_ {};
    // The type of the view. Valid values:
    // 
    // - 0: The view of the current Alibaba Cloud account.
    // 
    // - 1: The view of all accounts in the enterprise.
    shared_ptr<int32_t> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
