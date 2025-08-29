// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateTableMetaRequestFields.hpp>
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
    virtual bool empty() const override { this->description_ != nullptr
        && this->fields_ != nullptr && this->instanceId_ != nullptr && this->module_ != nullptr && this->name_ != nullptr && this->resourceId_ != nullptr
        && this->tableName_ != nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateTableMetaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<UpdateTableMetaRequestFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<UpdateTableMetaRequestFields>) };
    inline vector<UpdateTableMetaRequestFields> fields() { DARABONBA_PTR_GET(fields_, vector<UpdateTableMetaRequestFields>) };
    inline UpdateTableMetaRequest& setFields(const vector<UpdateTableMetaRequestFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline UpdateTableMetaRequest& setFields(vector<UpdateTableMetaRequestFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateTableMetaRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline UpdateTableMetaRequest& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTableMetaRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline UpdateTableMetaRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline UpdateTableMetaRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<UpdateTableMetaRequestFields>> fields_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> module_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
