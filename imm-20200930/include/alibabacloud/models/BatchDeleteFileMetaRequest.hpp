// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEFILEMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEFILEMETAREQUEST_HPP_
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
  class BatchDeleteFileMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteFileMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(URIs, URIs_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteFileMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(URIs, URIs_);
    };
    BatchDeleteFileMetaRequest() = default ;
    BatchDeleteFileMetaRequest(const BatchDeleteFileMetaRequest &) = default ;
    BatchDeleteFileMetaRequest(BatchDeleteFileMetaRequest &&) = default ;
    BatchDeleteFileMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteFileMetaRequest() = default ;
    BatchDeleteFileMetaRequest& operator=(const BatchDeleteFileMetaRequest &) = default ;
    BatchDeleteFileMetaRequest& operator=(BatchDeleteFileMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->projectName_ == nullptr && return this->URIs_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline BatchDeleteFileMetaRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline BatchDeleteFileMetaRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // URIs Field Functions 
    bool hasURIs() const { return this->URIs_ != nullptr;};
    void deleteURIs() { this->URIs_ = nullptr;};
    inline const vector<string> & URIs() const { DARABONBA_PTR_GET_CONST(URIs_, vector<string>) };
    inline vector<string> URIs() { DARABONBA_PTR_GET(URIs_, vector<string>) };
    inline BatchDeleteFileMetaRequest& setURIs(const vector<string> & URIs) { DARABONBA_PTR_SET_VALUE(URIs_, URIs) };
    inline BatchDeleteFileMetaRequest& setURIs(vector<string> && URIs) { DARABONBA_PTR_SET_RVALUE(URIs_, URIs) };


  protected:
    // The name of the dataset. You can obtain the name of the dataset from the response of the [CreateDataset](https://help.aliyun.com/document_detail/478160.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The URIs of the OSS buckets in which the files whose metadata you want to delete are stored. You can specify up to 100 URIs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> URIs_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
