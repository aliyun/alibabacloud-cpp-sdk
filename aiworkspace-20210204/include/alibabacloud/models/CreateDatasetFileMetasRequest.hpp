// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETFILEMETASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETFILEMETASREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatasetFileMetaContentCreate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateDatasetFileMetasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetFileMetasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetFileMetas, datasetFileMetas_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetFileMetasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetFileMetas, datasetFileMetas_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDatasetFileMetasRequest() = default ;
    CreateDatasetFileMetasRequest(const CreateDatasetFileMetasRequest &) = default ;
    CreateDatasetFileMetasRequest(CreateDatasetFileMetasRequest &&) = default ;
    CreateDatasetFileMetasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetFileMetasRequest() = default ;
    CreateDatasetFileMetasRequest& operator=(const CreateDatasetFileMetasRequest &) = default ;
    CreateDatasetFileMetasRequest& operator=(CreateDatasetFileMetasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetFileMetas_ != nullptr
        && this->datasetVersion_ != nullptr && this->workspaceId_ != nullptr; };
    // datasetFileMetas Field Functions 
    bool hasDatasetFileMetas() const { return this->datasetFileMetas_ != nullptr;};
    void deleteDatasetFileMetas() { this->datasetFileMetas_ = nullptr;};
    inline const vector<DatasetFileMetaContentCreate> & datasetFileMetas() const { DARABONBA_PTR_GET_CONST(datasetFileMetas_, vector<DatasetFileMetaContentCreate>) };
    inline vector<DatasetFileMetaContentCreate> datasetFileMetas() { DARABONBA_PTR_GET(datasetFileMetas_, vector<DatasetFileMetaContentCreate>) };
    inline CreateDatasetFileMetasRequest& setDatasetFileMetas(const vector<DatasetFileMetaContentCreate> & datasetFileMetas) { DARABONBA_PTR_SET_VALUE(datasetFileMetas_, datasetFileMetas) };
    inline CreateDatasetFileMetasRequest& setDatasetFileMetas(vector<DatasetFileMetaContentCreate> && datasetFileMetas) { DARABONBA_PTR_SET_RVALUE(datasetFileMetas_, datasetFileMetas) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline CreateDatasetFileMetasRequest& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDatasetFileMetasRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The metadata of the file.
    // 
    // This parameter is required.
    std::shared_ptr<vector<DatasetFileMetaContentCreate>> datasetFileMetas_ = nullptr;
    // The dataset version name.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetVersion_ = nullptr;
    // The ID of the workspace to which the dataset belongs. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
