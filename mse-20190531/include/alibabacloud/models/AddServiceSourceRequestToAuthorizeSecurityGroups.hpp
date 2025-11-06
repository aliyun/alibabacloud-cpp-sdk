// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDSERVICESOURCEREQUESTTOAUTHORIZESECURITYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_ADDSERVICESOURCEREQUESTTOAUTHORIZESECURITYGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddServiceSourceRequestToAuthorizeSecurityGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddServiceSourceRequestToAuthorizeSecurityGroups& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(PortRange, portRange_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddServiceSourceRequestToAuthorizeSecurityGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(PortRange, portRange_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
    };
    AddServiceSourceRequestToAuthorizeSecurityGroups() = default ;
    AddServiceSourceRequestToAuthorizeSecurityGroups(const AddServiceSourceRequestToAuthorizeSecurityGroups &) = default ;
    AddServiceSourceRequestToAuthorizeSecurityGroups(AddServiceSourceRequestToAuthorizeSecurityGroups &&) = default ;
    AddServiceSourceRequestToAuthorizeSecurityGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddServiceSourceRequestToAuthorizeSecurityGroups() = default ;
    AddServiceSourceRequestToAuthorizeSecurityGroups& operator=(const AddServiceSourceRequestToAuthorizeSecurityGroups &) = default ;
    AddServiceSourceRequestToAuthorizeSecurityGroups& operator=(AddServiceSourceRequestToAuthorizeSecurityGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->portRange_ == nullptr && return this->securityGroupId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddServiceSourceRequestToAuthorizeSecurityGroups& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // portRange Field Functions 
    bool hasPortRange() const { return this->portRange_ != nullptr;};
    void deletePortRange() { this->portRange_ = nullptr;};
    inline string portRange() const { DARABONBA_PTR_GET_DEFAULT(portRange_, "") };
    inline AddServiceSourceRequestToAuthorizeSecurityGroups& setPortRange(string portRange) { DARABONBA_PTR_SET_VALUE(portRange_, portRange) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline AddServiceSourceRequestToAuthorizeSecurityGroups& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // The description of the authorization record.
    std::shared_ptr<string> description_ = nullptr;
    // The authorized port range of the security group. You can select multiple port ranges. Separate each port range with a comma (,).
    std::shared_ptr<string> portRange_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
