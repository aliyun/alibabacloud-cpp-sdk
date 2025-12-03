// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYIPCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYIPCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyIpControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyIpControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_TO_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyIpControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(IpControlId, ipControlId_);
      DARABONBA_PTR_FROM_JSON(IpControlName, ipControlName_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    ModifyIpControlRequest() = default ;
    ModifyIpControlRequest(const ModifyIpControlRequest &) = default ;
    ModifyIpControlRequest(ModifyIpControlRequest &&) = default ;
    ModifyIpControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyIpControlRequest() = default ;
    ModifyIpControlRequest& operator=(const ModifyIpControlRequest &) = default ;
    ModifyIpControlRequest& operator=(ModifyIpControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->ipControlId_ == nullptr && return this->ipControlName_ == nullptr && return this->securityToken_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyIpControlRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ipControlId Field Functions 
    bool hasIpControlId() const { return this->ipControlId_ != nullptr;};
    void deleteIpControlId() { this->ipControlId_ = nullptr;};
    inline string ipControlId() const { DARABONBA_PTR_GET_DEFAULT(ipControlId_, "") };
    inline ModifyIpControlRequest& setIpControlId(string ipControlId) { DARABONBA_PTR_SET_VALUE(ipControlId_, ipControlId) };


    // ipControlName Field Functions 
    bool hasIpControlName() const { return this->ipControlName_ != nullptr;};
    void deleteIpControlName() { this->ipControlName_ = nullptr;};
    inline string ipControlName() const { DARABONBA_PTR_GET_DEFAULT(ipControlName_, "") };
    inline ModifyIpControlRequest& setIpControlName(string ipControlName) { DARABONBA_PTR_SET_VALUE(ipControlName_, ipControlName) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline ModifyIpControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The description. The description can be up to 200 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the ACL. The ID is unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> ipControlId_ = nullptr;
    // The name of the ACL. The name must be 4 to 50 characters in length, and can contain letters, digits, and underscores (_). The name cannot start with an underscore (_).
    std::shared_ptr<string> ipControlName_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
