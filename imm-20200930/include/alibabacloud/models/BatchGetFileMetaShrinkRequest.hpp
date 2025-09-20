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
    virtual bool empty() const override { this->datasetName_ != nullptr
        && this->projectName_ != nullptr && this->URIsShrink_ != nullptr && this->withFieldsShrink_ != nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline BatchGetFileMetaShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline BatchGetFileMetaShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // URIsShrink Field Functions 
    bool hasURIsShrink() const { return this->URIsShrink_ != nullptr;};
    void deleteURIsShrink() { this->URIsShrink_ = nullptr;};
    inline string URIsShrink() const { DARABONBA_PTR_GET_DEFAULT(URIsShrink_, "") };
    inline BatchGetFileMetaShrinkRequest& setURIsShrink(string URIsShrink) { DARABONBA_PTR_SET_VALUE(URIsShrink_, URIsShrink) };


    // withFieldsShrink Field Functions 
    bool hasWithFieldsShrink() const { return this->withFieldsShrink_ != nullptr;};
    void deleteWithFieldsShrink() { this->withFieldsShrink_ = nullptr;};
    inline string withFieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(withFieldsShrink_, "") };
    inline BatchGetFileMetaShrinkRequest& setWithFieldsShrink(string withFieldsShrink) { DARABONBA_PTR_SET_VALUE(withFieldsShrink_, withFieldsShrink) };


  protected:
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The array of object URIs. You can specify up to 100 object URIs in an array.
    // 
    // This parameter is required.
    std::shared_ptr<string> URIsShrink_ = nullptr;
    // The fields to return. If you specify this parameter, only specified metadata fields are returned. You can use this parameter to control the size of the response.
    // 
    // If you do not specify this parameter or leave this parameter empty, the operation returns all metadata fields.
    std::shared_ptr<string> withFieldsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
