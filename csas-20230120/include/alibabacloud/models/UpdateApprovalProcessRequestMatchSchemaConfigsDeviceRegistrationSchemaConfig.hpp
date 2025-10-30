// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGSDEVICEREGISTRATIONSCHEMACONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGSDEVICEREGISTRATIONSCHEMACONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfigFieldMap.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalProcessId, externalProcessId_);
      DARABONBA_PTR_TO_JSON(FieldMap, fieldMap_);
      DARABONBA_PTR_TO_JSON(SchemaId, schemaId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalProcessId, externalProcessId_);
      DARABONBA_PTR_FROM_JSON(FieldMap, fieldMap_);
      DARABONBA_PTR_FROM_JSON(SchemaId, schemaId_);
    };
    UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig(const UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig(UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig &&) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig& operator=(const UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig& operator=(UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalProcessId_ == nullptr
        && return this->fieldMap_ == nullptr && return this->schemaId_ == nullptr; };
    // externalProcessId Field Functions 
    bool hasExternalProcessId() const { return this->externalProcessId_ != nullptr;};
    void deleteExternalProcessId() { this->externalProcessId_ = nullptr;};
    inline string externalProcessId() const { DARABONBA_PTR_GET_DEFAULT(externalProcessId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig& setExternalProcessId(string externalProcessId) { DARABONBA_PTR_SET_VALUE(externalProcessId_, externalProcessId) };


    // fieldMap Field Functions 
    bool hasFieldMap() const { return this->fieldMap_ != nullptr;};
    void deleteFieldMap() { this->fieldMap_ = nullptr;};
    inline const vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfigFieldMap> & fieldMap() const { DARABONBA_PTR_GET_CONST(fieldMap_, vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfigFieldMap>) };
    inline vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfigFieldMap> fieldMap() { DARABONBA_PTR_GET(fieldMap_, vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfigFieldMap>) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig& setFieldMap(const vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfigFieldMap> & fieldMap) { DARABONBA_PTR_SET_VALUE(fieldMap_, fieldMap) };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig& setFieldMap(vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfigFieldMap> && fieldMap) { DARABONBA_PTR_SET_RVALUE(fieldMap_, fieldMap) };


    // schemaId Field Functions 
    bool hasSchemaId() const { return this->schemaId_ != nullptr;};
    void deleteSchemaId() { this->schemaId_ = nullptr;};
    inline string schemaId() const { DARABONBA_PTR_GET_DEFAULT(schemaId_, "") };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfig& setSchemaId(string schemaId) { DARABONBA_PTR_SET_VALUE(schemaId_, schemaId) };


  protected:
    std::shared_ptr<string> externalProcessId_ = nullptr;
    std::shared_ptr<vector<Models::UpdateApprovalProcessRequestMatchSchemaConfigsDeviceRegistrationSchemaConfigFieldMap>> fieldMap_ = nullptr;
    std::shared_ptr<string> schemaId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
