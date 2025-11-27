// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFILEMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFILEMETAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InputFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateFileMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFileMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(File, file_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFileMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(File, file_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    UpdateFileMetaRequest() = default ;
    UpdateFileMetaRequest(const UpdateFileMetaRequest &) = default ;
    UpdateFileMetaRequest(UpdateFileMetaRequest &&) = default ;
    UpdateFileMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFileMetaRequest() = default ;
    UpdateFileMetaRequest& operator=(const UpdateFileMetaRequest &) = default ;
    UpdateFileMetaRequest& operator=(UpdateFileMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->file_ == nullptr && return this->projectName_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateFileMetaRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // file Field Functions 
    bool hasFile() const { return this->file_ != nullptr;};
    void deleteFile() { this->file_ = nullptr;};
    inline const InputFile & file() const { DARABONBA_PTR_GET_CONST(file_, InputFile) };
    inline InputFile file() { DARABONBA_PTR_GET(file_, InputFile) };
    inline UpdateFileMetaRequest& setFile(const InputFile & file) { DARABONBA_PTR_SET_VALUE(file_, file) };
    inline UpdateFileMetaRequest& setFile(InputFile && file) { DARABONBA_PTR_SET_RVALUE(file_, file) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateFileMetaRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the dataset. You can obtain the name of the dataset from the response of the [CreateDataset](https://help.aliyun.com/document_detail/478160.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The file and its metadata items to be updated. The value must be in the JSON format.
    // 
    // This parameter is required.
    std::shared_ptr<InputFile> file_ = nullptr;
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
