// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEFILEMETASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEFILEMETASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class BatchUpdateFileMetaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Files, filesShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Files, filesShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    BatchUpdateFileMetaShrinkRequest() = default ;
    BatchUpdateFileMetaShrinkRequest(const BatchUpdateFileMetaShrinkRequest &) = default ;
    BatchUpdateFileMetaShrinkRequest(BatchUpdateFileMetaShrinkRequest &&) = default ;
    BatchUpdateFileMetaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateFileMetaShrinkRequest() = default ;
    BatchUpdateFileMetaShrinkRequest& operator=(const BatchUpdateFileMetaShrinkRequest &) = default ;
    BatchUpdateFileMetaShrinkRequest& operator=(BatchUpdateFileMetaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->filesShrink_ == nullptr && return this->projectName_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline BatchUpdateFileMetaShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // filesShrink Field Functions 
    bool hasFilesShrink() const { return this->filesShrink_ != nullptr;};
    void deleteFilesShrink() { this->filesShrink_ = nullptr;};
    inline string filesShrink() const { DARABONBA_PTR_GET_DEFAULT(filesShrink_, "") };
    inline BatchUpdateFileMetaShrinkRequest& setFilesShrink(string filesShrink) { DARABONBA_PTR_SET_VALUE(filesShrink_, filesShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline BatchUpdateFileMetaShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The files whose metadata you want to update.
    // 
    // This parameter is required.
    std::shared_ptr<string> filesShrink_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
