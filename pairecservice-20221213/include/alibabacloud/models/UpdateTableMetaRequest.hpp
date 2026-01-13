// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateTableMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    UpdateTableMetaRequest() = default ;
    UpdateTableMetaRequest(const UpdateTableMetaRequest &) = default ;
    UpdateTableMetaRequest(UpdateTableMetaRequest &&) = default ;
    UpdateTableMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableMetaRequest() = default ;
    UpdateTableMetaRequest& operator=(const UpdateTableMetaRequest &) = default ;
    UpdateTableMetaRequest& operator=(UpdateTableMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(DataType, dataType_);
        DARABONBA_PTR_TO_JSON(IsDimensionField, isDimensionField_);
        DARABONBA_PTR_TO_JSON(IsPartitionField, isPartitionField_);
        DARABONBA_PTR_TO_JSON(Meaning, meaning_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(DataType, dataType_);
        DARABONBA_PTR_FROM_JSON(IsDimensionField, isDimensionField_);
        DARABONBA_PTR_FROM_JSON(IsPartitionField, isPartitionField_);
        DARABONBA_PTR_FROM_JSON(Meaning, meaning_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataType_ == nullptr
        && this->isDimensionField_ == nullptr && this->isPartitionField_ == nullptr && this->meaning_ == nullptr && this->name_ == nullptr && this->type_ == nullptr; };
      // dataType Field Functions 
      bool hasDataType() const { return this->dataType_ != nullptr;};
      void deleteDataType() { this->dataType_ = nullptr;};
      inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
      inline Fields& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


      // isDimensionField Field Functions 
      bool hasIsDimensionField() const { return this->isDimensionField_ != nullptr;};
      void deleteIsDimensionField() { this->isDimensionField_ = nullptr;};
      inline bool getIsDimensionField() const { DARABONBA_PTR_GET_DEFAULT(isDimensionField_, false) };
      inline Fields& setIsDimensionField(bool isDimensionField) { DARABONBA_PTR_SET_VALUE(isDimensionField_, isDimensionField) };


      // isPartitionField Field Functions 
      bool hasIsPartitionField() const { return this->isPartitionField_ != nullptr;};
      void deleteIsPartitionField() { this->isPartitionField_ = nullptr;};
      inline string getIsPartitionField() const { DARABONBA_PTR_GET_DEFAULT(isPartitionField_, "") };
      inline Fields& setIsPartitionField(string isPartitionField) { DARABONBA_PTR_SET_VALUE(isPartitionField_, isPartitionField) };


      // meaning Field Functions 
      bool hasMeaning() const { return this->meaning_ != nullptr;};
      void deleteMeaning() { this->meaning_ = nullptr;};
      inline string getMeaning() const { DARABONBA_PTR_GET_DEFAULT(meaning_, "") };
      inline Fields& setMeaning(string meaning) { DARABONBA_PTR_SET_VALUE(meaning_, meaning) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> dataType_ {};
      // This parameter is required.
      shared_ptr<bool> isDimensionField_ {};
      // This parameter is required.
      shared_ptr<string> isPartitionField_ {};
      // This parameter is required.
      shared_ptr<string> meaning_ {};
      // This parameter is required.
      shared_ptr<string> name_ {};
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->fields_ == nullptr && this->instanceId_ == nullptr && this->module_ == nullptr && this->name_ == nullptr && this->resourceId_ == nullptr
        && this->tableName_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTableMetaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<UpdateTableMetaRequest::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<UpdateTableMetaRequest::Fields>) };
    inline vector<UpdateTableMetaRequest::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<UpdateTableMetaRequest::Fields>) };
    inline UpdateTableMetaRequest& setFields(const vector<UpdateTableMetaRequest::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline UpdateTableMetaRequest& setFields(vector<UpdateTableMetaRequest::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateTableMetaRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string getModule() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline UpdateTableMetaRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTableMetaRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline UpdateTableMetaRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline UpdateTableMetaRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    shared_ptr<string> description_ {};
    // This parameter is required.
    shared_ptr<vector<UpdateTableMetaRequest::Fields>> fields_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> module_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // This parameter is required.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
