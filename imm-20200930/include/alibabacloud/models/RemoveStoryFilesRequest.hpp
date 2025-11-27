// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVESTORYFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVESTORYFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveStoryFilesRequestFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class RemoveStoryFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveStoryFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveStoryFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    RemoveStoryFilesRequest() = default ;
    RemoveStoryFilesRequest(const RemoveStoryFilesRequest &) = default ;
    RemoveStoryFilesRequest(RemoveStoryFilesRequest &&) = default ;
    RemoveStoryFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveStoryFilesRequest() = default ;
    RemoveStoryFilesRequest& operator=(const RemoveStoryFilesRequest &) = default ;
    RemoveStoryFilesRequest& operator=(RemoveStoryFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->files_ == nullptr && return this->objectId_ == nullptr && return this->projectName_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline RemoveStoryFilesRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<RemoveStoryFilesRequestFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<RemoveStoryFilesRequestFiles>) };
    inline vector<RemoveStoryFilesRequestFiles> files() { DARABONBA_PTR_GET(files_, vector<RemoveStoryFilesRequestFiles>) };
    inline RemoveStoryFilesRequest& setFiles(const vector<RemoveStoryFilesRequestFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline RemoveStoryFilesRequest& setFiles(vector<RemoveStoryFilesRequestFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline RemoveStoryFilesRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline RemoveStoryFilesRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The files that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<vector<RemoveStoryFilesRequestFiles>> files_ = nullptr;
    // The ID of the story.
    // 
    // This parameter is required.
    std::shared_ptr<string> objectId_ = nullptr;
    // The name of the project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
