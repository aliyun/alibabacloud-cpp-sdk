// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETFIGURECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETFIGURECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class BatchGetFigureClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetFigureClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ObjectIds, objectIdsShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetFigureClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ObjectIds, objectIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    BatchGetFigureClusterShrinkRequest() = default ;
    BatchGetFigureClusterShrinkRequest(const BatchGetFigureClusterShrinkRequest &) = default ;
    BatchGetFigureClusterShrinkRequest(BatchGetFigureClusterShrinkRequest &&) = default ;
    BatchGetFigureClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetFigureClusterShrinkRequest() = default ;
    BatchGetFigureClusterShrinkRequest& operator=(const BatchGetFigureClusterShrinkRequest &) = default ;
    BatchGetFigureClusterShrinkRequest& operator=(BatchGetFigureClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetName_ != nullptr
        && this->objectIdsShrink_ != nullptr && this->projectName_ != nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline BatchGetFigureClusterShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // objectIdsShrink Field Functions 
    bool hasObjectIdsShrink() const { return this->objectIdsShrink_ != nullptr;};
    void deleteObjectIdsShrink() { this->objectIdsShrink_ = nullptr;};
    inline string objectIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectIdsShrink_, "") };
    inline BatchGetFigureClusterShrinkRequest& setObjectIdsShrink(string objectIdsShrink) { DARABONBA_PTR_SET_VALUE(objectIdsShrink_, objectIdsShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline BatchGetFigureClusterShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The cluster IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> objectIdsShrink_ = nullptr;
    // The name of the project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
