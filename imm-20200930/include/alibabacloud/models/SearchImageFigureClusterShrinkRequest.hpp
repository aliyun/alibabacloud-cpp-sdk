// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEFIGURECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEFIGURECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SearchImageFigureClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageFigureClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageFigureClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialConfig, credentialConfigShrink_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
    };
    SearchImageFigureClusterShrinkRequest() = default ;
    SearchImageFigureClusterShrinkRequest(const SearchImageFigureClusterShrinkRequest &) = default ;
    SearchImageFigureClusterShrinkRequest(SearchImageFigureClusterShrinkRequest &&) = default ;
    SearchImageFigureClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageFigureClusterShrinkRequest() = default ;
    SearchImageFigureClusterShrinkRequest& operator=(const SearchImageFigureClusterShrinkRequest &) = default ;
    SearchImageFigureClusterShrinkRequest& operator=(SearchImageFigureClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->credentialConfigShrink_ != nullptr
        && this->datasetName_ != nullptr && this->projectName_ != nullptr && this->sourceURI_ != nullptr; };
    // credentialConfigShrink Field Functions 
    bool hasCredentialConfigShrink() const { return this->credentialConfigShrink_ != nullptr;};
    void deleteCredentialConfigShrink() { this->credentialConfigShrink_ = nullptr;};
    inline string credentialConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(credentialConfigShrink_, "") };
    inline SearchImageFigureClusterShrinkRequest& setCredentialConfigShrink(string credentialConfigShrink) { DARABONBA_PTR_SET_VALUE(credentialConfigShrink_, credentialConfigShrink) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SearchImageFigureClusterShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SearchImageFigureClusterShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline SearchImageFigureClusterShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


  protected:
    // **If you have no special requirements, leave this parameter empty.**
    // 
    // The authorization chain settings. For more information, see [Use authorization chains to access resources of other entities](https://help.aliyun.com/document_detail/465340.html).
    std::shared_ptr<string> credentialConfigShrink_ = nullptr;
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The OSS URI of the image.
    // 
    // Specify the OSS URI in the `oss://${Bucket}/${Object}` format, where `${Bucket}` is the name of the bucket in the same region as the current project and `${Object}` is the path of the object with the extension included.
    std::shared_ptr<string> sourceURI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
