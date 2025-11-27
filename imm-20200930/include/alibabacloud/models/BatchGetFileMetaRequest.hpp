// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFILEMETAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFILEMETAREQUEST_HPP_
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
  class BatchGetFileMetaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFileMetaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(URIs, URIs_);
      DARABONBA_PTR_TO_JSON(WithFields, withFields_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFileMetaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(URIs, URIs_);
      DARABONBA_PTR_FROM_JSON(WithFields, withFields_);
    };
    BatchGetFileMetaRequest() = default ;
    BatchGetFileMetaRequest(const BatchGetFileMetaRequest &) = default ;
    BatchGetFileMetaRequest(BatchGetFileMetaRequest &&) = default ;
    BatchGetFileMetaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFileMetaRequest() = default ;
    BatchGetFileMetaRequest& operator=(const BatchGetFileMetaRequest &) = default ;
    BatchGetFileMetaRequest& operator=(BatchGetFileMetaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->projectName_ == nullptr && return this->URIs_ == nullptr && return this->withFields_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline BatchGetFileMetaRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline BatchGetFileMetaRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // URIs Field Functions 
    bool hasURIs() const { return this->URIs_ != nullptr;};
    void deleteURIs() { this->URIs_ = nullptr;};
    inline const vector<string> & URIs() const { DARABONBA_PTR_GET_CONST(URIs_, vector<string>) };
    inline vector<string> URIs() { DARABONBA_PTR_GET(URIs_, vector<string>) };
    inline BatchGetFileMetaRequest& setURIs(const vector<string> & URIs) { DARABONBA_PTR_SET_VALUE(URIs_, URIs) };
    inline BatchGetFileMetaRequest& setURIs(vector<string> && URIs) { DARABONBA_PTR_SET_RVALUE(URIs_, URIs) };


    // withFields Field Functions 
    bool hasWithFields() const { return this->withFields_ != nullptr;};
    void deleteWithFields() { this->withFields_ = nullptr;};
    inline const vector<string> & withFields() const { DARABONBA_PTR_GET_CONST(withFields_, vector<string>) };
    inline vector<string> withFields() { DARABONBA_PTR_GET(withFields_, vector<string>) };
    inline BatchGetFileMetaRequest& setWithFields(const vector<string> & withFields) { DARABONBA_PTR_SET_VALUE(withFields_, withFields) };
    inline BatchGetFileMetaRequest& setWithFields(vector<string> && withFields) { DARABONBA_PTR_SET_RVALUE(withFields_, withFields) };


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
    std::shared_ptr<vector<string>> URIs_ = nullptr;
    // The fields to return. If you specify this parameter, only specified metadata fields are returned. You can use this parameter to control the size of the response.
    // 
    // If you do not specify this parameter or leave this parameter empty, the operation returns all metadata fields.
    std::shared_ptr<vector<string>> withFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
