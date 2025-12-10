// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRINCIPALRESOURCEPERMISSIONS_HPP_
#define ALIBABACLOUD_MODELS_PRINCIPALRESOURCEPERMISSIONS_HPP_
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
  class PrincipalResourcePermissions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PrincipalResourcePermissions& obj) { 
      DARABONBA_PTR_TO_JSON(Accesses, accesses_);
      DARABONBA_PTR_TO_JSON(DelegateAccesses, delegateAccesses_);
      DARABONBA_PTR_TO_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_TO_JSON(Principal, principal_);
    };
    friend void from_json(const Darabonba::Json& j, PrincipalResourcePermissions& obj) { 
      DARABONBA_PTR_FROM_JSON(Accesses, accesses_);
      DARABONBA_PTR_FROM_JSON(DelegateAccesses, delegateAccesses_);
      DARABONBA_PTR_FROM_JSON(MetaResource, metaResource_);
      DARABONBA_PTR_FROM_JSON(Principal, principal_);
    };
    PrincipalResourcePermissions() = default ;
    PrincipalResourcePermissions(const PrincipalResourcePermissions &) = default ;
    PrincipalResourcePermissions(PrincipalResourcePermissions &&) = default ;
    PrincipalResourcePermissions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PrincipalResourcePermissions() = default ;
    PrincipalResourcePermissions& operator=(const PrincipalResourcePermissions &) = default ;
    PrincipalResourcePermissions& operator=(PrincipalResourcePermissions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accesses_ == nullptr
        && return this->delegateAccesses_ == nullptr && return this->metaResource_ == nullptr && return this->principal_ == nullptr; };
    // accesses Field Functions 
    bool hasAccesses() const { return this->accesses_ != nullptr;};
    void deleteAccesses() { this->accesses_ = nullptr;};
    inline const vector<string> & accesses() const { DARABONBA_PTR_GET_CONST(accesses_, vector<string>) };
    inline vector<string> accesses() { DARABONBA_PTR_GET(accesses_, vector<string>) };
    inline PrincipalResourcePermissions& setAccesses(const vector<string> & accesses) { DARABONBA_PTR_SET_VALUE(accesses_, accesses) };
    inline PrincipalResourcePermissions& setAccesses(vector<string> && accesses) { DARABONBA_PTR_SET_RVALUE(accesses_, accesses) };


    // delegateAccesses Field Functions 
    bool hasDelegateAccesses() const { return this->delegateAccesses_ != nullptr;};
    void deleteDelegateAccesses() { this->delegateAccesses_ = nullptr;};
    inline const vector<string> & delegateAccesses() const { DARABONBA_PTR_GET_CONST(delegateAccesses_, vector<string>) };
    inline vector<string> delegateAccesses() { DARABONBA_PTR_GET(delegateAccesses_, vector<string>) };
    inline PrincipalResourcePermissions& setDelegateAccesses(const vector<string> & delegateAccesses) { DARABONBA_PTR_SET_VALUE(delegateAccesses_, delegateAccesses) };
    inline PrincipalResourcePermissions& setDelegateAccesses(vector<string> && delegateAccesses) { DARABONBA_PTR_SET_RVALUE(delegateAccesses_, delegateAccesses) };


    // metaResource Field Functions 
    bool hasMetaResource() const { return this->metaResource_ != nullptr;};
    void deleteMetaResource() { this->metaResource_ = nullptr;};
    inline const MetaResource & metaResource() const { DARABONBA_PTR_GET_CONST(metaResource_, MetaResource) };
    inline MetaResource metaResource() { DARABONBA_PTR_GET(metaResource_, MetaResource) };
    inline PrincipalResourcePermissions& setMetaResource(const MetaResource & metaResource) { DARABONBA_PTR_SET_VALUE(metaResource_, metaResource) };
    inline PrincipalResourcePermissions& setMetaResource(MetaResource && metaResource) { DARABONBA_PTR_SET_RVALUE(metaResource_, metaResource) };


    // principal Field Functions 
    bool hasPrincipal() const { return this->principal_ != nullptr;};
    void deletePrincipal() { this->principal_ = nullptr;};
    inline const Principal & principal() const { DARABONBA_PTR_GET_CONST(principal_, Principal) };
    inline Principal principal() { DARABONBA_PTR_GET(principal_, Principal) };
    inline PrincipalResourcePermissions& setPrincipal(const Principal & principal) { DARABONBA_PTR_SET_VALUE(principal_, principal) };
    inline PrincipalResourcePermissions& setPrincipal(Principal && principal) { DARABONBA_PTR_SET_RVALUE(principal_, principal) };


  protected:
    std::shared_ptr<vector<string>> accesses_ = nullptr;
    std::shared_ptr<vector<string>> delegateAccesses_ = nullptr;
    // This parameter is required.
    std::shared_ptr<MetaResource> metaResource_ = nullptr;
    // This parameter is required.
    std::shared_ptr<Principal> principal_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
