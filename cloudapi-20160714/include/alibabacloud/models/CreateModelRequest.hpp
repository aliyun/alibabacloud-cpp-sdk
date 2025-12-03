// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateModelRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateModelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    CreateModelRequest() = default ;
    CreateModelRequest(const CreateModelRequest &) = default ;
    CreateModelRequest(CreateModelRequest &&) = default ;
    CreateModelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelRequest() = default ;
    CreateModelRequest& operator=(const CreateModelRequest &) = default ;
    CreateModelRequest& operator=(CreateModelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->groupId_ == nullptr && return this->modelName_ == nullptr && return this->schema_ == nullptr && return this->tag_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateModelRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateModelRequest& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline CreateModelRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateModelRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateModelRequestTag>) };
    inline vector<CreateModelRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateModelRequestTag>) };
    inline CreateModelRequest& setTag(const vector<CreateModelRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateModelRequest& setTag(vector<CreateModelRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The description of the model definition.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group to which the model belongs.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the model. The name must be unique within the group.
    // 
    // This parameter is required.
    std::shared_ptr<string> modelName_ = nullptr;
    // The definition of the model in JSON Schema.
    // 
    // This parameter is required.
    std::shared_ptr<string> schema_ = nullptr;
    // The object tags that match the lifecycle rule. You can specify multiple tags.
    std::shared_ptr<vector<CreateModelRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
