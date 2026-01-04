// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSecurityGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    DescribeSecurityGroupAttributeRequest() = default ;
    DescribeSecurityGroupAttributeRequest(const DescribeSecurityGroupAttributeRequest &) = default ;
    DescribeSecurityGroupAttributeRequest(DescribeSecurityGroupAttributeRequest &&) = default ;
    DescribeSecurityGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeRequest() = default ;
    DescribeSecurityGroupAttributeRequest& operator=(const DescribeSecurityGroupAttributeRequest &) = default ;
    DescribeSecurityGroupAttributeRequest& operator=(DescribeSecurityGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeSecurityGroupAttributeRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The ID of the security group.
    // 
    // This parameter is required.
    shared_ptr<string> securityGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
