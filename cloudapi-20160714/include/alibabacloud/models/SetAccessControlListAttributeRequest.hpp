// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETACCESSCONTROLLISTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETACCESSCONTROLLISTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetAccessControlListAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetAccessControlListAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, SetAccessControlListAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    SetAccessControlListAttributeRequest() = default ;
    SetAccessControlListAttributeRequest(const SetAccessControlListAttributeRequest &) = default ;
    SetAccessControlListAttributeRequest(SetAccessControlListAttributeRequest &&) = default ;
    SetAccessControlListAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetAccessControlListAttributeRequest() = default ;
    SetAccessControlListAttributeRequest& operator=(const SetAccessControlListAttributeRequest &) = default ;
    SetAccessControlListAttributeRequest& operator=(SetAccessControlListAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclId_ == nullptr
        && return this->aclName_ == nullptr && return this->securityToken_ == nullptr; };
    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline SetAccessControlListAttributeRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline SetAccessControlListAttributeRequest& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetAccessControlListAttributeRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> aclId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> aclName_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
