// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEFILEMETASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEFILEMETASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class BatchDeleteFileMetaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(URIs, URIsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(URIs, URIsShrink_);
    };
    BatchDeleteFileMetaShrinkRequest() = default ;
    BatchDeleteFileMetaShrinkRequest(const BatchDeleteFileMetaShrinkRequest &) = default ;
    BatchDeleteFileMetaShrinkRequest(BatchDeleteFileMetaShrinkRequest &&) = default ;
    BatchDeleteFileMetaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteFileMetaShrinkRequest() = default ;
    BatchDeleteFileMetaShrinkRequest& operator=(const BatchDeleteFileMetaShrinkRequest &) = default ;
    BatchDeleteFileMetaShrinkRequest& operator=(BatchDeleteFileMetaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetName_ != nullptr
        && this->projectName_ != nullptr && this->URIsShrink_ != nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline BatchDeleteFileMetaShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline BatchDeleteFileMetaShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // URIsShrink Field Functions 
    bool hasURIsShrink() const { return this->URIsShrink_ != nullptr;};
    void deleteURIsShrink() { this->URIsShrink_ = nullptr;};
    inline string URIsShrink() const { DARABONBA_PTR_GET_DEFAULT(URIsShrink_, "") };
    inline BatchDeleteFileMetaShrinkRequest& setURIsShrink(string URIsShrink) { DARABONBA_PTR_SET_VALUE(URIsShrink_, URIsShrink) };


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
    std::shared_ptr<string> URIsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
