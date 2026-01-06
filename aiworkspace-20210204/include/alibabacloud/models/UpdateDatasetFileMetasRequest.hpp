// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETFILEMETASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETFILEMETASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetFileMetaConentUpdate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateDatasetFileMetasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetFileMetasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetFileMetas, datasetFileMetas_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(TagJobId, tagJobId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetFileMetasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetFileMetas, datasetFileMetas_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(TagJobId, tagJobId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDatasetFileMetasRequest() = default ;
    UpdateDatasetFileMetasRequest(const UpdateDatasetFileMetasRequest &) = default ;
    UpdateDatasetFileMetasRequest(UpdateDatasetFileMetasRequest &&) = default ;
    UpdateDatasetFileMetasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetFileMetasRequest() = default ;
    UpdateDatasetFileMetasRequest& operator=(const UpdateDatasetFileMetasRequest &) = default ;
    UpdateDatasetFileMetasRequest& operator=(UpdateDatasetFileMetasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetFileMetas_ == nullptr
        && this->datasetVersion_ == nullptr && this->tagJobId_ == nullptr && this->workspaceId_ == nullptr; };
    // datasetFileMetas Field Functions 
    bool hasDatasetFileMetas() const { return this->datasetFileMetas_ != nullptr;};
    void deleteDatasetFileMetas() { this->datasetFileMetas_ = nullptr;};
    inline const vector<DatasetFileMetaConentUpdate> & getDatasetFileMetas() const { DARABONBA_PTR_GET_CONST(datasetFileMetas_, vector<DatasetFileMetaConentUpdate>) };
    inline vector<DatasetFileMetaConentUpdate> getDatasetFileMetas() { DARABONBA_PTR_GET(datasetFileMetas_, vector<DatasetFileMetaConentUpdate>) };
    inline UpdateDatasetFileMetasRequest& setDatasetFileMetas(const vector<DatasetFileMetaConentUpdate> & datasetFileMetas) { DARABONBA_PTR_SET_VALUE(datasetFileMetas_, datasetFileMetas) };
    inline UpdateDatasetFileMetasRequest& setDatasetFileMetas(vector<DatasetFileMetaConentUpdate> && datasetFileMetas) { DARABONBA_PTR_SET_RVALUE(datasetFileMetas_, datasetFileMetas) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string getDatasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline UpdateDatasetFileMetasRequest& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // tagJobId Field Functions 
    bool hasTagJobId() const { return this->tagJobId_ != nullptr;};
    void deleteTagJobId() { this->tagJobId_ = nullptr;};
    inline string getTagJobId() const { DARABONBA_PTR_GET_DEFAULT(tagJobId_, "") };
    inline UpdateDatasetFileMetasRequest& setTagJobId(string tagJobId) { DARABONBA_PTR_SET_VALUE(tagJobId_, tagJobId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDatasetFileMetasRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The metadata records to be updated for the dataset files.
    // 
    // This parameter is required.
    shared_ptr<vector<DatasetFileMetaConentUpdate>> datasetFileMetas_ {};
    // The dataset version.
    shared_ptr<string> datasetVersion_ {};
    // The ID of the tagging job that is associated with the metadata tag of the dataset file.
    shared_ptr<string> tagJobId_ {};
    // The ID of the workspace to which the dataset belongs. To obtain the workspace ID, see [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html).
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
