// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPSERTQUALITYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPSERTQUALITYTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpsertQualityTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpsertQualityTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(UpsertCommand, upsertCommand_);
    };
    friend void from_json(const Darabonba::Json& j, UpsertQualityTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(UpsertCommand, upsertCommand_);
    };
    UpsertQualityTemplateRequest() = default ;
    UpsertQualityTemplateRequest(const UpsertQualityTemplateRequest &) = default ;
    UpsertQualityTemplateRequest(UpsertQualityTemplateRequest &&) = default ;
    UpsertQualityTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpsertQualityTemplateRequest() = default ;
    UpsertQualityTemplateRequest& operator=(const UpsertQualityTemplateRequest &) = default ;
    UpsertQualityTemplateRequest& operator=(UpsertQualityTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UpsertCommand : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UpsertCommand& obj) { 
        DARABONBA_PTR_TO_JSON(Catalog, catalog_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FormPropertyList, formPropertyList_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Owner, owner_);
        DARABONBA_PTR_TO_JSON(SupportDataSourceTypeList, supportDataSourceTypeList_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, UpsertCommand& obj) { 
        DARABONBA_PTR_FROM_JSON(Catalog, catalog_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FormPropertyList, formPropertyList_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Owner, owner_);
        DARABONBA_PTR_FROM_JSON(SupportDataSourceTypeList, supportDataSourceTypeList_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      UpsertCommand() = default ;
      UpsertCommand(const UpsertCommand &) = default ;
      UpsertCommand(UpsertCommand &&) = default ;
      UpsertCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UpsertCommand() = default ;
      UpsertCommand& operator=(const UpsertCommand &) = default ;
      UpsertCommand& operator=(UpsertCommand &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FormPropertyList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FormPropertyList& obj) { 
          DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, FormPropertyList& obj) { 
          DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        FormPropertyList() = default ;
        FormPropertyList(const FormPropertyList &) = default ;
        FormPropertyList(FormPropertyList &&) = default ;
        FormPropertyList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FormPropertyList() = default ;
        FormPropertyList& operator=(const FormPropertyList &) = default ;
        FormPropertyList& operator=(FormPropertyList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->componentType_ == nullptr
        && this->name_ == nullptr && this->value_ == nullptr; };
        // componentType Field Functions 
        bool hasComponentType() const { return this->componentType_ != nullptr;};
        void deleteComponentType() { this->componentType_ = nullptr;};
        inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
        inline FormPropertyList& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline FormPropertyList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline FormPropertyList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // Component type.
        shared_ptr<string> componentType_ {};
        // Property name.
        shared_ptr<string> name_ {};
        // Property value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->catalog_ == nullptr
        && this->description_ == nullptr && this->formPropertyList_ == nullptr && this->id_ == nullptr && this->name_ == nullptr && this->owner_ == nullptr
        && this->supportDataSourceTypeList_ == nullptr && this->type_ == nullptr; };
      // catalog Field Functions 
      bool hasCatalog() const { return this->catalog_ != nullptr;};
      void deleteCatalog() { this->catalog_ = nullptr;};
      inline string getCatalog() const { DARABONBA_PTR_GET_DEFAULT(catalog_, "") };
      inline UpsertCommand& setCatalog(string catalog) { DARABONBA_PTR_SET_VALUE(catalog_, catalog) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UpsertCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // formPropertyList Field Functions 
      bool hasFormPropertyList() const { return this->formPropertyList_ != nullptr;};
      void deleteFormPropertyList() { this->formPropertyList_ = nullptr;};
      inline const vector<UpsertCommand::FormPropertyList> & getFormPropertyList() const { DARABONBA_PTR_GET_CONST(formPropertyList_, vector<UpsertCommand::FormPropertyList>) };
      inline vector<UpsertCommand::FormPropertyList> getFormPropertyList() { DARABONBA_PTR_GET(formPropertyList_, vector<UpsertCommand::FormPropertyList>) };
      inline UpsertCommand& setFormPropertyList(const vector<UpsertCommand::FormPropertyList> & formPropertyList) { DARABONBA_PTR_SET_VALUE(formPropertyList_, formPropertyList) };
      inline UpsertCommand& setFormPropertyList(vector<UpsertCommand::FormPropertyList> && formPropertyList) { DARABONBA_PTR_SET_RVALUE(formPropertyList_, formPropertyList) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline UpsertCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline UpsertCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // owner Field Functions 
      bool hasOwner() const { return this->owner_ != nullptr;};
      void deleteOwner() { this->owner_ = nullptr;};
      inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
      inline UpsertCommand& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


      // supportDataSourceTypeList Field Functions 
      bool hasSupportDataSourceTypeList() const { return this->supportDataSourceTypeList_ != nullptr;};
      void deleteSupportDataSourceTypeList() { this->supportDataSourceTypeList_ = nullptr;};
      inline const vector<string> & getSupportDataSourceTypeList() const { DARABONBA_PTR_GET_CONST(supportDataSourceTypeList_, vector<string>) };
      inline vector<string> getSupportDataSourceTypeList() { DARABONBA_PTR_GET(supportDataSourceTypeList_, vector<string>) };
      inline UpsertCommand& setSupportDataSourceTypeList(const vector<string> & supportDataSourceTypeList) { DARABONBA_PTR_SET_VALUE(supportDataSourceTypeList_, supportDataSourceTypeList) };
      inline UpsertCommand& setSupportDataSourceTypeList(vector<string> && supportDataSourceTypeList) { DARABONBA_PTR_SET_RVALUE(supportDataSourceTypeList_, supportDataSourceTypeList) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline UpsertCommand& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Template category. Valid values: CONSISTENT: consistency. EFFECTIVE: validity. TIMELINESE: timeliness. ACCURATE: accuracy. UNIQUENESS: uniqueness. COMPLETENESS: completeness. STABILITY: stability. CUSTOM: custom.
      // 
      // This parameter is required.
      shared_ptr<string> catalog_ {};
      // Template description.
      shared_ptr<string> description_ {};
      // Rule configuration key-value pairs.
      shared_ptr<vector<UpsertCommand::FormPropertyList>> formPropertyList_ {};
      // Template ID. If specified, it indicates an update operation. If not specified, it indicates a creation operation.
      shared_ptr<int64_t> id_ {};
      // Template name.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // Template owner ID.
      // 
      // This parameter is required.
      shared_ptr<string> owner_ {};
      // Supported data source types, such as MySQL, Oracle, Microsoft SQL Server, MaxCompute, and Hive.
      shared_ptr<vector<string>> supportDataSourceTypeList_ {};
      // Template type. Valid values: FIELD_NULL_VALUE_VALIDATE: field null value validation. FIELD_EMPTY_STRING_VALIDATE: field empty string validation. FIELD_UNIQUE_VALIDATE: field uniqueness validation. FIELD_GROUP_COUNT_VALIDATE: field unique value count validation. FIELD_DUPLICATE_VALUE_COUNT_VALIDATE: field duplicate value count validation. FUNCTION_TIME_COMPARE: time function comparison. SINGLE_TABLE_TIME_COMPARE: single-table time field comparison. DOUBLE_TABLE_TIME_COMPARE: cross-table time field comparison. FIELD_FORMAT_VALIDATE: field format validation. FIELD_LENGTH_VALIDATE: field length validation. FIELD_VALUE_RANGE_VALIDATE: field value range validation. CODE_TABLE_COMPARE: code table reference comparison. STANDARD_CODE_TABLE_COMPARE: data standard code table reference comparison. SINGLE_TABLE_FIELD_VALUE_COMPARE: single-table field value consistency comparison. SINGLE_TABLE_FIELD_STATISTICAL_COMPARE: single-table field statistical value consistency comparison. SINGLE_TABLE_FIELD_EXP_COMPARE: single-table field business logic consistency comparison. DOUBLE_TABLE_FIELD_VALUE_COMPARE: cross-table field value consistency comparison. DOUBLE_TABLE_FIELD_STATISTICAL_COMPARE: cross-table field statistical value consistency comparison. CROSS_DOUBLE_TABLE_FIELD_STATISTICAL_COMPARE: cross-source cross-table field statistical value consistency comparison. DOUBLE_TABLE_FIELD_EXP_COMPARE: cross-table field business logic consistency comparison. TABLE_STABILITY_VALIDATE: table stability validation. TABLE_FLUCTUATION_VALIDATE: table fluctuation validation. FIELD_STABILITY_VALIDATE: field stability validation. FIELD_FLUCTUATION_VALIDATE: field fluctuation validation. CUSTOM_STATISTICAL_VALIDATE: custom statistical metric validation. CUSTOM_DATA_DETAILS_VALIDATE: custom data details validation. DATASOURCE_AVAILABLE_CHECK: data source connectivity check. TABLE_SCHEMA_CHECK: table schema change detection. REAL_TIME_OFFLINE_COMPARE: real-time and offline comparison. REAL_TIME_STATISTICAL_VALIDATE: real-time statistical value monitoring. REAL_TIME_MULTI_CHAIN_COMPARE: real-time multi-chain comparison.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->opTenantId_ == nullptr
        && this->upsertCommand_ == nullptr; };
    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline UpsertQualityTemplateRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // upsertCommand Field Functions 
    bool hasUpsertCommand() const { return this->upsertCommand_ != nullptr;};
    void deleteUpsertCommand() { this->upsertCommand_ = nullptr;};
    inline const UpsertQualityTemplateRequest::UpsertCommand & getUpsertCommand() const { DARABONBA_PTR_GET_CONST(upsertCommand_, UpsertQualityTemplateRequest::UpsertCommand) };
    inline UpsertQualityTemplateRequest::UpsertCommand getUpsertCommand() { DARABONBA_PTR_GET(upsertCommand_, UpsertQualityTemplateRequest::UpsertCommand) };
    inline UpsertQualityTemplateRequest& setUpsertCommand(const UpsertQualityTemplateRequest::UpsertCommand & upsertCommand) { DARABONBA_PTR_SET_VALUE(upsertCommand_, upsertCommand) };
    inline UpsertQualityTemplateRequest& setUpsertCommand(UpsertQualityTemplateRequest::UpsertCommand && upsertCommand) { DARABONBA_PTR_SET_RVALUE(upsertCommand_, upsertCommand) };


  protected:
    // Tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // Upsert command.
    // 
    // This parameter is required.
    shared_ptr<UpsertQualityTemplateRequest::UpsertCommand> upsertCommand_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
