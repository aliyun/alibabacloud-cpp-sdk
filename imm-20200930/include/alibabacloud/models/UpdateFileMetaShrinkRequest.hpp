// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEMETASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEMETASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateFileMetaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(File, fileShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(File, fileShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    UpdateFileMetaShrinkRequest() = default ;
    UpdateFileMetaShrinkRequest(const UpdateFileMetaShrinkRequest &) = default ;
    UpdateFileMetaShrinkRequest(UpdateFileMetaShrinkRequest &&) = default ;
    UpdateFileMetaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileMetaShrinkRequest() = default ;
    UpdateFileMetaShrinkRequest& operator=(const UpdateFileMetaShrinkRequest &) = default ;
    UpdateFileMetaShrinkRequest& operator=(UpdateFileMetaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetName_ != nullptr
        && this->fileShrink_ != nullptr && this->projectName_ != nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateFileMetaShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // fileShrink Field Functions 
    bool hasFileShrink() const { return this->fileShrink_ != nullptr;};
    void deleteFileShrink() { this->fileShrink_ = nullptr;};
    inline string fileShrink() const { DARABONBA_PTR_GET_DEFAULT(fileShrink_, "") };
    inline UpdateFileMetaShrinkRequest& setFileShrink(string fileShrink) { DARABONBA_PTR_SET_VALUE(fileShrink_, fileShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateFileMetaShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the dataset. You can obtain the name of the dataset from the response of the [CreateDataset](https://help.aliyun.com/document_detail/478160.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The file and its metadata items to be updated. The value must be in the JSON format.
    // 
    // This parameter is required.
    std::shared_ptr<string> fileShrink_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
