// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMFIELDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMFIELDREQUEST_HPP_
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
  class CreateCustomFieldRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomFieldRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(FieldDataConfig, fieldDataConfig_);
      DARABONBA_PTR_TO_JSON(FieldDataType, fieldDataType_);
      DARABONBA_PTR_TO_JSON(FieldDisplayName, fieldDisplayName_);
      DARABONBA_PTR_TO_JSON(FieldDisplayType, fieldDisplayType_);
      DARABONBA_PTR_TO_JSON(FieldName, fieldName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Required, required_);
      DARABONBA_PTR_TO_JSON(Unique, unique_);
      DARABONBA_PTR_TO_JSON(UserPermission, userPermission_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomFieldRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(FieldDataConfig, fieldDataConfig_);
      DARABONBA_PTR_FROM_JSON(FieldDataType, fieldDataType_);
      DARABONBA_PTR_FROM_JSON(FieldDisplayName, fieldDisplayName_);
      DARABONBA_PTR_FROM_JSON(FieldDisplayType, fieldDisplayType_);
      DARABONBA_PTR_FROM_JSON(FieldName, fieldName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Required, required_);
      DARABONBA_PTR_FROM_JSON(Unique, unique_);
      DARABONBA_PTR_FROM_JSON(UserPermission, userPermission_);
    };
    CreateCustomFieldRequest() = default ;
    CreateCustomFieldRequest(const CreateCustomFieldRequest &) = default ;
    CreateCustomFieldRequest(CreateCustomFieldRequest &&) = default ;
    CreateCustomFieldRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomFieldRequest() = default ;
    CreateCustomFieldRequest& operator=(const CreateCustomFieldRequest &) = default ;
    CreateCustomFieldRequest& operator=(CreateCustomFieldRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FieldDataConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FieldDataConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Items, items_);
      };
      friend void from_json(const Darabonba::Json& j, FieldDataConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Items, items_);
      };
      FieldDataConfig() = default ;
      FieldDataConfig(const FieldDataConfig &) = default ;
      FieldDataConfig(FieldDataConfig &&) = default ;
      FieldDataConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FieldDataConfig() = default ;
      FieldDataConfig& operator=(const FieldDataConfig &) = default ;
      FieldDataConfig& operator=(FieldDataConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->status_ == nullptr && this->value_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Items& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Items& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Items& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The display name of the configuration item. The display name can be up to 128 characters in length.
        shared_ptr<string> displayName_ {};
        // The status of the configuration item. Valid values:
        // 
        // - enabled: The configuration item is enabled.
        // 
        // - disabled: The configuration item is disabled.
        // 
        // If a configuration item is disabled, it is unavailable when you create or update the field value for an entity.
        shared_ptr<string> status_ {};
        // The value of the configuration item. The value can be up to 64 characters in length.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<FieldDataConfig::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<FieldDataConfig::Items>) };
      inline vector<FieldDataConfig::Items> getItems() { DARABONBA_PTR_GET(items_, vector<FieldDataConfig::Items>) };
      inline FieldDataConfig& setItems(const vector<FieldDataConfig::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline FieldDataConfig& setItems(vector<FieldDataConfig::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // A list of field configuration items. The list can contain up to 100 items.
      shared_ptr<vector<FieldDataConfig::Items>> items_ {};
    };

    virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->encrypted_ == nullptr && this->entityType_ == nullptr && this->fieldDataConfig_ == nullptr && this->fieldDataType_ == nullptr
        && this->fieldDisplayName_ == nullptr && this->fieldDisplayType_ == nullptr && this->fieldName_ == nullptr && this->instanceId_ == nullptr && this->required_ == nullptr
        && this->unique_ == nullptr && this->userPermission_ == nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline CreateCustomFieldRequest& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCustomFieldRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline CreateCustomFieldRequest& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline CreateCustomFieldRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // fieldDataConfig Field Functions 
    bool hasFieldDataConfig() const { return this->fieldDataConfig_ != nullptr;};
    void deleteFieldDataConfig() { this->fieldDataConfig_ = nullptr;};
    inline const CreateCustomFieldRequest::FieldDataConfig & getFieldDataConfig() const { DARABONBA_PTR_GET_CONST(fieldDataConfig_, CreateCustomFieldRequest::FieldDataConfig) };
    inline CreateCustomFieldRequest::FieldDataConfig getFieldDataConfig() { DARABONBA_PTR_GET(fieldDataConfig_, CreateCustomFieldRequest::FieldDataConfig) };
    inline CreateCustomFieldRequest& setFieldDataConfig(const CreateCustomFieldRequest::FieldDataConfig & fieldDataConfig) { DARABONBA_PTR_SET_VALUE(fieldDataConfig_, fieldDataConfig) };
    inline CreateCustomFieldRequest& setFieldDataConfig(CreateCustomFieldRequest::FieldDataConfig && fieldDataConfig) { DARABONBA_PTR_SET_RVALUE(fieldDataConfig_, fieldDataConfig) };


    // fieldDataType Field Functions 
    bool hasFieldDataType() const { return this->fieldDataType_ != nullptr;};
    void deleteFieldDataType() { this->fieldDataType_ = nullptr;};
    inline string getFieldDataType() const { DARABONBA_PTR_GET_DEFAULT(fieldDataType_, "") };
    inline CreateCustomFieldRequest& setFieldDataType(string fieldDataType) { DARABONBA_PTR_SET_VALUE(fieldDataType_, fieldDataType) };


    // fieldDisplayName Field Functions 
    bool hasFieldDisplayName() const { return this->fieldDisplayName_ != nullptr;};
    void deleteFieldDisplayName() { this->fieldDisplayName_ = nullptr;};
    inline string getFieldDisplayName() const { DARABONBA_PTR_GET_DEFAULT(fieldDisplayName_, "") };
    inline CreateCustomFieldRequest& setFieldDisplayName(string fieldDisplayName) { DARABONBA_PTR_SET_VALUE(fieldDisplayName_, fieldDisplayName) };


    // fieldDisplayType Field Functions 
    bool hasFieldDisplayType() const { return this->fieldDisplayType_ != nullptr;};
    void deleteFieldDisplayType() { this->fieldDisplayType_ = nullptr;};
    inline string getFieldDisplayType() const { DARABONBA_PTR_GET_DEFAULT(fieldDisplayType_, "") };
    inline CreateCustomFieldRequest& setFieldDisplayType(string fieldDisplayType) { DARABONBA_PTR_SET_VALUE(fieldDisplayType_, fieldDisplayType) };


    // fieldName Field Functions 
    bool hasFieldName() const { return this->fieldName_ != nullptr;};
    void deleteFieldName() { this->fieldName_ = nullptr;};
    inline string getFieldName() const { DARABONBA_PTR_GET_DEFAULT(fieldName_, "") };
    inline CreateCustomFieldRequest& setFieldName(string fieldName) { DARABONBA_PTR_SET_VALUE(fieldName_, fieldName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCustomFieldRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline CreateCustomFieldRequest& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // unique Field Functions 
    bool hasUnique() const { return this->unique_ != nullptr;};
    void deleteUnique() { this->unique_ = nullptr;};
    inline bool getUnique() const { DARABONBA_PTR_GET_DEFAULT(unique_, false) };
    inline CreateCustomFieldRequest& setUnique(bool unique) { DARABONBA_PTR_SET_VALUE(unique_, unique) };


    // userPermission Field Functions 
    bool hasUserPermission() const { return this->userPermission_ != nullptr;};
    void deleteUserPermission() { this->userPermission_ = nullptr;};
    inline string getUserPermission() const { DARABONBA_PTR_GET_DEFAULT(userPermission_, "") };
    inline CreateCustomFieldRequest& setUserPermission(string userPermission) { DARABONBA_PTR_SET_VALUE(userPermission_, userPermission) };


  protected:
    // The default value of the field. If the field has configuration items, the default value must be one of the enabled configuration items. The default value can be up to 1024 characters in length.
    shared_ptr<string> defaultValue_ {};
    // The description of the field. The description can be up to 512 characters in length.
    shared_ptr<string> description_ {};
    // Indicates whether to encrypt the field value. If you set this parameter to true, the system encrypts the data value before storing it.
    shared_ptr<bool> encrypted_ {};
    // The entity to which the field belongs. Valid value:
    // 
    // - user: an account.
    // 
    // This parameter is required.
    shared_ptr<string> entityType_ {};
    // The configuration items of the field value.
    shared_ptr<CreateCustomFieldRequest::FieldDataConfig> fieldDataConfig_ {};
    // The data type of the field. Valid values:
    // 
    // - string: a string.
    // 
    // - number: a number. The number can be up to 32 digits in length and can be a positive integer or a decimal.
    // 
    // - boolean: a Boolean value.
    // 
    // This parameter is required.
    shared_ptr<string> fieldDataType_ {};
    // The display name of the field. The display name can be up to 64 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> fieldDisplayName_ {};
    // The display type of the field. Valid values:
    // 
    // - input: a text box. This display type supports the string and number data types.
    // 
    // - select: a drop-down list. This display type supports the string and Boolean data types.
    // 
    // - checkbox: a check box. This display type supports the string data type.
    // 
    // This parameter is required.
    shared_ptr<string> fieldDisplayType_ {};
    // The name of the field. The name can be up to 40 characters in length and can contain lowercase letters and underscores (_). It cannot start with an underscore (_).
    // 
    // This parameter is required.
    shared_ptr<string> fieldName_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // Indicates whether the field is required.
    shared_ptr<bool> required_ {};
    // Indicates whether the field value is unique. If you set this parameter to true, the value of this field must be unique for the specified entity type.
    shared_ptr<bool> unique_ {};
    // The permission on the field in the portal. Valid values:
    // 
    // - hide: The field is not visible in the portal.
    // 
    // - read_only: The field is visible but cannot be modified in the portal.
    // 
    // - read_write: The field is visible and can be modified in the portal.
    shared_ptr<string> userPermission_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
