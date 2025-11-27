// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFIGURECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFIGURECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateFigureClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFigureClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(FigureCluster, figureClusterShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFigureClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(FigureCluster, figureClusterShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    UpdateFigureClusterShrinkRequest() = default ;
    UpdateFigureClusterShrinkRequest(const UpdateFigureClusterShrinkRequest &) = default ;
    UpdateFigureClusterShrinkRequest(UpdateFigureClusterShrinkRequest &&) = default ;
    UpdateFigureClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFigureClusterShrinkRequest() = default ;
    UpdateFigureClusterShrinkRequest& operator=(const UpdateFigureClusterShrinkRequest &) = default ;
    UpdateFigureClusterShrinkRequest& operator=(UpdateFigureClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->figureClusterShrink_ == nullptr && return this->projectName_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateFigureClusterShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // figureClusterShrink Field Functions 
    bool hasFigureClusterShrink() const { return this->figureClusterShrink_ != nullptr;};
    void deleteFigureClusterShrink() { this->figureClusterShrink_ = nullptr;};
    inline string figureClusterShrink() const { DARABONBA_PTR_GET_DEFAULT(figureClusterShrink_, "") };
    inline UpdateFigureClusterShrinkRequest& setFigureClusterShrink(string figureClusterShrink) { DARABONBA_PTR_SET_VALUE(figureClusterShrink_, figureClusterShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateFigureClusterShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The information about the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> figureClusterShrink_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
