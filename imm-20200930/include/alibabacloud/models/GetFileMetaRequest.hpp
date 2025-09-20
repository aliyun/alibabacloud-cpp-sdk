// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILEMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFILEMETAREQUEST_HPP_
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
  class GetFileMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
      DARABONBA_PTR_TO_JSON(WithFields, withFields_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
      DARABONBA_PTR_FROM_JSON(WithFields, withFields_);
    };
    GetFileMetaRequest() = default ;
    GetFileMetaRequest(const GetFileMetaRequest &) = default ;
    GetFileMetaRequest(GetFileMetaRequest &&) = default ;
    GetFileMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileMetaRequest() = default ;
    GetFileMetaRequest& operator=(const GetFileMetaRequest &) = default ;
    GetFileMetaRequest& operator=(GetFileMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetName_ != nullptr
        && this->projectName_ != nullptr && this->URI_ != nullptr && this->withFields_ != nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline GetFileMetaRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline GetFileMetaRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string URI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline GetFileMetaRequest& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    // withFields Field Functions 
    bool hasWithFields() const { return this->withFields_ != nullptr;};
    void deleteWithFields() { this->withFields_ = nullptr;};
    inline const vector<string> & withFields() const { DARABONBA_PTR_GET_CONST(withFields_, vector<string>) };
    inline vector<string> withFields() { DARABONBA_PTR_GET(withFields_, vector<string>) };
    inline GetFileMetaRequest& setWithFields(const vector<string> & withFields) { DARABONBA_PTR_SET_VALUE(withFields_, withFields) };
    inline GetFileMetaRequest& setWithFields(vector<string> && withFields) { DARABONBA_PTR_SET_RVALUE(withFields_, withFields) };


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
    std::shared_ptr<vector<string>> withFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
