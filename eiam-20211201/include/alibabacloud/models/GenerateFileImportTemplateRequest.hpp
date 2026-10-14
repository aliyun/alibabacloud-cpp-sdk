// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEFILEIMPORTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEFILEIMPORTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateFileImportTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateFileImportTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FieldSelectionEnabled, fieldSelectionEnabled_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SelectedFieldNames, selectedFieldNames_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateFileImportTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldSelectionEnabled, fieldSelectionEnabled_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SelectedFieldNames, selectedFieldNames_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    GenerateFileImportTemplateRequest() = default ;
    GenerateFileImportTemplateRequest(const GenerateFileImportTemplateRequest &) = default ;
    GenerateFileImportTemplateRequest(GenerateFileImportTemplateRequest &&) = default ;
    GenerateFileImportTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateFileImportTemplateRequest() = default ;
    GenerateFileImportTemplateRequest& operator=(const GenerateFileImportTemplateRequest &) = default ;
    GenerateFileImportTemplateRequest& operator=(GenerateFileImportTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldSelectionEnabled_ == nullptr
        && this->instanceId_ == nullptr && this->selectedFieldNames_ == nullptr && this->targetType_ == nullptr; };
    // fieldSelectionEnabled Field Functions 
    bool hasFieldSelectionEnabled() const { return this->fieldSelectionEnabled_ != nullptr;};
    void deleteFieldSelectionEnabled() { this->fieldSelectionEnabled_ = nullptr;};
    inline bool getFieldSelectionEnabled() const { DARABONBA_PTR_GET_DEFAULT(fieldSelectionEnabled_, false) };
    inline GenerateFileImportTemplateRequest& setFieldSelectionEnabled(bool fieldSelectionEnabled) { DARABONBA_PTR_SET_VALUE(fieldSelectionEnabled_, fieldSelectionEnabled) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GenerateFileImportTemplateRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // selectedFieldNames Field Functions 
    bool hasSelectedFieldNames() const { return this->selectedFieldNames_ != nullptr;};
    void deleteSelectedFieldNames() { this->selectedFieldNames_ = nullptr;};
    inline const vector<string> & getSelectedFieldNames() const { DARABONBA_PTR_GET_CONST(selectedFieldNames_, vector<string>) };
    inline vector<string> getSelectedFieldNames() { DARABONBA_PTR_GET(selectedFieldNames_, vector<string>) };
    inline GenerateFileImportTemplateRequest& setSelectedFieldNames(const vector<string> & selectedFieldNames) { DARABONBA_PTR_SET_VALUE(selectedFieldNames_, selectedFieldNames) };
    inline GenerateFileImportTemplateRequest& setSelectedFieldNames(vector<string> && selectedFieldNames) { DARABONBA_PTR_SET_RVALUE(selectedFieldNames_, selectedFieldNames) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GenerateFileImportTemplateRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // Specifies whether field selection mode is enabled.
    shared_ptr<bool> fieldSelectionEnabled_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The selected fields.
    shared_ptr<vector<string>> selectedFieldNames_ {};
    // The synchronization target type.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
