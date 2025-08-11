// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSDBINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSDBINSTANCES_HPP_
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
  class DescribeScalingGroupsResponseBodyScalingGroupsDBInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsResponseBodyScalingGroupsDBInstances& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsResponseBodyScalingGroupsDBInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeScalingGroupsResponseBodyScalingGroupsDBInstances() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsDBInstances(const DescribeScalingGroupsResponseBodyScalingGroupsDBInstances &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsDBInstances(DescribeScalingGroupsResponseBodyScalingGroupsDBInstances &&) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsDBInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsResponseBodyScalingGroupsDBInstances() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsDBInstances& operator=(const DescribeScalingGroupsResponseBodyScalingGroupsDBInstances &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsDBInstances& operator=(DescribeScalingGroupsResponseBodyScalingGroupsDBInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBInstanceId_ != nullptr
        && this->securityGroupIds_ != nullptr && this->type_ != nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroupsDBInstances& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & securityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> securityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsDBInstances& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsDBInstances& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroupsDBInstances& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the database.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    // The IDs of the security groups that are added to the security group whitelist of the attached database.
    std::shared_ptr<vector<string>> securityGroupIds_ = nullptr;
    // The type of the database. Valid values:
    // 
    // *   RDS.
    // *   Redis.
    // *   MongoDB.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
