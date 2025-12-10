// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GRANTPERMISSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/MetaResource.hpp>
#include <alibabacloud/models/Principal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GrantPermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantPermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accesses, accesses_);
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DelegateAccesses, delegateAccesses_);
      DARABONBA_PTR_TO_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_TO_JSON(Principal, principal_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GrantPermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accesses, accesses_);
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DelegateAccesses, delegateAccesses_);
      DARABONBA_PTR_FROM_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_FROM_JSON(Principal, principal_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GrantPermissionsRequest() = default ;
    GrantPermissionsRequest(const GrantPermissionsRequest &) = default ;
    GrantPermissionsRequest(GrantPermissionsRequest &&) = default ;
    GrantPermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantPermissionsRequest() = default ;
    GrantPermissionsRequest& operator=(const GrantPermissionsRequest &) = default ;
    GrantPermissionsRequest& operator=(GrantPermissionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accesses_ == nullptr
        && return this->catalogId_ == nullptr && return this->delegateAccesses_ == nullptr && return this->metaResource_ == nullptr && return this->principal_ == nullptr && return this->type_ == nullptr; };
    // accesses Field Functions 
    bool hasAccesses() const { return this->accesses_ != nullptr;};
    void deleteAccesses() { this->accesses_ = nullptr;};
    inline const vector<string> & accesses() const { DARABONBA_PTR_GET_CONST(accesses_, vector<string>) };
    inline vector<string> accesses() { DARABONBA_PTR_GET(accesses_, vector<string>) };
    inline GrantPermissionsRequest& setAccesses(const vector<string> & accesses) { DARABONBA_PTR_SET_VALUE(accesses_, accesses) };
    inline GrantPermissionsRequest& setAccesses(vector<string> && accesses) { DARABONBA_PTR_SET_RVALUE(accesses_, accesses) };


    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline GrantPermissionsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // delegateAccesses Field Functions 
    bool hasDelegateAccesses() const { return this->delegateAccesses_ != nullptr;};
    void deleteDelegateAccesses() { this->delegateAccesses_ = nullptr;};
    inline const vector<string> & delegateAccesses() const { DARABONBA_PTR_GET_CONST(delegateAccesses_, vector<string>) };
    inline vector<string> delegateAccesses() { DARABONBA_PTR_GET(delegateAccesses_, vector<string>) };
    inline GrantPermissionsRequest& setDelegateAccesses(const vector<string> & delegateAccesses) { DARABONBA_PTR_SET_VALUE(delegateAccesses_, delegateAccesses) };
    inline GrantPermissionsRequest& setDelegateAccesses(vector<string> && delegateAccesses) { DARABONBA_PTR_SET_RVALUE(delegateAccesses_, delegateAccesses) };


    // metaResource Field Functions 
    bool hasMetaResource() const { return this->metaResource_ != nullptr;};
    void deleteMetaResource() { this->metaResource_ = nullptr;};
    inline const MetaResource & metaResource() const { DARABONBA_PTR_GET_CONST(metaResource_, MetaResource) };
    inline MetaResource metaResource() { DARABONBA_PTR_GET(metaResource_, MetaResource) };
    inline GrantPermissionsRequest& setMetaResource(const MetaResource & metaResource) { DARABONBA_PTR_SET_VALUE(metaResource_, metaResource) };
    inline GrantPermissionsRequest& setMetaResource(MetaResource && metaResource) { DARABONBA_PTR_SET_RVALUE(metaResource_, metaResource) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline const Principal & principal() const { DARABONBA_PTR_GET_CONST(principal_, Principal) };
    inline Principal principal() { DARABONBA_PTR_GET(principal_, Principal) };
    inline GrantPermissionsRequest& setPrincipal(const Principal & principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };
    inline GrantPermissionsRequest& setPrincipal(Principal && principal) { DARABONBA_PTR_SET_RVALUE(principal_, principal) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GrantPermissionsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of the access permissions to be granted.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> accesses_ = nullptr;
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The list of the grantable access permissions to be granted.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> delegateAccesses_ = nullptr;
    // The metadata resource to be authorized.
    // 
    // This parameter is required.
    std::shared_ptr<MetaResource> metaResource_ = nullptr;
    // The users or roles to be authorized. Formats:
    // 
    // *   RAM user: acs:ram::[accountId]:user/[userName]
    // *   RAM role: acs:ram::[accountId]:role/[roleName]
    // *   Data lake role: acs:dlf::[accountId]:role/[roleName]
    // 
    // This parameter is required.
    std::shared_ptr<Principal> principal_ = nullptr;
    // The authorization type. Only Hive is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
