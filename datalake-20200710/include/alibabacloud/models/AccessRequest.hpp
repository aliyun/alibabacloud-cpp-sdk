// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Principal.hpp>
#include <vector>
#include <alibabacloud/models/PrivilegeResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class AccessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AccessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(Principal, principal_);
      DARABONBA_PTR_TO_JSON(PrivilegeResources, privilegeResources_);
    };
    friend void from_json(const Darabonba::Json& j, AccessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(Principal, principal_);
      DARABONBA_PTR_FROM_JSON(PrivilegeResources, privilegeResources_);
    };
    AccessRequest() = default ;
    AccessRequest(const AccessRequest &) = default ;
    AccessRequest(AccessRequest &&) = default ;
    AccessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AccessRequest() = default ;
    AccessRequest& operator=(const AccessRequest &) = default ;
    AccessRequest& operator=(AccessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogId_ == nullptr
        && return this->principal_ == nullptr && return this->privilegeResources_ == nullptr; };
    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline AccessRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline const Principal & principal() const { DARABONBA_PTR_GET_CONST(principal_, Principal) };
    inline Principal principal() { DARABONBA_PTR_GET(principal_, Principal) };
    inline AccessRequest& setPrincipal(const Principal & principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };
    inline AccessRequest& setPrincipal(Principal && principal) { DARABONBA_PTR_SET_RVALUE(principal_, principal) };


    // privilegeResources Field Functions 
    bool hasPrivilegeResources() const { return this->privilegeResources_ != nullptr;};
    void deletePrivilegeResources() { this->privilegeResources_ = nullptr;};
    inline const vector<PrivilegeResource> & privilegeResources() const { DARABONBA_PTR_GET_CONST(privilegeResources_, vector<PrivilegeResource>) };
    inline vector<PrivilegeResource> privilegeResources() { DARABONBA_PTR_GET(privilegeResources_, vector<PrivilegeResource>) };
    inline AccessRequest& setPrivilegeResources(const vector<PrivilegeResource> & privilegeResources) { DARABONBA_PTR_SET_VALUE(privilegeResources_, privilegeResources) };
    inline AccessRequest& setPrivilegeResources(vector<PrivilegeResource> && privilegeResources) { DARABONBA_PTR_SET_RVALUE(privilegeResources_, privilegeResources) };


  protected:
    std::shared_ptr<string> catalogId_ = nullptr;
    std::shared_ptr<Principal> principal_ = nullptr;
    std::shared_ptr<vector<PrivilegeResource>> privilegeResources_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
