// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODYPROCESSPERIPHERALBLOCKPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODYPROCESSPERIPHERALBLOCKPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessPeripheralBlockPoliciesFieldMap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
      DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
      DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies() = default ;
    GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies(const GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies &) = default ;
    GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies(GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies &&) = default ;
    GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies() = default ;
    GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& operator=(const GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies &) = default ;
    GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& operator=(GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalProcessId_ != nullptr
        && this->fieldMap_ != nullptr && this->policyIds_ != nullptr && this->schemaId_ != nullptr; };
    // externalProcessId Field Functions 
    bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
    void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
    inline string externalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
    inline GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


    // fieldMap Field Functions 
    bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
    void deleteFieldMap() { this->fieldMap_ = nullptr;};
    inline const vector<Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPoliciesFieldMap> & fieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPoliciesFieldMap>) };
    inline vector<Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPoliciesFieldMap> fieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPoliciesFieldMap>) };
    inline GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& setFieldMap(const vector<Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPoliciesFieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
    inline GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& setFieldMap(vector<Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPoliciesFieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & policyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> policyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline GetApprovalProcessResponseBodyProcessPeripheralBlockPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    std::shared_ptr<string> externalProcessId_ = nullptr;
    std::shared_ptr<vector<Models::GetApprovalProcessResponseBodyProcessPeripheralBlockPoliciesFieldMap>> fieldMap_ = nullptr;
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
