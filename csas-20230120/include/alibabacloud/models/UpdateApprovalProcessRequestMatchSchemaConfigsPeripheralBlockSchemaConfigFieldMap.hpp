// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGSPERIPHERALBLOCKSCHEMACONFIGFIELDMAP_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPROVALPROCESSREQUESTMATCHSCHEMACONFIGSPERIPHERALBLOCKSCHEMACONFIGFIELDMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap& obj) { 
      DARABONBA_PTR_TO_JSON(DisplayField, displayField_);
      DARABONBA_PTR_TO_JSON(DisplayFieldValue, displayFieldValue_);
      DARABONBA_PTR_TO_JSON(SystemField, systemField_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap& obj) { 
      DARABONBA_PTR_FROM_JSON(DisplayField, displayField_);
      DARABONBA_PTR_FROM_JSON(DisplayFieldValue, displayFieldValue_);
      DARABONBA_PTR_FROM_JSON(SystemField, systemField_);
    };
    UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap(const UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap(UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap &&) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap() = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap& operator=(const UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap &) = default ;
    UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap& operator=(UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->displayField_ == nullptr
        && return this->displayFieldValue_ == nullptr && return this->systemField_ == nullptr; };
    // displayField Field Functions 
    bool hasDisplayField() const { return this->displayField_ != nullptr;};
    void deleteDisplayField() { this->displayField_ = nullptr;};
    inline string displayField() const { DARABONBA_PTR_GET_DEFAULT(displayField_, "") };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap& setDisplayField(string displayField) { DARABONBA_PTR_SET_VALUE(displayField_, displayField) };


    // displayFieldValue Field Functions 
    bool hasDisplayFieldValue() const { return this->displayFieldValue_ != nullptr;};
    void deleteDisplayFieldValue() { this->displayFieldValue_ = nullptr;};
    inline string displayFieldValue() const { DARABONBA_PTR_GET_DEFAULT(displayFieldValue_, "") };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap& setDisplayFieldValue(string displayFieldValue) { DARABONBA_PTR_SET_VALUE(displayFieldValue_, displayFieldValue) };


    // systemField Field Functions 
    bool hasSystemField() const { return this->systemField_ != nullptr;};
    void deleteSystemField() { this->systemField_ = nullptr;};
    inline string systemField() const { DARABONBA_PTR_GET_DEFAULT(systemField_, "") };
    inline UpdateApprovalProcessRequestMatchSchemaConfigsPeripheralBlockSchemaConfigFieldMap& setSystemField(string systemField) { DARABONBA_PTR_SET_VALUE(systemField_, systemField) };


  protected:
    std::shared_ptr<string> displayField_ = nullptr;
    std::shared_ptr<string> displayFieldValue_ = nullptr;
    std::shared_ptr<string> systemField_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
