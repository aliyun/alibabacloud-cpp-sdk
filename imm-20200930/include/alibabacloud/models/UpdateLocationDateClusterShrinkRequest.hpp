// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELOCATIONDATECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELOCATIONDATECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateLocationDateClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLocationDateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_PTR_TO_JSON(CustomLabels, customLabelsShrink_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLocationDateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_PTR_FROM_JSON(CustomLabels, customLabelsShrink_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateLocationDateClusterShrinkRequest() = default ;
    UpdateLocationDateClusterShrinkRequest(const UpdateLocationDateClusterShrinkRequest &) = default ;
    UpdateLocationDateClusterShrinkRequest(UpdateLocationDateClusterShrinkRequest &&) = default ;
    UpdateLocationDateClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLocationDateClusterShrinkRequest() = default ;
    UpdateLocationDateClusterShrinkRequest& operator=(const UpdateLocationDateClusterShrinkRequest &) = default ;
    UpdateLocationDateClusterShrinkRequest& operator=(UpdateLocationDateClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customId_ == nullptr
        && return this->customLabelsShrink_ == nullptr && return this->datasetName_ == nullptr && return this->objectId_ == nullptr && return this->projectName_ == nullptr && return this->title_ == nullptr; };
    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline UpdateLocationDateClusterShrinkRequest& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabelsShrink Field Functions 
    bool hasCustomLabelsShrink() const { return this->customLabelsShrink_ != nullptr;};
    void deleteCustomLabelsShrink() { this->customLabelsShrink_ = nullptr;};
    inline string customLabelsShrink() const { DARABONBA_PTR_GET_DEFAULT(customLabelsShrink_, "") };
    inline UpdateLocationDateClusterShrinkRequest& setCustomLabelsShrink(string customLabelsShrink) { DARABONBA_PTR_SET_VALUE(customLabelsShrink_, customLabelsShrink) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline UpdateLocationDateClusterShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline UpdateLocationDateClusterShrinkRequest& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateLocationDateClusterShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateLocationDateClusterShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The custom ID of the cluster. When the cluster is indexed into the dataset, the custom ID is stored as the data attribute. You can map the custom ID to other data in your business system. For example, you can pass the custom ID to map a URI to an ID. We recommend that you specify a globally unique value. The value can be up to 1,024 bytes in size.
    std::shared_ptr<string> customId_ = nullptr;
    // The custom labels. The parameter stores custom key-value labels, which can be used to filter data. You can specify up to 100 custom labels for a cluster.
    std::shared_ptr<string> customLabelsShrink_ = nullptr;
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The ID of the cluster that you want to update.
    // 
    // This parameter is required.
    std::shared_ptr<string> objectId_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the cluster. The name can be used to search for the cluster. The value can be up to 1,024 bytes in size.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
