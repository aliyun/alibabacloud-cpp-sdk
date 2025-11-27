// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIGURECLUSTERSMERGINGTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIGURECLUSTERSMERGINGTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateFigureClustersMergingTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFigureClustersMergingTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Froms, fromsShrink_);
      DARABONBA_PTR_TO_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_TO_JSON(To, to_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFigureClustersMergingTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Froms, fromsShrink_);
      DARABONBA_PTR_FROM_JSON(Notification, notificationShrink_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Tags, tagsShrink_);
      DARABONBA_PTR_FROM_JSON(To, to_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    CreateFigureClustersMergingTaskShrinkRequest() = default ;
    CreateFigureClustersMergingTaskShrinkRequest(const CreateFigureClustersMergingTaskShrinkRequest &) = default ;
    CreateFigureClustersMergingTaskShrinkRequest(CreateFigureClustersMergingTaskShrinkRequest &&) = default ;
    CreateFigureClustersMergingTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFigureClustersMergingTaskShrinkRequest() = default ;
    CreateFigureClustersMergingTaskShrinkRequest& operator=(const CreateFigureClustersMergingTaskShrinkRequest &) = default ;
    CreateFigureClustersMergingTaskShrinkRequest& operator=(CreateFigureClustersMergingTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->from_ == nullptr && return this->fromsShrink_ == nullptr && return this->notificationShrink_ == nullptr && return this->projectName_ == nullptr && return this->tagsShrink_ == nullptr
        && return this->to_ == nullptr && return this->userData_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline CreateFigureClustersMergingTaskShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline CreateFigureClustersMergingTaskShrinkRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // fromsShrink Field Functions 
    bool hasFromsShrink() const { return this->fromsShrink_ != nullptr;};
    void deleteFromsShrink() { this->fromsShrink_ = nullptr;};
    inline string fromsShrink() const { DARABONBA_PTR_GET_DEFAULT(fromsShrink_, "") };
    inline CreateFigureClustersMergingTaskShrinkRequest& setFromsShrink(string fromsShrink) { DARABONBA_PTR_SET_VALUE(fromsShrink_, fromsShrink) };


    // notificationShrink Field Functions 
    bool hasNotificationShrink() const { return this->notificationShrink_ != nullptr;};
    void deleteNotificationShrink() { this->notificationShrink_ = nullptr;};
    inline string notificationShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationShrink_, "") };
    inline CreateFigureClustersMergingTaskShrinkRequest& setNotificationShrink(string notificationShrink) { DARABONBA_PTR_SET_VALUE(notificationShrink_, notificationShrink) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateFigureClustersMergingTaskShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // tagsShrink Field Functions 
    bool hasTagsShrink() const { return this->tagsShrink_ != nullptr;};
    void deleteTagsShrink() { this->tagsShrink_ = nullptr;};
    inline string tagsShrink() const { DARABONBA_PTR_GET_DEFAULT(tagsShrink_, "") };
    inline CreateFigureClustersMergingTaskShrinkRequest& setTagsShrink(string tagsShrink) { DARABONBA_PTR_SET_VALUE(tagsShrink_, tagsShrink) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline string to() const { DARABONBA_PTR_GET_DEFAULT(to_, "") };
    inline CreateFigureClustersMergingTaskShrinkRequest& setTo(string to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateFigureClustersMergingTaskShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The name of the dataset. For more information, see [Create a dataset](https://help.aliyun.com/document_detail/478160.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The ID of the source group. You must specify either From or Froms, but not both.
    std::shared_ptr<string> from_ = nullptr;
    // The IDs of source clustering groups. You must specify either From or Froms, but not both. You can specify up to 100 task IDs.
    std::shared_ptr<string> fromsShrink_ = nullptr;
    // The notification settings. For information about the asynchronous notification format, see [Asynchronous message examples](https://help.aliyun.com/document_detail/2743997.html).
    std::shared_ptr<string> notificationShrink_ = nullptr;
    // The name of the project. For more information, see [CreateProject](https://help.aliyun.com/document_detail/478153.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The custom tags, which can be used to search for and filter asynchronous tasks.
    std::shared_ptr<string> tagsShrink_ = nullptr;
    // The ID of the destination clustering group.
    // 
    // This parameter is required.
    std::shared_ptr<string> to_ = nullptr;
    // The custom data, which is returned in an asynchronous notification and facilitates notification management. The maximum length is 2,048 bytes.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
