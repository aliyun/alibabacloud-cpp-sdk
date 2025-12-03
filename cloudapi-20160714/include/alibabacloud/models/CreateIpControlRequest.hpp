// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIPCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIPCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateIpControlRequestIpControlPolicys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateIpControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIpControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_TO_JSON(IpControlPolicys, ipControlPolicys_);
      DARABONBA_PTR_TO_JSON(IpControlType, ipControlType_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIpControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_FROM_JSON(IpControlPolicys, ipControlPolicys_);
      DARABONBA_PTR_FROM_JSON(IpControlType, ipControlType_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    CreateIpControlRequest() = default ;
    CreateIpControlRequest(const CreateIpControlRequest &) = default ;
    CreateIpControlRequest(CreateIpControlRequest &&) = default ;
    CreateIpControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIpControlRequest() = default ;
    CreateIpControlRequest& operator=(const CreateIpControlRequest &) = default ;
    CreateIpControlRequest& operator=(CreateIpControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->ipControlName_ == nullptr && return this->ipControlPolicys_ == nullptr && return this->ipControlType_ == nullptr && return this->securityToken_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateIpControlRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipControlName Field Functions 
    bool hasIpControlName() const { return this->ipControlName_ != nullptr;};
    void deleteIpControlName() { this->ipControlName_ = nullptr;};
    inline string ipControlName() const { DARABONBA_PTR_GET_DEFAULT(ipControlName_, "") };
    inline CreateIpControlRequest& setIpControlName(string ipControlName) { DARABONBA_PTR_SET_VALUE(ipControlName_, ipControlName) };


    // ipControlPolicys Field Functions 
    bool hasIpControlPolicys() const { return this->ipControlPolicys_ != nullptr;};
    void deleteIpControlPolicys() { this->ipControlPolicys_ = nullptr;};
    inline const vector<CreateIpControlRequestIpControlPolicys> & ipControlPolicys() const { DARABONBA_PTR_GET_CONST(ipControlPolicys_, vector<CreateIpControlRequestIpControlPolicys>) };
    inline vector<CreateIpControlRequestIpControlPolicys> ipControlPolicys() { DARABONBA_PTR_GET(ipControlPolicys_, vector<CreateIpControlRequestIpControlPolicys>) };
    inline CreateIpControlRequest& setIpControlPolicys(const vector<CreateIpControlRequestIpControlPolicys> & ipControlPolicys) { DARABONBA_PTR_SET_VALUE(ipControlPolicys_, ipControlPolicys) };
    inline CreateIpControlRequest& setIpControlPolicys(vector<CreateIpControlRequestIpControlPolicys> && ipControlPolicys) { DARABONBA_PTR_SET_RVALUE(ipControlPolicys_, ipControlPolicys) };


    // ipControlType Field Functions 
    bool hasIpControlType() const { return this->ipControlType_ != nullptr;};
    void deleteIpControlType() { this->ipControlType_ = nullptr;};
    inline string ipControlType() const { DARABONBA_PTR_GET_DEFAULT(ipControlType_, "") };
    inline CreateIpControlRequest& setIpControlType(string ipControlType) { DARABONBA_PTR_SET_VALUE(ipControlType_, ipControlType) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateIpControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The description. The description can be up to 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The name of the ACL. The name must be 4 to 50 characters in length, and can contain letters, digits, and underscores (_). The name cannot start with an underscore (_).``
    // 
    // This parameter is required.
    std::shared_ptr<string> ipControlName_ = nullptr;
    // The information about the policies. The information is an array of ipcontrolpolicys data.
    std::shared_ptr<vector<CreateIpControlRequestIpControlPolicys>> ipControlPolicys_ = nullptr;
    // The type of the ACL. Valid values:
    // 
    // *   **ALLOW**: an IP address whitelist
    // *   **REFUSE**: an IP address blacklist
    // 
    // This parameter is required.
    std::shared_ptr<string> ipControlType_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
