// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASETFILEMETARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATASETFILEMETARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DatasetFileMetaContentGet.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetDatasetFileMetaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatasetFileMetaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetFileMeta, datasetFileMeta_);
      DARABONBA_PTR_TO_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatasetFileMetaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetFileMeta, datasetFileMeta_);
      DARABONBA_PTR_FROM_JSON(DatasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetDatasetFileMetaResponseBody() = default ;
    GetDatasetFileMetaResponseBody(const GetDatasetFileMetaResponseBody &) = default ;
    GetDatasetFileMetaResponseBody(GetDatasetFileMetaResponseBody &&) = default ;
    GetDatasetFileMetaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatasetFileMetaResponseBody() = default ;
    GetDatasetFileMetaResponseBody& operator=(const GetDatasetFileMetaResponseBody &) = default ;
    GetDatasetFileMetaResponseBody& operator=(GetDatasetFileMetaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetFileMeta_ == nullptr
        && return this->datasetId_ == nullptr && return this->datasetVersion_ == nullptr && return this->requestId_ == nullptr && return this->workspaceId_ == nullptr; };
    // datasetFileMeta Field Functions 
    bool hasDatasetFileMeta() const { return this->datasetFileMeta_ != nullptr;};
    void deleteDatasetFileMeta() { this->datasetFileMeta_ = nullptr;};
    inline const DatasetFileMetaContentGet & datasetFileMeta() const { DARABONBA_PTR_GET_CONST(datasetFileMeta_, DatasetFileMetaContentGet) };
    inline DatasetFileMetaContentGet datasetFileMeta() { DARABONBA_PTR_GET(datasetFileMeta_, DatasetFileMetaContentGet) };
    inline GetDatasetFileMetaResponseBody& setDatasetFileMeta(const DatasetFileMetaContentGet & datasetFileMeta) { DARABONBA_PTR_SET_VALUE(datasetFileMeta_, datasetFileMeta) };
    inline GetDatasetFileMetaResponseBody& setDatasetFileMeta(DatasetFileMetaContentGet && datasetFileMeta) { DARABONBA_PTR_SET_RVALUE(datasetFileMeta_, datasetFileMeta) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string datasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline GetDatasetFileMetaResponseBody& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline GetDatasetFileMetaResponseBody& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatasetFileMetaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetDatasetFileMetaResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The queried metadata records of dataset files.
    std::shared_ptr<DatasetFileMetaContentGet> datasetFileMeta_ = nullptr;
    // The dataset ID.
    std::shared_ptr<string> datasetId_ = nullptr;
    // The dataset version.
    std::shared_ptr<string> datasetVersion_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
