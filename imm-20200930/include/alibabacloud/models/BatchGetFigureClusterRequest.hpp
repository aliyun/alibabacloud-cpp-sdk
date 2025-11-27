// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFIGURECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFIGURECLUSTERREQUEST_HPP_
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
  class BatchGetFigureClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFigureClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ObjectIds, objectIds_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFigureClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ObjectIds, objectIds_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    BatchGetFigureClusterRequest() = default ;
    BatchGetFigureClusterRequest(const BatchGetFigureClusterRequest &) = default ;
    BatchGetFigureClusterRequest(BatchGetFigureClusterRequest &&) = default ;
    BatchGetFigureClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFigureClusterRequest() = default ;
    BatchGetFigureClusterRequest& operator=(const BatchGetFigureClusterRequest &) = default ;
    BatchGetFigureClusterRequest& operator=(BatchGetFigureClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->objectIds_ == nullptr && return this->projectName_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline BatchGetFigureClusterRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // objectIds Field Functions 
    bool hasObjectIds() const { return this->objectIds_ != nullptr;};
    void deleteObjectIds() { this->objectIds_ = nullptr;};
    inline const vector<string> & objectIds() const { DARABONBA_PTR_GET_CONST(objectIds_, vector<string>) };
    inline vector<string> objectIds() { DARABONBA_PTR_GET(objectIds_, vector<string>) };
    inline BatchGetFigureClusterRequest& setObjectIds(const vector<string> & objectIds) { DARABONBA_PTR_SET_VALUE(objectIds_, objectIds) };
    inline BatchGetFigureClusterRequest& setObjectIds(vector<string> && objectIds) { DARABONBA_PTR_SET_RVALUE(objectIds_, objectIds) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline BatchGetFigureClusterRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> objectIds_ = nullptr;
    // The name of the project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
