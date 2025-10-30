// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODYPROCESSAPPUNINSTALLPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_GETAPPROVALPROCESSRESPONSEBODYPROCESSAPPUNINSTALLPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetApprovalProcessResponseBodyProcessAppUninstallPoliciesFieldMap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetApprovalProcessResponseBodyProcessAppUninstallPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApprovalProcessResponseBodyProcessAppUninstallPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
      DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
      DARABONBA_PTR_TO_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApprovalProcessResponseBodyProcessAppUninstallPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
      DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
      DARABONBA_PTR_FROM_JSON(PolicyIds, policyIds_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    GetApprovalProcessResponseBodyProcessAppUninstallPolicies() = default ;
    GetApprovalProcessResponseBodyProcessAppUninstallPolicies(const GetApprovalProcessResponseBodyProcessAppUninstallPolicies &) = default ;
    GetApprovalProcessResponseBodyProcessAppUninstallPolicies(GetApprovalProcessResponseBodyProcessAppUninstallPolicies &&) = default ;
    GetApprovalProcessResponseBodyProcessAppUninstallPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApprovalProcessResponseBodyProcessAppUninstallPolicies() = default ;
    GetApprovalProcessResponseBodyProcessAppUninstallPolicies& operator=(const GetApprovalProcessResponseBodyProcessAppUninstallPolicies &) = default ;
    GetApprovalProcessResponseBodyProcessAppUninstallPolicies& operator=(GetApprovalProcessResponseBodyProcessAppUninstallPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && return this->fieldMap_ == nullptr && return this->policyIds_ == nullptr && return this->schemaId_ == nullptr; };
    // externalProcessId Field Functions 
    bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
    void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
    inline string externalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
    inline GetApprovalProcessResponseBodyProcessAppUninstallPolicies& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


    // fieldMap Field Functions 
    bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
    void deleteFieldMap() { this->fieldMap_ = nullptr;};
    inline const vector<Models::GetApprovalProcessResponseBodyProcessAppUninstallPoliciesFieldMap> & fieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<Models::GetApprovalProcessResponseBodyProcessAppUninstallPoliciesFieldMap>) };
    inline vector<Models::GetApprovalProcessResponseBodyProcessAppUninstallPoliciesFieldMap> fieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<Models::GetApprovalProcessResponseBodyProcessAppUninstallPoliciesFieldMap>) };
    inline GetApprovalProcessResponseBodyProcessAppUninstallPolicies& setFieldMap(const vector<Models::GetApprovalProcessResponseBodyProcessAppUninstallPoliciesFieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
    inline GetApprovalProcessResponseBodyProcessAppUninstallPolicies& setFieldMap(vector<Models::GetApprovalProcessResponseBodyProcessAppUninstallPoliciesFieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


    // policyIds Field Functions 
    bool hasPolicyIds() const { return this->policyIds_ != nullptr;};
    void deletePolicyIds() { this->policyIds_ = nullptr;};
    inline const vector<string> & policyIds() const { DARABONBA_PTR_GET_CONST(policyIds_, vector<string>) };
    inline vector<string> policyIds() { DARABONBA_PTR_GET(policyIds_, vector<string>) };
    inline GetApprovalProcessResponseBodyProcessAppUninstallPolicies& setPolicyIds(const vector<string> & policyIds) { DARABONBA_PTR_SET_VALUE(policyIds_, policyIds) };
    inline GetApprovalProcessResponseBodyProcessAppUninstallPolicies& setPolicyIds(vector<string> && policyIds) { DARABONBA_PTR_SET_RVALUE(policyIds_, policyIds) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline GetApprovalProcessResponseBodyProcessAppUninstallPolicies& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    std::shared_ptr<string> externalProcessId_ = nullptr;
    std::shared_ptr<vector<Models::GetApprovalProcessResponseBodyProcessAppUninstallPoliciesFieldMap>> fieldMap_ = nullptr;
    std::shared_ptr<vector<string>> policyIds_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
