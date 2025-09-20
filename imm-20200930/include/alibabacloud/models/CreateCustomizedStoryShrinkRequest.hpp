// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateCustomizedStoryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomizedStoryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cover, coverShrink_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabelsShrink_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Files, filesShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(StoryName, storyName_);
      DARABONBA_PTR_TO_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_TO_JSON(StoryType, storyType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomizedStoryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cover, coverShrink_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabelsShrink_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Files, filesShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(StoryName, storyName_);
      DARABONBA_PTR_FROM_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_FROM_JSON(StoryType, storyType_);
    };
    CreateCustomizedStoryShrinkRequest() = default ;
    CreateCustomizedStoryShrinkRequest(const CreateCustomizedStoryShrinkRequest &) = default ;
    CreateCustomizedStoryShrinkRequest(CreateCustomizedStoryShrinkRequest &&) = default ;
    CreateCustomizedStoryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomizedStoryShrinkRequest() = default ;
    CreateCustomizedStoryShrinkRequest& operator=(const CreateCustomizedStoryShrinkRequest &) = default ;
    CreateCustomizedStoryShrinkRequest& operator=(CreateCustomizedStoryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coverShrink_ != nullptr
        && this->customLabelsShrink_ != nullptr && this->datasetName_ != nullptr && this->filesShrink_ != nullptr && this->projectName_ != nullptr && this->storyName_ != nullptr
        && this->storySubType_ != nullptr && this->storyType_ != nullptr; };
    // coverShrink Field Functions 
    bool hasCoverShrink() const { return this->coverShrink_ != nullptr;};
    void deleteCoverShrink() { this->coverShrink_ = nullptr;};
    inline string coverShrink() const { DARABONBA_PTR_GET_DEFAULT(coverShrink_, "") };
    inline CreateCustomizedStoryShrinkRequest& setCoverShrink(string coverShrink) { DARABONBA_PTR_SET_VALUE(coverShrink_, coverShrink) };


    // customLabelsShrink Field Functions 
    bool hasCustomLabelsShrink() const { return this->customLabelsShrink_ != nullptr;};
    void deleteCustomLabelsShrink() { this->customLabelsShrink_ = nullptr;};
    inline string customLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(customLabelsShrink_, "") };
    inline CreateCustomizedStoryShrinkRequest& setCustomLabelsShrink(string customLabelsShrink) { DARABONBA_PTR_SET_VALUE(customLabelsShrink_, customLabelsShrink) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateCustomizedStoryShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // filesShrink Field Functions 
    bool hasFilesShrink() const { return this->filesShrink_ != nullptr;};
    void deleteFilesShrink() { this->filesShrink_ = nullptr;};
    inline string filesShrink() const { DARABONBA_PTR_GET_DEFAULT(filesShrink_, "") };
    inline CreateCustomizedStoryShrinkRequest& setFilesShrink(string filesShrink) { DARABONBA_PTR_SET_VALUE(filesShrink_, filesShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateCustomizedStoryShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string storyName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline CreateCustomizedStoryShrinkRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


    // storySubType Field Functions 
    bool hasStorySubType() const { return this->storySubType_ != nullptr;};
    void deleteStorySubType() { this->storySubType_ = nullptr;};
    inline string storySubType() const { DARABONBA_PTR_GET_DEFAULT(storySubType_, "") };
    inline CreateCustomizedStoryShrinkRequest& setStorySubType(string storySubType) { DARABONBA_PTR_SET_VALUE(storySubType_, storySubType) };


    // storyType Field Functions 
    bool hasStoryType() const { return this->storyType_ != nullptr;};
    void deleteStoryType() { this->storyType_ = nullptr;};
    inline string storyType() const { DARABONBA_PTR_GET_DEFAULT(storyType_, "") };
    inline CreateCustomizedStoryShrinkRequest& setStoryType(string storyType) { DARABONBA_PTR_SET_VALUE(storyType_, storyType) };


  protected:
    // The cover image of the story. You can specify an image as the cover image of the custom story.
    // 
    // This parameter is required.
    std::shared_ptr<string> coverShrink_ = nullptr;
    // The custom labels. You can specify labels to help you identify and retrieve the story.
    std::shared_ptr<string> customLabelsShrink_ = nullptr;
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The files of the story. You can specify up to 100 files in a custom story.
    // 
    // This parameter is required.
    std::shared_ptr<string> filesShrink_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the story.
    // 
    // This parameter is required.
    std::shared_ptr<string> storyName_ = nullptr;
    // The subtype of the story. For information about valid subtypes, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> storySubType_ = nullptr;
    // The type of the story. For information about valid types, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> storyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
