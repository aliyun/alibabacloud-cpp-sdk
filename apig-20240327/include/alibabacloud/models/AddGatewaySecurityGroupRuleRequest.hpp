// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDGATEWAYSECURITYGROUPRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDGATEWAYSECURITYGROUPRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AddGatewaySecurityGroupRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddGatewaySecurityGroupRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(portRanges, portRanges_);
      DARABONBA_PTR_TO_JSON(securityGroupId, securityGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AddGatewaySecurityGroupRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(portRanges, portRanges_);
      DARABONBA_PTR_FROM_JSON(securityGroupId, securityGroupId_);
    };
    AddGatewaySecurityGroupRuleRequest() = default ;
    AddGatewaySecurityGroupRuleRequest(const AddGatewaySecurityGroupRuleRequest &) = default ;
    AddGatewaySecurityGroupRuleRequest(AddGatewaySecurityGroupRuleRequest &&) = default ;
    AddGatewaySecurityGroupRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddGatewaySecurityGroupRuleRequest() = default ;
    AddGatewaySecurityGroupRuleRequest& operator=(const AddGatewaySecurityGroupRuleRequest &) = default ;
    AddGatewaySecurityGroupRuleRequest& operator=(AddGatewaySecurityGroupRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->portRanges_ == nullptr && return this->securityGroupId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddGatewaySecurityGroupRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // portRanges Field Functions 
    bool hasPortRanges() const { return this->portRanges_ != nullptr;};
    void deletePortRanges() { this->portRanges_ = nullptr;};
    inline const vector<string> & portRanges() const { DARABONBA_PTR_GET_CONST(portRanges_, vector<string>) };
    inline vector<string> portRanges() { DARABONBA_PTR_GET(portRanges_, vector<string>) };
    inline AddGatewaySecurityGroupRuleRequest& setPortRanges(const vector<string> & portRanges) { DARABONBA_PTR_SET_VALUE(portRanges_, portRanges) };
    inline AddGatewaySecurityGroupRuleRequest& setPortRanges(vector<string> && portRanges) { DARABONBA_PTR_SET_RVALUE(portRanges_, portRanges) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline AddGatewaySecurityGroupRuleRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


  protected:
    // Description of the security group rule.
    std::shared_ptr<string> description_ = nullptr;
    // Port ranges.
    std::shared_ptr<vector<string>> portRanges_ = nullptr;
    // Security group ID.
    std::shared_ptr<string> securityGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
