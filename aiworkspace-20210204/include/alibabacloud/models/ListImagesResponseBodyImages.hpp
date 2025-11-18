// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGESRESPONSEBODYIMAGES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListImagesResponseBodyImagesLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class ListImagesResponseBodyImages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(SourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImagesResponseBodyImages& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageUri, imageUri_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentUserId, parentUserId_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(SourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    ListImagesResponseBodyImages() = default ;
    ListImagesResponseBodyImages(const ListImagesResponseBodyImages &) = default ;
    ListImagesResponseBodyImages(ListImagesResponseBodyImages &&) = default ;
    ListImagesResponseBodyImages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImagesResponseBodyImages() = default ;
    ListImagesResponseBodyImages& operator=(const ListImagesResponseBodyImages &) = default ;
    ListImagesResponseBodyImages& operator=(ListImagesResponseBodyImages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->description_ == nullptr && return this->gmtCreateTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->imageId_ == nullptr && return this->imageUri_ == nullptr
        && return this->labels_ == nullptr && return this->name_ == nullptr && return this->parentUserId_ == nullptr && return this->size_ == nullptr && return this->sourceId_ == nullptr
        && return this->sourceType_ == nullptr && return this->userId_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline ListImagesResponseBodyImages& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListImagesResponseBodyImages& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListImagesResponseBodyImages& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListImagesResponseBodyImages& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ListImagesResponseBodyImages& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageUri Field Functions 
    bool hasImageUri() const { return this->imageUri_ != nullptr;};
    void deleteImageUri() { this->imageUri_ = nullptr;};
    inline string imageUri() const { DARABONBA_PTR_GET_DEFAULT(imageUri_, "") };
    inline ListImagesResponseBodyImages& setImageUri(string imageUri) { DARABONBA_PTR_SET_VALUE(imageUri_, imageUri) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Models::ListImagesResponseBodyImagesLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Models::ListImagesResponseBodyImagesLabels>) };
    inline vector<Models::ListImagesResponseBodyImagesLabels> labels() { DARABONBA_PTR_GET(labels_, vector<Models::ListImagesResponseBodyImagesLabels>) };
    inline ListImagesResponseBodyImages& setLabels(const vector<Models::ListImagesResponseBodyImagesLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ListImagesResponseBodyImages& setLabels(vector<Models::ListImagesResponseBodyImagesLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListImagesResponseBodyImages& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentUserId Field Functions 
    bool hasParentUserId() const { return this->parentUserId_ != nullptr;};
    void deleteParentUserId() { this->parentUserId_ = nullptr;};
    inline string parentUserId() const { DARABONBA_PTR_GET_DEFAULT(parentUserId_, "") };
    inline ListImagesResponseBodyImages& setParentUserId(string parentUserId) { DARABONBA_PTR_SET_VALUE(parentUserId_, parentUserId) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListImagesResponseBodyImages& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ListImagesResponseBodyImages& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListImagesResponseBodyImages& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline ListImagesResponseBodyImages& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListImagesResponseBodyImages& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The accessibility of the image. Valid values:
    // 
    // *   PUBLIC: All members can access the image.
    // *   PRIVATE: Only the creator can access the image.
    std::shared_ptr<string> accessibility_ = nullptr;
    // The image description.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the image is created, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    // The time when the image is modified, in UTC. The time follows the ISO 8601 standard.
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    // The image ID.
    std::shared_ptr<string> imageId_ = nullptr;
    // The image address, which includes the version number.
    std::shared_ptr<string> imageUri_ = nullptr;
    // The image tags.
    std::shared_ptr<vector<Models::ListImagesResponseBodyImagesLabels>> labels_ = nullptr;
    // The image name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> parentUserId_ = nullptr;
    // The image size. Unit: GB.
    std::shared_ptr<int64_t> size_ = nullptr;
    // 镜像来源 ID
    std::shared_ptr<string> sourceId_ = nullptr;
    // 镜像来源类型
    std::shared_ptr<string> sourceType_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
