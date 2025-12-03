// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEACCESSCONTROLLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEACCESSCONTROLLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateAccessControlListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAccessControlListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclName, aclName_);
      DARABONBA_PTR_TO_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAccessControlListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclName, aclName_);
      DARABONBA_PTR_FROM_JSON(AddressIPVersion, addressIPVersion_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    CreateAccessControlListRequest() = default ;
    CreateAccessControlListRequest(const CreateAccessControlListRequest &) = default ;
    CreateAccessControlListRequest(CreateAccessControlListRequest &&) = default ;
    CreateAccessControlListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAccessControlListRequest() = default ;
    CreateAccessControlListRequest& operator=(const CreateAccessControlListRequest &) = default ;
    CreateAccessControlListRequest& operator=(CreateAccessControlListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclName_ == nullptr
        && return this->addressIPVersion_ == nullptr && return this->securityToken_ == nullptr; };
    // aclName Field Functions 
    bool hasAclName() const { return this->aclName_ != nullptr;};
    void deleteAclName() { this->aclName_ = nullptr;};
    inline string aclName() const { DARABONBA_PTR_GET_DEFAULT(aclName_, "") };
    inline CreateAccessControlListRequest& setAclName(string aclName) { DARABONBA_PTR_SET_VALUE(aclName_, aclName) };


    // addressIPVersion Field Functions 
    bool hasAddressIPVersion() const { return this->addressIPVersion_ != nullptr;};
    void deleteAddressIPVersion() { this->addressIPVersion_ = nullptr;};
    inline string addressIPVersion() const { DARABONBA_PTR_GET_DEFAULT(addressIPVersion_, "") };
    inline CreateAccessControlListRequest& setAddressIPVersion(string addressIPVersion) { DARABONBA_PTR_SET_VALUE(addressIPVersion_, addressIPVersion) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline CreateAccessControlListRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    // The name of the ACL. The name must be 1 to 30 characters in length, and can contain letters, digits, periods (.), hyphens (-), forward slashes (/), and underscores (_). The name must be unique within the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> aclName_ = nullptr;
    // The IP protocol version of the ACL. Valid values:
    // 
    // *   **IPv4**
    // *   **IPv6**
    std::shared_ptr<string> addressIPVersion_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
