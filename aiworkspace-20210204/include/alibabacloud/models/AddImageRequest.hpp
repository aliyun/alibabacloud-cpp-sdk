// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AddImageRequestLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class AddImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AddImageRequest() = default ;
    AddImageRequest(const AddImageRequest &) = default ;
    AddImageRequest(AddImageRequest &&) = default ;
    AddImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageRequest() = default ;
    AddImageRequest& operator=(const AddImageRequest &) = default ;
    AddImageRequest& operator=(AddImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->description_ != nullptr && this->imageId_ != nullptr && this->imageUri_ != nullptr && this->labels_ != nullptr && this->name_ != nullptr
        && this->size_ != nullptr && this->sourceId_ != nullptr && this->sourceType_ != nullptr && this->workspaceId_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline AddImageRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline AddImageRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUri Field Functions 
    bool hasImageUri() const { return this->imageUri_ != nullptr;};
    void deleteImageUri() { this->imageUri_ = nullptr;};
    inline string imageUri() const { DARABONBA_PTR_GET_DEFAULT(imageUri_, "") };
    inline AddImageRequest& setImageUri(string imageUri) { DARABONBA_PTR_SET_VALUE(imageUri_, imageUri) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<AddImageRequestLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<AddImageRequestLabels>) };
    inline vector<AddImageRequestLabels> labels() { DARABONBA_PTR_GET(labels_, vector<AddImageRequestLabels>) };
    inline AddImageRequest& setLabels(const vector<AddImageRequestLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline AddImageRequest& setLabels(vector<AddImageRequestLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddImageRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline AddImageRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline AddImageRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline AddImageRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AddImageRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The accessibility of the image. Valid values:
    // 
    // *   PUBLIC: The image is accessible to all members in the workspace.
    // *   PRIVATE: The image is accessible only to the image creator.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The image description.
    std::shared_ptr<string> description_ = nullptr;
    // The image ID. If you do not specify this parameter, the system automatically generates an image ID. The image ID must start with image- followed by 18 characters in letters or digits.
    std::shared_ptr<string> imageId_ = nullptr;
    // The URL of the image, which can be repeated. You can call [ListImage](https://help.aliyun.com/document_detail/449118.html) to view the image URL.
    // 
    // This parameter is required.
    std::shared_ptr<string> imageUri_ = nullptr;
    // The image tag, which is an array. Each element in the array contains a key-value pair. Alibaba Cloud images have the system.official=true tag. You can add the following keys to an image:
    // 
    // *   system.chipType
    // *   system.dsw.cudaVersion
    // *   system.dsw.fromImageId
    // *   system.dsw.fromInstanceId
    // *   system.dsw.id
    // *   system.dsw.os
    // *   system.dsw.osVersion
    // *   system.dsw.resourceType
    // *   system.dsw.rootImageId
    // *   system.dsw.stage
    // *   system.dsw.tag
    // *   system.dsw.type
    // *   system.framework
    // *   system.origin
    // *   system.pythonVersion
    // *   system.source
    // *   system.supported.dlc
    // *   system.supported.dsw
    std::shared_ptr<vector<AddImageRequestLabels>> labels_ = nullptr;
    // The image name. The name must meet the following requirements:
    // 
    // *   The name must be 1 to 50 characters in length.
    // *   The name can contain lowercase letters, digits, and hyphens (-). The name must start with a lowercase letter.
    // *   The name must be unique in a workspace.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The size of the image. Unit: GB.
    std::shared_ptr<int32_t> size_ = nullptr;
    std::shared_ptr<string> sourceId_ = nullptr;
    std::shared_ptr<string> sourceType_ = nullptr;
    // The workspace ID. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
