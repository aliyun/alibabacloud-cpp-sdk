// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYSECURITYGROUPIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINTERFACEATTRIBUTERESPONSEBODYSECURITYGROUPIDS_HPP_
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
  class DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds() = default ;
    DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds(const DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds(DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds &&) = default ;
    DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds() = default ;
    DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds& operator=(const DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds &) = default ;
    DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds& operator=(DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->securityGroupId_ != nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const vector<string> & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
    inline vector<string> securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
    inline DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline DescribeNetworkInterfaceAttributeResponseBodySecurityGroupIds& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


  protected:
    std::shared_ptr<vector<string>> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
