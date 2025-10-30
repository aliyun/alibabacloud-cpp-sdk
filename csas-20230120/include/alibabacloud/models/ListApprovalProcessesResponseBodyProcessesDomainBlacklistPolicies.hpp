// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODYPROCESSESDOMAINBLACKLISTPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODYPROCESSESDOMAINBLACKLISTPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies() = default ;
    ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies(const ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies &) = default ;
    ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies(ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies &&) = default ;
    ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies() = default ;
    ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies& operator=(const ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies &) = default ;
    ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies& operator=(ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyIds_ == nullptr
        && return this->schemaId_ == nullptr; };
    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & policyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> policyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline ListApprovalProcessesResponseBodyProcessesDomainBlacklistPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
