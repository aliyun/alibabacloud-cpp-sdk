// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFIGURECLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFIGURECLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/FigureClusterForReq.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateFigureClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFigureClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(FigureCluster, figureCluster_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFigureClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(FigureCluster, figureCluster_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
    };
    UpdateFigureClusterRequest() = default ;
    UpdateFigureClusterRequest(const UpdateFigureClusterRequest &) = default ;
    UpdateFigureClusterRequest(UpdateFigureClusterRequest &&) = default ;
    UpdateFigureClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFigureClusterRequest() = default ;
    UpdateFigureClusterRequest& operator=(const UpdateFigureClusterRequest &) = default ;
    UpdateFigureClusterRequest& operator=(UpdateFigureClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasetName_ != nullptr
        && this->figureCluster_ != nullptr && this->projectName_ != nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateFigureClusterRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // figureCluster Field Functions 
    bool hasFigureCluster() const { return this->figureCluster_ != nullptr;};
    void deleteFigureCluster() { this->figureCluster_ = nullptr;};
    inline const FigureClusterForReq & figureCluster() const { DARABONBA_PTR_GET_CONST(figureCluster_, FigureClusterForReq) };
    inline FigureClusterForReq figureCluster() { DARABONBA_PTR_GET(figureCluster_, FigureClusterForReq) };
    inline UpdateFigureClusterRequest& setFigureCluster(const FigureClusterForReq & figureCluster) { DARABONBA_PTR_SET_VALUE(figureCluster_, figureCluster) };
    inline UpdateFigureClusterRequest& setFigureCluster(FigureClusterForReq && figureCluster) { DARABONBA_PTR_SET_RVALUE(figureCluster_, figureCluster) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateFigureClusterRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


  protected:
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The information about the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<FigureClusterForReq> figureCluster_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
