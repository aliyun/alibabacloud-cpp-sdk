// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPERMISSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPERMISSIONSREQUEST_HPP_
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
  class UpdatePermissionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePermissionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accesses, accesses_);
      DARABONBA_PTR_TO_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_TO_JSON(DelegateAccesses, delegateAccesses_);
      DARABONBA_PTR_TO_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_TO_JSON(Principal, principal_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePermissionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accesses, accesses_);
      DARABONBA_PTR_FROM_JSON(CatalogId, catalogId_);
      DARABONBA_PTR_FROM_JSON(DelegateAccesses, delegateAccesses_);
      DARABONBA_PTR_FROM_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_FROM_JSON(Principal, principal_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    UpdatePermissionsRequest() = default ;
    UpdatePermissionsRequest(const UpdatePermissionsRequest &) = default ;
    UpdatePermissionsRequest(UpdatePermissionsRequest &&) = default ;
    UpdatePermissionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePermissionsRequest() = default ;
    UpdatePermissionsRequest& operator=(const UpdatePermissionsRequest &) = default ;
    UpdatePermissionsRequest& operator=(UpdatePermissionsRequest &&) = default ;
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
    inline UpdatePermissionsRequest& setAccesses(const vector<string> & accesses) { DARABONBA_PTR_SET_VALUE(accesses_, accesses) };
    inline UpdatePermissionsRequest& setAccesses(vector<string> && accesses) { DARABONBA_PTR_SET_RVALUE(accesses_, accesses) };


    // catalogId Field Functions 
    bool hasCatalogId() const { return this->catalogId_ != nullptr;};
    void deleteCatalogId() { this->catalogId_ = nullptr;};
    inline string catalogId() const { DARABONBA_PTR_GET_DEFAULT(catalogId_, "") };
    inline UpdatePermissionsRequest& setCatalogId(string catalogId) { DARABONBA_PTR_SET_VALUE(catalogId_, catalogId) };


    // delegateAccesses Field Functions 
    bool hasDelegateAccesses() const { return this->delegateAccesses_ != nullptr;};
    void deleteDelegateAccesses() { this->delegateAccesses_ = nullptr;};
    inline const vector<string> & delegateAccesses() const { DARABONBA_PTR_GET_CONST(delegateAccesses_, vector<string>) };
    inline vector<string> delegateAccesses() { DARABONBA_PTR_GET(delegateAccesses_, vector<string>) };
    inline UpdatePermissionsRequest& setDelegateAccesses(const vector<string> & delegateAccesses) { DARABONBA_PTR_SET_VALUE(delegateAccesses_, delegateAccesses) };
    inline UpdatePermissionsRequest& setDelegateAccesses(vector<string> && delegateAccesses) { DARABONBA_PTR_SET_RVALUE(delegateAccesses_, delegateAccesses) };


    // metaResource Field Functions 
    bool hasMetaResource() const { return this->metaResource_ != nullptr;};
    void deleteMetaResource() { this->metaResource_ = nullptr;};
    inline const MetaResource & metaResource() const { DARABONBA_PTR_GET_CONST(metaResource_, MetaResource) };
    inline MetaResource metaResource() { DARABONBA_PTR_GET(metaResource_, MetaResource) };
    inline UpdatePermissionsRequest& setMetaResource(const MetaResource & metaResource) { DARABONBA_PTR_SET_VALUE(metaResource_, metaResource) };
    inline UpdatePermissionsRequest& setMetaResource(MetaResource && metaResource) { DARABONBA_PTR_SET_RVALUE(metaResource_, metaResource) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline const Principal & principal() const { DARABONBA_PTR_GET_CONST(principal_, Principal) };
    inline Principal principal() { DARABONBA_PTR_GET(principal_, Principal) };
    inline UpdatePermissionsRequest& setPrincipal(const Principal & principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };
    inline UpdatePermissionsRequest& setPrincipal(Principal && principal) { DARABONBA_PTR_SET_RVALUE(principal_, principal) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdatePermissionsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The list of access permissions to be authorized.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> accesses_ = nullptr;
    // The catalog ID.
    std::shared_ptr<string> catalogId_ = nullptr;
    // The list of access permissions that can be delegated. This parameter is unavailable.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> delegateAccesses_ = nullptr;
    // The metadata resource to be authorized.
    // 
    // This parameter is required.
    std::shared_ptr<MetaResource> metaResource_ = nullptr;
    // The authorized users or roles. Formats:
    // 
    // *   RAM user: acs:ram::[accountId]:user/[userName]
    // *   RAM role: acs:ram::[accountId]:role/[roleName]
    // *   Data lake role: acs:dlf::[accountId]:role/[roleName]
    // 
    // This parameter is required.
    std::shared_ptr<Principal> principal_ = nullptr;
    // The type of the authorization. Only Hive is supported.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
