// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEACCESSCONTROLLISTENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEACCESSCONTROLLISTENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveAccessControlListEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveAccessControlListEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_TO_JSON(AclId, aclId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveAccessControlListEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AclEntrys, aclEntrys_);
      DARABONBA_PTR_FROM_JSON(AclId, aclId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
    };
    RemoveAccessControlListEntryRequest() = default ;
    RemoveAccessControlListEntryRequest(const RemoveAccessControlListEntryRequest &) = default ;
    RemoveAccessControlListEntryRequest(RemoveAccessControlListEntryRequest &&) = default ;
    RemoveAccessControlListEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveAccessControlListEntryRequest() = default ;
    RemoveAccessControlListEntryRequest& operator=(const RemoveAccessControlListEntryRequest &) = default ;
    RemoveAccessControlListEntryRequest& operator=(RemoveAccessControlListEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclEntrys_ == nullptr
        && return this->aclId_ == nullptr && return this->securityToken_ == nullptr; };
    // aclEntrys Field Functions 
    bool hasAclEntrys() const { return this->aclEntrys_ != nullptr;};
    void deleteAclEntrys() { this->aclEntrys_ = nullptr;};
    inline string aclEntrys() const { DARABONBA_PTR_GET_DEFAULT(aclEntrys_, "") };
    inline RemoveAccessControlListEntryRequest& setAclEntrys(string aclEntrys) { DARABONBA_PTR_SET_VALUE(aclEntrys_, aclEntrys) };


    // aclId Field Functions 
    bool hasAclId() const { return this->aclId_ != nullptr;};
    void deleteAclId() { this->aclId_ = nullptr;};
    inline string aclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
    inline RemoveAccessControlListEntryRequest& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RemoveAccessControlListEntryRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


  protected:
    std::shared_ptr<string> aclEntrys_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> aclId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
