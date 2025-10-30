// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODYPROCESSESENDPOINTHARDENINGPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPROVALPROCESSESRESPONSEBODYPROCESSESENDPOINTHARDENINGPOLICIES_HPP_
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
  class ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies() = default ;
    ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies(const ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies &) = default ;
    ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies(ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies &&) = default ;
    ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies() = default ;
    ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies& operator=(const ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies &) = default ;
    ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies& operator=(ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies &&) = default ;
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
    inline ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline ListApprovalProcessesResponseBodyProcessesEndpointHardeningPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
