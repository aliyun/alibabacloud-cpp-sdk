// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCESECURITYGROUPIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCESECURITYGROUPIDS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds() = default ;
    DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds(const DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds(DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds() = default ;
    DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds& operator=(const DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds& operator=(DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const vector<string> & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
    inline vector<string> securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
    inline DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline DescribeInstancesResponseBodyInstancesInstanceSecurityGroupIds& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


  protected:
    std::shared_ptr<vector<string>> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
