// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEMETASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEMETASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class GetFileMetaShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
      DARABONBA_PTR_TO_JSON(WithFields, withFieldsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileMetaShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
      DARABONBA_PTR_FROM_JSON(WithFields, withFieldsShrink_);
    };
    GetFileMetaShrinkRequest() = default ;
    GetFileMetaShrinkRequest(const GetFileMetaShrinkRequest &) = default ;
    GetFileMetaShrinkRequest(GetFileMetaShrinkRequest &&) = default ;
    GetFileMetaShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileMetaShrinkRequest() = default ;
    GetFileMetaShrinkRequest& operator=(const GetFileMetaShrinkRequest &) = default ;
    GetFileMetaShrinkRequest& operator=(GetFileMetaShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->projectName_ == nullptr && return this->URI_ == nullptr && return this->withFieldsShrink_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline GetFileMetaShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetFileMetaShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline GetFileMetaShrinkRequest& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    // withFieldsShrink Field Functions 
    bool hasWithFieldsShrink() const { return this->withFieldsShrink_ != nullptr;};
    void deleteWithFieldsShrink() { this->withFieldsShrink_ = nullptr;};
    inline string withFieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(withFieldsShrink_, "") };
    inline GetFileMetaShrinkRequest& setWithFieldsShrink(string withFieldsShrink) { DARABONBA_PTR_SET_VALUE(withFieldsShrink_, withFieldsShrink) };


  protected:
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The URI of the file. Make sure that the file is indexed****.
    // 
    // Specify the OSS URI in the oss://${Bucket}/${Object} format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    // 
    // Specify the URI of the file in Photo and Drive Service in the pds://domains/${domain}/drives/${drive}/files/${file}/revisions/${revision} format.
    // 
    // This parameter is required.
    std::shared_ptr<string> URI_ = nullptr;
    // The metadata fields that you want to include in the response. You can use this parameter to reduce the size of the response.
    // 
    // If you do not specify this parameter or leave this parameter empty, the operation returns all metadata fields of the file.
    std::shared_ptr<string> withFieldsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
