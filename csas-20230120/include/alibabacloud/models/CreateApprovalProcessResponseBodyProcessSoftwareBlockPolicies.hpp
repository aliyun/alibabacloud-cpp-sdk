// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSRESPONSEBODYPROCESSSOFTWAREBLOCKPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPROVALPROCESSRESPONSEBODYPROCESSSOFTWAREBLOCKPOLICIES_HPP_
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
  class CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies() = default ;
    CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies(const CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies &) = default ;
    CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies(CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies &&) = default ;
    CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies() = default ;
    CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies& operator=(const CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies &) = default ;
    CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies& operator=(CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyIds_ != nullptr
        && this->schemaId_ != nullptr; };
    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & policyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> policyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline CreateApprovalProcessResponseBodyProcessSoftwareBlockPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
