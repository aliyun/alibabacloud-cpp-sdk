// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGSDOMAINWHITELISTSCHEMACONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGSDOMAINWHITELISTSCHEMACONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfigFieldMap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
      DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
      DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig(const UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig(UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig &&) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig& operator=(const UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig& operator=(UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->externalProcessId_ != nullptr
        && this->fieldMap_ != nullptr && this->schemaId_ != nullptr; };
    // externalProcessId Field Functions 
    bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
    void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
    inline string externalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


    // fieldMap Field Functions 
    bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
    void deleteFieldMap() { this->fieldMap_ = nullptr;};
    inline const vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfigFieldMap> & fieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfigFieldMap>) };
    inline vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfigFieldMap> fieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfigFieldMap>) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig& setFieldMap(const vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfigFieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig& setFieldMap(vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfigFieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    std::shared_ptr<string> externalProcessId_ = nullptr;
    std::shared_ptr<vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDomainWhitelistSchemaConfigFieldMap>> fieldMap_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
