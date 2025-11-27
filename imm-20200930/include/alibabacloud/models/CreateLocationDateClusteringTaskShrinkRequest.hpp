// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELOCATIONDATECLUSTERINGTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELOCATIONDATECLUSTERINGTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateLocationDateClusteringTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLocationDateClusteringTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(DateOptions, dateOptionsShrink_);
      DARABONBA_PTR_TO_JSON(LocationOptions, locationOptionsShrink_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLocationDateClusteringTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(DateOptions, dateOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(LocationOptions, locationOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateLocationDateClusteringTaskShrinkRequest() = default ;
    CreateLocationDateClusteringTaskShrinkRequest(const CreateLocationDateClusteringTaskShrinkRequest &) = default ;
    CreateLocationDateClusteringTaskShrinkRequest(CreateLocationDateClusteringTaskShrinkRequest &&) = default ;
    CreateLocationDateClusteringTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLocationDateClusteringTaskShrinkRequest() = default ;
    CreateLocationDateClusteringTaskShrinkRequest& operator=(const CreateLocationDateClusteringTaskShrinkRequest &) = default ;
    CreateLocationDateClusteringTaskShrinkRequest& operator=(CreateLocationDateClusteringTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->dateOptionsShrink_ == nullptr && return this->locationOptionsShrink_ == nullptr && return this->notificationShrink_ == nullptr && return this->projectName_ == nullptr && return this->tagsShrink_ == nullptr
        && return this->userData_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateLocationDateClusteringTaskShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // dateOptionsShrink Field Functions 
    bool hasDateOptionsShrink() const { return this->dateOptionsShrink_ != nullptr;};
    void deleteDateOptionsShrink() { this->dateOptionsShrink_ = nullptr;};
    inline string dateOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(dateOptionsShrink_, "") };
    inline CreateLocationDateClusteringTaskShrinkRequest& setDateOptionsShrink(string dateOptionsShrink) { DARABONBA_PTR_SET_VALUE(dateOptionsShrink_, dateOptionsShrink) };


    // locationOptionsShrink Field Functions 
    bool hasLocationOptionsShrink() const { return this->locationOptionsShrink_ != nullptr;};
    void deleteLocationOptionsShrink() { this->locationOptionsShrink_ = nullptr;};
    inline string locationOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(locationOptionsShrink_, "") };
    inline CreateLocationDateClusteringTaskShrinkRequest& setLocationOptionsShrink(string locationOptionsShrink) { DARABONBA_PTR_SET_VALUE(locationOptionsShrink_, locationOptionsShrink) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateLocationDateClusteringTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateLocationDateClusteringTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateLocationDateClusteringTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateLocationDateClusteringTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The name of the dataset.[](~~478160~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The date configurations for clustering.
    // 
    // >  Adjusting these configurations affects existing spatiotemporal clusters for the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> dateOptionsShrink_ = nullptr;
    // The geolocation configurations for clustering.
    // 
    // >  Adjusting these configurations affects existing spatiotemporal clusters for the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> locationOptionsShrink_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The name of the project.[](~~478153~~)
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The custom tags. You can search for or filter asynchronous tasks by custom tag.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The custom information, which is returned in an asynchronous notification and facilitates notification management. The maximum length of the value is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
