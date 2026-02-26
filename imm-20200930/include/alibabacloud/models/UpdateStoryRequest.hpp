// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateStoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateStoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(StoryName, storyName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateStoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(StoryName, storyName_);
    };
    UpdateStoryRequest() = default ;
    UpdateStoryRequest(const UpdateStoryRequest &) = default ;
    UpdateStoryRequest(UpdateStoryRequest &&) = default ;
    UpdateStoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateStoryRequest() = default ;
    UpdateStoryRequest& operator=(const UpdateStoryRequest &) = default ;
    UpdateStoryRequest& operator=(UpdateStoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Cover : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Cover& obj) { 
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Cover& obj) { 
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      Cover() = default ;
      Cover(const Cover &) = default ;
      Cover(Cover &&) = default ;
      Cover(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Cover() = default ;
      Cover& operator=(const Cover &) = default ;
      Cover& operator=(Cover &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->URI_ == nullptr; };
      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Cover& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The URI of the cover image.
      // 
      // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->cover_ == nullptr
        && this->customId_ == nullptr && this->customLabels_ == nullptr && this->datasetName_ == nullptr && this->objectId_ == nullptr && this->projectName_ == nullptr
        && this->storyName_ == nullptr; };
    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const UpdateStoryRequest::Cover & getCover() const { DARABONBA_PTR_GET_CONST(cover_, UpdateStoryRequest::Cover) };
    inline UpdateStoryRequest::Cover getCover() { DARABONBA_PTR_GET(cover_, UpdateStoryRequest::Cover) };
    inline UpdateStoryRequest& setCover(const UpdateStoryRequest::Cover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline UpdateStoryRequest& setCover(UpdateStoryRequest::Cover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline UpdateStoryRequest& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & getCustomLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & getCustomLabels() { DARABONBA_GET(customLabels_) };
    inline UpdateStoryRequest& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline UpdateStoryRequest& setCustomLabels(Darabonba::Json && customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateStoryRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline UpdateStoryRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateStoryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string getStoryName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline UpdateStoryRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


  protected:
    // The cover image of the story.
    shared_ptr<UpdateStoryRequest::Cover> cover_ {};
    // The custom ID.
    shared_ptr<string> customId_ {};
    // The custom tags. You can specify up to 100 custom tags.
    Darabonba::Json customLabels_ {};
    // The name of the dataset.
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The ID of the story.
    // 
    // This parameter is required.
    shared_ptr<string> objectId_ {};
    // The name of the project.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The name of the story.
    shared_ptr<string> storyName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
