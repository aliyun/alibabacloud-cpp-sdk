// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYSECURITYGROUPIDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCEATTRIBUTERESPONSEBODYSECURITYGROUPIDS_HPP_
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
  class DescribeRCInstanceAttributeResponseBodySecurityGroupIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceAttributeResponseBodySecurityGroupIds& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceAttributeResponseBodySecurityGroupIds& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    DescribeRCInstanceAttributeResponseBodySecurityGroupIds() = default ;
    DescribeRCInstanceAttributeResponseBodySecurityGroupIds(const DescribeRCInstanceAttributeResponseBodySecurityGroupIds &) = default ;
    DescribeRCInstanceAttributeResponseBodySecurityGroupIds(DescribeRCInstanceAttributeResponseBodySecurityGroupIds &&) = default ;
    DescribeRCInstanceAttributeResponseBodySecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceAttributeResponseBodySecurityGroupIds() = default ;
    DescribeRCInstanceAttributeResponseBodySecurityGroupIds& operator=(const DescribeRCInstanceAttributeResponseBodySecurityGroupIds &) = default ;
    DescribeRCInstanceAttributeResponseBodySecurityGroupIds& operator=(DescribeRCInstanceAttributeResponseBodySecurityGroupIds &&) = default ;
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
    inline DescribeRCInstanceAttributeResponseBodySecurityGroupIds& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline DescribeRCInstanceAttributeResponseBodySecurityGroupIds& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


  protected:
    std::shared_ptr<vector<string>> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
