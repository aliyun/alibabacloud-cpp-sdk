// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateCustomizedStoryRequestCover.hpp>
#include <vector>
#include <alibabacloud/models/CreateCustomizedStoryRequestFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateCustomizedStoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomizedStoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(StoryName, storyName_);
      DARABONBA_PTR_TO_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_TO_JSON(StoryType, storyType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomizedStoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(StoryName, storyName_);
      DARABONBA_PTR_FROM_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_FROM_JSON(StoryType, storyType_);
    };
    CreateCustomizedStoryRequest() = default ;
    CreateCustomizedStoryRequest(const CreateCustomizedStoryRequest &) = default ;
    CreateCustomizedStoryRequest(CreateCustomizedStoryRequest &&) = default ;
    CreateCustomizedStoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomizedStoryRequest() = default ;
    CreateCustomizedStoryRequest& operator=(const CreateCustomizedStoryRequest &) = default ;
    CreateCustomizedStoryRequest& operator=(CreateCustomizedStoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cover_ == nullptr
        && return this->customLabels_ == nullptr && return this->datasetName_ == nullptr && return this->files_ == nullptr && return this->projectName_ == nullptr && return this->storyName_ == nullptr
        && return this->storySubType_ == nullptr && return this->storyType_ == nullptr; };
    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const CreateCustomizedStoryRequestCover & cover() const { DARABONBA_PTR_GET_CONST(cover_, CreateCustomizedStoryRequestCover) };
    inline CreateCustomizedStoryRequestCover cover() { DARABONBA_PTR_GET(cover_, CreateCustomizedStoryRequestCover) };
    inline CreateCustomizedStoryRequest& setCover(const CreateCustomizedStoryRequestCover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline CreateCustomizedStoryRequest& setCover(CreateCustomizedStoryRequestCover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & customLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & customLabels() { DARABONBA_GET(customLabels_) };
    inline CreateCustomizedStoryRequest& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline CreateCustomizedStoryRequest& setCustomLabels(Darabonba::Json & customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateCustomizedStoryRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<CreateCustomizedStoryRequestFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<CreateCustomizedStoryRequestFiles>) };
    inline vector<CreateCustomizedStoryRequestFiles> files() { DARABONBA_PTR_GET(files_, vector<CreateCustomizedStoryRequestFiles>) };
    inline CreateCustomizedStoryRequest& setFiles(const vector<CreateCustomizedStoryRequestFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline CreateCustomizedStoryRequest& setFiles(vector<CreateCustomizedStoryRequestFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateCustomizedStoryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string storyName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline CreateCustomizedStoryRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


    // storySubType Field Functions 
    bool hasStorySubType() const { return this->storySubType_ != nullptr;};
    void deleteStorySubType() { this->storySubType_ = nullptr;};
    inline string storySubType() const { DARABONBA_PTR_GET_DEFAULT(storySubType_, "") };
    inline CreateCustomizedStoryRequest& setStorySubType(string storySubType) { DARABONBA_PTR_SET_VALUE(storySubType_, storySubType) };


    // storyType Field Functions 
    bool hasStoryType() const { return this->storyType_ != nullptr;};
    void deleteStoryType() { this->storyType_ = nullptr;};
    inline string storyType() const { DARABONBA_PTR_GET_DEFAULT(storyType_, "") };
    inline CreateCustomizedStoryRequest& setStoryType(string storyType) { DARABONBA_PTR_SET_VALUE(storyType_, storyType) };


  protected:
    // The cover image of the story. You can specify an image as the cover image of the custom story.
    // 
    // This parameter is required.
    std::shared_ptr<CreateCustomizedStoryRequestCover> cover_ = nullptr;
    // The custom labels. You can specify labels to help you identify and retrieve the story.
    Darabonba::Json customLabels_ = nullptr;
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The files of the story. You can specify up to 100 files in a custom story.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateCustomizedStoryRequestFiles>> files_ = nullptr;
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
