// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYGROUPATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecurityGroupAttributeResponseBodyPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSecurityGroupAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityGroupAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    DescribeSecurityGroupAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityGroupAttributeResponseBody() = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(const DescribeSecurityGroupAttributeResponseBody &) = default ;
    DescribeSecurityGroupAttributeResponseBody& operator=(DescribeSecurityGroupAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->permissions_ != nullptr && this->requestId_ != nullptr && this->securityGroupId_ != nullptr && this->securityGroupName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const DescribeSecurityGroupAttributeResponseBodyPermissions & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, DescribeSecurityGroupAttributeResponseBodyPermissions) };
    inline DescribeSecurityGroupAttributeResponseBodyPermissions permissions() { DARABONBA_PTR_GET(permissions_, DescribeSecurityGroupAttributeResponseBodyPermissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setPermissions(const DescribeSecurityGroupAttributeResponseBodyPermissions & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline DescribeSecurityGroupAttributeResponseBody& setPermissions(DescribeSecurityGroupAttributeResponseBodyPermissions && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline DescribeSecurityGroupAttributeResponseBody& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    // The description of the security group.
    std::shared_ptr<string> description_ = nullptr;
    // Details about the rules.
    std::shared_ptr<DescribeSecurityGroupAttributeResponseBodyPermissions> permissions_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the destination security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The name of the destination security group.
    std::shared_ptr<string> securityGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
