// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGSCOPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONPROVISIONINGSCOPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GetApplicationProvisioningScopeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationProvisioningScopeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(groupIds, groupIds_);
      DARABONBA_PTR_TO_JSON(organizationalUnitIds, organizationalUnitIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationProvisioningScopeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(groupIds, groupIds_);
      DARABONBA_PTR_FROM_JSON(organizationalUnitIds, organizationalUnitIds_);
    };
    GetApplicationProvisioningScopeResponseBody() = default ;
    GetApplicationProvisioningScopeResponseBody(const GetApplicationProvisioningScopeResponseBody &) = default ;
    GetApplicationProvisioningScopeResponseBody(GetApplicationProvisioningScopeResponseBody &&) = default ;
    GetApplicationProvisioningScopeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationProvisioningScopeResponseBody() = default ;
    GetApplicationProvisioningScopeResponseBody& operator=(const GetApplicationProvisioningScopeResponseBody &) = default ;
    GetApplicationProvisioningScopeResponseBody& operator=(GetApplicationProvisioningScopeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupIds_ == nullptr
        && return this->organizationalUnitIds_ == nullptr; };
    // groupIds Field Functions 
    bool hasGroupIds() const { return this->groupIds_ != nullptr;};
    void deleteGroupIds() { this->groupIds_ = nullptr;};
    inline const vector<string> & groupIds() const { DARABONBA_PTR_GET_CONST(groupIds_, vector<string>) };
    inline vector<string> groupIds() { DARABONBA_PTR_GET(groupIds_, vector<string>) };
    inline GetApplicationProvisioningScopeResponseBody& setGroupIds(const vector<string> & groupIds) { DARABONBA_PTR_SET_VALUE(groupIds_, groupIds) };
    inline GetApplicationProvisioningScopeResponseBody& setGroupIds(vector<string> && groupIds) { DARABONBA_PTR_SET_RVALUE(groupIds_, groupIds) };


    // organizationalUnitIds Field Functions 
    bool hasOrganizationalUnitIds() const { return this->organizationalUnitIds_ != nullptr;};
    void deleteOrganizationalUnitIds() { this->organizationalUnitIds_ = nullptr;};
    inline const vector<string> & organizationalUnitIds() const { DARABONBA_PTR_GET_CONST(organizationalUnitIds_, vector<string>) };
    inline vector<string> organizationalUnitIds() { DARABONBA_PTR_GET(organizationalUnitIds_, vector<string>) };
    inline GetApplicationProvisioningScopeResponseBody& setOrganizationalUnitIds(const vector<string> & organizationalUnitIds) { DARABONBA_PTR_SET_VALUE(organizationalUnitIds_, organizationalUnitIds) };
    inline GetApplicationProvisioningScopeResponseBody& setOrganizationalUnitIds(vector<string> && organizationalUnitIds) { DARABONBA_PTR_SET_RVALUE(organizationalUnitIds_, organizationalUnitIds) };


  protected:
    std::shared_ptr<vector<string>> groupIds_ = nullptr;
    // The IDs of organizational units.
    std::shared_ptr<vector<string>> organizationalUnitIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
