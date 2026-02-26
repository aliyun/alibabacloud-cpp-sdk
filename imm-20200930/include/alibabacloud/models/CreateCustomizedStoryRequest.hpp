// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMIZEDSTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Files : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Files& obj) { 
        DARABONBA_PTR_TO_JSON(URI, URI_);
      };
      friend void from_json(const Darabonba::Json& j, Files& obj) { 
        DARABONBA_PTR_FROM_JSON(URI, URI_);
      };
      Files() = default ;
      Files(const Files &) = default ;
      Files(Files &&) = default ;
      Files(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Files() = default ;
      Files& operator=(const Files &) = default ;
      Files& operator=(Files &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->URI_ == nullptr; };
      // URI Field Functions 
      bool hasURI() const { return this->URI_ != nullptr;};
      void deleteURI() { this->URI_ = nullptr;};
      inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
      inline Files& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    protected:
      // The URIs of the files.
      // 
      // This parameter is required.
      shared_ptr<string> URI_ {};
    };

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
      // This parameter is required.
      shared_ptr<string> URI_ {};
    };

    virtual bool empty() const override { return this->cover_ == nullptr
        && this->customLabels_ == nullptr && this->datasetName_ == nullptr && this->files_ == nullptr && this->projectName_ == nullptr && this->storyName_ == nullptr
        && this->storySubType_ == nullptr && this->storyType_ == nullptr; };
    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const CreateCustomizedStoryRequest::Cover & getCover() const { DARABONBA_PTR_GET_CONST(cover_, CreateCustomizedStoryRequest::Cover) };
    inline CreateCustomizedStoryRequest::Cover getCover() { DARABONBA_PTR_GET(cover_, CreateCustomizedStoryRequest::Cover) };
    inline CreateCustomizedStoryRequest& setCover(const CreateCustomizedStoryRequest::Cover & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline CreateCustomizedStoryRequest& setCover(CreateCustomizedStoryRequest::Cover && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & getCustomLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & getCustomLabels() { DARABONBA_GET(customLabels_) };
    inline CreateCustomizedStoryRequest& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline CreateCustomizedStoryRequest& setCustomLabels(Darabonba::Json && customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateCustomizedStoryRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<CreateCustomizedStoryRequest::Files> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<CreateCustomizedStoryRequest::Files>) };
    inline vector<CreateCustomizedStoryRequest::Files> getFiles() { DARABONBA_PTR_GET(files_, vector<CreateCustomizedStoryRequest::Files>) };
    inline CreateCustomizedStoryRequest& setFiles(const vector<CreateCustomizedStoryRequest::Files> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline CreateCustomizedStoryRequest& setFiles(vector<CreateCustomizedStoryRequest::Files> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateCustomizedStoryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string getStoryName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline CreateCustomizedStoryRequest& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


    // storySubType Field Functions 
    bool hasStorySubType() const { return this->storySubType_ != nullptr;};
    void deleteStorySubType() { this->storySubType_ = nullptr;};
    inline string getStorySubType() const { DARABONBA_PTR_GET_DEFAULT(storySubType_, "") };
    inline CreateCustomizedStoryRequest& setStorySubType(string storySubType) { DARABONBA_PTR_SET_VALUE(storySubType_, storySubType) };


    // storyType Field Functions 
    bool hasStoryType() const { return this->storyType_ != nullptr;};
    void deleteStoryType() { this->storyType_ = nullptr;};
    inline string getStoryType() const { DARABONBA_PTR_GET_DEFAULT(storyType_, "") };
    inline CreateCustomizedStoryRequest& setStoryType(string storyType) { DARABONBA_PTR_SET_VALUE(storyType_, storyType) };


  protected:
    // The cover image of the story. You can specify an image as the cover image of the custom story.
    // 
    // This parameter is required.
    shared_ptr<CreateCustomizedStoryRequest::Cover> cover_ {};
    // The custom labels. You can specify labels to help you identify and retrieve the story.
    Darabonba::Json customLabels_ {};
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The files of the story. You can specify up to 100 files in a custom story.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateCustomizedStoryRequest::Files>> files_ {};
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The name of the story.
    // 
    // This parameter is required.
    shared_ptr<string> storyName_ {};
    // The subtype of the story. For information about valid subtypes, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    // 
    // This parameter is required.
    shared_ptr<string> storySubType_ {};
    // The type of the story. For information about valid types, see [Story types and subtypes](https://help.aliyun.com/document_detail/2743998.html).
    // 
    // This parameter is required.
    shared_ptr<string> storyType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
