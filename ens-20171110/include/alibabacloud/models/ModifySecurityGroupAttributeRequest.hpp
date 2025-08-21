// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSECURITYGROUPATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class ModifySecurityGroupAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifySecurityGroupAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupName, securityGroupName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifySecurityGroupAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupName, securityGroupName_);
    };
    ModifySecurityGroupAttributeRequest() = default ;
    ModifySecurityGroupAttributeRequest(const ModifySecurityGroupAttributeRequest &) = default ;
    ModifySecurityGroupAttributeRequest(ModifySecurityGroupAttributeRequest &&) = default ;
    ModifySecurityGroupAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifySecurityGroupAttributeRequest() = default ;
    ModifySecurityGroupAttributeRequest& operator=(const ModifySecurityGroupAttributeRequest &) = default ;
    ModifySecurityGroupAttributeRequest& operator=(ModifySecurityGroupAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->description_ != nullptr
        && this->securityGroupId_ != nullptr && this->securityGroupName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifySecurityGroupAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifySecurityGroupAttributeRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupName Field Functions 
    bool hasSecurityGroupName() const { return this->securityGroupName_ != nullptr;};
    void deleteSecurityGroupName() { this->securityGroupName_ = nullptr;};
    inline string securityGroupName() const { DARABONBA_PTR_GET_DEFAULT(securityGroupName_, "") };
    inline ModifySecurityGroupAttributeRequest& setSecurityGroupName(string securityGroupName) { DARABONBA_PTR_SET_VALUE(securityGroupName_, securityGroupName) };


  protected:
    // The description of the security group.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the security group.
    // 
    // This parameter is required.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    // The name of the security group. The name of a bucket must meet the following requirements:
    // 
    // *   The name must be 2 to 128 characters in length.
    // *   The name must start with a letter but cannot start with http:// or https://.
    // *   The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    std::shared_ptr<string> securityGroupName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
