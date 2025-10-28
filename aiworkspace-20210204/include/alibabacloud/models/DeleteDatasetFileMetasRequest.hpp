// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATASETFILEMETASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATASETFILEMETASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class DeleteDatasetFileMetasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDatasetFileMetasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetFileMetaIds, datasetFileMetaIds_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDatasetFileMetasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetFileMetaIds, datasetFileMetaIds_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteDatasetFileMetasRequest() = default ;
    DeleteDatasetFileMetasRequest(const DeleteDatasetFileMetasRequest &) = default ;
    DeleteDatasetFileMetasRequest(DeleteDatasetFileMetasRequest &&) = default ;
    DeleteDatasetFileMetasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDatasetFileMetasRequest() = default ;
    DeleteDatasetFileMetasRequest& operator=(const DeleteDatasetFileMetasRequest &) = default ;
    DeleteDatasetFileMetasRequest& operator=(DeleteDatasetFileMetasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetFileMetaIds_ == nullptr
        && return this->datasetVersion_ == nullptr && return this->workspaceId_ == nullptr; };
    // datasetFileMetaIds Field Functions 
    bool hasDatasetFileMetaIds() const { return this->datasetFileMetaIds_ != nullptr;};
    void deleteDatasetFileMetaIds() { this->datasetFileMetaIds_ = nullptr;};
    inline string datasetFileMetaIds() const { DARABONBA_PTR_GET_DEFAULT(datasetFileMetaIds_, "") };
    inline DeleteDatasetFileMetasRequest& setDatasetFileMetaIds(string datasetFileMetaIds) { DARABONBA_PTR_SET_VALUE(datasetFileMetaIds_, datasetFileMetaIds) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline DeleteDatasetFileMetasRequest& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteDatasetFileMetasRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The metadata ID of the dataset file.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetFileMetaIds_ = nullptr;
    // The dataset version.
    std::shared_ptr<string> datasetVersion_ = nullptr;
    // The ID of the workspace to which the dataset belongs. You can call [ListWorkspaces](https://help.aliyun.com/document_detail/449124.html) to obtain the workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
