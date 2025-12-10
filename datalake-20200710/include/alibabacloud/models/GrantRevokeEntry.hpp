// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRANTREVOKEENTRY_HPP_
#define ALIBABACLOUD_MODELS_GRANTREVOKEENTRY_HPP_
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
  class GrantRevokeEntry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrantRevokeEntry& obj) { 
      DARABONBA_PTR_TO_JSON(Accesses, accesses_);
      DARABONBA_PTR_TO_JSON(DelegateAccesses, delegateAccesses_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_TO_JSON(Principal, principal_);
    };
    friend void from_json(const Darabonba::Json& j, GrantRevokeEntry& obj) { 
      DARABONBA_PTR_FROM_JSON(Accesses, accesses_);
      DARABONBA_PTR_FROM_JSON(DelegateAccesses, delegateAccesses_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_FROM_JSON(Principal, principal_);
    };
    GrantRevokeEntry() = default ;
    GrantRevokeEntry(const GrantRevokeEntry &) = default ;
    GrantRevokeEntry(GrantRevokeEntry &&) = default ;
    GrantRevokeEntry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrantRevokeEntry() = default ;
    GrantRevokeEntry& operator=(const GrantRevokeEntry &) = default ;
    GrantRevokeEntry& operator=(GrantRevokeEntry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accesses_ == nullptr
        && return this->delegateAccesses_ == nullptr && return this->id_ == nullptr && return this->metaResource_ == nullptr && return this->principal_ == nullptr; };
    // accesses Field Functions 
    bool hasAccesses() const { return this->accesses_ != nullptr;};
    void deleteAccesses() { this->accesses_ = nullptr;};
    inline const vector<string> & accesses() const { DARABONBA_PTR_GET_CONST(accesses_, vector<string>) };
    inline vector<string> accesses() { DARABONBA_PTR_GET(accesses_, vector<string>) };
    inline GrantRevokeEntry& setAccesses(const vector<string> & accesses) { DARABONBA_PTR_SET_VALUE(accesses_, accesses) };
    inline GrantRevokeEntry& setAccesses(vector<string> && accesses) { DARABONBA_PTR_SET_RVALUE(accesses_, accesses) };


    // delegateAccesses Field Functions 
    bool hasDelegateAccesses() const { return this->delegateAccesses_ != nullptr;};
    void deleteDelegateAccesses() { this->delegateAccesses_ = nullptr;};
    inline const vector<string> & delegateAccesses() const { DARABONBA_PTR_GET_CONST(delegateAccesses_, vector<string>) };
    inline vector<string> delegateAccesses() { DARABONBA_PTR_GET(delegateAccesses_, vector<string>) };
    inline GrantRevokeEntry& setDelegateAccesses(const vector<string> & delegateAccesses) { DARABONBA_PTR_SET_VALUE(delegateAccesses_, delegateAccesses) };
    inline GrantRevokeEntry& setDelegateAccesses(vector<string> && delegateAccesses) { DARABONBA_PTR_SET_RVALUE(delegateAccesses_, delegateAccesses) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GrantRevokeEntry& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metaResource Field Functions 
    bool hasMetaResource() const { return this->metaResource_ != nullptr;};
    void deleteMetaResource() { this->metaResource_ = nullptr;};
    inline const MetaResource & metaResource() const { DARABONBA_PTR_GET_CONST(metaResource_, MetaResource) };
    inline MetaResource metaResource() { DARABONBA_PTR_GET(metaResource_, MetaResource) };
    inline GrantRevokeEntry& setMetaResource(const MetaResource & metaResource) { DARABONBA_PTR_SET_VALUE(metaResource_, metaResource) };
    inline GrantRevokeEntry& setMetaResource(MetaResource && metaResource) { DARABONBA_PTR_SET_RVALUE(metaResource_, metaResource) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline const Principal & principal() const { DARABONBA_PTR_GET_CONST(principal_, Principal) };
    inline Principal principal() { DARABONBA_PTR_GET(principal_, Principal) };
    inline GrantRevokeEntry& setPrincipal(const Principal & principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };
    inline GrantRevokeEntry& setPrincipal(Principal && principal) { DARABONBA_PTR_SET_RVALUE(principal_, principal) };


  protected:
    std::shared_ptr<vector<string>> accesses_ = nullptr;
    std::shared_ptr<vector<string>> delegateAccesses_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<MetaResource> metaResource_ = nullptr;
    std::shared_ptr<Principal> principal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
