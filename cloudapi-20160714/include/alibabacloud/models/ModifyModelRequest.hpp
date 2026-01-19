// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class ModifyModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(NewModelName, newModelName_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(NewModelName, newModelName_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    ModifyModelRequest() = default ;
    ModifyModelRequest(const ModifyModelRequest &) = default ;
    ModifyModelRequest(ModifyModelRequest &&) = default ;
    ModifyModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyModelRequest() = default ;
    ModifyModelRequest& operator=(const ModifyModelRequest &) = default ;
    ModifyModelRequest& operator=(ModifyModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && this->groupId_ == nullptr && this->modelName_ == nullptr && this->newModelName_ == nullptr && this->schema_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyModelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyModelRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string getModelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline ModifyModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // newModelName Field Functions 
    bool hasNewModelName() const { return this->newModelName_ != nullptr;};
    void deleteNewModelName() { this->newModelName_ = nullptr;};
    inline string getNewModelName() const { DARABONBA_PTR_GET_DEFAULT(newModelName_, "") };
    inline ModifyModelRequest& setNewModelName(string newModelName) { DARABONBA_PTR_SET_VALUE(newModelName_, newModelName) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline ModifyModelRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    // The description of the new model definition.
    shared_ptr<string> description_ {};
    // The ID of the API group to which the model belongs.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The name of the model.
    // 
    // This parameter is required.
    shared_ptr<string> modelName_ {};
    // The new name of the model.
    shared_ptr<string> newModelName_ {};
    // The new definition of the model.
    shared_ptr<string> schema_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
