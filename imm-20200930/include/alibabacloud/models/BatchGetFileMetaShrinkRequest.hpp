// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFILEMETASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFILEMETASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class BatchGetFileMetaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(URIs, URIsShrink_);
      DARABONBA_PTR_TO_JSON(WithFields, withFieldsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(URIs, URIsShrink_);
      DARABONBA_PTR_FROM_JSON(WithFields, withFieldsShrink_);
    };
    BatchGetFileMetaShrinkRequest() = default ;
    BatchGetFileMetaShrinkRequest(const BatchGetFileMetaShrinkRequest &) = default ;
    BatchGetFileMetaShrinkRequest(BatchGetFileMetaShrinkRequest &&) = default ;
    BatchGetFileMetaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFileMetaShrinkRequest() = default ;
    BatchGetFileMetaShrinkRequest& operator=(const BatchGetFileMetaShrinkRequest &) = default ;
    BatchGetFileMetaShrinkRequest& operator=(BatchGetFileMetaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->projectName_ == nullptr && this->URIsShrink_ == nullptr && this->withFieldsShrink_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline BatchGetFileMetaShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline BatchGetFileMetaShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // URIsShrink Field Functions 
    bool hasURIsShrink() const { return this->URIsShrink_ != nullptr;};
    void deleteURIsShrink() { this->URIsShrink_ = nullptr;};
    inline string getURIsShrink() const { DARABONBA_PTR_GET_DEFAULT(URIsShrink_, "") };
    inline BatchGetFileMetaShrinkRequest& setURIsShrink(string URIsShrink) { DARABONBA_PTR_SET_VALUE(URIsShrink_, URIsShrink) };


    // withFieldsShrink Field Functions 
    bool hasWithFieldsShrink() const { return this->withFieldsShrink_ != nullptr;};
    void deleteWithFieldsShrink() { this->withFieldsShrink_ = nullptr;};
    inline string getWithFieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(withFieldsShrink_, "") };
    inline BatchGetFileMetaShrinkRequest& setWithFieldsShrink(string withFieldsShrink) { DARABONBA_PTR_SET_VALUE(withFieldsShrink_, withFieldsShrink) };


  protected:
    // The name of the dataset. For more information about how to obtain the dataset name, refer to [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The name of the project. For more information about how to obtain the project name, refer to [Create a project](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The list of file URIs. A maximum of 100 URIs are supported.
    // 
    // This parameter is required.
    shared_ptr<string> URIsShrink_ {};
    // The list of fields to be returned. If you specify this parameter, only the values of the specified fields are returned, instead of all existing metadata fields. This parameter can be used to reduce the size of the returned struct.
    // 
    // If you do not specify this parameter or leave it empty, all fields are returned.
    shared_ptr<string> withFieldsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
