// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCSECURITYGROUPPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCSecurityGroupPermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCSecurityGroupPermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InnerAccessPolicy, innerAccessPolicy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupPermissions, securityGroupPermissions_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCSecurityGroupPermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InnerAccessPolicy, innerAccessPolicy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupPermissions, securityGroupPermissions_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    DescribeRCSecurityGroupPermissionResponseBody() = default ;
    DescribeRCSecurityGroupPermissionResponseBody(const DescribeRCSecurityGroupPermissionResponseBody &) = default ;
    DescribeRCSecurityGroupPermissionResponseBody(DescribeRCSecurityGroupPermissionResponseBody &&) = default ;
    DescribeRCSecurityGroupPermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCSecurityGroupPermissionResponseBody() = default ;
    DescribeRCSecurityGroupPermissionResponseBody& operator=(const DescribeRCSecurityGroupPermissionResponseBody &) = default ;
    DescribeRCSecurityGroupPermissionResponseBody& operator=(DescribeRCSecurityGroupPermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->innerAccessPolicy_ == nullptr
        && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupPermissions_ == nullptr && return this->vpcId_ == nullptr; };
    // innerAccessPolicy Field Functions 
    bool hasInnerAccessPolicy() const { return this->innerAccessPolicy_ != nullptr;};
    void deleteInnerAccessPolicy() { this->innerAccessPolicy_ = nullptr;};
    inline string innerAccessPolicy() const { DARABONBA_PTR_GET_DEFAULT(innerAccessPolicy_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setInnerAccessPolicy(string innerAccessPolicy) { DARABONBA_PTR_SET_VALUE(innerAccessPolicy_, innerAccessPolicy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupPermissions Field Functions 
    bool hasSecurityGroupPermissions() const { return this->securityGroupPermissions_ != nullptr;};
    void deleteSecurityGroupPermissions() { this->securityGroupPermissions_ = nullptr;};
    inline const vector<DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions> & securityGroupPermissions() const { DARABONBA_PTR_GET_CONST(securityGroupPermissions_, vector<DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions>) };
    inline vector<DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions> securityGroupPermissions() { DARABONBA_PTR_GET(securityGroupPermissions_, vector<DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions>) };
    inline DescribeRCSecurityGroupPermissionResponseBody& setSecurityGroupPermissions(const vector<DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions> & securityGroupPermissions) { DARABONBA_PTR_SET_VALUE(securityGroupPermissions_, securityGroupPermissions) };
    inline DescribeRCSecurityGroupPermissionResponseBody& setSecurityGroupPermissions(vector<DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions> && securityGroupPermissions) { DARABONBA_PTR_SET_RVALUE(securityGroupPermissions_, securityGroupPermissions) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeRCSecurityGroupPermissionResponseBody& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> innerAccessPolicy_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<vector<DescribeRCSecurityGroupPermissionResponseBodySecurityGroupPermissions>> securityGroupPermissions_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
