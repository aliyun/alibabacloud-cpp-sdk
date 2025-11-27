// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateStoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cover, coverShrink_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabelsShrink_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(StoryName, storyName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cover, coverShrink_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabelsShrink_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(StoryName, storyName_);
    };
    UpdateStoryShrinkRequest() = default ;
    UpdateStoryShrinkRequest(const UpdateStoryShrinkRequest &) = default ;
    UpdateStoryShrinkRequest(UpdateStoryShrinkRequest &&) = default ;
    UpdateStoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStoryShrinkRequest() = default ;
    UpdateStoryShrinkRequest& operator=(const UpdateStoryShrinkRequest &) = default ;
    UpdateStoryShrinkRequest& operator=(UpdateStoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverShrink_ == nullptr
        && return this->customId_ == nullptr && return this->customLabelsShrink_ == nullptr && return this->datasetName_ == nullptr && return this->objectId_ == nullptr && return this->projectName_ == nullptr
        && return this->storyName_ == nullptr; };
    // coverShrink Field Functions 
    bool hasCoverShrink() const { return this->coverShrink_ != nullptr;};
    void deleteCoverShrink() { this->coverShrink_ = nullptr;};
    inline string coverShrink() const { DARABONBA_PTR_GET_DEFAULT(coverShrink_, "") };
    inline UpdateStoryShrinkRequest& setCoverShrink(string coverShrink) { DARABONBA_PTR_SET_VALUE(coverShrink_, coverShrink) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline UpdateStoryShrinkRequest& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabelsShrink Field Functions 
    bool hasCustomLabelsShrink() const { return this->customLabelsShrink_ != nullptr;};
    void deleteCustomLabelsShrink() { this->customLabelsShrink_ = nullptr;};
    inline string customLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(customLabelsShrink_, "") };
    inline UpdateStoryShrinkRequest& setCustomLabelsShrink(string customLabelsShrink) { DARABONBA_PTR_SET_VALUE(customLabelsShrink_, customLabelsShrink) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateStoryShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline UpdateStoryShrinkRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateStoryShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string storyName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline UpdateStoryShrinkRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


  protected:
    // The cover image of the story.
    std::shared_ptr<string> coverShrink_ = nullptr;
    // The custom ID.
    std::shared_ptr<string> customId_ = nullptr;
    // The custom tags. You can specify up to 100 custom tags.
    std::shared_ptr<string> customLabelsShrink_ = nullptr;
    // The name of the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The ID of the story.
    // 
    // This parameter is required.
    std::shared_ptr<string> objectId_ = nullptr;
    // The name of the project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the story.
    std::shared_ptr<string> storyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
