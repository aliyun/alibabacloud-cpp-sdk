// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGSSOFTWAREHARDENINGSCHEMACONFIGFIELDMAP_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGSSOFTWAREHARDENINGSCHEMACONFIGFIELDMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
      DARABONBA_PTR_TO_JSON(SystemField, systemField_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
      DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
    };
    UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap(const UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap(UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap &&) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap& operator=(const UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap& operator=(UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->displayField_ != nullptr
        && this->systemField_ != nullptr; };
    // displayField Field Functions 
    bool hasDisplayField() const { return this->displayField_ != nullptr;};
    void deleteDisplayField() { this->displayField_ = nullptr;};
    inline string displayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


    // systemField Field Functions 
    bool hasSystemField() const { return this->systemField_ != nullptr;};
    void deleteSystemField() { this->systemField_ = nullptr;};
    inline string systemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsSoftwareHardeningSchemaConfigFieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


  protected:
    std::shared_ptr<string> displayField_ = nullptr;
    std::shared_ptr<string> systemField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
