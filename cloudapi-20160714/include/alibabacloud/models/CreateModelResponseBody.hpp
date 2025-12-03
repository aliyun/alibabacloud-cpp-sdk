// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMODELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEMODELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class CreateModelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateModelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(ModelName, modelName_);
      DARABONBA_PTR_TO_JSON(ModelRef, modelRef_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
    };
    friend void from_json(const Darabonba::Json& j, CreateModelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(ModelName, modelName_);
      DARABONBA_PTR_FROM_JSON(ModelRef, modelRef_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
    };
    CreateModelResponseBody() = default ;
    CreateModelResponseBody(const CreateModelResponseBody &) = default ;
    CreateModelResponseBody(CreateModelResponseBody &&) = default ;
    CreateModelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateModelResponseBody() = default ;
    CreateModelResponseBody& operator=(const CreateModelResponseBody &) = default ;
    CreateModelResponseBody& operator=(CreateModelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdTime_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->modelId_ == nullptr && return this->modelName_ == nullptr && return this->modelRef_ == nullptr
        && return this->modifiedTime_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr && return this->schema_ == nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline string createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, "") };
    inline CreateModelResponseBody& setCreatedTime(string createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateModelResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateModelResponseBody& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline CreateModelResponseBody& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // modelName Field Functions 
    bool hasModelName() const { return this->modelName_ != nullptr;};
    void deleteModelName() { this->modelName_ = nullptr;};
    inline string modelName() const { DARABONBA_PTR_GET_DEFAULT(modelName_, "") };
    inline CreateModelResponseBody& setModelName(string modelName) { DARABONBA_PTR_SET_VALUE(modelName_, modelName) };


    // modelRef Field Functions 
    bool hasModelRef() const { return this->modelRef_ != nullptr;};
    void deleteModelRef() { this->modelRef_ = nullptr;};
    inline string modelRef() const { DARABONBA_PTR_GET_DEFAULT(modelRef_, "") };
    inline CreateModelResponseBody& setModelRef(string modelRef) { DARABONBA_PTR_SET_VALUE(modelRef_, modelRef) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline CreateModelResponseBody& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateModelResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateModelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string schema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline CreateModelResponseBody& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


  protected:
    // The time when the model was created.
    std::shared_ptr<string> createdTime_ = nullptr;
    // The description of the created model.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the API group to which the created model belongs.
    std::shared_ptr<string> groupId_ = nullptr;
    // The ID of the created model.
    std::shared_ptr<string> modelId_ = nullptr;
    // The name of the created model.
    std::shared_ptr<string> modelName_ = nullptr;
    // The URI of the created model.
    std::shared_ptr<string> modelRef_ = nullptr;
    // The time when the model is last modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The region to which the created model belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The definition of the created model.
    std::shared_ptr<string> schema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
